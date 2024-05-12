void __fastcall UserServantMaster___ctor(UserServantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43911FF & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__);
    byte_43911FF = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    14,
    (const MethodInfo_21FBA20 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__);
}


bool __fastcall UserServantMaster__CheckEquipAdd(
        UserServantMaster_o *this,
        int32_t count,
        bool friendShipSvtEqExclude,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int32_t v6; // w19
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v8; // x1
  int32_t servantEquipSum; // [xsp+8h] [xbp-8h] BYREF
  int32_t servantSum; // [xsp+Ch] [xbp-4h] BYREF

  servantSum = 0;
  servantEquipSum = 0;
  UserServantMaster__getCount(this, &servantSum, &servantEquipSum, friendShipSvtEqExclude, v4);
  v6 = servantEquipSum + count;
  servantEquipSum = v6;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B7769C(0LL, v8);
  return v6 > SelfUserGame->fields.svtEquipKeep;
}


bool __fastcall UserServantMaster__CheckServantAdd(UserServantMaster_o *this, int32_t count, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  int32_t v5; // w19
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v7; // x1
  int32_t servantEquipSum; // [xsp+8h] [xbp-8h] BYREF
  int32_t servantSum; // [xsp+Ch] [xbp-4h] BYREF

  servantSum = 0;
  servantEquipSum = 0;
  UserServantMaster__getCount(this, &servantSum, &servantEquipSum, 0, v3);
  v5 = servantSum + count;
  servantSum = v5;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B7769C(0LL, v7);
  return v5 > SelfUserGame->fields.svtKeep;
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  int64_t UserId; // x0
  int64_t v9; // x24
  UserServantEntity_o *v10; // x23
  int32_t v11; // w25
  __int64 v12; // x27
  __int64 v13; // x28
  int32_t v14; // w27
  __int64 v15; // x27
  __int64 v16; // x28
  int32_t v17; // w27
  UserServantEntity_o *v18; // x26
  __int64 v19; // x10
  __int128 v20; // q0
  __int64 v21; // x27
  __int64 v22; // x28
  __int64 v23; // x27
  __int64 v24; // x28
  int32_t v25; // w27
  const MethodInfo *v26; // x3
  UserServantEntity_o *v28; // [xsp+10h] [xbp-A0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4391217 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&UserServantEntity_TypeInfo);
    byte_4391217 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_56;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v28 = 0LL;
    v9 = UserId;
    v10 = 0LL;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v11,
                                                                                           (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v18 = (UserServantEntity_o *)list;
      v19 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v19
        || (UserServantEntity_c *)list->klass->_2.typeHierarchy[v19 - 1] != UserServantEntity_TypeInfo )
      {
        break;
      }
      v20 = *(_OWORD *)&list[2].klass;
      *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__Fields *)&v31.fields.currentCryptoKey = list[1].fields;
      *(_OWORD *)&v31.fields.fakeValue = v20;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v30 = v31;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v30, 0LL) == v9 )
      {
        v22 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
        v21 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v34.fields.currentCryptoKey = v22;
        *(_QWORD *)&v34.fields.fakeValue = v21;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v34, 0LL) == svtId )
        {
          if ( UserServantEntity__IsWithdrawal(v18, 0LL) )
          {
            v28 = v18;
          }
          else if ( v10 )
          {
            v24 = *(_QWORD *)&v18->fields.limitCount.fields.currentCryptoKey;
            v23 = *(_QWORD *)&v18->fields.limitCount.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v35.fields.currentCryptoKey = v24;
            *(_QWORD *)&v35.fields.fakeValue = v23;
            v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v35, 0LL);
            if ( v25 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v10->fields.limitCount, 0LL)
              || v18->fields.lv > v10->fields.lv )
            {
              goto LABEL_43;
            }
            v13 = *(_QWORD *)&v18->fields.limitCount.fields.currentCryptoKey;
            v12 = *(_QWORD *)&v18->fields.limitCount.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v32.fields.currentCryptoKey = v13;
            *(_QWORD *)&v32.fields.fakeValue = v12;
            v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v32, 0LL);
            if ( v14 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v10->fields.limitCount, 0LL)
              && v18->fields.lv == v10->fields.lv
              && !UserServantEntity__IsCondJoin(v18, 0LL)
              && UserServantEntity__IsCondJoin(v10, 0LL) )
            {
              goto LABEL_43;
            }
            v16 = *(_QWORD *)&v18->fields.limitCount.fields.currentCryptoKey;
            v15 = *(_QWORD *)&v18->fields.limitCount.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v33.fields.currentCryptoKey = v16;
            *(_QWORD *)&v33.fields.fakeValue = v15;
            v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v33, 0LL);
            if ( v17 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v10->fields.limitCount, 0LL)
              && v18->fields.lv == v10->fields.lv
              && v18->fields.createdAt < v10->fields.createdAt )
            {
LABEL_43:
              v10 = (UserServantEntity_o *)sub_B77694(UserServantEntity_TypeInfo);
              UserServantEntity___ctor_21815072(v10, v18, 0LL);
            }
          }
          else
          {
            v10 = v18;
          }
        }
      }
      if ( ++v11 >= Count )
        goto LABEL_48;
    }
LABEL_56:
    sub_B7769C(list, *(_QWORD *)&svtId);
  }
  v28 = 0LL;
  v10 = 0LL;
LABEL_48:
  if ( checkStorage )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !list )
      goto LABEL_56;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                         (DataManager_o *)list,
                                                                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !list )
      goto LABEL_56;
    v10 = UserServantStorageMaster__CostumeTargetEntity((UserServantStorageMaster_o *)list, svtId, v10, v26);
  }
  if ( v10 )
    return v10;
  else
    return v28;
}


System_Collections_Generic_List_int__o *__fastcall UserServantMaster__GetAllServantList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  UserServantStorageMaster_o *v5; // x19
  System_Collections_Generic_List_int__o *v6; // x20
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  UserServantEntity_o *v17; // x0
  UserServantEntity_o *v18; // x23
  __int64 v19; // x9
  __int128 v20; // q0
  int64_t v21; // x24
  __int64 v22; // x24
  __int64 v23; // x25
  __int64 v24; // x1
  ServantEntity_o *Entity; // x0
  __int64 v26; // x1
  __int64 v27; // x24
  __int64 v28; // x25
  __int64 v29; // x0
  __int64 v30; // x23
  __int64 v31; // x24
  int32_t v32; // w0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  __int64 v37; // x8
  int64_t v38; // x21
  unsigned __int64 v39; // x19
  __int64 v40; // x22
  __int128 v41; // q0
  int64_t v42; // x23
  __int64 v43; // x23
  __int64 v44; // x24
  __int64 v45; // x23
  __int64 v46; // x24
  __int64 v47; // x22
  __int64 v48; // x23
  int32_t v49; // w0
  __int64 v51; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+50h] [xbp-80h]
  __int64 v56; // [xsp+78h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_4391207 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&UserServantEntity_TypeInfo);
    byte_4391207 = 1;
  }
  HIDWORD(v56) = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  v5 = (UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)Instance,
                                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v6 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_89;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_18:
      v16 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v17 = (UserServantEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                   Enumerator,
                                   *(_QWORD *)(v16 + 8));
    v18 = v17;
    if ( v17 )
    {
      v19 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v19
        || (UserServantEntity_c *)v17->klass->_2.typeHierarchy[v19 - 1] != UserServantEntity_TypeInfo )
      {
        sub_B77990(v17);
        goto LABEL_88;
      }
      v20 = *(_OWORD *)&v17->fields.userId.fields.fakeValue;
      *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&v17->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v55.fields.fakeValue = v20;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v54 = v55;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v54, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( v21 == NetworkManager__get_UserId(0LL) && !UserServantEntity__IsWithdrawal(v18, 0LL) )
      {
        v23 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
        v22 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v57.fields.currentCryptoKey = v23;
        *(_QWORD *)&v57.fields.fakeValue = v22;
        v24 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v57, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          sub_B7769C(0LL, v24);
        Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v24,
                                      (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_B7769C(0LL, v26);
        if ( ServantEntity__get_IsOrganization(Entity, 0LL) )
        {
          v28 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
          v27 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v58.fields.currentCryptoKey = v28;
          *(_QWORD *)&v58.fields.fakeValue = v27;
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v58, 0LL);
          if ( !v6 )
            sub_B7769C(v29, (unsigned int)v29);
          if ( !System_Collections_Generic_List_int___Contains(
                  v6,
                  v29,
                  (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            v31 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
            v30 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v59.fields.currentCryptoKey = v31;
            *(_QWORD *)&v59.fields.fakeValue = v30;
            v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v59, 0LL);
            System_Collections_Generic_List_int___Add(
              v6,
              v32,
              (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
    }
  }
  v56 = 0x1000000AALL;
  v33 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      ++v34;
      v35 += 4;
      if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_51;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_51:
    v36 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  if ( (_DWORD)v56 == 170 )
    v56 = 170LL;
  Instance = (int64_t)v5;
  if ( !v5 || (Instance = (int64_t)UserServantStorageMaster__getList(v5, v4)) == 0 )
LABEL_89:
    sub_B7769C(Instance, v4);
  v37 = *(_QWORD *)(Instance + 24);
  v38 = Instance;
  if ( (int)v37 >= 1 )
  {
    v39 = 0LL;
    while ( v39 < (unsigned int)v37 )
    {
      v40 = *(_QWORD *)(v38 + 32 + 8 * v39);
      if ( v40 )
      {
        v41 = *(_OWORD *)(v40 + 64);
        *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)(v40 + 48);
        *(_OWORD *)&v55.fields.fakeValue = v41;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v53 = v55;
        v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v53, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        if ( v42 == Instance )
        {
          v44 = *(_QWORD *)(v40 + 80);
          v43 = *(_QWORD *)(v40 + 88);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v60.fields.currentCryptoKey = v44;
          *(_QWORD *)&v60.fields.fakeValue = v43;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v60, 0LL);
          if ( !v6 )
            goto LABEL_89;
          Instance = System_Collections_Generic_List_int___Contains(
                       v6,
                       Instance,
                       (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Instance & 1) == 0 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v40, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v46 = *(_QWORD *)(v40 + 80);
              v45 = *(_QWORD *)(v40 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v61.fields.currentCryptoKey = v46;
              *(_QWORD *)&v61.fields.fakeValue = v45;
              v4 = (const MethodInfo *)(unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                       v61,
                                                       0LL);
              Instance = (int64_t)MasterData_WarQuestSelectionMaster;
              if ( !MasterData_WarQuestSelectionMaster )
                goto LABEL_89;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    (int32_t)v4,
                                    (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( !Instance )
                goto LABEL_89;
              Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                v48 = *(_QWORD *)(v40 + 80);
                v47 = *(_QWORD *)(v40 + 88);
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v62.fields.currentCryptoKey = v48;
                *(_QWORD *)&v62.fields.fakeValue = v47;
                v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v62, 0LL);
                System_Collections_Generic_List_int___Add(
                  v6,
                  v49,
                  (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
              }
            }
          }
        }
      }
      LODWORD(v37) = *(_DWORD *)(v38 + 24);
      if ( (__int64)++v39 >= (int)v37 )
        return v6;
    }
LABEL_88:
    v51 = sub_B776C8(Instance);
    sub_B77668(v51, 0LL);
  }
  return v6;
}


UserServantEntity_array *__fastcall UserServantMaster__GetCombineMaterialList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t v6; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x23
  int32_t v9; // w24
  int64_t v10; // x25
  __int64 v11; // x10
  __int128 v12; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x21
  __int64 v14; // x26
  __int64 v15; // x27
  int64_t v17; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4391218 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&UserServantEntity_TypeInfo);
    byte_4391218 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_32;
  v6 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v9,
                            (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v10 = Instance;
        v11 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v11
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v11 - 8) == UserServantEntity_TypeInfo )
        {
          v12 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v19.fields.fakeValue = v12;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v18 = v19;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v18, 0LL);
          if ( Instance == v6 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v10, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v17 = v6;
              v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v15 = *(_QWORD *)(v10 + 80);
              v14 = *(_QWORD *)(v10 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v20.fields.currentCryptoKey = v15;
              *(_QWORD *)&v20.fields.fakeValue = v14;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v20, 0LL);
              if ( !v13 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v13;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v13,
                                    Instance,
                                    (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v6 = v17;
              if ( !Instance )
                break;
              Instance = ServantEntity__get_IsCombineMaterial((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                Instance = UserServantEntity__IsLock((UserServantEntity_o *)v10, 0LL);
                if ( (Instance & 1) == 0 )
                {
                  Instance = UserServantEntity__IsChoice((UserServantEntity_o *)v10, 0LL);
                  if ( (Instance & 1) == 0 )
                  {
                    if ( !v8 )
                      break;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v8,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
                      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
                  }
                }
              }
            }
          }
        }
      }
      if ( ++v9 >= Count )
        goto LABEL_30;
    }
