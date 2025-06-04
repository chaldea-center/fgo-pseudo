void __fastcall UserServantMaster___ctor(UserServantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B0300C & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__, method);
    byte_4B0300C = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    14,
    (const MethodInfo_32AF2A8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__);
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
    sub_1BC3264(0LL, v8);
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
    sub_1BC3264(0LL, v7);
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


void __fastcall UserServantMaster__ClearEntityCache(
        UserServantMaster_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *v9; // x19
  CGThumbnailListItem_o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B0300E & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, userSvtId);
    byte_4B0300E = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         userSvtId,
         (const MethodInfo_32B1618 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( v5 )
  {
    v9 = entity;
    if ( !entity )
      sub_1BC3264(v5, v6);
    v10 = (CGThumbnailListItem_o *)&entity[20];
    entity[20].klass = 0LL;
    sub_1BC2FAC(v10, 0, v7, v8);
    v9[20].monitor = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v9[20].monitor, 0, v11, v12);
  }
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
  const MethodInfo *v27; // x2
  __int64 v28; // x26
  __int64 v29; // x27
  int32_t v30; // w26
  __int64 v31; // x26
  __int64 v32; // x27
  int32_t v33; // w26
  const MethodInfo *v34; // x3
  bool v36; // [xsp+4h] [xbp-ACh]
  UserServantEntity_o *v37; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4B03026 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v8);
    sub_1BC3008(&NetworkManager_TypeInfo, v9);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BC3008(&UserServantEntity_TypeInfo, v13);
    byte_4B03026 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_52;
  v36 = checkStorage;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4AFC1F1 = 1;
  }
  v16 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v16 = NetworkManager_TypeInfo;
  }
  if ( Count >= 1 )
  {
    v37 = 0LL;
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
                                                                 (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( !list )
        break;
      v20 = *(_OWORD *)&list[2].fields.items;
      v21 = (UserServantEntity_o *)list;
      *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&list[2].klass;
      *(_OWORD *)&v39.fields.fakeValue = v20;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v38 = v39;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v38, 0LL) == userIdNumber )
      {
        v23 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
        v22 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v40.fields.currentCryptoKey = v23;
        *(_QWORD *)&v40.fields.fakeValue = v22;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v40, 0LL) == svtId )
        {
          if ( (v21->fields.status & 4) != 0 )
          {
            v37 = v21;
          }
          else if ( v18 )
          {
            v25 = *(_QWORD *)&v21->fields.limitCount.fields.currentCryptoKey;
            v24 = *(_QWORD *)&v21->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v41.fields.currentCryptoKey = v25;
            *(_QWORD *)&v41.fields.fakeValue = v24;
            v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v41, 0LL);
            if ( v26 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v18->fields.limitCount, 0LL)
              || v21->fields.lv > v18->fields.lv )
            {
              goto LABEL_26;
            }
            v29 = *(_QWORD *)&v21->fields.limitCount.fields.currentCryptoKey;
            v28 = *(_QWORD *)&v21->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v42.fields.currentCryptoKey = v29;
            *(_QWORD *)&v42.fields.fakeValue = v28;
            v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v42, 0LL);
            if ( v30 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v18->fields.limitCount, 0LL)
              && v21->fields.lv == v18->fields.lv
              && (v21->fields.status & 0x40) == 0
              && (v18->fields.status & 0x40) != 0 )
            {
              goto LABEL_26;
            }
            v32 = *(_QWORD *)&v21->fields.limitCount.fields.currentCryptoKey;
            v31 = *(_QWORD *)&v21->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v43.fields.currentCryptoKey = v32;
            *(_QWORD *)&v43.fields.fakeValue = v31;
            v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v43, 0LL);
            if ( v33 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v18->fields.limitCount, 0LL)
              && v21->fields.lv == v18->fields.lv
              && v21->fields.createdAt < v18->fields.createdAt )
            {
LABEL_26:
              v18 = (UserServantEntity_o *)sub_1BC3254(UserServantEntity_TypeInfo);
              UserServantEntity___ctor_42132240(v18, v21, v27);
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
    sub_1BC3264(list, *(_QWORD *)&svtId);
  }
  v37 = 0LL;
  v18 = 0LL;
LABEL_44:
  if ( v36 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !list )
      goto LABEL_52;
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)list,
                                                               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !list )
      goto LABEL_52;
    v18 = UserServantStorageMaster__CostumeTargetEntity((UserServantStorageMaster_o *)list, svtId, v18, v34);
  }
  if ( v18 )
    return v18;
  else
    return v37;
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
  __int64 v55; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v57; // x22
  unsigned __int64 i; // x25
  __int64 v59; // x29
  __int128 v60; // q0
  int64_t v61; // x23
  __int64 v62; // x23
  __int64 v63; // x24
  __int64 v64; // x23
  __int64 v65; // x24
  __int64 v66; // x23
  __int64 v67; // x24
  struct System_Int32_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  UserServantStorageMaster_o *v72; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+50h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16

  if ( (byte_4B03015 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BC3008(&System_IDisposable_TypeInfo, v6);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, v7);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1BC3008(&NetworkManager_TypeInfo, v13);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4B03015 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
  v72 = (UserServantStorageMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v20 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_86;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v21);
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
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v30 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL);
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
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v74, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4AFC1F1 )
      {
        sub_1BC3008(&NetworkManager_TypeInfo, v34);
        byte_4AFC1F1 = 1;
      }
      v36 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v36 = NetworkManager_TypeInfo;
      }
      if ( v35 == v36->static_fields->userIdNumber && (*(_BYTE *)(v32 + 300) & 4) == 0 )
      {
        v38 = *(_QWORD *)(v32 + 80);
        v37 = *(_QWORD *)(v32 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v76.fields.currentCryptoKey = v38;
        *(_QWORD *)&v76.fields.fakeValue = v37;
        v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v76, 0LL);
        if ( !MasterData_object )
          sub_1BC3264(v39, (unsigned int)v39);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v39,
                   (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_1BC3264(0LL, v41);
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0LL) )
        {
          v43 = *(_QWORD *)(v32 + 80);
          v42 = *(_QWORD *)(v32 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v77.fields.currentCryptoKey = v43;
          *(_QWORD *)&v77.fields.fakeValue = v42;
          v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v77, 0LL);
          if ( !v20 )
            sub_1BC3264(v44, (unsigned int)v44);
          if ( !System_Collections_Generic_List_int___Contains(
                  v20,
                  v44,
                  (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            v46 = *(_QWORD *)(v32 + 80);
            v45 = *(_QWORD *)(v32 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v78.fields.currentCryptoKey = v46;
            *(_QWORD *)&v78.fields.fakeValue = v45;
            v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v78, 0LL);
            items = v20->fields._items;
            v49 = Method_System_Collections_Generic_List_int__Add__;
            ++v20->fields._version;
            if ( !items )
              sub_1BC3264(v47, (unsigned int)v47);
            size = v20->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v20,
                v47,
                *(const MethodInfo_3683E1C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
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
    v54 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(Enumerator, *(_QWORD *)(v54 + 8));
  Instance = (DataManager_o *)v72;
  if ( !v72 || (Instance = (DataManager_o *)UserServantStorageMaster__getList(v72, v18)) == 0LL )
LABEL_86:
    sub_1BC3264(Instance, v18);
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v57 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1BC326C(Instance, v18, v55);
      v59 = *((_QWORD *)&v57->fields._DispLog + i);
      if ( v59 )
      {
        v60 = *(_OWORD *)(v59 + 64);
        *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)(v59 + 48);
        *(_OWORD *)&v75.fields.fakeValue = v60;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v73 = v75;
        v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v73, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4AFC1F1 )
        {
          sub_1BC3008(&NetworkManager_TypeInfo, v18);
          byte_4AFC1F1 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        if ( v61 == *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL) )
        {
          v63 = *(_QWORD *)(v59 + 80);
          v62 = *(_QWORD *)(v59 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v79.fields.currentCryptoKey = v63;
          *(_QWORD *)&v79.fields.fakeValue = v62;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v79, 0LL);
          if ( !v20 )
            goto LABEL_86;
          Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                        v20,
                                        (int32_t)Instance,
                                        (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)Instance & 1) == 0 && (*(_BYTE *)(v59 + 300) & 4) == 0 )
          {
            v65 = *(_QWORD *)(v59 + 80);
            v64 = *(_QWORD *)(v59 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v80.fields.currentCryptoKey = v65;
            *(_QWORD *)&v80.fields.fakeValue = v64;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v80, 0LL);
            if ( !MasterData_object )
              goto LABEL_86;
            Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                          (int32_t)Instance,
                                          (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              goto LABEL_86;
            Instance = (DataManager_o *)ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              v67 = *(_QWORD *)(v59 + 80);
              v66 = *(_QWORD *)(v59 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v81.fields.currentCryptoKey = v67;
              *(_QWORD *)&v81.fields.fakeValue = v66;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v81, 0LL);
              v68 = v20->fields._items;
              v69 = Method_System_Collections_Generic_List_int__Add__;
              ++v20->fields._version;
              if ( !v68 )
                goto LABEL_86;
              v70 = v20->fields._size;
              v18 = (const MethodInfo *)(unsigned int)Instance;
              if ( (unsigned int)v70 >= v68->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v20,
                  (int32_t)Instance,
                  *(const MethodInfo_3683E1C **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
              }
              else
              {
                v20->fields._size = v70 + 1;
                v68->m_Items[v70 + 1] = (int)Instance;
              }
            }
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v57->fields.m_CancellationTokenSource;
    }
  }
  return v20;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_UserServantEntity__o *__fastcall UserServantMaster__GetCanSelectToGrandList(
        UserServantMaster_o *this,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Int32_array *OpenBaseClassIds; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1
  System_Collections_Generic_IEnumerable_TSource__o *OrganizationList; // x19
  System_Func_object__bool__o *v22; // x20

  if ( (byte_4B03031 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_GrandGraphDetailMaster___, *(_QWORD *)&grandGraphId);
    sub_1BC3008(&Method_DataManager_GetMaster_GrandGraphMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__GetEntity__, v7);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v8);
    sub_1BC3008(&System_Func_UserServantEntity__bool__TypeInfo, v9);
    sub_1BC3008(&Method_UserServantMaster___c__DisplayClass42_0__GetCanSelectToGrandList_b__0__, v10);
    sub_1BC3008(&UserServantMaster___c__DisplayClass42_0_TypeInfo, v11);
    byte_4B03031 = 1;
  }
  v12 = sub_1BC3254(UserServantMaster___c__DisplayClass42_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_GrandGraphMaster___);
  if ( !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          grandGraphId,
                          (const MethodInfo_32AF070 *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__GetEntity__),
        !v12)
    || (*(_QWORD *)(v12 + 24) = Master_object,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 24), (int32_t)Master_object, v15, v16),
        (Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___)) == 0LL) )
  {
    sub_1BC3264(Master_object, v14);
  }
  OpenBaseClassIds = GrandGraphDetailMaster__GetOpenBaseClassIds(
                       (GrandGraphDetailMaster_o *)Master_object,
                       grandGraphId,
                       0LL);
  *(_QWORD *)(v12 + 16) = OpenBaseClassIds;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 16), (int32_t)OpenBaseClassIds, v18, v19);
  OrganizationList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getOrganizationList(
                                                                            this,
                                                                            v20);
  v22 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)v12,
    Method_UserServantMaster___c__DisplayClass42_0__GetCanSelectToGrandList_b__0__,
    0LL);
  return (System_Collections_Generic_IEnumerable_UserServantEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                          OrganizationList,
                                                                          (System_Func_TSource__bool__o *)v22,
                                                                          (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
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
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4B03027 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v3);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1BC3008(&NetworkManager_TypeInfo, v10);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B03027 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v15);
    byte_4AFC1F1 = 1;
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
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v21 = *(_OWORD *)(Instance + 64);
        v22 = Instance;
        *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v33.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v32 = v33;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v32, 0LL);
        if ( Instance == v17 && (*(_BYTE *)(v22 + 300) & 4) == 0 )
        {
          v24 = *(_QWORD *)(v22 + 80);
          v23 = *(_QWORD *)(v22 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v34.fields.currentCryptoKey = v24;
          *(_QWORD *)&v34.fields.fakeValue = v23;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v34, 0LL);
          if ( !MasterData_object )
            break;
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                Instance,
                                (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            break;
          Instance = ServantEntity__get_IsCombineMaterial((ServantEntity_o *)Instance, 0LL);
          if ( (Instance & 1) != 0 && (*(_BYTE *)(v22 + 300) & 0x11) == 0 )
          {
            if ( !v19 )
              break;
            items = v19->fields._items;
            v28 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v19->fields._version;
            if ( !items )
              break;
            size = v19->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v19,
                (Il2CppObject *)v22,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &items->obj.klass + size;
              v19->fields._size = size + 1;
              v30[4] = (Il2CppClass *)v22;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v30 + 4), v22, v25, v26);
            }
          }
        }
      }
      if ( Count == ++v20 )
        goto LABEL_31;
    }
