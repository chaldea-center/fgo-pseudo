void UserServantMaster___ctor(UserServantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939760 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__);
    byte_5939760 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    14,
    (const MethodInfo_3EDD598 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__);
}


bool UserServantMaster__CheckEquipAdd(
        UserServantMaster_o *this,
        int32_t count,
        bool friendShipSvtEqExclude,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int v6; // w19
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v8; // x1
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-18h] BYREF

  *(_QWORD *)servantEquipSum = 0;
  UserServantMaster__getCount(this, &servantEquipSum[1], servantEquipSum, friendShipSvtEqExclude, v4);
  v6 = servantEquipSum[0] + count;
  servantEquipSum[0] = v6;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_21FFECC(0, v8);
  return v6 > SelfUserGame->fields.svtEquipKeep;
}


bool UserServantMaster__CheckServantAdd(UserServantMaster_o *this, int32_t count, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  int v5; // w19
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v7; // x1
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-18h] BYREF

  *(_QWORD *)servantEquipSum = 0;
  UserServantMaster__getCount(this, &servantEquipSum[1], servantEquipSum, 0, v3);
  v5 = servantEquipSum[1] + count;
  servantEquipSum[1] = v5;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_21FFECC(0, v7);
  return v5 > SelfUserGame->fields.svtKeep;
}


void UserServantMaster__ClearEntityCache(UserServantMaster_o *this, int64_t userSvtId, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5939762 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    byte_5939762 = 1;
  }
  entity = 0;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         userSvtId,
         (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    if ( !entity )
      sub_21FFECC(0, v5);
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
  UserServantEntity_o *v10; // x23
  int64_t userIdNumber; // x28
  int32_t v12; // w24
  UserServantEntity_o *v13; // x25
  __int128 v14; // q1
  int v15; // w8
  __int64 v16; // x26
  __int64 v17; // x27
  __int64 v18; // x26
  __int64 v19; // x27
  int32_t v20; // w26
  __int64 v21; // x1
  __int64 v22; // x26
  __int64 v23; // x27
  int32_t v24; // w26
  __int64 v25; // x1
  __int64 v26; // x26
  __int64 v27; // x27
  int32_t v28; // w26
  int64_t createdAt; // x8
  int64_t v30; // x9
  __int128 v31; // q1
  int v32; // w8
  int64_t v33; // x0
  __int128 v34; // q0
  const MethodInfo *v35; // x3
  bool v37; // [xsp+4h] [xbp-ECh]
  UserServantEntity_o *v38; // [xsp+8h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+70h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_5939778 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&UserServantEntity_TypeInfo);
    byte_5939778 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_55;
  v37 = checkStorage;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&svtId);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&svtId);
    v9 = NetworkManager_TypeInfo;
  }
  if ( Count >= 1 )
  {
    v38 = 0;
    v10 = 0;
    userIdNumber = v9->static_fields->userIdNumber;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( !list )
        break;
      v13 = (UserServantEntity_o *)list;
      v14 = *(_OWORD *)&list[2].fields.items;
      v15 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&list[2].klass;
      *(_OWORD *)&v42.fields.fakeValue = v14;
      if ( !v15 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&svtId);
      v41 = v42;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v41, 0) == userIdNumber )
      {
        v16 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
        v17 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
        *(_QWORD *)&v43.fields.currentCryptoKey = v16;
        *(_QWORD *)&v43.fields.fakeValue = v17;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v43, 0) == svtId )
        {
          if ( UserServantEntity__IsWithdrawal(v13, 0) )
          {
            v38 = v13;
          }
          else if ( v10 )
          {
            v18 = *(_QWORD *)&v13->fields.limitCount.fields.currentCryptoKey;
            v19 = *(_QWORD *)&v13->fields.limitCount.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
            *(_QWORD *)&v44.fields.currentCryptoKey = v18;
            *(_QWORD *)&v44.fields.fakeValue = v19;
            v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v44, 0);
            if ( v20 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v10->fields.limitCount, 0)
              || v13->fields.lv > v10->fields.lv )
            {
              goto LABEL_27;
            }
            v22 = *(_QWORD *)&v13->fields.limitCount.fields.currentCryptoKey;
            v23 = *(_QWORD *)&v13->fields.limitCount.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
            *(_QWORD *)&v45.fields.currentCryptoKey = v22;
            *(_QWORD *)&v45.fields.fakeValue = v23;
            v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v45, 0);
            if ( v24 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v10->fields.limitCount, 0)
              && v13->fields.lv == v10->fields.lv
              && !UserServantEntity__IsCondJoin(v13, 0)
              && UserServantEntity__IsCondJoin(v10, 0) )
            {
              goto LABEL_27;
            }
            v26 = *(_QWORD *)&v13->fields.limitCount.fields.currentCryptoKey;
            v27 = *(_QWORD *)&v13->fields.limitCount.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
            *(_QWORD *)&v46.fields.currentCryptoKey = v26;
            *(_QWORD *)&v46.fields.fakeValue = v27;
            v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v46, 0);
            if ( v28 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v10->fields.limitCount, 0)
              && v13->fields.lv == v10->fields.lv )
            {
              createdAt = v13->fields.createdAt;
              v30 = v10->fields.createdAt;
              if ( createdAt < v30 )
                goto LABEL_27;
              if ( createdAt == v30 )
              {
                v31 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
                v32 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
                *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v42.fields.fakeValue = v31;
                if ( !v32 )
                  j_il2cpp_runtime_class_init_0(
                    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                    *(_QWORD *)&svtId);
                v40 = v42;
                v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v40, 0);
                v34 = *(_OWORD *)&v10->fields.id.fields.fakeValue;
                *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&v10->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v39.fields.fakeValue = v34;
                if ( v33 < CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v39, 0) )
                {
LABEL_27:
                  v10 = (UserServantEntity_o *)sub_21FFEBC(UserServantEntity_TypeInfo);
                  UserServantEntity___ctor_50110044(v10, v13, 0);
                }
              }
            }
          }
          else
          {
            v10 = v13;
          }
        }
      }
      if ( Count == ++v12 )
        goto LABEL_48;
    }
LABEL_55:
    sub_21FFECC(list, *(_QWORD *)&svtId);
  }
  v38 = 0;
  v10 = 0;
LABEL_48:
  if ( v37 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !list )
      goto LABEL_55;
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)list,
                                                               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !list )
      goto LABEL_55;
    v10 = UserServantStorageMaster__CostumeTargetEntity((UserServantStorageMaster_o *)list, svtId, v10, v35);
  }
  if ( v10 )
    return v10;
  else
    return v38;
}


System_Collections_Generic_List_int__o *UserServantMaster__GetAllServantList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *MasterData_object; // x19
  System_Collections_Generic_List_int__o *v6; // x20
  __int64 Enumerator; // x0
  __int64 v8; // x1
  __int64 v9; // x23
  __int64 v10; // x8
  __int64 v11; // x9
  int *v12; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x23
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x23
  __int128 v21; // q1
  int v22; // w8
  int64_t v23; // x24
  __int64 v24; // x24
  __int64 v25; // x25
  __int64 v26; // x0
  Il2CppObject *Entity; // x0
  __int64 v28; // x1
  __int64 v29; // x24
  __int64 v30; // x25
  __int64 v31; // x0
  __int64 v32; // x23
  __int64 v33; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  __int64 v37; // x24
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v43; // x22
  unsigned __int64 i; // x27
  __int64 v45; // x23
  __int128 v46; // q1
  int v47; // w8
  int64_t v48; // x24
  __int64 v49; // x24
  __int64 v50; // x25
  __int64 v51; // x24
  __int64 v52; // x25
  __int64 v53; // x23
  __int64 v54; // x24
  struct System_Int32_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  UserServantStorageMaster_o *v59; // [xsp+8h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+50h] [xbp-A0h]
  __int64 v63; // [xsp+78h] [xbp-78h]
  __int64 *v64; // [xsp+80h] [xbp-70h]
  __int64 v65; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_5939769 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939769 = 1;
  }
  v65 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_93;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_93;
  v59 = (UserServantStorageMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v6 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_93;
  Enumerator = (__int64)System_Collections_ObjectModel_Collection_object___GetEnumerator(
                          (System_Collections_ObjectModel_Collection_T__o *)Instance,
                          (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
  v65 = Enumerator;
  v63 = 0;
  v64 = &v65;
  if ( !Enumerator )
LABEL_49:
    sub_21FFECC(Enumerator, v8);
  v9 = Enumerator;
  while ( 1 )
  {
    v10 = *(_QWORD *)v9;
    v11 = *(unsigned __int16 *)(*(_QWORD *)v9 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v9 + 302LL) )
    {
      v12 = (int *)(*(_QWORD *)(v10 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_12;
      }
      v13 = v10 + 16LL * *v12 + 312;
    }
    else
    {
LABEL_12:
      v13 = sub_2237E2C(v9, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))v13)(v9, *(_QWORD *)(v13 + 8));
    if ( (v14 & 1) == 0 )
      break;
    v15 = v65;
    if ( !v65 )
      sub_21FFECC(v14, v4);
    v16 = *(_QWORD *)v65;
    v17 = *(unsigned __int16 *)(*(_QWORD *)v65 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v65 + 302LL) )
    {
      v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_20;
      }
      v19 = v16 + 16LL * *v18 + 312;
    }
    else
    {
LABEL_20:
      v19 = sub_2237E2C(v65, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0);
    }
    Enumerator = (*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8));
    v20 = Enumerator;
    if ( Enumerator )
    {
      v21 = *(_OWORD *)(Enumerator + 64);
      v22 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)(Enumerator + 48);
      *(_OWORD *)&v62.fields.fakeValue = v21;
      if ( !v22 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
      v61 = v62;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v61, 0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
      if ( !byte_5931D52 )
      {
        sub_21FFC50(&NetworkManager_TypeInfo);
        byte_5931D52 = 1;
      }
      Enumerator = (__int64)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
        Enumerator = (__int64)NetworkManager_TypeInfo;
      }
      if ( v23 == *(_QWORD *)(*(_QWORD *)(Enumerator + 184) + 64LL) )
      {
        Enumerator = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v20, 0);
        if ( (Enumerator & 1) == 0 )
        {
          v24 = *(_QWORD *)(v20 + 80);
          v25 = *(_QWORD *)(v20 + 88);
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
          *(_QWORD *)&v66.fields.currentCryptoKey = v24;
          *(_QWORD *)&v66.fields.fakeValue = v25;
          v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v66, 0);
          if ( !MasterData_object )
            sub_21FFECC(v26, (unsigned int)v26);
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     v26,
                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Entity )
            sub_21FFECC(0, v28);
          Enumerator = ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0);
          if ( (Enumerator & 1) != 0 )
          {
            v29 = *(_QWORD *)(v20 + 80);
            v30 = *(_QWORD *)(v20 + 88);
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
            *(_QWORD *)&v67.fields.currentCryptoKey = v29;
            *(_QWORD *)&v67.fields.fakeValue = v30;
            v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v67, 0);
            if ( !v6 )
              sub_21FFECC(v31, (unsigned int)v31);
            Enumerator = System_Collections_Generic_List_int___Contains(
                           v6,
                           v31,
                           (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
            if ( (Enumerator & 1) == 0 )
            {
              v33 = *(_QWORD *)(v20 + 80);
              v32 = *(_QWORD *)(v20 + 88);
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
              *(_QWORD *)&v68.fields.currentCryptoKey = v33;
              *(_QWORD *)&v68.fields.fakeValue = v32;
              Enumerator = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v68, 0);
              v8 = (unsigned int)Enumerator;
              items = v6->fields._items;
              v35 = Method_System_Collections_Generic_List_int__Add__;
              ++v6->fields._version;
              if ( !items )
                sub_21FFECC(Enumerator, (unsigned int)Enumerator);
              size = v6->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v6,
                  Enumerator,
                  *(const MethodInfo_4433138 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
              }
              else
              {
                v6->fields._size = size + 1;
                items->m_Items[size] = Enumerator;
              }
            }
          }
        }
      }
    }
    v9 = v65;
    if ( !v65 )
      goto LABEL_49;
  }
  v37 = v65;
  if ( v65 )
  {
    v38 = *(_QWORD *)v65;
    v39 = *(unsigned __int16 *)(*(_QWORD *)v65 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v65 + 302LL) )
    {
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_55;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_55:
      v41 = sub_2237E2C(v65, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8));
  }
  Instance = (DataManager_o *)v59;
  if ( !v59 || (Instance = (DataManager_o *)UserServantStorageMaster__getList(v59, v4)) == 0 )
