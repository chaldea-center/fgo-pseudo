void UserServantMaster___ctor(UserServantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C28319 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__);
    byte_4C28319 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    14,
    (const MethodInfo_3387FD0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__);
}


bool UserServantMaster__CheckEquipAdd(
        UserServantMaster_o *this,
        int32_t count,
        bool friendShipSvtEqExclude,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int32_t v6; // w20
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v8; // x1
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-18h] BYREF

  *(_QWORD *)servantEquipSum = 0;
  UserServantMaster__getCount(this, &servantEquipSum[1], servantEquipSum, friendShipSvtEqExclude, v4);
  v6 = servantEquipSum[0];
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_1C2D6EC(0, v8);
  return v6 + count > SelfUserGame->fields.svtEquipKeep;
}


bool UserServantMaster__CheckServantAdd(UserServantMaster_o *this, int32_t count, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  int32_t v5; // w20
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v7; // x1
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-18h] BYREF

  *(_QWORD *)servantEquipSum = 0;
  UserServantMaster__getCount(this, &servantEquipSum[1], servantEquipSum, 0, v3);
  v5 = servantEquipSum[1];
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_1C2D6EC(0, v7);
  return v5 + count > SelfUserGame->fields.svtKeep;
}


// local variable allocation has failed, the output may be wrong!
bool UserServantMaster__CheckServantAndEquipAdd(
        UserServantMaster_o *this,
        int32_t servantCount,
        int32_t equipCount,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x3

  return UserServantMaster__CheckServantAdd(this, servantCount, *(const MethodInfo **)&equipCount)
      || UserServantMaster__CheckEquipAdd(this, equipCount, 0, v6);
}


void UserServantMaster__ClearEntityCache(UserServantMaster_o *this, int64_t userSvtId, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C2831B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    byte_4C2831B = 1;
  }
  entity = 0;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         userSvtId,
         (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    if ( !entity )
      sub_1C2D6EC(0, v5);
    UserServantEntity__ClearCache((UserServantEntity_o *)entity, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_o *UserServantMaster__CostumeTargetEntity(
        UserServantMaster_o *this,
        int32_t svtId,
        bool checkStorage,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  NetworkManager_c *v9; // x0
  int64_t userIdNumber; // x20
  UserServantEntity_o *v11; // x23
  int32_t v12; // w24
  __int128 v13; // q0
  UserServantEntity_o *v14; // x25
  __int64 v15; // x26
  __int64 v16; // x27
  __int64 v17; // x26
  __int64 v18; // x27
  int32_t v19; // w26
  __int64 v20; // x26
  __int64 v21; // x27
  int32_t v22; // w26
  __int64 v23; // x26
  __int64 v24; // x27
  int32_t v25; // w26
  int64_t createdAt; // x8
  int64_t v27; // x9
  __int128 v28; // q0
  int64_t v29; // x0
  __int128 v30; // q1
  const MethodInfo *v31; // x3
  bool v33; // [xsp+4h] [xbp-ECh]
  UserServantEntity_o *v34; // [xsp+8h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+70h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4C28333 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&UserServantEntity_TypeInfo);
    byte_4C28333 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_55;
  v33 = checkStorage;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  if ( Count >= 1 )
  {
    v34 = 0;
    userIdNumber = v9->static_fields->userIdNumber;
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( !list )
        break;
      v13 = *(_OWORD *)&list[2].fields.items;
      v14 = (UserServantEntity_o *)list;
      *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&list[2].klass;
      *(_OWORD *)&v38.fields.fakeValue = v13;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v37 = v38;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v37, 0) == userIdNumber )
      {
        v16 = *(_QWORD *)&v14->fields.svtId.fields.currentCryptoKey;
        v15 = *(_QWORD *)&v14->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v39.fields.currentCryptoKey = v16;
        *(_QWORD *)&v39.fields.fakeValue = v15;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v39, 0) == svtId )
        {
          if ( UserServantEntity__IsWithdrawal(v14, 0) )
          {
            v34 = v14;
          }
          else if ( v11 )
          {
            v18 = *(_QWORD *)&v14->fields.limitCount.fields.currentCryptoKey;
            v17 = *(_QWORD *)&v14->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v40.fields.currentCryptoKey = v18;
            *(_QWORD *)&v40.fields.fakeValue = v17;
            v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v40, 0);
            if ( v19 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v11->fields.limitCount, 0)
              || v14->fields.lv > v11->fields.lv )
            {
              goto LABEL_27;
            }
            v21 = *(_QWORD *)&v14->fields.limitCount.fields.currentCryptoKey;
            v20 = *(_QWORD *)&v14->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v41.fields.currentCryptoKey = v21;
            *(_QWORD *)&v41.fields.fakeValue = v20;
            v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v41, 0);
            if ( v22 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v11->fields.limitCount, 0)
              && v14->fields.lv == v11->fields.lv
              && !UserServantEntity__IsCondJoin(v14, 0)
              && UserServantEntity__IsCondJoin(v11, 0) )
            {
              goto LABEL_27;
            }
            v24 = *(_QWORD *)&v14->fields.limitCount.fields.currentCryptoKey;
            v23 = *(_QWORD *)&v14->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v42.fields.currentCryptoKey = v24;
            *(_QWORD *)&v42.fields.fakeValue = v23;
            v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v42, 0);
            if ( v25 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v11->fields.limitCount, 0)
              && v14->fields.lv == v11->fields.lv )
            {
              createdAt = v14->fields.createdAt;
              v27 = v11->fields.createdAt;
              if ( createdAt < v27 )
                goto LABEL_27;
              if ( createdAt == v27 )
              {
                v28 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
                *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v38.fields.fakeValue = v28;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v36 = v38;
                v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v36, 0);
                v30 = *(_OWORD *)&v11->fields.id.fields.fakeValue;
                *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&v11->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v35.fields.fakeValue = v30;
                if ( v29 < CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v35, 0) )
                {
LABEL_27:
                  v11 = (UserServantEntity_o *)sub_1C2D6DC(UserServantEntity_TypeInfo);
                  UserServantEntity___ctor_42922220(v11, v14, 0);
                }
              }
            }
          }
          else
          {
            v11 = v14;
          }
        }
      }
      if ( Count == ++v12 )
        goto LABEL_48;
    }
LABEL_55:
    sub_1C2D6EC(list, *(_QWORD *)&svtId);
  }
  v34 = 0;
  v11 = 0;
LABEL_48:
  if ( v33 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !list )
      goto LABEL_55;
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)list,
                                                               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !list )
      goto LABEL_55;
    v11 = UserServantStorageMaster__CostumeTargetEntity((UserServantStorageMaster_o *)list, svtId, v11, v31);
  }
  if ( v11 )
    return v11;
  else
    return v34;
}


System_Collections_Generic_List_int__o *UserServantMaster__GetAllServantList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *MasterData_object; // x19
  System_Collections_Generic_List_int__o *v6; // x20
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x24
  __int128 v19; // q0
  int64_t v20; // x25
  NetworkManager_c *v21; // x0
  __int64 v22; // x25
  __int64 v23; // x26
  __int64 v24; // x0
  Il2CppObject *Entity; // x0
  __int64 v26; // x1
  __int64 v27; // x25
  __int64 v28; // x26
  __int64 v29; // x0
  __int64 v30; // x24
  __int64 v31; // x25
  __int64 v32; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v42; // x22
  unsigned __int64 i; // x26
  __int64 v44; // x23
  __int128 v45; // q0
  int64_t v46; // x24
  __int64 v47; // x24
  __int64 v48; // x25
  __int64 v49; // x24
  __int64 v50; // x25
  __int64 v51; // x23
  __int64 v52; // x24
  struct System_Int32_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  UserServantStorageMaster_o *v57; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+50h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_4C28322 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C28322 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
  v57 = (UserServantStorageMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_86;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_11;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v12 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            Enumerator,
            *(_QWORD *)(v12 + 8))
        & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_18;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_18:
      v16 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8));
    v18 = v17;
    if ( v17 )
    {
      v19 = *(_OWORD *)(v17 + 64);
      *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)(v17 + 48);
      *(_OWORD *)&v60.fields.fakeValue = v19;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v59 = v60;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v59, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C211E1 )
      {
        sub_1C2D490(&NetworkManager_TypeInfo);
        byte_4C211E1 = 1;
      }
      v21 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v21 = NetworkManager_TypeInfo;
      }
      if ( v20 == v21->static_fields->userIdNumber && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v18, 0) )
      {
        v23 = *(_QWORD *)(v18 + 80);
        v22 = *(_QWORD *)(v18 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v61.fields.currentCryptoKey = v23;
        *(_QWORD *)&v61.fields.fakeValue = v22;
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v61, 0);
        if ( !MasterData_object )
          sub_1C2D6EC(v24, (unsigned int)v24);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v24,
                   (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_1C2D6EC(0, v26);
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0) )
        {
          v28 = *(_QWORD *)(v18 + 80);
          v27 = *(_QWORD *)(v18 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v62.fields.currentCryptoKey = v28;
          *(_QWORD *)&v62.fields.fakeValue = v27;
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v62, 0);
          if ( !v6 )
            sub_1C2D6EC(v29, (unsigned int)v29);
          if ( !System_Collections_Generic_List_int___Contains(
                  v6,
                  v29,
                  (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            v31 = *(_QWORD *)(v18 + 80);
            v30 = *(_QWORD *)(v18 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v63.fields.currentCryptoKey = v31;
            *(_QWORD *)&v63.fields.fakeValue = v30;
            v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v63, 0);
            items = v6->fields._items;
            v34 = Method_System_Collections_Generic_List_int__Add__;
            ++v6->fields._version;
            if ( !items )
              sub_1C2D6EC(v32, (unsigned int)v32);
            size = v6->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v6,
                v32,
                *(const MethodInfo_376CB60 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            }
            else
            {
              v6->fields._size = size + 1;
              items->m_Items[size] = v32;
            }
          }
        }
      }
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_50;
    }
    v39 = (__int64)&v36->vtable[*v38];
  }
  else
  {
LABEL_50:
    v39 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  Instance = (DataManager_o *)v57;
  if ( !v57 || (Instance = (DataManager_o *)UserServantStorageMaster__getList(v57, v4)) == 0 )
LABEL_86:
    sub_1C2D6EC(Instance, v4);
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v42 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1C2D6F4(Instance, v4, v40);
      v44 = *((_QWORD *)&v42->fields._DispLog + i);
      if ( v44 )
      {
        v45 = *(_OWORD *)(v44 + 64);
        *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)(v44 + 48);
        *(_OWORD *)&v60.fields.fakeValue = v45;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v58 = v60;
        v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v58, 0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C211E1 )
        {
          sub_1C2D490(&NetworkManager_TypeInfo);
          byte_4C211E1 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        if ( v46 == *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL) )
        {
          v48 = *(_QWORD *)(v44 + 80);
          v47 = *(_QWORD *)(v44 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v64.fields.currentCryptoKey = v48;
          *(_QWORD *)&v64.fields.fakeValue = v47;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v64, 0);
          if ( !v6 )
            goto LABEL_86;
          Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                        v6,
                                        (int32_t)Instance,
                                        (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            Instance = (DataManager_o *)UserServantEntity__IsWithdrawal((UserServantEntity_o *)v44, 0);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              v50 = *(_QWORD *)(v44 + 80);
              v49 = *(_QWORD *)(v44 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v65.fields.currentCryptoKey = v50;
              *(_QWORD *)&v65.fields.fakeValue = v49;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v65, 0);
              if ( !MasterData_object )
                goto LABEL_86;
              Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                            (int32_t)Instance,
                                            (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( !Instance )
                goto LABEL_86;
              Instance = (DataManager_o *)ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                v52 = *(_QWORD *)(v44 + 80);
                v51 = *(_QWORD *)(v44 + 88);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v66.fields.currentCryptoKey = v52;
                *(_QWORD *)&v66.fields.fakeValue = v51;
                Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v66, 0);
                v53 = v6->fields._items;
                v54 = Method_System_Collections_Generic_List_int__Add__;
                ++v6->fields._version;
                if ( !v53 )
                  goto LABEL_86;
                v55 = v6->fields._size;
                v4 = (const MethodInfo *)(unsigned int)Instance;
                if ( (unsigned int)v55 >= LODWORD(v53->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v6,
                    (int32_t)Instance,
                    *(const MethodInfo_376CB60 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
                }
                else
                {
                  v6->fields._size = v55 + 1;
                  v53->m_Items[v55] = (int)Instance;
                }
              }
            }
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v42->fields.m_CancellationTokenSource;
    }
  }
  return v6;
}


