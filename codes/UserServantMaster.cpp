void UserServantMaster___ctor(UserServantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF6B0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__);
    byte_4CEF6B0 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    14,
    (const MethodInfo_342E534 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__);
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
    sub_1C7BD40(0, v8);
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
    sub_1C7BD40(0, v7);
  return v5 + count > SelfUserGame->fields.svtKeep;
}


void UserServantMaster__ClearEntityCache(UserServantMaster_o *this, int64_t userSvtId, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  Il2CppObject *v13; // x19
  GrandQuestFolderBoardItem_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEF6B2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    byte_4CEF6B2 = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         userSvtId,
         (const MethodInfo_34308A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( v5 )
  {
    v13 = entity;
    if ( !entity )
      sub_1C7BD40(v5, v6);
    v14 = (GrandQuestFolderBoardItem_o *)&entity[20];
    *(__int64 *)((char *)&qword_140 + (_QWORD)entity) = 0;
    sub_1C7BA8C(v14, 0, v7, v8, v9, v10, v11, v12);
    *(__int64 *)((char *)&qword_148 + (_QWORD)v13) = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v13[20].monitor, 0, v15, v16, v17, v18, v19, v20);
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
  const MethodInfo *v20; // x2
  __int64 v21; // x26
  __int64 v22; // x27
  int32_t v23; // w26
  __int64 v24; // x26
  __int64 v25; // x27
  int32_t v26; // w26
  int64_t createdAt; // x8
  int64_t v28; // x9
  __int128 v29; // q0
  int64_t v30; // x0
  __int128 v31; // q1
  const MethodInfo *v32; // x3
  bool v34; // [xsp+4h] [xbp-ECh]
  UserServantEntity_o *v35; // [xsp+8h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+30h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+70h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4CEF6C8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&UserServantEntity_TypeInfo);
    byte_4CEF6C8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_55;
  v34 = checkStorage;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  if ( Count >= 1 )
  {
    v35 = 0;
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
                                                                 (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( !list )
        break;
      v13 = *(_OWORD *)&list[2].fields.items;
      v14 = (UserServantEntity_o *)list;
      *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&list[2].klass;
      *(_OWORD *)&v39.fields.fakeValue = v13;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v38 = v39;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v38, 0) == userIdNumber )
      {
        v16 = *(_QWORD *)&v14->fields.svtId.fields.currentCryptoKey;
        v15 = *(_QWORD *)&v14->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v40.fields.currentCryptoKey = v16;
        *(_QWORD *)&v40.fields.fakeValue = v15;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v40, 0) == svtId )
        {
          if ( (v14->fields.status & 4) != 0 )
          {
            v35 = v14;
          }
          else if ( v11 )
          {
            v18 = *(_QWORD *)&v14->fields.limitCount.fields.currentCryptoKey;
            v17 = *(_QWORD *)&v14->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v41.fields.currentCryptoKey = v18;
            *(_QWORD *)&v41.fields.fakeValue = v17;
            v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v41, 0);
            if ( v19 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v11->fields.limitCount, 0)
              || v14->fields.lv > v11->fields.lv )
            {
              goto LABEL_26;
            }
            v22 = *(_QWORD *)&v14->fields.limitCount.fields.currentCryptoKey;
            v21 = *(_QWORD *)&v14->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v42.fields.currentCryptoKey = v22;
            *(_QWORD *)&v42.fields.fakeValue = v21;
            v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v42, 0);
            if ( v23 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v11->fields.limitCount, 0)
              && v14->fields.lv == v11->fields.lv
              && (v14->fields.status & 0x40) == 0
              && (v11->fields.status & 0x40) != 0 )
            {
              goto LABEL_26;
            }
            v25 = *(_QWORD *)&v14->fields.limitCount.fields.currentCryptoKey;
            v24 = *(_QWORD *)&v14->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v43.fields.currentCryptoKey = v25;
            *(_QWORD *)&v43.fields.fakeValue = v24;
            v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v43, 0);
            if ( v26 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v11->fields.limitCount, 0)
              && v14->fields.lv == v11->fields.lv )
            {
              createdAt = v14->fields.createdAt;
              v28 = v11->fields.createdAt;
              if ( createdAt < v28 )
                goto LABEL_26;
              if ( createdAt == v28 )
              {
                v29 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
                *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v39.fields.fakeValue = v29;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v37 = v39;
                v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v37, 0);
                v31 = *(_OWORD *)&v11->fields.id.fields.fakeValue;
                *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&v11->fields.id.fields.currentCryptoKey;
                *(_OWORD *)&v36.fields.fakeValue = v31;
                if ( v30 < CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v36, 0) )
                {
LABEL_26:
                  v11 = (UserServantEntity_o *)sub_1C7BD34(UserServantEntity_TypeInfo);
                  UserServantEntity___ctor_43695236(v11, v14, v20);
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
    sub_1C7BD40(list, *(_QWORD *)&svtId);
  }
  v35 = 0;
  v11 = 0;
LABEL_48:
  if ( v34 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !list )
      goto LABEL_55;
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)list,
                                                               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !list )
      goto LABEL_55;
    v11 = UserServantStorageMaster__CostumeTargetEntity((UserServantStorageMaster_o *)list, svtId, v11, v32);
  }
  if ( v11 )
    return v11;
  else
    return v35;
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
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v41; // x22
  unsigned __int64 i; // x25
  __int64 v43; // x29
  __int128 v44; // q0
  int64_t v45; // x23
  __int64 v46; // x23
  __int64 v47; // x24
  __int64 v48; // x23
  __int64 v49; // x24
  __int64 v50; // x23
  __int64 v51; // x24
  struct System_Int32_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  UserServantStorageMaster_o *v56; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+50h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_4CEF6B9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF6B9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
  v56 = (UserServantStorageMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_86;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v7);
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
      v12 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v16 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8));
    v18 = v17;
    if ( v17 )
    {
      v19 = *(_OWORD *)(v17 + 64);
      *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(v17 + 48);
      *(_OWORD *)&v59.fields.fakeValue = v19;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v58 = v59;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v58, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CE827C )
      {
        sub_1C7BAE8(&NetworkManager_TypeInfo);
        byte_4CE827C = 1;
      }
      v21 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v21 = NetworkManager_TypeInfo;
      }
      if ( v20 == v21->static_fields->userIdNumber && (*(_BYTE *)(v18 + 300) & 4) == 0 )
      {
        v23 = *(_QWORD *)(v18 + 80);
        v22 = *(_QWORD *)(v18 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v60.fields.currentCryptoKey = v23;
        *(_QWORD *)&v60.fields.fakeValue = v22;
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v60, 0);
        if ( !MasterData_object )
          sub_1C7BD40(v24, (unsigned int)v24);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v24,
                   (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_1C7BD40(0, v26);
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0) )
        {
          v28 = *(_QWORD *)(v18 + 80);
          v27 = *(_QWORD *)(v18 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v61.fields.currentCryptoKey = v28;
          *(_QWORD *)&v61.fields.fakeValue = v27;
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v61, 0);
          if ( !v6 )
            sub_1C7BD40(v29, (unsigned int)v29);
          if ( !System_Collections_Generic_List_int___Contains(
                  v6,
                  v29,
                  (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            v31 = *(_QWORD *)(v18 + 80);
            v30 = *(_QWORD *)(v18 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v62.fields.currentCryptoKey = v31;
            *(_QWORD *)&v62.fields.fakeValue = v30;
            v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v62, 0);
            items = v6->fields._items;
            v34 = Method_System_Collections_Generic_List_int__Add__;
            ++v6->fields._version;
            if ( !items )
              sub_1C7BD40(v32, (unsigned int)v32);
            size = v6->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v6,
                v32,
                *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
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
    v39 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  Instance = (DataManager_o *)v56;
  if ( !v56 || (Instance = (DataManager_o *)UserServantStorageMaster__getList(v56, v4)) == 0 )
LABEL_86:
    sub_1C7BD40(Instance, v4);
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v41 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1C7BD48(Instance);
      v43 = *((_QWORD *)&v41->fields._DispLog + i);
      if ( v43 )
      {
        v44 = *(_OWORD *)(v43 + 64);
        *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(v43 + 48);
        *(_OWORD *)&v59.fields.fakeValue = v44;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v57 = v59;
        v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v57, 0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CE827C )
        {
          sub_1C7BAE8(&NetworkManager_TypeInfo);
          byte_4CE827C = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        if ( v45 == *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL) )
        {
          v47 = *(_QWORD *)(v43 + 80);
          v46 = *(_QWORD *)(v43 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v63.fields.currentCryptoKey = v47;
          *(_QWORD *)&v63.fields.fakeValue = v46;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v63, 0);
          if ( !v6 )
            goto LABEL_86;
          Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                        v6,
                                        (int32_t)Instance,
                                        (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)Instance & 1) == 0 && (*(_BYTE *)(v43 + 300) & 4) == 0 )
          {
            v49 = *(_QWORD *)(v43 + 80);
            v48 = *(_QWORD *)(v43 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v64.fields.currentCryptoKey = v49;
            *(_QWORD *)&v64.fields.fakeValue = v48;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v64, 0);
            if ( !MasterData_object )
              goto LABEL_86;
            Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                          (int32_t)Instance,
                                          (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              goto LABEL_86;
            Instance = (DataManager_o *)ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              v51 = *(_QWORD *)(v43 + 80);
              v50 = *(_QWORD *)(v43 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v65.fields.currentCryptoKey = v51;
              *(_QWORD *)&v65.fields.fakeValue = v50;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v65, 0);
              v52 = v6->fields._items;
              v53 = Method_System_Collections_Generic_List_int__Add__;
              ++v6->fields._version;
              if ( !v52 )
                goto LABEL_86;
              v54 = v6->fields._size;
              if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v6,
                  (int32_t)Instance,
                  *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
              }
              else
              {
                v6->fields._size = v54 + 1;
                v52->m_Items[v54] = (int)Instance;
              }
            }
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v41->fields.m_CancellationTokenSource;
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4CEF6C9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF6C9 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
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
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v10 = *(_OWORD *)(Instance + 64);
        v11 = Instance;
        *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v26.fields.fakeValue = v10;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v25 = v26;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v25, 0);
        if ( Instance == v6 && (*(_BYTE *)(v11 + 300) & 4) == 0 )
        {
          v13 = *(_QWORD *)(v11 + 80);
          v12 = *(_QWORD *)(v11 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v27.fields.currentCryptoKey = v13;
          *(_QWORD *)&v27.fields.fakeValue = v12;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v27, 0);
          if ( !MasterData_object )
            break;
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                Instance,
                                (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            break;
          Instance = ServantEntity__get_IsCombineMaterial((ServantEntity_o *)Instance, 0);
          if ( (Instance & 1) != 0 && (*(_BYTE *)(v11 + 300) & 0x11) == 0 )
          {
            if ( !v8 )
              break;
            items = v8->fields._items;
            v21 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v8->fields._version;
            if ( !items )
              break;
            size = v8->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                (Il2CppObject *)v11,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v11;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v23 + 4), v11, v14, v15, v16, v17, v18, v19);
            }
          }
        }
      }
      if ( Count == ++v9 )
        goto LABEL_31;
    }