LABEL_93:
    sub_21FFECC(Instance, v4);
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v43 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_21FFED4(Instance);
      v45 = *((_QWORD *)&v43->fields._DispLog + i);
      if ( v45 )
      {
        v46 = *(_OWORD *)(v45 + 64);
        v47 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)(v45 + 48);
        *(_OWORD *)&v62.fields.fakeValue = v46;
        if ( !v47 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
        v60 = v62;
        v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v60, 0);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
        if ( !byte_5931D52 )
        {
          sub_21FFC50(&NetworkManager_TypeInfo);
          byte_5931D52 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        if ( v48 == *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL) )
        {
          v49 = *(_QWORD *)(v45 + 80);
          v50 = *(_QWORD *)(v45 + 88);
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
          *(_QWORD *)&v69.fields.currentCryptoKey = v49;
          *(_QWORD *)&v69.fields.fakeValue = v50;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v69, 0);
          if ( !v6 )
            goto LABEL_93;
          Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                        v6,
                                        (int32_t)Instance,
                                        (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            Instance = (DataManager_o *)UserServantEntity__IsWithdrawal((UserServantEntity_o *)v45, 0);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              v51 = *(_QWORD *)(v45 + 80);
              v52 = *(_QWORD *)(v45 + 88);
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
              *(_QWORD *)&v70.fields.currentCryptoKey = v51;
              *(_QWORD *)&v70.fields.fakeValue = v52;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v70, 0);
              if ( !MasterData_object )
                goto LABEL_93;
              Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                            (int32_t)Instance,
                                            (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( !Instance )
                goto LABEL_93;
              Instance = (DataManager_o *)ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                v54 = *(_QWORD *)(v45 + 80);
                v53 = *(_QWORD *)(v45 + 88);
                if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
                *(_QWORD *)&v71.fields.currentCryptoKey = v54;
                *(_QWORD *)&v71.fields.fakeValue = v53;
                Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v71, 0);
                v55 = v6->fields._items;
                v56 = Method_System_Collections_Generic_List_int__Add__;
                ++v6->fields._version;
                if ( !v55 )
                  goto LABEL_93;
                v57 = v6->fields._size;
                v4 = (const MethodInfo *)(unsigned int)Instance;
                if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v6,
                    (int32_t)Instance,
                    *(const MethodInfo_4433138 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
                }
                else
                {
                  v6->fields._size = v57 + 1;
                  v55->m_Items[v57] = (int)Instance;
                }
              }
            }
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v43->fields.m_CancellationTokenSource;
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
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v8; // x22
  int32_t v9; // w23
  int64_t v10; // x24
  __int128 v11; // q1
  int v12; // w8
  __int64 v13; // x25
  __int64 v14; // x26
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_5939779 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939779 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_34;
  v6 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v10 = Instance;
        v11 = *(_OWORD *)(Instance + 64);
        v12 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v27.fields.fakeValue = v11;
        if ( !v12 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
        v26 = v27;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v26, 0);
        if ( Instance == v6 )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v10, 0);
          if ( (Instance & 1) == 0 )
          {
            v13 = *(_QWORD *)(v10 + 80);
            v14 = *(_QWORD *)(v10 + 88);
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
            *(_QWORD *)&v28.fields.currentCryptoKey = v13;
            *(_QWORD *)&v28.fields.fakeValue = v14;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v28, 0);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            Instance = ServantEntity__get_IsCombineMaterial((ServantEntity_o *)Instance, 0);
            if ( (Instance & 1) != 0 )
            {
              Instance = UserServantEntity__IsLock((UserServantEntity_o *)v10, 0);
              if ( (Instance & 1) == 0 )
              {
                Instance = UserServantEntity__IsChoice((UserServantEntity_o *)v10, 0);
                if ( (Instance & 1) == 0 )
                {
                  if ( !v8 )
                    break;
                  items = v8->fields._items;
                  v22 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                  ++v8->fields._version;
                  if ( !items )
                    break;
                  size = v8->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v8,
                      (Il2CppObject *)v10,
                      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v24 = &items->obj.klass + size;
                    v8->fields._size = size + 1;
                    v24[4] = (Il2CppClass *)v10;
                    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 4), v10, v15, v16, v17, v18, v19, v20);
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
    sub_21FFECC(Instance, v4);
  }
LABEL_32:
  if ( !v8 )
    goto LABEL_34;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *UserServantMaster__GetEntities(
        UserServantMaster_o *this,
        System_Collections_Generic_List_long__o *userServantIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 list; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *v10; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__o *v15; // x21
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  Il2CppObject *v20; // x21
  System_Collections_Generic_IEnumerator_T__o v21; // q1
  int v22; // w8
  int64_t v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_IEnumerator_T__o *v34; // x21
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-80h]
  __int64 v42; // [xsp+40h] [xbp-60h]
  System_Collections_Generic_IEnumerator_T__o **v43; // [xsp+48h] [xbp-58h]
  System_Collections_Generic_IEnumerator_T__o *v44; // [xsp+58h] [xbp-48h] BYREF

  if ( (byte_593977E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_593977E = 1;
  }
  v44 = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( userServantIds && userServantIds->fields._size >= 1 )
  {
    list = (__int64)this->fields.list;
    if ( !list )
      goto LABEL_45;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
    v44 = Enumerator;
    v42 = 0;
    v43 = &v44;
    if ( !Enumerator )
LABEL_32:
      sub_21FFECC(Enumerator, v9);
    v10 = Enumerator;
    while ( 1 )
    {
      klass = v10->klass;
      v12 = *(unsigned __int16 *)&v10->klass->_2.rank;
      if ( *(_WORD *)&v10->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v12;
          p_offset += 4;
          if ( !v12 )
            goto LABEL_12;
        }
        v14 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_12:
        v14 = sub_2237E2C(v10, System_Collections_IEnumerator_TypeInfo, 0);
      }
      list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
               v10,
               *(_QWORD *)(v14 + 8));
      if ( (list & 1) == 0 )
        break;
      v15 = v44;
      if ( !v44 )
        sub_21FFECC(list, v7);
      v16 = v44->klass;
      v17 = *(unsigned __int16 *)&v44->klass->_2.rank;
      if ( *(_WORD *)&v44->klass->_2.rank )
      {
        v18 = &v16->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
        {
          --v17;
          v18 += 4;
          if ( !v17 )
            goto LABEL_20;
        }
        v19 = (__int64)&v16->vtable[*v18];
      }
      else
      {
LABEL_20:
        v19 = sub_2237E2C(v44, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0);
      }
      Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                                                    v15,
                                                                    *(_QWORD *)(v19 + 8));
      v20 = (Il2CppObject *)Enumerator;
      if ( Enumerator )
      {
        v21 = Enumerator[2];
        v22 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(System_Collections_Generic_IEnumerator_T__o *)&v41.fields.currentCryptoKey = Enumerator[1];
        *(System_Collections_Generic_IEnumerator_T__o *)&v41.fields.fakeValue = v21;
        if ( !v22 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
        v40 = v41;
        v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v40, 0);
        Enumerator = (System_Collections_Generic_IEnumerator_T__o *)System_Collections_Generic_List_long___Contains(
                                                                      userServantIds,
                                                                      v23,
                                                                      (const MethodInfo_44384E4 *)Method_System_Collections_Generic_List_long__Contains__);
        if ( ((unsigned __int8)Enumerator & 1) != 0 )
        {
          if ( !v5
            || (items = v5->fields._items,
                v31 = Method_System_Collections_Generic_List_UserServantEntity__Add__,
                ++v5->fields._version,
                !items) )
          {
            sub_21FFECC(Enumerator, v9);
          }
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v20,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v20;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v33 + 4), (int32_t)v20, v24, v25, v26, v27, v28, v29);
          }
        }
      }
      v10 = v44;
      if ( !v44 )
        goto LABEL_32;
    }
    v34 = v44;
    if ( v44 )
    {
      v35 = v44->klass;
      v36 = *(unsigned __int16 *)&v44->klass->_2.rank;
      if ( *(_WORD *)&v44->klass->_2.rank )
      {
        v37 = &v35->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
        {
          --v36;
          v37 += 4;
          if ( !v36 )
            goto LABEL_38;
        }
        v38 = (__int64)&v35->vtable[*v37];
      }
      else
      {
LABEL_38:
        v38 = sub_2237E2C(v44, System_IDisposable_TypeInfo, 0);
      }
      list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
               v34,
               *(_QWORD *)(v38 + 8));
    }
  }
  if ( !v5 )
LABEL_45:
    sub_21FFECC(list, v7);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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

  if ( (byte_593977A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_FindAll_UserServantEntity___);
    sub_21FFC50(&Method_System_Array_Sort_UserServantEntity___);
    sub_21FFC50(&System_Comparison_UserServantEntity__TypeInfo);
    sub_21FFC50(&System_Predicate_UserServantEntity__TypeInfo);
    sub_21FFC50(&Method_UserServantMaster___c__DisplayClass29_0__GetHaveServantSkillLevelMax_b__0__);
    sub_21FFC50(&Method_UserServantMaster___c__DisplayClass29_0__GetHaveServantSkillLevelMax_b__1__);
    sub_21FFC50(&UserServantMaster___c__DisplayClass29_0_TypeInfo);
    byte_593977A = 1;
  }
  v7 = sub_21FFEBC(UserServantMaster___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_10;
  *(_DWORD *)(v7 + 16) = svtId;
  *(_DWORD *)(v7 + 20) = skillIdx;
  AllList = (System_Object_array *)UserServantMaster__getAllList(this, v9);
  v11 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_UserServantEntity__TypeInfo);
  System_Predicate_object____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_UserServantMaster___c__DisplayClass29_0__GetHaveServantSkillLevelMax_b__0__,
    0);
  All_object = (UserServantEntity_o *)System_Array__FindAll_object_(
                                        AllList,
                                        (System_Predicate_T__o *)v11,
                                        (const MethodInfo_3977A88 *)Method_System_Array_FindAll_UserServantEntity___);
  if ( !All_object )
    goto LABEL_10;
  v12 = All_object;
  if ( All_object->fields.id.fields.hiddenValue )
  {
    v13 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_object____ctor(
      v13,
      (Il2CppObject *)v7,
      Method_UserServantMaster___c__DisplayClass29_0__GetHaveServantSkillLevelMax_b__1__,
      0);
    System_Array__Sort_object__58222280(
      (System_Object_array *)v12,
      v13,
      (const MethodInfo_37866C8 *)Method_System_Array_Sort_UserServantEntity___);
    if ( !LODWORD(v12->fields.id.fields.hiddenValue) )
      sub_21FFED4(v14);
    All_object = (UserServantEntity_o *)v12->fields.id.fields.fakeValue;
    if ( All_object )
      return UserServantEntity__getSkillLevel(All_object, *(_DWORD *)(v7 + 20), 0);
LABEL_10:
    sub_21FFECC(All_object, v9);
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
  il2cpp_array_size_t max_length; // x8
  int32_t v11; // w22
  unsigned __int64 i; // x25
  UserServantEntity_o *v13; // x28
  __int64 v14; // x23
  __int64 v15; // x24
  int32_t treasureDeviceLv1; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_5939772 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939772 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___),
        AllList = UserServantMaster__getAllList(this, v8),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0
    || (Instance = (Il2CppObject *)UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Instance, 1, servantId, 0),
        !AllList) )
  {
LABEL_21:
    sub_21FFECC(Instance, v6);
  }
  max_length = AllList->max_length;
  v11 = (unsigned __int8)Instance & 1;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_21FFED4(Instance);
      v13 = AllList->m_Items[i];
      if ( v13 )
      {
        v14 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
        v15 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
        *(_QWORD *)&v18.fields.currentCryptoKey = v14;
        *(_QWORD *)&v18.fields.fakeValue = v15;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v18, 0);
        if ( !MasterData_object )
          goto LABEL_21;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_21;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                     (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Instance[2],
                                     0);
        if ( (_DWORD)Instance == servantId )
        {
          treasureDeviceLv1 = v13->fields.treasureDeviceLv1;
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6);
          Instance = (Il2CppObject *)System_Math__Max_76939956(v11, treasureDeviceLv1, 0);
          v11 = (int)Instance;
        }
      }
      LODWORD(max_length) = AllList->max_length;
    }
  }
  return v11;
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
  il2cpp_array_size_t max_length; // x8
  UserServantEntity_array *v12; // x23
  int32_t v13; // w21
  unsigned __int64 v14; // x27
  UserServantEntity_o *v15; // x8
  __int64 v16; // x24
  __int64 v17; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_5939770 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939770 = 1;
  }
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = UserServantMaster__getAllList(this, v10);
  if ( !Instance )
    goto LABEL_23;
  max_length = Instance->max_length;
  v12 = Instance;
  if ( (int)max_length < 1 )
  {
    v13 = 0;
    if ( !isCheckPresentBox )
      return v13;
    goto LABEL_19;
  }
  v13 = 0;
  v14 = 0;
  do
  {
    if ( v14 >= (unsigned int)max_length )
      sub_21FFED4(Instance);
    v15 = v12->m_Items[v14];
    if ( v15 )
    {
      v16 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
      v17 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
      *(_QWORD *)&v19.fields.currentCryptoKey = v16;
      *(_QWORD *)&v19.fields.fakeValue = v17;
      Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v19, 0);
      if ( !MasterData_object )
        goto LABEL_23;
      Instance = (UserServantEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                              (int32_t)Instance,
                                              (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_23;
      Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance->m_Items,
                                              0);
      if ( (_DWORD)Instance == servantId )
        ++v13;
    }
    LODWORD(max_length) = v12->max_length;
    ++v14;
  }
  while ( (__int64)v14 < (int)max_length );
  if ( isCheckPresentBox )
  {
LABEL_19:
    Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
      if ( Instance )
      {
        v13 += UserPresentBoxMaster__GetCount((UserPresentBoxMaster_o *)Instance, 1, servantId, 0);
        return v13;
      }
    }
