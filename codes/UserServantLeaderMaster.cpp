void __fastcall UserServantLeaderMaster___ctor(UserServantLeaderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD44A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__);
    byte_4BDD44A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    150,
    (const MethodInfo_325E55C *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__);
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

  if ( (byte_4BDD448 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__);
    byte_4BDD448 = 1;
  }
  PK = (Il2CppObject *)UserServantLeaderEntity__CreatePK(
                         userId,
                         classId,
                         supportDeckId,
                         *(const MethodInfo **)&supportDeckId);
  return (UserServantLeaderEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_3260880 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__);
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

  if ( (byte_4BDD449 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__);
    byte_4BDD449 = 1;
  }
  PK = (Il2CppObject *)UserServantLeaderEntity__CreatePK(userId, classId, supportDeckId, *(const MethodInfo **)&classId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__);
}


UserServantLeaderEntity_array *__fastcall UserServantLeaderMaster__getAllSupportDeckList(
        UserServantLeaderMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  System_Collections_Generic_IEnumerable_T__o *SupportDeck; // x0
  int v7; // w22
  int v8; // w21

  if ( (byte_4BDD44C & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo);
    byte_4BDD44C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__);
  SupportDeck = (System_Collections_Generic_IEnumerable_T__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    SupportDeck = (System_Collections_Generic_IEnumerable_T__o *)BalanceConfig_TypeInfo;
  }
  v7 = *((_DWORD *)SupportDeck[11].monitor + 38);
  if ( v7 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      SupportDeck = (System_Collections_Generic_IEnumerable_T__o *)UserServantLeaderMaster__getSupportDeck(
                                                                     this,
                                                                     ++v8,
                                                                     v5);
      if ( !v3 )
        break;
      System_Collections_Generic_List_object___AddRange(
        v3,
        SupportDeck,
        (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__);
      if ( v7 == v8 )
        return (UserServantLeaderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v3,
                                                  (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
    }
LABEL_12:
    sub_1C22094(SupportDeck, v4);
  }
  if ( !v3 )
    goto LABEL_12;
  return (UserServantLeaderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v3,
                                            (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
}


UserServantLeaderEntity_array *__fastcall UserServantLeaderMaster__getSupportDeck(
        UserServantLeaderMaster_o *this,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  EquipTargetInfo_o *v6; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  int32_t Count; // w0
  BalanceConfig_c *v9; // x8
  int v10; // w22
  UserServantLeaderEntity_array *v11; // x23
  __int64 v12; // x28
  unsigned __int64 v13; // x24
  UserServantLeaderEntity_o **m_Items; // x27
  BalanceConfig_c *v15; // x0
  UserServantLeaderEntity_o *v16; // x25
  const MethodInfo *v17; // x3
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int32_t v24; // w24
  __int64 v25; // x25
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x4
  __int64 v28; // x2
  __int64 v29; // x8
  __int128 v30; // q0
  __int64 v31; // x8
  __int128 v32; // q0
  System_Int64_array *v33; // x26
  __int64 v34; // x8
  __int64 v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+40h] [xbp-90h]
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4BDD44B & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C21E38(&long___TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&UserServantLeaderEntity___TypeInfo);
    sub_1C21E38(&UserServantLeaderEntity_TypeInfo);
    byte_4BDD44B = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this->fields.list )
    goto LABEL_50;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__);
  v9 = BalanceConfig_TypeInfo;
  v10 = Count;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  v11 = (UserServantLeaderEntity_array *)sub_1C21EE0(
                                           UserServantLeaderEntity___TypeInfo,
                                           (unsigned int)v9->static_fields->SupportDeckMemberMax);
  v12 = 0LL;
  v13 = 0LL;
  m_Items = v11->m_Items;
  while ( 1 )
  {
    v15 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v13 >= v15->static_fields->SupportDeckMemberMax )
      break;
    v16 = (UserServantLeaderEntity_o *)sub_1C22084(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor_41513884(v16, v13, supportDeckId, v17);
    if ( !v11 )
      goto LABEL_50;
    if ( v16 )
    {
      Instance = sub_1C21F74(v16, v11->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v36 = sub_1C220B8(0LL);
        sub_1C21F60(v36, 0LL);
      }
    }
    if ( v13 >= v11->max_length )
LABEL_51:
      sub_1C2209C(Instance, v6);
    m_Items[v13] = v16;
    sub_1C21DDC((PartyOrganizationUtility_o *)&m_Items[v12], (int64_t)v16, v18, v19, v20, v21, v22, v23);
    ++v13;
    ++v12;
  }
  if ( v10 >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      Instance = (__int64)this->fields.list;
      if ( !Instance )
        break;
      Instance = (__int64)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v24,
                            (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__);
      if ( !Instance )
        break;
      v25 = Instance;
      if ( *(_DWORD *)(Instance + 48) == supportDeckId )
      {
        v26 = *(const MethodInfo **)(Instance + 56);
        if ( v26 )
        {
          if ( !v7 )
            break;
          Instance = DataMasterBase_object__object__long___TryGetEntity(
                       v7,
                       &entity,
                       (int64_t)v26,
                       (const MethodInfo_325E370 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( !v11 )
              break;
            v28 = *(int *)(v25 + 52);
            if ( (unsigned int)v28 >= v11->max_length )
              goto LABEL_51;
            Instance = (__int64)v11->m_Items[v28];
            if ( !Instance )
              break;
            UserServantLeaderEntity__setUserServantEntity(
              (UserServantLeaderEntity_o *)Instance,
              (UserServantEntity_o *)entity,
              v28,
              supportDeckId,
              v27);
          }
        }
        v29 = *(_QWORD *)(v25 + 32);
        if ( v29 )
        {
          v30 = *(_OWORD *)(v29 + 40);
          *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v29 + 24);
          *(_OWORD *)&v39.fields.fakeValue = v30;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v39;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v38, 0LL);
          if ( Instance )
          {
            Instance = sub_1C21EE0(long___TypeInfo, 1LL);
            v31 = *(_QWORD *)(v25 + 32);
            if ( !v31 )
              break;
            v32 = *(_OWORD *)(v31 + 40);
            v33 = (System_Int64_array *)Instance;
            *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v31 + 24);
            *(_OWORD *)&v39.fields.fakeValue = v32;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v37 = v39;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v37, 0LL);
            if ( !v33 )
              break;
            if ( !v33->max_length )
              goto LABEL_51;
            v33->m_Items[0] = Instance;
            if ( !v7 )
              break;
            Instance = DataMasterBase_object__object__long___isEntityExistsFromId(
                         v7,
                         v33,
                         (const MethodInfo_325D900 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
          }
          if ( !v11 )
            break;
        }
        else
        {
          Instance = 0LL;
          if ( !v11 )
            break;
        }
        v34 = *(int *)(v25 + 52);
        if ( (unsigned int)v34 >= v11->max_length )
          goto LABEL_51;
        if ( (Instance & 1) != 0 )
          v6 = *(EquipTargetInfo_o **)(v25 + 32);
        else
          v6 = 0LL;
        Instance = (__int64)v11->m_Items[v34];
        if ( !Instance )
          break;
        UserServantLeaderEntity__setEquipTargetInfo((UserServantLeaderEntity_o *)Instance, v6, v26);
      }
      if ( v10 == ++v24 )
        return v11;
    }
LABEL_50:
    sub_1C22094(Instance, v6);
  }
  return v11;
}