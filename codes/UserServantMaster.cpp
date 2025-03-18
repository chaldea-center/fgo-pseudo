void __fastcall UserServantMaster___ctor(UserServantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22EA9 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__, method);
    byte_4C22EA9 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    14,
    (const MethodInfo_329B080 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__);
}


bool __fastcall UserServantMaster__CheckEquipAdd(
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

  *(_QWORD *)servantEquipSum = 0LL;
  UserServantMaster__getCount(this, &servantEquipSum[1], servantEquipSum, friendShipSvtEqExclude, v4);
  v6 = servantEquipSum[0];
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_1C3B9C0(0LL, v8);
  return v6 + count > SelfUserGame->fields.svtEquipKeep;
}


bool __fastcall UserServantMaster__CheckServantAdd(UserServantMaster_o *this, int32_t count, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  int32_t v5; // w20
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v7; // x1
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-18h] BYREF

  *(_QWORD *)servantEquipSum = 0LL;
  UserServantMaster__getCount(this, &servantEquipSum[1], servantEquipSum, 0, v3);
  v5 = servantEquipSum[1];
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_1C3B9C0(0LL, v7);
  return v5 + count > SelfUserGame->fields.svtKeep;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantMaster__CheckServantAndEquipAdd(
        UserServantMaster_o *this,
        int32_t servantCount,
        int32_t equipCount,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x3

  return UserServantMaster__CheckServantAdd(this, servantCount, *(const MethodInfo **)&equipCount)
      || UserServantMaster__CheckEquipAdd(this, equipCount, 0, v6);
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_o *__fastcall UserServantMaster__CostumeTargetEntity(
        UserServantMaster_o *this,
        int32_t svtId,
        bool checkStorage,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  NetworkManager_c *v16; // x0
  int64_t userIdNumber; // x20
  UserServantEntity_o *v18; // x23
  int32_t v19; // w24
  __int128 v20; // q0
  UserServantEntity_o *v21; // x25
  __int64 v22; // x26
  __int64 v23; // x27
  __int64 v24; // x26
  __int64 v25; // x27
  int32_t v26; // w26
  __int64 v27; // x26
  __int64 v28; // x27
  int32_t v29; // w26
  __int64 v30; // x26
  __int64 v31; // x27
  int32_t v32; // w26
  const MethodInfo *v33; // x3
  bool v35; // [xsp+4h] [xbp-ACh]
  UserServantEntity_o *v36; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4C22EC2 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v7);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v8);
    sub_1C3B764(&NetworkManager_TypeInfo, v9);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1C3B764(&UserServantEntity_TypeInfo, v13);
    byte_4C22EC2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_52;
  v35 = checkStorage;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4C1C955 = 1;
  }
  v16 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v16 = NetworkManager_TypeInfo;
  }
  if ( Count >= 1 )
  {
    v36 = 0LL;
    userIdNumber = v16->static_fields->userIdNumber;
    v18 = 0LL;
    v19 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v19,
                                                                 (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( !list )
        break;
      v20 = *(_OWORD *)&list[2].fields.items;
      v21 = (UserServantEntity_o *)list;
      *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&list[2].klass;
      *(_OWORD *)&v38.fields.fakeValue = v20;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v37 = v38;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v37, 0LL) == userIdNumber )
      {
        v23 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
        v22 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v39.fields.currentCryptoKey = v23;
        *(_QWORD *)&v39.fields.fakeValue = v22;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v39, 0LL) == svtId )
        {
          if ( UserServantEntity__IsWithdrawal(v21, 0LL) )
          {
            v36 = v21;
          }
          else if ( v18 )
          {
            v25 = *(_QWORD *)&v21->fields.limitCount.fields.currentCryptoKey;
            v24 = *(_QWORD *)&v21->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v40.fields.currentCryptoKey = v25;
            *(_QWORD *)&v40.fields.fakeValue = v24;
            v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v40, 0LL);
            if ( v26 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v18->fields.limitCount, 0LL)
              || v21->fields.lv > v18->fields.lv )
            {
              goto LABEL_27;
            }
            v28 = *(_QWORD *)&v21->fields.limitCount.fields.currentCryptoKey;
            v27 = *(_QWORD *)&v21->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v41.fields.currentCryptoKey = v28;
            *(_QWORD *)&v41.fields.fakeValue = v27;
            v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v41, 0LL);
            if ( v29 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v18->fields.limitCount, 0LL)
              && v21->fields.lv == v18->fields.lv
              && !UserServantEntity__IsCondJoin(v21, 0LL)
              && UserServantEntity__IsCondJoin(v18, 0LL) )
            {
              goto LABEL_27;
            }
            v31 = *(_QWORD *)&v21->fields.limitCount.fields.currentCryptoKey;
            v30 = *(_QWORD *)&v21->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v42.fields.currentCryptoKey = v31;
            *(_QWORD *)&v42.fields.fakeValue = v30;
            v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v42, 0LL);
            if ( v32 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v18->fields.limitCount, 0LL)
              && v21->fields.lv == v18->fields.lv
              && v21->fields.createdAt < v18->fields.createdAt )
            {
LABEL_27:
              v18 = (UserServantEntity_o *)sub_1C3B9B0(UserServantEntity_TypeInfo);
              UserServantEntity___ctor_41667060(v18, v21, 0LL);
            }
          }
          else
          {
            v18 = v21;
          }
        }
      }
      if ( Count == ++v19 )
        goto LABEL_44;
    }
LABEL_52:
    sub_1C3B9C0(list, *(_QWORD *)&svtId);
  }
  v36 = 0LL;
  v18 = 0LL;
LABEL_44:
  if ( v35 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !list )
      goto LABEL_52;
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)list,
                                                               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !list )
      goto LABEL_52;
    v18 = UserServantStorageMaster__CostumeTargetEntity((UserServantStorageMaster_o *)list, svtId, v18, v33);
  }
  if ( v18 )
    return v18;
  else
    return v36;
}


System_Collections_Generic_List_int__o *__fastcall UserServantMaster__GetAllServantList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *MasterData_object; // x19
  System_Collections_Generic_List_int__o *v20; // x20
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x24
  __int128 v33; // q0
  __int64 v34; // x1
  int64_t v35; // x25
  NetworkManager_c *v36; // x0
  __int64 v37; // x25
  __int64 v38; // x26
  __int64 v39; // x0
  Il2CppObject *Entity; // x0
  __int64 v41; // x1
  __int64 v42; // x25
  __int64 v43; // x26
  __int64 v44; // x0
  __int64 v45; // x24
  __int64 v46; // x25
  __int64 v47; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v56; // x22
  unsigned __int64 i; // x26
  __int64 v58; // x23
  __int128 v59; // q0
  int64_t v60; // x24
  __int64 v61; // x24
  __int64 v62; // x25
  __int64 v63; // x24
  __int64 v64; // x25
  __int64 v65; // x23
  __int64 v66; // x24
  struct System_Int32_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  UserServantStorageMaster_o *v71; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+50h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  if ( (byte_4C22EB1 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1C3B764(&System_IDisposable_TypeInfo, v6);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, v7);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1C3B764(&NetworkManager_TypeInfo, v13);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4C22EB1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
  v71 = (UserServantStorageMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v20 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_86;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v21);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v29 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_18;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_18:
      v30 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL);
    }
    v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
            Enumerator,
            *(_QWORD *)(v30 + 8));
    v32 = v31;
    if ( v31 )
    {
      v33 = *(_OWORD *)(v31 + 64);
      *(_OWORD *)&v74.fields.currentCryptoKey = *(_OWORD *)(v31 + 48);
      *(_OWORD *)&v74.fields.fakeValue = v33;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v73 = v74;
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v73, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v34);
        byte_4C1C955 = 1;
      }
      v36 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v36 = NetworkManager_TypeInfo;
      }
      if ( v35 == v36->static_fields->userIdNumber && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v32, 0LL) )
      {
        v38 = *(_QWORD *)(v32 + 80);
        v37 = *(_QWORD *)(v32 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v75.fields.currentCryptoKey = v38;
        *(_QWORD *)&v75.fields.fakeValue = v37;
        v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v75, 0LL);
        if ( !MasterData_object )
          sub_1C3B9C0(v39, (unsigned int)v39);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v39,
                   (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_1C3B9C0(0LL, v41);
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0LL) )
        {
          v43 = *(_QWORD *)(v32 + 80);
          v42 = *(_QWORD *)(v32 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v76.fields.currentCryptoKey = v43;
          *(_QWORD *)&v76.fields.fakeValue = v42;
          v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v76, 0LL);
          if ( !v20 )
            sub_1C3B9C0(v44, (unsigned int)v44);
          if ( !System_Collections_Generic_List_int___Contains(
                  v20,
                  v44,
                  (const MethodInfo_366EFC0 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            v46 = *(_QWORD *)(v32 + 80);
            v45 = *(_QWORD *)(v32 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v77.fields.currentCryptoKey = v46;
            *(_QWORD *)&v77.fields.fakeValue = v45;
            v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v77, 0LL);
            items = v20->fields._items;
            v49 = Method_System_Collections_Generic_List_int__Add__;
            ++v20->fields._version;
            if ( !items )
              sub_1C3B9C0(v47, (unsigned int)v47);
            size = v20->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v20,
                v47,
                *(const MethodInfo_366EC48 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
            }
            else
            {
              v20->fields._size = size + 1;
              items->m_Items[size + 1] = v47;
            }
          }
        }
      }
    }
  }
  v51 = Enumerator->klass;
  v52 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_50;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_50:
    v54 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(Enumerator, *(_QWORD *)(v54 + 8));
  Instance = (DataManager_o *)v71;
  if ( !v71 || (Instance = (DataManager_o *)UserServantStorageMaster__getList(v71, v18)) == 0LL )
LABEL_86:
    sub_1C3B9C0(Instance, v18);
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v56 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1C3B9C8(Instance, v18);
      v58 = *((_QWORD *)&v56->fields._DispLog + i);
      if ( v58 )
      {
        v59 = *(_OWORD *)(v58 + 64);
        *(_OWORD *)&v74.fields.currentCryptoKey = *(_OWORD *)(v58 + 48);
        *(_OWORD *)&v74.fields.fakeValue = v59;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v72 = v74;
        v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v72, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C1C955 )
        {
          sub_1C3B764(&NetworkManager_TypeInfo, v18);
          byte_4C1C955 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        if ( v60 == *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL) )
        {
          v62 = *(_QWORD *)(v58 + 80);
          v61 = *(_QWORD *)(v58 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v78.fields.currentCryptoKey = v62;
          *(_QWORD *)&v78.fields.fakeValue = v61;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v78, 0LL);
          if ( !v20 )
            goto LABEL_86;
          Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                        v20,
                                        (int32_t)Instance,
                                        (const MethodInfo_366EFC0 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            Instance = (DataManager_o *)UserServantEntity__IsWithdrawal((UserServantEntity_o *)v58, 0LL);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              v64 = *(_QWORD *)(v58 + 80);
              v63 = *(_QWORD *)(v58 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v79.fields.currentCryptoKey = v64;
              *(_QWORD *)&v79.fields.fakeValue = v63;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v79, 0LL);
              if ( !MasterData_object )
                goto LABEL_86;
              Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                            (int32_t)Instance,
                                            (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( !Instance )
                goto LABEL_86;
              Instance = (DataManager_o *)ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                v66 = *(_QWORD *)(v58 + 80);
                v65 = *(_QWORD *)(v58 + 88);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v80.fields.currentCryptoKey = v66;
                *(_QWORD *)&v80.fields.fakeValue = v65;
                Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                              v80,
                                              0LL);
                v67 = v20->fields._items;
                v68 = Method_System_Collections_Generic_List_int__Add__;
                ++v20->fields._version;
                if ( !v67 )
                  goto LABEL_86;
                v69 = v20->fields._size;
                v18 = (const MethodInfo *)(unsigned int)Instance;
                if ( (unsigned int)v69 >= v67->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v20,
                    (int32_t)Instance,
                    *(const MethodInfo_366EC48 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
                }
                else
                {
                  v20->fields._size = v69 + 1;
                  v67->m_Items[v69 + 1] = (int)Instance;
                }
              }
            }
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v56->fields.m_CancellationTokenSource;
    }
  }
  return v20;
}