LABEL_33:
    sub_1C7BD40(Instance, v4);
  }
LABEL_31:
  if ( !v8 )
    goto LABEL_33;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *UserServantMaster__GetEntities(
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
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-70h]

  if ( (byte_4CEF6CE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__Contains__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CEF6CE = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( userServantIds && userServantIds->fields._size >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_40;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   list,
                   (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
    if ( !Enumerator )
      sub_1C7BD40(0, v8);
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
        v13 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
        v17 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0);
      }
      v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
              Enumerator,
              *(_QWORD *)(v17 + 8));
      v19 = (Il2CppObject *)v18;
      if ( v18 )
      {
        v20 = *(_OWORD *)(v18 + 32);
        *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v18 + 16);
        *(_OWORD *)&v40.fields.fakeValue = v20;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v39 = v40;
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v39, 0);
        v22 = System_Collections_Generic_List_long___Contains(
                userServantIds,
                v21,
                (const MethodInfo_38271A8 *)Method_System_Collections_Generic_List_long__Contains__);
        if ( v22 )
        {
          if ( !v5 )
            sub_1C7BD40(v22, v23);
          items = v5->fields._items;
          v31 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            sub_1C7BD40(v22, v23);
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v19,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v19;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)v19, v24, v25, v26, v27, v28, v29);
          }
        }
      }
    }
    v34 = Enumerator->klass;
    v35 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_33;
      }
      v37 = (__int64)&v34->vtable[*v36];
    }
    else
    {
LABEL_33:
      v37 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
                                                               Enumerator,
                                                               *(_QWORD *)(v37 + 8));
  }
  if ( !v5 )
LABEL_40:
    sub_1C7BD40(list, v7);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  const MethodInfo *v15; // x2

  if ( (byte_4CEF6CA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_FindAll_UserServantEntity___);
    sub_1C7BAE8(&Method_System_Array_Sort_UserServantEntity___);
    sub_1C7BAE8(&System_Comparison_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Predicate_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&Method_UserServantMaster___c__DisplayClass29_0__GetHaveServantSkillLevelMax_b__0__);
    sub_1C7BAE8(&Method_UserServantMaster___c__DisplayClass29_0__GetHaveServantSkillLevelMax_b__1__);
    sub_1C7BAE8(&UserServantMaster___c__DisplayClass29_0_TypeInfo);
    byte_4CEF6CA = 1;
  }
  v7 = sub_1C7BD34(UserServantMaster___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_10;
  *(_DWORD *)(v7 + 16) = svtId;
  *(_DWORD *)(v7 + 20) = skillIdx;
  AllList = (System_Object_array *)UserServantMaster__getAllList(this, v9);
  v11 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_UserServantEntity__TypeInfo);
  System_Predicate_object____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_UserServantMaster___c__DisplayClass29_0__GetHaveServantSkillLevelMax_b__0__,
    0);
  All_object = (UserServantEntity_o *)System_Array__FindAll_object_(
                                        AllList,
                                        (System_Predicate_T__o *)v11,
                                        (const MethodInfo_32737F4 *)Method_System_Array_FindAll_UserServantEntity___);
  if ( !All_object )
    goto LABEL_10;
  v12 = All_object;
  if ( All_object->fields.id.fields.hiddenValue )
  {
    v13 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_object____ctor(
      v13,
      (Il2CppObject *)v7,
      Method_UserServantMaster___c__DisplayClass29_0__GetHaveServantSkillLevelMax_b__1__,
      0);
    System_Array__Sort_object__51627360(
      (System_Object_array *)v12,
      v13,
      (const MethodInfo_313C560 *)Method_System_Array_Sort_UserServantEntity___);
    if ( !LODWORD(v12->fields.id.fields.hiddenValue) )
      sub_1C7BD48(v14);
    All_object = (UserServantEntity_o *)v12->fields.id.fields.fakeValue;
    if ( All_object )
      return UserServantEntity__getSkillLevel(All_object, *(_DWORD *)(v7 + 20), v15);
LABEL_10:
    sub_1C7BD40(All_object, v9);
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

  if ( (byte_4CEF6C2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&System_Math_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF6C2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___),
        AllList = UserServantMaster__getAllList(this, v8),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0
    || (Instance = (Il2CppObject *)UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Instance, 1, servantId, 0),
        !AllList) )
  {
LABEL_21:
    sub_1C7BD40(Instance, v6);
  }
  max_length = AllList->max_length;
  v11 = (unsigned __int8)Instance & 1;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C7BD48(Instance);
      v13 = AllList->m_Items[i];
      if ( v13 )
      {
        v15 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
        v14 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v18.fields.currentCryptoKey = v15;
        *(_QWORD *)&v18.fields.fakeValue = v14;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v18, 0);
        if ( !MasterData_object )
          goto LABEL_21;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_21;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                     (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Instance[2],
                                     0);
        if ( (_DWORD)Instance == servantId )
        {
          treasureDeviceLv1 = v13->fields.treasureDeviceLv1;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          Instance = (Il2CppObject *)System_Math__Max_65698740(v11, treasureDeviceLv1, 0);
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

  if ( (byte_4CEF6C0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF6C0 = 1;
  }
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
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
      sub_1C7BD48(Instance);
    v15 = v12->m_Items[v14];
    if ( v15 )
    {
      v17 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
      v16 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v19.fields.currentCryptoKey = v17;
      *(_QWORD *)&v19.fields.fakeValue = v16;
      Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v19, 0);
      if ( !MasterData_object )
        goto LABEL_23;
      Instance = (UserServantEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                              (int32_t)Instance,
                                              (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_23;
      Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
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
    Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
      if ( Instance )
      {
        v13 += UserPresentBoxMaster__GetCount((UserPresentBoxMaster_o *)Instance, 1, servantId, 0);
        return v13;
      }
    }
LABEL_23:
    sub_1C7BD40(Instance, v8);
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
  int v11; // w24
  unsigned __int64 v12; // x25
  UserServantEntity_o *v13; // x29
  __int64 v14; // x22
  __int64 v15; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4CEF6C1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF6C1 = 1;
  }
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
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
        sub_1C7BD48(Instance);
      v13 = v10->m_Items[v12];
      if ( v13 )
      {
        v15 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
        v14 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v17.fields.currentCryptoKey = v15;
        *(_QWORD *)&v17.fields.fakeValue = v14;
        Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                v17,
                                                0);
        if ( !MasterData_object )
          goto LABEL_23;
        Instance = (UserServantEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                (int32_t)Instance,
                                                (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_23;
        Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance->m_Items,
                                                0);
        if ( (_DWORD)Instance == servantId && (v13->fields.status & 4) == 0 )
          v11 += v13->fields.treasureDeviceLv1;
      }
      LODWORD(max_length) = v10->max_length;
      if ( (__int64)++v12 >= (int)max_length )
        goto LABEL_19;
    }
  }
  v11 = 0;