LABEL_33:
    sub_1BC3264(Instance, v15);
  }
LABEL_31:
  if ( !v19 )
    goto LABEL_33;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v19,
                                      (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__GetEntities(
        UserServantMaster_o *this,
        System_Int64_array *userServantIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_long__o *v6; // x21

  if ( (byte_4B0302C & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor___76761024, userServantIds);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v5);
    byte_4B0302C = 1;
  }
  if ( userServantIds )
  {
    v6 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_57182024(
      v6,
      (System_Collections_Generic_IEnumerable_T__o *)userServantIds,
      (const MethodInfo_3688748 *)Method_System_Collections_Generic_List_long___ctor___76761024);
  }
  else
  {
    v6 = 0LL;
  }
  return UserServantMaster__GetEntities_42214380(this, v6, method);
}


UserServantEntity_array *__fastcall UserServantMaster__GetEntities_42214380(
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
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+20h] [xbp-70h]

  if ( (byte_4B0302D & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__, userServantIds);
    sub_1BC3008(&System_IDisposable_TypeInfo, v5);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, v6);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Contains__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__get_Count__, v12);
    sub_1BC3008(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    byte_4B0302D = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( userServantIds && userServantIds->fields._size >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_40;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   list,
                   (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
    if ( !Enumerator )
      sub_1BC3264(0LL, v18);
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
        p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
        v27 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL);
      }
      v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
              Enumerator,
              *(_QWORD *)(v27 + 8));
      v29 = (Il2CppObject *)v28;
      if ( v28 )
      {
        v30 = *(_OWORD *)(v28 + 32);
        *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)(v28 + 16);
        *(_OWORD *)&v46.fields.fakeValue = v30;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v45 = v46;
        v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v45, 0LL);
        v32 = System_Collections_Generic_List_long___Contains(
                userServantIds,
                v31,
                (const MethodInfo_36891EC *)Method_System_Collections_Generic_List_long__Contains__);
        if ( v32 )
        {
          if ( !v15 )
            sub_1BC3264(v32, v33);
          items = v15->fields._items;
          v37 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            sub_1BC3264(v32, v33);
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              v29,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
          }
          else
          {
            v39 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v39[4] = (Il2CppClass *)v29;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v29, v34, v35);
          }
        }
      }
    }
    v40 = Enumerator->klass;
    v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v42 = &v40->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_33;
      }
      v43 = (__int64)&v40->vtable[*v42].method;
    }
    else
    {
LABEL_33:
      v43 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(
                                                               Enumerator,
                                                               *(_QWORD *)(v43 + 8));
  }
  if ( !v15 )
LABEL_40:
    sub_1BC3264(list, v17);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v15,
                                      (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  const MethodInfo *v21; // x2

  if ( (byte_4B03028 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_FindAll_UserServantEntity___, *(_QWORD *)&svtId);
    sub_1BC3008(&Method_System_Array_Sort_UserServantEntity___, v7);
    sub_1BC3008(&System_Comparison_UserServantEntity__TypeInfo, v8);
    sub_1BC3008(&System_Predicate_UserServantEntity__TypeInfo, v9);
    sub_1BC3008(&Method_UserServantMaster___c__DisplayClass32_0__GetHaveServantSkillLevelMax_b__0__, v10);
    sub_1BC3008(&Method_UserServantMaster___c__DisplayClass32_0__GetHaveServantSkillLevelMax_b__1__, v11);
    sub_1BC3008(&UserServantMaster___c__DisplayClass32_0_TypeInfo, v12);
    byte_4B03028 = 1;
  }
  v13 = sub_1BC3254(UserServantMaster___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_10;
  *(_DWORD *)(v13 + 16) = svtId;
  *(_DWORD *)(v13 + 20) = skillIdx;
  AllList = (System_Object_array *)UserServantMaster__getAllList(this, v15);
  v17 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_UserServantEntity__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v13,
    Method_UserServantMaster___c__DisplayClass32_0__GetHaveServantSkillLevelMax_b__0__,
    0LL);
  All_object = (UserServantEntity_o *)System_Array__FindAll_object_(
                                        AllList,
                                        (System_Predicate_T__o *)v17,
                                        (const MethodInfo_30FE89C *)Method_System_Array_FindAll_UserServantEntity___);
  if ( !All_object )
    goto LABEL_10;
  v18 = (System_Object_array *)All_object;
  if ( All_object->fields.id.fields.hiddenValue )
  {
    v19 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_object____ctor(
      v19,
      (Il2CppObject *)v13,
      Method_UserServantMaster___c__DisplayClass32_0__GetHaveServantSkillLevelMax_b__1__,
      0LL);
    System_Array__Sort_object__50130684(
      v18,
      v19,
      (const MethodInfo_2FCEEFC *)Method_System_Array_Sort_UserServantEntity___);
    if ( !v18->max_length )
      sub_1BC326C(v20, v15, v21);
    All_object = (UserServantEntity_o *)v18->m_Items[0];
    if ( All_object )
      return UserServantEntity__getSkillLevel(All_object, *(_DWORD *)(v13 + 20), v21);
LABEL_10:
    sub_1BC3264(All_object, v15);
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
  __int64 v15; // x2
  __int64 v16; // x8
  int32_t v17; // w22
  unsigned __int64 i; // x25
  UserServantEntity_o *v19; // x28
  __int64 v20; // x23
  __int64 v21; // x24
  int32_t treasureDeviceLv1; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4B0301F & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v5);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1BC3008(&System_Math_TypeInfo, v7);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B0301F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___),
        AllList = UserServantMaster__getAllList(this, v13),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL
    || (Instance = (Il2CppObject *)UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL),
        !AllList) )
  {
LABEL_21:
    sub_1BC3264(Instance, v11);
  }
  v16 = *(_QWORD *)&AllList->max_length;
  v17 = (unsigned __int8)Instance & 1;
  if ( (int)v16 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v16; ++i )
    {
      if ( i >= (unsigned int)v16 )
        sub_1BC326C(Instance, v11, v15);
      v19 = AllList->m_Items[i];
      if ( v19 )
      {
        v21 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
        v20 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v24.fields.currentCryptoKey = v21;
        *(_QWORD *)&v24.fields.fakeValue = v20;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v24, 0LL);
        if ( !MasterData_object )
          goto LABEL_21;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_21;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                     (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Instance[2],
                                     0LL);
        if ( (_DWORD)Instance == servantId )
        {
          treasureDeviceLv1 = v19->fields.treasureDeviceLv1;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          Instance = (Il2CppObject *)System_Math__Max_63870684(v17, treasureDeviceLv1, 0LL);
          v17 = (int)Instance;
        }
      }
      LODWORD(v16) = AllList->max_length;
    }
  }
  return v17;
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
  __int64 v15; // x2
  __int64 v16; // x8
  UserServantEntity_array *v17; // x23
  int32_t v18; // w21
  unsigned __int64 v19; // x27
  UserServantEntity_o *v20; // x8
  __int64 v21; // x24
  __int64 v22; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4B0301D & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v7);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B0301D = 1;
  }
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = UserServantMaster__getAllList(this, v14);
  if ( !Instance )
    goto LABEL_23;
  v16 = *(_QWORD *)&Instance->max_length;
  v17 = Instance;
  if ( (int)v16 < 1 )
  {
    v18 = 0;
    if ( !isCheckPresentBox )
      return v18;
    goto LABEL_19;
  }
  v18 = 0;
  v19 = 0LL;
  do
  {
    if ( v19 >= (unsigned int)v16 )
      sub_1BC326C(Instance, v12, v15);
    v20 = v17->m_Items[v19];
    if ( v20 )
    {
      v22 = *(_QWORD *)&v20->fields.svtId.fields.currentCryptoKey;
      v21 = *(_QWORD *)&v20->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v24.fields.currentCryptoKey = v22;
      *(_QWORD *)&v24.fields.fakeValue = v21;
      Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                              v24,
                                              0LL);
      if ( !MasterData_object )
        goto LABEL_23;
      Instance = (UserServantEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                              (int32_t)Instance,
                                              (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_23;
      Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance->m_Items,
                                              0LL);
      if ( (_DWORD)Instance == servantId )
        ++v18;
    }
    LODWORD(v16) = v17->max_length;
    ++v19;
  }
  while ( (__int64)v19 < (int)v16 );
  if ( isCheckPresentBox )
  {
LABEL_19:
    Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
      if ( Instance )
      {
        v18 += UserPresentBoxMaster__GetCount((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL);
        return v18;
      }
    }
LABEL_23:
    sub_1BC3264(Instance, v12);
  }
  return v18;
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
  __int64 v14; // x2
  __int64 v15; // x8
  UserServantEntity_array *v16; // x21
  int v17; // w24
  unsigned __int64 v18; // x25
  UserServantEntity_o *v19; // x29
  __int64 v20; // x22
  __int64 v21; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4B0301E & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1BC3008(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B0301E = 1;
  }
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = UserServantMaster__getAllList(this, v13);
  if ( !Instance )
    goto LABEL_23;
  v15 = *(_QWORD *)&Instance->max_length;
  v16 = Instance;
  if ( (int)v15 >= 1 )
  {
    v17 = 0;
    v18 = 0LL;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v15 )
        sub_1BC326C(Instance, v11, v14);
      v19 = v16->m_Items[v18];
      if ( v19 )
      {
        v21 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
        v20 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v23.fields.currentCryptoKey = v21;
        *(_QWORD *)&v23.fields.fakeValue = v20;
        Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                v23,
                                                0LL);
        if ( !MasterData_object )
          goto LABEL_23;
        Instance = (UserServantEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                (int32_t)Instance,
                                                (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_23;
        Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance->m_Items,
                                                0LL);
        if ( (_DWORD)Instance == servantId && (v19->fields.status & 4) == 0 )
          v17 += v19->fields.treasureDeviceLv1;
      }
      LODWORD(v15) = v16->max_length;
      if ( (__int64)++v18 >= (int)v15 )
        goto LABEL_19;
    }
  }
  v17 = 0;