LABEL_23:
    sub_21FFECC(Instance, v8);
  }
  return v13;
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
  il2cpp_array_size_t max_length; // x8
  UserServantEntity_array *v10; // x21
  int v11; // w25
  unsigned __int64 v12; // x26
  UserServantEntity_o *v13; // x22
  __int64 v14; // x23
  __int64 v15; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_5939771 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939771 = 1;
  }
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = UserServantMaster__getAllList(this, v8);
  if ( !Instance )
    goto LABEL_23;
  max_length = Instance->max_length;
  v10 = Instance;
  if ( (int)max_length >= 1 )
  {
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)max_length )
        sub_21FFED4(Instance);
      v13 = v10->m_Items[v12];
      if ( v13 )
      {
        v14 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
        v15 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
        *(_QWORD *)&v17.fields.currentCryptoKey = v14;
        *(_QWORD *)&v17.fields.fakeValue = v15;
        Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                v17,
                                                0);
        if ( !MasterData_object )
          goto LABEL_23;
        Instance = (UserServantEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                (int32_t)Instance,
                                                (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_23;
        Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance->m_Items,
                                                0);
        if ( (_DWORD)Instance == servantId )
        {
          Instance = (UserServantEntity_array *)UserServantEntity__IsWithdrawal(v13, 0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            v11 += v13->fields.treasureDeviceLv1;
        }
      }
      LODWORD(max_length) = v10->max_length;
      if ( (__int64)++v12 >= (int)max_length )
        goto LABEL_19;
    }
  }
  v11 = 0;
LABEL_19:
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
  Instance = (UserServantEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !Instance )
LABEL_23:
    sub_21FFECC(Instance, v6);
  return UserPresentBoxMaster__GetServantCount((UserPresentBoxMaster_o *)Instance, servantId, 0) + v11;
}


int32_t UserServantMaster__GetServantHavintLimitMaxCount(
        UserServantMaster_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  Il2CppObject *MasterData_object; // x21
  NetworkManager_c *v9; // x0
  int64_t userIdNumber; // x25
  UserServantEntity_array *AllList; // x0
  __int64 v12; // x1
  UserServantMaster___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  struct UserServantMaster___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__32_0; // x22
  Il2CppObject *v17; // x23
  struct UserServantMaster___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  DataManager_c *klass; // x8
  DataManager_o *v26; // x20
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0
  __int64 IsWithdrawal; // x0
  __int64 v31; // x1
  __int64 v32; // x22
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x22
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x22
  __int128 v45; // q1
  int v46; // w8
  __int64 v47; // x23
  __int64 v48; // x24
  __int64 v49; // x0
  Il2CppObject *Entity; // x0
  __int64 v51; // x1
  Il2CppObject *v52; // x23
  __int64 v53; // x22
  __int64 v54; // x24
  int v55; // w8
  __int64 v56; // x19
  __int64 v57; // x8
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  int32_t v62; // [xsp+Ch] [xbp-C4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+30h] [xbp-A0h]
  __int64 v65; // [xsp+58h] [xbp-78h]
  __int64 *v66; // [xsp+60h] [xbp-70h]
  __int64 v67; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_593977C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_21FFC50(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__32_0__);
    sub_21FFC50(&UserServantMaster___c_TypeInfo);
    byte_593977C = 1;
  }
  v67 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
    v9 = NetworkManager_TypeInfo;
  }
  userIdNumber = v9->static_fields->userIdNumber;
  AllList = UserServantMaster__getAllList(this, v7);
  v13 = UserServantMaster___c_TypeInfo;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)AllList;
  if ( !*(&UserServantMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserServantMaster___c_TypeInfo, v12);
    v13 = UserServantMaster___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__32_0 = (System_Func_object__bool__o *)static_fields->__9__32_0;
  if ( !_9__32_0 )
  {
    if ( !*(&v13->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v13, v12);
      static_fields = UserServantMaster___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__32_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_UserServantEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__32_0,
      v17,
      Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__32_0__,
      0);
    v18 = UserServantMaster___c_TypeInfo->static_fields;
    v18->__9__32_0 = (struct System_Func_UserServantEntity__bool__o *)_9__32_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v18->__9__32_0, (int32_t)_9__32_0, v19, v20, v21, v22, v23, v24);
  }
  Instance = (DataManager_o *)System_Linq_Enumerable__Where_object_(
                                v14,
                                (System_Func_TSource__bool__o *)_9__32_0,
                                (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  if ( !Instance )
LABEL_70:
    sub_21FFECC(Instance, v6);
  klass = Instance->klass;
  v26 = Instance;
  v27 = *(unsigned __int16 *)&Instance->klass->_2.rank;
  if ( *(_WORD *)&Instance->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_UserServantEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_21;
    }
    v29 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_21:
    v29 = sub_2237E2C(Instance, System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, 0);
  }
  IsWithdrawal = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
  v67 = IsWithdrawal;
  v65 = 0;
  v66 = &v67;
  if ( !IsWithdrawal )
LABEL_71:
    sub_21FFECC(IsWithdrawal, v31);
  v32 = IsWithdrawal;
  v62 = 0;
  while ( 1 )
  {
    v33 = *(_QWORD *)v32;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v35 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_29;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_29:
      v36 = sub_2237E2C(v32, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8));
    if ( (v37 & 1) == 0 )
      break;
    v39 = v67;
    if ( !v67 )
      sub_21FFECC(v37, v38);
    v40 = *(_QWORD *)v67;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
    {
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v42 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_37;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_37:
      v43 = sub_2237E2C(v67, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0);
    }
    IsWithdrawal = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8));
    v44 = IsWithdrawal;
    if ( !IsWithdrawal )
      goto LABEL_49;
    v45 = *(_OWORD *)(IsWithdrawal + 64);
    v46 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)(IsWithdrawal + 48);
    *(_OWORD *)&v64.fields.fakeValue = v45;
    if ( !v46 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31);
    v63 = v64;
    IsWithdrawal = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v63, 0);
    if ( IsWithdrawal != userIdNumber )
      goto LABEL_49;
    IsWithdrawal = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v44, 0);
    if ( (IsWithdrawal & 1) != 0 )
      goto LABEL_49;
    v47 = *(_QWORD *)(v44 + 80);
    v48 = *(_QWORD *)(v44 + 88);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    *(_QWORD *)&v68.fields.currentCryptoKey = v47;
    *(_QWORD *)&v68.fields.fakeValue = v48;
    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v68, 0);
    if ( !MasterData_object )
      sub_21FFECC(v49, (unsigned int)v49);
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               v49,
               (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    v52 = Entity;
    if ( !Entity )
      sub_21FFECC(0, v51);
    IsWithdrawal = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                     (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[2],
                     0);
    if ( (_DWORD)IsWithdrawal == servantId )
    {
      v54 = *(_QWORD *)(v44 + 96);
      v53 = *(_QWORD *)(v44 + 104);
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
      *(_QWORD *)&v69.fields.currentCryptoKey = v54;
      *(_QWORD *)&v69.fields.fakeValue = v53;
      IsWithdrawal = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v69, 0);
      v32 = v67;
      v55 = v62;
      if ( (_DWORD)IsWithdrawal == LODWORD(v52[5].monitor) )
        v55 = v62 + 1;
      v62 = v55;
      if ( !v67 )
        goto LABEL_71;
    }
    else
    {
LABEL_49:
      v32 = v67;
      if ( !v67 )
        goto LABEL_71;
    }
  }
  v56 = *v66;
  if ( *v66 )
  {
    v57 = *(_QWORD *)v56;
    v58 = *(unsigned __int16 *)(*(_QWORD *)v56 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v56 + 302LL) )
    {
      v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
      {
        --v58;
        v59 += 4;
        if ( !v58 )
          goto LABEL_62;
      }
      v60 = v57 + 16LL * *v59 + 312;
    }
    else
    {
LABEL_62:
      v60 = sub_2237E2C(*v66, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v60)(v56, *(_QWORD *)(v60 + 8));
  }
  if ( v65 )
    sub_21FFEC4(v65);
  return v62;
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
  Il2CppObject *v12; // x24
  Il2CppObject v13; // q1
  int v14; // w8
  void *monitor; // x24
  Il2CppClass *klass; // x25
  Il2CppObject *Entity; // x0
  ServantEntity_o *v18; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_593977D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593977D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_29;
  v6 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
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
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Item )
      {
        v12 = Item;
        v13 = Item[4];
        v14 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(Il2CppObject *)&v21.fields.currentCryptoKey = Item[3];
        *(Il2CppObject *)&v21.fields.fakeValue = v13;
        if ( !v14 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
        v20 = v21;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v20, 0) == v6
          && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v12, 0) )
        {
          klass = v12[5].klass;
          monitor = v12[5].monitor;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
          *(_QWORD *)&v22.fields.currentCryptoKey = klass;
          *(_QWORD *)&v22.fields.fakeValue = monitor;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v22, 0);
          if ( !MasterData_object )
            break;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Entity )
          {
            v18 = (ServantEntity_o *)Entity;
            if ( SvtType__IsKeepServantEquip(HIDWORD(Entity[5].klass), 0) )
              v9 += ServantEntity__get_IsFriendShipSvtEquip(v18, 0);
          }
        }
      }
      if ( v8 == ++v10 )
        return v9;
    }
LABEL_29:
    sub_21FFECC(Instance, v4);
  }
  return 0;
}


bool UserServantMaster__IsEquipCostume(
        UserServantMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  __int64 v7; // x21
  System_Object_array *All_object; // x0
  __int64 v9; // x1
  ImageLimitCount_c *v10; // x0
  int v11; // w8
  const MethodInfo *v12; // x1
  System_Object_array *AllList; // x19
  System_Predicate_object__o *v14; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  System_Func_object__bool__o *v16; // x20

  if ( (byte_5939781 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_FindAll_UserServantEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____91526552);
    sub_21FFC50(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_21FFC50(&ImageLimitCount_TypeInfo);
    sub_21FFC50(&System_Predicate_UserServantEntity__TypeInfo);
    sub_21FFC50(&Method_UserServantMaster___c__DisplayClass37_0__IsEquipCostume_b__0__);
    sub_21FFC50(&Method_UserServantMaster___c__DisplayClass37_0__IsEquipCostume_b__1__);
    sub_21FFC50(&UserServantMaster___c__DisplayClass37_0_TypeInfo);
    byte_5939781 = 1;
  }
  v7 = sub_21FFEBC(UserServantMaster___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_10;
  v10 = ImageLimitCount_TypeInfo;
  v11 = *(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1);
  *(_DWORD *)(v7 + 16) = svtId;
  *(_DWORD *)(v7 + 20) = costumeId;
  if ( !v11 )
    j_il2cpp_runtime_class_init_0(v10, v9);
  *(_DWORD *)(v7 + 20) = ImageLimitCount__ConvertDispLimitCountForClient(costumeId, 0);
  AllList = (System_Object_array *)UserServantMaster__getAllList(this, v12);
  v14 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_UserServantEntity__TypeInfo);
  System_Predicate_object____ctor(
    v14,
    (Il2CppObject *)v7,
    Method_UserServantMaster___c__DisplayClass37_0__IsEquipCostume_b__0__,
    0);
  All_object = System_Array__FindAll_object_(
                 AllList,
                 (System_Predicate_T__o *)v14,
                 (const MethodInfo_3977A88 *)Method_System_Array_FindAll_UserServantEntity___);
  if ( !All_object )
LABEL_10:
    sub_21FFECC(All_object, v9);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)All_object;
  if ( !All_object->max_length )
    return 0;
  v16 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v7,
    Method_UserServantMaster___c__DisplayClass37_0__IsEquipCostume_b__1__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_object__59044732(
           v15,
           (System_Func_TSource__bool__o *)v16,
           (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____91526552) != 0;
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5939761 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____91526552);
    sub_21FFC50(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_21FFC50(&Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__);
    sub_21FFC50(&UserServantMaster___c__DisplayClass1_0_TypeInfo);
    byte_5939761 = 1;
  }
  v7 = (Il2CppObject *)sub_21FFEBC(UserServantMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor(v7, 0);
  if ( !v7 )
    sub_21FFECC(v8, v9);
  v7[1].klass = (Il2CppClass *)svtId;
  List = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getList(this, v9);
  v11 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    v7,
    Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__,
    0);
  v12 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
          List,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____91526552);
  *svtEnt = (UserServantEntity_o *)v12;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)svtEnt, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  return *svtEnt != 0;
}


