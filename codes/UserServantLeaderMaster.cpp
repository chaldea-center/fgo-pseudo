void __fastcall UserServantLeaderMaster___ctor(UserServantLeaderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BFE9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__);
    byte_4A5BFE9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    146,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__);
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

  if ( (byte_4A5BFE7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__);
    byte_4A5BFE7 = 1;
  }
  PK = (Il2CppObject *)UserServantLeaderEntity__CreatePK(
                         userId,
                         classId,
                         supportDeckId,
                         *(const MethodInfo **)&supportDeckId);
  return (UserServantLeaderEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_311DC8C *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__);
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

  if ( (byte_4A5BFE8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__);
    byte_4A5BFE8 = 1;
  }
  PK = (Il2CppObject *)UserServantLeaderEntity__CreatePK(userId, classId, supportDeckId, *(const MethodInfo **)&classId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__);
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

  if ( (byte_4A5BFEB & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo);
    byte_4A5BFEB = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__);
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
        (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__);
      if ( v7 == v8 )
        return (UserServantLeaderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v3,
                                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
    }
LABEL_12:
    sub_1B8880C(SupportDeck, v4);
  }
  if ( !v3 )
    goto LABEL_12;
  return (UserServantLeaderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v3,
                                            (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
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
  __int64 v12; // x29
  unsigned __int64 v13; // x24
  UserServantLeaderEntity_o **m_Items; // x28
  BalanceConfig_c *v15; // x0
  UserServantLeaderEntity_o *v16; // x25
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w24
  __int64 v21; // x25
  __int64 methodPtr_low; // x9
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x4
  __int64 v25; // x2
  __int64 v26; // x8
  __int128 v27; // q0
  __int64 v28; // x8
  __int128 v29; // q0
  System_Int64_array *v30; // x26
  __int64 v31; // x8
  __int64 v33; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+40h] [xbp-90h]
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4A5BFEA & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&long___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantLeaderEntity___TypeInfo);
    sub_1B885B0(&UserServantLeaderEntity_TypeInfo);
    byte_4A5BFEA = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___),
        !this->fields.list) )
  {
LABEL_52:
    sub_1B8880C(Instance, v6);
  }
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v9 = BalanceConfig_TypeInfo;
  v10 = Count;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  v11 = (UserServantLeaderEntity_array *)sub_1B88658(
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
    v16 = (UserServantLeaderEntity_o *)sub_1B887FC(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor_40241608(v16, v13, supportDeckId, v17);
    if ( !v11 )
      goto LABEL_52;
    if ( v16 )
    {
      Instance = sub_1B886EC(v16, v11->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_55;
    }
    if ( v13 >= v11->max_length )
LABEL_53:
      sub_1B88814(Instance, v6);
    m_Items[v13] = v16;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&m_Items[v12], (int32_t)v16, v18, v19);
    ++v13;
    ++v12;
  }
  if ( v10 >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      Instance = (__int64)this->fields.list;
      if ( !Instance )
        goto LABEL_52;
      Instance = (__int64)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v20,
                            (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_52;
      v6 = (EquipTargetInfo_o *)UserServantLeaderEntity_TypeInfo;
      v21 = Instance;
      methodPtr_low = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != UserServantLeaderEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(Instance + 48) == supportDeckId )
      {
        v23 = *(const MethodInfo **)(Instance + 56);
        if ( v23 )
        {
          if ( !v7 )
            goto LABEL_52;
          Instance = DataMasterBase_object__object__long___TryGetEntity(
                       v7,
                       &entity,
                       (int64_t)v23,
                       (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( !v11 )
              goto LABEL_52;
            v25 = *(int *)(v21 + 52);
            if ( (unsigned int)v25 >= v11->max_length )
              goto LABEL_53;
            Instance = (__int64)v11->m_Items[v25];
            if ( !Instance )
              goto LABEL_52;
            UserServantLeaderEntity__setUserServantEntity(
              (UserServantLeaderEntity_o *)Instance,
              (UserServantEntity_o *)entity,
              v25,
              supportDeckId,
              v24);
          }
        }
        v26 = *(_QWORD *)(v21 + 32);
        if ( v26 )
        {
          v27 = *(_OWORD *)(v26 + 40);
          *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)(v26 + 24);
          *(_OWORD *)&v36.fields.fakeValue = v27;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v35 = v36;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v35, 0LL);
          if ( Instance )
          {
            Instance = sub_1B88658(long___TypeInfo, 1LL);
            v28 = *(_QWORD *)(v21 + 32);
            if ( !v28 )
              goto LABEL_52;
            v29 = *(_OWORD *)(v28 + 40);
            v30 = (System_Int64_array *)Instance;
            *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)(v28 + 24);
            *(_OWORD *)&v36.fields.fakeValue = v29;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v34 = v36;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v34, 0LL);
            if ( !v30 )
              goto LABEL_52;
            if ( !v30->max_length )
              goto LABEL_53;
            v30->m_Items[0] = Instance;
            if ( !v7 )
              goto LABEL_52;
            Instance = DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)v7, v30, 0LL);
          }
          if ( !v11 )
            goto LABEL_52;
        }
        else
        {
          Instance = 0LL;
          if ( !v11 )
            goto LABEL_52;
        }
        v31 = *(int *)(v21 + 52);
        if ( (unsigned int)v31 >= v11->max_length )
          goto LABEL_53;
        if ( (Instance & 1) != 0 )
          v6 = *(EquipTargetInfo_o **)(v21 + 32);
        else
          v6 = 0LL;
        Instance = (__int64)v11->m_Items[v31];
        if ( !Instance )
          goto LABEL_52;
        UserServantLeaderEntity__setEquipTargetInfo((UserServantLeaderEntity_o *)Instance, v6, v23);
      }
      if ( v10 == ++v20 )
        return v11;
    }
    sub_1B88ACC(Instance);
LABEL_55:
    v33 = sub_1B88830(Instance);
    sub_1B886D8(v33, 0LL);
  }
  return v11;
}