LABEL_19:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (UserServantEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !Instance )
LABEL_23:
    sub_1BC3264(Instance, v11);
  return UserPresentBoxMaster__GetServantCount((UserPresentBoxMaster_o *)Instance, servantId, 0LL) + v17;
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
  System_Func_object__bool__o *_9__35_0; // x21
  Il2CppObject *v28; // x23
  struct UserServantMaster___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  DataManager_c *klass; // x8
  DataManager_o *v33; // x19
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x19
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 v48; // x23
  __int128 v49; // q0
  __int64 v50; // x24
  __int64 v51; // x25
  __int64 v52; // x0
  Il2CppObject *Entity; // x0
  __int64 v54; // x1
  Il2CppObject *v55; // x24
  __int64 v56; // x23
  __int64 v57; // x25
  int32_t v58; // w0
  int v59; // w8
  __int64 v60; // x8
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  int32_t v65; // [xsp+Ch] [xbp-A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_4B0302A & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v6);
    sub_1BC3008(&System_Func_UserServantEntity__bool__TypeInfo, v7);
    sub_1BC3008(&System_IDisposable_TypeInfo, v8);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, v9);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, v10);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1BC3008(&NetworkManager_TypeInfo, v12);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BC3008(&Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__35_0__, v16);
    sub_1BC3008(&UserServantMaster___c_TypeInfo, v17);
    byte_4B0302A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v20);
    byte_4AFC1F1 = 1;
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
  _9__35_0 = (System_Func_object__bool__o *)v25->static_fields->__9__35_0;
  if ( !_9__35_0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = UserServantMaster___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__35_0 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_UserServantEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__35_0,
      v28,
      Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__35_0__,
      0LL);
    static_fields = UserServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__35_0 = (struct System_Func_UserServantEntity__bool__o *)_9__35_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__35_0, (int32_t)_9__35_0, v30, v31);
  }
  Instance = (DataManager_o *)System_Linq_Enumerable__Where_object_(
                                v26,
                                (System_Func_TSource__bool__o *)_9__35_0,
                                (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  if ( !Instance )
LABEL_62:
    sub_1BC3264(Instance, v19);
  klass = Instance->klass;
  v33 = Instance;
  v34 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_UserServantEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo )
    {
      --v34;
      p_offset += 4;
      if ( !v34 )
        goto LABEL_21;
    }
    v36 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_21:
    v36 = sub_1C13570(Instance, System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, 0LL);
  }
  v38 = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v36)(v33, *(_QWORD *)(v36 + 8));
  if ( !v38 )
    sub_1BC3264(0LL, v37);
  v65 = 0;
  while ( 1 )
  {
    v39 = *(_QWORD *)v38;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v41 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_29;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_29:
      v42 = sub_1C13570(v38, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v38, *(_QWORD *)(v42 + 8)) & 1) == 0 )
      break;
    v43 = *(_QWORD *)v38;
    v44 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
    {
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v45 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_36;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_36:
      v46 = sub_1C13570(v38, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL);
    }
    v47 = (*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v38, *(_QWORD *)(v46 + 8));
    v48 = v47;
    if ( v47 )
    {
      v49 = *(_OWORD *)(v47 + 64);
      *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)(v47 + 48);
      *(_OWORD *)&v67.fields.fakeValue = v49;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v66 = v67;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v66, 0LL) == userIdNumber
        && (*(_BYTE *)(v48 + 300) & 4) == 0 )
      {
        v51 = *(_QWORD *)(v48 + 80);
        v50 = *(_QWORD *)(v48 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v68.fields.currentCryptoKey = v51;
        *(_QWORD *)&v68.fields.fakeValue = v50;
        v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v68, 0LL);
        if ( !MasterData_object )
          sub_1BC3264(v52, (unsigned int)v52);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v52,
                   (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v55 = Entity;
        if ( !Entity )
          sub_1BC3264(0LL, v54);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
               (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[2],
               0LL) == servantId )
        {
          v57 = *(_QWORD *)(v48 + 96);
          v56 = *(_QWORD *)(v48 + 104);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v69.fields.currentCryptoKey = v57;
          *(_QWORD *)&v69.fields.fakeValue = v56;
          v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v69, 0LL);
          v59 = v65;
          if ( v58 == LODWORD(v55[5].monitor) )
            v59 = v65 + 1;
          v65 = v59;
        }
      }
    }
  }
  v60 = *(_QWORD *)v38;
  v61 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
  {
    v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
    {
      --v61;
      v62 += 4;
      if ( !v61 )
        goto LABEL_57;
    }
    v63 = v60 + 16LL * *v62 + 312;
  }
  else
  {
LABEL_57:
    v63 = sub_1C13570(v38, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v63)(v38, *(_QWORD *)(v63 + 8));
  return v65;
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

  if ( (byte_4B0302B & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v3);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BC3008(&NetworkManager_TypeInfo, v6);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B0302B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v11);
    byte_4AFC1F1 = 1;
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
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
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
               (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Item )
      {
        v19 = Item[4];
        v20 = Item;
        *(Il2CppObject *)&v27.fields.currentCryptoKey = Item[3];
        *(Il2CppObject *)&v27.fields.fakeValue = v19;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v26 = v27;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v26, 0LL) == v13
          && (BYTE4(v20[18].monitor) & 4) == 0 )
        {
          klass = v20[5].klass;
          monitor = v20[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v28.fields.currentCryptoKey = klass;
          *(_QWORD *)&v28.fields.fakeValue = monitor;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v28, 0LL);
          if ( !MasterData_object )
            break;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    sub_1BC3264(Instance, v11);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantMaster__IsEquipCostume(
        UserServantMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  System_Object_array *All_object; // x0
  const MethodInfo *v15; // x1
  System_Object_array *AllList; // x19
  System_Predicate_object__o *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  System_Func_object__bool__o *v19; // x21

  if ( (byte_4B03030 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_FindAll_UserServantEntity___, *(_QWORD *)&svtId);
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____76851520, v7);
    sub_1BC3008(&System_Func_UserServantEntity__bool__TypeInfo, v8);
    sub_1BC3008(&System_Predicate_UserServantEntity__TypeInfo, v9);
    sub_1BC3008(&Method_UserServantMaster___c__DisplayClass41_0__IsEquipCostume_b__0__, v10);
    sub_1BC3008(&Method_UserServantMaster___c__DisplayClass41_0__IsEquipCostume_b__1__, v11);
    sub_1BC3008(&UserServantMaster___c__DisplayClass41_0_TypeInfo, v12);
    byte_4B03030 = 1;
  }
  v13 = sub_1BC3254(UserServantMaster___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_9;
  *(_DWORD *)(v13 + 16) = svtId;
  *(_DWORD *)(v13 + 20) = costumeId;
  if ( costumeId < 11 )
    return 0;
  AllList = (System_Object_array *)UserServantMaster__getAllList(this, v15);
  v17 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_UserServantEntity__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v13,
    Method_UserServantMaster___c__DisplayClass41_0__IsEquipCostume_b__0__,
    0LL);
  All_object = System_Array__FindAll_object_(
                 AllList,
                 (System_Predicate_T__o *)v17,
                 (const MethodInfo_30FE89C *)Method_System_Array_FindAll_UserServantEntity___);
  if ( !All_object )
LABEL_9:
    sub_1BC3264(All_object, v15);
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)All_object;
  if ( *(_QWORD *)&All_object->max_length )
  {
    v19 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_UserServantEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v19,
      (Il2CppObject *)v13,
      Method_UserServantMaster___c__DisplayClass41_0__IsEquipCostume_b__1__,
      0LL);
    return System_Linq_Enumerable__FirstOrDefault_object__50493748(
             v18,
             (System_Func_TSource__bool__o *)v19,
             (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____76851520) != 0LL;
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4B0300D & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____76851520, svtEnt);
    sub_1BC3008(&System_Func_UserServantEntity__bool__TypeInfo, v7);
    sub_1BC3008(&Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__, v8);
    sub_1BC3008(&UserServantMaster___c__DisplayClass1_0_TypeInfo, v9);
    byte_4B0300D = 1;
  }
  v10 = (Il2CppObject *)sub_1BC3254(UserServantMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor(v10, 0LL);
  if ( !v10 )
    sub_1BC3264(v11, v12);
  v10[1].klass = (Il2CppClass *)svtId;
  List = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getList(this, v12);
  v14 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    v10,
    Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__,
    0LL);
  v15 = System_Linq_Enumerable__FirstOrDefault_object__50493748(
          List,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____76851520);
  *svtEnt = (UserServantEntity_o *)v15;
  sub_1BC2FAC((CGThumbnailListItem_o *)svtEnt, (int32_t)v15, v16, v17);
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
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x2
  const MethodInfo *v48; // x3
  System_Collections_ObjectModel_Collection_T__c *v49; // x8
  System_Collections_ObjectModel_Collection_T__o *v50; // x22
  unsigned __int64 v51; // x26
  Il2CppObject *v52; // x23
  void *v53; // x24
  Il2CppClass *v54; // x25
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_4B0302E & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__, userServantList);
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantStorageMaster___, v8);
    sub_1BC3008(&DataManager_TypeInfo, v9);
    sub_1BC3008(&System_IDisposable_TypeInfo, v10);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, v11);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v15);
    sub_1BC3008(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v16);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    byte_4B0302E = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v21);
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
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v30 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL);
    }
    v32 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                            Enumerator,
                            *(_QWORD *)(v30 + 8));
    if ( !v32 )
      sub_1BC3264(0LL, v31);
    v34 = v32[5].klass;
    monitor = v32[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v61.fields.currentCryptoKey = v34;
    *(_QWORD *)&v61.fields.fakeValue = monitor;
    v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v61, 0LL);
    if ( (_DWORD)v35 == svtId )
    {
      if ( !v18 )
        sub_1BC3264(v35, v36);
      items = v18->fields._items;
      v40 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++v18->fields._version;
      if ( !items )
        sub_1BC3264(v35, v36);
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          v32,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v42[4] = (Il2CppClass *)v32;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v32, v37, v38);
      }
    }
  }
  v43 = Enumerator->klass;
  v44 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v45 = &v43->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_31;
    }
    v46 = (__int64)&v43->vtable[*v45].method;
  }
  else
  {
LABEL_31:
    v46 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(Enumerator, *(_QWORD *)(v46 + 8));
  if ( isIncludeStorage )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)UserServantStorageMaster__getList(
                                                                 (UserServantStorageMaster_o *)list,
                                                                 v19);
      if ( list )
      {
        v49 = list[1].klass;
        v50 = list;
        if ( (int)v49 >= 1 )
        {
          v51 = 0LL;
          while ( 1 )
          {
            if ( v51 >= (unsigned int)v49 )
              sub_1BC326C(list, v19, v47);
            v52 = (Il2CppObject *)*((_QWORD *)&v50[1].monitor + v51);
            if ( v52 )
            {
              v54 = v52[5].klass;
              v53 = v52[5].monitor;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v62.fields.currentCryptoKey = v54;
              *(_QWORD *)&v62.fields.fakeValue = v53;
              list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                                         v62,
                                                                         0LL);
              if ( (_DWORD)list == svtId )
              {
                if ( !v18 )
                  goto LABEL_57;
                v55 = v18->fields._items;
                v56 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v18->fields._version;
                if ( !v55 )
                  goto LABEL_57;
                v57 = v18->fields._size;
                if ( (unsigned int)v57 >= v55->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v18,
                    v52,
                    *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
                }
                else
                {
                  v58 = &v55->obj.klass + v57;
                  v18->fields._size = v57 + 1;
                  v58[4] = (Il2CppClass *)v52;
                  sub_1BC2FAC((CGThumbnailListItem_o *)(v58 + 4), (int32_t)v52, v47, v48);
                }
              }
            }
            LODWORD(v49) = v50[1].klass;
            if ( (__int64)++v51 >= (int)v49 )
              goto LABEL_51;
          }
        }
        goto LABEL_51;
      }
    }