UserServantEntity_array *UserServantMaster__GetCombineMaterialList(UserServantMaster_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v6; // x27
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w23
  __int128 v10; // q0
  int64_t v11; // x24
  __int64 v12; // x25
  __int64 v13; // x26
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4C28334 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C28334 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_34;
  v6 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v9,
                            (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v10 = *(_OWORD *)(Instance + 64);
        v11 = Instance;
        *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v22.fields.fakeValue = v10;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v21 = v22;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v21, 0);
        if ( Instance == v6 )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v11, 0);
          if ( (Instance & 1) == 0 )
          {
            v13 = *(_QWORD *)(v11 + 80);
            v12 = *(_QWORD *)(v11 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v23.fields.currentCryptoKey = v13;
            *(_QWORD *)&v23.fields.fakeValue = v12;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v23, 0);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            Instance = ServantEntity__get_IsCombineMaterial((ServantEntity_o *)Instance, 0);
            if ( (Instance & 1) != 0 )
            {
              Instance = UserServantEntity__IsLock((UserServantEntity_o *)v11, 0);
              if ( (Instance & 1) == 0 )
              {
                Instance = UserServantEntity__IsChoice((UserServantEntity_o *)v11, 0);
                if ( (Instance & 1) == 0 )
                {
                  if ( !v8 )
                    break;
                  items = v8->fields._items;
                  v17 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                  ++v8->fields._version;
                  if ( !items )
                    break;
                  size = v8->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v8,
                      (Il2CppObject *)v11,
                      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v19 = &items->obj.klass + size;
                    v8->fields._size = size + 1;
                    v19[4] = (Il2CppClass *)v11;
                    sub_1C2D434((CGThumbnailListItem_o *)(v19 + 4), v11, v14, v15);
                  }
                }
              }
            }
          }
        }
      }
      if ( Count == ++v9 )
        goto LABEL_32;
    }
LABEL_34:
    sub_1C2D6EC(Instance, v4);
  }
LABEL_32:
  if ( !v8 )
    goto LABEL_34;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *UserServantMaster__GetEntities(
        UserServantMaster_o *this,
        System_Int64_array *userServantIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v5; // x21

  if ( (byte_4C28339 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor___77945144);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    byte_4C28339 = 1;
  }
  if ( userServantIds )
  {
    v5 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_58135692(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)userServantIds,
      (const MethodInfo_377148C *)Method_System_Collections_Generic_List_long___ctor___77945144);
  }
  else
  {
    v5 = 0;
  }
  return UserServantMaster__GetEntities_43006572(this, v5, method);
}


UserServantEntity_array *UserServantMaster__GetEntities_43006572(
        UserServantMaster_o *this,
        System_Collections_Generic_List_long__o *userServantIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  Il2CppObject *v19; // x22
  __int128 v20; // q0
  int64_t v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+20h] [xbp-70h]

  if ( (byte_4C2833A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2833A = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( userServantIds && userServantIds->fields._size >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_40;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   list,
                   (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
    if ( !Enumerator )
      sub_1C2D6EC(0, v8);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v11;
          p_offset += 4;
          if ( !v11 )
            goto LABEL_11;
        }
        v13 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_11:
        v13 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
              Enumerator,
              *(_QWORD *)(v13 + 8))
          & 1) == 0 )
        break;
      v14 = Enumerator->klass;
      v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v16 = &v14->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
        {
          --v15;
          v16 += 4;
          if ( !v15 )
            goto LABEL_18;
        }
        v17 = (__int64)&v14->vtable[*v16];
      }
      else
      {
LABEL_18:
        v17 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0);
      }
      v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
              Enumerator,
              *(_QWORD *)(v17 + 8));
      v19 = (Il2CppObject *)v18;
      if ( v18 )
      {
        v20 = *(_OWORD *)(v18 + 32);
        *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)(v18 + 16);
        *(_OWORD *)&v36.fields.fakeValue = v20;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v35 = v36;
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v35, 0);
        v22 = System_Collections_Generic_List_long___Contains(
                userServantIds,
                v21,
                (const MethodInfo_3771F30 *)Method_System_Collections_Generic_List_long__Contains__);
        if ( v22 )
        {
          if ( !v5 )
            sub_1C2D6EC(v22, v23);
          items = v5->fields._items;
          v27 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            sub_1C2D6EC(v22, v23);
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v19,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v19;
            sub_1C2D434((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v19, v24, v25);
          }
        }
      }
    }
    v30 = Enumerator->klass;
    v31 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_33;
      }
      v33 = (__int64)&v30->vtable[*v32];
    }
    else
    {
LABEL_33:
      v33 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                                                               Enumerator,
                                                               *(_QWORD *)(v33 + 8));
  }
  if ( !v5 )
LABEL_40:
    sub_1C2D6EC(list, v7);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


int32_t UserServantMaster__GetHaveServantSkillLevelMax(
        UserServantMaster_o *this,
        int32_t svtId,
        int32_t skillIdx,
        const MethodInfo *method)
{
  __int64 v7; // x19
  UserServantEntity_o *All_object; // x0
  const MethodInfo *v9; // x1
  System_Object_array *AllList; // x20
  System_Predicate_object__o *v11; // x21
  UserServantEntity_o *v12; // x20
  System_Comparison_T__o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x2

  if ( (byte_4C28335 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_FindAll_UserServantEntity___);
    sub_1C2D490(&Method_System_Array_Sort_UserServantEntity___);
    sub_1C2D490(&System_Comparison_UserServantEntity__TypeInfo);
    sub_1C2D490(&System_Predicate_UserServantEntity__TypeInfo);
    sub_1C2D490(&Method_UserServantMaster___c__DisplayClass32_0__GetHaveServantSkillLevelMax_b__0__);
    sub_1C2D490(&Method_UserServantMaster___c__DisplayClass32_0__GetHaveServantSkillLevelMax_b__1__);
    sub_1C2D490(&UserServantMaster___c__DisplayClass32_0_TypeInfo);
    byte_4C28335 = 1;
  }
  v7 = sub_1C2D6DC(UserServantMaster___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_10;
  *(_DWORD *)(v7 + 16) = svtId;
  *(_DWORD *)(v7 + 20) = skillIdx;
  AllList = (System_Object_array *)UserServantMaster__getAllList(this, v9);
  v11 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_UserServantEntity__TypeInfo);
  System_Predicate_object____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_UserServantMaster___c__DisplayClass32_0__GetHaveServantSkillLevelMax_b__0__,
    0);
  All_object = (UserServantEntity_o *)System_Array__FindAll_object_(
                                        AllList,
                                        (System_Predicate_T__o *)v11,
                                        (const MethodInfo_31D3FC4 *)Method_System_Array_FindAll_UserServantEntity___);
  if ( !All_object )
    goto LABEL_10;
  v12 = All_object;
  if ( All_object->fields.id.fields.hiddenValue )
  {
    v13 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_object____ctor(
      v13,
      (Il2CppObject *)v7,
      Method_UserServantMaster___c__DisplayClass32_0__GetHaveServantSkillLevelMax_b__1__,
      0);
    System_Array__Sort_object__50966632(
      (System_Object_array *)v12,
      v13,
      (const MethodInfo_309B068 *)Method_System_Array_Sort_UserServantEntity___);
    if ( !LODWORD(v12->fields.id.fields.hiddenValue) )
      sub_1C2D6F4(v14, v9, v15);
    All_object = (UserServantEntity_o *)v12->fields.id.fields.fakeValue;
    if ( All_object )
      return UserServantEntity__getSkillLevel(All_object, *(_DWORD *)(v7 + 20), 0);
LABEL_10:
    sub_1C2D6EC(All_object, v9);
  }
  return 0;
}


int32_t UserServantMaster__GetMaxTreasureDeviceLevel(
        UserServantMaster_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v8; // x1
  UserServantEntity_array *AllList; // x21
  __int64 v10; // x2
  il2cpp_array_size_t max_length; // x8
  int32_t v12; // w22
  unsigned __int64 i; // x25
  UserServantEntity_o *v14; // x28
  __int64 v15; // x23
  __int64 v16; // x24
  int32_t treasureDeviceLv1; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4C2832C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&System_Math_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2832C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___),
        AllList = UserServantMaster__getAllList(this, v8),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0
    || (Instance = (Il2CppObject *)UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Instance, 1, servantId, 0),
        !AllList) )
  {
LABEL_21:
    sub_1C2D6EC(Instance, v6);
  }
  max_length = AllList->max_length;
  v12 = (unsigned __int8)Instance & 1;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C2D6F4(Instance, v6, v10);
      v14 = AllList->m_Items[i];
      if ( v14 )
      {
        v16 = *(_QWORD *)&v14->fields.svtId.fields.currentCryptoKey;
        v15 = *(_QWORD *)&v14->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v19.fields.currentCryptoKey = v16;
        *(_QWORD *)&v19.fields.fakeValue = v15;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v19, 0);
        if ( !MasterData_object )
          goto LABEL_21;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_21;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                     (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Instance[2],
                                     0);
        if ( (_DWORD)Instance == servantId )
        {
          treasureDeviceLv1 = v14->fields.treasureDeviceLv1;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          Instance = (Il2CppObject *)System_Math__Max_64982040(v12, treasureDeviceLv1, 0);
          v12 = (int)Instance;
        }
      }
      LODWORD(max_length) = AllList->max_length;
    }
  }
  return v12;
}


