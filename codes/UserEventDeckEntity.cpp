void __fastcall UserEventDeckEntity___ctor(UserEventDeckEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FAB5C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FAB5C = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserEventDeckEntity___ctor_26566304(
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  DeckServant_o *v21; // x23
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct DeckServant_o **p_deckInfo; // x0
  System_Int32_array **v29; // x1
  BalanceConfig_c *v30; // x0
  int32_t DeckMemberMax; // w21
  DeckServant_o *v32; // x22

  if ( (byte_40FAB5D & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, userId);
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, v15);
    sub_B16FFC(&DeckServant_TypeInfo, v16);
    byte_40FAB5D = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  this->fields.eventId = eventId;
  this->fields.deckNo = deckNo;
  if ( waveNum < 1 || memberNum < 1 )
  {
    v30 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v30 = BalanceConfig_TypeInfo;
    }
    DeckMemberMax = v30->static_fields->DeckMemberMax;
    v32 = (DeckServant_o *)sub_B170CC(DeckServant_TypeInfo, v17, v18, v19, v20);
    DeckServant___ctor_16648360(v32, DeckMemberMax, userEquipId, 0LL);
    this->fields.deckInfo = v32;
    p_deckInfo = &this->fields.deckInfo;
    v29 = (System_Int32_array **)v32;
  }
  else
  {
    v21 = (DeckServant_o *)sub_B170CC(DeckServant_TypeInfo, v17, v18, v19, v20);
    DeckServant___ctor_16649072(v21, waveNum, memberNum, userEquipId, 0LL);
    this->fields.deckInfo = v21;
    p_deckInfo = &this->fields.deckInfo;
    v29 = (System_Int32_array **)v21;
  }
  sub_B16F98((BattleServantConfConponent_o *)p_deckInfo, v29, v22, v23, v24, v25, v26, v27);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventDeckEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t deckNo,
        const MethodInfo *method)
{
  if ( (byte_40FAB5E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, *(_QWORD *)&eventId);
    byte_40FAB5E = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           deckNo,
           (const MethodInfo_18C2718 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
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

  if ( (byte_40FAB5F & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&menber);
    sub_B16FFC(&long___TypeInfo, v5);
    byte_40FAB5F = 1;
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
  return (System_Int64_array *)sub_B17014(long___TypeInfo, (unsigned int)v8->static_fields->SvtEquipMax, method);
}


System_Int64_array *__fastcall UserEventDeckEntity__GetEquipList_26566936(
        UserEventDeckEntity_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v8; // x0

  if ( (byte_40FAB60 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, userSvtId);
    sub_B16FFC(&long___TypeInfo, v5);
    byte_40FAB60 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList_16651320(deckInfo, userSvtId, 0LL);
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_B17014(long___TypeInfo, (unsigned int)v8->static_fields->SvtEquipMax, method);
}


int32_t __fastcall UserEventDeckEntity__GetFollowerIndex(UserEventDeckEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UserEventDeckEntity_o *v3; // x19
  struct DeckServant_o *deckInfo; // x8
  __int64 v5; // x20
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  DeckServantData_o *v8; // x22
  int id; // w23

  v3 = this;
  if ( (byte_40FAB63 & 1) == 0 )
  {
    this = (UserEventDeckEntity_o *)sub_B16FFC(&BalanceConfig_TypeInfo, method);
    byte_40FAB63 = 1;
  }
  deckInfo = v3->fields.deckInfo;
  if ( !deckInfo )
LABEL_16:
    sub_B170D4();
  v5 = 0LL;
  while ( 1 )
  {
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_16;
    max_length = svts->max_length;
    if ( (int)v5 >= max_length )
      return 0;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v8 = svts->m_Items[v5];
    if ( !v8 )
      goto LABEL_16;
    id = v8->fields.id;
    if ( id >= 1 )
    {
      this = (UserEventDeckEntity_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (UserEventDeckEntity_o *)BalanceConfig_TypeInfo;
      }
      if ( id <= *(_DWORD *)(*(_QWORD *)&this[4].fields.eventId + 156LL) && v8->fields.isFollowerSvt )
        return v8->fields.id;
    }
    deckInfo = v3->fields.deckInfo;
    ++v5;
    if ( !deckInfo )
      goto LABEL_16;
  }
}


System_Collections_Generic_List_int__o *__fastcall UserEventDeckEntity__GetFollowerIndexList(
        UserEventDeckEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x19
  BalanceConfig_c *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x20
  int max_length; // w8
  unsigned int v16; // w21
  DeckServantData_o *v17; // x24
  int id; // w25

  if ( (byte_40FAB64 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_40FAB64 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   method,
                                                   v2,
                                                   v3,
                                                   v4);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_19;
  svts = deckInfo->fields.svts;
  if ( !svts )
    goto LABEL_19;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
      {
        sub_B17100(v10, v11, v12);
        sub_B170A0();
      }
      v17 = svts->m_Items[v16];
      if ( !v17 )
        break;
      id = v17->fields.id;
      if ( id >= 1 )
      {
        v10 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v10 = BalanceConfig_TypeInfo;
        }
        if ( id <= v10->static_fields->DeckMemberMax && v17->fields.isFollowerSvt )
        {
          if ( !v9 )
            break;
          System_Collections_Generic_List_int___Add(
            v9,
            v17->fields.id,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      max_length = svts->max_length;
      if ( (int)++v16 >= max_length )
        return v9;
    }
LABEL_19:
    sub_B170D4();
  }
  return v9;
}


System_Int64_array *__fastcall UserEventDeckEntity__GetNpcServantFollowerIds(
        UserEventDeckEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_long__o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x20
  int max_length; // w8
  unsigned int v16; // w21
  DeckServantData_o *v17; // x8

  if ( (byte_40FAB62 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v8);
    byte_40FAB62 = 1;
  }
  v9 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                    System_Collections_Generic_List_long__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_13;
  svts = deckInfo->fields.svts;
  if ( !svts )
    goto LABEL_13;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
      {
        sub_B17100(v10, v11, v12);
        sub_B170A0();
      }
      v17 = svts->m_Items[v16];
      if ( !v17 || !v9 )
        break;
      System_Collections_Generic_List_long___Add(
        v9,
        v17->fields.npcFollowerSvtId,
        (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
      max_length = svts->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_11;
    }
LABEL_13:
    sub_B170D4();
  }
LABEL_11:
  if ( !v9 )
    goto LABEL_13;
  return System_Collections_Generic_List_long___ToArray(
           v9,
           (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
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
  WebViewManager_o *Instance; // x0
  __int64 v10; // x2
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x21
  BalanceConfig_c *v12; // x8
  BalanceConfig_c *v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x25
  int max_length; // w8
  UserServantEntity_array *v19; // x22
  int i; // w26
  DeckServantData_o *v21; // x23
  int id; // w20
  int v23; // w27
  struct DeckServant_o *v24; // x8
  struct DeckWaveServantData_array *waveSvts; // x24
  int v26; // w8
  unsigned int v27; // w20
  DeckWaveServantData_o *v28; // x8
  BalanceConfig_c *v29; // x0
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x23
  Il2CppClass **v36; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FAB61 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&wave);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&UserServantEntity___TypeInfo, v8);
    byte_40FAB61 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v12 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  v13 = (BalanceConfig_c *)sub_B17014(
                             UserServantEntity___TypeInfo,
                             (unsigned int)v12->static_fields->DeckMemberMax,
                             v10);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo || (svts = deckInfo->fields.svts) == 0LL )
LABEL_44:
    sub_B170D4();
  max_length = svts->max_length;
  v19 = (UserServantEntity_array *)v13;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
LABEL_45:
        sub_B17100(v13, v14, v15);
        sub_B170A0();
      }
      v21 = svts->m_Items[i];
      if ( !v21 )
        goto LABEL_44;
      id = v21->fields.id;
      if ( id >= 1 )
      {
        if ( wave )
          goto LABEL_19;
        v13 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v13 = BalanceConfig_TypeInfo;
        }
        if ( id <= v13->static_fields->DeckMemberMax )
        {
LABEL_19:
          if ( v21->fields.userSvtId >= 1 )
          {
            v23 = v21->fields.id - 1;
            if ( wave >= 1 )
            {
              v24 = this->fields.deckInfo;
              if ( !v24 )
                goto LABEL_44;
              waveSvts = v24->fields.waveSvts;
              if ( !waveSvts )
                goto LABEL_44;
              v26 = waveSvts->max_length;
              if ( v26 < 1 )
                goto LABEL_42;
              v27 = 0;
              while ( 1 )
              {
                if ( v27 >= v26 )
                  goto LABEL_45;
                v28 = waveSvts->m_Items[v27];
                if ( !v28 )
                  goto LABEL_44;
                if ( v28->fields.wave == wave )
                {
                  v13 = (BalanceConfig_c *)System_Linq_Enumerable__Contains_int_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v28->fields.uniqueIds,
                                             v21->fields.id,
                                             (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
                  if ( ((unsigned __int8)v13 & 1) != 0 )
                    break;
                }
                v26 = waveSvts->max_length;
                if ( (int)++v27 >= v26 )
                  goto LABEL_42;
              }
              v29 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v29 = BalanceConfig_TypeInfo;
              }
              v23 %= v29->static_fields->DeckMainMemberMax;
            }
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_44;
            v13 = (BalanceConfig_c *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                       MasterData_WarQuestSelectionMaster,
                                       &entity,
                                       v21->fields.userSvtId,
                                       (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
            if ( ((unsigned __int8)v13 & 1) != 0 )
            {
              if ( !v19 )
                goto LABEL_44;
              v35 = (System_Int32_array **)entity;
              if ( entity )
              {
                v13 = (BalanceConfig_c *)sub_B170BC(entity, v19->obj.klass->_1.element_class);
                if ( !v13 )
                {
                  sub_B170F4(0LL);
                  sub_B170A0();
                }
              }
              if ( v23 >= v19->max_length )
                goto LABEL_45;
              v36 = &v19->obj.klass + v23;
              v36[4] = (Il2CppClass *)v35;
              sub_B16F98((BattleServantConfConponent_o *)(v36 + 4), v35, v15, v30, v31, v32, v33, v34);
            }
          }
        }
      }
LABEL_42:
      max_length = svts->max_length;
    }
  }
  return v19;
}


bool __fastcall UserEventDeckEntity__IsEquip(UserEventDeckEntity_o *this, int64_t userSvtId, const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0

  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    LOBYTE(deckInfo) = DeckServant__IsEquip(deckInfo, userSvtId, 0LL);
  return (char)deckInfo;
}