LABEL_57:
    sub_1BC3264(list, v19);
  }
LABEL_51:
  *userServantList = (System_Collections_Generic_List_UserServantEntity__o *)v18;
  sub_1BC2FAC((CGThumbnailListItem_o *)userServantList, (int32_t)v18, v47, v48);
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
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  __int64 v17; // x8
  UserServantEntity_array *v18; // x22
  unsigned __int64 v19; // x26
  Il2CppObject *v20; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4B0302F & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantStorageMaster___, userStorageServantList);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v9);
    sub_1BC3008(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v10);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4B0302F = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
  if ( !Master_object )
    goto LABEL_23;
  Master_object = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Master_object, v14);
  if ( !Master_object )
    goto LABEL_23;
  v17 = *(_QWORD *)&Master_object->max_length;
  v18 = Master_object;
  if ( (int)v17 >= 1 )
  {
    v19 = 0LL;
    do
    {
      if ( v19 >= (unsigned int)v17 )
        sub_1BC326C(Master_object, v14, v15);
      v20 = (Il2CppObject *)v18->m_Items[v19];
      if ( v20 )
      {
        klass = v20[5].klass;
        monitor = v20[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v28.fields.currentCryptoKey = klass;
        *(_QWORD *)&v28.fields.fakeValue = monitor;
        Master_object = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                     v28,
                                                     0LL);
        if ( (_DWORD)Master_object == svtId )
        {
          if ( !v12 )
            goto LABEL_23;
          items = v12->fields._items;
          v24 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            goto LABEL_23;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              v20,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v20;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v20, v15, v16);
          }
        }
      }
      LODWORD(v17) = v18->max_length;
    }
    while ( (__int64)++v19 < (int)v17 );
  }
  *userStorageServantList = (System_Collections_Generic_List_UserServantEntity__o *)v12;
  sub_1BC2FAC((CGThumbnailListItem_o *)userStorageServantList, (int32_t)v12, v15, v16);
  if ( !*userStorageServantList )
LABEL_23:
    sub_1BC3264(Master_object, v14);
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

  if ( (byte_4B03022 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Add__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__ToArray__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_1BC3008(&NetworkManager_TypeInfo, v8);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1BC3008(&UserServantNewManager_TypeInfo, v10);
    byte_4B03022 = 1;
  }
  v11 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v12);
    byte_4AFC1F1 = 1;
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
                        (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( list )
      {
        v17 = *(_OWORD *)(list + 64);
        v18 = list;
        *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)(list + 48);
        *(_OWORD *)&v26.fields.fakeValue = v17;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v25 = v26;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v25, 0LL);
        if ( list == v15 && (*(_BYTE *)(v18 + 300) & 4) == 0 )
        {
          v19 = *(_OWORD *)(v18 + 32);
          *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)(v18 + 16);
          *(_OWORD *)&v26.fields.fakeValue = v19;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v24 = v26;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v24, 0LL);
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
              *(const MethodInfo_3688E74 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v11->fields._size = size + 1;
            items->m_Items[size] = list;
          }
        }
      }
      if ( Count == ++v16 )
        goto LABEL_26;
    }
LABEL_30:
    sub_1BC3264(list, v12);
  }
LABEL_26:
  if ( !v11 )
    goto LABEL_30;
  v23 = System_Collections_Generic_List_long___ToArray(
          v11,
          (const MethodInfo_368A92C *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  UserServantNewManager__SetOld_42534740(v23, 0LL);
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

  if ( (byte_4B03024 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantStorageMaster___, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor___76777560, v5);
    sub_1BC3008(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B03024 = 1;
  }
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, method);
  v9 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_57280308(
    v9,
    List,
    (const MethodInfo_36A0734 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76777560);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL
    || (Instance = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, v11), !v9) )
  {
    sub_1BC3264(Instance, v11);
  }
  System_Collections_Generic_List_object___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v9,
                                      (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4B03023 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v3);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1BC3008(&NetworkManager_TypeInfo, v10);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B03023 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v15);
    byte_4AFC1F1 = 1;
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
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v21 = *(_OWORD *)(Instance + 64);
        v22 = Instance;
        *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v34.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v33 = v34;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v33, 0LL);
        if ( Instance == v17 && (*(_BYTE *)(v22 + 300) & 4) == 0 )
        {
          v24 = *(_QWORD *)(v22 + 80);
          v23 = *(_QWORD *)(v22 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v35.fields.currentCryptoKey = v24;
          *(_QWORD *)&v35.fields.fakeValue = v23;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v35, 0LL);
          if ( !MasterData_object )
            break;
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                Instance,
                                (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
              v29 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v19->fields._version;
              if ( !items )
                break;
              size = v19->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v19,
                  (Il2CppObject *)v22,
                  *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
              }
              else
              {
                v31 = &items->obj.klass + size;
                v19->fields._size = size + 1;
                v31[4] = (Il2CppClass *)v22;
                sub_1BC2FAC((CGThumbnailListItem_o *)(v31 + 4), v22, v26, v27);
              }
            }
          }
        }
      }
      if ( Count == ++v20 )
        goto LABEL_31;
    }
LABEL_33:
    sub_1BC3264(Instance, v15);
  }