LABEL_32:
    sub_B7769C(Instance, v4);
  }
LABEL_30:
  if ( !v8 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                      (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__GetEntities(
        UserServantMaster_o *this,
        System_Int64_array *userServantIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v5; // x21

  if ( (byte_439121D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor___69397496);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    byte_439121D = 1;
  }
  if ( userServantIds )
  {
    v5 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_51294772(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)userServantIds,
      (const MethodInfo_30EB234 *)Method_System_Collections_Generic_List_long___ctor___69397496);
  }
  else
  {
    v5 = 0LL;
  }
  return UserServantMaster__GetEntities_35692904(this, v5, method);
}


UserServantEntity_array *__fastcall UserServantMaster__GetEntities_35692904(
        UserServantMaster_o *this,
        System_Collections_Generic_List_long__o *userServantIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x22
  __int64 v20; // x9
  __int128 v21; // q0
  int64_t v22; // x1
  _BOOL8 v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-80h]
  __int64 v32; // [xsp+48h] [xbp-58h]

  if ( (byte_439121E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&UserServantEntity_TypeInfo);
    byte_439121E = 1;
  }
  HIDWORD(v32) = 0;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( userServantIds && userServantIds->fields._size >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_43;
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B7769C(0LL, v8);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v11 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v11;
          p_offset += 4;
          if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_11;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_11:
        p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v14 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v15 = 0LL;
        v16 = &v14->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v15;
          v16 += 4;
          if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_18;
        }
        v17 = (__int64)&v14->vtable[*v16].method;
      }
      else
      {
LABEL_18:
        v17 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                                                     Enumerator,
                                                                     *(_QWORD *)(v17 + 8));
      v19 = v18;
      if ( v18 )
      {
        v20 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v20
          || (UserServantEntity_c *)v18->klass->_2.typeHierarchy[v20 - 1] != UserServantEntity_TypeInfo )
        {
          sub_B77990(v18);
LABEL_42:
          sub_B7769C(v23, v24);
        }
        v21 = *(_OWORD *)&v18->fields.addCount;
        *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&v18->fields.missionTargetId;
        *(_OWORD *)&v31.fields.fakeValue = v21;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v30 = v31;
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v30, 0LL);
        v23 = System_Collections_Generic_List_long___Contains(
                userServantIds,
                v22,
                (const MethodInfo_30EC1EC *)Method_System_Collections_Generic_List_long__Contains__);
        if ( v23 )
        {
          if ( !v5 )
            goto LABEL_42;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            v19,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
        }
      }
    }
    v32 = 0x10000005DLL;
    v25 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_34;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_34:
      v28 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                                                                                         Enumerator,
                                                                                         *(_QWORD *)(v28 + 8));
    if ( (_DWORD)v32 == 93 )
      v32 = 93LL;
  }
  if ( !v5 )
LABEL_43:
    sub_B7769C(list, v7);
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                      (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


int32_t __fastcall UserServantMaster__GetHaveServantSkillLevelMax(
        UserServantMaster_o *this,
        int32_t svtId,
        int32_t skillIdx,
        const MethodInfo *method)
{
  UserServantMaster___c__DisplayClass30_0_o *v7; // x19
  UserServantEntity_o *All_BattleBuffData_BuffData; // x0
  const MethodInfo *v9; // x1
  UserServantEntity_array *AllList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v11; // x21
  BattleBuffData_BuffData_array *v12; // x20
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v13; // x21
  __int64 v14; // x0
  __int64 v16; // x0

  if ( (byte_4391219 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_FindAll_UserServantEntity___);
    sub_B775C4(&Method_System_Array_Sort_UserServantEntity___);
    sub_B775C4(&Method_System_Comparison_UserServantEntity___ctor__);
    sub_B775C4(&System_Comparison_UserServantEntity__TypeInfo);
    sub_B775C4(&Method_System_Predicate_UserServantEntity___ctor__);
    sub_B775C4(&System_Predicate_UserServantEntity__TypeInfo);
    sub_B775C4(&Method_UserServantMaster___c__DisplayClass30_0__GetHaveServantSkillLevelMax_b__0__);
    sub_B775C4(&Method_UserServantMaster___c__DisplayClass30_0__GetHaveServantSkillLevelMax_b__1__);
    sub_B775C4(&UserServantMaster___c__DisplayClass30_0_TypeInfo);
    byte_4391219 = 1;
  }
  v7 = (UserServantMaster___c__DisplayClass30_0_o *)sub_B77694(UserServantMaster___c__DisplayClass30_0_TypeInfo);
  UserServantMaster___c__DisplayClass30_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_10;
  v7->fields.svtId = svtId;
  v7->fields.skillIdx = skillIdx;
  AllList = UserServantMaster__getAllList(this, v9);
  v11 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_UserServantEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_UserServantMaster___c__DisplayClass30_0__GetHaveServantSkillLevelMax_b__0__,
    (const MethodInfo_2C3248C *)Method_System_Predicate_UserServantEntity___ctor__);
  All_BattleBuffData_BuffData = (UserServantEntity_o *)System_Array__FindAll_BattleBuffData_BuffData_(
                                                         (BattleBuffData_BuffData_array *)AllList,
                                                         (System_Predicate_T__o *)v11,
                                                         (const MethodInfo_20043F0 *)Method_System_Array_FindAll_UserServantEntity___);
  if ( !All_BattleBuffData_BuffData )
    goto LABEL_10;
  v12 = (BattleBuffData_BuffData_array *)All_BattleBuffData_BuffData;
  if ( All_BattleBuffData_BuffData->fields.id.fields.hiddenValue )
  {
    v13 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v13,
      (Il2CppObject *)v7,
      Method_UserServantMaster___c__DisplayClass30_0__GetHaveServantSkillLevelMax_b__1__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_UserServantEntity___ctor__);
    System_Array__Sort_BattleBuffData_BuffData_(
      v12,
      (System_Comparison_T__o *)v13,
      (const MethodInfo_1C56B58 *)Method_System_Array_Sort_UserServantEntity___);
    if ( !v12->max_length )
    {
      v16 = sub_B776C8(v14);
      sub_B77668(v16, 0LL);
    }
    All_BattleBuffData_BuffData = (UserServantEntity_o *)v12->m_Items[0];
    if ( All_BattleBuffData_BuffData )
      return UserServantEntity__getSkillLevel(All_BattleBuffData_BuffData, v7->fields.skillIdx, 0LL);
LABEL_10:
    sub_B7769C(All_BattleBuffData_BuffData, v9);
  }
  return 0;
}


int32_t __fastcall UserServantMaster__GetServantHavingCount(
        UserServantMaster_o *this,
        int32_t servantId,
        bool isCheckPresentBox,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  const MethodInfo *v10; // x1
  __int64 v11; // x8
  _QWORD *v12; // x23
  int32_t v13; // w21
  unsigned __int64 v14; // x27
  __int64 v15; // x8
  __int64 v16; // x24
  __int64 v17; // x25
  __int64 v19; // x0
  bool v20; // [xsp+Ch] [xbp-54h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_439120F & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_439120F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = UserServantMaster__getAllList(this, v10);
  if ( !Instance )
    goto LABEL_24;
  v11 = *((_QWORD *)Instance + 3);
  v12 = Instance;
  v20 = isCheckPresentBox;
  if ( (int)v11 >= 1 )
  {
    v13 = 0;
    v14 = 0LL;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v11 )
      {
        v19 = sub_B776C8(Instance);
        sub_B77668(v19, 0LL);
      }
      v15 = v12[v14 + 4];
      if ( v15 )
      {
        v17 = *(_QWORD *)(v15 + 80);
        v16 = *(_QWORD *)(v15 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v21.fields.currentCryptoKey = v17;
        *(_QWORD *)&v21.fields.fakeValue = v16;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v21, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_24;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     (int32_t)Instance,
                     (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_24;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                             *((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance + 2),
                             0LL);
        if ( (_DWORD)Instance == servantId )
          ++v13;
      }
      LODWORD(v11) = *((_DWORD *)v12 + 6);
      if ( (__int64)++v14 >= (int)v11 )
        goto LABEL_19;
    }
  }
  v13 = 0;
LABEL_19:
  if ( v20 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
      if ( Instance )
      {
        v13 += UserPresentBoxMaster__GetCount((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL);
        return v13;
      }
    }
LABEL_24:
    sub_B7769C(Instance, v8);
  }
  return v13;
}