bool UserServantMaster__TryGetEntityListBySvtId(
        UserServantMaster_o *this,
        System_Collections_Generic_List_UserServantEntity__o **userServantList,
        int32_t svtId,
        bool isIncludeStorage,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x21
  const MethodInfo *v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int *p_offset; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x1
  Il2CppObject *v32; // x23
  Il2CppClass *v33; // x24
  void *monitor; // x25
  __int64 v35; // x0
  __int64 v36; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  System_Collections_ObjectModel_Collection_T__c *v51; // x8
  System_Collections_ObjectModel_Collection_T__o *v52; // x22
  unsigned __int64 v53; // x26
  Il2CppObject *v54; // x23
  Il2CppClass *v55; // x24
  void *v56; // x25
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  Il2CppClass **v60; // x0
  System_Collections_Generic_IEnumerator_T__o *v62; // [xsp+18h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_593977F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantStorageMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593977F = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_63;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
  v62 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v13);
  for ( i = Enumerator; ; i = v62 )
  {
    klass = i->klass;
    v16 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_10;
      }
      v18 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v18 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            i,
            *(_QWORD *)(v18 + 8));
    if ( (v19 & 1) == 0 )
      break;
    if ( !v62 )
      sub_21FFECC(v19, v20);
    v27 = v62->klass;
    v28 = *(unsigned __int16 *)&v62->klass->_2.rank;
    if ( *(_WORD *)&v62->klass->_2.rank )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v29 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_18;
      }
      v30 = (__int64)&v27->vtable[*v29];
    }
    else
    {
LABEL_18:
      v30 = sub_2237E2C(v62, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0);
    }
    v32 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                            v62,
                            *(_QWORD *)(v30 + 8));
    if ( !v32 )
      sub_21FFECC(0, v31);
    v33 = v32[5].klass;
    monitor = v32[5].monitor;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    *(_QWORD *)&v63.fields.currentCryptoKey = v33;
    *(_QWORD *)&v63.fields.fakeValue = monitor;
    v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v63, 0);
    if ( (_DWORD)v35 == svtId )
    {
      if ( !v9
        || (items = v9->fields._items,
            v44 = Method_System_Collections_Generic_List_UserServantEntity__Add__,
            ++v9->fields._version,
            !items) )
      {
        sub_21FFECC(v35, v36);
      }
      size = v9->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          v32,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v46[4] = (Il2CppClass *)v32;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v46 + 4), (int32_t)v32, v37, v38, v39, v40, v41, v42);
      }
    }
  }
  if ( v62 )
  {
    v47 = v62->klass;
    v48 = *(unsigned __int16 *)&v62->klass->_2.rank;
    if ( *(_WORD *)&v62->klass->_2.rank )
    {
      v49 = &v47->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_36;
      }
      v50 = (__int64)&v47->vtable[*v49];
    }
    else
    {
LABEL_36:
      v50 = sub_2237E2C(v62, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(v62, *(_QWORD *)(v50 + 8));
  }
  if ( isIncludeStorage )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v20);
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)UserServantStorageMaster__getList(
                                                                 (UserServantStorageMaster_o *)list,
                                                                 v10);
      if ( list )
      {
        v51 = list[1].klass;
        v52 = list;
        if ( (int)v51 >= 1 )
        {
          v53 = 0;
          while ( 1 )
          {
            if ( v53 >= (unsigned int)v51 )
              sub_21FFED4(list);
            v54 = (Il2CppObject *)*((_QWORD *)&v52[1].monitor + v53);
            if ( v54 )
            {
              v55 = v54[5].klass;
              v56 = v54[5].monitor;
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
              *(_QWORD *)&v64.fields.currentCryptoKey = v55;
              *(_QWORD *)&v64.fields.fakeValue = v56;
              list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                                         v64,
                                                                         0);
              if ( (_DWORD)list == svtId )
              {
                if ( !v9 )
                  goto LABEL_63;
                v57 = v9->fields._items;
                v58 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v9->fields._version;
                if ( !v57 )
                  goto LABEL_63;
                v59 = v9->fields._size;
                if ( (unsigned int)v59 >= LODWORD(v57->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v9,
                    v54,
                    *(const MethodInfo_444FB2C **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
                }
                else
                {
                  v60 = &v57->obj.klass + v59;
                  v9->fields._size = v59 + 1;
                  v60[4] = (Il2CppClass *)v54;
                  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v60 + 4), (int32_t)v54, v21, v22, v23, v24, v25, v26);
                }
              }
            }
            LODWORD(v51) = v52[1].klass;
            if ( (__int64)++v53 >= (int)v51 )
              goto LABEL_57;
          }
        }
        goto LABEL_57;
      }
    }
LABEL_63:
    sub_21FFECC(list, v10);
  }
LABEL_57:
  *userServantList = (System_Collections_Generic_List_UserServantEntity__o *)v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)userServantList, (int32_t)v9, v21, v22, v23, v24, v25, v26);
  if ( !*userServantList )
    goto LABEL_63;
  return (*userServantList)->fields._size > 0;
}


bool UserServantMaster__TryGetEntitySvtStorageListBySvtId(
        UserServantMaster_o *this,
        System_Collections_Generic_List_UserServantEntity__o **userStorageServantList,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x21
  __int64 v7; // x1
  UserServantEntity_array *Master_object; // x0
  const MethodInfo *v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  il2cpp_array_size_t max_length; // x8
  UserServantEntity_array *v17; // x22
  unsigned __int64 v18; // x26
  Il2CppObject *v19; // x23
  Il2CppClass *klass; // x24
  void *monitor; // x25
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_5939780 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantStorageMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5939780 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
  Master_object = (UserServantEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
  if ( !Master_object )
    goto LABEL_23;
  Master_object = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Master_object, v9);
  if ( !Master_object )
    goto LABEL_23;
  max_length = Master_object->max_length;
  v17 = Master_object;
  if ( (int)max_length >= 1 )
  {
    v18 = 0;
    do
    {
      if ( v18 >= (unsigned int)max_length )
        sub_21FFED4(Master_object);
      v19 = (Il2CppObject *)v17->m_Items[v18];
      if ( v19 )
      {
        klass = v19[5].klass;
        monitor = v19[5].monitor;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
        *(_QWORD *)&v27.fields.currentCryptoKey = klass;
        *(_QWORD *)&v27.fields.fakeValue = monitor;
        Master_object = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                     v27,
                                                     0);
        if ( (_DWORD)Master_object == svtId )
        {
          if ( !v6 )
            goto LABEL_23;
          items = v6->fields._items;
          v23 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v6->fields._version;
          if ( !items )
            goto LABEL_23;
          size = v6->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              v19,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v19;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v19, v10, v11, v12, v13, v14, v15);
          }
        }
      }
      LODWORD(max_length) = v17->max_length;
    }
    while ( (__int64)++v18 < (int)max_length );
  }
  *userStorageServantList = (System_Collections_Generic_List_UserServantEntity__o *)v6;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)userStorageServantList, (int32_t)v6, v10, v11, v12, v13, v14, v15);
  if ( !*userStorageServantList )
LABEL_23:
    sub_21FFECC(Master_object, v9);
  return (*userStorageServantList)->fields._size > 0;
}


void UserServantMaster__continueDeviceUserServant(UserServantMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  int64_t v4; // x1
  int64_t list; // x0
  int32_t Count; // w21
  int32_t v7; // w22
  __int64 v8; // x27
  int64_t v9; // x23
  __int128 v10; // q1
  int v11; // w8
  __int128 v12; // q1
  int v13; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  __int64 v17; // x1
  System_Int64_array *v18; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+40h] [xbp-70h]

  if ( (byte_5939774 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&UserServantNewManager_TypeInfo);
    byte_5939774 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  list = (int64_t)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    list = (int64_t)NetworkManager_TypeInfo;
  }
  if ( Count >= 1 )
  {
    v7 = 0;
    v8 = *(_QWORD *)(*(_QWORD *)(list + 184) + 64LL);
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v7,
                        (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( list )
      {
        v9 = list;
        v10 = *(_OWORD *)(list + 64);
        v11 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)(list + 48);
        *(_OWORD *)&v21.fields.fakeValue = v10;
        if ( !v11 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
        v20 = v21;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v20, 0);
        if ( list == v8 )
        {
          list = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v9, 0);
          if ( (list & 1) == 0 )
          {
            v12 = *(_OWORD *)(v9 + 32);
            v13 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
            *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)(v9 + 16);
            *(_OWORD *)&v21.fields.fakeValue = v12;
            if ( !v13 )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
            v19 = v21;
            list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v19, 0);
            if ( !v3 )
              break;
            items = v3->fields._items;
            v15 = Method_System_Collections_Generic_List_long__Add__;
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
                *(const MethodInfo_4438164 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
            }
            else
            {
              v3->fields._size = size + 1;
              items->m_Items[size] = list;
            }
          }
        }
      }
      if ( Count == ++v7 )
        goto LABEL_26;
    }
LABEL_30:
    sub_21FFECC(list, v4);
  }
LABEL_26:
  if ( !v3 )
    goto LABEL_30;
  v18 = System_Collections_Generic_List_long___ToArray(
          v3,
          (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !*(&UserServantNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo, v17);
  UserServantNewManager__SetOld_50594288(v18, 0);
}


UserServantEntity_array *UserServantMaster__getAllList(UserServantMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *List; // x20
  System_Collections_Generic_List_object__o *v4; // x19
  UserServantEntity_array *Instance; // x0
  const MethodInfo *v6; // x1

  if ( (byte_5939776 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor___91444648);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939776 = 1;
  }
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, method);
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_71627776(
    v4,
    List,
    (const MethodInfo_444F400 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___91444648);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0
    || (Instance = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, v6), !v4) )
  {
    sub_21FFECC(Instance, v6);
  }
  System_Collections_Generic_List_object___AddRange(
    v4,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v4,
                                      (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *UserServantMaster__getCombineMaterialList(UserServantMaster_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v6; // x27
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v8; // x22
  int32_t v9; // w23
  int64_t v10; // x24
  __int128 v11; // q1
  int v12; // w8
  __int64 v13; // x25
  __int64 v14; // x26
  ServantEntity_o *v15; // x25
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_5939775 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939775 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_33;
  v6 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v10 = Instance;
        v11 = *(_OWORD *)(Instance + 64);
        v12 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v28.fields.fakeValue = v11;
        if ( !v12 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
        v27 = v28;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v27, 0);
        if ( Instance == v6 )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v10, 0);
          if ( (Instance & 1) == 0 )
          {
            v13 = *(_QWORD *)(v10 + 80);
            v14 = *(_QWORD *)(v10 + 88);
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
            *(_QWORD *)&v29.fields.currentCryptoKey = v13;
            *(_QWORD *)&v29.fields.fakeValue = v14;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v29, 0);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v15 = (ServantEntity_o *)Instance;
            Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0);
            if ( (Instance & 1) != 0 )
            {
              Instance = ServantEntity__get_IsServantMaterialTd(v15, 0);
              if ( (Instance & 1) == 0 )
              {
                if ( !v8 )
                  break;
                items = v8->fields._items;
                v23 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v8->fields._version;
                if ( !items )
                  break;
                size = v8->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v8,
                    (Il2CppObject *)v10,
                    *(const MethodInfo_444FB2C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
                }
                else
                {
                  v25 = &items->obj.klass + size;
                  v8->fields._size = size + 1;
                  v25[4] = (Il2CppClass *)v10;
                  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v25 + 4), v10, v16, v17, v18, v19, v20, v21);
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
    sub_21FFECC(Instance, v4);
  }
LABEL_31:
  if ( !v8 )
    goto LABEL_33;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  Il2CppObject *v17; // x27
  Il2CppObject v18; // q1
  int v19; // w8
  void *monitor; // x27
  Il2CppClass *klass; // x28
  Il2CppObject *Entity; // x0
  int32_t klass_high; // w28
  ServantEntity_o *v24; // x27
  bool IsKeepServant; // w0
  int32_t *v26; // x8
  bool IsFriendShipSvtEquip; // w0
  int32_t *v29; // [xsp+0h] [xbp-B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_5939763 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939763 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_32;
  v11 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v29 = servantEquipSum;
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
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Item )
      {
        v17 = Item;
        v18 = Item[4];
        v19 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(Il2CppObject *)&v32.fields.currentCryptoKey = Item[3];
        *(Il2CppObject *)&v32.fields.fakeValue = v18;
        if ( !v19 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
        v31 = v32;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v31, 0) == v11
          && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v17, 0) )
        {
          klass = v17[5].klass;
          monitor = v17[5].monitor;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
          *(_QWORD *)&v33.fields.currentCryptoKey = klass;
          *(_QWORD *)&v33.fields.fakeValue = monitor;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v33, 0);
          if ( !MasterData_object )
            break;
          ++v14;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Entity )
          {
            klass_high = HIDWORD(Entity[5].klass);
            v24 = (ServantEntity_o *)Entity;
            IsKeepServant = SvtType__IsKeepServant(klass_high, 0);
            v26 = servantSum;
            if ( IsKeepServant
              || SvtType__IsKeepServantEquip(klass_high, 0)
              && ((v26 = v29, !friendShipSvtEqExclude)
               || (IsFriendShipSvtEquip = ServantEntity__get_IsFriendShipSvtEquip(v24, 0),
                   v26 = v29,
                   !IsFriendShipSvtEquip)) )
            {
              ++*v26;
            }
          }
        }
      }
      if ( v13 == ++v15 )
        return v14;
    }
