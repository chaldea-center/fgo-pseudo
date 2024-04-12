void __fastcall UserEventDeckEntity___ctor(UserEventDeckEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B1527 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B1527 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserEventDeckEntity___ctor_27455072(
        UserEventDeckEntity_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t deckNo,
        int64_t userEquipId,
        int32_t waveNum,
        int32_t memberNum,
        const MethodInfo *method)
{
  DeckServant_o *v15; // x23
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct DeckServant_o **p_deckInfo; // x0
  System_Int32_array **v23; // x1
  BalanceConfig_c *v24; // x0
  int32_t DeckMemberMax; // w21
  DeckServant_o *v26; // x22

  if ( (byte_42B1528 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    sub_B52984(&DeckServant_TypeInfo);
    byte_42B1528 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  this->fields.eventId = eventId;
  this->fields.deckNo = deckNo;
  if ( waveNum < 1 || memberNum < 1 )
  {
    v24 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    DeckMemberMax = v24->static_fields->DeckMemberMax;
    v26 = (DeckServant_o *)sub_B52A54(DeckServant_TypeInfo);
    DeckServant___ctor_16909640(v26, DeckMemberMax, userEquipId, 0LL);
    this->fields.deckInfo = v26;
    p_deckInfo = &this->fields.deckInfo;
    v23 = (System_Int32_array **)v26;
  }
  else
  {
    v15 = (DeckServant_o *)sub_B52A54(DeckServant_TypeInfo);
    DeckServant___ctor_16910352(v15, waveNum, memberNum, userEquipId, 0LL);
    this->fields.deckInfo = v15;
    p_deckInfo = &this->fields.deckInfo;
    v23 = (System_Int32_array **)v15;
  }
  sub_B52920((BattleServantConfConponent_o *)p_deckInfo, v23, v16, v17, v18, v19, v20, v21);
}


System_String_o *__fastcall UserEventDeckEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t deckNo,
        const MethodInfo *method)
{
  if ( (byte_42B1529 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_42B1529 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           deckNo,
           (const MethodInfo_1A4E618 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserEventDeckEntity__CreatePrimaryKey(
        UserEventDeckEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventDeckEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.deckNo, v2);
}


System_Int64_array *__fastcall UserEventDeckEntity__GetEquipList(
        UserEventDeckEntity_o *this,
        int32_t menber,
        const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v7; // x0

  if ( (byte_42B152A & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&long___TypeInfo);
    byte_42B152A = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList(deckInfo, menber, 0LL);
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_B5299C(long___TypeInfo, (unsigned int)v7->static_fields->SvtEquipMax);
}


System_Int64_array *__fastcall UserEventDeckEntity__GetEquipList_27455704(
        UserEventDeckEntity_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v7; // x0

  if ( (byte_42B152B & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&long___TypeInfo);
    byte_42B152B = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList_16912600(deckInfo, userSvtId, 0LL);
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_B5299C(long___TypeInfo, (unsigned int)v7->static_fields->SvtEquipMax);
}


int32_t __fastcall UserEventDeckEntity__GetFollowerIndex(UserEventDeckEntity_o *this, const MethodInfo *method)
{
  UserEventDeckEntity_o *v2; // x19
  struct DeckServant_o *deckInfo; // x8
  __int64 v4; // x20
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  DeckServantData_o *v7; // x22
  int id; // w23
  __int64 v10; // x0

  v2 = this;
  if ( (byte_42B152E & 1) == 0 )
  {
    this = (UserEventDeckEntity_o *)sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B152E = 1;
  }
  deckInfo = v2->fields.deckInfo;
  if ( !deckInfo )
LABEL_16:
    sub_B52A5C(this, method);
  v4 = 0LL;
  while ( 1 )
  {
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_16;
    max_length = svts->max_length;
    if ( (int)v4 >= max_length )
      return 0;
    if ( (unsigned int)v4 >= max_length )
    {
      v10 = sub_B52A88(this);
      sub_B52A28(v10, 0LL);
    }
    v7 = svts->m_Items[v4];
    if ( !v7 )
      goto LABEL_16;
    id = v7->fields.id;
    if ( id >= 1 )
    {
      this = (UserEventDeckEntity_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (UserEventDeckEntity_o *)BalanceConfig_TypeInfo;
      }
      if ( id <= *(_DWORD *)(*(_QWORD *)&this[4].fields.eventId + 156LL) && v7->fields.isFollowerSvt )
        return v7->fields.id;
    }
    deckInfo = v2->fields.deckInfo;
    ++v4;
    if ( !deckInfo )
      goto LABEL_16;
  }
}


System_Collections_Generic_List_int__o *__fastcall UserEventDeckEntity__GetFollowerIndexList(
        UserEventDeckEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x20
  int max_length; // w8
  unsigned int v9; // w21
  DeckServantData_o *v10; // x24
  int id; // w25
  __int64 v13; // x0

  if ( (byte_42B152F & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42B152F = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_19;
  svts = deckInfo->fields.svts;
  if ( !svts )
    goto LABEL_19;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        v13 = sub_B52A88(v4);
        sub_B52A28(v13, 0LL);
      }
      v10 = svts->m_Items[v9];
      if ( !v10 )
        break;
      id = v10->fields.id;
      if ( id >= 1 )
      {
        v4 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v4 = BalanceConfig_TypeInfo;
        }
        if ( id <= v4->static_fields->DeckMemberMax && v10->fields.isFollowerSvt )
        {
          if ( !v3 )
            break;
          System_Collections_Generic_List_int___Add(
            v3,
            v10->fields.id,
            (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      max_length = svts->max_length;
      if ( (int)++v9 >= max_length )
        return v3;
    }
LABEL_19:
    sub_B52A5C(v4, v5);
  }
  return v3;
}


System_Int64_array *__fastcall UserEventDeckEntity__GetNpcServantFollowerIds(
        UserEventDeckEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x20
  int max_length; // w8
  unsigned int v9; // w21
  DeckServantData_o *v10; // x8
  __int64 v12; // x0

  if ( (byte_42B152D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    byte_42B152D = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_13;
  svts = deckInfo->fields.svts;
  if ( !svts )
    goto LABEL_13;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        v12 = sub_B52A88(v4);
        sub_B52A28(v12, 0LL);
      }
      v10 = svts->m_Items[v9];
      if ( !v10 || !v3 )
        break;
      System_Collections_Generic_List_long___Add(
        v3,
        v10->fields.npcFollowerSvtId,
        (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
      max_length = svts->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_11;
    }
LABEL_13:
    sub_B52A5C(v4, v5);
  }
LABEL_11:
  if ( !v3 )
    goto LABEL_13;
  return System_Collections_Generic_List_long___ToArray(
           v3,
           (const MethodInfo_2FE3ED8 *)Method_System_Collections_Generic_List_long__ToArray__);
}


UserServantEntity_o *__fastcall UserEventDeckEntity__GetUserServant(
        UserEventDeckEntity_o *this,
        int32_t menber,
        const MethodInfo *method)
{
  UserServantEntity_o *result; // x0

  result = (UserServantEntity_o *)this->fields.deckInfo;
  if ( result )
    return DeckServant__GetUserServant((DeckServant_o *)result, menber, 0LL);
  return result;
}


UserServantEntity_array *__fastcall UserEventDeckEntity__GetUserServantList(
        UserEventDeckEntity_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v5; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x21
  BalanceConfig_c *v7; // x8
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x25
  int max_length; // w8
  UserServantEntity_array *v11; // x22
  int i; // w26
  DeckServantData_o *v13; // x23
  int id; // w20
  int v15; // w27
  struct DeckServant_o *v16; // x8
  struct DeckWaveServantData_array *waveSvts; // x24
  int v18; // w8
  unsigned int v19; // w20
  DeckWaveServantData_o *v20; // x8
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x23
  Il2CppClass **v28; // x0
  __int64 v30; // x0
  __int64 v31; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42B152C & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B52984(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserServantEntity___TypeInfo);
    byte_42B152C = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  Instance = sub_B5299C(UserServantEntity___TypeInfo, (unsigned int)v7->static_fields->DeckMemberMax);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo || (svts = deckInfo->fields.svts) == 0LL )
LABEL_44:
    sub_B52A5C(Instance, v5);
  max_length = svts->max_length;
  v11 = (UserServantEntity_array *)Instance;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
LABEL_45:
        v30 = sub_B52A88(Instance);
        sub_B52A28(v30, 0LL);
      }
      v13 = svts->m_Items[i];
      if ( !v13 )
        goto LABEL_44;
      id = v13->fields.id;
      if ( id >= 1 )
      {
        if ( wave )
          goto LABEL_19;
        Instance = (__int64)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Instance = (__int64)BalanceConfig_TypeInfo;
        }
        if ( id <= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 156LL) )
        {
LABEL_19:
          if ( v13->fields.userSvtId >= 1 )
          {
            v15 = v13->fields.id - 1;
            if ( wave >= 1 )
            {
              v16 = this->fields.deckInfo;
              if ( !v16 )
                goto LABEL_44;
              waveSvts = v16->fields.waveSvts;
              if ( !waveSvts )
                goto LABEL_44;
              v18 = waveSvts->max_length;
              if ( v18 < 1 )
                goto LABEL_42;
              v19 = 0;
              while ( 1 )
              {
                if ( v19 >= v18 )
                  goto LABEL_45;
                v20 = waveSvts->m_Items[v19];
                if ( !v20 )
                  goto LABEL_44;
                if ( v20->fields.wave == wave )
                {
                  Instance = System_Linq_Enumerable__Contains_int_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)v20->fields.uniqueIds,
                               v13->fields.id,
                               (const MethodInfo_1B5BFB4 *)Method_System_Linq_Enumerable_Contains_int___);
                  if ( (Instance & 1) != 0 )
                    break;
                }
                v18 = waveSvts->max_length;
                if ( (int)++v19 >= v18 )
                  goto LABEL_42;
              }
              Instance = (__int64)BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                Instance = (__int64)BalanceConfig_TypeInfo;
              }
              v15 %= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 160LL);
            }
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_44;
            Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                         MasterData_WarQuestSelectionMaster,
                         &entity,
                         v13->fields.userSvtId,
                         (const MethodInfo_23E255C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              if ( !v11 )
                goto LABEL_44;
              v27 = (System_Int32_array **)entity;
              if ( entity )
              {
                Instance = sub_B52A44(entity, v11->obj.klass->_1.element_class);
                if ( !Instance )
                {
                  v31 = sub_B52A7C(0LL);
                  sub_B52A28(v31, 0LL);
                }
              }
              if ( v15 >= v11->max_length )
                goto LABEL_45;
              v28 = &v11->obj.klass + v15;
              v28[4] = (Il2CppClass *)v27;
              sub_B52920((BattleServantConfConponent_o *)(v28 + 4), v27, v21, v22, v23, v24, v25, v26);
            }
          }
        }
      }
LABEL_42:
      max_length = svts->max_length;
    }
  }
  return v11;
}


bool __fastcall UserEventDeckEntity__IsEquip(UserEventDeckEntity_o *this, int64_t userSvtId, const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0

  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    LOBYTE(deckInfo) = DeckServant__IsEquip(deckInfo, userSvtId, 0LL);
  return (char)deckInfo;
}