int32_t __fastcall UserServantMaster__GetServantHavingTdLvCount(
        UserServantMaster_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v8; // x1
  __int64 v9; // x8
  _QWORD *v10; // x21
  int v11; // w25
  unsigned __int64 v12; // x26
  __int64 v13; // x28
  __int64 v14; // x22
  __int64 v15; // x23
  __int64 v17; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4391210 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4391210 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = UserServantMaster__getAllList(this, v8);
  if ( !Instance )
    goto LABEL_22;
  v9 = *((_QWORD *)Instance + 3);
  v10 = Instance;
  if ( (int)v9 >= 1 )
  {
    v11 = 0;
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v9 )
      {
        v17 = sub_B776C8(Instance);
        sub_B77668(v17, 0LL);
      }
      v13 = v10[v12 + 4];
      if ( v13 )
      {
        v15 = *(_QWORD *)(v13 + 80);
        v14 = *(_QWORD *)(v13 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v18.fields.currentCryptoKey = v15;
        *(_QWORD *)&v18.fields.fakeValue = v14;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v18, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_22;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     (int32_t)Instance,
                     (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_22;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                             *((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance + 2),
                             0LL);
        if ( (_DWORD)Instance == servantId )
          v11 += *(_DWORD *)(v13 + 292);
      }
      LODWORD(v9) = *((_DWORD *)v10 + 6);
      if ( (__int64)++v12 >= (int)v9 )
        goto LABEL_19;
    }
  }
  v11 = 0;
LABEL_19:
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL )
  {
LABEL_22:
    sub_B7769C(Instance, v6);
  }
  return UserPresentBoxMaster__GetCount((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL) + v11;
}


int32_t __fastcall UserServantMaster__GetServantHavintLimitMaxCount(
        UserServantMaster_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  int64_t UserId; // x23
  const MethodInfo *v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *AllList; // x20
  UserServantMaster___c_c *v11; // x8
  struct UserServantMaster___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__33_0; // x21
  Il2CppObject *v14; // x24
  struct UserServantMaster___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  DataManager_c *klass; // x8
  DataManager_o *v23; // x20
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x21
  __int64 v29; // x8
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x24
  __int128 v35; // q0
  __int64 v36; // x25
  __int64 v37; // x26
  __int64 v38; // x0
  WarEntity_o *Entity; // x0
  __int64 v40; // x1
  WarEntity_o *v41; // x25
  __int64 v42; // x24
  __int64 v43; // x26
  int32_t v44; // w0
  int v45; // w8
  __int64 v46; // x8
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  __int64 v50; // x8
  unsigned __int64 v51; // x10
  int *v52; // x11
  __int64 v53; // x0
  int32_t v55; // [xsp+Ch] [xbp-A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+30h] [xbp-80h]
  __int64 v58; // [xsp+58h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_439121B & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_B775C4(&Method_System_Func_UserServantEntity__bool___ctor__);
    sub_B775C4(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__33_0__);
    sub_B775C4(&UserServantMaster___c_TypeInfo);
    byte_439121B = 1;
  }
  HIDWORD(v58) = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  AllList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getAllList(this, v9);
  v11 = UserServantMaster___c_TypeInfo;
  if ( (BYTE3(UserServantMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantMaster___c_TypeInfo);
    v11 = UserServantMaster___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__33_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__33_0;
  if ( !_9__33_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = UserServantMaster___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__33_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_UserServantEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__33_0,
      v14,
      Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__33_0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_UserServantEntity__bool___ctor__);
    v15 = UserServantMaster___c_TypeInfo->static_fields;
    v15->__9__33_0 = (struct System_Func_UserServantEntity__bool__o *)_9__33_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v15->__9__33_0,
      (System_Int32_array **)_9__33_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  Instance = (DataManager_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                AllList,
                                (System_Func_TSource__bool__o *)_9__33_0,
                                (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  if ( !Instance )
LABEL_68:
    sub_B7769C(Instance, v6);
  klass = Instance->klass;
  v23 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_UserServantEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo )
    {
      ++v24;
      p_offset += 4;
      if ( v24 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_20;
    }
    v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_20:
    v26 = sub_B0F4C0(Instance, System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, 0LL);
  }
  v28 = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  if ( !v28 )
    sub_B7769C(0LL, v27);
  v55 = 0;
  while ( 1 )
  {
    v46 = *(_QWORD *)v28;
    if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
    {
      v47 = 0LL;
      v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v48 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v47;
        v48 += 4;
        if ( v47 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
          goto LABEL_52;
      }
      v49 = v46 + 16LL * *v48 + 312;
    }
    else
    {
LABEL_52:
      v49 = sub_B0F4C0(v28, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v28, *(_QWORD *)(v49 + 8)) & 1) == 0 )
      break;
    v29 = *(_QWORD *)v28;
    if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
    {
      v30 = 0LL;
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v31 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
          goto LABEL_28;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_28:
      v32 = sub_B0F4C0(v28, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL);
    }
    v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8));
    v34 = v33;
    if ( v33 )
    {
      v35 = *(_OWORD *)(v33 + 64);
      *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)(v33 + 48);
      *(_OWORD *)&v57.fields.fakeValue = v35;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v56 = v57;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v56, 0LL) == UserId
        && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v34, 0LL) )
      {
        v37 = *(_QWORD *)(v34 + 80);
        v36 = *(_QWORD *)(v34 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v59.fields.currentCryptoKey = v37;
        *(_QWORD *)&v59.fields.fakeValue = v36;
        v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v59, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          sub_B7769C(v38, (unsigned int)v38);
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   v38,
                   (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v41 = Entity;
        if ( !Entity )
          sub_B7769C(0LL, v40);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
               *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&Entity->fields.name,
               0LL) == servantId )
        {
          v43 = *(_QWORD *)(v34 + 96);
          v42 = *(_QWORD *)(v34 + 104);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v60.fields.currentCryptoKey = v43;
          *(_QWORD *)&v60.fields.fakeValue = v42;
          v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v60, 0LL);
          v45 = v55;
          if ( v44 == LODWORD(v41->fields.targetId) )
            v45 = v55 + 1;
          v55 = v45;
        }
      }
    }
  }
  v58 = 0x1000000B9LL;
  v50 = *(_QWORD *)v28;
  if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
  {
    v51 = 0LL;
    v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      ++v51;
      v52 += 4;
      if ( v51 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
        goto LABEL_60;
    }
    v53 = v50 + 16LL * *v52 + 312;
  }
  else
  {
LABEL_60:
    v53 = sub_B0F4C0(v28, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v53)(v28, *(_QWORD *)(v53 + 8));
  if ( (_DWORD)v58 == 185 )
    v58 = 185LL;
  return v55;
}


int32_t __fastcall UserServantMaster__GetSvtEquipFriendShip(UserServantMaster_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  DataManager_o *v6; // x21
  int32_t Count; // w0
  int32_t v8; // w23
  int32_t v9; // w22
  int32_t v10; // w24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v12; // x25
  __int64 v13; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v14; // q0
  void *monitor; // x25
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x26
  WarEntity_o *Entity; // x0
  ServantEntity_o *v18; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_439121C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&UserServantEntity_TypeInfo);
    byte_439121C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v6 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
               v10,
               (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v12 = Item;
        v13 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v13
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v13 - 1] == UserServantEntity_TypeInfo )
        {
          v14 = Item[4];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v21.fields.currentCryptoKey = Item[3];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v21.fields.fakeValue = v14;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v20 = v21;
          if ( (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v20, 0LL) == v6
            && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v12, 0LL) )
          {
            klass = v12[5].klass;
            monitor = v12[5].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v22.fields.currentCryptoKey = klass;
            *(_QWORD *)&v22.fields.fakeValue = monitor;
            v4 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v22, 0LL);
            Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster;
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       v4,
                       (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              v18 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServantEquip(*(&Entity->fields.startType + 1), 0LL) )
                v9 += ServantEntity__get_IsFriendShipSvtEquip(v18, 0LL);
            }
          }
        }
      }
      if ( ++v10 >= v8 )
        return v9;
    }
LABEL_30:
    sub_B7769C(Instance, v4);
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
  UserServantMaster___c__DisplayClass1_0_o *v7; // x22
  __int64 v8; // x0
  const MethodInfo *v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *List; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v11; // x21
  UserServantEntity_o *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4391200 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____69504168);
    sub_B775C4(&Method_System_Func_UserServantEntity__bool___ctor__);
    sub_B775C4(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_B775C4(&Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__);
    sub_B775C4(&UserServantMaster___c__DisplayClass1_0_TypeInfo);
    byte_4391200 = 1;
  }
  v7 = (UserServantMaster___c__DisplayClass1_0_o *)sub_B77694(UserServantMaster___c__DisplayClass1_0_TypeInfo);
  UserServantMaster___c__DisplayClass1_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_B7769C(v8, v9);
  v7->fields.svtId = svtId;
  List = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getList(this, v9);
  v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_UserServantEntity__bool___ctor__);
  v12 = (UserServantEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 List,
                                 (System_Func_TSource__bool__o *)v11,
                                 (const MethodInfo_1D31FE4 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____69504168);
  *svtEnt = v12;
  sub_B77560((BattleServantConfConponent_o *)svtEnt, (System_Int32_array **)v12, v13, v14, v15, v16, v17, v18);
  return *svtEnt != 0LL;
}