LABEL_32:
    sub_21FFECC(Instance, v9);
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
  Il2CppObject *v16; // x26
  Il2CppObject v17; // q1
  int v18; // w8
  void *monitor; // x26
  Il2CppClass *klass; // x27
  Il2CppObject *Entity; // x0
  int32_t klass_high; // w26
  bool IsOrganization; // w0
  int32_t *v24; // x8
  bool IsServantEquip; // w0
  int32_t *v27; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_5939764 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939764 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_30;
  v10 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v27 = servantEquipSum;
    v12 = Count;
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v14,
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Item )
      {
        v16 = Item;
        v17 = Item[4];
        v18 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(Il2CppObject *)&v29.fields.currentCryptoKey = Item[3];
        *(Il2CppObject *)&v29.fields.fakeValue = v17;
        if ( !v18 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
        v28 = v29;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v28, 0) == v10
          && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v16, 0) )
        {
          klass = v16[5].klass;
          monitor = v16[5].monitor;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
          *(_QWORD *)&v30.fields.currentCryptoKey = klass;
          *(_QWORD *)&v30.fields.fakeValue = monitor;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v30, 0);
          if ( !MasterData_object )
            break;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Entity )
          {
            klass_high = HIDWORD(Entity[5].klass);
            IsOrganization = SvtType__IsOrganization(klass_high, 0);
            v24 = servantSum;
            if ( IsOrganization || (IsServantEquip = SvtType__IsServantEquip(klass_high, 0), v24 = v27, IsServantEquip) )
            {
              ++v13;
              ++*v24;
            }
          }
        }
      }
      if ( v12 == ++v14 )
        return v13;
    }
LABEL_30:
    sub_21FFECC(Instance, v8);
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
  Il2CppClass *klass; // x24
  void *monitor; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_5939773 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5939773 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
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
               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Item )
      {
        v10 = (UserServantEntity_o *)Item;
        klass = Item[5].klass;
        monitor = Item[5].monitor;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&heroineId);
        *(_QWORD *)&v14.fields.currentCryptoKey = klass;
        *(_QWORD *)&v14.fields.fakeValue = monitor;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v14, 0) == heroineId
          && UserServantEntity__IsHeroine(v10, 0) )
        {
          return v10;
        }
      }
      if ( v7 == ++v8 )
        return 0;
    }
LABEL_15:
    sub_21FFECC(list, *(_QWORD *)&heroineId);
  }
  return 0;
}


UserServantEntity_array *UserServantMaster__getKeepServantList(UserServantMaster_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v6; // x27
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v8; // x22
  int32_t v9; // w23
  int64_t v10; // x24
  __int128 v11; // q1
  int v12; // w8
  __int64 v13; // x25
  __int64 v14; // x26
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_593976B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593976B = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_32;
  v6 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v10 = Instance;
        v11 = *(_OWORD *)(Instance + 64);
        v12 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v27.fields.fakeValue = v11;
        if ( !v12 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
        v26 = v27;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v26, 0);
        if ( Instance == v6 )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v10, 0);
          if ( (Instance & 1) == 0 )
          {
            v13 = *(_QWORD *)(v10 + 80);
            v14 = *(_QWORD *)(v10 + 88);
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
            *(_QWORD *)&v28.fields.currentCryptoKey = v13;
            *(_QWORD *)&v28.fields.fakeValue = v14;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v28, 0);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0);
            if ( (Instance & 1) != 0 )
            {
              if ( !v8 )
                break;
              items = v8->fields._items;
              v22 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v8->fields._version;
              if ( !items )
                break;
              size = v8->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  (Il2CppObject *)v10,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                v24 = &items->obj.klass + size;
                v8->fields._size = size + 1;
                v24[4] = (Il2CppClass *)v10;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 4), v10, v15, v16, v17, v18, v19, v20);
              }
            }
          }
        }
      }
      if ( Count == ++v9 )
        goto LABEL_30;
    }
LABEL_32:
    sub_21FFECC(Instance, v4);
  }
LABEL_30:
  if ( !v8 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *UserServantMaster__getList(UserServantMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0

  if ( (byte_5939765 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5939765 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    v4 = NetworkManager_TypeInfo;
  }
  return UserServantMaster__getList_50171120(this, v4->static_fields->userIdNumber, v2);
}


UserServantEntity_array *UserServantMaster__getList_50171120(
        UserServantMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  UserServantEntity_o *v9; // x24
  __int128 v10; // q1
  int v11; // w8
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-70h]

  if ( (byte_5939766 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5939766 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                        (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( list )
      {
        v9 = (UserServantEntity_o *)list;
        v10 = *(_OWORD *)(list + 64);
        v11 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)(list + 48);
        *(_OWORD *)&v24.fields.fakeValue = v10;
        if ( !v11 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userId);
        v23 = v24;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v23, 0);
        if ( list == userId )
        {
          list = UserServantEntity__IsWithdrawal(v9, 0);
          if ( (list & 1) == 0 )
          {
            if ( !v7 )
              break;
            items = v7->fields._items;
            v19 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v7->fields._version;
            if ( !items )
              break;
            size = v7->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                (Il2CppObject *)v9,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v21 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v21[4] = (Il2CppClass *)v9;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v9, v12, v13, v14, v15, v16, v17);
            }
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_18;
    }
LABEL_20:
    sub_21FFECC(list, userId);
  }
LABEL_18:
  if ( !v7 )
    goto LABEL_20;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v7,
                                      (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *UserServantMaster__getNpUpServantList(
        UserServantMaster_o *this,
        UserServantEntity_o *usrSvtEnt,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *v6; // x1
  System_Collections_Generic_List_object__o *v7; // x21
  int32_t Count; // w22
  SvtMaterialTdMaster_o *v9; // x23
  __int64 v10; // x24
  __int64 v11; // x25
  System_Object_array *v12; // x23
  int32_t v13; // w24
  __int64 v14; // x26
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  void **v21; // x25
  System_Predicate_object__o *v22; // x27
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int32_t version; // w10
  struct System_Object_array *items; // x8
  __int64 v31; // x26
  struct DataMasterBase_array *datalist; // x27
  int32_t v33; // w26
  __int64 size; // x10
  Il2CppClass **v35; // x0
  __int64 v36; // x26
  struct DataMasterBase_array *v37; // x27
  int32_t v38; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_593976F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Exists_SvtMaterialTdEntity___);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&System_Predicate_SvtMaterialTdEntity__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_UserServantMaster___c__DisplayClass15_0__getNpUpServantList_b__0__);
    sub_21FFC50(&UserServantMaster___c__DisplayClass15_0_TypeInfo);
    byte_593976F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  DataManager__GetMasterData_object_(
    Instance,
    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_40;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
  if ( !usrSvtEnt )
    goto LABEL_40;
  v9 = (SvtMaterialTdMaster_o *)Instance;
  v10 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v40.fields.currentCryptoKey = v10;
  *(_QWORD *)&v40.fields.fakeValue = v11;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v40, 0);
  if ( !v9 )
    goto LABEL_40;
  Instance = (DataManager_o *)SvtMaterialTdMaster__GetEntityList(v9, (int32_t)Instance, 0);
  if ( Count >= 1 )
  {
    v12 = (System_Object_array *)Instance;
    v13 = 0;
    do
    {
      v14 = sub_21FFEBC(UserServantMaster___c__DisplayClass15_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v14, 0);
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_40;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v13,
                                    (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( !v14 )
        goto LABEL_40;
      *(_QWORD *)(v14 + 16) = Instance;
      v21 = (void **)(v14 + 16);
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v14 + 16), (int32_t)Instance, v15, v16, v17, v18, v19, v20);
      Instance = *(DataManager_o **)(v14 + 16);
      if ( Instance )
      {
        Instance = (DataManager_o *)UserServantEntity__IsWithdrawal((UserServantEntity_o *)Instance, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          v22 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_SvtMaterialTdEntity__TypeInfo);
          System_Predicate_object____ctor(
            v22,
            (Il2CppObject *)v14,
            Method_UserServantMaster___c__DisplayClass15_0__getNpUpServantList_b__0__,
            0);
          Instance = (DataManager_o *)System_Array__Exists_object_(
                                        v12,
                                        (System_Predicate_T__o *)v22,
                                        (const MethodInfo_3976C18 *)Method_System_Array_Exists_SvtMaterialTdEntity___);
          v6 = *(Il2CppObject **)(v14 + 16);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v7 )
              goto LABEL_40;
            version = v7->fields._version;
            items = v7->fields._items;
LABEL_26:
            v7->fields._version = version + 1;
            if ( !items )
              goto LABEL_40;
            size = v7->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                v6,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(*((_QWORD *)Method_System_Collections_Generic_List_UserServantEntity__Add__
                                                           + 4)
                                                         + 192LL)
                                             + 112LL));
            }
            else
            {
              v35 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v35[4] = (Il2CppClass *)v6;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v35 + 4), (int32_t)v6, v23, v24, v25, v26, v27, v28);
            }
            continue;
          }
          if ( !v6 )
            goto LABEL_40;
          Instance = (DataManager_o *)UserServantEntity__get_BaseServantEntity(*(UserServantEntity_o **)(v14 + 16), 0);
          if ( !Instance )
            goto LABEL_40;
          v31 = *(_QWORD *)&Instance->fields._DispLog;
          datalist = Instance->fields.datalist;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
          *(_QWORD *)&v41.fields.currentCryptoKey = v31;
          *(_QWORD *)&v41.fields.fakeValue = datalist;
          v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v41, 0);
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                        usrSvtEnt->fields.svtId,
                                        0);
          if ( v33 == (_DWORD)Instance )
            goto LABEL_24;
          Instance = (DataManager_o *)*v21;
          if ( !*v21 )
            goto LABEL_40;
          Instance = (DataManager_o *)UserServantEntity__get_IsSaveTransformServant((UserServantEntity_o *)Instance, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = (DataManager_o *)*v21;
            if ( !*v21 )
              goto LABEL_40;
            Instance = (DataManager_o *)UserServantEntity__get_SaveTransformServantEntity(
                                          (UserServantEntity_o *)Instance,
                                          0);
            if ( !Instance )
              goto LABEL_40;
            v36 = *(_QWORD *)&Instance->fields._DispLog;
            v37 = Instance->fields.datalist;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
            *(_QWORD *)&v42.fields.currentCryptoKey = v36;
            *(_QWORD *)&v42.fields.fakeValue = v37;
            v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v42, 0);
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                          usrSvtEnt->fields.svtId,
                                          0);
            if ( v38 == (_DWORD)Instance )
            {
LABEL_24:
              if ( !v7 )
                goto LABEL_40;
              version = v7->fields._version;
              items = v7->fields._items;
              v6 = (Il2CppObject *)*v21;
              goto LABEL_26;
            }
          }
        }
      }
    }
    while ( Count != ++v13 );
  }
  if ( !v7 )
