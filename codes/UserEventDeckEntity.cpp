void __fastcall UserEventDeckEntity___ctor(UserEventDeckEntity_o *this, const MethodInfo *method)
{
  if ( (byte_43533D1 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_string___ctor__);
    byte_43533D1 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21C038C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserEventDeckEntity___ctor_27944288(
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

  if ( (byte_43533D2 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataEntityBase_string___ctor__);
    sub_B70694(&DeckServant_TypeInfo);
    byte_43533D2 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21C038C *)Method_DataEntityBase_string___ctor__);
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
    v26 = (DeckServant_o *)sub_B70764(DeckServant_TypeInfo);
    DeckServant___ctor_16957836(v26, DeckMemberMax, userEquipId, 0LL);
    this->fields.deckInfo = v26;
    p_deckInfo = &this->fields.deckInfo;
    v23 = (System_Int32_array **)v26;
  }
  else
  {
    v15 = (DeckServant_o *)sub_B70764(DeckServant_TypeInfo);
    DeckServant___ctor_16958604(v15, waveNum, memberNum, userEquipId, 0LL);
    this->fields.deckInfo = v15;
    p_deckInfo = &this->fields.deckInfo;
    v23 = (System_Int32_array **)v15;
  }
  sub_B70630((BattleServantConfConponent_o *)p_deckInfo, v23, v16, v17, v18, v19, v20, v21);
}