bool __fastcall UserServantMaster__TryGetEntityListBySvtId(
        UserServantMaster_o *this,
        System_Collections_Generic_List_UserServantEntity__o **userServantList,
        int32_t svtId,
        bool isIncludeStorage,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x21
  const MethodInfo *v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x0
  __int64 v23; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x24
  __int64 v25; // x10
  void *monitor; // x25
  EventMissionProgressRequest_Argument_ProgressData_c *v27; // x26
  __int64 v28; // x0
  __int64 v29; // x1
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  Il2CppObject *syncRoot; // x8
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v41; // x22
  unsigned __int64 v42; // x19
  EventMissionProgressRequest_Argument_ProgressData_o *v43; // x23
  void *v44; // x24
  EventMissionProgressRequest_Argument_ProgressData_c *v45; // x25
  __int64 v47; // x0
  bool v48; // [xsp+Ch] [xbp-64h]
  BattleServantConfConponent_o *v49; // [xsp+10h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_439121F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_DataManager_GetMaster_UserServantStorageMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&UserServantEntity_TypeInfo);
    byte_439121F = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_55;
  v48 = isIncludeStorage;
  v49 = (BattleServantConfConponent_o *)userServantList;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v15;
        p_offset += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v19;
        v20 += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v21 + 8));
    v24 = v22;
    if ( !v22
      || (v25 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1), *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v25)
      || (UserServantEntity_c *)v22->klass->_2.typeHierarchy[v25 - 1] != UserServantEntity_TypeInfo )
    {
      sub_B7769C(v22, v23);
    }
    v27 = v22[2].klass;
    monitor = v22[2].monitor;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v50.fields.currentCryptoKey = v27;
    *(_QWORD *)&v50.fields.fakeValue = monitor;
    v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v50, 0LL);
    if ( (_DWORD)v28 == svtId )
    {
      if ( !v9 )
        sub_B7769C(v28, v29);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v9,
        v24,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
    }
  }
  v30 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      v32 += 4;
      if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_31:
    v33 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  if ( v48 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)UserServantStorageMaster__getList(
                                                                                           (UserServantStorageMaster_o *)list,
                                                                                           v10);
      if ( list )
      {
        syncRoot = list->fields._syncRoot;
        v41 = list;
        if ( (int)syncRoot >= 1 )
        {
          v42 = 0LL;
          do
          {
            if ( v42 >= (unsigned int)syncRoot )
            {
              v47 = sub_B776C8(list);
              sub_B77668(v47, 0LL);
            }
            v43 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)&v41[1].klass + v42);
            if ( v43 )
            {
              v45 = v43[2].klass;
              v44 = v43[2].monitor;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v51.fields.currentCryptoKey = v45;
              *(_QWORD *)&v51.fields.fakeValue = v44;
              list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                                                                   v51,
                                                                                                   0LL);
              if ( (_DWORD)list == svtId )
              {
                if ( !v9 )
                  goto LABEL_55;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v9,
                  v43,
                  (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
            LODWORD(syncRoot) = v41->fields._syncRoot;
            ++v42;
          }
          while ( (__int64)v42 < (int)syncRoot );
        }
        goto LABEL_50;
      }
    }
LABEL_55:
    sub_B7769C(list, v10);
  }
LABEL_50:
  v49->klass = (BattleServantConfConponent_c *)v9;
  sub_B77560(v49, (System_Int32_array **)v9, v34, v35, v36, v37, v38, v39);
  if ( !v49->klass )
    goto LABEL_55;
  return SLODWORD(v49->klass->_1.namespaze) > 0;
}


bool __fastcall UserServantMaster__TryGetEntitySvtStorageListBySvtId(
        UserServantMaster_o *this,
        System_Collections_Generic_List_UserServantEntity__o **userStorageServantList,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x21
  UserServantStorageMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct System_String_o *MasterName_k__BackingField; // x8
  UserServantStorageMaster_o *v16; // x22
  unsigned __int64 v17; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x23
  void *monitor; // x24
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x25
  __int64 v22; // x0
  BattleServantConfConponent_o *v23; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4391220 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_UserServantStorageMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4391220 = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantStorageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  v23 = (BattleServantConfConponent_o *)userStorageServantList;
  Master_WarQuestSelectionMaster = (UserServantStorageMaster_o *)UserServantStorageMaster__getList(
                                                                   Master_WarQuestSelectionMaster,
                                                                   v8);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  MasterName_k__BackingField = Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
  v16 = Master_WarQuestSelectionMaster;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v17 = 0LL;
    do
    {
      if ( v17 >= (unsigned int)MasterName_k__BackingField )
      {
        v22 = sub_B776C8(Master_WarQuestSelectionMaster);
        sub_B77668(v22, 0LL);
      }
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)&v16->fields.list + v17);
      if ( v18 )
      {
        klass = v18[2].klass;
        monitor = v18[2].monitor;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v24.fields.currentCryptoKey = klass;
        *(_QWORD *)&v24.fields.fakeValue = monitor;
        Master_WarQuestSelectionMaster = (UserServantStorageMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                                         v24,
                                                                         0LL);
        if ( (_DWORD)Master_WarQuestSelectionMaster == svtId )
        {
          if ( !v6 )
            goto LABEL_22;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v6,
            v18,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
        }
      }
      LODWORD(MasterName_k__BackingField) = v16->fields._MasterName_k__BackingField;
      ++v17;
    }
    while ( (__int64)v17 < (int)MasterName_k__BackingField );
  }
  v23->klass = (BattleServantConfConponent_c *)v6;
  sub_B77560(v23, (System_Int32_array **)v6, v9, v10, v11, v12, v13, v14);
  if ( !v23->klass )
LABEL_22:
    sub_B7769C(Master_WarQuestSelectionMaster, v8);
  return SLODWORD(v23->klass->_1.namespaze) > 0;
}


void __fastcall UserServantMaster__continueDeviceUserServant(UserServantMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  __int64 v4; // x1
  int64_t list; // x0
  int32_t Count; // w21
  int64_t v7; // x22
  int32_t v8; // w23
  int64_t v9; // x24
  __int64 v10; // x10
  __int128 v11; // q0
  __int128 v12; // q0
  const MethodInfo *v13; // x1
  System_Int64_array *v14; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+40h] [xbp-70h]

  if ( (byte_4391213 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&UserServantEntity_TypeInfo);
    sub_B775C4(&UserServantNewManager_TypeInfo);
    byte_4391213 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v7 = list;
    v8 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v8,
                        (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v9 = list;
        v10 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v10
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v10 - 8) == UserServantEntity_TypeInfo )
        {
          v11 = *(_OWORD *)(list + 64);
          *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)(list + 48);
          *(_OWORD *)&v17.fields.fakeValue = v11;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v16 = v17;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v16, 0LL);
          if ( list == v7 )
          {
            list = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v9, 0LL);
            if ( (list & 1) == 0 )
            {
              v12 = *(_OWORD *)(v9 + 32);
              *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)(v9 + 16);
              *(_OWORD *)&v17.fields.fakeValue = v12;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v15 = v17;
              list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v15, 0LL);
              if ( !v3 )
                break;
              System_Collections_Generic_List_long___Add(
                v3,
                list,
                (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__);
            }
          }
        }
      }
      if ( ++v8 >= Count )
        goto LABEL_24;
    }
LABEL_29:
    sub_B7769C(list, v4);
  }
LABEL_24:
  if ( !v3 )
    goto LABEL_29;
  v14 = System_Collections_Generic_List_long___ToArray(
          v3,
          (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  }
  UserServantNewManager__SetOld_35684740(v14, v13);
}


UserServantEntity_array *__fastcall UserServantMaster__getAllList(UserServantMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *List; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v4; // x19
  DataManager_o *Instance; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4391215 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor___69411152);
    sub_B775C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4391215 = 1;
  }
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, method);
  v4 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v4,
    List,
    (const MethodInfo_30527CC *)Method_System_Collections_Generic_List_UserServantEntity___ctor___69411152);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL
    || (Instance = (DataManager_o *)UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, v6), !v4) )
  {
    sub_B7769C(Instance, v6);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v4,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v4,
                                      (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getCombineMaterialList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x27
  int64_t v6; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x23
  int32_t v9; // w24
  int64_t v10; // x25
  __int64 v11; // x10
  __int128 v12; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x21
  __int64 v14; // x26
  __int64 v15; // x27
  ServantEntity_o *v16; // x26
  int64_t v18; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4391214 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&UserServantEntity_TypeInfo);
    byte_4391214 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_31;
  v6 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v9,
                            (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v10 = Instance;
        v11 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v11
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v11 - 8) == UserServantEntity_TypeInfo )
        {
          v12 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v20.fields.fakeValue = v12;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v19 = v20;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v19, 0LL);
          if ( Instance == v6 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v10, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v18 = v6;
              v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v15 = *(_QWORD *)(v10 + 80);
              v14 = *(_QWORD *)(v10 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v21.fields.currentCryptoKey = v15;
              *(_QWORD *)&v21.fields.fakeValue = v14;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v21, 0LL);
              if ( !v13 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v13;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v13,
                                    Instance,
                                    (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v6 = v18;
              if ( !Instance )
                break;
              v16 = (ServantEntity_o *)Instance;
              Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                Instance = ServantEntity__get_IsServantMaterialTd(v16, 0LL);
                if ( (Instance & 1) == 0 )
                {
                  if ( !v8 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v8,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
                    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
                }
              }
            }
          }
        }
      }
      if ( ++v9 >= Count )
        goto LABEL_29;
    }
LABEL_31:
    sub_B7769C(Instance, v4);
  }
LABEL_29:
  if ( !v8 )
    goto LABEL_31;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                      (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


int32_t __fastcall UserServantMaster__getCount(
        UserServantMaster_o *this,
        int32_t *servantSum,
        int32_t *servantEquipSum,
        bool friendShipSvtEqExclude,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x19
  DataManager_o *v12; // x24
  int32_t Count; // w0
  int32_t v14; // w25
  int32_t v15; // w26
  int32_t v16; // w27
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v18; // x28
  __int64 v19; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v20; // q0
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x19
  void *monitor; // x28
  WarEntity_o *Entity; // x0
  int32_t v24; // w19
  ServantEntity_o *v25; // x28
  int32_t *v26; // x9
  int32_t *v28; // [xsp+10h] [xbp-A0h]
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // [xsp+18h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4391201 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&UserServantEntity_TypeInfo);
    byte_4391201 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
LABEL_35:
    sub_B7769C(Instance, v10);
  v12 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v28 = servantSum;
    v29 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    v14 = Count;
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_35;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
               v16,
               (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v18 = Item;
        v19 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v19
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v19 - 1] == UserServantEntity_TypeInfo )
        {
          v20 = Item[4];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v31.fields.currentCryptoKey = Item[3];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v31.fields.fakeValue = v20;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v30 = v31;
          if ( (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v30, 0LL) == v12
            && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v18, 0LL) )
          {
            klass = v18[5].klass;
            monitor = v18[5].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v32.fields.currentCryptoKey = klass;
            *(_QWORD *)&v32.fields.fakeValue = monitor;
            v10 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v32, 0LL);
            Instance = (DataManager_o *)v29;
            if ( !v29 )
              goto LABEL_35;
            ++v15;
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v29,
                       v10,
                       (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              v24 = *(&Entity->fields.startType + 1);
              v25 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServant(v24, 0LL) )
              {
                v26 = v28;
              }
              else
              {
                if ( !SvtType__IsKeepServantEquip(v24, 0LL)
                  || friendShipSvtEqExclude && ServantEntity__get_IsFriendShipSvtEquip(v25, 0LL) )
                {
                  goto LABEL_31;
                }
                v26 = servantEquipSum;
              }
              ++*v26;
            }
          }
        }
      }