UserServantEntity_array *__fastcall UserServantMaster__GetCombineMaterialList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int64_t Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v17; // x27
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w23
  __int128 v21; // q0
  int64_t v22; // x24
  __int64 v23; // x25
  __int64 v24; // x26
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4C22EC3 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, method);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v3);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1C3B764(&NetworkManager_TypeInfo, v10);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4C22EC3 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v15);
    byte_4C1C955 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_34;
  v17 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v20,
                            (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v21 = *(_OWORD *)(Instance + 64);
        v22 = Instance;
        *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v37.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v36 = v37;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v36, 0LL);
        if ( Instance == v17 )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v22, 0LL);
          if ( (Instance & 1) == 0 )
          {
            v24 = *(_QWORD *)(v22 + 80);
            v23 = *(_QWORD *)(v22 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v38.fields.currentCryptoKey = v24;
            *(_QWORD *)&v38.fields.fakeValue = v23;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v38, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            Instance = ServantEntity__get_IsCombineMaterial((ServantEntity_o *)Instance, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = UserServantEntity__IsLock((UserServantEntity_o *)v22, 0LL);
              if ( (Instance & 1) == 0 )
              {
                Instance = UserServantEntity__IsChoice((UserServantEntity_o *)v22, 0LL);
                if ( (Instance & 1) == 0 )
                {
                  if ( !v19 )
                    break;
                  items = v19->fields._items;
                  v32 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                  ++v19->fields._version;
                  if ( !items )
                    break;
                  size = v19->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v19,
                      (Il2CppObject *)v22,
                      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v34 = &items->obj.klass + size;
                    v19->fields._size = size + 1;
                    v34[4] = (Il2CppClass *)v22;
                    sub_1C3B708((PartyOrganizationUtility_o *)(v34 + 4), v22, v25, v26, v27, v28, v29, v30);
                  }
                }
              }
            }
          }
        }
      }
      if ( Count == ++v20 )
        goto LABEL_32;
    }
LABEL_34:
    sub_1C3B9C0(Instance, v15);
  }
LABEL_32:
  if ( !v19 )
    goto LABEL_34;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v19,
                                      (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__GetEntities(
        UserServantMaster_o *this,
        System_Int64_array *userServantIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_long__o *v6; // x21

  if ( (byte_4C22EC8 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_long___ctor___77852968, userServantIds);
    sub_1C3B764(&System_Collections_Generic_List_long__TypeInfo, v5);
    byte_4C22EC8 = 1;
  }
  if ( userServantIds )
  {
    v6 = (System_Collections_Generic_List_long__o *)sub_1C3B9B0(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_57095540(
      v6,
      (System_Collections_Generic_IEnumerable_T__o *)userServantIds,
      (const MethodInfo_3673574 *)Method_System_Collections_Generic_List_long___ctor___77852968);
  }
  else
  {
    v6 = 0LL;
  }
  return UserServantMaster__GetEntities_41742784(this, v6, method);
}


UserServantEntity_array *__fastcall UserServantMaster__GetEntities_41742784(
        UserServantMaster_o *this,
        System_Collections_Generic_List_long__o *userServantIds,
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
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  Il2CppObject *v29; // x22
  __int128 v30; // q0
  int64_t v31; // x1
  _BOOL8 v32; // x0
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+20h] [xbp-70h]

  if ( (byte_4C22EC9 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__, userServantIds);
    sub_1C3B764(&System_IDisposable_TypeInfo, v5);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, v6);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__Contains__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__get_Count__, v12);
    sub_1C3B764(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_4C22EC9 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( userServantIds && userServantIds->fields._size >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_40;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   list,
                   (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
    if ( !Enumerator )
      sub_1C3B9C0(0LL, v18);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v21;
          p_offset += 4;
          if ( !v21 )
            goto LABEL_11;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_11:
        p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v24 = Enumerator->klass;
      v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v26 = &v24->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v26 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
        {
          --v25;
          v26 += 4;
          if ( !v25 )
            goto LABEL_18;
        }
        v27 = (__int64)&v24->vtable[*v26].method;
      }
      else
      {
LABEL_18:
        v27 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL);
      }
      v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
              Enumerator,
              *(_QWORD *)(v27 + 8));
      v29 = (Il2CppObject *)v28;
      if ( v28 )
      {
        v30 = *(_OWORD *)(v28 + 32);
        *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(v28 + 16);
        *(_OWORD *)&v50.fields.fakeValue = v30;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v49 = v50;
        v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v49, 0LL);
        v32 = System_Collections_Generic_List_long___Contains(
                userServantIds,
                v31,
                (const MethodInfo_3674018 *)Method_System_Collections_Generic_List_long__Contains__);
        if ( v32 )
        {
          if ( !v15 )
            sub_1C3B9C0(v32, v33);
          items = v15->fields._items;
          v41 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            sub_1C3B9C0(v32, v33);
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              v29,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
          }
          else
          {
            v43 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v43[4] = (Il2CppClass *)v29;
            sub_1C3B708((PartyOrganizationUtility_o *)(v43 + 4), (int64_t)v29, v34, v35, v36, v37, v38, v39);
          }
        }
      }
    }
    v44 = Enumerator->klass;
    v45 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v46 = &v44->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_33;
      }
      v47 = (__int64)&v44->vtable[*v46].method;
    }
    else
    {
LABEL_33:
      v47 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(
                                                               Enumerator,
                                                               *(_QWORD *)(v47 + 8));
  }
  if ( !v15 )
LABEL_40:
    sub_1C3B9C0(list, v17);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v15,
                                      (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantMaster__GetHaveServantSkillLevelMax(
        UserServantMaster_o *this,
        int32_t svtId,
        int32_t skillIdx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x19
  UserServantEntity_o *All_object; // x0
  const MethodInfo *v15; // x1
  System_Object_array *AllList; // x20
  System_Predicate_object__o *v17; // x21
  System_Object_array *v18; // x20
  System_Comparison_T__o *v19; // x21
  __int64 v20; // x0

  if ( (byte_4C22EC4 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_FindAll_UserServantEntity___, *(_QWORD *)&svtId);
    sub_1C3B764(&Method_System_Array_Sort_UserServantEntity___, v7);
    sub_1C3B764(&System_Comparison_UserServantEntity__TypeInfo, v8);
    sub_1C3B764(&System_Predicate_UserServantEntity__TypeInfo, v9);
    sub_1C3B764(&Method_UserServantMaster___c__DisplayClass31_0__GetHaveServantSkillLevelMax_b__0__, v10);
    sub_1C3B764(&Method_UserServantMaster___c__DisplayClass31_0__GetHaveServantSkillLevelMax_b__1__, v11);
    sub_1C3B764(&UserServantMaster___c__DisplayClass31_0_TypeInfo, v12);
    byte_4C22EC4 = 1;
  }
  v13 = sub_1C3B9B0(UserServantMaster___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_10;
  *(_DWORD *)(v13 + 16) = svtId;
  *(_DWORD *)(v13 + 20) = skillIdx;
  AllList = (System_Object_array *)UserServantMaster__getAllList(this, v15);
  v17 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_UserServantEntity__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v13,
    Method_UserServantMaster___c__DisplayClass31_0__GetHaveServantSkillLevelMax_b__0__,
    0LL);
  All_object = (UserServantEntity_o *)System_Array__FindAll_object_(
                                        AllList,
                                        (System_Predicate_T__o *)v17,
                                        (const MethodInfo_30ECAD4 *)Method_System_Array_FindAll_UserServantEntity___);
  if ( !All_object )
    goto LABEL_10;
  v18 = (System_Object_array *)All_object;
  if ( All_object->fields.id.fields.hiddenValue )
  {
    v19 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_object____ctor(
      v19,
      (Il2CppObject *)v13,
      Method_UserServantMaster___c__DisplayClass31_0__GetHaveServantSkillLevelMax_b__1__,
      0LL);
    System_Array__Sort_object__50059320(
      v18,
      v19,
      (const MethodInfo_2FBD838 *)Method_System_Array_Sort_UserServantEntity___);
    if ( !v18->max_length )
      sub_1C3B9C8(v20, v15);
    All_object = (UserServantEntity_o *)v18->m_Items[0];
    if ( All_object )
      return UserServantEntity__getSkillLevel(All_object, *(_DWORD *)(v13 + 20), 0LL);
LABEL_10:
    sub_1C3B9C0(All_object, v15);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantMaster__GetMaxTreasureDeviceLevel(
        UserServantMaster_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v13; // x1
  UserServantEntity_array *AllList; // x21
  __int64 v15; // x8
  int32_t v16; // w22
  unsigned __int64 i; // x25
  UserServantEntity_o *v18; // x28
  __int64 v19; // x23
  __int64 v20; // x24
  int32_t treasureDeviceLv1; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4C22EBB & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v5);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1C3B764(&System_Math_TypeInfo, v7);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4C22EBB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___),
        AllList = UserServantMaster__getAllList(this, v13),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL
    || (Instance = (Il2CppObject *)UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL),
        !AllList) )
  {
LABEL_21:
    sub_1C3B9C0(Instance, v11);
  }
  v15 = *(_QWORD *)&AllList->max_length;
  v16 = (unsigned __int8)Instance & 1;
  if ( (int)v15 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v15; ++i )
    {
      if ( i >= (unsigned int)v15 )
        sub_1C3B9C8(Instance, v11);
      v18 = AllList->m_Items[i];
      if ( v18 )
      {
        v20 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
        v19 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v23.fields.currentCryptoKey = v20;
        *(_QWORD *)&v23.fields.fakeValue = v19;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v23, 0LL);
        if ( !MasterData_object )
          goto LABEL_21;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_21;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                     (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Instance[2],
                                     0LL);
        if ( (_DWORD)Instance == servantId )
        {
          treasureDeviceLv1 = v18->fields.treasureDeviceLv1;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          Instance = (Il2CppObject *)System_Math__Max_64187756(v16, treasureDeviceLv1, 0LL);
          v16 = (int)Instance;
        }
      }
      LODWORD(v15) = AllList->max_length;
    }
  }
  return v16;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantMaster__GetServantHavingCount(
        UserServantMaster_o *this,
        int32_t servantId,
        bool isCheckPresentBox,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UserServantEntity_array *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v14; // x1
  __int64 v15; // x8
  UserServantEntity_array *v16; // x23
  int32_t v17; // w21
  unsigned __int64 v18; // x27
  UserServantEntity_o *v19; // x8
  __int64 v20; // x24
  __int64 v21; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4C22EB9 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v7);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4C22EB9 = 1;
  }
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = UserServantMaster__getAllList(this, v14);
  if ( !Instance )
    goto LABEL_23;
  v15 = *(_QWORD *)&Instance->max_length;
  v16 = Instance;
  if ( (int)v15 < 1 )
  {
    v17 = 0;
    if ( !isCheckPresentBox )
      return v17;
    goto LABEL_19;
  }
  v17 = 0;
  v18 = 0LL;
  do
  {
    if ( v18 >= (unsigned int)v15 )
      sub_1C3B9C8(Instance, v12);
    v19 = v16->m_Items[v18];
    if ( v19 )
    {
      v21 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v23.fields.currentCryptoKey = v21;
      *(_QWORD *)&v23.fields.fakeValue = v20;
      Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                              v23,
                                              0LL);
      if ( !MasterData_object )
        goto LABEL_23;
      Instance = (UserServantEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                              (int32_t)Instance,
                                              (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_23;
      Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance->m_Items,
                                              0LL);
      if ( (_DWORD)Instance == servantId )
        ++v17;
    }
    LODWORD(v15) = v16->max_length;
    ++v18;
  }
  while ( (__int64)v18 < (int)v15 );
  if ( isCheckPresentBox )
  {
LABEL_19:
    Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
      if ( Instance )
      {
        v17 += UserPresentBoxMaster__GetCount((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL);
        return v17;
      }
    }
LABEL_23:
    sub_1C3B9C0(Instance, v12);
  }
  return v17;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantMaster__GetServantHavingTdLvCount(
        UserServantMaster_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UserServantEntity_array *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v13; // x1
  __int64 v14; // x8
  UserServantEntity_array *v15; // x21
  int v16; // w25
  unsigned __int64 v17; // x26
  UserServantEntity_o *v18; // x22
  __int64 v19; // x23
  __int64 v20; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4C22EBA & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1C3B764(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v5);
    sub_1C3B764(&DataManager_TypeInfo, v6);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4C22EBA = 1;
  }
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = UserServantMaster__getAllList(this, v13);
  if ( !Instance )
    goto LABEL_23;
  v14 = *(_QWORD *)&Instance->max_length;
  v15 = Instance;
  if ( (int)v14 >= 1 )
  {
    v16 = 0;
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v14 )
        sub_1C3B9C8(Instance, v11);
      v18 = v15->m_Items[v17];
      if ( v18 )
      {
        v20 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
        v19 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v22.fields.currentCryptoKey = v20;
        *(_QWORD *)&v22.fields.fakeValue = v19;
        Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                                v22,
                                                0LL);
        if ( !MasterData_object )
          goto LABEL_23;
        Instance = (UserServantEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                (int32_t)Instance,
                                                (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_23;
        Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance->m_Items,
                                                0LL);
        if ( (_DWORD)Instance == servantId )
        {
          Instance = (UserServantEntity_array *)UserServantEntity__IsWithdrawal(v18, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            v16 += v18->fields.treasureDeviceLv1;
        }
      }
      LODWORD(v14) = v15->max_length;
      if ( (__int64)++v17 >= (int)v14 )
        goto LABEL_19;
    }
  }
  v16 = 0;