System_String_o *__fastcall UserEventDeckEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t deckNo,
        const MethodInfo *method)
{
  if ( (byte_43533D3 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_43533D3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           deckNo,
           (const MethodInfo_1CA2A34 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
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

  if ( (byte_43533D4 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&long___TypeInfo);
    byte_43533D4 = 1;
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
  return (System_Int64_array *)sub_B706AC(long___TypeInfo, (unsigned int)v7->static_fields->SvtEquipMax);
}


System_Int64_array *__fastcall UserEventDeckEntity__GetEquipList_27944920(
        UserEventDeckEntity_o *this,
        int64_t userSvtId,
        bool isInterruption,
        const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0
  BalanceConfig_c *v9; // x0

  if ( (byte_43533D5 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&long___TypeInfo);
    byte_43533D5 = 1;
  }
  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    return DeckServant__GetEquipList_16960852(deckInfo, userSvtId, isInterruption, 0LL);
  v9 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_B706AC(long___TypeInfo, (unsigned int)v9->static_fields->SvtEquipMax);
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
  if ( (byte_43533D8 & 1) == 0 )
  {
    this = (UserEventDeckEntity_o *)sub_B70694(&BalanceConfig_TypeInfo);
    byte_43533D8 = 1;
  }
  deckInfo = v2->fields.deckInfo;
  if ( !deckInfo )
LABEL_17:
    sub_B7076C(this, method);
  v4 = 0LL;
  while ( 1 )
  {
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_17;
    max_length = svts->max_length;
    if ( (int)v4 >= max_length )
      return 0;
    if ( (unsigned int)v4 >= max_length )
    {
      v10 = sub_B70798(this);
      sub_B70738(v10, 0LL);
    }
    v7 = svts->m_Items[v4];
    if ( !v7 )
      goto LABEL_17;
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
      if ( id <= *(_DWORD *)(*(_QWORD *)&this[4].fields.eventId + 156LL)
        && v7->fields.isFollowerSvt
        && !v7->fields.npcFollowerSvtId )
      {
        return v7->fields.id;
      }
    }
    deckInfo = v2->fields.deckInfo;
    ++v4;
    if ( !deckInfo )
      goto LABEL_17;
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

  if ( (byte_43533D9 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    byte_43533D9 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
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
        v13 = sub_B70798(v4);
        sub_B70738(v13, 0LL);
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
            (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      max_length = svts->max_length;
      if ( (int)++v9 >= max_length )
        return v3;
    }
LABEL_19:
    sub_B7076C(v4, v5);
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

  if ( (byte_43533D7 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_long__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B70694(&System_Collections_Generic_List_long__TypeInfo);
    byte_43533D7 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
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
        v12 = sub_B70798(v4);
        sub_B70738(v12, 0LL);
      }
      v10 = svts->m_Items[v9];
      if ( !v10 || !v3 )
        break;
      System_Collections_Generic_List_long___Add(
        v3,
        v10->fields.npcFollowerSvtId,
        (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__);
      max_length = svts->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_11;
    }
LABEL_13:
    sub_B7076C(v4, v5);
  }
LABEL_11:
  if ( !v3 )
    goto LABEL_13;
  return System_Collections_Generic_List_long___ToArray(
           v3,
           (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__);
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
        bool isInterruption,
        const MethodInfo *method)
{
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x22
  WarQuestSelectionMaster_o *v6; // x19
  BalanceConfig_c *v7; // x8
  __int64 v8; // x0
  __int64 v9; // x1
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x28
  int max_length; // w8
  UserServantEntity_array *v13; // x24
  int i; // w19
  DeckServantData_o *v15; // x21
  int id; // w25
  int v17; // w27
  struct DeckServant_o *v18; // x8
  struct DeckWaveServantData_array *waveSvts; // x25
  int v20; // w8
  unsigned int v21; // w26
  DeckWaveServantData_o *v22; // x8
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x25
  Il2CppClass **v30; // x0
  int64_t UserId; // x2
  UserServantCollectionEntity_o *v32; // x26
  __int64 v33; // x25
  int64_t userSvtId; // x26
  __int128 v35; // q1
  __int64 v37; // x0
  __int64 v38; // x0
  UserServantCollectionMaster_o *v39; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+40h] [xbp-80h]
  UserServantCollectionEntity_o *v44; // [xsp+60h] [xbp-60h] BYREF
  UserServantEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_43533D6 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B70694(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&UserServantEntity___TypeInfo);
    sub_B70694(&UserServantEntity_TypeInfo);
    byte_43533D6 = 1;
  }
  entity = 0LL;
  v44 = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserServantMaster___);
  v6 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = sub_B706AC(UserServantEntity___TypeInfo, (unsigned int)v7->static_fields->DeckMemberMax);
  deckInfo = this->fields.deckInfo;
  if ( !deckInfo || (svts = deckInfo->fields.svts, v39 = (UserServantCollectionMaster_o *)v6, !svts) )
LABEL_58:
    sub_B7076C(v8, v9);
  max_length = svts->max_length;
  v13 = (UserServantEntity_array *)v8;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
LABEL_59:
        v37 = sub_B70798(v8);
        sub_B70738(v37, 0LL);
      }
      v15 = svts->m_Items[i];
      if ( !v15 )
        goto LABEL_58;
      id = v15->fields.id;
      if ( id >= 1 )
      {
        if ( wave )
          goto LABEL_21;
        v8 = (__int64)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v8 = (__int64)BalanceConfig_TypeInfo;
        }
        if ( id <= *(_DWORD *)(*(_QWORD *)(v8 + 184) + 156LL) )
        {
LABEL_21:
          if ( v15->fields.userSvtId >= 1 )
          {
            v17 = v15->fields.id - 1;
            if ( wave >= 1 )
            {
              v18 = this->fields.deckInfo;
              if ( !v18 )
                goto LABEL_58;
              waveSvts = v18->fields.waveSvts;
              if ( !waveSvts )
                goto LABEL_58;
              v20 = waveSvts->max_length;
              if ( v20 < 1 )
                goto LABEL_56;
              v21 = 0;
              while ( 1 )
              {
                if ( v21 >= v20 )
                  goto LABEL_59;
                v22 = waveSvts->m_Items[v21];
                if ( !v22 )
                  goto LABEL_58;
                if ( v22->fields.wave == wave )
                {
                  v8 = System_Linq_Enumerable__Contains_int_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)v22->fields.uniqueIds,
                         v15->fields.id,
                         (const MethodInfo_1CB57D0 *)Method_System_Linq_Enumerable_Contains_int___);
                  if ( (v8 & 1) != 0 )
                    break;
                }
                v20 = waveSvts->max_length;
                if ( (int)++v21 >= v20 )
                  goto LABEL_56;
              }
              v8 = (__int64)BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v8 = (__int64)BalanceConfig_TypeInfo;
              }
              v17 %= *(_DWORD *)(*(_QWORD *)(v8 + 184) + 160LL);
            }
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_58;
            v8 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                   Master_WarQuestSelectionMaster,
                   &entity,
                   v15->fields.userSvtId,
                   (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
            if ( (v8 & 1) != 0 )
            {
              if ( !v13 )
                goto LABEL_58;
LABEL_40:
              v29 = (System_Int32_array **)entity;
              if ( entity )
              {
                v8 = sub_B70754(entity, v13->obj.klass->_1.element_class);
                if ( !v8 )
                {
                  v38 = sub_B7078C(0LL);
                  sub_B70738(v38, 0LL);
                }
              }
              if ( v17 >= v13->max_length )
                goto LABEL_59;
              v30 = &v13->obj.klass + v17;
              v30[4] = (Il2CppClass *)v29;
              sub_B70630((BattleServantConfConponent_o *)(v30 + 4), v29, v23, v24, v25, v26, v27, v28);
              goto LABEL_56;
            }
            if ( isInterruption )
            {
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              UserId = NetworkManager__get_UserId(0LL);
              v8 = (__int64)v39;
              if ( !v39 )
                goto LABEL_58;
              v8 = UserServantCollectionMaster__TryGetEntity(v39, &v44, UserId, v15->fields.svtId, 0LL);
              if ( (v8 & 1) != 0 )
              {
                v32 = v44;
                v33 = sub_B70764(UserServantEntity_TypeInfo);
                UserServantEntity___ctor_21610796((UserServantEntity_o *)v33, v32, 0LL);
                entity = (UserServantEntity_o *)v33;
                userSvtId = v15->fields.userSvtId;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                }
                v8 = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v42, userSvtId, 0LL);
                v43 = v42;
                if ( !v33 )
                  goto LABEL_58;
                v35 = *(_OWORD *)&v43.fields.fakeValue;
                *(_OWORD *)(v33 + 16) = *(_OWORD *)&v43.fields.currentCryptoKey;
                *(_OWORD *)(v33 + 32) = v35;
                if ( !v13 )
                  goto LABEL_58;
                goto LABEL_40;
              }
            }
          }
        }
      }
LABEL_56:
      max_length = svts->max_length;
    }
  }
  return v13;
}


bool __fastcall UserEventDeckEntity__IsEquip(UserEventDeckEntity_o *this, int64_t userSvtId, const MethodInfo *method)
{
  DeckServant_o *deckInfo; // x0

  deckInfo = this->fields.deckInfo;
  if ( deckInfo )
    LOBYTE(deckInfo) = DeckServant__IsEquip(deckInfo, userSvtId, 0LL);
  return (char)deckInfo;
}