LABEL_31:
      if ( ++v16 >= v14 )
        return v15;
    }
  }
  return 0;
}


int32_t __fastcall UserServantMaster__getCountWithoutMaterial(
        UserServantMaster_o *this,
        int32_t *servantSum,
        int32_t *servantEquipSum,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x19
  DataManager_o *v10; // x23
  int32_t Count; // w0
  int32_t v12; // w24
  int32_t v13; // w25
  int32_t v14; // w26
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v16; // x27
  __int64 v17; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v18; // q0
  void *monitor; // x27
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x28
  WarEntity_o *Entity; // x0
  int32_t v22; // w27
  int32_t *v23; // x9
  int32_t *v25; // [xsp+10h] [xbp-A0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4391202 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&UserServantEntity_TypeInfo);
    byte_4391202 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
LABEL_33:
    sub_B7769C(Instance, v8);
  v10 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v25 = servantSum;
    v12 = Count;
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_33;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
               v14,
               (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v16 = Item;
        v17 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v17
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v17 - 1] == UserServantEntity_TypeInfo )
        {
          v18 = Item[4];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v27.fields.currentCryptoKey = Item[3];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v27.fields.fakeValue = v18;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v26 = v27;
          if ( (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v26, 0LL) == v10
            && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v16, 0LL) )
          {
            klass = v16[5].klass;
            monitor = v16[5].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v28.fields.currentCryptoKey = klass;
            *(_QWORD *)&v28.fields.fakeValue = monitor;
            v8 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v28, 0LL);
            Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster;
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_33;
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       v8,
                       (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              v22 = *(&Entity->fields.startType + 1);
              if ( SvtType__IsOrganization(v22, 0LL) )
              {
                v23 = v25;
LABEL_28:
                ++v13;
                ++*v23;
                goto LABEL_29;
              }
              if ( SvtType__IsServantEquip(v22, 0LL) )
              {
                v23 = servantEquipSum;
                goto LABEL_28;
              }
            }
          }
        }
      }
LABEL_29:
      if ( ++v14 >= v12 )
        return v13;
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  UserServantEntity_o *v10; // x23
  __int64 v11; // x10
  void *monitor; // x24
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4391211 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&UserServantEntity_TypeInfo);
    byte_4391211 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v8,
               (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v10 = (UserServantEntity_o *)Item;
        v11 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v11
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v11 - 1] == UserServantEntity_TypeInfo )
        {
          klass = Item[5].klass;
          monitor = Item[5].monitor;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v15.fields.currentCryptoKey = klass;
          *(_QWORD *)&v15.fields.fakeValue = monitor;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v15, 0LL) == heroineId
            && UserServantEntity__IsHeroine(v10, 0LL) )
          {
            return v10;
          }
        }
      }
      if ( ++v8 >= v7 )
        return 0LL;
    }
LABEL_18:
    sub_B7769C(list, *(_QWORD *)&heroineId);
  }
  return 0LL;
}