LABEL_19:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (UserServantEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !Instance )
LABEL_23:
    sub_1C3B9C0(Instance, v11);
  return UserPresentBoxMaster__GetServantCount((UserPresentBoxMaster_o *)Instance, servantId, 0LL) + v16;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantMaster__GetServantHavintLimitMaxCount(
        UserServantMaster_o *this,
        int32_t servantId,
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x1
  Il2CppObject *MasterData_object; // x22
  NetworkManager_c *v22; // x0
  int64_t userIdNumber; // x27
  UserServantEntity_array *AllList; // x0
  UserServantMaster___c_c *v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x19
  System_Func_object__bool__o *_9__34_0; // x21
  Il2CppObject *v28; // x23
  struct UserServantMaster___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  DataManager_c *klass; // x8
  DataManager_o *v37; // x19
  __int64 v38; // x9
  int32_t *p_offset; // x10
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x19
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x23
  __int128 v53; // q0
  __int64 v54; // x24
  __int64 v55; // x25
  __int64 v56; // x0
  Il2CppObject *Entity; // x0
  __int64 v58; // x1
  Il2CppObject *v59; // x24
  __int64 v60; // x23
  __int64 v61; // x25
  int32_t v62; // w0
  int v63; // w8
  __int64 v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0
  int32_t v69; // [xsp+Ch] [xbp-A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_4C22EC6 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v6);
    sub_1C3B764(&System_Func_UserServantEntity__bool__TypeInfo, v7);
    sub_1C3B764(&System_IDisposable_TypeInfo, v8);
    sub_1C3B764(&System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, v9);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, v10);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1C3B764(&NetworkManager_TypeInfo, v12);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1C3B764(&Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__34_0__, v16);
    sub_1C3B764(&UserServantMaster___c_TypeInfo, v17);
    byte_4C22EC6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v20);
    byte_4C1C955 = 1;
  }
  v22 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v22 = NetworkManager_TypeInfo;
  }
  userIdNumber = v22->static_fields->userIdNumber;
  AllList = UserServantMaster__getAllList(this, v20);
  v25 = UserServantMaster___c_TypeInfo;
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)AllList;
  if ( !UserServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantMaster___c_TypeInfo);
    v25 = UserServantMaster___c_TypeInfo;
  }
  _9__34_0 = (System_Func_object__bool__o *)v25->static_fields->__9__34_0;
  if ( !_9__34_0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = UserServantMaster___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__34_0 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_UserServantEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__34_0,
      v28,
      Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__34_0__,
      0LL);
    static_fields = UserServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = (struct System_Func_UserServantEntity__bool__o *)_9__34_0;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__34_0,
      (int64_t)_9__34_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  Instance = (DataManager_o *)System_Linq_Enumerable__Where_object_(
                                v26,
                                (System_Func_TSource__bool__o *)_9__34_0,
                                (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  if ( !Instance )
LABEL_62:
    sub_1C3B9C0(Instance, v19);
  klass = Instance->klass;
  v37 = Instance;
  v38 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_UserServantEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo )
    {
      --v38;
      p_offset += 4;
      if ( !v38 )
        goto LABEL_21;
    }
    v40 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_21:
    v40 = sub_1C8D744(Instance, System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, 0LL);
  }
  v42 = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v40)(v37, *(_QWORD *)(v40 + 8));
  if ( !v42 )
    sub_1C3B9C0(0LL, v41);
  v69 = 0;
  while ( 1 )
  {
    v43 = *(_QWORD *)v42;
    v44 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
    {
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v45 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_29;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_29:
      v46 = sub_1C8D744(v42, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8)) & 1) == 0 )
      break;
    v47 = *(_QWORD *)v42;
    v48 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
    {
      v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v49 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_36;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_36:
      v50 = sub_1C8D744(v42, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL);
    }
    v51 = (*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v42, *(_QWORD *)(v50 + 8));
    v52 = v51;
    if ( v51 )
    {
      v53 = *(_OWORD *)(v51 + 64);
      *(_OWORD *)&v71.fields.currentCryptoKey = *(_OWORD *)(v51 + 48);
      *(_OWORD *)&v71.fields.fakeValue = v53;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v70 = v71;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v70, 0LL) == userIdNumber
        && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v52, 0LL) )
      {
        v55 = *(_QWORD *)(v52 + 80);
        v54 = *(_QWORD *)(v52 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v72.fields.currentCryptoKey = v55;
        *(_QWORD *)&v72.fields.fakeValue = v54;
        v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v72, 0LL);
        if ( !MasterData_object )
          sub_1C3B9C0(v56, (unsigned int)v56);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v56,
                   (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v59 = Entity;
        if ( !Entity )
          sub_1C3B9C0(0LL, v58);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
               (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[2],
               0LL) == servantId )
        {
          v61 = *(_QWORD *)(v52 + 96);
          v60 = *(_QWORD *)(v52 + 104);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v73.fields.currentCryptoKey = v61;
          *(_QWORD *)&v73.fields.fakeValue = v60;
          v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v73, 0LL);
          v63 = v69;
          if ( v62 == LODWORD(v59[5].monitor) )
            v63 = v69 + 1;
          v69 = v63;
        }
      }
    }
  }
  v64 = *(_QWORD *)v42;
  v65 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
  {
    v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
    {
      --v65;
      v66 += 4;
      if ( !v65 )
        goto LABEL_57;
    }
    v67 = v64 + 16LL * *v66 + 312;
  }
  else
  {
LABEL_57:
    v67 = sub_1C8D744(v42, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v67)(v42, *(_QWORD *)(v67 + 8));
  return v69;
}


int32_t __fastcall UserServantMaster__GetSvtEquipFriendShip(UserServantMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v13; // x26
  int32_t Count; // w0
  int32_t v15; // w22
  int32_t v16; // w21
  int32_t v17; // w23
  Il2CppObject *Item; // x0
  Il2CppObject v19; // q0
  Il2CppObject *v20; // x24
  void *monitor; // x24
  Il2CppClass *klass; // x25
  Il2CppObject *Entity; // x0
  ServantEntity_o *v24; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4C22EC7 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, method);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v3);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4C22EC7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v11);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_29;
  v13 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    v17 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v17,
               (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Item )
      {
        v19 = Item[4];
        v20 = Item;
        *(Il2CppObject *)&v27.fields.currentCryptoKey = Item[3];
        *(Il2CppObject *)&v27.fields.fakeValue = v19;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v26 = v27;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v26, 0LL) == v13
          && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v20, 0LL) )
        {
          klass = v20[5].klass;
          monitor = v20[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v28.fields.currentCryptoKey = klass;
          *(_QWORD *)&v28.fields.fakeValue = monitor;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v28, 0LL);
          if ( !MasterData_object )
            break;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Entity )
          {
            v24 = (ServantEntity_o *)Entity;
            if ( SvtType__IsKeepServantEquip(HIDWORD(Entity[5].klass), 0LL) )
              v16 += ServantEntity__get_IsFriendShipSvtEquip(v24, 0LL);
          }
        }
      }
      if ( v15 == ++v17 )
        return v16;
    }
LABEL_29:
    sub_1C3B9C0(Instance, v11);
  }
  return 0;
}


bool __fastcall UserServantMaster__IsServantHaving(
        UserServantMaster_o *this,
        int32_t svtId,
        bool checkPresentBox,
        const MethodInfo *method)
{
  return UserServantMaster__GetServantHavingCount(this, svtId, checkPresentBox, method) > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantMaster__IsServantHavingLimitMax(
        UserServantMaster_o *this,
        int32_t svtId,
        int32_t condNum,
        const MethodInfo *method)
{
  return UserServantMaster__GetServantHavintLimitMaxCount(this, svtId, *(const MethodInfo **)&condNum) >= condNum;
}


bool __fastcall UserServantMaster__TryGetEntityFromSvtId(
        UserServantMaster_o *this,
        UserServantEntity_o **svtEnt,
        int64_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *v10; // x22
  __int64 v11; // x0
  const MethodInfo *v12; // x1
  System_Collections_Generic_IEnumerable_TSource__o *List; // x20
  System_Func_object__bool__o *v14; // x21
  Il2CppObject *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4C22EAA & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____77947224, svtEnt);
    sub_1C3B764(&System_Func_UserServantEntity__bool__TypeInfo, v7);
    sub_1C3B764(&Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__, v8);
    sub_1C3B764(&UserServantMaster___c__DisplayClass1_0_TypeInfo, v9);
    byte_4C22EAA = 1;
  }
  v10 = (Il2CppObject *)sub_1C3B9B0(UserServantMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor(v10, 0LL);
  if ( !v10 )
    sub_1C3B9C0(v11, v12);
  v10[1].klass = (Il2CppClass *)svtId;
  List = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getList(this, v12);
  v14 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    v10,
    Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__,
    0LL);
  v15 = System_Linq_Enumerable__FirstOrDefault_object__50415372(
          List,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_301470C *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____77947224);
  *svtEnt = (UserServantEntity_o *)v15;
  sub_1C3B708((PartyOrganizationUtility_o *)svtEnt, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  return *svtEnt != 0LL;
}