LABEL_40:
    sub_21FFECC(Instance, v6);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v7,
                                      (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *UserServantMaster__getOrganizationList(UserServantMaster_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v6; // x27
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v8; // x22
  int32_t v9; // w23
  int64_t v10; // x24
  __int128 v11; // q1
  int v12; // w8
  __int64 v13; // x25
  __int64 v14; // x26
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_593976C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593976C = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_32;
  v6 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v10 = Instance;
        v11 = *(_OWORD *)(Instance + 64);
        v12 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v27.fields.fakeValue = v11;
        if ( !v12 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
        v26 = v27;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v26, 0);
        if ( Instance == v6 )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v10, 0);
          if ( (Instance & 1) == 0 )
          {
            v13 = *(_QWORD *)(v10 + 80);
            v14 = *(_QWORD *)(v10 + 88);
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
            *(_QWORD *)&v28.fields.currentCryptoKey = v13;
            *(_QWORD *)&v28.fields.fakeValue = v14;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v28, 0);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0);
            if ( (Instance & 1) != 0 )
            {
              if ( !v8 )
                break;
              items = v8->fields._items;
              v22 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v8->fields._version;
              if ( !items )
                break;
              size = v8->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  (Il2CppObject *)v10,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                v24 = &items->obj.klass + size;
                v8->fields._size = size + 1;
                v24[4] = (Il2CppClass *)v10;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 4), v10, v15, v16, v17, v18, v19, v20);
              }
            }
          }
        }
      }
      if ( Count == ++v9 )
        goto LABEL_30;
    }
LABEL_32:
    sub_21FFECC(Instance, v4);
  }
LABEL_30:
  if ( !v8 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  __int64 v10; // x1
  __int64 v11; // x23
  __int64 v12; // x24
  System_Collections_Generic_Dictionary_int__List_int___o *v13; // x22
  int32_t v14; // w21
  int32_t Count; // w23
  System_Collections_Generic_List_int__o *v16; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v18; // x1
  __int64 v19; // x25
  __int64 v20; // x26
  SvtMaterialTdMaster_o *v21; // x24
  int32_t i; // w25
  __int64 v23; // x27
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  int64_t *v30; // x26
  int64_t v31; // x8
  __int128 v32; // q0
  __int128 v33; // q1
  int v34; // w8
  int64_t v35; // x0
  __int128 v36; // q1
  int64_t v37; // x28
  System_Predicate_object__o *v38; // x28
  int64_t v39; // x8
  __int64 v40; // x27
  __int64 v41; // x28
  int32_t v42; // w27
  struct System_Int32_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  __int64 v46; // x1
  __int64 v47; // x19
  __int64 v48; // x23
  System_Collections_Generic_Dictionary_int__object__o *v49; // x20
  System_Object_array *array; // [xsp+0h] [xbp-E0h]
  System_Collections_Generic_Dictionary_int__List_int___o **v52; // [xsp+8h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+50h] [xbp-90h]
  Il2CppObject *value; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_593976E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Exists_SvtMaterialTdEntity___);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&System_Predicate_SvtMaterialTdEntity__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_UserServantMaster___c__DisplayClass14_0__getSameSvtNpLvCache_b__0__);
    sub_21FFC50(&UserServantMaster___c__DisplayClass14_0_TypeInfo);
    byte_593976E = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  value = (Il2CppObject *)v7;
  if ( !usrSvtEnt )
    goto LABEL_57;
  if ( UserServantEntity__IsEventJoin(usrSvtEnt, 0) )
    goto LABEL_12;
  v11 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
  v13 = *cachedUserServantNpLvDict;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
  *(_QWORD *)&v57.fields.currentCryptoKey = v11;
  *(_QWORD *)&v57.fields.fakeValue = v12;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v57, 0);
  if ( !v13 )
    goto LABEL_57;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)v13,
          Instance,
          &value,
          (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
LABEL_12:
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      DataManager__GetMasterData_object_(
        (DataManager_o *)Instance,
        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = (int64_t)this->fields.list;
      if ( Instance )
      {
        Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
        v16 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v16,
          (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
          v19 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
          v20 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
          v21 = (SvtMaterialTdMaster_o *)MasterData_object;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
          *(_QWORD *)&v58.fields.currentCryptoKey = v19;
          *(_QWORD *)&v58.fields.fakeValue = v20;
          v52 = cachedUserServantNpLvDict;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v58, 0);
          if ( v21 )
          {
            Instance = (int64_t)SvtMaterialTdMaster__GetEntityList(v21, Instance, 0);
            array = (System_Object_array *)Instance;
            if ( Count >= 1 )
            {
              for ( i = 0; Count != i; ++i )
              {
                v23 = sub_21FFEBC(UserServantMaster___c__DisplayClass14_0_TypeInfo);
                System_Object___ctor((Il2CppObject *)v23, 0);
                Instance = (int64_t)this->fields.list;
                if ( !Instance )
                  goto LABEL_57;
                Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                      i,
                                      (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
                if ( !v23 )
                  goto LABEL_57;
                *(_QWORD *)(v23 + 16) = Instance;
                v30 = (int64_t *)(v23 + 16);
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 16), Instance, v24, v25, v26, v27, v28, v29);
                Instance = *(_QWORD *)(v23 + 16);
                if ( Instance )
                {
                  Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)Instance, 0);
                  if ( (Instance & 1) == 0 )
                  {
                    Instance = *v30;
                    if ( !*v30 )
                      goto LABEL_57;
                    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0);
                    if ( (Instance & 1) == 0 )
                    {
                      v31 = *v30;
                      if ( !*v30 )
                        goto LABEL_57;
                      v32 = *(_OWORD *)(v31 + 16);
                      v33 = *(_OWORD *)(v31 + 32);
                      v34 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
                      *(_OWORD *)&v55.fields.currentCryptoKey = v32;
                      *(_OWORD *)&v55.fields.fakeValue = v33;
                      if ( !v34 )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
                      v54 = v55;
                      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v54, 0);
                      v36 = *(_OWORD *)&usrSvtEnt->fields.id.fields.fakeValue;
                      v37 = v35;
                      *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&usrSvtEnt->fields.id.fields.currentCryptoKey;
                      *(_OWORD *)&v53.fields.fakeValue = v36;
                      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v53, 0);
                      if ( v37 != Instance )
                      {
                        Instance = UserServantEntity__IsMaterialTd(usrSvtEnt, 0);
                        if ( (Instance & 1) == 0 )
                        {
                          Instance = *v30;
                          if ( !*v30 )
                            goto LABEL_57;
                          Instance = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Instance, 0);
                          if ( (Instance & 1) != 0 )
                          {
                            v38 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_SvtMaterialTdEntity__TypeInfo);
                            System_Predicate_object____ctor(
                              v38,
                              (Il2CppObject *)v23,
                              Method_UserServantMaster___c__DisplayClass14_0__getSameSvtNpLvCache_b__0__,
                              0);
                            Instance = System_Array__Exists_object_(
                                         array,
                                         (System_Predicate_T__o *)v38,
                                         (const MethodInfo_3976C18 *)Method_System_Array_Exists_SvtMaterialTdEntity___);
                            if ( (Instance & 1) == 0 )
                              continue;
                          }
                          else
                          {
                            v39 = *v30;
                            if ( !*v30 )
                              goto LABEL_57;
                            v40 = *(_QWORD *)(v39 + 80);
                            v41 = *(_QWORD *)(v39 + 88);
                            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
                            *(_QWORD *)&v59.fields.currentCryptoKey = v40;
                            *(_QWORD *)&v59.fields.fakeValue = v41;
                            v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v59, 0);
                            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                         usrSvtEnt->fields.svtId,
                                         0);
                            if ( v42 != (_DWORD)Instance )
                              continue;
                            Instance = UserServantEntity__IsEventJoin(usrSvtEnt, 0);
                            if ( (Instance & 1) != 0 )
                              continue;
                          }
                          if ( !*v30 )
                            goto LABEL_57;
                          if ( !v16 )
                            goto LABEL_57;
                          v9 = *(unsigned int *)(*v30 + 436);
                          items = v16->fields._items;
                          v44 = Method_System_Collections_Generic_List_int__Add__;
                          ++v16->fields._version;
                          if ( !items )
                            goto LABEL_57;
                          size = v16->fields._size;
                          if ( (unsigned int)size >= LODWORD(items->max_length) )
                          {
                            System_Collections_Generic_List_int___AddWithResize(
                              v16,
                              v9,
                              *(const MethodInfo_4433138 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v16->fields._size = size + 1;
                            items->m_Items[size] = v9;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            if ( v16 )
            {
              if ( v16->fields._size < 1 )
                return 0;
              v14 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)v16, 0);
              if ( UserServantEntity__IsEventJoin(usrSvtEnt, 0) )
                return v14;
              v48 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
              v47 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
              v49 = (System_Collections_Generic_Dictionary_int__object__o *)*v52;
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v46);
              *(_QWORD *)&v60.fields.currentCryptoKey = v48;
              *(_QWORD *)&v60.fields.fakeValue = v47;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v60, 0);
              if ( v49 )
              {
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  v49,
                  Instance,
                  (Il2CppObject *)v16,
                  (const MethodInfo_3F68CF4 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
                return v14;
              }
            }
          }
        }
      }
    }
LABEL_57:
    sub_21FFECC(Instance, v9);
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
  __int64 Enumerator; // x0
  __int64 v8; // x1
  __int64 v9; // x24
  __int64 v10; // x8
  __int64 v11; // x9
  int *v12; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x24
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x24
  __int128 v21; // q1
  int v22; // w8
  int64_t v23; // x25
  __int64 v24; // x25
  __int64 v25; // x26
  __int64 v26; // x0
  Il2CppObject *Entity; // x0
  __int64 v28; // x1
  __int64 v29; // x25
  __int64 v30; // x26
  __int64 v31; // x0
  __int64 v32; // x24
  __int64 v33; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  __int64 v37; // x24
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v43; // x23
  unsigned __int64 i; // x28
  __int64 v45; // x24
  __int128 v46; // q1
  int v47; // w8
  int64_t v48; // x25
  __int64 v49; // x25
  __int64 v50; // x26
  __int64 v51; // x25
  __int64 v52; // x26
  __int64 v53; // x24
  __int64 v54; // x25
  struct System_Int32_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  UserServantStorageMaster_o *v59; // [xsp+0h] [xbp-F0h]
  int32_t v60; // [xsp+Ch] [xbp-E4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+50h] [xbp-A0h]
  __int64 v64; // [xsp+78h] [xbp-78h]
  __int64 *v65; // [xsp+80h] [xbp-70h]
  __int64 v66; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_5939768 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939768 = 1;
  }
  v66 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_99;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_99;
  v59 = (UserServantStorageMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v6 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_99;
  Enumerator = (__int64)System_Collections_ObjectModel_Collection_object___GetEnumerator(
                          (System_Collections_ObjectModel_Collection_T__o *)Instance,
                          (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
  v66 = Enumerator;
  v64 = 0;
  v65 = &v66;
  if ( !Enumerator )
LABEL_54:
    sub_21FFECC(Enumerator, v8);
  v60 = 0;
  v9 = Enumerator;
  while ( 1 )
  {
    v10 = *(_QWORD *)v9;
    v11 = *(unsigned __int16 *)(*(_QWORD *)v9 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v9 + 302LL) )
    {
      v12 = (int *)(*(_QWORD *)(v10 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_12;
      }
      v13 = v10 + 16LL * *v12 + 312;
    }
    else
    {
LABEL_12:
      v13 = sub_2237E2C(v9, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))v13)(v9, *(_QWORD *)(v13 + 8));
    if ( (v14 & 1) == 0 )
      break;
    v15 = v66;
    if ( !v66 )
      sub_21FFECC(v14, v4);
    v16 = *(_QWORD *)v66;
    v17 = *(unsigned __int16 *)(*(_QWORD *)v66 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v66 + 302LL) )
    {
      v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_20;
      }
      v19 = v16 + 16LL * *v18 + 312;
    }
    else
    {
LABEL_20:
      v19 = sub_2237E2C(v66, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0);
    }
    Enumerator = (*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8));
    v20 = Enumerator;
    if ( Enumerator )
    {
      v21 = *(_OWORD *)(Enumerator + 64);
      v22 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)(Enumerator + 48);
      *(_OWORD *)&v63.fields.fakeValue = v21;
      if ( !v22 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
      v62 = v63;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v62, 0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
      if ( !byte_5931D52 )
      {
        sub_21FFC50(&NetworkManager_TypeInfo);
        byte_5931D52 = 1;
      }
      Enumerator = (__int64)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
        Enumerator = (__int64)NetworkManager_TypeInfo;
      }
      if ( v23 == *(_QWORD *)(*(_QWORD *)(Enumerator + 184) + 64LL) )
      {
        Enumerator = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v20, 0);
        if ( (Enumerator & 1) == 0 )
        {
          v24 = *(_QWORD *)(v20 + 80);
          v25 = *(_QWORD *)(v20 + 88);
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
          *(_QWORD *)&v67.fields.currentCryptoKey = v24;
          *(_QWORD *)&v67.fields.fakeValue = v25;
          v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v67, 0);
          if ( !MasterData_object )
            sub_21FFECC(v26, (unsigned int)v26);
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     v26,
                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Entity )
            sub_21FFECC(0, v28);
          Enumerator = ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0);
          if ( (Enumerator & 1) != 0 )
          {
            v29 = *(_QWORD *)(v20 + 80);
            v30 = *(_QWORD *)(v20 + 88);
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
            *(_QWORD *)&v68.fields.currentCryptoKey = v29;
            *(_QWORD *)&v68.fields.fakeValue = v30;
            v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v68, 0);
            if ( !v6 )
              sub_21FFECC(v31, (unsigned int)v31);
            Enumerator = System_Collections_Generic_List_int___Contains(
                           v6,
                           v31,
                           (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
            if ( (Enumerator & 1) == 0 )
            {
              v33 = *(_QWORD *)(v20 + 80);
              v32 = *(_QWORD *)(v20 + 88);
              ++v60;
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
              *(_QWORD *)&v69.fields.currentCryptoKey = v33;
              *(_QWORD *)&v69.fields.fakeValue = v32;
              Enumerator = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v69, 0);
              v8 = (unsigned int)Enumerator;
              items = v6->fields._items;
              v35 = Method_System_Collections_Generic_List_int__Add__;
              ++v6->fields._version;
              if ( !items )
                sub_21FFECC(Enumerator, (unsigned int)Enumerator);
              size = v6->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v6,
                  Enumerator,
                  *(const MethodInfo_4433138 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
              }
              else
              {
                v6->fields._size = size + 1;
                items->m_Items[size] = Enumerator;
              }
            }
          }
        }
      }
    }
    v9 = v66;
    if ( !v66 )
      goto LABEL_54;
  }
  v37 = *v65;
  if ( *v65 )
  {
    v38 = *(_QWORD *)v37;
    v39 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
    {
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_61;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_61:
      v41 = sub_2237E2C(*v65, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8));
  }
  if ( v64 )
    sub_21FFEC4(v64);
  Instance = (DataManager_o *)v59;
  if ( !v59 || (Instance = (DataManager_o *)UserServantStorageMaster__getList(v59, v4)) == 0 )