LABEL_19:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (UserServantEntity_array *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !Instance )
LABEL_23:
    sub_1C7BD40(Instance, v6);
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
  Il2CppObject *MasterData_object; // x22
  NetworkManager_c *v9; // x0
  int64_t userIdNumber; // x27
  UserServantEntity_array *AllList; // x0
  UserServantMaster___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_object__bool__o *_9__32_0; // x21
  Il2CppObject *v15; // x23
  struct UserServantMaster___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  DataManager_c *klass; // x8
  DataManager_o *v24; // x19
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x19
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x23
  __int128 v40; // q0
  __int64 v41; // x24
  __int64 v42; // x25
  __int64 v43; // x0
  Il2CppObject *Entity; // x0
  __int64 v45; // x1
  Il2CppObject *v46; // x24
  __int64 v47; // x23
  __int64 v48; // x25
  int32_t v49; // w0
  int v50; // w8
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  int32_t v56; // [xsp+Ch] [xbp-A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_4CEF6CC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_1C7BAE8(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__32_0__);
    sub_1C7BAE8(&UserServantMaster___c_TypeInfo);
    byte_4CEF6CC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
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
  _9__32_0 = (System_Func_object__bool__o *)v12->static_fields->__9__32_0;
  if ( !_9__32_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = UserServantMaster___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__32_0 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_UserServantEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__32_0,
      v15,
      Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__32_0__,
      0);
    static_fields = UserServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Func_UserServantEntity__bool__o *)_9__32_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__32_0,
      (int32_t)_9__32_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  Instance = (DataManager_o *)System_Linq_Enumerable__Where_object_(
                                v13,
                                (System_Func_TSource__bool__o *)_9__32_0,
                                (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  if ( !Instance )
LABEL_62:
    sub_1C7BD40(Instance, v6);
  klass = Instance->klass;
  v24 = Instance;
  v25 = *(unsigned __int16 *)&Instance->klass->_2.rank;
  if ( *(_WORD *)&Instance->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_UserServantEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo )
    {
      --v25;
      p_offset += 4;
      if ( !v25 )
        goto LABEL_21;
    }
    v27 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_21:
    v27 = sub_1C51E70(Instance, System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, 0);
  }
  v29 = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
  if ( !v29 )
    sub_1C7BD40(0, v28);
  v56 = 0;
  while ( 1 )
  {
    v30 = *(_QWORD *)v29;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v32 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_29;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_29:
      v33 = sub_1C51E70(v29, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v29, *(_QWORD *)(v33 + 8)) & 1) == 0 )
      break;
    v34 = *(_QWORD *)v29;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v36 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_36;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_36:
      v37 = sub_1C51E70(v29, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0);
    }
    v38 = (*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v29, *(_QWORD *)(v37 + 8));
    v39 = v38;
    if ( v38 )
    {
      v40 = *(_OWORD *)(v38 + 64);
      *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)(v38 + 48);
      *(_OWORD *)&v58.fields.fakeValue = v40;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v57 = v58;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v57, 0) == userIdNumber
        && (*(_BYTE *)(v39 + 300) & 4) == 0 )
      {
        v42 = *(_QWORD *)(v39 + 80);
        v41 = *(_QWORD *)(v39 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v59.fields.currentCryptoKey = v42;
        *(_QWORD *)&v59.fields.fakeValue = v41;
        v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v59, 0);
        if ( !MasterData_object )
          sub_1C7BD40(v43, (unsigned int)v43);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v43,
                   (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v46 = Entity;
        if ( !Entity )
          sub_1C7BD40(0, v45);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
               (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[2],
               0) == servantId )
        {
          v48 = *(_QWORD *)(v39 + 96);
          v47 = *(_QWORD *)(v39 + 104);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v60.fields.currentCryptoKey = v48;
          *(_QWORD *)&v60.fields.fakeValue = v47;
          v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v60, 0);
          v50 = v56;
          if ( v49 == LODWORD(v46[5].monitor) )
            v50 = v56 + 1;
          v56 = v50;
        }
      }
    }
  }
  v51 = *(_QWORD *)v29;
  v52 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
  {
    v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_57;
    }
    v54 = v51 + 16LL * *v53 + 312;
  }
  else
  {
LABEL_57:
    v54 = sub_1C51E70(v29, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v54)(v29, *(_QWORD *)(v54 + 8));
  return v56;
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

  if ( (byte_4CEF6CD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF6CD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
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
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
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
               (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Item )
      {
        v12 = Item[4];
        v13 = Item;
        *(Il2CppObject *)&v20.fields.currentCryptoKey = Item[3];
        *(Il2CppObject *)&v20.fields.fakeValue = v12;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v19 = v20;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v19, 0) == v6
          && (BYTE4(v13[18].monitor) & 4) == 0 )
        {
          klass = v13[5].klass;
          monitor = v13[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v21.fields.currentCryptoKey = klass;
          *(_QWORD *)&v21.fields.fakeValue = monitor;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v21, 0);
          if ( !MasterData_object )
            break;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    sub_1C7BD40(Instance, v4);
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
  const MethodInfo *v10; // x1
  System_Object_array *AllList; // x19
  System_Predicate_object__o *v12; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_4CEF6D1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_FindAll_UserServantEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____78834472);
    sub_1C7BAE8(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C7BAE8(&ImageLimitCount_TypeInfo);
    sub_1C7BAE8(&System_Predicate_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&Method_UserServantMaster___c__DisplayClass37_0__IsEquipCostume_b__0__);
    sub_1C7BAE8(&Method_UserServantMaster___c__DisplayClass37_0__IsEquipCostume_b__1__);
    sub_1C7BAE8(&UserServantMaster___c__DisplayClass37_0_TypeInfo);
    byte_4CEF6D1 = 1;
  }
  v7 = sub_1C7BD34(UserServantMaster___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_10;
  *(_DWORD *)(v7 + 16) = svtId;
  *(_DWORD *)(v7 + 20) = costumeId;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  *(_DWORD *)(v7 + 20) = ImageLimitCount__ConvertDispLimitCountForClient(costumeId, 0);
  AllList = (System_Object_array *)UserServantMaster__getAllList(this, v10);
  v12 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_UserServantEntity__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_UserServantMaster___c__DisplayClass37_0__IsEquipCostume_b__0__,
    0);
  All_object = System_Array__FindAll_object_(
                 AllList,
                 (System_Predicate_T__o *)v12,
                 (const MethodInfo_32737F4 *)Method_System_Array_FindAll_UserServantEntity___);
  if ( !All_object )
LABEL_10:
    sub_1C7BD40(All_object, v9);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)All_object;
  if ( !All_object->max_length )
    return 0;
  v14 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v7,
    Method_UserServantMaster___c__DisplayClass37_0__IsEquipCostume_b__1__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_object__52006308(
           v13,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_3198DA4 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____78834472) != 0;
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4CEF6B1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____78834472);
    sub_1C7BAE8(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C7BAE8(&Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__);
    sub_1C7BAE8(&UserServantMaster___c__DisplayClass1_0_TypeInfo);
    byte_4CEF6B1 = 1;
  }
  v7 = (Il2CppObject *)sub_1C7BD34(UserServantMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor(v7, 0);
  if ( !v7 )
    sub_1C7BD40(v8, v9);
  v7[1].klass = (Il2CppClass *)svtId;
  List = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getList(this, v9);
  v11 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    v7,
    Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__,
    0);
  v12 = System_Linq_Enumerable__FirstOrDefault_object__52006308(
          List,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_3198DA4 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____78834472);
  *svtEnt = (UserServantEntity_o *)v12;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)svtEnt, (int32_t)v12, v13, v14, v15, v16, v17, v18);
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
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  System_Collections_ObjectModel_Collection_T__c *v47; // x8
  System_Collections_ObjectModel_Collection_T__o *v48; // x22
  unsigned __int64 v49; // x26
  Il2CppObject *v50; // x23
  void *v51; // x24
  Il2CppClass *v52; // x25
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_4CEF6CF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantStorageMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEF6CF = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v11);
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
      v16 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v20 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0);
    }
    v22 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                            Enumerator,
                            *(_QWORD *)(v20 + 8));
    if ( !v22 )
      sub_1C7BD40(0, v21);
    v24 = v22[5].klass;
    monitor = v22[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v59.fields.currentCryptoKey = v24;
    *(_QWORD *)&v59.fields.fakeValue = monitor;
    v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v59, 0);
    if ( (_DWORD)v25 == svtId )
    {
      if ( !v8 )
        sub_1C7BD40(v25, v26);
      items = v8->fields._items;
      v34 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++v8->fields._version;
      if ( !items )
        sub_1C7BD40(v25, v26);
      size = v8->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          v22,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v22;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v36 + 4), (int32_t)v22, v27, v28, v29, v30, v31, v32);
      }
    }
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_31;
    }
    v40 = (__int64)&v37->vtable[*v39];
  }
  else
  {
LABEL_31:
    v40 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  if ( isIncludeStorage )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)UserServantStorageMaster__getList(
                                                                 (UserServantStorageMaster_o *)list,
                                                                 v9);
      if ( list )
      {
        v47 = list[1].klass;
        v48 = list;
        if ( (int)v47 >= 1 )
        {
          v49 = 0;
          while ( 1 )
          {
            if ( v49 >= (unsigned int)v47 )
              sub_1C7BD48(list);
            v50 = (Il2CppObject *)*((_QWORD *)&v48[1].monitor + v49);
            if ( v50 )
            {
              v52 = v50[5].klass;
              v51 = v50[5].monitor;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v60.fields.currentCryptoKey = v52;
              *(_QWORD *)&v60.fields.fakeValue = v51;
              list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                                         v60,
                                                                         0);
              if ( (_DWORD)list == svtId )
              {
                if ( !v8 )
                  goto LABEL_57;
                v53 = v8->fields._items;
                v54 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v8->fields._version;
                if ( !v53 )
                  goto LABEL_57;
                v55 = v8->fields._size;
                if ( (unsigned int)v55 >= LODWORD(v53->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v8,
                    v50,
                    *(const MethodInfo_383EDFC **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
                }
                else
                {
                  v56 = &v53->obj.klass + v55;
                  v8->fields._size = v55 + 1;
                  v56[4] = (Il2CppClass *)v50;
                  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v56 + 4), (int32_t)v50, v41, v42, v43, v44, v45, v46);
                }
              }
            }
            LODWORD(v47) = v48[1].klass;
            if ( (__int64)++v49 >= (int)v47 )
              goto LABEL_51;
          }
        }
        goto LABEL_51;
      }
    }