LABEL_31:
  if ( !v19 )
    goto LABEL_33;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v19,
                                      (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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

  if ( (byte_4B0300F & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, servantSum);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v8);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1BC3008(&NetworkManager_TypeInfo, v11);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B0300F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v16);
    byte_4AFC1F1 = 1;
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
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
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
               (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Item )
      {
        v24 = Item[4];
        v25 = Item;
        *(Il2CppObject *)&v35.fields.currentCryptoKey = Item[3];
        *(Il2CppObject *)&v35.fields.fakeValue = v24;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v34 = v35;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v34, 0LL) == v18
          && (BYTE4(v25[18].monitor) & 4) == 0 )
        {
          klass = v25[5].klass;
          monitor = v25[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v36.fields.currentCryptoKey = klass;
          *(_QWORD *)&v36.fields.fakeValue = monitor;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v36, 0LL);
          if ( !MasterData_object )
            break;
          ++v21;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    sub_1BC3264(Instance, v16);
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

  if ( (byte_4B03010 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, servantSum);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1BC3008(&NetworkManager_TypeInfo, v10);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B03010 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v15);
    byte_4AFC1F1 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
LABEL_32:
    sub_1BC3264(Instance, v15);
  v17 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
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
               (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Item )
      {
        v23 = Item[4];
        v24 = Item;
        *(Il2CppObject *)&v32.fields.currentCryptoKey = Item[3];
        *(Il2CppObject *)&v32.fields.fakeValue = v23;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v31 = v32;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v31, 0LL) == v17
          && (BYTE4(v24[18].monitor) & 4) == 0 )
        {
          klass = v24[5].klass;
          monitor = v24[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v33.fields.currentCryptoKey = klass;
          *(_QWORD *)&v33.fields.fakeValue = monitor;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v33, 0LL);
          if ( !MasterData_object )
            goto LABEL_32;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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

  if ( (byte_4B03020 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, *(_QWORD *)&heroineId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v5);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    byte_4B03020 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
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
               (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Item )
      {
        v12 = (UserServantEntity_o *)Item;
        klass = Item[5].klass;
        monitor = Item[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v16.fields.currentCryptoKey = klass;
        *(_QWORD *)&v16.fields.fakeValue = monitor;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v16, 0LL) == heroineId
          && UserServantEntity__IsHeroine(v12, *(const MethodInfo **)&heroineId) )
        {
          return v12;
        }
      }
      if ( v9 == ++v10 )
        return 0LL;
    }
LABEL_15:
    sub_1BC3264(list, *(_QWORD *)&heroineId);
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
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4B03019 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v3);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1BC3008(&NetworkManager_TypeInfo, v10);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B03019 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v15);
    byte_4AFC1F1 = 1;
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
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v21 = *(_OWORD *)(Instance + 64);
        v22 = Instance;
        *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v33.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v32 = v33;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v32, 0LL);
        if ( Instance == v17 && (*(_BYTE *)(v22 + 300) & 4) == 0 )
        {
          v24 = *(_QWORD *)(v22 + 80);
          v23 = *(_QWORD *)(v22 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v34.fields.currentCryptoKey = v24;
          *(_QWORD *)&v34.fields.fakeValue = v23;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v34, 0LL);
          if ( !MasterData_object )
            break;
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                Instance,
                                (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            break;
          Instance = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)Instance, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v19 )
              break;
            items = v19->fields._items;
            v28 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v19->fields._version;
            if ( !items )
              break;
            size = v19->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v19,
                (Il2CppObject *)v22,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &items->obj.klass + size;
              v19->fields._size = size + 1;
              v30[4] = (Il2CppClass *)v22;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v30 + 4), v22, v25, v26);
            }
          }
        }
      }
      if ( Count == ++v20 )
        goto LABEL_30;
    }
LABEL_32:
    sub_1BC3264(Instance, v15);
  }
LABEL_30:
  if ( !v19 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v19,
                                      (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4B03017 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v3);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1BC3008(&NetworkManager_TypeInfo, v10);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B03017 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v15);
    byte_4AFC1F1 = 1;
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
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v21 = *(_OWORD *)(Instance + 64);
        v22 = Instance;
        *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v33.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v32 = v33;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v32, 0LL);
        if ( Instance == v17 && (*(_BYTE *)(v22 + 300) & 4) == 0 )
        {
          v24 = *(_QWORD *)(v22 + 80);
          v23 = *(_QWORD *)(v22 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v34.fields.currentCryptoKey = v24;
          *(_QWORD *)&v34.fields.fakeValue = v23;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v34, 0LL);
          if ( !MasterData_object )
            break;
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                Instance,
                                (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            break;
          Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v19 )
              break;
            items = v19->fields._items;
            v28 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v19->fields._version;
            if ( !items )
              break;
            size = v19->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v19,
                (Il2CppObject *)v22,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &items->obj.klass + size;
              v19->fields._size = size + 1;
              v30[4] = (Il2CppClass *)v22;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v30 + 4), v22, v25, v26);
            }
          }
        }
      }
      if ( Count == ++v20 )
        goto LABEL_30;
    }
LABEL_32:
    sub_1BC3264(Instance, v15);
  }
LABEL_30:
  if ( !v19 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v19,
                                      (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getList(UserServantMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0

  if ( (byte_4B03011 & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    byte_4B03011 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    byte_4AFC1F1 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  return UserServantMaster__getList_42191996(this, v4->static_fields->userIdNumber, v2);
}


UserServantEntity_array *__fastcall UserServantMaster__getList_42191996(
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
  int64_t v16; // x24
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-70h]

  if ( (byte_4B03012 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, userId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    byte_4B03012 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                        (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( list )
      {
        v15 = *(_OWORD *)(list + 64);
        v16 = list;
        *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)(list + 48);
        *(_OWORD *)&v25.fields.fakeValue = v15;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v24 = v25;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v24, 0LL);
        if ( list == userId && (*(_BYTE *)(v16 + 300) & 4) == 0 )
        {
          if ( !v13 )
            break;
          items = v13->fields._items;
          v20 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v13->fields._version;
          if ( !items )
            break;
          size = v13->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              (Il2CppObject *)v16,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v13->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v16;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v22 + 4), v16, v17, v18);
          }
        }
      }
      if ( Count == ++v14 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1BC3264(list, userId);
  }
LABEL_18:
  if ( !v13 )
    goto LABEL_20;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v13,
                                      (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4B03021 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, userId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v5);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v10);
    sub_1BC3008(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v11);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B03021 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this->fields.list )
    goto LABEL_26;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v21 = *(_OWORD *)(Instance + 64);
        v22 = Instance;
        *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v33.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v32 = v33;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v32, 0LL);
        if ( Instance == userId && (*(_BYTE *)(v22 + 300) & 4) == 0 )
        {
          v24 = *(_QWORD *)(v22 + 80);
          v23 = *(_QWORD *)(v22 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v34.fields.currentCryptoKey = v24;
          *(_QWORD *)&v34.fields.fakeValue = v23;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v34, 0LL);
          if ( !v17 )
            break;
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                v17,
                                Instance,
                                (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            break;
          if ( *(_DWORD *)(Instance + 84) != 3 )
          {
            if ( !v19 )
              break;
            items = v19->fields._items;
            v28 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v19->fields._version;
            if ( !items )
              break;
            size = v19->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v19,
                (Il2CppObject *)v22,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &items->obj.klass + size;
              v19->fields._size = size + 1;
              v30[4] = (Il2CppClass *)v22;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v30 + 4), v22, v25, v26);
            }
          }
        }
      }
      if ( Count == ++v20 )
        goto LABEL_24;
    }
LABEL_26:
    sub_1BC3264(Instance, v16);
  }
LABEL_24:
  if ( !v19 )
    goto LABEL_26;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v19,
                                      (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  void *Instance; // x0
  Il2CppObject *v20; // x1
  Il2CppObject *MasterData_object; // x27
  System_Collections_Generic_List_object__o *v22; // x21
  int32_t Count; // w23
  SvtMaterialTdMaster_o *v24; // x24
  __int64 v25; // x25
  __int64 v26; // x26
  System_Object_array *v27; // x24
  int32_t v28; // w25
  __int64 v29; // x27
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject **v32; // x26
  System_Predicate_object__o *v33; // x28
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  void *monitor; // x27
  Il2CppClass *klass; // x28
  int32_t v38; // w27
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4B0301C & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_Exists_SvtMaterialTdEntity___, usrSvtEnt);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, v5);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v6);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___, v8);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v12);
    sub_1BC3008(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1BC3008(&System_Predicate_SvtMaterialTdEntity__TypeInfo, v15);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BC3008(&Method_UserServantMaster___c__DisplayClass16_0__getNpUpServantList_b__0__, v17);
    sub_1BC3008(&UserServantMaster___c__DisplayClass16_0_TypeInfo, v18);
    byte_4B0301C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  v22 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_34;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
  if ( !usrSvtEnt )
    goto LABEL_34;
  v24 = (SvtMaterialTdMaster_o *)Instance;
  v26 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v26;
  *(_QWORD *)&v45.fields.fakeValue = v25;
  v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v45, 0LL);
  if ( !v24 )
    goto LABEL_34;
  Instance = SvtMaterialTdMaster__GetEntityList(v24, (int32_t)Instance, 0LL);
  if ( Count >= 1 )
  {
    v27 = (System_Object_array *)Instance;
    v28 = 0;
    do
    {
      v29 = sub_1BC3254(UserServantMaster___c__DisplayClass16_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v29, 0LL);
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_34;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v28,
                   (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( !v29 )
        goto LABEL_34;
      *(_QWORD *)(v29 + 16) = Instance;
      v32 = (Il2CppObject **)(v29 + 16);
      sub_1BC2FAC((CGThumbnailListItem_o *)(v29 + 16), (int32_t)Instance, v30, v31);
      if ( *(_QWORD *)(v29 + 16) && (*(_BYTE *)(*(_QWORD *)(v29 + 16) + 300LL) & 4) == 0 )
      {
        v33 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_SvtMaterialTdEntity__TypeInfo);
        System_Predicate_object____ctor(
          v33,
          (Il2CppObject *)v29,
          Method_UserServantMaster___c__DisplayClass16_0__getNpUpServantList_b__0__,
          0LL);
        Instance = (void *)System_Array__Exists_object_(
                             v27,
                             (System_Predicate_T__o *)v33,
                             (const MethodInfo_30FDB38 *)Method_System_Array_Exists_SvtMaterialTdEntity___);
        v20 = *(Il2CppObject **)(v29 + 16);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v22 )
            goto LABEL_34;
LABEL_27:
          items = v22->fields._items;
          v40 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v22->fields._version;
          if ( !items )
            goto LABEL_34;
          size = v22->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v22,
              v20,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = &items->obj.klass + size;
            v22->fields._size = size + 1;
            v42[4] = (Il2CppClass *)v20;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v20, v34, v35);
          }
          continue;
        }
        if ( !v20 )
          goto LABEL_34;
        klass = v20[5].klass;
        monitor = v20[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v46.fields.currentCryptoKey = klass;
        *(_QWORD *)&v46.fields.fakeValue = monitor;
        v20 = (Il2CppObject *)(unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                              v46,
                                              0LL);
        Instance = v44;
        if ( !v44 )
          goto LABEL_34;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v44,
                     (int32_t)v20,
                     (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_34;
        v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                *((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance + 2),
                0LL);
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                             usrSvtEnt->fields.svtId,
                             0LL);
        if ( v38 == (_DWORD)Instance )
        {
          if ( !v22 )
            goto LABEL_34;
          v20 = *v32;
          goto LABEL_27;
        }
      }
    }
    while ( Count != ++v28 );
  }
  if ( !v22 )