LABEL_99:
    sub_21FFECC(Instance, v4);
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v43 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_21FFED4(Instance);
      v45 = *((_QWORD *)&v43->fields._DispLog + i);
      if ( v45 )
      {
        v46 = *(_OWORD *)(v45 + 64);
        v47 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)(v45 + 48);
        *(_OWORD *)&v63.fields.fakeValue = v46;
        if ( !v47 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
        v61 = v63;
        v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v61, 0);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
        if ( !byte_5931D52 )
        {
          sub_21FFC50(&NetworkManager_TypeInfo);
          byte_5931D52 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        if ( v48 == *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL) )
        {
          Instance = (DataManager_o *)UserServantEntity__IsWithdrawal((UserServantEntity_o *)v45, 0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            v49 = *(_QWORD *)(v45 + 80);
            v50 = *(_QWORD *)(v45 + 88);
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
            *(_QWORD *)&v70.fields.currentCryptoKey = v49;
            *(_QWORD *)&v70.fields.fakeValue = v50;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v70, 0);
            if ( !MasterData_object )
              goto LABEL_99;
            Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                          (int32_t)Instance,
                                          (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              goto LABEL_99;
            Instance = (DataManager_o *)ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              v51 = *(_QWORD *)(v45 + 80);
              v52 = *(_QWORD *)(v45 + 88);
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
              *(_QWORD *)&v71.fields.currentCryptoKey = v51;
              *(_QWORD *)&v71.fields.fakeValue = v52;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v71, 0);
              if ( !v6 )
                goto LABEL_99;
              Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                            v6,
                                            (int32_t)Instance,
                                            (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                v54 = *(_QWORD *)(v45 + 80);
                v53 = *(_QWORD *)(v45 + 88);
                if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
                *(_QWORD *)&v72.fields.currentCryptoKey = v54;
                *(_QWORD *)&v72.fields.fakeValue = v53;
                Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v72, 0);
                v55 = v6->fields._items;
                v56 = Method_System_Collections_Generic_List_int__Add__;
                ++v6->fields._version;
                if ( !v55 )
                  goto LABEL_99;
                v57 = v6->fields._size;
                v4 = (const MethodInfo *)(unsigned int)Instance;
                ++v60;
                if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v6,
                    (int32_t)Instance,
                    *(const MethodInfo_4433138 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
                }
                else
                {
                  v6->fields._size = v57 + 1;
                  v55->m_Items[v57] = (int)Instance;
                }
              }
            }
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v43->fields.m_CancellationTokenSource;
    }
  }
  return v60;
}


UserServantEntity_array *UserServantMaster__getServantEquipList(UserServantMaster_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v6; // x27
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v8; // x22
  int32_t v9; // w23
  int64_t v10; // x24
  __int128 v11; // q1
  int v12; // w8
  __int64 v13; // x25
  __int64 v14; // x26
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_593976D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593976D = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_32;
  v6 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v10 = Instance;
        v11 = *(_OWORD *)(Instance + 64);
        v12 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v27.fields.fakeValue = v11;
        if ( !v12 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
        v26 = v27;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v26, 0);
        if ( Instance == v6 )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v10, 0);
          if ( (Instance & 1) == 0 )
          {
            v13 = *(_QWORD *)(v10 + 80);
            v14 = *(_QWORD *)(v10 + 88);
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
            *(_QWORD *)&v28.fields.currentCryptoKey = v13;
            *(_QWORD *)&v28.fields.fakeValue = v14;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v28, 0);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            Instance = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0);
            if ( (Instance & 1) != 0 )
            {
              if ( !v8 )
                break;
              items = v8->fields._items;
              v22 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v8->fields._version;
              if ( !items )
                break;
              size = v8->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  (Il2CppObject *)v10,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                v24 = &items->obj.klass + size;
                v8->fields._size = size + 1;
                v24[4] = (Il2CppClass *)v10;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 4), v10, v15, v16, v17, v18, v19, v20);
              }
            }
          }
        }
      }
      if ( Count == ++v9 )
        goto LABEL_30;
    }
LABEL_32:
    sub_21FFECC(Instance, v4);
  }
LABEL_30:
  if ( !v8 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


System_Collections_Generic_List_UserServantEntity__o *UserServantMaster__getServantList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_object__o *v6; // x19
  __int64 Enumerator; // x0
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x8
  __int64 v11; // x9
  int *v12; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x22
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x22
  __int128 v22; // q1
  int v23; // w8
  int64_t v24; // x23
  __int64 v25; // x23
  __int64 v26; // x24
  __int64 v27; // x0
  Il2CppObject *Entity; // x0
  __int64 v29; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  __int64 v40; // x21
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-A0h]
  __int64 v48; // [xsp+48h] [xbp-78h]
  __int64 *v49; // [xsp+50h] [xbp-70h]
  __int64 v50; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_5939767 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939767 = 1;
  }
  v50 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___),
        v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v6,
          (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0) )
  {
    sub_21FFECC(Instance, v4);
  }
  Enumerator = (__int64)System_Collections_ObjectModel_Collection_object___GetEnumerator(
                          (System_Collections_ObjectModel_Collection_T__o *)Instance,
                          (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
  v50 = Enumerator;
  v48 = 0;
  v49 = &v50;
  if ( !Enumerator )
LABEL_43:
    sub_21FFECC(Enumerator, v8);
  v9 = Enumerator;
  while ( 1 )
  {
    v10 = *(_QWORD *)v9;
    v11 = *(unsigned __int16 *)(*(_QWORD *)v9 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v9 + 302LL) )
    {
      v12 = (int *)(*(_QWORD *)(v10 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_11;
      }
      v13 = v10 + 16LL * *v12 + 312;
    }
    else
    {
LABEL_11:
      v13 = sub_2237E2C(v9, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))v13)(v9, *(_QWORD *)(v13 + 8));
    if ( (v14 & 1) == 0 )
      break;
    v16 = v50;
    if ( !v50 )
      sub_21FFECC(v14, v15);
    v17 = *(_QWORD *)v50;
    v18 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
    {
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_19;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_19:
      v20 = sub_2237E2C(v50, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0);
    }
    Enumerator = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8));
    v21 = Enumerator;
    if ( Enumerator )
    {
      v22 = *(_OWORD *)(Enumerator + 64);
      v23 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)(Enumerator + 48);
      *(_OWORD *)&v47.fields.fakeValue = v22;
      if ( !v23 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
      v46 = v47;
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v46, 0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
      if ( !byte_5931D52 )
      {
        sub_21FFC50(&NetworkManager_TypeInfo);
        byte_5931D52 = 1;
      }
      Enumerator = (__int64)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
        Enumerator = (__int64)NetworkManager_TypeInfo;
      }
      if ( v24 == *(_QWORD *)(*(_QWORD *)(Enumerator + 184) + 64LL) )
      {
        Enumerator = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v21, 0);
        if ( (Enumerator & 1) == 0 )
        {
          v25 = *(_QWORD *)(v21 + 80);
          v26 = *(_QWORD *)(v21 + 88);
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
          *(_QWORD *)&v51.fields.currentCryptoKey = v25;
          *(_QWORD *)&v51.fields.fakeValue = v26;
          v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v51, 0);
          if ( !MasterData_object )
            sub_21FFECC(v27, (unsigned int)v27);
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     v27,
                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Entity )
            sub_21FFECC(0, v29);
          Enumerator = ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0);
          if ( (Enumerator & 1) != 0 )
          {
            if ( !v6
              || (items = v6->fields._items,
                  v37 = Method_System_Collections_Generic_List_UserServantEntity__Add__,
                  ++v6->fields._version,
                  !items) )
            {
              sub_21FFECC(Enumerator, v8);
            }
            size = v6->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v6,
                (Il2CppObject *)v21,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
            }
            else
            {
              v39 = &items->obj.klass + size;
              v6->fields._size = size + 1;
              v39[4] = (Il2CppClass *)v21;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v39 + 4), v21, v30, v31, v32, v33, v34, v35);
            }
          }
        }
      }
    }
    v9 = v50;
    if ( !v50 )
      goto LABEL_43;
  }
  v40 = v50;
  if ( v50 )
  {
    v41 = *(_QWORD *)v50;
    v42 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
    {
      v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_49;
      }
      v44 = v41 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_49:
      v44 = sub_2237E2C(v50, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v44)(v40, *(_QWORD *)(v44 + 8));
  }
  return (System_Collections_Generic_List_UserServantEntity__o *)v6;
}