LABEL_57:
    sub_1C7BD40(list, v9);
  }
LABEL_51:
  *userServantList = (System_Collections_Generic_List_UserServantEntity__o *)v8;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)userServantList, (int32_t)v8, v41, v42, v43, v44, v45, v46);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  il2cpp_array_size_t max_length; // x8
  UserServantEntity_array *v16; // x22
  unsigned __int64 v17; // x26
  Il2CppObject *v18; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4CEF6D0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantStorageMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEF6D0 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantEntity_array *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
  if ( !Master_object )
    goto LABEL_23;
  Master_object = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Master_object, v8);
  if ( !Master_object )
    goto LABEL_23;
  max_length = Master_object->max_length;
  v16 = Master_object;
  if ( (int)max_length >= 1 )
  {
    v17 = 0;
    do
    {
      if ( v17 >= (unsigned int)max_length )
        sub_1C7BD48(Master_object);
      v18 = (Il2CppObject *)v16->m_Items[v17];
      if ( v18 )
      {
        klass = v18[5].klass;
        monitor = v18[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v26.fields.currentCryptoKey = klass;
        *(_QWORD *)&v26.fields.fakeValue = monitor;
        Master_object = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                                     v26,
                                                     0);
        if ( (_DWORD)Master_object == svtId )
        {
          if ( !v6 )
            goto LABEL_23;
          items = v6->fields._items;
          v22 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v6->fields._version;
          if ( !items )
            goto LABEL_23;
          size = v6->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              v18,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v18;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v18, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      LODWORD(max_length) = v16->max_length;
    }
    while ( (__int64)++v17 < (int)max_length );
  }
  *userStorageServantList = (System_Collections_Generic_List_UserServantEntity__o *)v6;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)userStorageServantList, (int32_t)v6, v9, v10, v11, v12, v13, v14);
  if ( !*userStorageServantList )
LABEL_23:
    sub_1C7BD40(Master_object, v8);
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

  if ( (byte_4CEF6C4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&UserServantNewManager_TypeInfo);
    byte_4CEF6C4 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_30;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
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
                        (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( list )
      {
        v9 = *(_OWORD *)(list + 64);
        v10 = list;
        *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)(list + 48);
        *(_OWORD *)&v18.fields.fakeValue = v9;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v17 = v18;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v17, 0);
        if ( list == v7 && (*(_BYTE *)(v10 + 300) & 4) == 0 )
        {
          v11 = *(_OWORD *)(v10 + 32);
          *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)(v10 + 16);
          *(_OWORD *)&v18.fields.fakeValue = v11;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v16 = v18;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v16, 0);
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
              *(const MethodInfo_3826E30 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = size + 1;
            items->m_Items[size] = list;
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_26;
    }
LABEL_30:
    sub_1C7BD40(list, v4);
  }
LABEL_26:
  if ( !v3 )
    goto LABEL_30;
  v15 = System_Collections_Generic_List_long___ToArray(
          v3,
          (const MethodInfo_38288E8 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  UserServantNewManager__SetOld_44174592(v15, 0);
}


UserServantEntity_array *UserServantMaster__getAllList(UserServantMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *List; // x20
  System_Collections_Generic_List_object__o *v4; // x19
  UserServantEntity_array *Instance; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4CEF6C6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor___78759040);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF6C6 = 1;
  }
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, method);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_58975984(
    v4,
    List,
    (const MethodInfo_383E6F0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___78759040);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0
    || (Instance = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, v6), !v4) )
  {
    sub_1C7BD40(Instance, v6);
  }
  System_Collections_Generic_List_object___AddRange(
    v4,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v4,
                                      (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4CEF6C5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF6C5 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
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
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v10 = *(_OWORD *)(Instance + 64);
        v11 = Instance;
        *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v27.fields.fakeValue = v10;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v26 = v27;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v26, 0);
        if ( Instance == v6 && (*(_BYTE *)(v11 + 300) & 4) == 0 )
        {
          v13 = *(_QWORD *)(v11 + 80);
          v12 = *(_QWORD *)(v11 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v28.fields.currentCryptoKey = v13;
          *(_QWORD *)&v28.fields.fakeValue = v12;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v28, 0);
          if ( !MasterData_object )
            break;
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                Instance,
                                (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
              v22 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v8->fields._version;
              if ( !items )
                break;
              size = v8->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  (Il2CppObject *)v11,
                  *(const MethodInfo_383EDFC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                v24 = &items->obj.klass + size;
                v8->fields._size = size + 1;
                v24[4] = (Il2CppClass *)v11;
                sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v24 + 4), v11, v15, v16, v17, v18, v19, v20);
              }
            }
          }
        }
      }
      if ( Count == ++v9 )
        goto LABEL_31;
    }
LABEL_33:
    sub_1C7BD40(Instance, v4);
  }