int32_t UserServantMaster__GetServantHavingCount(
        UserServantMaster_o *this,
        int32_t servantId,
        bool isCheckPresentBox,
        const MethodInfo *method)
{
  UserServantEntity_array *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v10; // x1
  __int64 v11; // x2
  il2cpp_array_size_t max_length; // x8
  UserServantEntity_array *v13; // x23
  int32_t v14; // w21
  unsigned __int64 v15; // x27
  UserServantEntity_o *v16; // x8
  __int64 v17; // x24
  __int64 v18; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4C2832A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2832A = 1;
  }
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = UserServantMaster__getAllList(this, v10);
  if ( !Instance )
    goto LABEL_23;
  max_length = Instance->max_length;
  v13 = Instance;
  if ( (int)max_length < 1 )
  {
    v14 = 0;
    if ( !isCheckPresentBox )
      return v14;
    goto LABEL_19;
  }
  v14 = 0;
  v15 = 0;
  do
  {
    if ( v15 >= (unsigned int)max_length )
      sub_1C2D6F4(Instance, v8, v11);
    v16 = v13->m_Items[v15];
    if ( v16 )
    {
      v18 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
      v17 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v20.fields.currentCryptoKey = v18;
      *(_QWORD *)&v20.fields.fakeValue = v17;
      Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v20, 0);
      if ( !MasterData_object )
        goto LABEL_23;
      Instance = (UserServantEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                              (int32_t)Instance,
                                              (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_23;
      Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance->m_Items,
                                              0);
      if ( (_DWORD)Instance == servantId )
        ++v14;
    }
    LODWORD(max_length) = v13->max_length;
    ++v15;
  }
  while ( (__int64)v15 < (int)max_length );
  if ( isCheckPresentBox )
  {
LABEL_19:
    Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
      if ( Instance )
      {
        v14 += UserPresentBoxMaster__GetCount((UserPresentBoxMaster_o *)Instance, 1, servantId, 0);
        return v14;
      }
    }
LABEL_23:
    sub_1C2D6EC(Instance, v8);
  }
  return v14;
}


int32_t UserServantMaster__GetServantHavingTdLvCount(
        UserServantMaster_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  UserServantEntity_array *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v8; // x1
  __int64 v9; // x2
  il2cpp_array_size_t max_length; // x8
  UserServantEntity_array *v11; // x21
  int v12; // w25
  unsigned __int64 v13; // x26
  UserServantEntity_o *v14; // x22
  __int64 v15; // x23
  __int64 v16; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4C2832B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2832B = 1;
  }
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = UserServantMaster__getAllList(this, v8);
  if ( !Instance )
    goto LABEL_23;
  max_length = Instance->max_length;
  v11 = Instance;
  if ( (int)max_length >= 1 )
  {
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)max_length )
        sub_1C2D6F4(Instance, v6, v9);
      v14 = v11->m_Items[v13];
      if ( v14 )
      {
        v16 = *(_QWORD *)&v14->fields.svtId.fields.currentCryptoKey;
        v15 = *(_QWORD *)&v14->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v18.fields.currentCryptoKey = v16;
        *(_QWORD *)&v18.fields.fakeValue = v15;
        Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                v18,
                                                0);
        if ( !MasterData_object )
          goto LABEL_23;
        Instance = (UserServantEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                (int32_t)Instance,
                                                (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_23;
        Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance->m_Items,
                                                0);
        if ( (_DWORD)Instance == servantId )
        {
          Instance = (UserServantEntity_array *)UserServantEntity__IsWithdrawal(v14, 0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            v12 += v14->fields.treasureDeviceLv1;
        }
      }
      LODWORD(max_length) = v11->max_length;
      if ( (__int64)++v13 >= (int)max_length )
        goto LABEL_19;
    }
  }
  v12 = 0;
LABEL_19:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (UserServantEntity_array *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !Instance )
LABEL_23:
    sub_1C2D6EC(Instance, v6);
  return UserPresentBoxMaster__GetServantCount((UserPresentBoxMaster_o *)Instance, servantId, 0) + v12;
}


int32_t UserServantMaster__GetServantHavintLimitMaxCount(
        UserServantMaster_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  Il2CppObject *MasterData_object; // x22
  NetworkManager_c *v9; // x0
  int64_t userIdNumber; // x27
  UserServantEntity_array *AllList; // x0
  UserServantMaster___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_object__bool__o *_9__35_0; // x21
  Il2CppObject *v15; // x23
  struct UserServantMaster___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  DataManager_c *klass; // x8
  DataManager_o *v20; // x19
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x19
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x23
  __int128 v36; // q0
  __int64 v37; // x24
  __int64 v38; // x25
  __int64 v39; // x0
  Il2CppObject *Entity; // x0
  __int64 v41; // x1
  Il2CppObject *v42; // x24
  __int64 v43; // x23
  __int64 v44; // x25
  int32_t v45; // w0
  int v46; // w8
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  int32_t v52; // [xsp+Ch] [xbp-A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_4C28337 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_1C2D490(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__35_0__);
    sub_1C2D490(&UserServantMaster___c_TypeInfo);
    byte_4C28337 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  userIdNumber = v9->static_fields->userIdNumber;
  AllList = UserServantMaster__getAllList(this, v7);
  v12 = UserServantMaster___c_TypeInfo;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)AllList;
  if ( !UserServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantMaster___c_TypeInfo);
    v12 = UserServantMaster___c_TypeInfo;
  }
  _9__35_0 = (System_Func_object__bool__o *)v12->static_fields->__9__35_0;
  if ( !_9__35_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = UserServantMaster___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__35_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_UserServantEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__35_0,
      v15,
      Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__35_0__,
      0);
    static_fields = UserServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__35_0 = (struct System_Func_UserServantEntity__bool__o *)_9__35_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__35_0, (int32_t)_9__35_0, v17, v18);
  }
  Instance = (DataManager_o *)System_Linq_Enumerable__Where_object_(
                                v13,
                                (System_Func_TSource__bool__o *)_9__35_0,
                                (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  if ( !Instance )
LABEL_62:
    sub_1C2D6EC(Instance, v6);
  klass = Instance->klass;
  v20 = Instance;
  v21 = *(unsigned __int16 *)&Instance->klass->_2.rank;
  if ( *(_WORD *)&Instance->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_UserServantEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_21;
    }
    v23 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_21:
    v23 = sub_1C7DCA8(Instance, System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, 0);
  }
  v25 = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  if ( !v25 )
    sub_1C2D6EC(0, v24);
  v52 = 0;
  while ( 1 )
  {
    v26 = *(_QWORD *)v25;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_29;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_29:
      v29 = sub_1C7DCA8(v25, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
      break;
    v30 = *(_QWORD *)v25;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v32 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_36;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_36:
      v33 = sub_1C7DCA8(v25, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0);
    }
    v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
    v35 = v34;
    if ( v34 )
    {
      v36 = *(_OWORD *)(v34 + 64);
      *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)(v34 + 48);
      *(_OWORD *)&v54.fields.fakeValue = v36;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v53 = v54;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v53, 0) == userIdNumber
        && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v35, 0) )
      {
        v38 = *(_QWORD *)(v35 + 80);
        v37 = *(_QWORD *)(v35 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v55.fields.currentCryptoKey = v38;
        *(_QWORD *)&v55.fields.fakeValue = v37;
        v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v55, 0);
        if ( !MasterData_object )
          sub_1C2D6EC(v39, (unsigned int)v39);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v39,
                   (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v42 = Entity;
        if ( !Entity )
          sub_1C2D6EC(0, v41);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
               (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[2],
               0) == servantId )
        {
          v44 = *(_QWORD *)(v35 + 96);
          v43 = *(_QWORD *)(v35 + 104);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v56.fields.currentCryptoKey = v44;
          *(_QWORD *)&v56.fields.fakeValue = v43;
          v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v56, 0);
          v46 = v52;
          if ( v45 == LODWORD(v42[5].monitor) )
            v46 = v52 + 1;
          v52 = v46;
        }
      }
    }
  }
  v47 = *(_QWORD *)v25;
  v48 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
  {
    v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_57;
    }
    v50 = v47 + 16LL * *v49 + 312;
  }
  else
  {
LABEL_57:
    v50 = sub_1C7DCA8(v25, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v50)(v25, *(_QWORD *)(v50 + 8));
  return v52;
}


int32_t UserServantMaster__GetSvtEquipFriendShip(UserServantMaster_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v6; // x26
  int32_t Count; // w0
  int32_t v8; // w22
  int32_t v9; // w21
  int32_t v10; // w23
  Il2CppObject *Item; // x0
  Il2CppObject v12; // q0
  Il2CppObject *v13; // x24
  void *monitor; // x24
  Il2CppClass *klass; // x25
  Il2CppObject *Entity; // x0
  ServantEntity_o *v17; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4C28338 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C28338 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_29;
  v6 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v10,
               (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Item )
      {
        v12 = Item[4];
        v13 = Item;
        *(Il2CppObject *)&v20.fields.currentCryptoKey = Item[3];
        *(Il2CppObject *)&v20.fields.fakeValue = v12;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v19 = v20;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v19, 0) == v6
          && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v13, 0) )
        {
          klass = v13[5].klass;
          monitor = v13[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v21.fields.currentCryptoKey = klass;
          *(_QWORD *)&v21.fields.fakeValue = monitor;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v21, 0);
          if ( !MasterData_object )
            break;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Entity )
          {
            v17 = (ServantEntity_o *)Entity;
            if ( SvtType__IsKeepServantEquip(HIDWORD(Entity[5].klass), 0) )
              v9 += ServantEntity__get_IsFriendShipSvtEquip(v17, 0);
          }
        }
      }
      if ( v8 == ++v10 )
        return v9;
    }
LABEL_29:
    sub_1C2D6EC(Instance, v4);
  }
  return 0;
}


bool UserServantMaster__IsEquipCostume(
        UserServantMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  __int64 v7; // x20
  System_Object_array *All_object; // x0
  const MethodInfo *v9; // x1
  System_Object_array *AllList; // x19
  System_Predicate_object__o *v11; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  System_Func_object__bool__o *v13; // x21

  if ( (byte_4C2833D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_FindAll_UserServantEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____78036496);
    sub_1C2D490(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C2D490(&System_Predicate_UserServantEntity__TypeInfo);
    sub_1C2D490(&Method_UserServantMaster___c__DisplayClass41_0__IsEquipCostume_b__0__);
    sub_1C2D490(&Method_UserServantMaster___c__DisplayClass41_0__IsEquipCostume_b__1__);
    sub_1C2D490(&UserServantMaster___c__DisplayClass41_0_TypeInfo);
    byte_4C2833D = 1;
  }
  v7 = sub_1C2D6DC(UserServantMaster___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_9;
  *(_DWORD *)(v7 + 16) = svtId;
  *(_DWORD *)(v7 + 20) = costumeId;
  if ( costumeId < 11 )
    return 0;
  AllList = (System_Object_array *)UserServantMaster__getAllList(this, v9);
  v11 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_UserServantEntity__TypeInfo);
  System_Predicate_object____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_UserServantMaster___c__DisplayClass41_0__IsEquipCostume_b__0__,
    0);
  All_object = System_Array__FindAll_object_(
                 AllList,
                 (System_Predicate_T__o *)v11,
                 (const MethodInfo_31D3FC4 *)Method_System_Array_FindAll_UserServantEntity___);
  if ( !All_object )
LABEL_9:
    sub_1C2D6EC(All_object, v9);
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)All_object;
  if ( All_object->max_length )
  {
    v13 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_UserServantEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v13,
      (Il2CppObject *)v7,
      Method_UserServantMaster___c__DisplayClass41_0__IsEquipCostume_b__1__,
      0);
    return System_Linq_Enumerable__FirstOrDefault_object__51348472(
             v12,
             (System_Func_TSource__bool__o *)v13,
             (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____78036496) != 0;
  }
  return 0;
}


bool UserServantMaster__IsServantHaving(
        UserServantMaster_o *this,
        int32_t svtId,
        bool checkPresentBox,
        const MethodInfo *method)
{
  return UserServantMaster__GetServantHavingCount(this, svtId, checkPresentBox, method) > 0;
}