bool __fastcall UserServantMaster__TryGetEntityListBySvtId(
        UserServantMaster_o *this,
        System_Collections_Generic_List_UserServantEntity__o **userServantList,
        int32_t svtId,
        bool isIncludeStorage,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *v18; // x21
  const MethodInfo *v19; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x1
  Il2CppObject *v32; // x24
  void *monitor; // x25
  Il2CppClass *v34; // x26
  __int64 v35; // x0
  __int64 v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_Collections_ObjectModel_Collection_T__c *v57; // x8
  System_Collections_ObjectModel_Collection_T__o *v58; // x22
  unsigned __int64 v59; // x26
  Il2CppObject *v60; // x23
  void *v61; // x24
  Il2CppClass *v62; // x25
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  Il2CppClass **v66; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  if ( (byte_4C22ECA & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__, userServantList);
    sub_1C3B764(&Method_DataManager_GetMaster_UserServantStorageMaster___, v8);
    sub_1C3B764(&DataManager_TypeInfo, v9);
    sub_1C3B764(&System_IDisposable_TypeInfo, v10);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, v11);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v15);
    sub_1C3B764(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v16);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    byte_4C22ECA = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v21);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v29 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_16;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_16:
      v30 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL);
    }
    v32 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                            Enumerator,
                            *(_QWORD *)(v30 + 8));
    if ( !v32 )
      sub_1C3B9C0(0LL, v31);
    v34 = v32[5].klass;
    monitor = v32[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v69.fields.currentCryptoKey = v34;
    *(_QWORD *)&v69.fields.fakeValue = monitor;
    v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v69, 0LL);
    if ( (_DWORD)v35 == svtId )
    {
      if ( !v18 )
        sub_1C3B9C0(v35, v36);
      items = v18->fields._items;
      v44 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++v18->fields._version;
      if ( !items )
        sub_1C3B9C0(v35, v36);
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          v32,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v46[4] = (Il2CppClass *)v32;
        sub_1C3B708((PartyOrganizationUtility_o *)(v46 + 4), (int64_t)v32, v37, v38, v39, v40, v41, v42);
      }
    }
  }
  v47 = Enumerator->klass;
  v48 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v49 = &v47->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_31;
    }
    v50 = (__int64)&v47->vtable[*v49].method;
  }
  else
  {
LABEL_31:
    v50 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(Enumerator, *(_QWORD *)(v50 + 8));
  if ( isIncludeStorage )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)UserServantStorageMaster__getList(
                                                                 (UserServantStorageMaster_o *)list,
                                                                 v19);
      if ( list )
      {
        v57 = list[1].klass;
        v58 = list;
        if ( (int)v57 >= 1 )
        {
          v59 = 0LL;
          while ( 1 )
          {
            if ( v59 >= (unsigned int)v57 )
              sub_1C3B9C8(list, v19);
            v60 = (Il2CppObject *)*((_QWORD *)&v58[1].monitor + v59);
            if ( v60 )
            {
              v62 = v60[5].klass;
              v61 = v60[5].monitor;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v70.fields.currentCryptoKey = v62;
              *(_QWORD *)&v70.fields.fakeValue = v61;
              list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                                                         v70,
                                                                         0LL);
              if ( (_DWORD)list == svtId )
              {
                if ( !v18 )
                  goto LABEL_57;
                v63 = v18->fields._items;
                v64 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v18->fields._version;
                if ( !v63 )
                  goto LABEL_57;
                v65 = v18->fields._size;
                if ( (unsigned int)v65 >= v63->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v18,
                    v60,
                    *(const MethodInfo_368BC6C **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
                }
                else
                {
                  v66 = &v63->obj.klass + v65;
                  v18->fields._size = v65 + 1;
                  v66[4] = (Il2CppClass *)v60;
                  sub_1C3B708((PartyOrganizationUtility_o *)(v66 + 4), (int64_t)v60, v51, v52, v53, v54, v55, v56);
                }
              }
            }
            LODWORD(v57) = v58[1].klass;
            if ( (__int64)++v59 >= (int)v57 )
              goto LABEL_51;
          }
        }
        goto LABEL_51;
      }
    }
LABEL_57:
    sub_1C3B9C0(list, v19);
  }
LABEL_51:
  *userServantList = (System_Collections_Generic_List_UserServantEntity__o *)v18;
  sub_1C3B708((PartyOrganizationUtility_o *)userServantList, (int64_t)v18, v51, v52, v53, v54, v55, v56);
  if ( !*userServantList )
    goto LABEL_57;
  return (*userServantList)->fields._size > 0;
}


bool __fastcall UserServantMaster__TryGetEntitySvtStorageListBySvtId(
        UserServantMaster_o *this,
        System_Collections_Generic_List_UserServantEntity__o **userStorageServantList,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x21
  UserServantEntity_array *Master_object; // x0
  const MethodInfo *v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x8
  UserServantEntity_array *v22; // x22
  unsigned __int64 v23; // x26
  Il2CppObject *v24; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4C22ECB & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_UserServantStorageMaster___, userStorageServantList);
    sub_1C3B764(&DataManager_TypeInfo, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v9);
    sub_1C3B764(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v10);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4C22ECB = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
  if ( !Master_object )
    goto LABEL_23;
  Master_object = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Master_object, v14);
  if ( !Master_object )
    goto LABEL_23;
  v21 = *(_QWORD *)&Master_object->max_length;
  v22 = Master_object;
  if ( (int)v21 >= 1 )
  {
    v23 = 0LL;
    do
    {
      if ( v23 >= (unsigned int)v21 )
        sub_1C3B9C8(Master_object, v14);
      v24 = (Il2CppObject *)v22->m_Items[v23];
      if ( v24 )
      {
        klass = v24[5].klass;
        monitor = v24[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v32.fields.currentCryptoKey = klass;
        *(_QWORD *)&v32.fields.fakeValue = monitor;
        Master_object = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                                     v32,
                                                     0LL);
        if ( (_DWORD)Master_object == svtId )
        {
          if ( !v12 )
            goto LABEL_23;
          items = v12->fields._items;
          v28 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            goto LABEL_23;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              v24,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v30[4] = (Il2CppClass *)v24;
            sub_1C3B708((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)v24, v15, v16, v17, v18, v19, v20);
          }
        }
      }
      LODWORD(v21) = v22->max_length;
    }
    while ( (__int64)++v23 < (int)v21 );
  }
  *userStorageServantList = (System_Collections_Generic_List_UserServantEntity__o *)v12;
  sub_1C3B708((PartyOrganizationUtility_o *)userStorageServantList, (int64_t)v12, v15, v16, v17, v18, v19, v20);
  if ( !*userStorageServantList )
LABEL_23:
    sub_1C3B9C0(Master_object, v14);
  return (*userStorageServantList)->fields._size > 0;
}


void __fastcall UserServantMaster__continueDeviceUserServant(UserServantMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_long__o *v11; // x20
  int64_t v12; // x1
  int64_t list; // x0
  int32_t Count; // w21
  __int64 v15; // x24
  int32_t v16; // w22
  __int128 v17; // q0
  int64_t v18; // x23
  __int128 v19; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  System_Int64_array *v23; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+40h] [xbp-70h]

  if ( (byte_4C22EBE & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, method);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__Add__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__ToArray__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_1C3B764(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1C3B764(&UserServantNewManager_TypeInfo, v10);
    byte_4C22EBE = 1;
  }
  v11 = (System_Collections_Generic_List_long__o *)sub_1C3B9B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_367344C *)Method_System_Collections_Generic_List_long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v12);
    byte_4C1C955 = 1;
  }
  list = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    list = (int64_t)NetworkManager_TypeInfo;
  }
  if ( Count >= 1 )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(list + 184) + 64LL);
    v16 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v16,
                        (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( list )
      {
        v17 = *(_OWORD *)(list + 64);
        v18 = list;
        *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)(list + 48);
        *(_OWORD *)&v26.fields.fakeValue = v17;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v25 = v26;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v25, 0LL);
        if ( list == v15 )
        {
          list = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v18, 0LL);
          if ( (list & 1) == 0 )
          {
            v19 = *(_OWORD *)(v18 + 32);
            *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)(v18 + 16);
            *(_OWORD *)&v26.fields.fakeValue = v19;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v24 = v26;
            list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v24, 0LL);
            if ( !v11 )
              break;
            items = v11->fields._items;
            v21 = Method_System_Collections_Generic_List_long__Add__;
            ++v11->fields._version;
            if ( !items )
              break;
            size = v11->fields._size;
            v12 = list;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_long___AddWithResize(
                v11,
                list,
                *(const MethodInfo_3673CA0 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v11->fields._size = size + 1;
              items->m_Items[size] = list;
            }
          }
        }
      }
      if ( Count == ++v16 )
        goto LABEL_26;
    }
LABEL_30:
    sub_1C3B9C0(list, v12);
  }
LABEL_26:
  if ( !v11 )
    goto LABEL_30;
  v23 = System_Collections_Generic_List_long___ToArray(
          v11,
          (const MethodInfo_3675758 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  UserServantNewManager__SetOld_42056684(v23, 0LL);
}


UserServantEntity_array *__fastcall UserServantMaster__getAllList(UserServantMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *List; // x20
  System_Collections_Generic_List_object__o *v9; // x19
  UserServantEntity_array *Instance; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C22EC0 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantStorageMaster___, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity___ctor___77869264, v5);
    sub_1C3B764(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C22EC0 = 1;
  }
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, method);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_57193824(
    v9,
    List,
    (const MethodInfo_368B560 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___77869264);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL
    || (Instance = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, v11), !v9) )
  {
    sub_1C3B9C0(Instance, v11);
  }
  System_Collections_Generic_List_object___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_368BE78 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v9,
                                      (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getCombineMaterialList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int64_t Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v17; // x27
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w23
  __int128 v21; // q0
  int64_t v22; // x24
  __int64 v23; // x25
  __int64 v24; // x26
  ServantEntity_o *v25; // x25
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4C22EBF & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, method);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v3);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1C3B764(&NetworkManager_TypeInfo, v10);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4C22EBF = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v15);
    byte_4C1C955 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_33;
  v17 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v20,
                            (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v21 = *(_OWORD *)(Instance + 64);
        v22 = Instance;
        *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v38.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v37 = v38;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v37, 0LL);
        if ( Instance == v17 )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v22, 0LL);
          if ( (Instance & 1) == 0 )
          {
            v24 = *(_QWORD *)(v22 + 80);
            v23 = *(_QWORD *)(v22 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v39.fields.currentCryptoKey = v24;
            *(_QWORD *)&v39.fields.fakeValue = v23;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v39, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v25 = (ServantEntity_o *)Instance;
            Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = ServantEntity__get_IsServantMaterialTd(v25, 0LL);
              if ( (Instance & 1) == 0 )
              {
                if ( !v19 )
                  break;
                items = v19->fields._items;
                v33 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v19->fields._version;
                if ( !items )
                  break;
                size = v19->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v19,
                    (Il2CppObject *)v22,
                    *(const MethodInfo_368BC6C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
                }
                else
                {
                  v35 = &items->obj.klass + size;
                  v19->fields._size = size + 1;
                  v35[4] = (Il2CppClass *)v22;
                  sub_1C3B708((PartyOrganizationUtility_o *)(v35 + 4), v22, v26, v27, v28, v29, v30, v31);
                }
              }
            }
          }
        }
      }
      if ( Count == ++v20 )
        goto LABEL_31;
    }
LABEL_33:
    sub_1C3B9C0(Instance, v15);
  }
LABEL_31:
  if ( !v19 )
    goto LABEL_33;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v19,
                                      (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


int32_t __fastcall UserServantMaster__getCount(
        UserServantMaster_o *this,
        int32_t *servantSum,
        int32_t *servantEquipSum,
        bool friendShipSvtEqExclude,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x23
  __int64 v18; // x29
  int32_t Count; // w0
  int32_t v20; // w24
  int32_t v21; // w25
  int32_t v22; // w26
  Il2CppObject *Item; // x0
  Il2CppObject v24; // q0
  Il2CppObject *v25; // x27
  void *monitor; // x27
  Il2CppClass *klass; // x28
  Il2CppObject *Entity; // x0
  int32_t klass_high; // w28
  ServantEntity_o *v30; // x27
  int32_t *v32; // [xsp+0h] [xbp-B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4C22EAB & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, servantSum);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v8);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1C3B764(&NetworkManager_TypeInfo, v11);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4C22EAB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v16);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_33;
  v18 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v32 = servantEquipSum;
    v20 = Count;
    v21 = 0;
    v22 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v22,
               (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Item )
      {
        v24 = Item[4];
        v25 = Item;
        *(Il2CppObject *)&v35.fields.currentCryptoKey = Item[3];
        *(Il2CppObject *)&v35.fields.fakeValue = v24;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v34 = v35;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v34, 0LL) == v18
          && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v25, 0LL) )
        {
          klass = v25[5].klass;
          monitor = v25[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v36.fields.currentCryptoKey = klass;
          *(_QWORD *)&v36.fields.fakeValue = monitor;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v36, 0LL);
          if ( !MasterData_object )
            break;
          ++v21;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Entity )
          {
            klass_high = HIDWORD(Entity[5].klass);
            v30 = (ServantEntity_o *)Entity;
            if ( SvtType__IsKeepServant(klass_high, 0LL) )
            {
              ++*servantSum;
            }
            else if ( SvtType__IsKeepServantEquip(klass_high, 0LL)
                   && (!friendShipSvtEqExclude || !ServantEntity__get_IsFriendShipSvtEquip(v30, 0LL)) )
            {
              ++*v32;
            }
          }
        }
      }
      if ( v20 == ++v22 )
        return v21;
    }