LABEL_31:
  if ( !v8 )
    goto LABEL_33;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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

  if ( (byte_4CEF6B3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF6B3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
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
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
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
               (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Item )
      {
        v17 = Item[4];
        v18 = Item;
        *(Il2CppObject *)&v28.fields.currentCryptoKey = Item[3];
        *(Il2CppObject *)&v28.fields.fakeValue = v17;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v27 = v28;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v27, 0) == v11
          && (BYTE4(v18[18].monitor) & 4) == 0 )
        {
          klass = v18[5].klass;
          monitor = v18[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v29.fields.currentCryptoKey = klass;
          *(_QWORD *)&v29.fields.fakeValue = monitor;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v29, 0);
          if ( !MasterData_object )
            break;
          ++v14;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    sub_1C7BD40(Instance, v9);
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

  if ( (byte_4CEF6B4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF6B4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
LABEL_32:
    sub_1C7BD40(Instance, v8);
  v10 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
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
               (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Item )
      {
        v16 = Item[4];
        v17 = Item;
        *(Il2CppObject *)&v25.fields.currentCryptoKey = Item[3];
        *(Il2CppObject *)&v25.fields.fakeValue = v16;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v24 = v25;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v24, 0) == v10
          && (BYTE4(v17[18].monitor) & 4) == 0 )
        {
          klass = v17[5].klass;
          monitor = v17[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v26.fields.currentCryptoKey = klass;
          *(_QWORD *)&v26.fields.fakeValue = monitor;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v26, 0);
          if ( !MasterData_object )
            goto LABEL_32;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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

  if ( (byte_4CEF6C3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEF6C3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
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
               (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Item )
      {
        v10 = (UserServantEntity_o *)Item;
        klass = Item[5].klass;
        monitor = Item[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v14.fields.currentCryptoKey = klass;
        *(_QWORD *)&v14.fields.fakeValue = monitor;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v14, 0) == heroineId
          && UserServantEntity__IsHeroine(v10, *(const MethodInfo **)&heroineId) )
        {
          return v10;
        }
      }
      if ( v7 == ++v8 )
        return 0;
    }
LABEL_15:
    sub_1C7BD40(list, *(_QWORD *)&heroineId);
  }
  return 0;
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4CEF6BB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF6BB = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
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
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v10 = *(_OWORD *)(Instance + 64);
        v11 = Instance;
        *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v26.fields.fakeValue = v10;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v25 = v26;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v25, 0);
        if ( Instance == v6 && (*(_BYTE *)(v11 + 300) & 4) == 0 )
        {
          v13 = *(_QWORD *)(v11 + 80);
          v12 = *(_QWORD *)(v11 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v27.fields.currentCryptoKey = v13;
          *(_QWORD *)&v27.fields.fakeValue = v12;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v27, 0);
          if ( !MasterData_object )
            break;
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                Instance,
                                (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            break;
          Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( !v8 )
              break;
            items = v8->fields._items;
            v21 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v8->fields._version;
            if ( !items )
              break;
            size = v8->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                (Il2CppObject *)v11,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v11;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v23 + 4), v11, v14, v15, v16, v17, v18, v19);
            }
          }
        }
      }
      if ( Count == ++v9 )
        goto LABEL_30;
    }
LABEL_32:
    sub_1C7BD40(Instance, v4);
  }
LABEL_30:
  if ( !v8 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *UserServantMaster__getList(UserServantMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0

  if ( (byte_4CEF6B5 & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CEF6B5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  return UserServantMaster__getList_43756996(this, v4->static_fields->userIdNumber, v2);
}


UserServantEntity_array *UserServantMaster__getList_43756996(
        UserServantMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v7; // x21
  int32_t v8; // w23
  __int128 v9; // q0
  int64_t v10; // x24
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+20h] [xbp-70h]

  if ( (byte_4CEF6B6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CEF6B6 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                        (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( list )
      {
        v9 = *(_OWORD *)(list + 64);
        v10 = list;
        *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)(list + 48);
        *(_OWORD *)&v23.fields.fakeValue = v9;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v22 = v23;
        list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v22, 0);
        if ( list == userId && (*(_BYTE *)(v10 + 300) & 4) == 0 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v18 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)v10,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v10;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v20 + 4), v10, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1C7BD40(list, userId);
  }
LABEL_18:
  if ( !v7 )
    goto LABEL_20;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v7,
                                      (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  Il2CppObject **v22; // x26
  System_Predicate_object__o *v23; // x28
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  void *monitor; // x27
  Il2CppClass *klass; // x28
  int32_t v32; // w27
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v38; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4CEF6BF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_Exists_SvtMaterialTdEntity___);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&System_Predicate_SvtMaterialTdEntity__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_UserServantMaster___c__DisplayClass15_0__getNpUpServantList_b__0__);
    sub_1C7BAE8(&UserServantMaster___c__DisplayClass15_0_TypeInfo);
    byte_4CEF6BF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_34;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
  if ( !usrSvtEnt )
    goto LABEL_34;
  v10 = (SvtMaterialTdMaster_o *)Instance;
  v12 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v12;
  *(_QWORD *)&v39.fields.fakeValue = v11;
  v38 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v39, 0);
  if ( !v10 )
    goto LABEL_34;
  Instance = SvtMaterialTdMaster__GetEntityList(v10, (int32_t)Instance, 0);
  if ( Count >= 1 )
  {
    v13 = (System_Object_array *)Instance;
    v14 = 0;
    do
    {
      v15 = sub_1C7BD34(UserServantMaster___c__DisplayClass15_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v15, 0);
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_34;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v14,
                   (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( !v15 )
        goto LABEL_34;
      *(_QWORD *)(v15 + 16) = Instance;
      v22 = (Il2CppObject **)(v15 + 16);
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v15 + 16), (int32_t)Instance, v16, v17, v18, v19, v20, v21);
      if ( *(_QWORD *)(v15 + 16) && (*(_BYTE *)(*(_QWORD *)(v15 + 16) + 300LL) & 4) == 0 )
      {
        v23 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_SvtMaterialTdEntity__TypeInfo);
        System_Predicate_object____ctor(
          v23,
          (Il2CppObject *)v15,
          Method_UserServantMaster___c__DisplayClass15_0__getNpUpServantList_b__0__,
          0);
        Instance = (void *)System_Array__Exists_object_(
                             v13,
                             (System_Predicate_T__o *)v23,
                             (const MethodInfo_3272A90 *)Method_System_Array_Exists_SvtMaterialTdEntity___);
        v6 = *(Il2CppObject **)(v15 + 16);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_34;
LABEL_27:
          items = v8->fields._items;
          v34 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_34;
          size = v8->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              v6,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v36[4] = (Il2CppClass *)v6;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v36 + 4), (int32_t)v6, v24, v25, v26, v27, v28, v29);
          }
          continue;
        }
        if ( !v6 )
          goto LABEL_34;
        klass = v6[5].klass;
        monitor = v6[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v40.fields.currentCryptoKey = klass;
        *(_QWORD *)&v40.fields.fakeValue = monitor;
        v6 = (Il2CppObject *)(unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v40, 0);
        Instance = v38;
        if ( !v38 )
          goto LABEL_34;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v38,
                     (int32_t)v6,
                     (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_34;
        v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                *((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance + 2),
                0);
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                             usrSvtEnt->fields.svtId,
                             0);
        if ( v32 == (_DWORD)Instance )
        {
          if ( !v8 )
            goto LABEL_34;
          v6 = *v22;
          goto LABEL_27;
        }
      }
    }
    while ( Count != ++v14 );
  }
  if ( !v8 )
LABEL_34:
    sub_1C7BD40(Instance, v6);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4CEF6BC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF6BC = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
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
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v10 = *(_OWORD *)(Instance + 64);
        v11 = Instance;
        *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v26.fields.fakeValue = v10;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v25 = v26;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v25, 0);
        if ( Instance == v6 && (*(_BYTE *)(v11 + 300) & 4) == 0 )
        {
          v13 = *(_QWORD *)(v11 + 80);
          v12 = *(_QWORD *)(v11 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v27.fields.currentCryptoKey = v13;
          *(_QWORD *)&v27.fields.fakeValue = v12;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v27, 0);
          if ( !MasterData_object )
            break;
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                Instance,
                                (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            break;
          Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( !v8 )
              break;
            items = v8->fields._items;
            v21 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v8->fields._version;
            if ( !items )
              break;
            size = v8->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                (Il2CppObject *)v11,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v11;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v23 + 4), v11, v14, v15, v16, v17, v18, v19);
            }
          }
        }
      }
      if ( Count == ++v9 )
        goto LABEL_30;
    }