System_Collections_Generic_List_UserServantEntity__o *UserServantMaster__getServantListByClassIdList(
        UserServantMaster_o *this,
        System_Collections_Generic_List_int__o *classIdList,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v8; // x19
  __int64 Enumerator; // x0
  __int64 v10; // x1
  __int64 v11; // x23
  __int64 v12; // x8
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x23
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x23
  __int128 v24; // q1
  int v25; // w8
  int64_t v26; // x24
  __int64 SvtClassId; // x0
  __int64 v28; // x24
  __int64 v29; // x25
  __int64 v30; // x0
  Il2CppObject *Entity; // x0
  __int64 v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  __int64 v43; // x21
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+20h] [xbp-A0h]
  __int64 v51; // [xsp+48h] [xbp-78h]
  __int64 *v52; // [xsp+50h] [xbp-70h]
  __int64 v53; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_593976A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593976A = 1;
  }
  v53 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___),
        v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v8,
          (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0) )
  {
    sub_21FFECC(Instance, v6);
  }
  Enumerator = (__int64)System_Collections_ObjectModel_Collection_object___GetEnumerator(
                          (System_Collections_ObjectModel_Collection_T__o *)Instance,
                          (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
  v53 = Enumerator;
  v51 = 0;
  v52 = &v53;
  if ( !Enumerator )
LABEL_45:
    sub_21FFECC(Enumerator, v10);
  v11 = Enumerator;
  while ( 1 )
  {
    v12 = *(_QWORD *)v11;
    v13 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
    {
      v14 = (int *)(*(_QWORD *)(v12 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_11;
      }
      v15 = v12 + 16LL * *v14 + 312;
    }
    else
    {
LABEL_11:
      v15 = sub_2237E2C(v11, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))v15)(v11, *(_QWORD *)(v15 + 8));
    if ( (v16 & 1) == 0 )
      break;
    v18 = v53;
    if ( !v53 )
      sub_21FFECC(v16, v17);
    v19 = *(_QWORD *)v53;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_19;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_19:
      v22 = sub_2237E2C(v53, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0);
    }
    Enumerator = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8));
    v23 = Enumerator;
    if ( Enumerator )
    {
      v24 = *(_OWORD *)(Enumerator + 64);
      v25 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(Enumerator + 48);
      *(_OWORD *)&v50.fields.fakeValue = v24;
      if ( !v25 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
      v49 = v50;
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v49, 0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
      if ( !byte_5931D52 )
      {
        sub_21FFC50(&NetworkManager_TypeInfo);
        byte_5931D52 = 1;
      }
      Enumerator = (__int64)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
        Enumerator = (__int64)NetworkManager_TypeInfo;
      }
      if ( v26 == *(_QWORD *)(*(_QWORD *)(Enumerator + 184) + 64LL) )
      {
        Enumerator = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v23, 0);
        if ( (Enumerator & 1) == 0 )
        {
          SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)v23, 0, 0, 0);
          if ( !classIdList )
            sub_21FFECC(SvtClassId, (unsigned int)SvtClassId);
          Enumerator = System_Collections_Generic_List_int___Contains(
                         classIdList,
                         SvtClassId,
                         (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Enumerator & 1) != 0 )
          {
            v28 = *(_QWORD *)(v23 + 80);
            v29 = *(_QWORD *)(v23 + 88);
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
            *(_QWORD *)&v54.fields.currentCryptoKey = v28;
            *(_QWORD *)&v54.fields.fakeValue = v29;
            v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v54, 0);
            if ( !MasterData_object )
              sub_21FFECC(v30, (unsigned int)v30);
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       v30,
                       (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Entity )
              sub_21FFECC(0, v32);
            Enumerator = ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0);
            if ( (Enumerator & 1) != 0 )
            {
              if ( !v8
                || (items = v8->fields._items,
                    v40 = Method_System_Collections_Generic_List_UserServantEntity__Add__,
                    ++v8->fields._version,
                    !items) )
              {
                sub_21FFECC(Enumerator, v10);
              }
              size = v8->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  (Il2CppObject *)v23,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
              }
              else
              {
                v42 = &items->obj.klass + size;
                v8->fields._size = size + 1;
                v42[4] = (Il2CppClass *)v23;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v42 + 4), v23, v33, v34, v35, v36, v37, v38);
              }
            }
          }
        }
      }
    }
    v11 = v53;
    if ( !v53 )
      goto LABEL_45;
  }
  v43 = v53;
  if ( v53 )
  {
    v44 = *(_QWORD *)v53;
    v45 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
    {
      v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_51;
      }
      v47 = v44 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_51:
      v47 = sub_2237E2C(v53, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v47)(v43, *(_QWORD *)(v47 + 8));
  }
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
  Il2CppClass *klass; // x22
  void *monitor; // x23
  __int64 v15; // x1
  Il2CppObject v16; // q1
  int v17; // w8
  int64_t v18; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-B0h] BYREF
  __int64 v25; // [xsp+40h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_object__o *v26; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+50h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_5939777 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor___91444648);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939777 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, *(const MethodInfo **)&svtId);
  v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_71627776(
    v6,
    List,
    (const MethodInfo_444F400 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___91444648);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0
    || (Instance = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, v8), !v6) )
  {
    sub_21FFECC(Instance, v8);
  }
  System_Collections_Generic_List_object___AddRange(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  v9 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    v6,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  v27.fields._current = (Il2CppObject *)v24.fields.fakeValue;
  *(_OWORD *)&v27.fields._list = *(_OWORD *)&v24.fields.currentCryptoKey;
  v25 = 0;
  v26 = &v27;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_21FFECC(v10, v11);
    klass = v27.fields._current[5].klass;
    monitor = v27.fields._current[5].monitor;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    *(_QWORD *)&v28.fields.currentCryptoKey = klass;
    *(_QWORD *)&v28.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v28, 0) == svtId
      && !UserServantEntity__IsEventJoin((UserServantEntity_o *)current, 0) )
    {
      v16 = current[2];
      v17 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(Il2CppObject *)&v24.fields.currentCryptoKey = current[1];
      *(Il2CppObject *)&v24.fields.fakeValue = v16;
      if ( !v17 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
      v23 = v24;
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v23, 0);
      if ( !v9
        || (items = v9->fields._items,
            v20 = Method_System_Collections_Generic_List_long__Add__,
            ++v9->fields._version,
            !items) )
      {
        sub_21FFECC(v18, v18);
      }
      size = v9->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v9,
          v18,
          *(const MethodInfo_4438164 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v9->fields._size = size + 1;
        items->m_Items[size] = v18;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
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
  void *monitor; // x25
  struct System_Collections_Generic_IList_T__o *items; // x26
  int v13; // w8
  int v14; // w9
  __int128 v15; // q1
  int v16; // w8
  int64_t v17; // x0
  __int128 v18; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+40h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_593977B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_593977B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
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
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( !list )
        break;
      v10 = list;
      monitor = list[3].monitor;
      items = list[3].fields.items;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
      *(_QWORD *)&v23.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v23.fields.fakeValue = items;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v23, 0) == svtId
        && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v10, 0) )
      {
        if ( !v8 )
          goto LABEL_14;
        v13 = (int)v8[16].fields.items;
        v14 = (int)v10[16].fields.items;
        if ( v13 < v14 )
          goto LABEL_14;
        if ( v13 == v14 )
        {
          v15 = *(_OWORD *)&v8[1].monitor;
          v16 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&v8->fields.items;
          *(_OWORD *)&v22.fields.fakeValue = v15;
          if ( !v16 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&svtId);
          v21 = v22;
          v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v21, 0);
          v18 = *(_OWORD *)&v10[1].monitor;
          *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&v10->fields.items;
          *(_OWORD *)&v20.fields.fakeValue = v18;
          if ( v17 > CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v20, 0) )
LABEL_14:
            v8 = v10;
        }
      }
      if ( v7 == ++v9 )
        return (UserServantEntity_o *)v8;
    }
LABEL_24:
    sub_21FFECC(list, *(_QWORD *)&svtId);
  }
  return 0;
}


void UserServantMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5939782 & 1) == 0 )
  {
    sub_21FFC50(&UserServantMaster___c_TypeInfo);
    byte_5939782 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(UserServantMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserServantMaster___c_TypeInfo->static_fields->__9 = (struct UserServantMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)UserServantMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UserServantMaster___c___ctor(UserServantMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserServantMaster___c___GetServantHavintLimitMaxCount_b__32_0(
        UserServantMaster___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return !UserServantEntity__IsMaterialTd(x, 0);
}


void UserServantMaster___c__DisplayClass14_0___ctor(
        UserServantMaster___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserServantMaster___c__DisplayClass14_0___getSameSvtNpLvCache_b__0(
        UserServantMaster___c__DisplayClass14_0_o *this,
        SvtMaterialTdEntity_o *m,
        const MethodInfo *method)
{
  UserServantMaster___c__DisplayClass14_0_o *v4; // x20
  struct UserServantEntity_o *e; // x8
  int32_t materialSvtId; // w21
  __int64 v7; // x19
  __int64 v8; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_5939783 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass14_0_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5939783 = 1;
  }
  if ( !m || (e = v4->fields.e) == 0 )
    sub_21FFECC(this, m);
  materialSvtId = m->fields.materialSvtId;
  v7 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, m);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v8;
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v10, 0);
}


void UserServantMaster___c__DisplayClass15_0___ctor(
        UserServantMaster___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserServantMaster___c__DisplayClass15_0___getNpUpServantList_b__0(
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
  if ( (byte_5939784 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass15_0_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5939784 = 1;
  }
  if ( !m || (e = v4->fields.e) == 0 )
    sub_21FFECC(this, m);
  materialSvtId = m->fields.materialSvtId;
  v7 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, m);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v8;
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v10, 0);
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
  if ( (byte_5939785 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass1_0_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5939785 = 1;
  }
  if ( !ent )
    sub_21FFECC(this, ent);
  v6 = *(_QWORD *)&ent->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&ent->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, ent);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return v4->fields.svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v8, 0);
}


void UserServantMaster___c__DisplayClass29_0___ctor(
        UserServantMaster___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserServantMaster___c__DisplayClass29_0___GetHaveServantSkillLevelMax_b__0(
        UserServantMaster___c__DisplayClass29_0_o *this,
        UserServantEntity_o *usrSvt,
        const MethodInfo *method)
{
  UserServantMaster___c__DisplayClass29_0_o *v4; // x19
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v4 = this;
  if ( (byte_5939786 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass29_0_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5939786 = 1;
  }
  if ( !usrSvt )
    sub_21FFECC(this, usrSvt);
  v6 = *(_QWORD *)&usrSvt->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&usrSvt->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, usrSvt);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v8, 0) == v4->fields.svtId;
}


int32_t UserServantMaster___c__DisplayClass29_0___GetHaveServantSkillLevelMax_b__1(
        UserServantMaster___c__DisplayClass29_0_o *this,
        UserServantEntity_o *a,
        UserServantEntity_o *b,
        const MethodInfo *method)
{
  UserServantMaster___c__DisplayClass29_0_o *v5; // x20

  if ( !b
    || (v5 = this,
        this = (UserServantMaster___c__DisplayClass29_0_o *)UserServantEntity__getSkillLevel(
                                                              b,
                                                              this->fields.skillIdx,
                                                              0),
        !a) )
  {
    sub_21FFECC(this, a);
  }
  return (_DWORD)this - UserServantEntity__getSkillLevel(a, v5->fields.skillIdx, 0);
}


void UserServantMaster___c__DisplayClass37_0___ctor(
        UserServantMaster___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserServantMaster___c__DisplayClass37_0___IsEquipCostume_b__0(
        UserServantMaster___c__DisplayClass37_0_o *this,
        UserServantEntity_o *usrSvt,
        const MethodInfo *method)
{
  UserServantMaster___c__DisplayClass37_0_o *v4; // x19
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v4 = this;
  if ( (byte_5939787 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass37_0_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5939787 = 1;
  }
  if ( !usrSvt )
    sub_21FFECC(this, usrSvt);
  v6 = *(_QWORD *)&usrSvt->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&usrSvt->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, usrSvt);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v8, 0) == v4->fields.svtId;
}


bool UserServantMaster___c__DisplayClass37_0___IsEquipCostume_b__1(
        UserServantMaster___c__DisplayClass37_0_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  UserServantMaster___c__DisplayClass37_0_o *v4; // x19
  int32_t dispLimitCountAfter; // w21
  UserServantEntity_c *v6; // x0
  int32_t v7; // w21
  __int64 v8; // x21
  __int64 v9; // x22
  __int64 v10; // x1
  int32_t v11; // w21
  __int64 v12; // x22
  __int64 v13; // x23
  int32_t v14; // w0
  __int64 v15; // x8
  int32_t v16; // w20
  __int64 v17; // x1
  int32_t v18; // w22
  int32_t afterSelectedLimitCount[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  v4 = this;
  if ( (byte_5939788 & 1) == 0 )
  {
    sub_21FFC50(&ImageLimitCount_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (UserServantMaster___c__DisplayClass37_0_o *)sub_21FFC50(&UserServantEntity_TypeInfo);
    byte_5939788 = 1;
  }
  *(_QWORD *)afterSelectedLimitCount = 0;
  if ( !x )
    sub_21FFECC(this, x);
  dispLimitCountAfter = x->fields.dispLimitCountAfter;
  v6 = UserServantEntity_TypeInfo;
  if ( !*(&UserServantEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity_TypeInfo, x);
    v6 = UserServantEntity_TypeInfo;
  }
  if ( dispLimitCountAfter <= v6->static_fields->InitDispLimitCountAfter )
  {
    v8 = *(_QWORD *)&x->fields.dispLimitCount.fields.currentCryptoKey;
    v9 = *(_QWORD *)&x->fields.dispLimitCount.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, x);
    *(_QWORD *)&v21.fields.currentCryptoKey = v8;
    *(_QWORD *)&v21.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v21, 0);
    if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v10);
    v7 = ImageLimitCount__ConvertDispLimitCountForClient(v11, 0);
  }
  else
  {
    v7 = x->fields.dispLimitCountAfter;
  }
  v12 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, x);
  *(_QWORD *)&v22.fields.currentCryptoKey = v12;
  *(_QWORD *)&v22.fields.fakeValue = v13;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v22, 0);
  v15 = *(_QWORD *)&x->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v23.fields.fakeValue = *(_QWORD *)&x->fields.limitCount.fields.fakeValue;
  v16 = v14;
  *(_QWORD *)&v23.fields.currentCryptoKey = v15;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v23, 0);
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v17);
  ImageLimitCount__GetDispLimitCountSealAfter(v16, v18, v7, &afterSelectedLimitCount[1], afterSelectedLimitCount, 0);
  return afterSelectedLimitCount[1] == v4->fields.costumeId;
}