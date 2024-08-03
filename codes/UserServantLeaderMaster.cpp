void __fastcall UserServantLeaderMaster___ctor(UserServantLeaderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FD26F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__, method);
    byte_49FD26F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    146,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__);
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

  if ( (byte_49FD26D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__, userId);
    byte_49FD26D = 1;
  }
  PK = (Il2CppObject *)UserServantLeaderEntity__CreatePK(
                         userId,
                         classId,
                         supportDeckId,
                         *(const MethodInfo **)&supportDeckId);
  return (UserServantLeaderEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_30D41FC *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__);
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

  if ( (byte_49FD26E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__, entity);
    byte_49FD26E = 1;
  }
  PK = (Il2CppObject *)UserServantLeaderEntity__CreatePK(userId, classId, supportDeckId, *(const MethodInfo **)&classId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__);
}


UserServantLeaderEntity_array *__fastcall UserServantLeaderMaster__getAllSupportDeckList(
        UserServantLeaderMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  const MethodInfo *v9; // x2
  System_Collections_Generic_IEnumerable_T__o *SupportDeck; // x0
  int v11; // w22
  int v12; // w21

  if ( (byte_49FD271 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo, v7);
    byte_49FD271 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__);
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
      if ( !v8 )
        break;
      System_Collections_Generic_List_object___AddRange(
        v8,
        SupportDeck,
        (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__);
      if ( v11 == v12 )
        return (UserServantLeaderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v8,
                                                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
    }
LABEL_12:
    sub_1B64324(SupportDeck);
  }
  if ( !v8 )
    goto LABEL_12;
  return (UserServantLeaderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v8,
                                            (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x21
  int32_t Count; // w0
  BalanceConfig_c *v17; // x8
  int v18; // w22
  __int64 v19; // x1
  __int64 v20; // x2
  UserServantLeaderEntity_array *v21; // x23
  __int64 v22; // x29
  unsigned __int64 v23; // x24
  UserServantLeaderEntity_o **m_Items; // x28
  BalanceConfig_c *v25; // x0
  UserServantLeaderEntity_o *v26; // x25
  const MethodInfo *v27; // x3
  UserServantLeaderEntity_c *v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w24
  __int64 v32; // x25
  __int64 methodPtr_low; // x9
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x4
  __int64 v36; // x2
  __int64 v37; // x8
  __int128 v38; // q0
  __int64 v39; // x8
  __int128 v40; // q0
  System_Int64_array *v41; // x26
  __int64 v42; // x8
  EquipTargetInfo_o *v43; // x1
  __int64 v45; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-90h]
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_49FD270 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&supportDeckId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1B640C8(&long___TypeInfo, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&UserServantLeaderEntity___TypeInfo, v12);
    sub_1B640C8(&UserServantLeaderEntity_TypeInfo, v13);
    byte_49FD270 = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___),
        !this->fields.list) )
  {
LABEL_52:
    sub_1B64324(Instance);
  }
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v17 = BalanceConfig_TypeInfo;
  v18 = Count;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  v21 = (UserServantLeaderEntity_array *)sub_1B64170(
                                           UserServantLeaderEntity___TypeInfo,
                                           (unsigned int)v17->static_fields->SupportDeckMemberMax);
  v22 = 0LL;
  v23 = 0LL;
  m_Items = v21->m_Items;
  while ( 1 )
  {
    v25 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v25 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v23 >= v25->static_fields->SupportDeckMemberMax )
      break;
    v26 = (UserServantLeaderEntity_o *)sub_1B64314(UserServantLeaderEntity_TypeInfo, v19, v20);
    UserServantLeaderEntity___ctor_39908024(v26, v23, supportDeckId, v27);
    if ( !v21 )
      goto LABEL_52;
    if ( v26 )
    {
      Instance = sub_1B64204(v26, v21->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_55;
    }
    if ( v23 >= v21->max_length )
LABEL_53:
      sub_1B6432C(Instance, v28);
    m_Items[v23] = v26;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&m_Items[v22], (int32_t)v26, v29, v30);
    ++v23;
    ++v22;
  }
  if ( v18 >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      Instance = (__int64)this->fields.list;
      if ( !Instance )
        goto LABEL_52;
      Instance = (__int64)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v31,
                            (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_52;
      v28 = UserServantLeaderEntity_TypeInfo;
      v32 = Instance;
      methodPtr_low = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != UserServantLeaderEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(Instance + 48) == supportDeckId )
      {
        v34 = *(const MethodInfo **)(Instance + 56);
        if ( v34 )
        {
          if ( !v15 )
            goto LABEL_52;
          Instance = DataMasterBase_object__object__long___TryGetEntity(
                       v15,
                       &entity,
                       (int64_t)v34,
                       (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( !v21 )
              goto LABEL_52;
            v36 = *(int *)(v32 + 52);
            if ( (unsigned int)v36 >= v21->max_length )
              goto LABEL_53;
            Instance = (__int64)v21->m_Items[v36];
            if ( !Instance )
              goto LABEL_52;
            UserServantLeaderEntity__setUserServantEntity(
              (UserServantLeaderEntity_o *)Instance,
              (UserServantEntity_o *)entity,
              v36,
              supportDeckId,
              v35);
          }
        }
        v37 = *(_QWORD *)(v32 + 32);
        if ( v37 )
        {
          v38 = *(_OWORD *)(v37 + 40);
          *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v37 + 24);
          *(_OWORD *)&v48.fields.fakeValue = v38;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v47 = v48;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v47, 0LL);
          if ( Instance )
          {
            Instance = sub_1B64170(long___TypeInfo, 1LL);
            v39 = *(_QWORD *)(v32 + 32);
            if ( !v39 )
              goto LABEL_52;
            v40 = *(_OWORD *)(v39 + 40);
            v41 = (System_Int64_array *)Instance;
            *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)(v39 + 24);
            *(_OWORD *)&v48.fields.fakeValue = v40;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v46 = v48;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v46, 0LL);
            if ( !v41 )
              goto LABEL_52;
            if ( !v41->max_length )
              goto LABEL_53;
            v41->m_Items[0] = Instance;
            if ( !v15 )
              goto LABEL_52;
            Instance = DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)v15, v41, 0LL);
          }
          if ( !v21 )
            goto LABEL_52;
        }
        else
        {
          Instance = 0LL;
          if ( !v21 )
            goto LABEL_52;
        }
        v42 = *(int *)(v32 + 52);
        if ( (unsigned int)v42 >= v21->max_length )
          goto LABEL_53;
        if ( (Instance & 1) != 0 )
          v43 = *(EquipTargetInfo_o **)(v32 + 32);
        else
          v43 = 0LL;
        Instance = (__int64)v21->m_Items[v42];
        if ( !Instance )
          goto LABEL_52;
        UserServantLeaderEntity__setEquipTargetInfo((UserServantLeaderEntity_o *)Instance, v43, v34);
      }
      if ( v18 == ++v31 )
        return v21;
    }
    sub_1B645E4(Instance);
LABEL_55:
    v45 = sub_1B64348(Instance);
    sub_1B641F0(v45, 0LL);
  }
  return v21;
}