LABEL_33:
    sub_1C3B9C0(Instance, v16);
  }
  return 0;
}


int32_t __fastcall UserServantMaster__getCountWithoutMaterial(
        UserServantMaster_o *this,
        int32_t *servantSum,
        int32_t *servantEquipSum,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x22
  __int64 v17; // x28
  int32_t Count; // w0
  int32_t v19; // w23
  int32_t v20; // w24
  int32_t v21; // w25
  Il2CppObject *Item; // x0
  Il2CppObject v23; // q0
  Il2CppObject *v24; // x26
  void *monitor; // x26
  Il2CppClass *klass; // x27
  Il2CppObject *Entity; // x0
  int32_t klass_high; // w26
  int32_t *v30; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4C22EAC & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, servantSum);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v7);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1C3B764(&NetworkManager_TypeInfo, v10);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4C22EAC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v15);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
LABEL_32:
    sub_1C3B9C0(Instance, v15);
  v17 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v30 = servantEquipSum;
    v19 = Count;
    v20 = 0;
    v21 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_32;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v21,
               (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Item )
      {
        v23 = Item[4];
        v24 = Item;
        *(Il2CppObject *)&v32.fields.currentCryptoKey = Item[3];
        *(Il2CppObject *)&v32.fields.fakeValue = v23;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v31 = v32;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v31, 0LL) == v17
          && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v24, 0LL) )
        {
          klass = v24[5].klass;
          monitor = v24[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v33.fields.currentCryptoKey = klass;
          *(_QWORD *)&v33.fields.fakeValue = monitor;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v33, 0LL);
          if ( !MasterData_object )
            goto LABEL_32;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Entity )
          {
            klass_high = HIDWORD(Entity[5].klass);
            if ( SvtType__IsOrganization(klass_high, 0LL) )
            {
              ++*servantSum;
LABEL_27:
              ++v20;
              goto LABEL_28;
            }
            if ( SvtType__IsServantEquip(klass_high, 0LL) )
            {
              ++*v30;
              goto LABEL_27;
            }
          }
        }
      }
LABEL_28:
      if ( v19 == ++v21 )
        return v20;
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_o *__fastcall UserServantMaster__getHeroineData(
        UserServantMaster_o *this,
        int32_t heroineId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  Il2CppObject *Item; // x0
  UserServantEntity_o *v12; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4C22EBC & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, *(_QWORD *)&heroineId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v5);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4C22EBC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v10,
               (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Item )
      {
        v12 = (UserServantEntity_o *)Item;
        klass = Item[5].klass;
        monitor = Item[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v16.fields.currentCryptoKey = klass;
        *(_QWORD *)&v16.fields.fakeValue = monitor;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v16, 0LL) == heroineId
          && UserServantEntity__IsHeroine(v12, 0LL) )
        {
          return v12;
        }
      }
      if ( v9 == ++v10 )
        return 0LL;
    }
LABEL_15:
    sub_1C3B9C0(list, *(_QWORD *)&heroineId);
  }
  return 0LL;
}


UserServantEntity_array *__fastcall UserServantMaster__getKeepServantEquipList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int64_t Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v17; // x27
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w23
  __int128 v21; // q0
  int64_t v22; // x24
  __int64 v23; // x25
  __int64 v24; // x26
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4C22EB5 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, method);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v3);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1C3B764(&NetworkManager_TypeInfo, v10);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4C22EB5 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v15);
    byte_4C1C955 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_32;
  v17 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v20,
                            (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v21 = *(_OWORD *)(Instance + 64);
        v22 = Instance;
        *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v37.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v36 = v37;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v36, 0LL);
        if ( Instance == v17 )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v22, 0LL);
          if ( (Instance & 1) == 0 )
          {
            v24 = *(_QWORD *)(v22 + 80);
            v23 = *(_QWORD *)(v22 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v38.fields.currentCryptoKey = v24;
            *(_QWORD *)&v38.fields.fakeValue = v23;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v38, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            Instance = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)Instance, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v19 )
                break;
              items = v19->fields._items;
              v32 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v19->fields._version;
              if ( !items )
                break;
              size = v19->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v19,
                  (Il2CppObject *)v22,
                  *(const MethodInfo_368BC6C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
              }
              else
              {
                v34 = &items->obj.klass + size;
                v19->fields._size = size + 1;
                v34[4] = (Il2CppClass *)v22;
                sub_1C3B708((PartyOrganizationUtility_o *)(v34 + 4), v22, v25, v26, v27, v28, v29, v30);
              }
            }
          }
        }
      }
      if ( Count == ++v20 )
        goto LABEL_30;
    }
LABEL_32:
    sub_1C3B9C0(Instance, v15);
  }
LABEL_30:
  if ( !v19 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v19,
                                      (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getKeepServantList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int64_t Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v17; // x27
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w23
  __int128 v21; // q0
  int64_t v22; // x24
  __int64 v23; // x25
  __int64 v24; // x26
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4C22EB3 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, method);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v3);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1C3B764(&NetworkManager_TypeInfo, v10);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4C22EB3 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v15);
    byte_4C1C955 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_32;
  v17 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v20,
                            (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v21 = *(_OWORD *)(Instance + 64);
        v22 = Instance;
        *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v37.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v36 = v37;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v36, 0LL);
        if ( Instance == v17 )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v22, 0LL);
          if ( (Instance & 1) == 0 )
          {
            v24 = *(_QWORD *)(v22 + 80);
            v23 = *(_QWORD *)(v22 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v38.fields.currentCryptoKey = v24;
            *(_QWORD *)&v38.fields.fakeValue = v23;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v38, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v19 )
                break;
              items = v19->fields._items;
              v32 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v19->fields._version;
              if ( !items )
                break;
              size = v19->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v19,
                  (Il2CppObject *)v22,
                  *(const MethodInfo_368BC6C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
              }
              else
              {
                v34 = &items->obj.klass + size;
                v19->fields._size = size + 1;
                v34[4] = (Il2CppClass *)v22;
                sub_1C3B708((PartyOrganizationUtility_o *)(v34 + 4), v22, v25, v26, v27, v28, v29, v30);
              }
            }
          }
        }
      }
      if ( Count == ++v20 )
        goto LABEL_30;
    }
LABEL_32:
    sub_1C3B9C0(Instance, v15);
  }
LABEL_30:
  if ( !v19 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v19,
                                      (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getList(UserServantMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0

  if ( (byte_4C22EAD & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    byte_4C22EAD = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    byte_4C1C955 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  return UserServantMaster__getList_41719220(this, v4->static_fields->userIdNumber, v2);
}


UserServantEntity_array *__fastcall UserServantMaster__getList_41719220(
        UserServantMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v13; // x21
  int32_t v14; // w23
  __int128 v15; // q0
  UserServantEntity_o *v16; // x24
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-70h]

  if ( (byte_4C22EAE & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, userId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    byte_4C22EAE = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v14,
                        (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( list )
      {
        v15 = *(_OWORD *)(list + 64);
        v16 = (UserServantEntity_o *)list;
        *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)(list + 48);
        *(_OWORD *)&v29.fields.fakeValue = v15;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v28 = v29;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v28, 0LL);
        if ( list == userId )
        {
          list = UserServantEntity__IsWithdrawal(v16, 0LL);
          if ( (list & 1) == 0 )
          {
            if ( !v13 )
              break;
            items = v13->fields._items;
            v24 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v13->fields._version;
            if ( !items )
              break;
            size = v13->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v13,
                (Il2CppObject *)v16,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = &items->obj.klass + size;
              v13->fields._size = size + 1;
              v26[4] = (Il2CppClass *)v16;
              sub_1C3B708((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)v16, v17, v18, v19, v20, v21, v22);
            }
          }
        }
      }
      if ( Count == ++v14 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1C3B9C0(list, userId);
  }
LABEL_18:
  if ( !v13 )
    goto LABEL_20;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v13,
                                      (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getNoneCombineSvt(
        UserServantMaster_o *this,
        int64_t userId,
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
  __int64 v14; // x1
  int64_t Instance; // x0
  __int64 v16; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x21
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v19; // x22
  int32_t v20; // w24
  __int128 v21; // q0
  int64_t v22; // x25
  __int64 v23; // x26
  __int64 v24; // x27
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4C22EBD & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, userId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v5);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v10);
    sub_1C3B764(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v11);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4C22EBD = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this->fields.list )
    goto LABEL_26;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v20,
                            (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v21 = *(_OWORD *)(Instance + 64);
        v22 = Instance;
        *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v37.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v36 = v37;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v36, 0LL);
        if ( Instance == userId )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v22, 0LL);
          if ( (Instance & 1) == 0 )
          {
            v24 = *(_QWORD *)(v22 + 80);
            v23 = *(_QWORD *)(v22 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v38.fields.currentCryptoKey = v24;
            *(_QWORD *)&v38.fields.fakeValue = v23;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v38, 0LL);
            if ( !v17 )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  v17,
                                  Instance,
                                  (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            if ( *(_DWORD *)(Instance + 84) != 3 )
            {
              if ( !v19 )
                break;
              items = v19->fields._items;
              v32 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v19->fields._version;
              if ( !items )
                break;
              size = v19->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v19,
                  (Il2CppObject *)v22,
                  *(const MethodInfo_368BC6C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
              }
              else
              {
                v34 = &items->obj.klass + size;
                v19->fields._size = size + 1;
                v34[4] = (Il2CppClass *)v22;
                sub_1C3B708((PartyOrganizationUtility_o *)(v34 + 4), v22, v25, v26, v27, v28, v29, v30);
              }
            }
          }
        }
      }
      if ( Count == ++v20 )
        goto LABEL_24;
    }
LABEL_26:
    sub_1C3B9C0(Instance, v16);
  }