LABEL_34:
    sub_1BC3264(Instance, v20);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v22,
                                      (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4B03018 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v3);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1BC3008(&NetworkManager_TypeInfo, v10);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B03018 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v15);
    byte_4AFC1F1 = 1;
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
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v21 = *(_OWORD *)(Instance + 64);
        v22 = Instance;
        *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v33.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v32 = v33;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v32, 0LL);
        if ( Instance == v17 && (*(_BYTE *)(v22 + 300) & 4) == 0 )
        {
          v24 = *(_QWORD *)(v22 + 80);
          v23 = *(_QWORD *)(v22 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v34.fields.currentCryptoKey = v24;
          *(_QWORD *)&v34.fields.fakeValue = v23;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v34, 0LL);
          if ( !MasterData_object )
            break;
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                Instance,
                                (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            break;
          Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v19 )
              break;
            items = v19->fields._items;
            v28 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v19->fields._version;
            if ( !items )
              break;
            size = v19->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v19,
                (Il2CppObject *)v22,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &items->obj.klass + size;
              v19->fields._size = size + 1;
              v30[4] = (Il2CppClass *)v22;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v30 + 4), v22, v25, v26);
            }
          }
        }
      }
      if ( Count == ++v20 )
        goto LABEL_30;
    }
LABEL_32:
    sub_1BC3264(Instance, v15);
  }
LABEL_30:
  if ( !v19 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v19,
                                      (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  const MethodInfo *v25; // x1
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
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int64_t *v40; // x26
  __int64 v41; // x8
  __int128 v42; // q0
  int64_t v43; // x0
  __int128 v44; // q1
  int64_t v45; // x28
  System_Predicate_object__o *v46; // x28
  int64_t v47; // x8
  __int64 v48; // x27
  __int64 v49; // x28
  int32_t v50; // w27
  struct System_Int32_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_int__object__o *v54; // x20
  __int64 v55; // x19
  __int64 v56; // x23
  System_Object_array *array; // [xsp+0h] [xbp-E0h]
  System_Collections_Generic_Dictionary_int__List_int___o **v59; // [xsp+8h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+50h] [xbp-90h]
  Il2CppObject *value; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4B0301B & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_Exists_SvtMaterialTdEntity___, usrSvtEnt);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, v7);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v8);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1BC3008(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___, v10);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Count__, v15);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_1BC3008(&System_Predicate_SvtMaterialTdEntity__TypeInfo, v19);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1BC3008(&Method_UserServantMaster___c__DisplayClass15_0__getSameSvtNpLvCache_b__0__, v21);
    sub_1BC3008(&UserServantMaster___c__DisplayClass15_0_TypeInfo, v22);
    byte_4B0301B = 1;
  }
  v23 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  value = (Il2CppObject *)v23;
  if ( !usrSvtEnt )
    goto LABEL_54;
  if ( (usrSvtEnt->fields.status & 2) != 0 )
    goto LABEL_12;
  v26 = *cachedUserServantNpLvDict;
  v28 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v64.fields.currentCryptoKey = v28;
  *(_QWORD *)&v64.fields.fakeValue = v27;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v64, 0LL);
  if ( !v26 )
    goto LABEL_54;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)v26,
          Instance,
          &value,
          (const MethodInfo_3309CE0 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
LABEL_12:
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      DataManager__GetMasterData_object_(
        (DataManager_o *)Instance,
        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = (int64_t)this->fields.list;
      if ( Instance )
      {
        Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
        v31 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v31,
          (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
          v34 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
          v33 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
          v35 = (SvtMaterialTdMaster_o *)MasterData_object;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v65.fields.currentCryptoKey = v34;
          *(_QWORD *)&v65.fields.fakeValue = v33;
          v59 = cachedUserServantNpLvDict;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v65, 0LL);
          if ( v35 )
          {
            Instance = (int64_t)SvtMaterialTdMaster__GetEntityList(v35, Instance, 0LL);
            array = (System_Object_array *)Instance;
            if ( Count >= 1 )
            {
              for ( i = 0; Count != i; ++i )
              {
                v37 = sub_1BC3254(UserServantMaster___c__DisplayClass15_0_TypeInfo);
                System_Object___ctor((Il2CppObject *)v37, 0LL);
                Instance = (int64_t)this->fields.list;
                if ( !Instance )
                  goto LABEL_54;
                Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                      i,
                                      (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
                if ( !v37 )
                  goto LABEL_54;
                *(_QWORD *)(v37 + 16) = Instance;
                v40 = (int64_t *)(v37 + 16);
                sub_1BC2FAC((CGThumbnailListItem_o *)(v37 + 16), Instance, v38, v39);
                v41 = *(_QWORD *)(v37 + 16);
                if ( v41 && (*(_BYTE *)(v41 + 300) & 6) == 0 )
                {
                  v42 = *(_OWORD *)(v41 + 32);
                  *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)(v41 + 16);
                  *(_OWORD *)&v62.fields.fakeValue = v42;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  v61 = v62;
                  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v61, 0LL);
                  v44 = *(_OWORD *)&usrSvtEnt->fields.id.fields.fakeValue;
                  v45 = v43;
                  *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&usrSvtEnt->fields.id.fields.currentCryptoKey;
                  *(_OWORD *)&v60.fields.fakeValue = v44;
                  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v60, 0LL);
                  if ( v45 != Instance )
                  {
                    Instance = UserServantEntity__IsMaterialTd(usrSvtEnt, v25);
                    if ( (Instance & 1) == 0 )
                    {
                      Instance = *v40;
                      if ( !*v40 )
                        goto LABEL_54;
                      Instance = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Instance, v25);
                      if ( (Instance & 1) != 0 )
                      {
                        v46 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_SvtMaterialTdEntity__TypeInfo);
                        System_Predicate_object____ctor(
                          v46,
                          (Il2CppObject *)v37,
                          Method_UserServantMaster___c__DisplayClass15_0__getSameSvtNpLvCache_b__0__,
                          0LL);
                        Instance = System_Array__Exists_object_(
                                     array,
                                     (System_Predicate_T__o *)v46,
                                     (const MethodInfo_30FDB38 *)Method_System_Array_Exists_SvtMaterialTdEntity___);
                        if ( (Instance & 1) == 0 )
                          continue;
                      }
                      else
                      {
                        v47 = *v40;
                        if ( !*v40 )
                          goto LABEL_54;
                        v49 = *(_QWORD *)(v47 + 80);
                        v48 = *(_QWORD *)(v47 + 88);
                        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        *(_QWORD *)&v66.fields.currentCryptoKey = v49;
                        *(_QWORD *)&v66.fields.fakeValue = v48;
                        v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v66, 0LL);
                        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                     usrSvtEnt->fields.svtId,
                                     0LL);
                        if ( v50 != (_DWORD)Instance || (usrSvtEnt->fields.status & 2) != 0 )
                          continue;
                      }
                      if ( !*v40 )
                        goto LABEL_54;
                      if ( !v31 )
                        goto LABEL_54;
                      v25 = (const MethodInfo *)*(unsigned int *)(*v40 + 292);
                      items = v31->fields._items;
                      v52 = Method_System_Collections_Generic_List_int__Add__;
                      ++v31->fields._version;
                      if ( !items )
                        goto LABEL_54;
                      size = v31->fields._size;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v31,
                          (int32_t)v25,
                          *(const MethodInfo_3683E1C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v31->fields._size = size + 1;
                        items->m_Items[size + 1] = (int)v25;
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
              if ( (usrSvtEnt->fields.status & 2) != 0 )
                return v29;
              v54 = (System_Collections_Generic_Dictionary_int__object__o *)*v59;
              v56 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
              v55 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v67.fields.currentCryptoKey = v56;
              *(_QWORD *)&v67.fields.fakeValue = v55;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v67, 0LL);
              if ( v54 )
              {
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  v54,
                  Instance,
                  (Il2CppObject *)v31,
                  (const MethodInfo_3308540 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
                return v29;
              }
            }
          }
        }
      }
    }
