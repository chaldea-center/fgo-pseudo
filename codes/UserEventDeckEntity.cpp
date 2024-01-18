void __fastcall UserEventDeckEntity___ctor(UserEventDeckEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188B3A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4188B3A = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserEventDeckEntity___ctor_27003412(
        UserEventDeckEntity_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t deckNo,
        int64_t userEquipId,
        int32_t waveNum,
        int32_t memberNum,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  DeckServant_o *v17; // x23
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct DeckServant_o **p_deckInfo; // x0
  System_Int32_array **v25; // x1
  BalanceConfig_c *v26; // x0
  int32_t DeckMemberMax; // w21
  DeckServant_o *v28; // x22

  if ( (byte_4188B3B & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, userId);
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, v15);
    sub_B2C35C(&DeckServant_TypeInfo, v16);
    byte_4188B3B = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  this->fields.eventId = eventId;
  this->fields.deckNo = deckNo;
  if ( waveNum < 1 || memberNum < 1 )
  {
    v26 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v26 = BalanceConfig_TypeInfo;
    }
    DeckMemberMax = v26->static_fields->DeckMemberMax;
    v28 = (DeckServant_o *)sub_B2C42C(DeckServant_TypeInfo);
    DeckServant___ctor_16762468(v28, DeckMemberMax, userEquipId, 0LL);
    this->fields.deckInfo = v28;
    p_deckInfo = &this->fields.deckInfo;
    v25 = (System_Int32_array **)v28;
  }
  else
  {
    v17 = (DeckServant_o *)sub_B2C42C(DeckServant_TypeInfo);
    DeckServant___ctor_16763180(v17, waveNum, memberNum, userEquipId, 0LL);
    this->fields.deckInfo = v17;
    p_deckInfo = &this->fields.deckInfo;
    v25 = (System_Int32_array **)v17;
  }
  sub_B2C2F8((BattleServantConfConponent_o *)p_deckInfo, v25, v18, v19, v20, v21, v22, v23);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventDeckEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t deckNo,
        const MethodInfo *method)
{
  if ( (byte_4188B3C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, *(_QWORD *)&eventId);
    byte_4188B3C = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           deckNo,
           (const MethodInfo_1732E80 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserEventDeckEntity__CreatePrimaryKey(
        UserEventDeckEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventDeckEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.deckNo, v2);
}


// local variable allocation has failed, the output may be wrong!
System_Int64_array *__fastcall UserEventDeckEntity__GetEquipList(
        UserEventDeckEntity_o *this,
        int32_t menber,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v8; // x0

  if ( (byte_4188B3D & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&menber);
    sub_B2C35C(&long___TypeInfo, v5);
    byte_4188B3D = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList(deckInfo, menber, 0LL);
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_B2C374(long___TypeInfo, (unsigned int)v8->static_fields->SvtEquipMax);
}


System_Int64_array *__fastcall UserEventDeckEntity__GetEquipList_27004044(
        UserEventDeckEntity_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v8; // x0

  if ( (byte_4188B3E & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, userSvtId);
    sub_B2C35C(&long___TypeInfo, v5);
    byte_4188B3E = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList_16765428(deckInfo, userSvtId, 0LL);
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_B2C374(long___TypeInfo, (unsigned int)v8->static_fields->SvtEquipMax);
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
  if ( (byte_4188B41 & 1) == 0 )
  {
    this = (UserEventDeckEntity_o *)sub_B2C35C(&BalanceConfig_TypeInfo, method);
    byte_4188B41 = 1;
  }
  deckInfo = v2->fields.deckInfo;
  if ( !deckInfo )
LABEL_16:
    sub_B2C434(this, method);
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
      v10 = sub_B2C460(this);
      sub_B2C400(v10, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *v6; // x19
  BalanceConfig_c *v7; // x0
  __int64 v8; // x1
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x20
  int max_length; // w8
  unsigned int v12; // w21
  DeckServantData_o *v13; // x24
  int id; // w25
  __int64 v16; // x0

  if ( (byte_4188B42 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_4188B42 = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_19;
  svts = deckInfo->fields.svts;
  if ( !svts )
    goto LABEL_19;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
      {
        v16 = sub_B2C460(v7);
        sub_B2C400(v16, 0LL);
      }
      v13 = svts->m_Items[v12];
      if ( !v13 )
        break;
      id = v13->fields.id;
      if ( id >= 1 )
      {
        v7 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v7 = BalanceConfig_TypeInfo;
        }
        if ( id <= v7->static_fields->DeckMemberMax && v13->fields.isFollowerSvt )
        {
          if ( !v6 )
            break;
          System_Collections_Generic_List_int___Add(
            v6,
            v13->fields.id,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      max_length = svts->max_length;
      if ( (int)++v12 >= max_length )
        return v6;
    }
LABEL_19:
    sub_B2C434(v7, v8);
  }
  return v6;
}


System_Int64_array *__fastcall UserEventDeckEntity__GetNpcServantFollowerIds(
        UserEventDeckEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_long__o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x20
  int max_length; // w8
  unsigned int v12; // w21
  DeckServantData_o *v13; // x8
  __int64 v15; // x0

  if ( (byte_4188B40 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v5);
    byte_4188B40 = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_13;
  svts = deckInfo->fields.svts;
  if ( !svts )
    goto LABEL_13;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
      {
        v15 = sub_B2C460(v7);
        sub_B2C400(v15, 0LL);
      }
      v13 = svts->m_Items[v12];
      if ( !v13 || !v6 )
        break;
      System_Collections_Generic_List_long___Add(
        v6,
        v13->fields.npcFollowerSvtId,
        (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
      max_length = svts->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_11;
    }
LABEL_13:
    sub_B2C434(v7, v8);
  }
LABEL_11:
  if ( !v6 )
    goto LABEL_13;
  return System_Collections_Generic_List_long___ToArray(
           v6,
           (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
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


// local variable allocation has failed, the output may be wrong!
UserServantEntity_array *__fastcall UserEventDeckEntity__GetUserServantList(
        UserEventDeckEntity_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 Instance; // x0
  __int64 v10; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x21
  BalanceConfig_c *v12; // x8
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x25
  int max_length; // w8
  UserServantEntity_array *v16; // x22
  int i; // w26
  DeckServantData_o *v18; // x23
  int id; // w20
  int v20; // w27
  struct DeckServant_o *v21; // x8
  struct DeckWaveServantData_array *waveSvts; // x24
  int v23; // w8
  unsigned int v24; // w20
  DeckWaveServantData_o *v25; // x8
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x23
  Il2CppClass **v33; // x0
  __int64 v35; // x0
  __int64 v36; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4188B3F & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&wave);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&UserServantEntity___TypeInfo, v8);
    byte_4188B3F = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  v12 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  Instance = sub_B2C374(UserServantEntity___TypeInfo, (unsigned int)v12->static_fields->DeckMemberMax);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo || (svts = deckInfo->fields.svts) == 0LL )
LABEL_44:
    sub_B2C434(Instance, v10);
  max_length = svts->max_length;
  v16 = (UserServantEntity_array *)Instance;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
LABEL_45:
        v35 = sub_B2C460(Instance);
        sub_B2C400(v35, 0LL);
      }
      v18 = svts->m_Items[i];
      if ( !v18 )
        goto LABEL_44;
      id = v18->fields.id;
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
          if ( v18->fields.userSvtId >= 1 )
          {
            v20 = v18->fields.id - 1;
            if ( wave >= 1 )
            {
              v21 = this->fields.deckInfo;
              if ( !v21 )
                goto LABEL_44;
              waveSvts = v21->fields.waveSvts;
              if ( !waveSvts )
                goto LABEL_44;
              v23 = waveSvts->max_length;
              if ( v23 < 1 )
                goto LABEL_42;
              v24 = 0;
              while ( 1 )
              {
                if ( v24 >= v23 )
                  goto LABEL_45;
                v25 = waveSvts->m_Items[v24];
                if ( !v25 )
                  goto LABEL_44;
                if ( v25->fields.wave == wave )
                {
                  Instance = System_Linq_Enumerable__Contains_int_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)v25->fields.uniqueIds,
                               v18->fields.id,
                               (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
                  if ( (Instance & 1) != 0 )
                    break;
                }
                v23 = waveSvts->max_length;
                if ( (int)++v24 >= v23 )
                  goto LABEL_42;
              }
              Instance = (__int64)BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                Instance = (__int64)BalanceConfig_TypeInfo;
              }
              v20 %= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 160LL);
            }
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_44;
            Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                         MasterData_WarQuestSelectionMaster,
                         &entity,
                         v18->fields.userSvtId,
                         (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              if ( !v16 )
                goto LABEL_44;
              v32 = (System_Int32_array **)entity;
              if ( entity )
              {
                Instance = sub_B2C41C(entity, v16->obj.klass->_1.element_class);
                if ( !Instance )
                {
                  v36 = sub_B2C454(0LL);
                  sub_B2C400(v36, 0LL);
                }
              }
              if ( v20 >= v16->max_length )
                goto LABEL_45;
              v33 = &v16->obj.klass + v20;
              v33[4] = (Il2CppClass *)v32;
              sub_B2C2F8((BattleServantConfConponent_o *)(v33 + 4), v32, v26, v27, v28, v29, v30, v31);
            }
          }
        }
      }
LABEL_42:
      max_length = svts->max_length;
    }
  }
  return v16;
}


bool __fastcall UserEventDeckEntity__IsEquip(UserEventDeckEntity_o *this, int64_t userSvtId, const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0

  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    LOBYTE(deckInfo) = DeckServant__IsEquip(deckInfo, userSvtId, 0LL);
  return (char)deckInfo;
}