LABEL_32:
    sub_1C7BD40(Instance, v4);
  }
LABEL_30:
  if ( !v8 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


int32_t UserServantMaster__getSameSvtNpLvCache(
        UserServantMaster_o *this,
        UserServantEntity_o *usrSvtEnt,
        System_Collections_Generic_Dictionary_int__List_int___o **cachedUserServantNpLvDict,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x22
  int64_t Instance; // x0
  const MethodInfo *v9; // x1
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
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int64_t *v28; // x26
  __int64 v29; // x8
  __int128 v30; // q0
  int64_t v31; // x0
  __int128 v32; // q1
  int64_t v33; // x28
  System_Predicate_object__o *v34; // x28
  int64_t v35; // x8
  __int64 v36; // x27
  __int64 v37; // x28
  int32_t v38; // w27
  struct System_Int32_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_int__object__o *v42; // x20
  __int64 v43; // x19
  __int64 v44; // x23
  System_Object_array *array; // [xsp+0h] [xbp-E0h]
  System_Collections_Generic_Dictionary_int__List_int___o **v47; // [xsp+8h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+50h] [xbp-90h]
  Il2CppObject *value; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4CEF6BE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_Exists_SvtMaterialTdEntity___);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&System_Predicate_SvtMaterialTdEntity__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_UserServantMaster___c__DisplayClass14_0__getSameSvtNpLvCache_b__0__);
    sub_1C7BAE8(&UserServantMaster___c__DisplayClass14_0_TypeInfo);
    byte_4CEF6BE = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  value = (Il2CppObject *)v7;
  if ( !usrSvtEnt )
    goto LABEL_54;
  if ( (usrSvtEnt->fields.status & 2) != 0 )
    goto LABEL_12;
  v10 = *cachedUserServantNpLvDict;
  v12 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v52.fields.currentCryptoKey = v12;
  *(_QWORD *)&v52.fields.fakeValue = v11;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v52, 0);
  if ( !v10 )
    goto LABEL_54;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)v10,
          Instance,
          &value,
          (const MethodInfo_3488E9C *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
LABEL_12:
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      DataManager__GetMasterData_object_(
        (DataManager_o *)Instance,
        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = (int64_t)this->fields.list;
      if ( Instance )
      {
        Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
        v15 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v15,
          (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
          v18 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
          v17 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
          v19 = (SvtMaterialTdMaster_o *)MasterData_object;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v53.fields.currentCryptoKey = v18;
          *(_QWORD *)&v53.fields.fakeValue = v17;
          v47 = cachedUserServantNpLvDict;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v53, 0);
          if ( v19 )
          {
            Instance = (int64_t)SvtMaterialTdMaster__GetEntityList(v19, Instance, 0);
            array = (System_Object_array *)Instance;
            if ( Count >= 1 )
            {
              for ( i = 0; Count != i; ++i )
              {
                v21 = sub_1C7BD34(UserServantMaster___c__DisplayClass14_0_TypeInfo);
                System_Object___ctor((Il2CppObject *)v21, 0);
                Instance = (int64_t)this->fields.list;
                if ( !Instance )
                  goto LABEL_54;
                Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                      i,
                                      (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
                if ( !v21 )
                  goto LABEL_54;
                *(_QWORD *)(v21 + 16) = Instance;
                v28 = (int64_t *)(v21 + 16);
                sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v21 + 16), Instance, v22, v23, v24, v25, v26, v27);
                v29 = *(_QWORD *)(v21 + 16);
                if ( v29 && (*(_BYTE *)(v29 + 300) & 6) == 0 )
                {
                  v30 = *(_OWORD *)(v29 + 32);
                  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(v29 + 16);
                  *(_OWORD *)&v50.fields.fakeValue = v30;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  v49 = v50;
                  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v49, 0);
                  v32 = *(_OWORD *)&usrSvtEnt->fields.id.fields.fakeValue;
                  v33 = v31;
                  *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&usrSvtEnt->fields.id.fields.currentCryptoKey;
                  *(_OWORD *)&v48.fields.fakeValue = v32;
                  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v48, 0);
                  if ( v33 != Instance )
                  {
                    Instance = UserServantEntity__IsMaterialTd(usrSvtEnt, v9);
                    if ( (Instance & 1) == 0 )
                    {
                      Instance = *v28;
                      if ( !*v28 )
                        goto LABEL_54;
                      Instance = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Instance, v9);
                      if ( (Instance & 1) != 0 )
                      {
                        v34 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_SvtMaterialTdEntity__TypeInfo);
                        System_Predicate_object____ctor(
                          v34,
                          (Il2CppObject *)v21,
                          Method_UserServantMaster___c__DisplayClass14_0__getSameSvtNpLvCache_b__0__,
                          0);
                        Instance = System_Array__Exists_object_(
                                     array,
                                     (System_Predicate_T__o *)v34,
                                     (const MethodInfo_3272A90 *)Method_System_Array_Exists_SvtMaterialTdEntity___);
                        if ( (Instance & 1) == 0 )
                          continue;
                      }
                      else
                      {
                        v35 = *v28;
                        if ( !*v28 )
                          goto LABEL_54;
                        v37 = *(_QWORD *)(v35 + 80);
                        v36 = *(_QWORD *)(v35 + 88);
                        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        *(_QWORD *)&v54.fields.currentCryptoKey = v37;
                        *(_QWORD *)&v54.fields.fakeValue = v36;
                        v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v54, 0);
                        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(
                                     usrSvtEnt->fields.svtId,
                                     0);
                        if ( v38 != (_DWORD)Instance || (usrSvtEnt->fields.status & 2) != 0 )
                          continue;
                      }
                      if ( !*v28 )
                        goto LABEL_54;
                      if ( !v15 )
                        goto LABEL_54;
                      v9 = (const MethodInfo *)*(unsigned int *)(*v28 + 292);
                      items = v15->fields._items;
                      v40 = Method_System_Collections_Generic_List_int__Add__;
                      ++v15->fields._version;
                      if ( !items )
                        goto LABEL_54;
                      size = v15->fields._size;
                      if ( (unsigned int)size >= LODWORD(items->max_length) )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v15,
                          (int32_t)v9,
                          *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v15->fields._size = size + 1;
                        items->m_Items[size] = (int)v9;
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
              if ( (usrSvtEnt->fields.status & 2) != 0 )
                return v13;
              v42 = (System_Collections_Generic_Dictionary_int__object__o *)*v47;
              v44 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
              v43 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v55.fields.currentCryptoKey = v44;
              *(_QWORD *)&v55.fields.fakeValue = v43;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v55, 0);
              if ( v42 )
              {
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  v42,
                  Instance,
                  (Il2CppObject *)v15,
                  (const MethodInfo_34876FC *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
                return v13;
              }
            }
          }
        }
      }
    }