LABEL_24:
  if ( !v19 )
    goto LABEL_26;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v19,
                                      (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getNpUpServantList(
        UserServantMaster_o *this,
        UserServantEntity_o *usrSvtEnt,
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  int64_t Instance; // x0
  signed __int64 v20; // x1
  Il2CppObject *MasterData_object; // x27
  System_Collections_Generic_List_object__o *v22; // x21
  int32_t Count; // w23
  SvtMaterialTdMaster_o *v24; // x24
  __int64 v25; // x25
  __int64 v26; // x26
  System_Object_array *v27; // x24
  int32_t v28; // w25
  __int64 v29; // x27
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  Il2CppObject **v36; // x26
  System_Predicate_object__o *v37; // x28
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  void *v44; // x27
  Il2CppClass *v45; // x28
  int32_t v46; // w27
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v52; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4C22EB8 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_Exists_SvtMaterialTdEntity___, usrSvtEnt);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, v5);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v6);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1C3B764(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___, v8);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v12);
    sub_1C3B764(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1C3B764(&System_Predicate_SvtMaterialTdEntity__TypeInfo, v15);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1C3B764(&Method_UserServantMaster___c__DisplayClass15_0__getNpUpServantList_b__0__, v17);
    sub_1C3B764(&UserServantMaster___c__DisplayClass15_0_TypeInfo, v18);
    byte_4C22EB8 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  v22 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_34;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
  if ( !usrSvtEnt )
    goto LABEL_34;
  v24 = (SvtMaterialTdMaster_o *)Instance;
  v26 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v53.fields.currentCryptoKey = v26;
  *(_QWORD *)&v53.fields.fakeValue = v25;
  v52 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v53, 0LL);
  if ( !v24 )
    goto LABEL_34;
  Instance = (int64_t)SvtMaterialTdMaster__GetEntityList(v24, Instance, 0LL);
  if ( Count >= 1 )
  {
    v27 = (System_Object_array *)Instance;
    v28 = 0;
    do
    {
      v29 = sub_1C3B9B0(UserServantMaster___c__DisplayClass15_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v29, 0LL);
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_34;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v28,
                            (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( !v29 )
        goto LABEL_34;
      *(_QWORD *)(v29 + 16) = Instance;
      v36 = (Il2CppObject **)(v29 + 16);
      sub_1C3B708((PartyOrganizationUtility_o *)(v29 + 16), Instance, v30, v31, v32, v33, v34, v35);
      Instance = *(_QWORD *)(v29 + 16);
      if ( Instance )
      {
        Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)Instance, 0LL);
        if ( (Instance & 1) == 0 )
        {
          v37 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_SvtMaterialTdEntity__TypeInfo);
          System_Predicate_object____ctor(
            v37,
            (Il2CppObject *)v29,
            Method_UserServantMaster___c__DisplayClass15_0__getNpUpServantList_b__0__,
            0LL);
          Instance = System_Array__Exists_object_(
                       v27,
                       (System_Predicate_T__o *)v37,
                       (const MethodInfo_30EC0EC *)Method_System_Array_Exists_SvtMaterialTdEntity___);
          v20 = *(_QWORD *)(v29 + 16);
          if ( (Instance & 1) != 0 )
          {
            if ( !v22 )
              goto LABEL_34;
LABEL_27:
            items = v22->fields._items;
            v48 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v22->fields._version;
            if ( !items )
              goto LABEL_34;
            size = v22->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v22,
                (Il2CppObject *)v20,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
            }
            else
            {
              v50 = &items->obj.klass + size;
              v22->fields._size = size + 1;
              v50[4] = (Il2CppClass *)v20;
              sub_1C3B708((PartyOrganizationUtility_o *)(v50 + 4), v20, v38, v39, v40, v41, v42, v43);
            }
            continue;
          }
          if ( !v20 )
            goto LABEL_34;
          v45 = *(Il2CppClass **)(v20 + 80);
          v44 = *(void **)(v20 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v54.fields.currentCryptoKey = v45;
          *(_QWORD *)&v54.fields.fakeValue = v44;
          v20 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v54, 0LL);
          Instance = (int64_t)v52;
          if ( !v52 )
            goto LABEL_34;
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                v52,
                                v20,
                                (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_34;
          v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(Instance + 32),
                  0LL);
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(usrSvtEnt->fields.svtId, 0LL);
          if ( v46 == (_DWORD)Instance )
          {
            if ( !v22 )
              goto LABEL_34;
            v20 = (signed __int64)*v36;
            goto LABEL_27;
          }
        }
      }
    }
    while ( Count != ++v28 );
  }
  if ( !v22 )
LABEL_34:
    sub_1C3B9C0(Instance, v20);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v22,
                                      (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getOrganizationList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int64_t Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v17; // x27
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w23
  __int128 v21; // q0
  int64_t v22; // x24
  __int64 v23; // x25
  __int64 v24; // x26
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4C22EB4 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, method);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v3);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1C3B764(&NetworkManager_TypeInfo, v10);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4C22EB4 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v15);
    byte_4C1C955 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_32;
  v17 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v20,
                            (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v21 = *(_OWORD *)(Instance + 64);
        v22 = Instance;
        *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v37.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v36 = v37;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v36, 0LL);
        if ( Instance == v17 )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v22, 0LL);
          if ( (Instance & 1) == 0 )
          {
            v24 = *(_QWORD *)(v22 + 80);
            v23 = *(_QWORD *)(v22 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v38.fields.currentCryptoKey = v24;
            *(_QWORD *)&v38.fields.fakeValue = v23;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v38, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v19 )
                break;
              items = v19->fields._items;
              v32 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v19->fields._version;
              if ( !items )
                break;
              size = v19->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v19,
                  (Il2CppObject *)v22,
                  *(const MethodInfo_368BC6C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
              }
              else
              {
                v34 = &items->obj.klass + size;
                v19->fields._size = size + 1;
                v34[4] = (Il2CppClass *)v22;
                sub_1C3B708((PartyOrganizationUtility_o *)(v34 + 4), v22, v25, v26, v27, v28, v29, v30);
              }
            }
          }
        }
      }
      if ( Count == ++v20 )
        goto LABEL_30;
    }
LABEL_32:
    sub_1C3B9C0(Instance, v15);
  }
LABEL_30:
  if ( !v19 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v19,
                                      (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


int32_t __fastcall UserServantMaster__getSameSvtNpLvCache(
        UserServantMaster_o *this,
        UserServantEntity_o *usrSvtEnt,
        System_Collections_Generic_Dictionary_int__List_int___o **cachedUserServantNpLvDict,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  System_Collections_Generic_List_int__o *v23; // x22
  int64_t Instance; // x0
  __int64 v25; // x1
  System_Collections_Generic_Dictionary_int__List_int___o *v26; // x22
  __int64 v27; // x23
  __int64 v28; // x24
  int32_t v29; // w21
  int32_t Count; // w23
  System_Collections_Generic_List_int__o *v31; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v33; // x25
  __int64 v34; // x26
  SvtMaterialTdMaster_o *v35; // x24
  int32_t i; // w25
  __int64 v37; // x27
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t *v44; // x26
  int64_t v45; // x8
  __int128 v46; // q0
  int64_t v47; // x0
  __int128 v48; // q1
  int64_t v49; // x28
  System_Predicate_object__o *v50; // x28
  int64_t v51; // x8
  __int64 v52; // x27
  __int64 v53; // x28
  int32_t v54; // w27
  struct System_Int32_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_int__object__o *v58; // x20
  __int64 v59; // x19
  __int64 v60; // x23
  System_Object_array *array; // [xsp+0h] [xbp-E0h]
  System_Collections_Generic_Dictionary_int__List_int___o **v63; // [xsp+8h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+50h] [xbp-90h]
  Il2CppObject *value; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_4C22EB7 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_Exists_SvtMaterialTdEntity___, usrSvtEnt);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, v7);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v8);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1C3B764(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___, v10);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Count__, v15);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_1C3B764(&System_Predicate_SvtMaterialTdEntity__TypeInfo, v19);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1C3B764(&Method_UserServantMaster___c__DisplayClass14_0__getSameSvtNpLvCache_b__0__, v21);
    sub_1C3B764(&UserServantMaster___c__DisplayClass14_0_TypeInfo, v22);
    byte_4C22EB7 = 1;
  }
  v23 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  value = (Il2CppObject *)v23;
  if ( !usrSvtEnt )
    goto LABEL_57;
  if ( UserServantEntity__IsEventJoin(usrSvtEnt, 0LL) )
    goto LABEL_12;
  v26 = *cachedUserServantNpLvDict;
  v28 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v68.fields.currentCryptoKey = v28;
  *(_QWORD *)&v68.fields.fakeValue = v27;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v68, 0LL);
  if ( !v26 )
    goto LABEL_57;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)v26,
          Instance,
          &value,
          (const MethodInfo_32F6328 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
LABEL_12:
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      DataManager__GetMasterData_object_(
        (DataManager_o *)Instance,
        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = (int64_t)this->fields.list;
      if ( Instance )
      {
        Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
        v31 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v31,
          (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
          v34 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
          v33 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
          v35 = (SvtMaterialTdMaster_o *)MasterData_object;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v69.fields.currentCryptoKey = v34;
          *(_QWORD *)&v69.fields.fakeValue = v33;
          v63 = cachedUserServantNpLvDict;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v69, 0LL);
          if ( v35 )
          {
            Instance = (int64_t)SvtMaterialTdMaster__GetEntityList(v35, Instance, 0LL);
            array = (System_Object_array *)Instance;
            if ( Count >= 1 )
            {
              for ( i = 0; Count != i; ++i )
              {
                v37 = sub_1C3B9B0(UserServantMaster___c__DisplayClass14_0_TypeInfo);
                System_Object___ctor((Il2CppObject *)v37, 0LL);
                Instance = (int64_t)this->fields.list;
                if ( !Instance )
                  goto LABEL_57;
                Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                      i,
                                      (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
                if ( !v37 )
                  goto LABEL_57;
                *(_QWORD *)(v37 + 16) = Instance;
                v44 = (int64_t *)(v37 + 16);
                sub_1C3B708((PartyOrganizationUtility_o *)(v37 + 16), Instance, v38, v39, v40, v41, v42, v43);
                Instance = *(_QWORD *)(v37 + 16);
                if ( Instance )
                {
                  Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)Instance, 0LL);
                  if ( (Instance & 1) == 0 )
                  {
                    Instance = *v44;
                    if ( !*v44 )
                      goto LABEL_57;
                    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
                    if ( (Instance & 1) == 0 )
                    {
                      v45 = *v44;
                      if ( !*v44 )
                        goto LABEL_57;
                      v46 = *(_OWORD *)(v45 + 32);
                      *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)(v45 + 16);
                      *(_OWORD *)&v66.fields.fakeValue = v46;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                      v65 = v66;
                      v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v65, 0LL);
                      v48 = *(_OWORD *)&usrSvtEnt->fields.id.fields.fakeValue;
                      v49 = v47;
                      *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&usrSvtEnt->fields.id.fields.currentCryptoKey;
                      *(_OWORD *)&v64.fields.fakeValue = v48;
                      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v64, 0LL);
                      if ( v49 != Instance )
                      {
                        Instance = UserServantEntity__IsMaterialTd(usrSvtEnt, 0LL);
                        if ( (Instance & 1) == 0 )
                        {
                          Instance = *v44;
                          if ( !*v44 )
                            goto LABEL_57;
                          Instance = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Instance, 0LL);
                          if ( (Instance & 1) != 0 )
                          {
                            v50 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_SvtMaterialTdEntity__TypeInfo);
                            System_Predicate_object____ctor(
                              v50,
                              (Il2CppObject *)v37,
                              Method_UserServantMaster___c__DisplayClass14_0__getSameSvtNpLvCache_b__0__,
                              0LL);
                            Instance = System_Array__Exists_object_(
                                         array,
                                         (System_Predicate_T__o *)v50,
                                         (const MethodInfo_30EC0EC *)Method_System_Array_Exists_SvtMaterialTdEntity___);
                            if ( (Instance & 1) == 0 )
                              continue;
                          }
                          else
                          {
                            v51 = *v44;
                            if ( !*v44 )
                              goto LABEL_57;
                            v53 = *(_QWORD *)(v51 + 80);
                            v52 = *(_QWORD *)(v51 + 88);
                            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                            *(_QWORD *)&v70.fields.currentCryptoKey = v53;
                            *(_QWORD *)&v70.fields.fakeValue = v52;
                            v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v70, 0LL);
                            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                         usrSvtEnt->fields.svtId,
                                         0LL);
                            if ( v54 != (_DWORD)Instance )
                              continue;
                            Instance = UserServantEntity__IsEventJoin(usrSvtEnt, 0LL);
                            if ( (Instance & 1) != 0 )
                              continue;
                          }
                          if ( !*v44 )
                            goto LABEL_57;
                          if ( !v31 )
                            goto LABEL_57;
                          v25 = *(unsigned int *)(*v44 + 292);
                          items = v31->fields._items;
                          v56 = Method_System_Collections_Generic_List_int__Add__;
                          ++v31->fields._version;
                          if ( !items )
                            goto LABEL_57;
                          size = v31->fields._size;
                          if ( (unsigned int)size >= items->max_length )
                          {
                            System_Collections_Generic_List_int___AddWithResize(
                              v31,
                              v25,
                              *(const MethodInfo_366EC48 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v31->fields._size = size + 1;
                            items->m_Items[size + 1] = v25;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            if ( v31 )
            {
              if ( v31->fields._size < 1 )
                return 0;
              v29 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)v31, 0LL);
              if ( UserServantEntity__IsEventJoin(usrSvtEnt, 0LL) )
                return v29;
              v58 = (System_Collections_Generic_Dictionary_int__object__o *)*v63;
              v60 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
              v59 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v71.fields.currentCryptoKey = v60;
              *(_QWORD *)&v71.fields.fakeValue = v59;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v71, 0LL);
              if ( v58 )
              {
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  v58,
                  Instance,
                  (Il2CppObject *)v31,
                  (const MethodInfo_32F4B88 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
                return v29;
              }
            }
          }
        }
      }
    }