UserServantEntity_array *__fastcall UserServantMaster__getKeepServantEquipList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t v6; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x23
  int32_t v9; // w24
  int64_t v10; // x25
  __int64 v11; // x10
  __int128 v12; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x21
  __int64 v14; // x26
  __int64 v15; // x27
  int64_t v17; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_439120B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&UserServantEntity_TypeInfo);
    byte_439120B = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v6 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v9,
                            (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v10 = Instance;
        v11 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v11
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v11 - 8) == UserServantEntity_TypeInfo )
        {
          v12 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v19.fields.fakeValue = v12;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v18 = v19;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v18, 0LL);
          if ( Instance == v6 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v10, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v17 = v6;
              v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v15 = *(_QWORD *)(v10 + 80);
              v14 = *(_QWORD *)(v10 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v20.fields.currentCryptoKey = v15;
              *(_QWORD *)&v20.fields.fakeValue = v14;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v20, 0LL);
              if ( !v13 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v13;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v13,
                                    Instance,
                                    (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v6 = v17;
              if ( !Instance )
                break;
              Instance = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( !v8 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v8,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
                  (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v9 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B7769C(Instance, v4);
  }
LABEL_28:
  if ( !v8 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                      (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getKeepServantList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t v6; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x23
  int32_t v9; // w24
  int64_t v10; // x25
  __int64 v11; // x10
  __int128 v12; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x21
  __int64 v14; // x26
  __int64 v15; // x27
  int64_t v17; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4391209 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&UserServantEntity_TypeInfo);
    byte_4391209 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v6 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v9,
                            (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v10 = Instance;
        v11 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v11
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v11 - 8) == UserServantEntity_TypeInfo )
        {
          v12 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v19.fields.fakeValue = v12;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v18 = v19;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v18, 0LL);
          if ( Instance == v6 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v10, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v17 = v6;
              v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v15 = *(_QWORD *)(v10 + 80);
              v14 = *(_QWORD *)(v10 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v20.fields.currentCryptoKey = v15;
              *(_QWORD *)&v20.fields.fakeValue = v14;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v20, 0LL);
              if ( !v13 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v13;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v13,
                                    Instance,
                                    (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v6 = v17;
              if ( !Instance )
                break;
              Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( !v8 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v8,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
                  (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v9 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B7769C(Instance, v4);
  }
LABEL_28:
  if ( !v8 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                      (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getList(UserServantMaster_o *this, const MethodInfo *method)
{
  int64_t UserId; // x1
  const MethodInfo *v4; // x2

  if ( (byte_4391203 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_4391203 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  return UserServantMaster__getList_35669268(this, UserId, v4);
}


UserServantEntity_array *__fastcall UserServantMaster__getList_35669268(
        UserServantMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  int32_t v8; // w23
  UserServantEntity_o *v9; // x24
  __int64 v10; // x10
  __int128 v11; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-70h]

  if ( (byte_4391204 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&UserServantEntity_TypeInfo);
    byte_4391204 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v8,
                        (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v9 = (UserServantEntity_o *)list;
        v10 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v10
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v10 - 8) == UserServantEntity_TypeInfo )
        {
          v11 = *(_OWORD *)(list + 64);
          *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)(list + 48);
          *(_OWORD *)&v14.fields.fakeValue = v11;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v13 = v14;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v13, 0LL);
          if ( list == userId )
          {
            list = UserServantEntity__IsWithdrawal(v9, 0LL);
            if ( (list & 1) == 0 )
            {
              if ( !v7 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v7,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
                (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            }
          }
        }
      }
      if ( ++v8 >= Count )
        goto LABEL_18;
    }
LABEL_20:
    sub_B7769C(list, userId);
  }
LABEL_18:
  if ( !v7 )
    goto LABEL_20;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                      (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getNoneCombineSvt(
        UserServantMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v7; // x26
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x23
  int32_t v10; // w24
  int64_t v11; // x25
  __int64 v12; // x10
  __int128 v13; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x19
  __int64 v15; // x26
  __int64 v16; // x27
  int64_t v18; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4391212 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&UserServantEntity_TypeInfo);
    byte_4391212 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this->fields.list )
    goto LABEL_27;
  v7 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v10,
                            (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v11 = Instance;
        v12 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v12
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v12 - 8) == UserServantEntity_TypeInfo )
        {
          v13 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v20.fields.fakeValue = v13;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v19 = v20;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v19, 0LL);
          if ( Instance == userId )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v11, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v18 = userId;
              v14 = v7;
              v16 = *(_QWORD *)(v11 + 80);
              v15 = *(_QWORD *)(v11 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v21.fields.currentCryptoKey = v16;
              *(_QWORD *)&v21.fields.fakeValue = v15;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v21, 0LL);
              if ( !v14 )
                break;
              v7 = v14;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v14,
                                    Instance,
                                    (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              userId = v18;
              if ( !Instance )
                break;
              if ( *(_DWORD *)(Instance + 84) != 3 )
              {
                if ( !v9 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v9,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
                  (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v10 >= Count )
        goto LABEL_25;
    }
LABEL_27:
    sub_B7769C(Instance, v6);
  }
LABEL_25:
  if ( !v9 )
    goto LABEL_27;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                      (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getNpUpServantList(
        UserServantMaster_o *this,
        UserServantEntity_o *usrSvtEnt,
        const MethodInfo *method)
{
  void *Instance; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v6; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x22
  int32_t Count; // w23
  SvtMaterialTdMaster_o *v10; // x24
  __int64 v11; // x25
  __int64 v12; // x26
  int32_t v13; // w25
  __int64 v14; // x27
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x10
  System_Int32_array **v22; // x1
  EventMissionProgressRequest_Argument_ProgressData_o **v23; // x26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v24; // x28
  void *monitor; // x27
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x28
  int32_t v27; // w27
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // [xsp+8h] [xbp-68h]
  WarBoardPieceData_array *array; // [xsp+18h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_439120E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_Exists_SvtMaterialTdEntity___);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_System_Predicate_SvtMaterialTdEntity___ctor__);
    sub_B775C4(&System_Predicate_SvtMaterialTdEntity__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_UserServantMaster___c__DisplayClass15_0__getNpUpServantList_b__0__);
    sub_B775C4(&UserServantMaster___c__DisplayClass15_0_TypeInfo);
    sub_B775C4(&UserServantEntity_TypeInfo);
    byte_439120E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_39;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
  if ( !usrSvtEnt )
    goto LABEL_39;
  v10 = (SvtMaterialTdMaster_o *)Instance;
  v12 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v31.fields.currentCryptoKey = v12;
  *(_QWORD *)&v31.fields.fakeValue = v11;
  v29 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v31, 0LL);
  if ( !v10 )
    goto LABEL_39;
  Instance = SvtMaterialTdMaster__GetEntityList(v10, (int32_t)Instance, 0LL);
  array = (WarBoardPieceData_array *)Instance;
  if ( Count >= 1 )
  {
    v13 = 0;
    do
    {
      v14 = sub_B77694(UserServantMaster___c__DisplayClass15_0_TypeInfo);
      UserServantMaster___c__DisplayClass15_0___ctor((UserServantMaster___c__DisplayClass15_0_o *)v14, 0LL);
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_39;
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   v13,
                   (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v14 )
        goto LABEL_39;
      if ( Instance
        && (v21 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v21) )
      {
        if ( *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v21 - 8) == UserServantEntity_TypeInfo )
          v22 = (System_Int32_array **)Instance;
        else
          v22 = 0LL;
      }
      else
      {
        v22 = 0LL;
      }
      *(_QWORD *)(v14 + 16) = v22;
      v23 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v14 + 16);
      sub_B77560((BattleServantConfConponent_o *)(v14 + 16), v22, v15, v16, v17, v18, v19, v20);
      Instance = *(void **)(v14 + 16);
      if ( Instance )
      {
        Instance = (void *)UserServantEntity__IsWithdrawal((UserServantEntity_o *)Instance, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          v24 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_SvtMaterialTdEntity__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v24,
            (Il2CppObject *)v14,
            Method_UserServantMaster___c__DisplayClass15_0__getNpUpServantList_b__0__,
            (const MethodInfo_2C3248C *)Method_System_Predicate_SvtMaterialTdEntity___ctor__);
          Instance = (void *)System_Array__Exists_WarBoardPieceData_(
                               array,
                               (System_Predicate_T__o *)v24,
                               (const MethodInfo_2003E50 *)Method_System_Array_Exists_SvtMaterialTdEntity___);
          v6 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v14 + 16);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v8 )
              goto LABEL_39;
LABEL_35:
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v8,
              v6,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            continue;
          }
          if ( !v6 )
            goto LABEL_39;
          klass = v6[2].klass;
          monitor = v6[2].monitor;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v32.fields.currentCryptoKey = klass;
          *(_QWORD *)&v32.fields.fakeValue = monitor;
          v6 = (EventMissionProgressRequest_Argument_ProgressData_o *)(unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                                                      v32,
                                                                                      0LL);
          Instance = v29;
          if ( !v29 )
            goto LABEL_39;
          Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v29,
                       (int32_t)v6,
                       (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_39;
          v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                  *((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance + 2),
                  0LL);
          Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                               usrSvtEnt->fields.svtId,
                               0LL);
          if ( v27 == (_DWORD)Instance )
          {
            if ( !v8 )
              goto LABEL_39;
            v6 = *v23;
            goto LABEL_35;
          }
        }
      }
    }
    while ( ++v13 < Count );
  }
  if ( !v8 )
LABEL_39:
    sub_B7769C(Instance, v6);
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                      (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getOrganizationList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t v6; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x23
  int32_t v9; // w24
  int64_t v10; // x25
  __int64 v11; // x10
  __int128 v12; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x21
  __int64 v14; // x26
  __int64 v15; // x27
  int64_t v17; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_439120A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&UserServantEntity_TypeInfo);
    byte_439120A = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v6 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v9,
                            (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v10 = Instance;
        v11 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v11
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v11 - 8) == UserServantEntity_TypeInfo )
        {
          v12 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v19.fields.fakeValue = v12;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v18 = v19;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v18, 0LL);
          if ( Instance == v6 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v10, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v17 = v6;
              v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v15 = *(_QWORD *)(v10 + 80);
              v14 = *(_QWORD *)(v10 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v20.fields.currentCryptoKey = v15;
              *(_QWORD *)&v20.fields.fakeValue = v14;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v20, 0LL);
              if ( !v13 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v13;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v13,
                                    Instance,
                                    (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v6 = v17;
              if ( !Instance )
                break;
              Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( !v8 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v8,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
                  (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v9 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B7769C(Instance, v4);
  }
LABEL_28:
  if ( !v8 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                      (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


int32_t __fastcall UserServantMaster__getSameSvtNpLvCache(
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x25
  __int64 v17; // x26
  SvtMaterialTdMaster_o *v18; // x24
  int32_t i; // w25
  __int64 v20; // x27
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x10
  System_Int32_array **v28; // x1
  int64_t *v29; // x26
  int64_t v30; // x8
  __int128 v31; // q0
  int64_t v32; // x0
  __int128 v33; // q0
  int64_t v34; // x28
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v35; // x28
  int64_t v36; // x8
  __int64 v37; // x27
  __int64 v38; // x28
  int32_t v39; // w27
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v40; // x20
  __int64 v41; // x19
  __int64 v42; // x23
  WarBoardPieceData_array *array; // [xsp+0h] [xbp-E0h]
  System_Collections_Generic_Dictionary_int__List_int___o **v45; // [xsp+8h] [xbp-D8h]
  System_Collections_Generic_List_int__o *v46; // [xsp+10h] [xbp-D0h]
  UserServantEntity_o *v47; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+60h] [xbp-80h]
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_439120D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_Exists_SvtMaterialTdEntity___);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_System_Predicate_SvtMaterialTdEntity___ctor__);
    sub_B775C4(&System_Predicate_SvtMaterialTdEntity__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_UserServantMaster___c__DisplayClass14_0__getSameSvtNpLvCache_b__0__);
    sub_B775C4(&UserServantMaster___c__DisplayClass14_0_TypeInfo);
    sub_B775C4(&UserServantEntity_TypeInfo);
    byte_439120D = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  value = (WarBoardEvalValueSquare_CalcEval_o *)v7;
  if ( !usrSvtEnt )
    goto LABEL_64;
  if ( UserServantEntity__IsEventJoin(usrSvtEnt, 0LL) )
    goto LABEL_13;
  v10 = *cachedUserServantNpLvDict;
  v12 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v52.fields.currentCryptoKey = v12;
  *(_QWORD *)&v52.fields.fakeValue = v11;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v52, 0LL);
  if ( !v10 )
    goto LABEL_64;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v10,
          Instance,
          &value,
          (const MethodInfo_2FF5E9C *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
LABEL_13:
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      DataManager__GetMasterData_WarQuestSelectionMaster_(
        (DataManager_o *)Instance,
        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = (int64_t)this->fields.list;
      if ( Instance )
      {
        Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                  (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
        v46 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v46,
          (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
        Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
          v47 = usrSvtEnt;
          v17 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
          v16 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
          v18 = (SvtMaterialTdMaster_o *)MasterData_WarQuestSelectionMaster;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v53.fields.currentCryptoKey = v17;
          *(_QWORD *)&v53.fields.fakeValue = v16;
          v45 = cachedUserServantNpLvDict;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v53, 0LL);
          if ( v18 )
          {
            Instance = (int64_t)SvtMaterialTdMaster__GetEntityList(v18, Instance, 0LL);
            array = (WarBoardPieceData_array *)Instance;
            if ( Count >= 1 )
            {
              for ( i = 0; i < Count; ++i )
              {
                v20 = sub_B77694(UserServantMaster___c__DisplayClass14_0_TypeInfo);
                UserServantMaster___c__DisplayClass14_0___ctor((UserServantMaster___c__DisplayClass14_0_o *)v20, 0LL);
                Instance = (int64_t)this->fields.list;
                if ( !Instance )
                  goto LABEL_64;
                Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                      (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                      i,
                                      (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
                if ( !v20 )
                  goto LABEL_64;
                if ( Instance
                  && (v27 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1),
                      *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v27) )
                {
                  if ( *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v27 - 8) == UserServantEntity_TypeInfo )
                    v28 = (System_Int32_array **)Instance;
                  else
                    v28 = 0LL;
                }
                else
                {
                  v28 = 0LL;
                }
                *(_QWORD *)(v20 + 16) = v28;
                v29 = (int64_t *)(v20 + 16);
                sub_B77560((BattleServantConfConponent_o *)(v20 + 16), v28, v21, v22, v23, v24, v25, v26);
                Instance = *(_QWORD *)(v20 + 16);
                if ( Instance )
                {
                  Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)Instance, 0LL);
                  if ( (Instance & 1) == 0 )
                  {
                    Instance = *v29;
                    if ( !*v29 )
                      goto LABEL_64;
                    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
                    if ( (Instance & 1) == 0 )
                    {
                      v30 = *v29;
                      if ( !*v29 )
                        goto LABEL_64;
                      v31 = *(_OWORD *)(v30 + 32);
                      *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(v30 + 16);
                      *(_OWORD *)&v50.fields.fakeValue = v31;
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                      }
                      v49 = v50;
                      v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v49, 0LL);
                      v33 = *(_OWORD *)&v47->fields.id.fields.fakeValue;
                      v34 = v32;
                      *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&v47->fields.id.fields.currentCryptoKey;
                      *(_OWORD *)&v48.fields.fakeValue = v33;
                      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v48, 0LL);
                      if ( v34 != Instance )
                      {
                        Instance = UserServantEntity__IsMaterialTd(v47, 0LL);
                        if ( (Instance & 1) == 0 )
                        {
                          Instance = *v29;
                          if ( !*v29 )
                            goto LABEL_64;
                          Instance = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Instance, 0LL);
                          if ( (Instance & 1) != 0 )
                          {
                            v35 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_SvtMaterialTdEntity__TypeInfo);
                            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                              v35,
                              (Il2CppObject *)v20,
                              Method_UserServantMaster___c__DisplayClass14_0__getSameSvtNpLvCache_b__0__,
                              (const MethodInfo_2C3248C *)Method_System_Predicate_SvtMaterialTdEntity___ctor__);
                            Instance = System_Array__Exists_WarBoardPieceData_(
                                         array,
                                         (System_Predicate_T__o *)v35,
                                         (const MethodInfo_2003E50 *)Method_System_Array_Exists_SvtMaterialTdEntity___);
                            if ( (Instance & 1) == 0 )
                              continue;
                          }
                          else
                          {
                            v36 = *v29;
                            if ( !*v29 )
                              goto LABEL_64;
                            v38 = *(_QWORD *)(v36 + 80);
                            v37 = *(_QWORD *)(v36 + 88);
                            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                            }
                            *(_QWORD *)&v54.fields.currentCryptoKey = v38;
                            *(_QWORD *)&v54.fields.fakeValue = v37;
                            v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v54, 0LL);
                            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                         v47->fields.svtId,
                                         0LL);
                            if ( v39 != (_DWORD)Instance )
                              continue;
                            Instance = UserServantEntity__IsEventJoin(v47, 0LL);
                            if ( (Instance & 1) != 0 )
                              continue;
                          }
                          if ( !*v29 )
                            goto LABEL_64;
                          Instance = (int64_t)v46;
                          if ( !v46 )
                            goto LABEL_64;
                          System_Collections_Generic_List_int___Add(
                            v46,
                            *(_DWORD *)(*v29 + 292),
                            (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
                        }
                      }
                    }
                  }
                }
              }
            }
            if ( v46 )
            {
              if ( v46->fields._size < 1 )
                return 0;
              v13 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)v46, 0LL);
              if ( UserServantEntity__IsEventJoin(v47, 0LL) )
                return v13;
              v40 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)*v45;
              v42 = *(_QWORD *)&v47->fields.svtId.fields.currentCryptoKey;
              v41 = *(_QWORD *)&v47->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v55.fields.currentCryptoKey = v42;
              *(_QWORD *)&v55.fields.fakeValue = v41;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v55, 0LL);
              if ( v40 )
              {
                System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
                  v40,
                  Instance,
                  (WarBoardAIRoute_RouteData_o *)v46,
                  (const MethodInfo_2FF4150 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
                return v13;
              }
            }
          }
        }
      }
    }