LABEL_54:
    sub_1C7BD40(Instance, v9);
  }
  Instance = (int64_t)value;
  if ( !value )
    goto LABEL_54;
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
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v41; // x23
  unsigned __int64 i; // x26
  __int64 v43; // x29
  __int128 v44; // q0
  int64_t v45; // x24
  __int64 v46; // x24
  __int64 v47; // x25
  __int64 v48; // x24
  __int64 v49; // x25
  __int64 v50; // x24
  __int64 v51; // x25
  struct System_Int32_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  UserServantStorageMaster_o *v56; // [xsp+0h] [xbp-D0h]
  int32_t v57; // [xsp+Ch] [xbp-C4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+50h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_4CEF6B8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF6B8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  v56 = (UserServantStorageMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_87;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v7);
  v57 = 0;
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
      v12 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v16 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0);
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
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v59, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CE827C )
      {
        sub_1C7BAE8(&NetworkManager_TypeInfo);
        byte_4CE827C = 1;
      }
      v21 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v21 = NetworkManager_TypeInfo;
      }
      if ( v20 == v21->static_fields->userIdNumber && (*(_BYTE *)(v18 + 300) & 4) == 0 )
      {
        v23 = *(_QWORD *)(v18 + 80);
        v22 = *(_QWORD *)(v18 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v61.fields.currentCryptoKey = v23;
        *(_QWORD *)&v61.fields.fakeValue = v22;
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v61, 0);
        if ( !MasterData_object )
          sub_1C7BD40(v24, (unsigned int)v24);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v24,
                   (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_1C7BD40(0, v26);
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0) )
        {
          v28 = *(_QWORD *)(v18 + 80);
          v27 = *(_QWORD *)(v18 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v62.fields.currentCryptoKey = v28;
          *(_QWORD *)&v62.fields.fakeValue = v27;
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v62, 0);
          if ( !v6 )
            sub_1C7BD40(v29, (unsigned int)v29);
          if ( !System_Collections_Generic_List_int___Contains(
                  v6,
                  v29,
                  (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            v31 = *(_QWORD *)(v18 + 80);
            v30 = *(_QWORD *)(v18 + 88);
            ++v57;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v63.fields.currentCryptoKey = v31;
            *(_QWORD *)&v63.fields.fakeValue = v30;
            v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v63, 0);
            items = v6->fields._items;
            v34 = Method_System_Collections_Generic_List_int__Add__;
            ++v6->fields._version;
            if ( !items )
              sub_1C7BD40(v32, (unsigned int)v32);
            size = v6->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v6,
                v32,
                *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
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
    v39 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  Instance = (DataManager_o *)v56;
  if ( !v56 || (Instance = (DataManager_o *)UserServantStorageMaster__getList(v56, v4)) == 0 )
LABEL_87:
    sub_1C7BD40(Instance, v4);
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v41 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    for ( i = 0; (__int64)i < (int)m_CancellationTokenSource; ++i )
    {
      if ( i >= (unsigned int)m_CancellationTokenSource )
        sub_1C7BD48(Instance);
      v43 = *((_QWORD *)&v41->fields._DispLog + i);
      if ( v43 )
      {
        v44 = *(_OWORD *)(v43 + 64);
        *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)(v43 + 48);
        *(_OWORD *)&v60.fields.fakeValue = v44;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v58 = v60;
        v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v58, 0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CE827C )
        {
          sub_1C7BAE8(&NetworkManager_TypeInfo);
          byte_4CE827C = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        if ( v45 == *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL) && (*(_BYTE *)(v43 + 300) & 4) == 0 )
        {
          v47 = *(_QWORD *)(v43 + 80);
          v46 = *(_QWORD *)(v43 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v64.fields.currentCryptoKey = v47;
          *(_QWORD *)&v64.fields.fakeValue = v46;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v64, 0);
          if ( !MasterData_object )
            goto LABEL_87;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                        (int32_t)Instance,
                                        (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_87;
          Instance = (DataManager_o *)ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            v49 = *(_QWORD *)(v43 + 80);
            v48 = *(_QWORD *)(v43 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v65.fields.currentCryptoKey = v49;
            *(_QWORD *)&v65.fields.fakeValue = v48;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v65, 0);
            if ( !v6 )
              goto LABEL_87;
            Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                          v6,
                                          (int32_t)Instance,
                                          (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              v51 = *(_QWORD *)(v43 + 80);
              v50 = *(_QWORD *)(v43 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v66.fields.currentCryptoKey = v51;
              *(_QWORD *)&v66.fields.fakeValue = v50;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v66, 0);
              v52 = v6->fields._items;
              v53 = Method_System_Collections_Generic_List_int__Add__;
              ++v6->fields._version;
              if ( !v52 )
                goto LABEL_87;
              v54 = v6->fields._size;
              ++v57;
              if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v6,
                  (int32_t)Instance,
                  *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
              }
              else
              {
                v6->fields._size = v54 + 1;
                v52->m_Items[v54] = (int)Instance;
              }
            }
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v41->fields.m_CancellationTokenSource;
    }
  }
  return v57;
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4CEF6BD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF6BD = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
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
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( Instance )
      {
        v10 = *(_OWORD *)(Instance + 64);
        v11 = Instance;
        *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
        *(_OWORD *)&v26.fields.fakeValue = v10;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v25 = v26;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v25, 0);
        if ( Instance == v6 && (*(_BYTE *)(v11 + 300) & 4) == 0 )
        {
          v13 = *(_QWORD *)(v11 + 80);
          v12 = *(_QWORD *)(v11 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v27.fields.currentCryptoKey = v13;
          *(_QWORD *)&v27.fields.fakeValue = v12;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v27, 0);
          if ( !MasterData_object )
            break;
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                Instance,
                                (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            break;
          Instance = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( !v8 )
              break;
            items = v8->fields._items;
            v21 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v8->fields._version;
            if ( !items )
              break;
            size = v8->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                (Il2CppObject *)v11,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v11;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v23 + 4), v11, v14, v15, v16, v17, v18, v19);
            }
          }
        }
      }
      if ( Count == ++v9 )
        goto LABEL_30;
    }
LABEL_32:
    sub_1C7BD40(Instance, v4);
  }
LABEL_30:
  if ( !v8 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  __int64 v18; // x23
  __int128 v19; // q0
  int64_t v20; // x24
  NetworkManager_c *v21; // x0
  __int64 v22; // x24
  __int64 v23; // x25
  __int64 v24; // x0
  Il2CppObject *Entity; // x0
  __int64 v26; // x1
  _BOOL8 IsServant; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4CEF6B7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF6B7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___),
        v6 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v6,
          (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0) )
  {
    sub_1C7BD40(Instance, v4);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v7);
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
      v12 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v16 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8));
    v18 = v17;
    if ( v17 )
    {
      v19 = *(_OWORD *)(v17 + 64);
      *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)(v17 + 48);
      *(_OWORD *)&v45.fields.fakeValue = v19;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v44 = v45;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v44, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CE827C )
      {
        sub_1C7BAE8(&NetworkManager_TypeInfo);
        byte_4CE827C = 1;
      }
      v21 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v21 = NetworkManager_TypeInfo;
      }
      if ( v20 == v21->static_fields->userIdNumber && (*(_BYTE *)(v18 + 300) & 4) == 0 )
      {
        v23 = *(_QWORD *)(v18 + 80);
        v22 = *(_QWORD *)(v18 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v46.fields.currentCryptoKey = v23;
        *(_QWORD *)&v46.fields.fakeValue = v22;
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v46, 0);
        if ( !MasterData_object )
          sub_1C7BD40(v24, (unsigned int)v24);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v24,
                   (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_1C7BD40(0, v26);
        IsServant = ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0);
        if ( IsServant )
        {
          if ( !v6 )
            sub_1C7BD40(IsServant, v28);
          items = v6->fields._items;
          v36 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v6->fields._version;
          if ( !items )
            sub_1C7BD40(IsServant, v28);
          size = v6->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)v18,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v38[4] = (Il2CppClass *)v18;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v38 + 4), v18, v29, v30, v31, v32, v33, v34);
          }
        }
      }
    }
  }
  v39 = Enumerator->klass;
  v40 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_44;
    }
    v42 = (__int64)&v39->vtable[*v41];
  }
  else
  {
LABEL_44:
    v42 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(Enumerator, *(_QWORD *)(v42 + 8));
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
  const MethodInfo *v22; // x3
  int64_t v23; // x25
  NetworkManager_c *v24; // x0
  __int64 SvtClassId; // x0
  __int64 v26; // x25
  __int64 v27; // x26
  __int64 v28; // x1
  Il2CppObject *Entity; // x0
  __int64 v30; // x1
  _BOOL8 IsServant; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4CEF6BA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF6BA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___),
        v8 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v8,
          (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0) )
  {
    sub_1C7BD40(Instance, v6);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_33C6F68 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C7BD40(0, v9);
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
      v14 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v18 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8));
    v20 = v19;
    if ( v19 )
    {
      v21 = *(_OWORD *)(v19 + 64);
      *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)(v19 + 48);
      *(_OWORD *)&v49.fields.fakeValue = v21;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v48 = v49;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v48, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CE827C )
      {
        sub_1C7BAE8(&NetworkManager_TypeInfo);
        byte_4CE827C = 1;
      }
      v24 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v24 = NetworkManager_TypeInfo;
      }
      if ( v23 == v24->static_fields->userIdNumber && (*(_BYTE *)(v20 + 300) & 4) == 0 )
      {
        SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)v20, 0, 0, v22);
        if ( !classIdList )
          sub_1C7BD40(SvtClassId, (unsigned int)SvtClassId);
        if ( System_Collections_Generic_List_int___Contains(
               classIdList,
               SvtClassId,
               (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v27 = *(_QWORD *)(v20 + 80);
          v26 = *(_QWORD *)(v20 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v50.fields.currentCryptoKey = v27;
          *(_QWORD *)&v50.fields.fakeValue = v26;
          v28 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v50, 0);
          if ( !MasterData_object )
            sub_1C7BD40(0, v28);
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     v28,
                     (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Entity )
            sub_1C7BD40(0, v30);
          IsServant = ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0);
          if ( IsServant )
          {
            if ( !v8 )
              sub_1C7BD40(IsServant, v32);
            items = v8->fields._items;
            v40 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v8->fields._version;
            if ( !items )
              sub_1C7BD40(IsServant, v32);
            size = v8->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                (Il2CppObject *)v20,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
            }
            else
            {
              v42 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v42[4] = (Il2CppClass *)v20;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v42 + 4), v20, v33, v34, v35, v36, v37, v38);
            }
          }
        }
      }
    }
  }
  v43 = Enumerator->klass;
  v44 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v45 = &v43->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_46;
    }
    v46 = (__int64)&v43->vtable[*v45];
  }
  else
  {
LABEL_46:
    v46 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(Enumerator, *(_QWORD *)(v46 + 8));
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
  Il2CppObject *current; // x28
  void *monitor; // x21
  Il2CppClass *klass; // x22
  Il2CppObject v15; // q0
  int64_t v16; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4CEF6C7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor___78759040);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF6C7 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, *(const MethodInfo **)&svtId);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_58975984(
    v6,
    List,
    (const MethodInfo_383E6F0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___78759040);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0
    || (Instance = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, v8), !v6) )
  {
    sub_1C7BD40(Instance, v8);
  }
  System_Collections_Generic_List_object___AddRange(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  v9 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    v6,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  *(_OWORD *)&v23.fields._list = *(_OWORD *)&v22.fields.currentCryptoKey;
  v23.fields._current = (Il2CppObject *)v22.fields.fakeValue;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      sub_1C7BD40(v10, v11);
    klass = v23.fields._current[5].klass;
    monitor = v23.fields._current[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v24.fields.currentCryptoKey = klass;
    *(_QWORD *)&v24.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v24, 0) == svtId
      && (BYTE4(current[18].monitor) & 2) == 0 )
    {
      v15 = current[2];
      *(Il2CppObject *)&v22.fields.currentCryptoKey = current[1];
      *(Il2CppObject *)&v22.fields.fakeValue = v15;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v21 = v22;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v21, 0);
      if ( !v9 )
        sub_1C7BD40(v16, v16);
      items = v9->fields._items;
      v18 = Method_System_Collections_Generic_List_long__Add__;
      ++v9->fields._version;
      if ( !items )
        sub_1C7BD40(v16, v16);
      size = v9->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v9,
          v16,
          *(const MethodInfo_3826E30 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
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
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
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

  if ( (byte_4CEF6CB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CEF6CB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
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
                                                                 (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( !list )
        break;
      v10 = list;
      monitor = list[3].monitor;
      items = list[3].fields.items;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v22.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v22.fields.fakeValue = items;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v22, 0) == svtId
        && (BYTE4(v10[12].monitor) & 4) == 0 )
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
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v20, 0);
          v17 = *(_OWORD *)&v10[1].monitor;
          *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&v10->fields.items;
          *(_OWORD *)&v19.fields.fakeValue = v17;
          if ( v16 > CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v19, 0) )