// local variable allocation has failed, the output may be wrong!
bool UserServantMaster__IsServantHavingLimitMax(
        UserServantMaster_o *this,
        int32_t svtId,
        int32_t condNum,
        const MethodInfo *method)
{
  return UserServantMaster__GetServantHavintLimitMaxCount(this, svtId, *(const MethodInfo **)&condNum) >= condNum;
}


bool UserServantMaster__TryGetEntityFromSvtId(
        UserServantMaster_o *this,
        UserServantEntity_o **svtEnt,
        int64_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x22
  __int64 v8; // x0
  const MethodInfo *v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *List; // x20
  System_Func_object__bool__o *v11; // x21
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C2831A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____78036496);
    sub_1C2D490(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C2D490(&Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__);
    sub_1C2D490(&UserServantMaster___c__DisplayClass1_0_TypeInfo);
    byte_4C2831A = 1;
  }
  v7 = (Il2CppObject *)sub_1C2D6DC(UserServantMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor(v7, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  v7[1].klass = (Il2CppClass *)svtId;
  List = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getList(this, v9);
  v11 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    v7,
    Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__,
    0);
  v12 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
          List,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____78036496);
  *svtEnt = (UserServantEntity_o *)v12;
  sub_1C2D434((CGThumbnailListItem_o *)svtEnt, (int32_t)v12, v13, v14);
  return *svtEnt != 0;
}


bool UserServantMaster__TryGetEntityListBySvtId(
        UserServantMaster_o *this,
        System_Collections_Generic_List_UserServantEntity__o **userServantList,
        int32_t svtId,
        bool isIncludeStorage,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v8; // x21
  const MethodInfo *v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x24
  void *monitor; // x25
  Il2CppClass *v24; // x26
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x2
  const MethodInfo *v38; // x3
  System_Collections_ObjectModel_Collection_T__c *v39; // x8
  System_Collections_ObjectModel_Collection_T__o *v40; // x22
  unsigned __int64 v41; // x26
  Il2CppObject *v42; // x23
  void *v43; // x24
  Il2CppClass *v44; // x25
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4C2833B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantStorageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2833B = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_9;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v16 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8))
        & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_16:
      v20 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0);
    }
    v22 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                            Enumerator,
                            *(_QWORD *)(v20 + 8));
    if ( !v22 )
      sub_1C2D6EC(0, v21);
    v24 = v22[5].klass;
    monitor = v22[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v51.fields.currentCryptoKey = v24;
    *(_QWORD *)&v51.fields.fakeValue = monitor;
    v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v51, 0);
    if ( (_DWORD)v25 == svtId )
    {
      if ( !v8 )
        sub_1C2D6EC(v25, v26);
      items = v8->fields._items;
      v30 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++v8->fields._version;
      if ( !items )
        sub_1C2D6EC(v25, v26);
      size = v8->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          v22,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v22;
        sub_1C2D434((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v22, v27, v28);
      }
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_31;
    }
    v36 = (__int64)&v33->vtable[*v35];
  }
  else
  {
LABEL_31:
    v36 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  if ( isIncludeStorage )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantStorageMaster___);
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)UserServantStorageMaster__getList(
                                                                 (UserServantStorageMaster_o *)list,
                                                                 v9);
      if ( list )
      {
        v39 = list[1].klass;
        v40 = list;
        if ( (int)v39 >= 1 )
        {
          v41 = 0;
          while ( 1 )
          {
            if ( v41 >= (unsigned int)v39 )
              sub_1C2D6F4(list, v9, v37);
            v42 = (Il2CppObject *)*((_QWORD *)&v40[1].monitor + v41);
            if ( v42 )
            {
              v44 = v42[5].klass;
              v43 = v42[5].monitor;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v52.fields.currentCryptoKey = v44;
              *(_QWORD *)&v52.fields.fakeValue = v43;
              list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                                         v52,
                                                                         0);
              if ( (_DWORD)list == svtId )
              {
                if ( !v8 )
                  goto LABEL_57;
                v45 = v8->fields._items;
                v46 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v8->fields._version;
                if ( !v45 )
                  goto LABEL_57;
                v47 = v8->fields._size;
                if ( (unsigned int)v47 >= LODWORD(v45->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v8,
                    v42,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
                }
                else
                {
                  v48 = &v45->obj.klass + v47;
                  v8->fields._size = v47 + 1;
                  v48[4] = (Il2CppClass *)v42;
                  sub_1C2D434((CGThumbnailListItem_o *)(v48 + 4), (int32_t)v42, v37, v38);
                }
              }
            }
            LODWORD(v39) = v40[1].klass;
            if ( (__int64)++v41 >= (int)v39 )
              goto LABEL_51;
          }
        }
        goto LABEL_51;
      }
    }
LABEL_57:
    sub_1C2D6EC(list, v9);
  }
LABEL_51:
  *userServantList = (System_Collections_Generic_List_UserServantEntity__o *)v8;
  sub_1C2D434((CGThumbnailListItem_o *)userServantList, (int32_t)v8, v37, v38);
  if ( !*userServantList )
    goto LABEL_57;
  return (*userServantList)->fields._size > 0;
}


bool UserServantMaster__TryGetEntitySvtStorageListBySvtId(
        UserServantMaster_o *this,
        System_Collections_Generic_List_UserServantEntity__o **userStorageServantList,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x21
  UserServantEntity_array *Master_object; // x0
  const MethodInfo *v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  il2cpp_array_size_t max_length; // x8
  UserServantEntity_array *v12; // x22
  unsigned __int64 v13; // x26
  Il2CppObject *v14; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4C2833C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantStorageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2833C = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantEntity_array *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantStorageMaster___);
  if ( !Master_object )
    goto LABEL_23;
  Master_object = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Master_object, v8);
  if ( !Master_object )
    goto LABEL_23;
  max_length = Master_object->max_length;
  v12 = Master_object;
  if ( (int)max_length >= 1 )
  {
    v13 = 0;
    do
    {
      if ( v13 >= (unsigned int)max_length )
        sub_1C2D6F4(Master_object, v8, v9);
      v14 = (Il2CppObject *)v12->m_Items[v13];
      if ( v14 )
      {
        klass = v14[5].klass;
        monitor = v14[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v22.fields.currentCryptoKey = klass;
        *(_QWORD *)&v22.fields.fakeValue = monitor;
        Master_object = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                     v22,
                                                     0);
        if ( (_DWORD)Master_object == svtId )
        {
          if ( !v6 )
            goto LABEL_23;
          items = v6->fields._items;
          v18 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v6->fields._version;
          if ( !items )
            goto LABEL_23;
          size = v6->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              v14,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v14;
            sub_1C2D434((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v14, v9, v10);
          }
        }
      }
      LODWORD(max_length) = v12->max_length;
    }
    while ( (__int64)++v13 < (int)max_length );
  }
  *userStorageServantList = (System_Collections_Generic_List_UserServantEntity__o *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)userStorageServantList, (int32_t)v6, v9, v10);
  if ( !*userStorageServantList )
LABEL_23:
    sub_1C2D6EC(Master_object, v8);
  return (*userStorageServantList)->fields._size > 0;
}


void UserServantMaster__continueDeviceUserServant(UserServantMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  int64_t v4; // x1
  int64_t list; // x0
  int32_t Count; // w21
  __int64 v7; // x24
  int32_t v8; // w22
  __int128 v9; // q0
  int64_t v10; // x23
  __int128 v11; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  System_Int64_array *v15; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+40h] [xbp-70h]

  if ( (byte_4C2832F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&UserServantNewManager_TypeInfo);
    byte_4C2832F = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  list = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    list = (int64_t)NetworkManager_TypeInfo;
  }
  if ( Count >= 1 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(list + 184) + 64LL);
    v8 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v8,
                        (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( list )
      {
        v9 = *(_OWORD *)(list + 64);
        v10 = list;
        *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)(list + 48);
        *(_OWORD *)&v18.fields.fakeValue = v9;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v17 = v18;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v17, 0);
        if ( list == v7 )
        {
          list = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v10, 0);
          if ( (list & 1) == 0 )
          {
            v11 = *(_OWORD *)(v10 + 32);
            *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)(v10 + 16);
            *(_OWORD *)&v18.fields.fakeValue = v11;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v16 = v18;
            list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v16, 0);
            if ( !v3 )
              break;
            items = v3->fields._items;
            v13 = Method_System_Collections_Generic_List_long__Add__;
            ++v3->fields._version;
            if ( !items )
              break;
            size = v3->fields._size;
            v4 = list;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_long___AddWithResize(
                v3,
                list,
                *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
            }
            else
            {
              v3->fields._size = size + 1;
              items->m_Items[size] = list;
            }
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_26;
    }
LABEL_30:
    sub_1C2D6EC(list, v4);
  }
LABEL_26:
  if ( !v3 )
    goto LABEL_30;
  v15 = System_Collections_Generic_List_long___ToArray(
          v3,
          (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  UserServantNewManager__SetOld_43329660(v15, 0);
}


UserServantEntity_array *UserServantMaster__getAllList(UserServantMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *List; // x20
  System_Collections_Generic_List_object__o *v4; // x19
  UserServantEntity_array *Instance; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C28331 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor___77961784);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C28331 = 1;
  }
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, method);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_58233976(
    v4,
    List,
    (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___77961784);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0
    || (Instance = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, v6), !v4) )
  {
    sub_1C2D6EC(Instance, v6);
  }
  System_Collections_Generic_List_object___AddRange(
    v4,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v4,
                                      (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *UserServantMaster__getCombineMaterialList(UserServantMaster_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v6; // x27
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w23
  __int128 v10; // q0
  int64_t v11; // x24
  __int64 v12; // x25
  __int64 v13; // x26
  ServantEntity_o *v14; // x25
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4C28330 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C28330 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_33;
  v6 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v9,
                            (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v10 = *(_OWORD *)(Instance + 64);
        v11 = Instance;
        *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v23.fields.fakeValue = v10;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v22 = v23;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v22, 0);
        if ( Instance == v6 )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v11, 0);
          if ( (Instance & 1) == 0 )
          {
            v13 = *(_QWORD *)(v11 + 80);
            v12 = *(_QWORD *)(v11 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v24.fields.currentCryptoKey = v13;
            *(_QWORD *)&v24.fields.fakeValue = v12;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v24, 0);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v14 = (ServantEntity_o *)Instance;
            Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0);
            if ( (Instance & 1) != 0 )
            {
              Instance = ServantEntity__get_IsServantMaterialTd(v14, 0);
              if ( (Instance & 1) == 0 )
              {
                if ( !v8 )
                  break;
                items = v8->fields._items;
                v18 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v8->fields._version;
                if ( !items )
                  break;
                size = v8->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v8,
                    (Il2CppObject *)v11,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
                }
                else
                {
                  v20 = &items->obj.klass + size;
                  v8->fields._size = size + 1;
                  v20[4] = (Il2CppClass *)v11;
                  sub_1C2D434((CGThumbnailListItem_o *)(v20 + 4), v11, v15, v16);
                }
              }
            }
          }
        }
      }
      if ( Count == ++v9 )
        goto LABEL_31;
    }
LABEL_33:
    sub_1C2D6EC(Instance, v4);
  }
LABEL_31:
  if ( !v8 )
    goto LABEL_33;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