LABEL_54:
    sub_1BC3264(Instance, v25);
  }
  Instance = (int64_t)value;
  if ( !value )
    goto LABEL_54;
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
  __int64 v55; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v57; // x23
  unsigned __int64 i; // x26
  __int64 v59; // x29
  __int128 v60; // q0
  int64_t v61; // x24
  __int64 v62; // x24
  __int64 v63; // x25
  __int64 v64; // x24
  __int64 v65; // x25
  __int64 v66; // x24
  __int64 v67; // x25
  struct System_Int32_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  UserServantStorageMaster_o *v72; // [xsp+0h] [xbp-D0h]
  int32_t v73; // [xsp+Ch] [xbp-C4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+50h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16

  if ( (byte_4B03014 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BC3008(&System_IDisposable_TypeInfo, v6);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, v7);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1BC3008(&NetworkManager_TypeInfo, v13);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4B03014 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  v72 = (UserServantStorageMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v20 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_87;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v21);
  v73 = 0;
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
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v30 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL);
    }
    v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
            Enumerator,
            *(_QWORD *)(v30 + 8));
    v32 = v31;
    if ( v31 )
    {
      v33 = *(_OWORD *)(v31 + 64);
      *(_OWORD *)&v76.fields.currentCryptoKey = *(_OWORD *)(v31 + 48);
      *(_OWORD *)&v76.fields.fakeValue = v33;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v75 = v76;
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v75, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4AFC1F1 )
      {
        sub_1BC3008(&NetworkManager_TypeInfo, v34);
        byte_4AFC1F1 = 1;
      }
      v36 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v36 = NetworkManager_TypeInfo;
      }
      if ( v35 == v36->static_fields->userIdNumber && (*(_BYTE *)(v32 + 300) & 4) == 0 )
      {
        v38 = *(_QWORD *)(v32 + 80);
        v37 = *(_QWORD *)(v32 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v77.fields.currentCryptoKey = v38;
        *(_QWORD *)&v77.fields.fakeValue = v37;
        v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v77, 0LL);
        if ( !MasterData_object )
          sub_1BC3264(v39, (unsigned int)v39);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v39,
                   (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_1BC3264(0LL, v41);
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0LL) )
        {
          v43 = *(_QWORD *)(v32 + 80);
          v42 = *(_QWORD *)(v32 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v78.fields.currentCryptoKey = v43;
          *(_QWORD *)&v78.fields.fakeValue = v42;
          v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v78, 0LL);
          if ( !v20 )
            sub_1BC3264(v44, (unsigned int)v44);
          if ( !System_Collections_Generic_List_int___Contains(
                  v20,
                  v44,
                  (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            v46 = *(_QWORD *)(v32 + 80);
            v45 = *(_QWORD *)(v32 + 88);
            ++v73;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v79.fields.currentCryptoKey = v46;
            *(_QWORD *)&v79.fields.fakeValue = v45;
            v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v79, 0LL);
            items = v20->fields._items;
            v49 = Method_System_Collections_Generic_List_int__Add__;
            ++v20->fields._version;
            if ( !items )
              sub_1BC3264(v47, (unsigned int)v47);
            size = v20->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v20,
                v47,
                *(const MethodInfo_3683E1C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
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
    v54 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(Enumerator, *(_QWORD *)(v54 + 8));
  Instance = (DataManager_o *)v72;
  if ( !v72 || (Instance = (DataManager_o *)UserServantStorageMaster__getList(v72, v18)) == 0LL )
LABEL_87:
    sub_1BC3264(Instance, v18);
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v57 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1BC326C(Instance, v18, v55);
      v59 = *((_QWORD *)&v57->fields._DispLog + i);
      if ( v59 )
      {
        v60 = *(_OWORD *)(v59 + 64);
        *(_OWORD *)&v76.fields.currentCryptoKey = *(_OWORD *)(v59 + 48);
        *(_OWORD *)&v76.fields.fakeValue = v60;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v74 = v76;
        v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v74, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4AFC1F1 )
        {
          sub_1BC3008(&NetworkManager_TypeInfo, v18);
          byte_4AFC1F1 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        if ( v61 == *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL) && (*(_BYTE *)(v59 + 300) & 4) == 0 )
        {
          v63 = *(_QWORD *)(v59 + 80);
          v62 = *(_QWORD *)(v59 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v80.fields.currentCryptoKey = v63;
          *(_QWORD *)&v80.fields.fakeValue = v62;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v80, 0LL);
          if ( !MasterData_object )
            goto LABEL_87;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                        (int32_t)Instance,
                                        (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_87;
          Instance = (DataManager_o *)ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            v65 = *(_QWORD *)(v59 + 80);
            v64 = *(_QWORD *)(v59 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v81.fields.currentCryptoKey = v65;
            *(_QWORD *)&v81.fields.fakeValue = v64;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v81, 0LL);
            if ( !v20 )
              goto LABEL_87;
            Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                          v20,
                                          (int32_t)Instance,
                                          (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              v67 = *(_QWORD *)(v59 + 80);
              v66 = *(_QWORD *)(v59 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v82.fields.currentCryptoKey = v67;
              *(_QWORD *)&v82.fields.fakeValue = v66;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v82, 0LL);
              v68 = v20->fields._items;
              v69 = Method_System_Collections_Generic_List_int__Add__;
              ++v20->fields._version;
              if ( !v68 )
                goto LABEL_87;
              v70 = v20->fields._size;
              v18 = (const MethodInfo *)(unsigned int)Instance;
              ++v73;
              if ( (unsigned int)v70 >= v68->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v20,
                  (int32_t)Instance,
                  *(const MethodInfo_3683E1C **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
              }
              else
              {
                v20->fields._size = v70 + 1;
                v68->m_Items[v70 + 1] = (int)Instance;
              }
            }
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v57->fields.m_CancellationTokenSource;
    }
  }
  return v73;
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
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4B0301A & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v3);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1BC3008(&NetworkManager_TypeInfo, v10);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B0301A = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v15);
    byte_4AFC1F1 = 1;
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
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v21 = *(_OWORD *)(Instance + 64);
        v22 = Instance;
        *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v33.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v32 = v33;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v32, 0LL);
        if ( Instance == v17 && (*(_BYTE *)(v22 + 300) & 4) == 0 )
        {
          v24 = *(_QWORD *)(v22 + 80);
          v23 = *(_QWORD *)(v22 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v34.fields.currentCryptoKey = v24;
          *(_QWORD *)&v34.fields.fakeValue = v23;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v34, 0LL);
          if ( !MasterData_object )
            break;
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                Instance,
                                (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            break;
          Instance = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v19 )
              break;
            items = v19->fields._items;
            v28 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v19->fields._version;
            if ( !items )
              break;
            size = v19->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v19,
                (Il2CppObject *)v22,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &items->obj.klass + size;
              v19->fields._size = size + 1;
              v30[4] = (Il2CppClass *)v22;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v30 + 4), v22, v25, v26);
            }
          }
        }
      }
      if ( Count == ++v20 )
        goto LABEL_30;
    }
LABEL_32:
    sub_1BC3264(Instance, v15);
  }
LABEL_30:
  if ( !v19 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v19,
                                      (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  __int64 v30; // x23
  __int128 v31; // q0
  __int64 v32; // x1
  int64_t v33; // x24
  NetworkManager_c *v34; // x0
  __int64 v35; // x24
  __int64 v36; // x25
  __int64 v37; // x0
  Il2CppObject *Entity; // x0
  __int64 v39; // x1
  _BOOL8 IsServant; // x0
  __int64 v41; // x1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4B03013 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1BC3008(&System_IDisposable_TypeInfo, v5);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, v6);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v9);
    sub_1BC3008(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v10);
    sub_1BC3008(&NetworkManager_TypeInfo, v11);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B03013 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___),
        v18 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v18,
          (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0LL) )
  {
    sub_1BC3264(Instance, v16);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v19);
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
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v28 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL);
    }
    v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
            Enumerator,
            *(_QWORD *)(v28 + 8));
    v30 = v29;
    if ( v29 )
    {
      v31 = *(_OWORD *)(v29 + 64);
      *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)(v29 + 48);
      *(_OWORD *)&v54.fields.fakeValue = v31;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v53 = v54;
      v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v53, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4AFC1F1 )
      {
        sub_1BC3008(&NetworkManager_TypeInfo, v32);
        byte_4AFC1F1 = 1;
      }
      v34 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v34 = NetworkManager_TypeInfo;
      }
      if ( v33 == v34->static_fields->userIdNumber && (*(_BYTE *)(v30 + 300) & 4) == 0 )
      {
        v36 = *(_QWORD *)(v30 + 80);
        v35 = *(_QWORD *)(v30 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v55.fields.currentCryptoKey = v36;
        *(_QWORD *)&v55.fields.fakeValue = v35;
        v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v55, 0LL);
        if ( !MasterData_object )
          sub_1BC3264(v37, (unsigned int)v37);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v37,
                   (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_1BC3264(0LL, v39);
        IsServant = ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL);
        if ( IsServant )
        {
          if ( !v18 )
            sub_1BC3264(IsServant, v41);
          items = v18->fields._items;
          v45 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v18->fields._version;
          if ( !items )
            sub_1BC3264(IsServant, v41);
          size = v18->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              (Il2CppObject *)v30,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
          }
          else
          {
            v47 = &items->obj.klass + size;
            v18->fields._size = size + 1;
            v47[4] = (Il2CppClass *)v30;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v47 + 4), v30, v42, v43);
          }
        }
      }
    }
  }
  v48 = Enumerator->klass;
  v49 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      --v49;
      v50 += 4;
      if ( !v49 )
        goto LABEL_44;
    }
    v51 = (__int64)&v48->vtable[*v50].method;
  }
  else
  {
LABEL_44:
    v51 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(Enumerator, *(_QWORD *)(v51 + 8));
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
  __int64 v33; // x24
  __int128 v34; // q0
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  int64_t v37; // x25
  NetworkManager_c *v38; // x0
  __int64 SvtClassId; // x0
  __int64 v40; // x25
  __int64 v41; // x26
  __int64 v42; // x1
  Il2CppObject *Entity; // x0
  __int64 v44; // x1
  _BOOL8 IsServant; // x0
  __int64 v46; // x1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  System_Collections_Generic_IEnumerator_T__c *v53; // x8
  __int64 v54; // x9
  int32_t *v55; // x10
  __int64 v56; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_4B03016 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__, classIdList);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1BC3008(&System_IDisposable_TypeInfo, v7);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, v8);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v12);
    sub_1BC3008(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1BC3008(&NetworkManager_TypeInfo, v14);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4B03016 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___),
        v21 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v21,
          (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0LL) )
  {
    sub_1BC3264(Instance, v19);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v22);
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
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v31 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL);
    }
    v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
            Enumerator,
            *(_QWORD *)(v31 + 8));
    v33 = v32;
    if ( v32 )
    {
      v34 = *(_OWORD *)(v32 + 64);
      *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(v32 + 48);
      *(_OWORD *)&v59.fields.fakeValue = v34;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v58 = v59;
      v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v58, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4AFC1F1 )
      {
        sub_1BC3008(&NetworkManager_TypeInfo, v35);
        byte_4AFC1F1 = 1;
      }
      v38 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v38 = NetworkManager_TypeInfo;
      }
      if ( v37 == v38->static_fields->userIdNumber && (*(_BYTE *)(v33 + 300) & 4) == 0 )
      {
        SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)v33, 0, 0, v36);
        if ( !classIdList )
          sub_1BC3264(SvtClassId, (unsigned int)SvtClassId);
        if ( System_Collections_Generic_List_int___Contains(
               classIdList,
               SvtClassId,
               (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v41 = *(_QWORD *)(v33 + 80);
          v40 = *(_QWORD *)(v33 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v60.fields.currentCryptoKey = v41;
          *(_QWORD *)&v60.fields.fakeValue = v40;
          v42 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v60, 0LL);
          if ( !MasterData_object )
            sub_1BC3264(0LL, v42);
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     v42,
                     (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Entity )
            sub_1BC3264(0LL, v44);
          IsServant = ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL);
          if ( IsServant )
          {
            if ( !v21 )
              sub_1BC3264(IsServant, v46);
            items = v21->fields._items;
            v50 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v21->fields._version;
            if ( !items )
              sub_1BC3264(IsServant, v46);
            size = v21->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v21,
                (Il2CppObject *)v33,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
            }
            else
            {
              v52 = &items->obj.klass + size;
              v21->fields._size = size + 1;
              v52[4] = (Il2CppClass *)v33;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v52 + 4), v33, v47, v48);
            }
          }
        }
      }
    }
  }
  v53 = Enumerator->klass;
  v54 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v55 = &v53->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      --v54;
      v55 += 4;
      if ( !v54 )
        goto LABEL_46;
    }
    v56 = (__int64)&v53->vtable[*v55].method;
  }
  else
  {
LABEL_46:
    v56 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v56)(Enumerator, *(_QWORD *)(v56 + 8));
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
  Il2CppObject *current; // x28
  void *monitor; // x21
  Il2CppClass *klass; // x22
  Il2CppObject v28; // q0
  int64_t v29; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4B03025 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantStorageMaster___, *(_QWORD *)&svtId);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor___76777560, v12);
    sub_1BC3008(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v14);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4B03025 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, *(const MethodInfo **)&svtId);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_57280308(
    v19,
    List,
    (const MethodInfo_36A0734 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76777560);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL
    || (Instance = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, v21), !v19) )
  {
    sub_1BC3264(Instance, v21);
  }
  System_Collections_Generic_List_object___AddRange(
    v19,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  v22 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v22,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    v19,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  *(_OWORD *)&v36.fields._list = *(_OWORD *)&v35.fields.currentCryptoKey;
  v36.fields._current = (Il2CppObject *)v35.fields.fakeValue;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v23 )
      break;
    current = v36.fields._current;
    if ( !v36.fields._current )
      sub_1BC3264(v23, v24);
    klass = v36.fields._current[5].klass;
    monitor = v36.fields._current[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v37.fields.currentCryptoKey = klass;
    *(_QWORD *)&v37.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v37, 0LL) == svtId
      && (BYTE4(current[18].monitor) & 2) == 0 )
    {
      v28 = current[2];
      *(Il2CppObject *)&v35.fields.currentCryptoKey = current[1];
      *(Il2CppObject *)&v35.fields.fakeValue = v28;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v34 = v35;
      v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v34, 0LL);
      if ( !v22 )
        sub_1BC3264(v29, v29);
      items = v22->fields._items;
      v31 = Method_System_Collections_Generic_List_long__Add__;
      ++v22->fields._version;
      if ( !items )
        sub_1BC3264(v29, v29);
      size = v22->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v22,
          v29,
          *(const MethodInfo_3688E74 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
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
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
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

  if ( (byte_4B03029 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__, *(_QWORD *)&svtId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__, v5);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    byte_4B03029 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
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
                                                                 (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( !list )
        break;
      v13 = list;
      monitor = list[3].monitor;
      items = list[3].fields.items;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v25.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v25.fields.fakeValue = items;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v25, 0LL) == svtId
        && (BYTE4(v13[12].monitor) & 4) == 0 )
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
          v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v23, 0LL);
          v20 = *(_OWORD *)&v13[1].monitor;
          *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&v13->fields.items;
          *(_OWORD *)&v22.fields.fakeValue = v20;
          if ( v19 > CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v22, 0LL) )