LABEL_64:
    sub_B7769C(Instance, v9);
  }
  Instance = (int64_t)value;
  if ( !value )
    goto LABEL_64;
  if ( SLODWORD(value->fields.eval) < 1 )
    return 0;
  return System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)value, 0LL);
}


int32_t __fastcall UserServantMaster__getServantAllNum(UserServantMaster_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x19
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *v8; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v10; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  unsigned __int64 v14; // x10
  int *v15; // x11
  __int64 v16; // x0
  UserServantEntity_o *v17; // x0
  UserServantEntity_o *v18; // x24
  __int64 v19; // x9
  __int128 v20; // q0
  int64_t v21; // x25
  __int64 v22; // x25
  __int64 v23; // x26
  __int64 v24; // x0
  ServantEntity_o *Entity; // x0
  __int64 v26; // x1
  __int64 v27; // x25
  __int64 v28; // x26
  __int64 v29; // x1
  __int64 v30; // x24
  __int64 v31; // x25
  int32_t v32; // w0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0
  __int64 v37; // x8
  int64_t v38; // x22
  unsigned __int64 v39; // x20
  __int64 v40; // x23
  __int128 v41; // q0
  int64_t v42; // x24
  __int64 v43; // x24
  __int64 v44; // x25
  __int64 v45; // x24
  __int64 v46; // x25
  __int64 v47; // x23
  __int64 v48; // x24
  int32_t v49; // w0
  __int64 v51; // x0
  UserServantStorageMaster_o *v52; // [xsp+8h] [xbp-D8h]
  int32_t v53; // [xsp+14h] [xbp-CCh]
  System_Collections_Generic_List_int__o *v54; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+60h] [xbp-80h]
  __int64 v58; // [xsp+88h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_4391206 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&UserServantEntity_TypeInfo);
    byte_4391206 = 1;
  }
  HIDWORD(v58) = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  v52 = (UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v54 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v54,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_88;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v53 = 0;
  v8 = Enumerator;
LABEL_7:
  if ( !v8 )
    sub_B7769C(Enumerator, v7);
  while ( 1 )
  {
    klass = v8->klass;
    if ( *(_WORD *)&v8->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_B0F4C0(v8, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v8,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = v8->klass;
    if ( *(_WORD *)&v8->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_19:
      v16 = sub_B0F4C0(v8, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v17 = (UserServantEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                   v8,
                                   *(_QWORD *)(v16 + 8));
    v18 = v17;
    if ( v17 )
    {
      v19 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v19
        || (UserServantEntity_c *)v17->klass->_2.typeHierarchy[v19 - 1] != UserServantEntity_TypeInfo )
      {
        sub_B77990(v17);
        goto LABEL_87;
      }
      v20 = *(_OWORD *)&v17->fields.userId.fields.fakeValue;
      *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&v17->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v57.fields.fakeValue = v20;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v56 = v57;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v56, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( v21 == NetworkManager__get_UserId(0LL) && !UserServantEntity__IsWithdrawal(v18, 0LL) )
      {
        v23 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
        v22 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v59.fields.currentCryptoKey = v23;
        *(_QWORD *)&v59.fields.fakeValue = v22;
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v59, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          sub_B7769C(v24, (unsigned int)v24);
        Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v24,
                                      (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_B7769C(0LL, v26);
        if ( ServantEntity__get_IsOrganization(Entity, 0LL) )
        {
          v28 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
          v27 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v60.fields.currentCryptoKey = v28;
          *(_QWORD *)&v60.fields.fakeValue = v27;
          v29 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v60, 0LL);
          if ( !v54 )
            sub_B7769C(0LL, v29);
          if ( !System_Collections_Generic_List_int___Contains(
                  v54,
                  v29,
                  (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            v31 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
            v30 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
            ++v53;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v61.fields.currentCryptoKey = v31;
            *(_QWORD *)&v61.fields.fakeValue = v30;
            v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v61, 0LL);
            System_Collections_Generic_List_int___Add(
              v54,
              v32,
              (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
            goto LABEL_7;
          }
        }
      }
    }
  }
  v58 = 0x1000000B5LL;
  v33 = v8->klass;
  if ( *(_WORD *)&v8->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      ++v34;
      v35 += 4;
      if ( v34 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
        goto LABEL_51;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_51:
    v36 = sub_B0F4C0(v8, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(v8, *(_QWORD *)(v36 + 8));
  if ( (_DWORD)v58 == 181 )
    v58 = 181LL;
  Instance = (int64_t)v52;
  if ( !v52 || (Instance = (int64_t)UserServantStorageMaster__getList(v52, v4)) == 0 )
LABEL_88:
    sub_B7769C(Instance, v4);
  v37 = *(_QWORD *)(Instance + 24);
  v38 = Instance;
  if ( (int)v37 >= 1 )
  {
    v39 = 0LL;
    while ( v39 < (unsigned int)v37 )
    {
      v40 = *(_QWORD *)(v38 + 32 + 8 * v39);
      if ( v40 )
      {
        v41 = *(_OWORD *)(v40 + 64);
        *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)(v40 + 48);
        *(_OWORD *)&v57.fields.fakeValue = v41;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v55 = v57;
        v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v55, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        if ( v42 == Instance )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v40, 0LL);
          if ( (Instance & 1) == 0 )
          {
            v44 = *(_QWORD *)(v40 + 80);
            v43 = *(_QWORD *)(v40 + 88);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v62.fields.currentCryptoKey = v44;
            *(_QWORD *)&v62.fields.fakeValue = v43;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v62, 0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_88;
            Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  Instance,
                                  (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              goto LABEL_88;
            Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
            if ( (Instance & 1) != 0 )
            {
              v46 = *(_QWORD *)(v40 + 80);
              v45 = *(_QWORD *)(v40 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v63.fields.currentCryptoKey = v46;
              *(_QWORD *)&v63.fields.fakeValue = v45;
              v4 = (const MethodInfo *)(unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                       v63,
                                                       0LL);
              Instance = (int64_t)v54;
              if ( !v54 )
                goto LABEL_88;
              Instance = System_Collections_Generic_List_int___Contains(
                           v54,
                           (int32_t)v4,
                           (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__);
              if ( (Instance & 1) == 0 )
              {
                v48 = *(_QWORD *)(v40 + 80);
                v47 = *(_QWORD *)(v40 + 88);
                ++v53;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v64.fields.currentCryptoKey = v48;
                *(_QWORD *)&v64.fields.fakeValue = v47;
                v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v64, 0LL);
                System_Collections_Generic_List_int___Add(
                  v54,
                  v49,
                  (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
              }
            }
          }
        }
      }
      LODWORD(v37) = *(_DWORD *)(v38 + 24);
      if ( (__int64)++v39 >= (int)v37 )
        return v53;
    }
LABEL_87:
    v51 = sub_B776C8(Instance);
    sub_B77668(v51, 0LL);
  }
  return v53;
}


UserServantEntity_array *__fastcall UserServantMaster__getServantEquipList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t v6; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x23
  int32_t v9; // w24
  int64_t v10; // x25
  __int64 v11; // x10
  __int128 v12; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x21
  __int64 v14; // x26
  __int64 v15; // x27
  int64_t v17; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_439120C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&UserServantEntity_TypeInfo);
    byte_439120C = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v6 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v9,
                            (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v10 = Instance;
        v11 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v11
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v11 - 8) == UserServantEntity_TypeInfo )
        {
          v12 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v19.fields.fakeValue = v12;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v18 = v19;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v18, 0LL);
          if ( Instance == v6 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v10, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v17 = v6;
              v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v15 = *(_QWORD *)(v10 + 80);
              v14 = *(_QWORD *)(v10 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v20.fields.currentCryptoKey = v15;
              *(_QWORD *)&v20.fields.fakeValue = v14;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v20, 0LL);
              if ( !v13 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v13;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v13,
                                    Instance,
                                    (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v6 = v17;
              if ( !Instance )
                break;
              Instance = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( !v8 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v8,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
                  (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v9 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B7769C(Instance, v4);
  }
LABEL_28:
  if ( !v8 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                      (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


System_Collections_Generic_List_UserServantEntity__o *__fastcall UserServantMaster__getServantList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v16; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x22
  __int64 v18; // x9
  __int128 v19; // q0
  int64_t v20; // x23
  void *monitor; // x23
  EventMissionProgressRequest_Argument_ProgressData_c *v22; // x24
  __int64 v23; // x0
  __int64 v24; // x1
  ServantEntity_o *Entity; // x0
  __int64 v26; // x1
  __int64 v27; // x1
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+30h] [xbp-80h]
  __int64 v36; // [xsp+58h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4391205 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&UserServantEntity_TypeInfo);
    byte_4391205 = 1;
  }
  HIDWORD(v36) = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              Instance,
                                                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___),
        v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v33,
          (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0LL) )
  {
    sub_B7769C(Instance, v4);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_17:
      v15 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v16 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v15 + 8));
    v17 = v16;
    if ( v16 )
    {
      v18 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v18
        || (UserServantEntity_c *)v16->klass->_2.typeHierarchy[v18 - 1] != UserServantEntity_TypeInfo )
      {
        sub_B77990(v16);
LABEL_50:
        sub_B7769C(v23, v24);
      }
      v19 = *(_OWORD *)&v16[1].fields.targetId;
      *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&v16[1].monitor;
      *(_OWORD *)&v35.fields.fakeValue = v19;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v34 = v35;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v34, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( v20 == NetworkManager__get_UserId(0LL) && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v17, 0LL) )
      {
        v22 = v17[2].klass;
        monitor = v17[2].monitor;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v37.fields.currentCryptoKey = v22;
        *(_QWORD *)&v37.fields.fakeValue = monitor;
        v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v37, 0LL);
        v24 = (unsigned int)v23;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_50;
        Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v23,
                                      (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_B7769C(0LL, v26);
        if ( ServantEntity__get_IsServant(Entity, 0LL) )
        {
          if ( !v33 )
            sub_B7769C(0LL, v27);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v33,
            v17,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
        }
      }
    }
  }
  v36 = 0x10000007BLL;
  v28 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_43;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_43:
    v31 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  if ( (_DWORD)v36 == 123 )
    v36 = 123LL;
  return (System_Collections_Generic_List_UserServantEntity__o *)v33;
}


System_Collections_Generic_List_UserServantEntity__o *__fastcall UserServantMaster__getServantListByClassIdList(
        UserServantMaster_o *this,
        System_Collections_Generic_List_int__o *classIdList,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x25
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  UserServantEntity_o *v18; // x0
  UserServantEntity_o *v19; // x23
  __int64 v20; // x9
  __int128 v21; // q0
  int64_t v22; // x24
  __int64 SvtClassId; // x1
  System_Collections_Generic_List_int__o *v24; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x21
  __int64 v26; // x24
  __int64 v27; // x25
  __int64 v28; // x1
  ServantEntity_o *Entity; // x0
  __int64 v30; // x1
  _BOOL8 IsServant; // x0
  __int64 v32; // x1
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_int__o *v39; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+30h] [xbp-80h]
  __int64 v42; // [xsp+58h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4391208 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&UserServantEntity_TypeInfo);
    byte_4391208 = 1;
  }
  HIDWORD(v42) = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              Instance,
                                                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___),
        v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v7,
          (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0LL) )
  {
    sub_B7769C(Instance, v6);
  }
  v39 = classIdList;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v15;
        v16 += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_17:
      v17 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (UserServantEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                   Enumerator,
                                   *(_QWORD *)(v17 + 8));
    v19 = v18;
    if ( v18 )
    {
      v20 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (UserServantEntity_c *)v18->klass->_2.typeHierarchy[v20 - 1] != UserServantEntity_TypeInfo )
      {
        sub_B77990(v18);
LABEL_52:
        sub_B7769C(v24, SvtClassId);
      }
      v21 = *(_OWORD *)&v18->fields.userId.fields.fakeValue;
      *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&v18->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v41.fields.fakeValue = v21;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v40 = v41;
      v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v40, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( v22 == NetworkManager__get_UserId(0LL) && !UserServantEntity__IsWithdrawal(v19, 0LL) )
      {
        SvtClassId = (unsigned int)UserServantEntity__getSvtClassId(v19, 0LL);
        v24 = v39;
        if ( !v39 )
          goto LABEL_52;
        if ( System_Collections_Generic_List_int___Contains(
               v39,
               SvtClassId,
               (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v25 = v7;
          v27 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
          v26 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v43.fields.currentCryptoKey = v27;
          *(_QWORD *)&v43.fields.fakeValue = v26;
          v28 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v43, 0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            sub_B7769C(0LL, v28);
          v7 = v25;
          Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        v28,
                                        (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Entity )
            sub_B7769C(0LL, v30);
          IsServant = ServantEntity__get_IsServant(Entity, 0LL);
          if ( IsServant )
          {
            if ( !v25 )
              sub_B7769C(IsServant, v32);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v25,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
          }
        }
      }
    }
  }
  v42 = 0x100000089LL;
  v33 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      ++v34;
      v35 += 4;
      if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_45;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_45:
    v36 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  if ( (_DWORD)v42 == 137 )
    v42 = 137LL;
  return (System_Collections_Generic_List_UserServantEntity__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_long__o *__fastcall UserServantMaster__getSvtAllUserIdList(
        UserServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *List; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v6; // x21
  DataManager_o *Instance; // x0
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_long__o *v9; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject v15; // q0
  int64_t v16; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+40h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4391216 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor___69411152);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4391216 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, *(const MethodInfo **)&svtId);
  v6 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v6,
    List,
    (const MethodInfo_30527CC *)Method_System_Collections_Generic_List_UserServantEntity___ctor___69411152);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL
    || (Instance = (DataManager_o *)UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, v8), !v6) )
  {
    sub_B7769C(Instance, v8);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v6,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  v9 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v6,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  v20.fields.current = (Il2CppObject *)v19.fields.fakeValue;
  *(_OWORD *)&v20.fields.list = *(_OWORD *)&v19.fields.currentCryptoKey;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v20.fields.current;
    if ( !v20.fields.current )
      sub_B7769C(v10, v11);
    klass = v20.fields.current[5].klass;
    monitor = v20.fields.current[5].monitor;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v21.fields.currentCryptoKey = klass;
    *(_QWORD *)&v21.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v21, 0LL) == svtId
      && !UserServantEntity__IsEventJoin((UserServantEntity_o *)current, 0LL) )
    {
      v15 = current[2];
      *(Il2CppObject *)&v19.fields.currentCryptoKey = current[1];
      *(Il2CppObject *)&v19.fields.fakeValue = v15;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v18 = v19;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v18, 0LL);
      if ( !v9 )
        sub_B7769C(v16, v16);
      System_Collections_Generic_List_long___Add(
        v9,
        v16,
        (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  return v9;
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_o *__fastcall UserServantMaster__getSvtIdBattle(
        UserServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v8; // x22
  int32_t v9; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v10; // x24
  __int64 v11; // x10
  Il2CppObject *syncRoot; // x25
  struct System_Collections_Generic_IList_T__o *items; // x26
  int klass; // w8
  int v15; // w9
  __int128 v16; // q0
  int64_t v17; // x0
  __int128 v18; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_439121A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&UserServantEntity_TypeInfo);
    byte_439121A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0LL;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v9,
                                                                                           (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v10 = list;
      v11 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v11
        || (UserServantEntity_c *)list->klass->_2.typeHierarchy[v11 - 1] != UserServantEntity_TypeInfo )
      {
        break;
      }
      items = list[2].fields.items;
      syncRoot = list[2].fields._syncRoot;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v23.fields.currentCryptoKey = items;
      *(_QWORD *)&v23.fields.fakeValue = syncRoot;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v23, 0LL) == svtId
        && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v10, 0LL) )
      {
        if ( !v8 )
          goto LABEL_22;
        klass = (int)v8[8].klass;
        v15 = (int)v10[8].klass;
        if ( klass < v15 )
          goto LABEL_22;
        if ( klass == v15 )
        {
          v16 = *(_OWORD *)&v8[1].klass;
          *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__Fields *)&v22.fields.currentCryptoKey = v8->fields;
          *(_OWORD *)&v22.fields.fakeValue = v16;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v21 = v22;
          v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v21, 0LL);
          v18 = *(_OWORD *)&v10[1].klass;
          *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__Fields *)&v20.fields.currentCryptoKey = v10->fields;
          *(_OWORD *)&v20.fields.fakeValue = v18;
          if ( v17 > CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v20, 0LL) )