int32_t UserServantMaster__getCount(
        UserServantMaster_o *this,
        int32_t *servantSum,
        int32_t *servantEquipSum,
        bool friendShipSvtEqExclude,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x23
  __int64 v11; // x29
  int32_t Count; // w0
  int32_t v13; // w24
  int32_t v14; // w25
  int32_t v15; // w26
  Il2CppObject *Item; // x0
  Il2CppObject v17; // q0
  Il2CppObject *v18; // x27
  void *monitor; // x27
  Il2CppClass *klass; // x28
  Il2CppObject *Entity; // x0
  int32_t klass_high; // w28
  ServantEntity_o *v23; // x27
  int32_t *v25; // [xsp+0h] [xbp-B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4C2831C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2831C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_33;
  v11 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v25 = servantEquipSum;
    v13 = Count;
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v15,
               (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Item )
      {
        v17 = Item[4];
        v18 = Item;
        *(Il2CppObject *)&v28.fields.currentCryptoKey = Item[3];
        *(Il2CppObject *)&v28.fields.fakeValue = v17;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v27 = v28;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v27, 0) == v11
          && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v18, 0) )
        {
          klass = v18[5].klass;
          monitor = v18[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v29.fields.currentCryptoKey = klass;
          *(_QWORD *)&v29.fields.fakeValue = monitor;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v29, 0);
          if ( !MasterData_object )
            break;
          ++v14;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Entity )
          {
            klass_high = HIDWORD(Entity[5].klass);
            v23 = (ServantEntity_o *)Entity;
            if ( SvtType__IsKeepServant(klass_high, 0) )
            {
              ++*servantSum;
            }
            else if ( SvtType__IsKeepServantEquip(klass_high, 0)
                   && (!friendShipSvtEqExclude || !ServantEntity__get_IsFriendShipSvtEquip(v23, 0)) )
            {
              ++*v25;
            }
          }
        }
      }
      if ( v13 == ++v15 )
        return v14;
    }
LABEL_33:
    sub_1C2D6EC(Instance, v9);
  }
  return 0;
}


int32_t UserServantMaster__getCountWithoutMaterial(
        UserServantMaster_o *this,
        int32_t *servantSum,
        int32_t *servantEquipSum,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x22
  __int64 v10; // x28
  int32_t Count; // w0
  int32_t v12; // w23
  int32_t v13; // w24
  int32_t v14; // w25
  Il2CppObject *Item; // x0
  Il2CppObject v16; // q0
  Il2CppObject *v17; // x26
  void *monitor; // x26
  Il2CppClass *klass; // x27
  Il2CppObject *Entity; // x0
  int32_t klass_high; // w26
  int32_t *v23; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4C2831D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2831D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
LABEL_32:
    sub_1C2D6EC(Instance, v8);
  v10 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v23 = servantEquipSum;
    v12 = Count;
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_32;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v14,
               (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Item )
      {
        v16 = Item[4];
        v17 = Item;
        *(Il2CppObject *)&v25.fields.currentCryptoKey = Item[3];
        *(Il2CppObject *)&v25.fields.fakeValue = v16;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v24 = v25;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v24, 0) == v10
          && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v17, 0) )
        {
          klass = v17[5].klass;
          monitor = v17[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v26.fields.currentCryptoKey = klass;
          *(_QWORD *)&v26.fields.fakeValue = monitor;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v26, 0);
          if ( !MasterData_object )
            goto LABEL_32;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Entity )
          {
            klass_high = HIDWORD(Entity[5].klass);
            if ( SvtType__IsOrganization(klass_high, 0) )
            {
              ++*servantSum;
LABEL_27:
              ++v13;
              goto LABEL_28;
            }
            if ( SvtType__IsServantEquip(klass_high, 0) )
            {
              ++*v23;
              goto LABEL_27;
            }
          }
        }
      }
LABEL_28:
      if ( v12 == ++v14 )
        return v13;
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_o *UserServantMaster__getHeroineData(
        UserServantMaster_o *this,
        int32_t heroineId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  Il2CppObject *Item; // x0
  UserServantEntity_o *v10; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4C2832D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2832D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v8,
               (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Item )
      {
        v10 = (UserServantEntity_o *)Item;
        klass = Item[5].klass;
        monitor = Item[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v14.fields.currentCryptoKey = klass;
        *(_QWORD *)&v14.fields.fakeValue = monitor;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v14, 0) == heroineId
          && UserServantEntity__IsHeroine(v10, 0) )
        {
          return v10;
        }
      }
      if ( v7 == ++v8 )
        return 0;
    }
LABEL_15:
    sub_1C2D6EC(list, *(_QWORD *)&heroineId);
  }
  return 0;
}


UserServantEntity_array *UserServantMaster__getKeepServantEquipList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v6; // x27
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w23
  __int128 v10; // q0
  int64_t v11; // x24
  __int64 v12; // x25
  __int64 v13; // x26
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4C28326 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C28326 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_32;
  v6 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v9,
                            (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v10 = *(_OWORD *)(Instance + 64);
        v11 = Instance;
        *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v22.fields.fakeValue = v10;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v21 = v22;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v21, 0);
        if ( Instance == v6 )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v11, 0);
          if ( (Instance & 1) == 0 )
          {
            v13 = *(_QWORD *)(v11 + 80);
            v12 = *(_QWORD *)(v11 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v23.fields.currentCryptoKey = v13;
            *(_QWORD *)&v23.fields.fakeValue = v12;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v23, 0);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            Instance = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)Instance, 0);
            if ( (Instance & 1) != 0 )
            {
              if ( !v8 )
                break;
              items = v8->fields._items;
              v17 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v8->fields._version;
              if ( !items )
                break;
              size = v8->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  (Il2CppObject *)v11,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
              }
              else
              {
                v19 = &items->obj.klass + size;
                v8->fields._size = size + 1;
                v19[4] = (Il2CppClass *)v11;
                sub_1C2D434((CGThumbnailListItem_o *)(v19 + 4), v11, v14, v15);
              }
            }
          }
        }
      }
      if ( Count == ++v9 )
        goto LABEL_30;
    }
LABEL_32:
    sub_1C2D6EC(Instance, v4);
  }
LABEL_30:
  if ( !v8 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *UserServantMaster__getKeepServantList(UserServantMaster_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v6; // x27
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w23
  __int128 v10; // q0
  int64_t v11; // x24
  __int64 v12; // x25
  __int64 v13; // x26
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4C28324 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C28324 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_32;
  v6 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v9,
                            (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v10 = *(_OWORD *)(Instance + 64);
        v11 = Instance;
        *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v22.fields.fakeValue = v10;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v21 = v22;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v21, 0);
        if ( Instance == v6 )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v11, 0);
          if ( (Instance & 1) == 0 )
          {
            v13 = *(_QWORD *)(v11 + 80);
            v12 = *(_QWORD *)(v11 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v23.fields.currentCryptoKey = v13;
            *(_QWORD *)&v23.fields.fakeValue = v12;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v23, 0);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0);
            if ( (Instance & 1) != 0 )
            {
              if ( !v8 )
                break;
              items = v8->fields._items;
              v17 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v8->fields._version;
              if ( !items )
                break;
              size = v8->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  (Il2CppObject *)v11,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
              }
              else
              {
                v19 = &items->obj.klass + size;
                v8->fields._size = size + 1;
                v19[4] = (Il2CppClass *)v11;
                sub_1C2D434((CGThumbnailListItem_o *)(v19 + 4), v11, v14, v15);
              }
            }
          }
        }
      }
      if ( Count == ++v9 )
        goto LABEL_30;
    }
LABEL_32:
    sub_1C2D6EC(Instance, v4);
  }
LABEL_30:
  if ( !v8 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *UserServantMaster__getList(UserServantMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0

  if ( (byte_4C2831E & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C2831E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  return UserServantMaster__getList_42982924(this, v4->static_fields->userIdNumber, v2);
}


UserServantEntity_array *UserServantMaster__getList_42982924(
        UserServantMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v7; // x21
  int32_t v8; // w23
  __int128 v9; // q0
  UserServantEntity_o *v10; // x24
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-70h]

  if ( (byte_4C2831F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2831F = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v8,
                        (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( list )
      {
        v9 = *(_OWORD *)(list + 64);
        v10 = (UserServantEntity_o *)list;
        *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)(list + 48);
        *(_OWORD *)&v19.fields.fakeValue = v9;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v18 = v19;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v18, 0);
        if ( list == userId )
        {
          list = UserServantEntity__IsWithdrawal(v10, 0);
          if ( (list & 1) == 0 )
          {
            if ( !v7 )
              break;
            items = v7->fields._items;
            v14 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v7->fields._version;
            if ( !items )
              break;
            size = v7->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                (Il2CppObject *)v10,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
            }
            else
            {
              v16 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v16[4] = (Il2CppClass *)v10;
              sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v10, v11, v12);
            }
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1C2D6EC(list, userId);
  }
LABEL_18:
  if ( !v7 )
    goto LABEL_20;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v7,
                                      (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *UserServantMaster__getNoneCombineSvt(
        UserServantMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v9; // x22
  int32_t v10; // w24
  __int128 v11; // q0
  int64_t v12; // x25
  __int64 v13; // x26
  __int64 v14; // x27
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4C2832E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2832E = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this->fields.list )
    goto LABEL_26;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v10,
                            (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v11 = *(_OWORD *)(Instance + 64);
        v12 = Instance;
        *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v23.fields.fakeValue = v11;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v22 = v23;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v22, 0);
        if ( Instance == userId )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v12, 0);
          if ( (Instance & 1) == 0 )
          {
            v14 = *(_QWORD *)(v12 + 80);
            v13 = *(_QWORD *)(v12 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v24.fields.currentCryptoKey = v14;
            *(_QWORD *)&v24.fields.fakeValue = v13;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v24, 0);
            if ( !v7 )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  v7,
                                  Instance,
                                  (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            if ( *(_DWORD *)(Instance + 84) != 3 )
            {
              if ( !v9 )
                break;
              items = v9->fields._items;
              v18 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v9->fields._version;
              if ( !items )
                break;
              size = v9->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v9,
                  (Il2CppObject *)v12,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
              }
              else
              {
                v20 = &items->obj.klass + size;
                v9->fields._size = size + 1;
                v20[4] = (Il2CppClass *)v12;
                sub_1C2D434((CGThumbnailListItem_o *)(v20 + 4), v12, v15, v16);
              }
            }
          }
        }
      }
      if ( Count == ++v10 )
        goto LABEL_24;
    }
LABEL_26:
    sub_1C2D6EC(Instance, v6);
  }