LABEL_57:
    sub_1C3B9C0(Instance, v25);
  }
  Instance = (int64_t)value;
  if ( !value )
    goto LABEL_57;
  if ( SLODWORD(value[1].monitor) < 1 )
    return 0;
  return System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)value, 0LL);
}


int32_t __fastcall UserServantMaster__getServantAllNum(UserServantMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *MasterData_object; // x19
  System_Collections_Generic_List_int__o *v20; // x20
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x25
  __int128 v33; // q0
  __int64 v34; // x1
  int64_t v35; // x26
  NetworkManager_c *v36; // x0
  __int64 v37; // x26
  __int64 v38; // x27
  __int64 v39; // x0
  Il2CppObject *Entity; // x0
  __int64 v41; // x1
  __int64 v42; // x26
  __int64 v43; // x27
  __int64 v44; // x0
  __int64 v45; // x25
  __int64 v46; // x26
  __int64 v47; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v56; // x23
  unsigned __int64 i; // x27
  __int64 v58; // x24
  __int128 v59; // q0
  int64_t v60; // x25
  __int64 v61; // x25
  __int64 v62; // x26
  __int64 v63; // x25
  __int64 v64; // x26
  __int64 v65; // x24
  __int64 v66; // x25
  struct System_Int32_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  UserServantStorageMaster_o *v71; // [xsp+0h] [xbp-D0h]
  int32_t v72; // [xsp+Ch] [xbp-C4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+50h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16

  if ( (byte_4C22EB0 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1C3B764(&System_IDisposable_TypeInfo, v6);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, v7);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1C3B764(&NetworkManager_TypeInfo, v13);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4C22EB0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  v71 = (UserServantStorageMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v20 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_87;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v21);
  v72 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v29 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_19;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_19:
      v30 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL);
    }
    v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
            Enumerator,
            *(_QWORD *)(v30 + 8));
    v32 = v31;
    if ( v31 )
    {
      v33 = *(_OWORD *)(v31 + 64);
      *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)(v31 + 48);
      *(_OWORD *)&v75.fields.fakeValue = v33;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v74 = v75;
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v74, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v34);
        byte_4C1C955 = 1;
      }
      v36 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v36 = NetworkManager_TypeInfo;
      }
      if ( v35 == v36->static_fields->userIdNumber && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v32, 0LL) )
      {
        v38 = *(_QWORD *)(v32 + 80);
        v37 = *(_QWORD *)(v32 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v76.fields.currentCryptoKey = v38;
        *(_QWORD *)&v76.fields.fakeValue = v37;
        v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v76, 0LL);
        if ( !MasterData_object )
          sub_1C3B9C0(v39, (unsigned int)v39);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v39,
                   (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_1C3B9C0(0LL, v41);
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0LL) )
        {
          v43 = *(_QWORD *)(v32 + 80);
          v42 = *(_QWORD *)(v32 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v77.fields.currentCryptoKey = v43;
          *(_QWORD *)&v77.fields.fakeValue = v42;
          v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v77, 0LL);
          if ( !v20 )
            sub_1C3B9C0(v44, (unsigned int)v44);
          if ( !System_Collections_Generic_List_int___Contains(
                  v20,
                  v44,
                  (const MethodInfo_366EFC0 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            v46 = *(_QWORD *)(v32 + 80);
            v45 = *(_QWORD *)(v32 + 88);
            ++v72;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v78.fields.currentCryptoKey = v46;
            *(_QWORD *)&v78.fields.fakeValue = v45;
            v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v78, 0LL);
            items = v20->fields._items;
            v49 = Method_System_Collections_Generic_List_int__Add__;
            ++v20->fields._version;
            if ( !items )
              sub_1C3B9C0(v47, (unsigned int)v47);
            size = v20->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v20,
                v47,
                *(const MethodInfo_366EC48 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
            }
            else
            {
              v20->fields._size = size + 1;
              items->m_Items[size + 1] = v47;
            }
          }
        }
      }
    }
  }
  v51 = Enumerator->klass;
  v52 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_51;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_51:
    v54 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(Enumerator, *(_QWORD *)(v54 + 8));
  Instance = (DataManager_o *)v71;
  if ( !v71 || (Instance = (DataManager_o *)UserServantStorageMaster__getList(v71, v18)) == 0LL )
LABEL_87:
    sub_1C3B9C0(Instance, v18);
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v56 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1C3B9C8(Instance, v18);
      v58 = *((_QWORD *)&v56->fields._DispLog + i);
      if ( v58 )
      {
        v59 = *(_OWORD *)(v58 + 64);
        *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)(v58 + 48);
        *(_OWORD *)&v75.fields.fakeValue = v59;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v73 = v75;
        v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v73, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C1C955 )
        {
          sub_1C3B764(&NetworkManager_TypeInfo, v18);
          byte_4C1C955 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        if ( v60 == *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL) )
        {
          Instance = (DataManager_o *)UserServantEntity__IsWithdrawal((UserServantEntity_o *)v58, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            v62 = *(_QWORD *)(v58 + 80);
            v61 = *(_QWORD *)(v58 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v79.fields.currentCryptoKey = v62;
            *(_QWORD *)&v79.fields.fakeValue = v61;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v79, 0LL);
            if ( !MasterData_object )
              goto LABEL_87;
            Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                          (int32_t)Instance,
                                          (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              goto LABEL_87;
            Instance = (DataManager_o *)ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              v64 = *(_QWORD *)(v58 + 80);
              v63 = *(_QWORD *)(v58 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v80.fields.currentCryptoKey = v64;
              *(_QWORD *)&v80.fields.fakeValue = v63;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v80, 0LL);
              if ( !v20 )
                goto LABEL_87;
              Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                            v20,
                                            (int32_t)Instance,
                                            (const MethodInfo_366EFC0 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                v66 = *(_QWORD *)(v58 + 80);
                v65 = *(_QWORD *)(v58 + 88);
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v81.fields.currentCryptoKey = v66;
                *(_QWORD *)&v81.fields.fakeValue = v65;
                Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                              v81,
                                              0LL);
                v67 = v20->fields._items;
                v68 = Method_System_Collections_Generic_List_int__Add__;
                ++v20->fields._version;
                if ( !v67 )
                  goto LABEL_87;
                v69 = v20->fields._size;
                v18 = (const MethodInfo *)(unsigned int)Instance;
                ++v72;
                if ( (unsigned int)v69 >= v67->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v20,
                    (int32_t)Instance,
                    *(const MethodInfo_366EC48 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
                }
                else
                {
                  v20->fields._size = v69 + 1;
                  v67->m_Items[v69 + 1] = (int)Instance;
                }
              }
            }
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v56->fields.m_CancellationTokenSource;
    }
  }
  return v72;
}


UserServantEntity_array *__fastcall UserServantMaster__getServantEquipList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int64_t Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v17; // x27
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w23
  __int128 v21; // q0
  int64_t v22; // x24
  __int64 v23; // x25
  __int64 v24; // x26
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4C22EB6 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, method);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v3);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1C3B764(&NetworkManager_TypeInfo, v10);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4C22EB6 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v15);
    byte_4C1C955 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_32;
  v17 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v20,
                            (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v21 = *(_OWORD *)(Instance + 64);
        v22 = Instance;
        *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v37.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v36 = v37;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v36, 0LL);
        if ( Instance == v17 )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v22, 0LL);
          if ( (Instance & 1) == 0 )
          {
            v24 = *(_QWORD *)(v22 + 80);
            v23 = *(_QWORD *)(v22 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v38.fields.currentCryptoKey = v24;
            *(_QWORD *)&v38.fields.fakeValue = v23;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v38, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            Instance = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v19 )
                break;
              items = v19->fields._items;
              v32 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v19->fields._version;
              if ( !items )
                break;
              size = v19->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v19,
                  (Il2CppObject *)v22,
                  *(const MethodInfo_368BC6C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
              }
              else
              {
                v34 = &items->obj.klass + size;
                v19->fields._size = size + 1;
                v34[4] = (Il2CppClass *)v22;
                sub_1C3B708((PartyOrganizationUtility_o *)(v34 + 4), v22, v25, v26, v27, v28, v29, v30);
              }
            }
          }
        }
      }
      if ( Count == ++v20 )
        goto LABEL_30;
    }
LABEL_32:
    sub_1C3B9C0(Instance, v15);
  }
LABEL_30:
  if ( !v19 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v19,
                                      (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


System_Collections_Generic_List_UserServantEntity__o *__fastcall UserServantMaster__getServantList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v18; // x20
  __int64 v19; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  Il2CppObject *v30; // x23
  __int128 v31; // q0
  __int64 v32; // x1
  int64_t v33; // x24
  NetworkManager_c *v34; // x0
  void *monitor; // x24
  Il2CppClass *v36; // x25
  __int64 v37; // x0
  Il2CppObject *Entity; // x0
  __int64 v39; // x1
  _BOOL8 IsServant; // x0
  __int64 v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  System_Collections_Generic_IEnumerator_T__c *v52; // x8
  __int64 v53; // x9
  int32_t *v54; // x10
  __int64 v55; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_4C22EAF & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1C3B764(&System_IDisposable_TypeInfo, v5);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, v6);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v9);
    sub_1C3B764(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v10);
    sub_1C3B764(&NetworkManager_TypeInfo, v11);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4C22EAF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___),
        v18 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UserServantEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v18,
          (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0LL) )
  {
    sub_1C3B9C0(Instance, v16);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v27 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_17;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_17:
      v28 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL);
    }
    v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
            Enumerator,
            *(_QWORD *)(v28 + 8));
    v30 = (Il2CppObject *)v29;
    if ( v29 )
    {
      v31 = *(_OWORD *)(v29 + 64);
      *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)(v29 + 48);
      *(_OWORD *)&v58.fields.fakeValue = v31;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v57 = v58;
      v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v57, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v32);
        byte_4C1C955 = 1;
      }
      v34 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v34 = NetworkManager_TypeInfo;
      }
      if ( v33 == v34->static_fields->userIdNumber && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v30, 0LL) )
      {
        v36 = v30[5].klass;
        monitor = v30[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v59.fields.currentCryptoKey = v36;
        *(_QWORD *)&v59.fields.fakeValue = monitor;
        v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v59, 0LL);
        if ( !MasterData_object )
          sub_1C3B9C0(v37, (unsigned int)v37);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v37,
                   (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_1C3B9C0(0LL, v39);
        IsServant = ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL);
        if ( IsServant )
        {
          if ( !v18 )
            sub_1C3B9C0(IsServant, v41);
          items = v18->fields._items;
          v49 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v18->fields._version;
          if ( !items )
            sub_1C3B9C0(IsServant, v41);
          size = v18->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              v30,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
          }
          else
          {
            v51 = &items->obj.klass + size;
            v18->fields._size = size + 1;
            v51[4] = (Il2CppClass *)v30;
            sub_1C3B708((PartyOrganizationUtility_o *)(v51 + 4), (int64_t)v30, v42, v43, v44, v45, v46, v47);
          }
        }
      }
    }
  }
  v52 = Enumerator->klass;
  v53 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v54 = &v52->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
    {
      --v53;
      v54 += 4;
      if ( !v53 )
        goto LABEL_44;
    }
    v55 = (__int64)&v52->vtable[*v54].method;
  }
  else
  {
LABEL_44:
    v55 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v55)(Enumerator, *(_QWORD *)(v55 + 8));
  return (System_Collections_Generic_List_UserServantEntity__o *)v18;
}