LABEL_22:
            v8 = v10;
        }
      }
      if ( ++v9 >= v7 )
        return (UserServantEntity_o *)v8;
    }
LABEL_27:
    sub_B7769C(list, *(_QWORD *)&svtId);
  }
  return 0LL;
}


void __fastcall UserServantMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct UserServantMaster___c_StaticFields *static_fields; // x0

  if ( (byte_438891A & 1) == 0 )
  {
    sub_B775C4(&UserServantMaster___c_TypeInfo);
    byte_438891A = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(UserServantMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = UserServantMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserServantMaster___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall UserServantMaster___c___ctor(UserServantMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserServantMaster___c___GetServantHavintLimitMaxCount_b__33_0(
        UserServantMaster___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
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
  if ( (byte_438891B & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass14_0_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438891B = 1;
  }
  if ( !m || (e = v4->fields.e) == 0LL )
    sub_B7769C(this, m);
  materialSvtId = m->fields.materialSvtId;
  v8 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v10, 0LL);
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
  if ( (byte_438891C & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass15_0_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438891C = 1;
  }
  if ( !m || (e = v4->fields.e) == 0LL )
    sub_B7769C(this, m);
  materialSvtId = m->fields.materialSvtId;
  v8 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v10, 0LL);
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
  if ( (byte_438891D & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass1_0_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438891D = 1;
  }
  if ( !ent )
    sub_B7769C(this, ent);
  v6 = *(_QWORD *)&ent->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&ent->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return v4->fields.svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v8, 0LL);
}


void __fastcall UserServantMaster___c__DisplayClass30_0___ctor(
        UserServantMaster___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserServantMaster___c__DisplayClass30_0___GetHaveServantSkillLevelMax_b__0(
        UserServantMaster___c__DisplayClass30_0_o *this,
        UserServantEntity_o *usrSvt,
        const MethodInfo *method)
{
  UserServantMaster___c__DisplayClass30_0_o *v4; // x19
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v4 = this;
  if ( (byte_438891E & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass30_0_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438891E = 1;
  }
  if ( !usrSvt )
    sub_B7769C(this, usrSvt);
  v6 = *(_QWORD *)&usrSvt->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&usrSvt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v8, 0LL) == v4->fields.svtId;
}


int32_t __fastcall UserServantMaster___c__DisplayClass30_0___GetHaveServantSkillLevelMax_b__1(
        UserServantMaster___c__DisplayClass30_0_o *this,
        UserServantEntity_o *a,
        UserServantEntity_o *b,
        const MethodInfo *method)
{
  UserServantMaster___c__DisplayClass30_0_o *v5; // x20

  if ( !b
    || (v5 = this,
        this = (UserServantMaster___c__DisplayClass30_0_o *)UserServantEntity__getSkillLevel(
                                                              b,
                                                              this->fields.skillIdx,
                                                              0LL),
        !a) )
  {
    sub_B7769C(this, a);
  }
  return (_DWORD)this - UserServantEntity__getSkillLevel(a, v5->fields.skillIdx, 0LL);
}