LABEL_24:
  if ( !v9 )
    goto LABEL_26;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v9,
                                      (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *UserServantMaster__getNpUpServantList(
        UserServantMaster_o *this,
        UserServantEntity_o *usrSvtEnt,
        const MethodInfo *method)
{
  void *Instance; // x0
  Il2CppObject *v6; // x1
  Il2CppObject *MasterData_object; // x27
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t Count; // w23
  SvtMaterialTdMaster_o *v10; // x24
  __int64 v11; // x25
  __int64 v12; // x26
  System_Object_array *v13; // x24
  int32_t v14; // w25
  __int64 v15; // x27
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject **v18; // x26
  System_Predicate_object__o *v19; // x28
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  void *monitor; // x27
  Il2CppClass *klass; // x28
  int32_t v24; // w27
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4C28329 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Exists_SvtMaterialTdEntity___);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&System_Predicate_SvtMaterialTdEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_UserServantMaster___c__DisplayClass16_0__getNpUpServantList_b__0__);
    sub_1C2D490(&UserServantMaster___c__DisplayClass16_0_TypeInfo);
    byte_4C28329 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_34;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
  if ( !usrSvtEnt )
    goto LABEL_34;
  v10 = (SvtMaterialTdMaster_o *)Instance;
  v12 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v31.fields.currentCryptoKey = v12;
  *(_QWORD *)&v31.fields.fakeValue = v11;
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v31, 0);
  if ( !v10 )
    goto LABEL_34;
  Instance = SvtMaterialTdMaster__GetEntityList(v10, (int32_t)Instance, 0);
  if ( Count >= 1 )
  {
    v13 = (System_Object_array *)Instance;
    v14 = 0;
    do
    {
      v15 = sub_1C2D6DC(UserServantMaster___c__DisplayClass16_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v15, 0);
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_34;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v14,
                   (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( !v15 )
        goto LABEL_34;
      *(_QWORD *)(v15 + 16) = Instance;
      v18 = (Il2CppObject **)(v15 + 16);
      sub_1C2D434((CGThumbnailListItem_o *)(v15 + 16), (int32_t)Instance, v16, v17);
      Instance = *(void **)(v15 + 16);
      if ( Instance )
      {
        Instance = (void *)UserServantEntity__IsWithdrawal((UserServantEntity_o *)Instance, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          v19 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_SvtMaterialTdEntity__TypeInfo);
          System_Predicate_object____ctor(
            v19,
            (Il2CppObject *)v15,
            Method_UserServantMaster___c__DisplayClass16_0__getNpUpServantList_b__0__,
            0);
          Instance = (void *)System_Array__Exists_object_(
                               v13,
                               (System_Predicate_T__o *)v19,
                               (const MethodInfo_31D3260 *)Method_System_Array_Exists_SvtMaterialTdEntity___);
          v6 = *(Il2CppObject **)(v15 + 16);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v8 )
              goto LABEL_34;
LABEL_27:
            items = v8->fields._items;
            v26 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v8->fields._version;
            if ( !items )
              goto LABEL_34;
            size = v8->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                v6,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v28 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v28[4] = (Il2CppClass *)v6;
              sub_1C2D434((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v6, v20, v21);
            }
            continue;
          }
          if ( !v6 )
            goto LABEL_34;
          klass = v6[5].klass;
          monitor = v6[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v32.fields.currentCryptoKey = klass;
          *(_QWORD *)&v32.fields.fakeValue = monitor;
          v6 = (Il2CppObject *)(unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v32, 0);
          Instance = v30;
          if ( !v30 )
            goto LABEL_34;
          Instance = DataMasterBase_object__object__int___GetEntity(
                       v30,
                       (int32_t)v6,
                       (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_34;
          v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                  *((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance + 2),
                  0);
          Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                               usrSvtEnt->fields.svtId,
                               0);
          if ( v24 == (_DWORD)Instance )
          {
            if ( !v8 )
              goto LABEL_34;
            v6 = *v18;
            goto LABEL_27;
          }
        }
      }
    }
    while ( Count != ++v14 );
  }
  if ( !v8 )
LABEL_34:
    sub_1C2D6EC(Instance, v6);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *UserServantMaster__getOrganizationList(UserServantMaster_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v6; // x27
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w23
  __int128 v10; // q0
  int64_t v11; // x24
  __int64 v12; // x25
  __int64 v13; // x26
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4C28325 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C28325 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_32;
  v6 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v9,
                            (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v10 = *(_OWORD *)(Instance + 64);
        v11 = Instance;
        *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v22.fields.fakeValue = v10;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v21 = v22;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v21, 0);
        if ( Instance == v6 )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v11, 0);
          if ( (Instance & 1) == 0 )
          {
            v13 = *(_QWORD *)(v11 + 80);
            v12 = *(_QWORD *)(v11 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v23.fields.currentCryptoKey = v13;
            *(_QWORD *)&v23.fields.fakeValue = v12;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v23, 0);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0);
            if ( (Instance & 1) != 0 )
            {
              if ( !v8 )
                break;
              items = v8->fields._items;
              v17 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v8->fields._version;
              if ( !items )
                break;
              size = v8->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  (Il2CppObject *)v11,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
              }
              else
              {
                v19 = &items->obj.klass + size;
                v8->fields._size = size + 1;
                v19[4] = (Il2CppClass *)v11;
                sub_1C2D434((CGThumbnailListItem_o *)(v19 + 4), v11, v14, v15);
              }
            }
          }
        }
      }
      if ( Count == ++v9 )
        goto LABEL_30;
    }
LABEL_32:
    sub_1C2D6EC(Instance, v4);
  }
LABEL_30:
  if ( !v8 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


int32_t UserServantMaster__getSameSvtNpLvCache(
        UserServantMaster_o *this,
        UserServantEntity_o *usrSvtEnt,
        System_Collections_Generic_Dictionary_int__List_int___o **cachedUserServantNpLvDict,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x22
  int64_t Instance; // x0
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_int__List_int___o *v10; // x22
  __int64 v11; // x23
  __int64 v12; // x24
  int32_t v13; // w21
  int32_t Count; // w23
  System_Collections_Generic_List_int__o *v15; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v17; // x25
  __int64 v18; // x26
  SvtMaterialTdMaster_o *v19; // x24
  int32_t i; // w25
  __int64 v21; // x27
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int64_t *v24; // x26
  int64_t v25; // x8
  __int128 v26; // q0
  int64_t v27; // x0
  __int128 v28; // q1
  int64_t v29; // x28
  System_Predicate_object__o *v30; // x28
  int64_t v31; // x8
  __int64 v32; // x27
  __int64 v33; // x28
  int32_t v34; // w27
  struct System_Int32_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_int__object__o *v38; // x20
  __int64 v39; // x19
  __int64 v40; // x23
  System_Object_array *array; // [xsp+0h] [xbp-E0h]
  System_Collections_Generic_Dictionary_int__List_int___o **v43; // [xsp+8h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+50h] [xbp-90h]
  Il2CppObject *value; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4C28328 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Exists_SvtMaterialTdEntity___);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&System_Predicate_SvtMaterialTdEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_UserServantMaster___c__DisplayClass15_0__getSameSvtNpLvCache_b__0__);
    sub_1C2D490(&UserServantMaster___c__DisplayClass15_0_TypeInfo);
    byte_4C28328 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  value = (Il2CppObject *)v7;
  if ( !usrSvtEnt )
    goto LABEL_57;
  if ( UserServantEntity__IsEventJoin(usrSvtEnt, 0) )
    goto LABEL_12;
  v10 = *cachedUserServantNpLvDict;
  v12 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v48.fields.currentCryptoKey = v12;
  *(_QWORD *)&v48.fields.fakeValue = v11;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v48, 0);
  if ( !v10 )
    goto LABEL_57;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)v10,
          Instance,
          &value,
          (const MethodInfo_33E2A08 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
LABEL_12:
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      DataManager__GetMasterData_object_(
        (DataManager_o *)Instance,
        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = (int64_t)this->fields.list;
      if ( Instance )
      {
        Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
        v15 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v15,
          (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
          v18 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
          v17 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
          v19 = (SvtMaterialTdMaster_o *)MasterData_object;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v49.fields.currentCryptoKey = v18;
          *(_QWORD *)&v49.fields.fakeValue = v17;
          v43 = cachedUserServantNpLvDict;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v49, 0);
          if ( v19 )
          {
            Instance = (int64_t)SvtMaterialTdMaster__GetEntityList(v19, Instance, 0);
            array = (System_Object_array *)Instance;
            if ( Count >= 1 )
            {
              for ( i = 0; Count != i; ++i )
              {
                v21 = sub_1C2D6DC(UserServantMaster___c__DisplayClass15_0_TypeInfo);
                System_Object___ctor((Il2CppObject *)v21, 0);
                Instance = (int64_t)this->fields.list;
                if ( !Instance )
                  goto LABEL_57;
                Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                      i,
                                      (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
                if ( !v21 )
                  goto LABEL_57;
                *(_QWORD *)(v21 + 16) = Instance;
                v24 = (int64_t *)(v21 + 16);
                sub_1C2D434((CGThumbnailListItem_o *)(v21 + 16), Instance, v22, v23);
                Instance = *(_QWORD *)(v21 + 16);
                if ( Instance )
                {
                  Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)Instance, 0);
                  if ( (Instance & 1) == 0 )
                  {
                    Instance = *v24;
                    if ( !*v24 )
                      goto LABEL_57;
                    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0);
                    if ( (Instance & 1) == 0 )
                    {
                      v25 = *v24;
                      if ( !*v24 )
                        goto LABEL_57;
                      v26 = *(_OWORD *)(v25 + 32);
                      *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
                      *(_OWORD *)&v46.fields.fakeValue = v26;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                      v45 = v46;
                      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v45, 0);
                      v28 = *(_OWORD *)&usrSvtEnt->fields.id.fields.fakeValue;
                      v29 = v27;
                      *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&usrSvtEnt->fields.id.fields.currentCryptoKey;
                      *(_OWORD *)&v44.fields.fakeValue = v28;
                      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v44, 0);
                      if ( v29 != Instance )
                      {
                        Instance = UserServantEntity__IsMaterialTd(usrSvtEnt, 0);
                        if ( (Instance & 1) == 0 )
                        {
                          Instance = *v24;
                          if ( !*v24 )
                            goto LABEL_57;
                          Instance = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Instance, 0);
                          if ( (Instance & 1) != 0 )
                          {
                            v30 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_SvtMaterialTdEntity__TypeInfo);
                            System_Predicate_object____ctor(
                              v30,
                              (Il2CppObject *)v21,
                              Method_UserServantMaster___c__DisplayClass15_0__getSameSvtNpLvCache_b__0__,
                              0);
                            Instance = System_Array__Exists_object_(
                                         array,
                                         (System_Predicate_T__o *)v30,
                                         (const MethodInfo_31D3260 *)Method_System_Array_Exists_SvtMaterialTdEntity___);
                            if ( (Instance & 1) == 0 )
                              continue;
                          }
                          else
                          {
                            v31 = *v24;
                            if ( !*v24 )
                              goto LABEL_57;
                            v33 = *(_QWORD *)(v31 + 80);
                            v32 = *(_QWORD *)(v31 + 88);
                            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                            *(_QWORD *)&v50.fields.currentCryptoKey = v33;
                            *(_QWORD *)&v50.fields.fakeValue = v32;
                            v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v50, 0);
                            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                         usrSvtEnt->fields.svtId,
                                         0);
                            if ( v34 != (_DWORD)Instance )
                              continue;
                            Instance = UserServantEntity__IsEventJoin(usrSvtEnt, 0);
                            if ( (Instance & 1) != 0 )
                              continue;
                          }
                          if ( !*v24 )
                            goto LABEL_57;
                          if ( !v15 )
                            goto LABEL_57;
                          v9 = *(unsigned int *)(*v24 + 292);
                          items = v15->fields._items;
                          v36 = Method_System_Collections_Generic_List_int__Add__;
                          ++v15->fields._version;
                          if ( !items )
                            goto LABEL_57;
                          size = v15->fields._size;
                          if ( (unsigned int)size >= LODWORD(items->max_length) )
                          {
                            System_Collections_Generic_List_int___AddWithResize(
                              v15,
                              v9,
                              *(const MethodInfo_376CB60 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v15->fields._size = size + 1;
                            items->m_Items[size] = v9;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            if ( v15 )
            {
              if ( v15->fields._size < 1 )
                return 0;
              v13 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)v15, 0);
              if ( UserServantEntity__IsEventJoin(usrSvtEnt, 0) )
                return v13;
              v38 = (System_Collections_Generic_Dictionary_int__object__o *)*v43;
              v40 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
              v39 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v51.fields.currentCryptoKey = v40;
              *(_QWORD *)&v51.fields.fakeValue = v39;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v51, 0);
              if ( v38 )
              {
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  v38,
                  Instance,
                  (Il2CppObject *)v15,
                  (const MethodInfo_33E1268 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
                return v13;
              }
            }
          }
        }
      }
    }