System_Collections_Generic_List_UserServantEntity__o *__fastcall UserServantMaster__getServantListByClassIdList(
        UserServantMaster_o *this,
        System_Collections_Generic_List_int__o *classIdList,
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v21; // x20
  __int64 v22; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  int64_t v33; // x24
  __int128 v34; // q0
  __int64 v35; // x1
  int64_t v36; // x25
  NetworkManager_c *v37; // x0
  __int64 SvtClassId; // x0
  __int64 v39; // x25
  __int64 v40; // x26
  __int64 v41; // x1
  Il2CppObject *Entity; // x0
  __int64 v43; // x1
  _BOOL8 IsServant; // x0
  __int64 v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  System_Collections_Generic_IEnumerator_T__c *v56; // x8
  __int64 v57; // x9
  int32_t *v58; // x10
  __int64 v59; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_4C22EB2 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__, classIdList);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1C3B764(&System_IDisposable_TypeInfo, v7);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, v8);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v12);
    sub_1C3B764(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1C3B764(&NetworkManager_TypeInfo, v14);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4C22EB2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___),
        v21 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UserServantEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v21,
          (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0LL) )
  {
    sub_1C3B9C0(Instance, v19);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v22);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v25;
        p_offset += 4;
        if ( !v25 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v28 = Enumerator->klass;
    v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v30 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_17;
      }
      v31 = (__int64)&v28->vtable[*v30].method;
    }
    else
    {
LABEL_17:
      v31 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL);
    }
    v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
            Enumerator,
            *(_QWORD *)(v31 + 8));
    v33 = v32;
    if ( v32 )
    {
      v34 = *(_OWORD *)(v32 + 64);
      *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)(v32 + 48);
      *(_OWORD *)&v62.fields.fakeValue = v34;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v61 = v62;
      v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v61, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C1C955 )
      {
        sub_1C3B764(&NetworkManager_TypeInfo, v35);
        byte_4C1C955 = 1;
      }
      v37 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v37 = NetworkManager_TypeInfo;
      }
      if ( v36 == v37->static_fields->userIdNumber && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v33, 0LL) )
      {
        SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)v33, 0, 0LL);
        if ( !classIdList )
          sub_1C3B9C0(SvtClassId, (unsigned int)SvtClassId);
        if ( System_Collections_Generic_List_int___Contains(
               classIdList,
               SvtClassId,
               (const MethodInfo_366EFC0 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v40 = *(_QWORD *)(v33 + 80);
          v39 = *(_QWORD *)(v33 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v63.fields.currentCryptoKey = v40;
          *(_QWORD *)&v63.fields.fakeValue = v39;
          v41 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v63, 0LL);
          if ( !MasterData_object )
            sub_1C3B9C0(0LL, v41);
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     v41,
                     (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Entity )
            sub_1C3B9C0(0LL, v43);
          IsServant = ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL);
          if ( IsServant )
          {
            if ( !v21 )
              sub_1C3B9C0(IsServant, v45);
            items = v21->fields._items;
            v53 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v21->fields._version;
            if ( !items )
              sub_1C3B9C0(IsServant, v45);
            size = v21->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v21,
                (Il2CppObject *)v33,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
            }
            else
            {
              v55 = &items->obj.klass + size;
              v21->fields._size = size + 1;
              v55[4] = (Il2CppClass *)v33;
              sub_1C3B708((PartyOrganizationUtility_o *)(v55 + 4), v33, v46, v47, v48, v49, v50, v51);
            }
          }
        }
      }
    }
  }
  v56 = Enumerator->klass;
  v57 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v58 = &v56->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
    {
      --v57;
      v58 += 4;
      if ( !v57 )
        goto LABEL_46;
    }
    v59 = (__int64)&v56->vtable[*v58].method;
  }
  else
  {
LABEL_46:
    v59 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v59)(Enumerator, *(_QWORD *)(v59 + 8));
  return (System_Collections_Generic_List_UserServantEntity__o *)v21;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_long__o *__fastcall UserServantMaster__getSvtAllUserIdList(
        UserServantMaster_o *this,
        int32_t svtId,
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_IEnumerable_T__o *List; // x20
  System_Collections_Generic_List_object__o *v19; // x21
  UserServantEntity_array *Instance; // x0
  const MethodInfo *v21; // x1
  System_Collections_Generic_List_long__o *v22; // x20
  _BOOL8 v23; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject v28; // q0
  int64_t v29; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4C22EC1 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantStorageMaster___, *(_QWORD *)&svtId);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__Add__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantEntity___ctor___77869264, v12);
    sub_1C3B764(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1C3B764(&System_Collections_Generic_List_long__TypeInfo, v14);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4C22EC1 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, *(const MethodInfo **)&svtId);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_57193824(
    v19,
    List,
    (const MethodInfo_368B560 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___77869264);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL
    || (Instance = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, v21), !v19) )
  {
    sub_1C3B9C0(Instance, v21);
  }
  System_Collections_Generic_List_object___AddRange(
    v19,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_368BE78 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  v22 = (System_Collections_Generic_List_long__o *)sub_1C3B9B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v22,
    (const MethodInfo_367344C *)Method_System_Collections_Generic_List_long___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    v19,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  *(_OWORD *)&v36.fields._list = *(_OWORD *)&v35.fields.currentCryptoKey;
  v36.fields._current = (Il2CppObject *)v35.fields.fakeValue;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v23 )
      break;
    current = v36.fields._current;
    if ( !v36.fields._current )
      sub_1C3B9C0(v23, v24);
    klass = v36.fields._current[5].klass;
    monitor = v36.fields._current[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v37.fields.currentCryptoKey = klass;
    *(_QWORD *)&v37.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v37, 0LL) == svtId
      && !UserServantEntity__IsEventJoin((UserServantEntity_o *)current, 0LL) )
    {
      v28 = current[2];
      *(Il2CppObject *)&v35.fields.currentCryptoKey = current[1];
      *(Il2CppObject *)&v35.fields.fakeValue = v28;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v34 = v35;
      v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v34, 0LL);
      if ( !v22 )
        sub_1C3B9C0(v29, v29);
      items = v22->fields._items;
      v31 = Method_System_Collections_Generic_List_long__Add__;
      ++v22->fields._version;
      if ( !items )
        sub_1C3B9C0(v29, v29);
      size = v22->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v22,
          v29,
          *(const MethodInfo_3673CA0 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v22->fields._size = size + 1;
        items->m_Items[size] = v29;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  return v22;
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_o *__fastcall UserServantMaster__getSvtIdBattle(
        UserServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w21
  System_Collections_ObjectModel_Collection_T__o *v11; // x22
  int32_t v12; // w23
  System_Collections_ObjectModel_Collection_T__o *v13; // x24
  struct System_Collections_Generic_IList_T__o *items; // x25
  void *monitor; // x26
  int v16; // w8
  int v17; // w9
  __int128 v18; // q0
  int64_t v19; // x0
  __int128 v20; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+40h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4C22EC5 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v5);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    byte_4C22EC5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0LL;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( !list )
        break;
      v13 = list;
      monitor = list[3].monitor;
      items = list[3].fields.items;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v25.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v25.fields.fakeValue = items;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v25, 0LL) == svtId
        && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v13, 0LL) )
      {
        if ( !v11 )
          goto LABEL_14;
        v16 = (int)v11[10].fields.items;
        v17 = (int)v13[10].fields.items;
        if ( v16 < v17 )
          goto LABEL_14;
        if ( v16 == v17 )
        {
          v18 = *(_OWORD *)&v11[1].monitor;
          *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&v11->fields.items;
          *(_OWORD *)&v24.fields.fakeValue = v18;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v23 = v24;
          v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v23, 0LL);
          v20 = *(_OWORD *)&v13[1].monitor;
          *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&v13->fields.items;
          *(_OWORD *)&v22.fields.fakeValue = v20;
          if ( v19 > CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v22, 0LL) )
LABEL_14:
            v11 = v13;
        }
      }
      if ( v10 == ++v12 )
        return (UserServantEntity_o *)v11;
    }
LABEL_24:
    sub_1C3B9C0(list, *(_QWORD *)&svtId);
  }
  return 0LL;
}


void __fastcall UserServantMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C22ECC & 1) == 0 )
  {
    sub_1C3B764(&UserServantMaster___c_TypeInfo, v1);
    byte_4C22ECC = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(UserServantMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserServantMaster___c_TypeInfo->static_fields->__9 = (struct UserServantMaster___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)UserServantMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall UserServantMaster___c___ctor(UserServantMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserServantMaster___c___GetServantHavintLimitMaxCount_b__34_0(
        UserServantMaster___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
  return !UserServantEntity__IsMaterialTd(x, 0LL);
}


void __fastcall UserServantMaster___c__DisplayClass14_0___ctor(
        UserServantMaster___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserServantMaster___c__DisplayClass14_0___getSameSvtNpLvCache_b__0(
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
  if ( (byte_4C22ECD & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass14_0_o *)sub_1C3B764(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          m);
    byte_4C22ECD = 1;
  }
  if ( !m || (e = v4->fields.e) == 0LL )
    sub_1C3B9C0(this, m);
  materialSvtId = m->fields.materialSvtId;
  v8 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v10, 0LL);
}


void __fastcall UserServantMaster___c__DisplayClass15_0___ctor(
        UserServantMaster___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserServantMaster___c__DisplayClass15_0___getNpUpServantList_b__0(
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
  if ( (byte_4C22ECE & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass15_0_o *)sub_1C3B764(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          m);
    byte_4C22ECE = 1;
  }
  if ( !m || (e = v4->fields.e) == 0LL )
    sub_1C3B9C0(this, m);
  materialSvtId = m->fields.materialSvtId;
  v8 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v10, 0LL);
}


void __fastcall UserServantMaster___c__DisplayClass1_0___ctor(
        UserServantMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserServantMaster___c__DisplayClass1_0___TryGetEntityFromSvtId_b__0(
        UserServantMaster___c__DisplayClass1_0_o *this,
        UserServantEntity_o *ent,
        const MethodInfo *method)
{
  UserServantMaster___c__DisplayClass1_0_o *v4; // x19
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v4 = this;
  if ( (byte_4C22ECF & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass1_0_o *)sub_1C3B764(
                                                         &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                         ent);
    byte_4C22ECF = 1;
  }
  if ( !ent )
    sub_1C3B9C0(this, ent);
  v6 = *(_QWORD *)&ent->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&ent->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return v4->fields.svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v8, 0LL);
}


void __fastcall UserServantMaster___c__DisplayClass31_0___ctor(
        UserServantMaster___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserServantMaster___c__DisplayClass31_0___GetHaveServantSkillLevelMax_b__0(
        UserServantMaster___c__DisplayClass31_0_o *this,
        UserServantEntity_o *usrSvt,
        const MethodInfo *method)
{
  UserServantMaster___c__DisplayClass31_0_o *v4; // x19
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v4 = this;
  if ( (byte_4C22ED0 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass31_0_o *)sub_1C3B764(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          usrSvt);
    byte_4C22ED0 = 1;
  }
  if ( !usrSvt )
    sub_1C3B9C0(this, usrSvt);
  v6 = *(_QWORD *)&usrSvt->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&usrSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v8, 0LL) == v4->fields.svtId;
}


int32_t __fastcall UserServantMaster___c__DisplayClass31_0___GetHaveServantSkillLevelMax_b__1(
        UserServantMaster___c__DisplayClass31_0_o *this,
        UserServantEntity_o *a,
        UserServantEntity_o *b,
        const MethodInfo *method)
{
  UserServantMaster___c__DisplayClass31_0_o *v5; // x20

  if ( !b
    || (v5 = this,
        this = (UserServantMaster___c__DisplayClass31_0_o *)UserServantEntity__getSkillLevel(
                                                              b,
                                                              this->fields.skillIdx,
                                                              0LL),
        !a) )
  {
    sub_1C3B9C0(this, a);
  }
  return (_DWORD)this - UserServantEntity__getSkillLevel(a, v5->fields.skillIdx, 0LL);
}