LABEL_14:
            v11 = v13;
        }
      }
      if ( v10 == ++v12 )
        return (UserServantEntity_o *)v11;
    }
LABEL_24:
    sub_1BC3264(list, *(_QWORD *)&svtId);
  }
  return 0LL;
}


void __fastcall UserServantMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B03032 & 1) == 0 )
  {
    sub_1BC3008(&UserServantMaster___c_TypeInfo, v1);
    byte_4B03032 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(UserServantMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserServantMaster___c_TypeInfo->static_fields->__9 = (struct UserServantMaster___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)UserServantMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall UserServantMaster___c___ctor(UserServantMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserServantMaster___c___GetServantHavintLimitMaxCount_b__35_0(
        UserServantMaster___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return !UserServantEntity__IsMaterialTd(x, (const MethodInfo *)x);
}


void __fastcall UserServantMaster___c__DisplayClass15_0___ctor(
        UserServantMaster___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserServantMaster___c__DisplayClass15_0___getSameSvtNpLvCache_b__0(
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
  if ( (byte_4B03033 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass15_0_o *)sub_1BC3008(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          m);
    byte_4B03033 = 1;
  }
  if ( !m || (e = v4->fields.e) == 0LL )
    sub_1BC3264(this, m);
  materialSvtId = m->fields.materialSvtId;
  v8 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v10, 0LL);
}


void __fastcall UserServantMaster___c__DisplayClass16_0___ctor(
        UserServantMaster___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserServantMaster___c__DisplayClass16_0___getNpUpServantList_b__0(
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
  if ( (byte_4B03034 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass16_0_o *)sub_1BC3008(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          m);
    byte_4B03034 = 1;
  }
  if ( !m || (e = v4->fields.e) == 0LL )
    sub_1BC3264(this, m);
  materialSvtId = m->fields.materialSvtId;
  v8 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v10, 0LL);
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
  if ( (byte_4B03035 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass1_0_o *)sub_1BC3008(
                                                         &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                         ent);
    byte_4B03035 = 1;
  }
  if ( !ent )
    sub_1BC3264(this, ent);
  v6 = *(_QWORD *)&ent->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&ent->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return v4->fields.svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v8, 0LL);
}


void __fastcall UserServantMaster___c__DisplayClass32_0___ctor(
        UserServantMaster___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserServantMaster___c__DisplayClass32_0___GetHaveServantSkillLevelMax_b__0(
        UserServantMaster___c__DisplayClass32_0_o *this,
        UserServantEntity_o *usrSvt,
        const MethodInfo *method)
{
  UserServantMaster___c__DisplayClass32_0_o *v4; // x19
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v4 = this;
  if ( (byte_4B03036 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass32_0_o *)sub_1BC3008(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          usrSvt);
    byte_4B03036 = 1;
  }
  if ( !usrSvt )
    sub_1BC3264(this, usrSvt);
  v6 = *(_QWORD *)&usrSvt->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&usrSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v8, 0LL) == v4->fields.svtId;
}


int32_t __fastcall UserServantMaster___c__DisplayClass32_0___GetHaveServantSkillLevelMax_b__1(
        UserServantMaster___c__DisplayClass32_0_o *this,
        UserServantEntity_o *a,
        UserServantEntity_o *b,
        const MethodInfo *method)
{
  UserServantMaster___c__DisplayClass32_0_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( !b
    || (v5 = this,
        this = (UserServantMaster___c__DisplayClass32_0_o *)UserServantEntity__getSkillLevel(
                                                              b,
                                                              this->fields.skillIdx,
                                                              (const MethodInfo *)b),
        !a) )
  {
    sub_1BC3264(this, a);
  }
  return (_DWORD)this - UserServantEntity__getSkillLevel(a, v5->fields.skillIdx, v6);
}


void __fastcall UserServantMaster___c__DisplayClass41_0___ctor(
        UserServantMaster___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserServantMaster___c__DisplayClass41_0___IsEquipCostume_b__0(
        UserServantMaster___c__DisplayClass41_0_o *this,
        UserServantEntity_o *usrSvt,
        const MethodInfo *method)
{
  UserServantMaster___c__DisplayClass41_0_o *v4; // x19
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v4 = this;
  if ( (byte_4B03037 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass41_0_o *)sub_1BC3008(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          usrSvt);
    byte_4B03037 = 1;
  }
  if ( !usrSvt )
    sub_1BC3264(this, usrSvt);
  v6 = *(_QWORD *)&usrSvt->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&usrSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v8, 0LL) == v4->fields.svtId;
}


bool __fastcall UserServantMaster___c__DisplayClass41_0___IsEquipCostume_b__1(
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
  if ( (byte_4B03038 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass41_0_o *)sub_1BC3008(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          x);
    byte_4B03038 = 1;
  }
  if ( !x )
    sub_1BC3264(this, x);
  dispLimitCountAfter = x->fields.dispLimitCountAfter;
  if ( !dispLimitCountAfter )
  {
    v7 = *(_QWORD *)&x->fields.dispLimitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&x->fields.dispLimitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v7;
    *(_QWORD *)&v9.fields.fakeValue = v6;
    dispLimitCountAfter = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v9, 0LL);
  }
  return dispLimitCountAfter == v4->fields.costumeId;
}


void __fastcall UserServantMaster___c__DisplayClass42_0___ctor(
        UserServantMaster___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserServantMaster___c__DisplayClass42_0___GetCanSelectToGrandList_b__0(
        UserServantMaster___c__DisplayClass42_0_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UserServantMaster___c__DisplayClass42_0_o *v5; // x20
  System_Collections_Generic_IEnumerable_TSource__o *classIds; // x21
  int32_t SvtClassId; // w0

  v5 = this;
  if ( (byte_4B03039 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass42_0_o *)sub_1BC3008(&Method_System_Linq_Enumerable_Contains_int___, e);
    byte_4B03039 = 1;
  }
  if ( !e )
    goto LABEL_8;
  classIds = (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.classIds;
  SvtClassId = UserServantEntity__getSvtClassId(e, 0, 0, v3);
  if ( System_Linq_Enumerable__Contains_int_(
         classIds,
         SvtClassId,
         (const MethodInfo_301AE3C *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    this = (UserServantMaster___c__DisplayClass42_0_o *)v5->fields.grandGraphEntity;
    if ( this )
      return GrandGraphEntity__CanSelectToGrand((GrandGraphEntity_o *)this, e, 0LL);
LABEL_8:
    sub_1BC3264(this, e);
  }
  return 0;
}