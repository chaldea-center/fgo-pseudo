void __fastcall UserServantLeaderMaster___ctor(UserServantLeaderMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B170A2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__, method, v2);
    byte_4B170A2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    146,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantLeaderEntity_o *__fastcall UserServantLeaderMaster__GetEntity(
        UserServantLeaderMaster_o *this,
        int64_t userId,
        int32_t classId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B170A0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__,
      userId,
      *(_QWORD *)&classId);
    byte_4B170A0 = 1;
  }
  PK = (Il2CppObject *)UserServantLeaderEntity__CreatePK(
                         userId,
                         classId,
                         supportDeckId,
                         *(const MethodInfo **)&supportDeckId);
  return (UserServantLeaderEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_31B3198 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantLeaderMaster__TryGetEntity(
        UserServantLeaderMaster_o *this,
        UserServantLeaderEntity_o **entity,
        int64_t userId,
        int32_t classId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B170A1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__,
      entity,
      userId);
    byte_4B170A1 = 1;
  }
  PK = (Il2CppObject *)UserServantLeaderEntity__CreatePK(userId, classId, supportDeckId, *(const MethodInfo **)&classId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__);
}


UserServantLeaderEntity_array *__fastcall UserServantLeaderMaster__getAllSupportDeckList(
        UserServantLeaderMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x20
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  System_Collections_Generic_IEnumerable_T__o *SupportDeck; // x0
  int v17; // w22
  int v18; // w21

  if ( (byte_4B170A4 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo, v11, v12);
    byte_4B170A4 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__);
  SupportDeck = (System_Collections_Generic_IEnumerable_T__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v14);
    SupportDeck = (System_Collections_Generic_IEnumerable_T__o *)BalanceConfig_TypeInfo;
  }
  v17 = *((_DWORD *)SupportDeck[11].monitor + 38);
  if ( v17 >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      SupportDeck = (System_Collections_Generic_IEnumerable_T__o *)UserServantLeaderMaster__getSupportDeck(
                                                                     this,
                                                                     ++v18,
                                                                     v15);
      if ( !v13 )
        break;
      System_Collections_Generic_List_object___AddRange(
        v13,
        SupportDeck,
        (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__);
      if ( v17 == v18 )
        return (UserServantLeaderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v13,
                                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
    }
LABEL_12:
    sub_1BCAA3C(SupportDeck, v14);
  }
  if ( !v13 )
    goto LABEL_12;
  return (UserServantLeaderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v13,
                                            (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
UserServantLeaderEntity_array *__fastcall UserServantLeaderMaster__getSupportDeck(
        UserServantLeaderMaster_o *this,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 Instance; // x0
  EquipTargetInfo_o *v24; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x21
  int32_t Count; // w0
  __int64 v27; // x1
  BalanceConfig_c *v28; // x8
  int v29; // w22
  __int64 v30; // x2
  __int64 v31; // x3
  UserServantLeaderEntity_array *v32; // x23
  __int64 v33; // x29
  unsigned __int64 v34; // x24
  UserServantLeaderEntity_o **m_Items; // x28
  BalanceConfig_c *v36; // x0
  UserServantLeaderEntity_o *v37; // x25
  const MethodInfo *v38; // x3
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int32_t v45; // w24
  __int64 v46; // x25
  __int64 methodPtr_low; // x9
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x4
  __int64 v50; // x2
  __int64 v51; // x8
  __int128 v52; // q0
  __int64 v53; // x8
  __int128 v54; // q0
  System_Int64_array *v55; // x26
  __int64 v56; // x8
  __int64 v58; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+40h] [xbp-90h]
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4B170A3 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&supportDeckId, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&long___TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&UserServantLeaderEntity___TypeInfo, v19, v20);
    sub_1BCA7E0(&UserServantLeaderEntity_TypeInfo, v21, v22);
    byte_4B170A3 = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___),
        !this->fields.list) )
  {
LABEL_52:
    sub_1BCAA3C(Instance, v24);
  }
  v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v28 = BalanceConfig_TypeInfo;
  v29 = Count;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v27);
    v28 = BalanceConfig_TypeInfo;
  }
  v32 = (UserServantLeaderEntity_array *)sub_1BCA888(
                                           UserServantLeaderEntity___TypeInfo,
                                           (unsigned int)v28->static_fields->SupportDeckMemberMax);
  v33 = 0LL;
  v34 = 0LL;
  m_Items = v32->m_Items;
  while ( 1 )
  {
    v36 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v24);
      v36 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v34 >= v36->static_fields->SupportDeckMemberMax )
      break;
    v37 = (UserServantLeaderEntity_o *)sub_1BCAA2C(UserServantLeaderEntity_TypeInfo, v24, v30, v31);
    UserServantLeaderEntity___ctor_40973144(v37, v34, supportDeckId, v38);
    if ( !v32 )
      goto LABEL_52;
    if ( v37 )
    {
      Instance = sub_1BCA91C(v37, v32->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_55;
    }
    if ( v34 >= v32->max_length )
LABEL_53:
      sub_1BCAA44(Instance, v24);
    m_Items[v34] = v37;
    sub_1BCA784((PartyOrganizationUtility_o *)&m_Items[v33], (int64_t)v37, v39, v40, v41, v42, v43, v44);
    ++v34;
    ++v33;
  }
  if ( v29 >= 1 )
  {
    v45 = 0;
    while ( 1 )
    {
      Instance = (__int64)this->fields.list;
      if ( !Instance )
        goto LABEL_52;
      Instance = (__int64)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v45,
                            (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_52;
      v24 = (EquipTargetInfo_o *)UserServantLeaderEntity_TypeInfo;
      v46 = Instance;
      methodPtr_low = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != UserServantLeaderEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(Instance + 48) == supportDeckId )
      {
        v48 = *(const MethodInfo **)(Instance + 56);
        if ( v48 )
        {
          if ( !v25 )
            goto LABEL_52;
          Instance = DataMasterBase_object__object__long___TryGetEntity(
                       v25,
                       &entity,
                       (int64_t)v48,
                       (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( !v32 )
              goto LABEL_52;
            v50 = *(int *)(v46 + 52);
            if ( (unsigned int)v50 >= v32->max_length )
              goto LABEL_53;
            Instance = (__int64)v32->m_Items[v50];
            if ( !Instance )
              goto LABEL_52;
            UserServantLeaderEntity__setUserServantEntity(
              (UserServantLeaderEntity_o *)Instance,
              (UserServantEntity_o *)entity,
              v50,
              supportDeckId,
              v49);
          }
        }
        v51 = *(_QWORD *)(v46 + 32);
        if ( v51 )
        {
          v52 = *(_OWORD *)(v51 + 40);
          *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)(v51 + 24);
          *(_OWORD *)&v61.fields.fakeValue = v52;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
          v60 = v61;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v60, 0LL);
          if ( Instance )
          {
            Instance = sub_1BCA888(long___TypeInfo, 1LL);
            v53 = *(_QWORD *)(v46 + 32);
            if ( !v53 )
              goto LABEL_52;
            v54 = *(_OWORD *)(v53 + 40);
            v55 = (System_Int64_array *)Instance;
            *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)(v53 + 24);
            *(_OWORD *)&v61.fields.fakeValue = v54;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
            v59 = v61;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v59, 0LL);
            if ( !v55 )
              goto LABEL_52;
            if ( !v55->max_length )
              goto LABEL_53;
            v55->m_Items[0] = Instance;
            if ( !v25 )
              goto LABEL_52;
            Instance = DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)v25, v55, 0LL);
          }
          if ( !v32 )
            goto LABEL_52;
        }
        else
        {
          Instance = 0LL;
          if ( !v32 )
            goto LABEL_52;
        }
        v56 = *(int *)(v46 + 52);
        if ( (unsigned int)v56 >= v32->max_length )
          goto LABEL_53;
        if ( (Instance & 1) != 0 )
          v24 = *(EquipTargetInfo_o **)(v46 + 32);
        else
          v24 = 0LL;
        Instance = (__int64)v32->m_Items[v56];
        if ( !Instance )
          goto LABEL_52;
        UserServantLeaderEntity__setEquipTargetInfo((UserServantLeaderEntity_o *)Instance, v24, v48);
      }
      if ( v29 == ++v45 )
        return v32;
    }
    sub_1BCACFC(Instance);
LABEL_55:
    v58 = sub_1BCAA60(Instance);
    sub_1BCA908(v58, 0LL);
  }
  return v32;
}