LABEL_14:
            v8 = v10;
        }
      }
      if ( v7 == ++v9 )
        return (UserServantEntity_o *)v8;
    }
LABEL_24:
    sub_1C7BD40(list, *(_QWORD *)&svtId);
  }
  return 0;
}


void UserServantMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEF6D2 & 1) == 0 )
  {
    sub_1C7BAE8(&UserServantMaster___c_TypeInfo);
    byte_4CEF6D2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(UserServantMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserServantMaster___c_TypeInfo->static_fields->__9 = (struct UserServantMaster___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)UserServantMaster___c_TypeInfo->static_fields,
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
    sub_1C7BD40(this, 0);
  return !UserServantEntity__IsMaterialTd(x, (const MethodInfo *)x);
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
  if ( (byte_4CEF6D3 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass14_0_o *)sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEF6D3 = 1;
  }
  if ( !m || (e = v4->fields.e) == 0 )
    sub_1C7BD40(this, m);
  materialSvtId = m->fields.materialSvtId;
  v8 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v10, 0);
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
  if ( (byte_4CEF6D4 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass15_0_o *)sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEF6D4 = 1;
  }
  if ( !m || (e = v4->fields.e) == 0 )
    sub_1C7BD40(this, m);
  materialSvtId = m->fields.materialSvtId;
  v8 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v10, 0);
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
  if ( (byte_4CEF6D5 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass1_0_o *)sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEF6D5 = 1;
  }
  if ( !ent )
    sub_1C7BD40(this, ent);
  v6 = *(_QWORD *)&ent->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&ent->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return v4->fields.svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v8, 0);
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
  if ( (byte_4CEF6D6 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass29_0_o *)sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEF6D6 = 1;
  }
  if ( !usrSvt )
    sub_1C7BD40(this, usrSvt);
  v6 = *(_QWORD *)&usrSvt->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&usrSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v8, 0) == v4->fields.svtId;
}


int32_t UserServantMaster___c__DisplayClass29_0___GetHaveServantSkillLevelMax_b__1(
        UserServantMaster___c__DisplayClass29_0_o *this,
        UserServantEntity_o *a,
        UserServantEntity_o *b,
        const MethodInfo *method)
{
  UserServantMaster___c__DisplayClass29_0_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( !b
    || (v5 = this,
        this = (UserServantMaster___c__DisplayClass29_0_o *)UserServantEntity__getSkillLevel(
                                                              b,
                                                              this->fields.skillIdx,
                                                              (const MethodInfo *)b),
        !a) )
  {
    sub_1C7BD40(this, a);
  }
  return (_DWORD)this - UserServantEntity__getSkillLevel(a, v5->fields.skillIdx, v6);
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
  if ( (byte_4CEF6D7 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass37_0_o *)sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CEF6D7 = 1;
  }
  if ( !usrSvt )
    sub_1C7BD40(this, usrSvt);
  v6 = *(_QWORD *)&usrSvt->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&usrSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v8, 0) == v4->fields.svtId;
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
  int32_t v10; // w21
  __int64 v11; // x22
  __int64 v12; // x23
  int32_t v13; // w0
  __int64 v14; // x8
  int32_t v15; // w20
  int32_t v16; // w22
  int32_t afterSelectedLimitCount[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  v4 = this;
  if ( (byte_4CEF6D8 & 1) == 0 )
  {
    sub_1C7BAE8(&ImageLimitCount_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (UserServantMaster___c__DisplayClass37_0_o *)sub_1C7BAE8(&UserServantEntity_TypeInfo);
    byte_4CEF6D8 = 1;
  }
  *(_QWORD *)afterSelectedLimitCount = 0;
  if ( !x )
    sub_1C7BD40(this, x);
  dispLimitCountAfter = x->fields.dispLimitCountAfter;
  v6 = UserServantEntity_TypeInfo;
  if ( !UserServantEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantEntity_TypeInfo);
    v6 = UserServantEntity_TypeInfo;
  }
  if ( dispLimitCountAfter <= v6->static_fields->InitDispLimitCountAfter )
  {
    v9 = *(_QWORD *)&x->fields.dispLimitCount.fields.currentCryptoKey;
    v8 = *(_QWORD *)&x->fields.dispLimitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v19.fields.currentCryptoKey = v9;
    *(_QWORD *)&v19.fields.fakeValue = v8;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v19, 0);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v7 = ImageLimitCount__ConvertDispLimitCountForClient(v10, 0);
  }
  else
  {
    v7 = x->fields.dispLimitCountAfter;
  }
  v12 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v12;
  *(_QWORD *)&v20.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v20, 0);
  v14 = *(_QWORD *)&x->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v21.fields.fakeValue = *(_QWORD *)&x->fields.limitCount.fields.fakeValue;
  v15 = v13;
  *(_QWORD *)&v21.fields.currentCryptoKey = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v21, 0);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount__GetDispLimitCountSealAfter(v15, v16, v7, &afterSelectedLimitCount[1], afterSelectedLimitCount, 0);
  return afterSelectedLimitCount[1] == v4->fields.costumeId;
}