LABEL_57:
    sub_1C2D6EC(Instance, v9);
  }
  Instance = (int64_t)value;
  if ( !value )
    goto LABEL_57;
  if ( SLODWORD(value[1].monitor) < 1 )
    return 0;
  return System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)value, 0);
}


int32_t UserServantMaster__getServantAllNum(UserServantMaster_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *MasterData_object; // x19
  System_Collections_Generic_List_int__o *v6; // x20
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x25
  __int128 v19; // q0
  int64_t v20; // x26
  NetworkManager_c *v21; // x0
  __int64 v22; // x26
  __int64 v23; // x27
  __int64 v24; // x0
  Il2CppObject *Entity; // x0
  __int64 v26; // x1
  __int64 v27; // x26
  __int64 v28; // x27
  __int64 v29; // x0
  __int64 v30; // x25
  __int64 v31; // x26
  __int64 v32; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v42; // x23
  unsigned __int64 i; // x27
  __int64 v44; // x24
  __int128 v45; // q0
  int64_t v46; // x25
  __int64 v47; // x25
  __int64 v48; // x26
  __int64 v49; // x25
  __int64 v50; // x26
  __int64 v51; // x24
  __int64 v52; // x25
  struct System_Int32_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  UserServantStorageMaster_o *v57; // [xsp+0h] [xbp-D0h]
  int32_t v58; // [xsp+Ch] [xbp-C4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+50h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4C28321 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C28321 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  v57 = (UserServantStorageMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_87;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v7);
  v58 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_12;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v12 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            Enumerator,
            *(_QWORD *)(v12 + 8))
        & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_19;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_19:
      v16 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8));
    v18 = v17;
    if ( v17 )
    {
      v19 = *(_OWORD *)(v17 + 64);
      *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)(v17 + 48);
      *(_OWORD *)&v61.fields.fakeValue = v19;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v60 = v61;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v60, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C211E1 )
      {
        sub_1C2D490(&NetworkManager_TypeInfo);
        byte_4C211E1 = 1;
      }
      v21 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v21 = NetworkManager_TypeInfo;
      }
      if ( v20 == v21->static_fields->userIdNumber && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v18, 0) )
      {
        v23 = *(_QWORD *)(v18 + 80);
        v22 = *(_QWORD *)(v18 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v62.fields.currentCryptoKey = v23;
        *(_QWORD *)&v62.fields.fakeValue = v22;
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v62, 0);
        if ( !MasterData_object )
          sub_1C2D6EC(v24, (unsigned int)v24);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v24,
                   (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_1C2D6EC(0, v26);
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0) )
        {
          v28 = *(_QWORD *)(v18 + 80);
          v27 = *(_QWORD *)(v18 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v63.fields.currentCryptoKey = v28;
          *(_QWORD *)&v63.fields.fakeValue = v27;
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v63, 0);
          if ( !v6 )
            sub_1C2D6EC(v29, (unsigned int)v29);
          if ( !System_Collections_Generic_List_int___Contains(
                  v6,
                  v29,
                  (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            v31 = *(_QWORD *)(v18 + 80);
            v30 = *(_QWORD *)(v18 + 88);
            ++v58;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v64.fields.currentCryptoKey = v31;
            *(_QWORD *)&v64.fields.fakeValue = v30;
            v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v64, 0);
            items = v6->fields._items;
            v34 = Method_System_Collections_Generic_List_int__Add__;
            ++v6->fields._version;
            if ( !items )
              sub_1C2D6EC(v32, (unsigned int)v32);
            size = v6->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v6,
                v32,
                *(const MethodInfo_376CB60 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            }
            else
            {
              v6->fields._size = size + 1;
              items->m_Items[size] = v32;
            }
          }
        }
      }
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_51;
    }
    v39 = (__int64)&v36->vtable[*v38];
  }
  else
  {
LABEL_51:
    v39 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  Instance = (DataManager_o *)v57;
  if ( !v57 || (Instance = (DataManager_o *)UserServantStorageMaster__getList(v57, v4)) == 0 )
LABEL_87:
    sub_1C2D6EC(Instance, v4);
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v42 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1C2D6F4(Instance, v4, v40);
      v44 = *((_QWORD *)&v42->fields._DispLog + i);
      if ( v44 )
      {
        v45 = *(_OWORD *)(v44 + 64);
        *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)(v44 + 48);
        *(_OWORD *)&v61.fields.fakeValue = v45;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v59 = v61;
        v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v59, 0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C211E1 )
        {
          sub_1C2D490(&NetworkManager_TypeInfo);
          byte_4C211E1 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        if ( v46 == *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL) )
        {
          Instance = (DataManager_o *)UserServantEntity__IsWithdrawal((UserServantEntity_o *)v44, 0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            v48 = *(_QWORD *)(v44 + 80);
            v47 = *(_QWORD *)(v44 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v65.fields.currentCryptoKey = v48;
            *(_QWORD *)&v65.fields.fakeValue = v47;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v65, 0);
            if ( !MasterData_object )
              goto LABEL_87;
            Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                          (int32_t)Instance,
                                          (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              goto LABEL_87;
            Instance = (DataManager_o *)ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              v50 = *(_QWORD *)(v44 + 80);
              v49 = *(_QWORD *)(v44 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v66.fields.currentCryptoKey = v50;
              *(_QWORD *)&v66.fields.fakeValue = v49;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v66, 0);
              if ( !v6 )
                goto LABEL_87;
              Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                            v6,
                                            (int32_t)Instance,
                                            (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                v52 = *(_QWORD *)(v44 + 80);
                v51 = *(_QWORD *)(v44 + 88);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v67.fields.currentCryptoKey = v52;
                *(_QWORD *)&v67.fields.fakeValue = v51;
                Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v67, 0);
                v53 = v6->fields._items;
                v54 = Method_System_Collections_Generic_List_int__Add__;
                ++v6->fields._version;
                if ( !v53 )
                  goto LABEL_87;
                v55 = v6->fields._size;
                v4 = (const MethodInfo *)(unsigned int)Instance;
                ++v58;
                if ( (unsigned int)v55 >= LODWORD(v53->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v6,
                    (int32_t)Instance,
                    *(const MethodInfo_376CB60 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
                }
                else
                {
                  v6->fields._size = v55 + 1;
                  v53->m_Items[v55] = (int)Instance;
                }
              }
            }
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v42->fields.m_CancellationTokenSource;
    }
  }
  return v58;
}


UserServantEntity_array *UserServantMaster__getServantEquipList(UserServantMaster_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v6; // x27
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w23
  __int128 v10; // q0
  int64_t v11; // x24
  __int64 v12; // x25
  __int64 v13; // x26
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4C28327 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C28327 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_32;
  v6 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v9,
                            (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v10 = *(_OWORD *)(Instance + 64);
        v11 = Instance;
        *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v22.fields.fakeValue = v10;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v21 = v22;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v21, 0);
        if ( Instance == v6 )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v11, 0);
          if ( (Instance & 1) == 0 )
          {
            v13 = *(_QWORD *)(v11 + 80);
            v12 = *(_QWORD *)(v11 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v23.fields.currentCryptoKey = v13;
            *(_QWORD *)&v23.fields.fakeValue = v12;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v23, 0);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            Instance = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0);
            if ( (Instance & 1) != 0 )
            {
              if ( !v8 )
                break;
              items = v8->fields._items;
              v17 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v8->fields._version;
              if ( !items )
                break;
              size = v8->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  (Il2CppObject *)v11,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
              }
              else
              {
                v19 = &items->obj.klass + size;
                v8->fields._size = size + 1;
                v19[4] = (Il2CppClass *)v11;
                sub_1C2D434((CGThumbnailListItem_o *)(v19 + 4), v11, v14, v15);
              }
            }
          }
        }
      }
      if ( Count == ++v9 )
        goto LABEL_30;
    }
LABEL_32:
    sub_1C2D6EC(Instance, v4);
  }
LABEL_30:
  if ( !v8 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


System_Collections_Generic_List_UserServantEntity__o *UserServantMaster__getServantList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v6; // x20
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  Il2CppObject *v18; // x23
  __int128 v19; // q0
  int64_t v20; // x24
  NetworkManager_c *v21; // x0
  void *monitor; // x24
  Il2CppClass *v23; // x25
  __int64 v24; // x0
  Il2CppObject *Entity; // x0
  __int64 v26; // x1
  _BOOL8 IsServant; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4C28320 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C28320 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___),
        v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v6,
          (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0) )
  {
    sub_1C2D6EC(Instance, v4);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            Enumerator,
            *(_QWORD *)(v12 + 8))
        & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_17:
      v16 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8));
    v18 = (Il2CppObject *)v17;
    if ( v17 )
    {
      v19 = *(_OWORD *)(v17 + 64);
      *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)(v17 + 48);
      *(_OWORD *)&v41.fields.fakeValue = v19;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v40 = v41;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v40, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C211E1 )
      {
        sub_1C2D490(&NetworkManager_TypeInfo);
        byte_4C211E1 = 1;
      }
      v21 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v21 = NetworkManager_TypeInfo;
      }
      if ( v20 == v21->static_fields->userIdNumber && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v18, 0) )
      {
        v23 = v18[5].klass;
        monitor = v18[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v42.fields.currentCryptoKey = v23;
        *(_QWORD *)&v42.fields.fakeValue = monitor;
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v42, 0);
        if ( !MasterData_object )
          sub_1C2D6EC(v24, (unsigned int)v24);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v24,
                   (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_1C2D6EC(0, v26);
        IsServant = ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0);
        if ( IsServant )
        {
          if ( !v6 )
            sub_1C2D6EC(IsServant, v28);
          items = v6->fields._items;
          v32 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v6->fields._version;
          if ( !items )
            sub_1C2D6EC(IsServant, v28);
          size = v6->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              v18,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v34[4] = (Il2CppClass *)v18;
            sub_1C2D434((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v18, v29, v30);
          }
        }
      }
    }
  }
  v35 = Enumerator->klass;
  v36 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_44;
    }
    v38 = (__int64)&v35->vtable[*v37];
  }
  else
  {
LABEL_44:
    v38 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  return (System_Collections_Generic_List_UserServantEntity__o *)v6;
}


