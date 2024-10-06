void __fastcall UserServantLeaderMaster___ctor(UserServantLeaderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A70CF8 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__, method);
    byte_4A70CF8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    146,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__);
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

  if ( (byte_4A70CF6 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__, userId);
    byte_4A70CF6 = 1;
  }
  PK = (Il2CppObject *)UserServantLeaderEntity__CreatePK(
                         userId,
                         classId,
                         supportDeckId,
                         *(const MethodInfo **)&supportDeckId);
  return (UserServantLeaderEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_312C900 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__);
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

  if ( (byte_4A70CF7 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__, entity);
    byte_4A70CF7 = 1;
  }
  PK = (Il2CppObject *)UserServantLeaderEntity__CreatePK(userId, classId, supportDeckId, *(const MethodInfo **)&classId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_312C950 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__);
}


UserServantLeaderEntity_array *__fastcall UserServantLeaderMaster__getAllSupportDeckList(
        UserServantLeaderMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  System_Collections_Generic_IEnumerable_T__o *SupportDeck; // x0
  int v11; // w22
  int v12; // w21

  if ( (byte_4A70CFA & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, method);
    sub_1B90010(&Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__, v5);
    sub_1B90010(&System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo, v6);
    byte_4A70CFA = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__);
  SupportDeck = (System_Collections_Generic_IEnumerable_T__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    SupportDeck = (System_Collections_Generic_IEnumerable_T__o *)BalanceConfig_TypeInfo;
  }
  v11 = *((_DWORD *)SupportDeck[11].monitor + 38);
  if ( v11 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      SupportDeck = (System_Collections_Generic_IEnumerable_T__o *)UserServantLeaderMaster__getSupportDeck(
                                                                     this,
                                                                     ++v12,
                                                                     v9);
      if ( !v7 )
        break;
      System_Collections_Generic_List_object___AddRange(
        v7,
        SupportDeck,
        (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__);
      if ( v11 == v12 )
        return (UserServantLeaderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v7,
                                                  (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
    }
LABEL_12:
    sub_1B9026C(SupportDeck, v8);
  }
  if ( !v7 )
    goto LABEL_12;
  return (UserServantLeaderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v7,
                                            (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
UserServantLeaderEntity_array *__fastcall UserServantLeaderMaster__getSupportDeck(
        UserServantLeaderMaster_o *this,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 Instance; // x0
  EquipTargetInfo_o *v15; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x21
  int32_t Count; // w0
  BalanceConfig_c *v18; // x8
  int v19; // w22
  UserServantLeaderEntity_array *v20; // x23
  __int64 v21; // x29
  unsigned __int64 v22; // x24
  UserServantLeaderEntity_o **m_Items; // x28
  BalanceConfig_c *v24; // x0
  UserServantLeaderEntity_o *v25; // x25
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w24
  __int64 v30; // x25
  __int64 methodPtr_low; // x9
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x4
  __int64 v34; // x2
  __int64 v35; // x8
  __int128 v36; // q0
  __int64 v37; // x8
  __int128 v38; // q0
  System_Int64_array *v39; // x26
  __int64 v40; // x8
  __int64 v42; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+40h] [xbp-90h]
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4A70CF9 & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, *(_QWORD *)&supportDeckId);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1B90010(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1B90010(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1B90010(&long___TypeInfo, v9);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B90010(&UserServantLeaderEntity___TypeInfo, v12);
    sub_1B90010(&UserServantLeaderEntity_TypeInfo, v13);
    byte_4A70CF9 = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserServantMaster___),
        !this->fields.list) )
  {
LABEL_52:
    sub_1B9026C(Instance, v15);
  }
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v18 = BalanceConfig_TypeInfo;
  v19 = Count;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  v20 = (UserServantLeaderEntity_array *)sub_1B900B8(
                                           UserServantLeaderEntity___TypeInfo,
                                           (unsigned int)v18->static_fields->SupportDeckMemberMax);
  v21 = 0LL;
  v22 = 0LL;
  m_Items = v20->m_Items;
  while ( 1 )
  {
    v24 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v22 >= v24->static_fields->SupportDeckMemberMax )
      break;
    v25 = (UserServantLeaderEntity_o *)sub_1B9025C(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor_40295348(v25, v22, supportDeckId, v26);
    if ( !v20 )
      goto LABEL_52;
    if ( v25 )
    {
      Instance = sub_1B9014C(v25, v20->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_55;
    }
    if ( v22 >= v20->max_length )
LABEL_53:
      sub_1B90274(Instance, v15);
    m_Items[v22] = v25;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&m_Items[v21], (int32_t)v25, v27, v28);
    ++v22;
    ++v21;
  }
  if ( v19 >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      Instance = (__int64)this->fields.list;
      if ( !Instance )
        goto LABEL_52;
      Instance = (__int64)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v29,
                            (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_52;
      v15 = (EquipTargetInfo_o *)UserServantLeaderEntity_TypeInfo;
      v30 = Instance;
      methodPtr_low = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != UserServantLeaderEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(Instance + 48) == supportDeckId )
      {
        v32 = *(const MethodInfo **)(Instance + 56);
        if ( v32 )
        {
          if ( !v16 )
            goto LABEL_52;
          Instance = DataMasterBase_object__object__long___TryGetEntity(
                       v16,
                       &entity,
                       (int64_t)v32,
                       (const MethodInfo_312C7A8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( !v20 )
              goto LABEL_52;
            v34 = *(int *)(v30 + 52);
            if ( (unsigned int)v34 >= v20->max_length )
              goto LABEL_53;
            Instance = (__int64)v20->m_Items[v34];
            if ( !Instance )
              goto LABEL_52;
            UserServantLeaderEntity__setUserServantEntity(
              (UserServantLeaderEntity_o *)Instance,
              (UserServantEntity_o *)entity,
              v34,
              supportDeckId,
              v33);
          }
        }
        v35 = *(_QWORD *)(v30 + 32);
        if ( v35 )
        {
          v36 = *(_OWORD *)(v35 + 40);
          *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)(v35 + 24);
          *(_OWORD *)&v45.fields.fakeValue = v36;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v44 = v45;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v44, 0LL);
          if ( Instance )
          {
            Instance = sub_1B900B8(long___TypeInfo, 1LL);
            v37 = *(_QWORD *)(v30 + 32);
            if ( !v37 )
              goto LABEL_52;
            v38 = *(_OWORD *)(v37 + 40);
            v39 = (System_Int64_array *)Instance;
            *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)(v37 + 24);
            *(_OWORD *)&v45.fields.fakeValue = v38;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v43 = v45;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v43, 0LL);
            if ( !v39 )
              goto LABEL_52;
            if ( !v39->max_length )
              goto LABEL_53;
            v39->m_Items[0] = Instance;
            if ( !v16 )
              goto LABEL_52;
            Instance = DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)v16, v39, 0LL);
          }
          if ( !v20 )
            goto LABEL_52;
        }
        else
        {
          Instance = 0LL;
          if ( !v20 )
            goto LABEL_52;
        }
        v40 = *(int *)(v30 + 52);
        if ( (unsigned int)v40 >= v20->max_length )
          goto LABEL_53;
        if ( (Instance & 1) != 0 )
          v15 = *(EquipTargetInfo_o **)(v30 + 32);
        else
          v15 = 0LL;
        Instance = (__int64)v20->m_Items[v40];
        if ( !Instance )
          goto LABEL_52;
        UserServantLeaderEntity__setEquipTargetInfo((UserServantLeaderEntity_o *)Instance, v15, v32);
      }
      if ( v19 == ++v29 )
        return v20;
    }
    sub_1B9052C(Instance);
LABEL_55:
    v42 = sub_1B90290(Instance);
    sub_1B90138(v42, 0LL);
  }
  return v20;
}