System_Collections_Generic_List_UserServantEntity__o *UserServantMaster__getServantListByClassIdList(
        UserServantMaster_o *this,
        System_Collections_Generic_List_int__o *classIdList,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v8; // x20
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x24
  __int128 v21; // q0
  int64_t v22; // x25
  NetworkManager_c *v23; // x0
  __int64 SvtClassId; // x0
  __int64 v25; // x25
  __int64 v26; // x26
  __int64 v27; // x1
  Il2CppObject *Entity; // x0
  __int64 v29; // x1
  _BOOL8 IsServant; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4C28323 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C28323 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___),
        v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v8,
          (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0) )
  {
    sub_1C2D6EC(Instance, v6);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8))
        & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_17;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_17:
      v18 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8));
    v20 = v19;
    if ( v19 )
    {
      v21 = *(_OWORD *)(v19 + 64);
      *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)(v19 + 48);
      *(_OWORD *)&v44.fields.fakeValue = v21;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v43 = v44;
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v43, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C211E1 )
      {
        sub_1C2D490(&NetworkManager_TypeInfo);
        byte_4C211E1 = 1;
      }
      v23 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v23 = NetworkManager_TypeInfo;
      }
      if ( v22 == v23->static_fields->userIdNumber && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v20, 0) )
      {
        SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)v20, 0, 0, 0);
        if ( !classIdList )
          sub_1C2D6EC(SvtClassId, (unsigned int)SvtClassId);
        if ( System_Collections_Generic_List_int___Contains(
               classIdList,
               SvtClassId,
               (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v26 = *(_QWORD *)(v20 + 80);
          v25 = *(_QWORD *)(v20 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v45.fields.currentCryptoKey = v26;
          *(_QWORD *)&v45.fields.fakeValue = v25;
          v27 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v45, 0);
          if ( !MasterData_object )
            sub_1C2D6EC(0, v27);
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     v27,
                     (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Entity )
            sub_1C2D6EC(0, v29);
          IsServant = ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0);
          if ( IsServant )
          {
            if ( !v8 )
              sub_1C2D6EC(IsServant, v31);
            items = v8->fields._items;
            v35 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v8->fields._version;
            if ( !items )
              sub_1C2D6EC(IsServant, v31);
            size = v8->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                (Il2CppObject *)v20,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v37 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v37[4] = (Il2CppClass *)v20;
              sub_1C2D434((CGThumbnailListItem_o *)(v37 + 4), v20, v32, v33);
            }
          }
        }
      }
    }
  }
  v38 = Enumerator->klass;
  v39 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_46;
    }
    v41 = (__int64)&v38->vtable[*v40];
  }
  else
  {
LABEL_46:
    v41 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8));
  return (System_Collections_Generic_List_UserServantEntity__o *)v8;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_long__o *UserServantMaster__getSvtAllUserIdList(
        UserServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *List; // x20
  System_Collections_Generic_List_object__o *v6; // x21
  UserServantEntity_array *Instance; // x0
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_long__o *v9; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject v15; // q0
  int64_t v16; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4C28332 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor___77961784);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C28332 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, *(const MethodInfo **)&svtId);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_58233976(
    v6,
    List,
    (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___77961784);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0
    || (Instance = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, v8), !v6) )
  {
    sub_1C2D6EC(Instance, v8);
  }
  System_Collections_Generic_List_object___AddRange(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  v9 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    v6,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  *(_OWORD *)&v23.fields._list = *(_OWORD *)&v22.fields.currentCryptoKey;
  v23.fields._current = (Il2CppObject *)v22.fields.fakeValue;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      sub_1C2D6EC(v10, v11);
    klass = v23.fields._current[5].klass;
    monitor = v23.fields._current[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v24.fields.currentCryptoKey = klass;
    *(_QWORD *)&v24.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v24, 0) == svtId
      && !UserServantEntity__IsEventJoin((UserServantEntity_o *)current, 0) )
    {
      v15 = current[2];
      *(Il2CppObject *)&v22.fields.currentCryptoKey = current[1];
      *(Il2CppObject *)&v22.fields.fakeValue = v15;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v21 = v22;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v21, 0);
      if ( !v9 )
        sub_1C2D6EC(v16, v16);
      items = v9->fields._items;
      v18 = Method_System_Collections_Generic_List_long__Add__;
      ++v9->fields._version;
      if ( !items )
        sub_1C2D6EC(v16, v16);
      size = v9->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v9,
          v16,
          *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v9->fields._size = size + 1;
        items->m_Items[size] = v16;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  return v9;
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_o *UserServantMaster__getSvtIdBattle(
        UserServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  System_Collections_ObjectModel_Collection_T__o *v8; // x22
  int32_t v9; // w23
  System_Collections_ObjectModel_Collection_T__o *v10; // x24
  struct System_Collections_Generic_IList_T__o *items; // x25
  void *monitor; // x26
  int v13; // w8
  int v14; // w9
  __int128 v15; // q0
  int64_t v16; // x0
  __int128 v17; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+40h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4C28336 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C28336 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( !list )
        break;
      v10 = list;
      monitor = list[3].monitor;
      items = list[3].fields.items;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v22.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v22.fields.fakeValue = items;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v22, 0) == svtId
        && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v10, 0) )
      {
        if ( !v8 )
          goto LABEL_14;
        v13 = (int)v8[10].fields.items;
        v14 = (int)v10[10].fields.items;
        if ( v13 < v14 )
          goto LABEL_14;
        if ( v13 == v14 )
        {
          v15 = *(_OWORD *)&v8[1].monitor;
          *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&v8->fields.items;
          *(_OWORD *)&v21.fields.fakeValue = v15;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v20 = v21;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v20, 0);
          v17 = *(_OWORD *)&v10[1].monitor;
          *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&v10->fields.items;
          *(_OWORD *)&v19.fields.fakeValue = v17;
          if ( v16 > CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v19, 0) )
LABEL_14:
            v8 = v10;
        }
      }
      if ( v7 == ++v9 )
        return (UserServantEntity_o *)v8;
    }
LABEL_24:
    sub_1C2D6EC(list, *(_QWORD *)&svtId);
  }
  return 0;
}


void UserServantMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2833E & 1) == 0 )
  {
    sub_1C2D490(&UserServantMaster___c_TypeInfo);
    byte_4C2833E = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(UserServantMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserServantMaster___c_TypeInfo->static_fields->__9 = (struct UserServantMaster___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)UserServantMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void UserServantMaster___c___ctor(UserServantMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserServantMaster___c___GetServantHavintLimitMaxCount_b__35_0(
        UserServantMaster___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return !UserServantEntity__IsMaterialTd(x, 0);
}


void UserServantMaster___c__DisplayClass15_0___ctor(
        UserServantMaster___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserServantMaster___c__DisplayClass15_0___getSameSvtNpLvCache_b__0(
        UserServantMaster___c__DisplayClass15_0_o *this,
        SvtMaterialTdEntity_o *m,
        const MethodInfo *method)
{
  UserServantMaster___c__DisplayClass15_0_o *v4; // x20
  struct UserServantEntity_o *e; // x8
  int32_t materialSvtId; // w21
  __int64 v7; // x19
  __int64 v8; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_4C2833F & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass15_0_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2833F = 1;
  }
  if ( !m || (e = v4->fields.e) == 0 )
    sub_1C2D6EC(this, m);
  materialSvtId = m->fields.materialSvtId;
  v8 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v10, 0);
}


void UserServantMaster___c__DisplayClass16_0___ctor(
        UserServantMaster___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserServantMaster___c__DisplayClass16_0___getNpUpServantList_b__0(
        UserServantMaster___c__DisplayClass16_0_o *this,
        SvtMaterialTdEntity_o *m,
        const MethodInfo *method)
{
  UserServantMaster___c__DisplayClass16_0_o *v4; // x20
  struct UserServantEntity_o *e; // x8
  int32_t materialSvtId; // w21
  __int64 v7; // x19
  __int64 v8; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_4C28340 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass16_0_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C28340 = 1;
  }
  if ( !m || (e = v4->fields.e) == 0 )
    sub_1C2D6EC(this, m);
  materialSvtId = m->fields.materialSvtId;
  v8 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v10, 0);
}


void UserServantMaster___c__DisplayClass1_0___ctor(
        UserServantMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserServantMaster___c__DisplayClass1_0___TryGetEntityFromSvtId_b__0(
        UserServantMaster___c__DisplayClass1_0_o *this,
        UserServantEntity_o *ent,
        const MethodInfo *method)
{
  UserServantMaster___c__DisplayClass1_0_o *v4; // x19
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v4 = this;
  if ( (byte_4C28341 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass1_0_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C28341 = 1;
  }
  if ( !ent )
    sub_1C2D6EC(this, ent);
  v6 = *(_QWORD *)&ent->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&ent->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return v4->fields.svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v8, 0);
}


void UserServantMaster___c__DisplayClass32_0___ctor(
        UserServantMaster___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserServantMaster___c__DisplayClass32_0___GetHaveServantSkillLevelMax_b__0(
        UserServantMaster___c__DisplayClass32_0_o *this,
        UserServantEntity_o *usrSvt,
        const MethodInfo *method)
{
  UserServantMaster___c__DisplayClass32_0_o *v4; // x19
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v4 = this;
  if ( (byte_4C28342 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass32_0_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C28342 = 1;
  }
  if ( !usrSvt )
    sub_1C2D6EC(this, usrSvt);
  v6 = *(_QWORD *)&usrSvt->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&usrSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v8, 0) == v4->fields.svtId;
}


int32_t UserServantMaster___c__DisplayClass32_0___GetHaveServantSkillLevelMax_b__1(
        UserServantMaster___c__DisplayClass32_0_o *this,
        UserServantEntity_o *a,
        UserServantEntity_o *b,
        const MethodInfo *method)
{
  UserServantMaster___c__DisplayClass32_0_o *v5; // x20

  if ( !b
    || (v5 = this,
        this = (UserServantMaster___c__DisplayClass32_0_o *)UserServantEntity__getSkillLevel(
                                                              b,
                                                              this->fields.skillIdx,
                                                              0),
        !a) )
  {
    sub_1C2D6EC(this, a);
  }
  return (_DWORD)this - UserServantEntity__getSkillLevel(a, v5->fields.skillIdx, 0);
}


void UserServantMaster___c__DisplayClass41_0___ctor(
        UserServantMaster___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserServantMaster___c__DisplayClass41_0___IsEquipCostume_b__0(
        UserServantMaster___c__DisplayClass41_0_o *this,
        UserServantEntity_o *usrSvt,
        const MethodInfo *method)
{
  UserServantMaster___c__DisplayClass41_0_o *v4; // x19
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v4 = this;
  if ( (byte_4C28343 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass41_0_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C28343 = 1;
  }
  if ( !usrSvt )
    sub_1C2D6EC(this, usrSvt);
  v6 = *(_QWORD *)&usrSvt->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&usrSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v8, 0) == v4->fields.svtId;
}


bool UserServantMaster___c__DisplayClass41_0___IsEquipCostume_b__1(
        UserServantMaster___c__DisplayClass41_0_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  UserServantMaster___c__DisplayClass41_0_o *v4; // x19
  int32_t dispLimitCountAfter; // w0
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v4 = this;
  if ( (byte_4C28344 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass41_0_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C28344 = 1;
  }
  if ( !x )
    sub_1C2D6EC(this, x);
  dispLimitCountAfter = x->fields.dispLimitCountAfter;
  if ( !dispLimitCountAfter )
  {
    v7 = *(_QWORD *)&x->fields.dispLimitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&x->fields.dispLimitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v7;
    *(_QWORD *)&v9.fields.fakeValue = v6;
    dispLimitCountAfter = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v9, 0);
  }
  return dispLimitCountAfter == v4->fields.costumeId;
}