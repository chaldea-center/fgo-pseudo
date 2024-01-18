void __fastcall UserServantMaster___ctor(UserServantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418D235 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__, method);
    byte_418D235 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    14,
    (const MethodInfo_24E425C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__);
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
    sub_B2C434(0LL, v8);
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
    sub_B2C434(0LL, v7);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  int64_t UserId; // x0
  int64_t v16; // x24
  UserServantEntity_o *v17; // x23
  int32_t v18; // w25
  __int64 v19; // x27
  __int64 v20; // x28
  int32_t v21; // w27
  __int64 v22; // x27
  __int64 v23; // x28
  int32_t v24; // w27
  UserServantEntity_o *v25; // x26
  __int64 v26; // x10
  __int128 v27; // q0
  __int64 v28; // x27
  __int64 v29; // x28
  __int64 v30; // x27
  __int64 v31; // x28
  int32_t v32; // w27
  const MethodInfo *v33; // x3
  UserServantEntity_o *v35; // [xsp+10h] [xbp-A0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_418D24D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&UserServantEntity_TypeInfo, v12);
    byte_418D24D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_56;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v35 = 0LL;
    v16 = UserId;
    v17 = 0LL;
    v18 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v18,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v25 = (UserServantEntity_o *)list;
      v26 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v26
        || (UserServantEntity_c *)list->klass->_2.typeHierarchy[v26 - 1] != UserServantEntity_TypeInfo )
      {
        break;
      }
      v27 = *(_OWORD *)&list[2].klass;
      *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__Fields *)&v38.fields.currentCryptoKey = list[1].fields;
      *(_OWORD *)&v38.fields.fakeValue = v27;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v37 = v38;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v37, 0LL) == v16 )
      {
        v29 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
        v28 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v41.fields.currentCryptoKey = v29;
        *(_QWORD *)&v41.fields.fakeValue = v28;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v41, 0LL) == svtId )
        {
          if ( UserServantEntity__IsWithdrawal(v25, 0LL) )
          {
            v35 = v25;
          }
          else if ( v17 )
          {
            v31 = *(_QWORD *)&v25->fields.limitCount.fields.currentCryptoKey;
            v30 = *(_QWORD *)&v25->fields.limitCount.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v42.fields.currentCryptoKey = v31;
            *(_QWORD *)&v42.fields.fakeValue = v30;
            v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v42, 0LL);
            if ( v32 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v17->fields.limitCount, 0LL)
              || v25->fields.lv > v17->fields.lv )
            {
              goto LABEL_43;
            }
            v20 = *(_QWORD *)&v25->fields.limitCount.fields.currentCryptoKey;
            v19 = *(_QWORD *)&v25->fields.limitCount.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v39.fields.currentCryptoKey = v20;
            *(_QWORD *)&v39.fields.fakeValue = v19;
            v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v39, 0LL);
            if ( v21 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v17->fields.limitCount, 0LL)
              && v25->fields.lv == v17->fields.lv
              && !UserServantEntity__IsCondJoin(v25, 0LL)
              && UserServantEntity__IsCondJoin(v17, 0LL) )
            {
              goto LABEL_43;
            }
            v23 = *(_QWORD *)&v25->fields.limitCount.fields.currentCryptoKey;
            v22 = *(_QWORD *)&v25->fields.limitCount.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v40.fields.currentCryptoKey = v23;
            *(_QWORD *)&v40.fields.fakeValue = v22;
            v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v40, 0LL);
            if ( v24 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v17->fields.limitCount, 0LL)
              && v25->fields.lv == v17->fields.lv
              && v25->fields.createdAt < v17->fields.createdAt )
            {
LABEL_43:
              v17 = (UserServantEntity_o *)sub_B2C42C(UserServantEntity_TypeInfo);
              UserServantEntity___ctor_21638868(v17, v25, 0LL);
            }
          }
          else
          {
            v17 = v25;
          }
        }
      }
      if ( ++v18 >= Count )
        goto LABEL_48;
    }
LABEL_56:
    sub_B2C434(list, *(_QWORD *)&svtId);
  }
  v35 = 0LL;
  v17 = 0LL;
LABEL_48:
  if ( checkStorage )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !list )
      goto LABEL_56;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                         (DataManager_o *)list,
                                                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !list )
      goto LABEL_56;
    v17 = UserServantStorageMaster__CostumeTargetEntity((UserServantStorageMaster_o *)list, svtId, v17, v33);
  }
  if ( v17 )
    return v17;
  else
    return v35;
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
  __int64 v17; // x1
  int64_t Instance; // x0
  const MethodInfo *v19; // x1
  UserServantStorageMaster_o *v20; // x19
  System_Collections_Generic_List_int__o *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v29; // x3
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0
  UserServantEntity_o *v34; // x0
  UserServantEntity_o *v35; // x23
  __int64 v36; // x9
  __int128 v37; // q0
  int64_t v38; // x24
  __int64 v39; // x24
  __int64 v40; // x25
  __int64 v41; // x1
  ServantEntity_o *Entity; // x0
  __int64 v43; // x1
  __int64 v44; // x24
  __int64 v45; // x25
  __int64 v46; // x0
  __int64 v47; // x23
  __int64 v48; // x24
  int32_t v49; // w0
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  unsigned __int64 v51; // x10
  int32_t *v52; // x11
  __int64 v53; // x0
  __int64 v54; // x8
  int64_t v55; // x21
  unsigned __int64 v56; // x19
  __int64 v57; // x22
  __int128 v58; // q0
  int64_t v59; // x23
  __int64 v60; // x23
  __int64 v61; // x24
  __int64 v62; // x23
  __int64 v63; // x24
  __int64 v64; // x22
  __int64 v65; // x23
  int32_t v66; // w0
  __int64 v68; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+50h] [xbp-80h]
  __int64 v73; // [xsp+78h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16

  if ( (byte_418D23D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B2C35C(&NetworkManager_TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&UserServantEntity_TypeInfo, v17);
    byte_418D23D = 1;
  }
  HIDWORD(v73) = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  v20 = (UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v21 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_89;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v22);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v26;
        p_offset += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v23);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v30 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v32 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v31;
        v32 += 4;
        if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v33 = (__int64)&v30->vtable[*v32].method;
    }
    else
    {
LABEL_18:
      v33 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v29);
    }
    v34 = (UserServantEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                                   Enumerator,
                                   *(_QWORD *)(v33 + 8));
    v35 = v34;
    if ( v34 )
    {
      v36 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v34->klass->_2.bitflags2 + 1) < (unsigned int)v36
        || (UserServantEntity_c *)v34->klass->_2.typeHierarchy[v36 - 1] != UserServantEntity_TypeInfo )
      {
        sub_B2C728(v34);
        goto LABEL_88;
      }
      v37 = *(_OWORD *)&v34->fields.userId.fields.fakeValue;
      *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&v34->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v72.fields.fakeValue = v37;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v71 = v72;
      v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v71, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( v38 == NetworkManager__get_UserId(0LL) && !UserServantEntity__IsWithdrawal(v35, 0LL) )
      {
        v40 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
        v39 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v74.fields.currentCryptoKey = v40;
        *(_QWORD *)&v74.fields.fakeValue = v39;
        v41 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v74, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          sub_B2C434(0LL, v41);
        Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v41,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_B2C434(0LL, v43);
        if ( ServantEntity__get_IsOrganization(Entity, 0LL) )
        {
          v45 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
          v44 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v75.fields.currentCryptoKey = v45;
          *(_QWORD *)&v75.fields.fakeValue = v44;
          v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v75, 0LL);
          if ( !v21 )
            sub_B2C434(v46, (unsigned int)v46);
          if ( !System_Collections_Generic_List_int___Contains(
                  v21,
                  v46,
                  (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            v48 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
            v47 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v76.fields.currentCryptoKey = v48;
            *(_QWORD *)&v76.fields.fakeValue = v47;
            v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v76, 0LL);
            System_Collections_Generic_List_int___Add(
              v21,
              v49,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
    }
  }
  v73 = 0x1000000AALL;
  v50 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v51 = 0LL;
    v52 = &v50->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      ++v51;
      v52 += 4;
      if ( v51 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_51;
    }
    v53 = (__int64)&v50->vtable[*v52].method;
  }
  else
  {
LABEL_51:
    v53 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v29);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(Enumerator, *(_QWORD *)(v53 + 8));
  if ( (_DWORD)v73 == 170 )
    v73 = 170LL;
  Instance = (int64_t)v20;
  if ( !v20 || (Instance = (int64_t)UserServantStorageMaster__getList(v20, v19)) == 0 )
LABEL_89:
    sub_B2C434(Instance, v19);
  v54 = *(_QWORD *)(Instance + 24);
  v55 = Instance;
  if ( (int)v54 >= 1 )
  {
    v56 = 0LL;
    while ( v56 < (unsigned int)v54 )
    {
      v57 = *(_QWORD *)(v55 + 32 + 8 * v56);
      if ( v57 )
      {
        v58 = *(_OWORD *)(v57 + 64);
        *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)(v57 + 48);
        *(_OWORD *)&v72.fields.fakeValue = v58;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v70 = v72;
        v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v70, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        if ( v59 == Instance )
        {
          v61 = *(_QWORD *)(v57 + 80);
          v60 = *(_QWORD *)(v57 + 88);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v77.fields.currentCryptoKey = v61;
          *(_QWORD *)&v77.fields.fakeValue = v60;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v77, 0LL);
          if ( !v21 )
            goto LABEL_89;
          Instance = System_Collections_Generic_List_int___Contains(
                       v21,
                       Instance,
                       (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Instance & 1) == 0 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v57, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v63 = *(_QWORD *)(v57 + 80);
              v62 = *(_QWORD *)(v57 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v78.fields.currentCryptoKey = v63;
              *(_QWORD *)&v78.fields.fakeValue = v62;
              v19 = (const MethodInfo *)(unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                        v78,
                                                        0LL);
              Instance = (int64_t)MasterData_WarQuestSelectionMaster;
              if ( !MasterData_WarQuestSelectionMaster )
                goto LABEL_89;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    (int32_t)v19,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( !Instance )
                goto LABEL_89;
              Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                v65 = *(_QWORD *)(v57 + 80);
                v64 = *(_QWORD *)(v57 + 88);
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v79.fields.currentCryptoKey = v65;
                *(_QWORD *)&v79.fields.fakeValue = v64;
                v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v79, 0LL);
                System_Collections_Generic_List_int___Add(
                  v21,
                  v66,
                  (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
              }
            }
          }
        }
      }
      LODWORD(v54) = *(_DWORD *)(v55 + 24);
      if ( (__int64)++v56 >= (int)v54 )
        return v21;
    }
LABEL_88:
    v68 = sub_B2C460(Instance);
    sub_B2C400(v68, 0LL);
  }
  return v21;
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
  __int64 v14; // x1
  int64_t Instance; // x0
  __int64 v16; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t v18; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x23
  int32_t v21; // w24
  int64_t v22; // x25
  __int64 v23; // x10
  __int128 v24; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x21
  __int64 v26; // x26
  __int64 v27; // x27
  int64_t v29; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_418D24E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&UserServantEntity_TypeInfo, v14);
    byte_418D24E = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_32;
  v18 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v21,
                            (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v22 = Instance;
        v23 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v23
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v23 - 8) == UserServantEntity_TypeInfo )
        {
          v24 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v31.fields.fakeValue = v24;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v30 = v31;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v30, 0LL);
          if ( Instance == v18 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v22, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v29 = v18;
              v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v27 = *(_QWORD *)(v22 + 80);
              v26 = *(_QWORD *)(v22 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v32.fields.currentCryptoKey = v27;
              *(_QWORD *)&v32.fields.fakeValue = v26;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v32, 0LL);
              if ( !v25 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v25;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v25,
                                    Instance,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v18 = v29;
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
                    if ( !v20 )
                      break;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v20,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
                      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
                  }
                }
              }
            }
          }
        }
      }
      if ( ++v21 >= Count )
        goto LABEL_30;
    }
LABEL_32:
    sub_B2C434(Instance, v16);
  }
LABEL_30:
  if ( !v20 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__GetEntities(
        UserServantMaster_o *this,
        System_Int64_array *userServantIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_long__o *v6; // x21

  if ( (byte_418D253 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor___67311576, userServantIds);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v5);
    byte_418D253 = 1;
  }
  if ( userServantIds )
  {
    v6 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_49726532(
      v6,
      (System_Collections_Generic_IEnumerable_T__o *)userServantIds,
      (const MethodInfo_2F6C444 *)Method_System_Collections_Generic_List_long___ctor___67311576);
  }
  else
  {
    v6 = 0LL;
  }
  return UserServantMaster__GetEntities_34331576(this, v6, method);
}


UserServantEntity_array *__fastcall UserServantMaster__GetEntities_34331576(
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
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v26; // x3
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x22
  __int64 v33; // x9
  __int128 v34; // q0
  int64_t v35; // x1
  _BOOL8 v36; // x0
  __int64 v37; // x1
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+20h] [xbp-80h]
  __int64 v45; // [xsp+48h] [xbp-58h]

  if ( (byte_418D254 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, userServantIds);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Contains__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v12);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B2C35C(&UserServantEntity_TypeInfo, v15);
    byte_418D254 = 1;
  }
  HIDWORD(v45) = 0;
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( userServantIds && userServantIds->fields._size >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_43;
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B2C434(0LL, v19);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v23 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v23;
          p_offset += 4;
          if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_11;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_11:
        p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v20);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v27 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v28 = 0LL;
        v29 = &v27->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v28;
          v29 += 4;
          if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_18;
        }
        v30 = (__int64)&v27->vtable[*v29].method;
      }
      else
      {
LABEL_18:
        v30 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v26);
      }
      v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                                                     Enumerator,
                                                                     *(_QWORD *)(v30 + 8));
      v32 = v31;
      if ( v31 )
      {
        v33 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v31->klass->_2.bitflags2 + 1) < (unsigned int)v33
          || (UserServantEntity_c *)v31->klass->_2.typeHierarchy[v33 - 1] != UserServantEntity_TypeInfo )
        {
          sub_B2C728(v31);
LABEL_42:
          sub_B2C434(v36, v37);
        }
        v34 = *(_OWORD *)&v31->fields.addCount;
        *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&v31->fields.missionTargetId;
        *(_OWORD *)&v44.fields.fakeValue = v34;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v43 = v44;
        v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v43, 0LL);
        v36 = System_Collections_Generic_List_long___Contains(
                userServantIds,
                v35,
                (const MethodInfo_2F6D3FC *)Method_System_Collections_Generic_List_long__Contains__);
        if ( v36 )
        {
          if ( !v16 )
            goto LABEL_42;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v16,
            v32,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
        }
      }
    }
    v45 = 0x10000005DLL;
    v38 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_34;
      }
      v41 = (__int64)&v38->vtable[*v40].method;
    }
    else
    {
LABEL_34:
      v41 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v26);
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                                                                                         Enumerator,
                                                                                         *(_QWORD *)(v41 + 8));
    if ( (_DWORD)v45 == 93 )
      v45 = 93LL;
  }
  if ( !v16 )
LABEL_43:
    sub_B2C434(list, v18);
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  __int64 v13; // x1
  __int64 v14; // x1
  UserServantMaster___c__DisplayClass30_0_o *v15; // x19
  UserServantEntity_o *All_BattleBuffData_BuffData; // x0
  const MethodInfo *v17; // x1
  UserServantEntity_array *AllList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v19; // x21
  BattleBuffData_BuffData_array *v20; // x20
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v21; // x21
  __int64 v22; // x0
  __int64 v24; // x0

  if ( (byte_418D24F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_FindAll_UserServantEntity___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Array_Sort_UserServantEntity___, v7);
    sub_B2C35C(&Method_System_Comparison_UserServantEntity___ctor__, v8);
    sub_B2C35C(&System_Comparison_UserServantEntity__TypeInfo, v9);
    sub_B2C35C(&Method_System_Predicate_UserServantEntity___ctor__, v10);
    sub_B2C35C(&System_Predicate_UserServantEntity__TypeInfo, v11);
    sub_B2C35C(&Method_UserServantMaster___c__DisplayClass30_0__GetHaveServantSkillLevelMax_b__0__, v12);
    sub_B2C35C(&Method_UserServantMaster___c__DisplayClass30_0__GetHaveServantSkillLevelMax_b__1__, v13);
    sub_B2C35C(&UserServantMaster___c__DisplayClass30_0_TypeInfo, v14);
    byte_418D24F = 1;
  }
  v15 = (UserServantMaster___c__DisplayClass30_0_o *)sub_B2C42C(UserServantMaster___c__DisplayClass30_0_TypeInfo);
  UserServantMaster___c__DisplayClass30_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_10;
  v15->fields.svtId = svtId;
  v15->fields.skillIdx = skillIdx;
  AllList = UserServantMaster__getAllList(this, v17);
  v19 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_UserServantEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v19,
    (Il2CppObject *)v15,
    Method_UserServantMaster___c__DisplayClass30_0__GetHaveServantSkillLevelMax_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_UserServantEntity___ctor__);
  All_BattleBuffData_BuffData = (UserServantEntity_o *)System_Array__FindAll_BattleBuffData_BuffData_(
                                                         (BattleBuffData_BuffData_array *)AllList,
                                                         (System_Predicate_T__o *)v19,
                                                         (const MethodInfo_1FFC4EC *)Method_System_Array_FindAll_UserServantEntity___);
  if ( !All_BattleBuffData_BuffData )
    goto LABEL_10;
  v20 = (BattleBuffData_BuffData_array *)All_BattleBuffData_BuffData;
  if ( All_BattleBuffData_BuffData->fields.id.fields.hiddenValue )
  {
    v21 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v21,
      (Il2CppObject *)v15,
      Method_UserServantMaster___c__DisplayClass30_0__GetHaveServantSkillLevelMax_b__1__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_UserServantEntity___ctor__);
    System_Array__Sort_BattleBuffData_BuffData_(
      v20,
      (System_Comparison_T__o *)v21,
      (const MethodInfo_23CBA5C *)Method_System_Array_Sort_UserServantEntity___);
    if ( !v20->max_length )
    {
      v24 = sub_B2C460(v22);
      sub_B2C400(v24, 0LL);
    }
    All_BattleBuffData_BuffData = (UserServantEntity_o *)v20->m_Items[0];
    if ( All_BattleBuffData_BuffData )
      return UserServantEntity__getSkillLevel(All_BattleBuffData_BuffData, v15->fields.skillIdx, 0LL);
LABEL_10:
    sub_B2C434(All_BattleBuffData_BuffData, v17);
  }
  return 0;
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
  void *Instance; // x0
  __int64 v12; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  const MethodInfo *v14; // x1
  __int64 v15; // x8
  _QWORD *v16; // x23
  int32_t v17; // w21
  unsigned __int64 v18; // x27
  __int64 v19; // x8
  __int64 v20; // x24
  __int64 v21; // x25
  __int64 v23; // x0
  bool v24; // [xsp+Ch] [xbp-54h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_418D245 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_418D245 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = UserServantMaster__getAllList(this, v14);
  if ( !Instance )
    goto LABEL_24;
  v15 = *((_QWORD *)Instance + 3);
  v16 = Instance;
  v24 = isCheckPresentBox;
  if ( (int)v15 >= 1 )
  {
    v17 = 0;
    v18 = 0LL;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v15 )
      {
        v23 = sub_B2C460(Instance);
        sub_B2C400(v23, 0LL);
      }
      v19 = v16[v18 + 4];
      if ( v19 )
      {
        v21 = *(_QWORD *)(v19 + 80);
        v20 = *(_QWORD *)(v19 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v25.fields.currentCryptoKey = v21;
        *(_QWORD *)&v25.fields.fakeValue = v20;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v25, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_24;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     (int32_t)Instance,
                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_24;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                             *((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance + 2),
                             0LL);
        if ( (_DWORD)Instance == servantId )
          ++v17;
      }
      LODWORD(v15) = *((_DWORD *)v16 + 6);
      if ( (__int64)++v18 >= (int)v15 )
        goto LABEL_19;
    }
  }
  v17 = 0;
LABEL_19:
  if ( v24 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
      if ( Instance )
      {
        v17 += UserPresentBoxMaster__GetCount((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL);
        return v17;
      }
    }
LABEL_24:
    sub_B2C434(Instance, v12);
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
  void *Instance; // x0
  __int64 v10; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v12; // x1
  __int64 v13; // x8
  _QWORD *v14; // x21
  int v15; // w25
  unsigned __int64 v16; // x26
  __int64 v17; // x28
  __int64 v18; // x22
  __int64 v19; // x23
  __int64 v21; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_418D246 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_418D246 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = UserServantMaster__getAllList(this, v12);
  if ( !Instance )
    goto LABEL_22;
  v13 = *((_QWORD *)Instance + 3);
  v14 = Instance;
  if ( (int)v13 >= 1 )
  {
    v15 = 0;
    v16 = 0LL;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v13 )
      {
        v21 = sub_B2C460(Instance);
        sub_B2C400(v21, 0LL);
      }
      v17 = v14[v16 + 4];
      if ( v17 )
      {
        v19 = *(_QWORD *)(v17 + 80);
        v18 = *(_QWORD *)(v17 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v22.fields.currentCryptoKey = v19;
        *(_QWORD *)&v22.fields.fakeValue = v18;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v22, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_22;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     (int32_t)Instance,
                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_22;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                             *((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance + 2),
                             0LL);
        if ( (_DWORD)Instance == servantId )
          v15 += *(_DWORD *)(v17 + 292);
      }
      LODWORD(v13) = *((_DWORD *)v14 + 6);
      if ( (__int64)++v16 >= (int)v13 )
        goto LABEL_19;
    }
  }
  v15 = 0;
LABEL_19:
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL )
  {
LABEL_22:
    sub_B2C434(Instance, v10);
  }
  return UserPresentBoxMaster__GetCount((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL) + v15;
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
  __int64 v18; // x1
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  int64_t UserId; // x23
  const MethodInfo *v23; // x1
  System_Collections_Generic_IEnumerable_TSource__o *AllList; // x20
  UserServantMaster___c_c *v25; // x8
  struct UserServantMaster___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__33_0; // x21
  Il2CppObject *v28; // x24
  struct UserServantMaster___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x3
  DataManager_c *klass; // x8
  DataManager_o *v38; // x20
  unsigned __int64 v39; // x10
  int32_t *p_offset; // x11
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x3
  __int64 v44; // x21
  __int64 v45; // x8
  unsigned __int64 v46; // x10
  int *v47; // x11
  __int64 v48; // x0
  __int64 v49; // x0
  __int64 v50; // x24
  __int128 v51; // q0
  __int64 v52; // x25
  __int64 v53; // x26
  __int64 v54; // x0
  WarEntity_o *Entity; // x0
  __int64 v56; // x1
  WarEntity_o *v57; // x25
  __int64 v58; // x24
  __int64 v59; // x26
  int32_t v60; // w0
  int v61; // w8
  __int64 v62; // x8
  unsigned __int64 v63; // x10
  int *v64; // x11
  __int64 v65; // x0
  __int64 v66; // x3
  __int64 v67; // x8
  unsigned __int64 v68; // x10
  int *v69; // x11
  __int64 v70; // x0
  int32_t v72; // [xsp+Ch] [xbp-A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+30h] [xbp-80h]
  __int64 v75; // [xsp+58h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16

  if ( (byte_418D251 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v6);
    sub_B2C35C(&Method_System_Func_UserServantEntity__bool___ctor__, v7);
    sub_B2C35C(&System_Func_UserServantEntity__bool__TypeInfo, v8);
    sub_B2C35C(&System_IDisposable_TypeInfo, v9);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, v11);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B2C35C(&NetworkManager_TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__33_0__, v17);
    sub_B2C35C(&UserServantMaster___c_TypeInfo, v18);
    byte_418D251 = 1;
  }
  HIDWORD(v75) = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  AllList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getAllList(this, v23);
  v25 = UserServantMaster___c_TypeInfo;
  if ( (BYTE3(UserServantMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantMaster___c_TypeInfo);
    v25 = UserServantMaster___c_TypeInfo;
  }
  static_fields = v25->static_fields;
  _9__33_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__33_0;
  if ( !_9__33_0 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      static_fields = UserServantMaster___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__33_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_UserServantEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__33_0,
      v28,
      Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__33_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_UserServantEntity__bool___ctor__);
    v29 = UserServantMaster___c_TypeInfo->static_fields;
    v29->__9__33_0 = (struct System_Func_UserServantEntity__bool__o *)_9__33_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v29->__9__33_0,
      (System_Int32_array **)_9__33_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  Instance = (DataManager_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                AllList,
                                (System_Func_TSource__bool__o *)_9__33_0,
                                (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  if ( !Instance )
LABEL_68:
    sub_B2C434(Instance, v20);
  klass = Instance->klass;
  v38 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v39 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_UserServantEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo )
    {
      ++v39;
      p_offset += 4;
      if ( v39 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_20;
    }
    v41 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_20:
    v41 = sub_AC5258(Instance, System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, 0LL, v36);
  }
  v44 = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v41)(v38, *(_QWORD *)(v41 + 8));
  if ( !v44 )
    sub_B2C434(0LL, v42);
  v72 = 0;
  while ( 1 )
  {
    v62 = *(_QWORD *)v44;
    if ( *(_WORD *)(*(_QWORD *)v44 + 298LL) )
    {
      v63 = 0LL;
      v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v64 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v63;
        v64 += 4;
        if ( v63 >= *(unsigned __int16 *)(*(_QWORD *)v44 + 298LL) )
          goto LABEL_52;
      }
      v65 = v62 + 16LL * *v64 + 312;
    }
    else
    {
LABEL_52:
      v65 = sub_AC5258(v44, System_Collections_IEnumerator_TypeInfo, 0LL, v43);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v65)(v44, *(_QWORD *)(v65 + 8)) & 1) == 0 )
      break;
    v45 = *(_QWORD *)v44;
    if ( *(_WORD *)(*(_QWORD *)v44 + 298LL) )
    {
      v46 = 0LL;
      v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v47 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        ++v46;
        v47 += 4;
        if ( v46 >= *(unsigned __int16 *)(*(_QWORD *)v44 + 298LL) )
          goto LABEL_28;
      }
      v48 = v45 + 16LL * *v47 + 312;
    }
    else
    {
LABEL_28:
      v48 = sub_AC5258(v44, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL, v66);
    }
    v49 = (*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v44, *(_QWORD *)(v48 + 8));
    v50 = v49;
    if ( v49 )
    {
      v51 = *(_OWORD *)(v49 + 64);
      *(_OWORD *)&v74.fields.currentCryptoKey = *(_OWORD *)(v49 + 48);
      *(_OWORD *)&v74.fields.fakeValue = v51;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v73 = v74;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v73, 0LL) == UserId
        && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v50, 0LL) )
      {
        v53 = *(_QWORD *)(v50 + 80);
        v52 = *(_QWORD *)(v50 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v76.fields.currentCryptoKey = v53;
        *(_QWORD *)&v76.fields.fakeValue = v52;
        v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v76, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          sub_B2C434(v54, (unsigned int)v54);
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   v54,
                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v57 = Entity;
        if ( !Entity )
          sub_B2C434(0LL, v56);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
               *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&Entity->fields.name,
               0LL) == servantId )
        {
          v59 = *(_QWORD *)(v50 + 96);
          v58 = *(_QWORD *)(v50 + 104);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v77.fields.currentCryptoKey = v59;
          *(_QWORD *)&v77.fields.fakeValue = v58;
          v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v77, 0LL);
          v61 = v72;
          if ( v60 == LODWORD(v57->fields.targetId) )
            v61 = v72 + 1;
          v72 = v61;
        }
      }
    }
  }
  v75 = 0x1000000B9LL;
  v67 = *(_QWORD *)v44;
  if ( *(_WORD *)(*(_QWORD *)v44 + 298LL) )
  {
    v68 = 0LL;
    v69 = (int *)(*(_QWORD *)(v67 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v69 - 1) != System_IDisposable_TypeInfo )
    {
      ++v68;
      v69 += 4;
      if ( v68 >= *(unsigned __int16 *)(*(_QWORD *)v44 + 298LL) )
        goto LABEL_60;
    }
    v70 = v67 + 16LL * *v69 + 312;
  }
  else
  {
LABEL_60:
    v70 = sub_AC5258(v44, System_IDisposable_TypeInfo, 0LL, v66);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v70)(v44, *(_QWORD *)(v70 + 8));
  if ( (_DWORD)v75 == 185 )
    v75 = 185LL;
  return v72;
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
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  DataManager_o *v14; // x21
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w22
  int32_t v18; // w24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v20; // x25
  __int64 v21; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v22; // q0
  void *monitor; // x25
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x26
  WarEntity_o *Entity; // x0
  ServantEntity_o *v26; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_418D252 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&UserServantEntity_TypeInfo, v10);
    byte_418D252 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v14 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    v18 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
               v18,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v20 = Item;
        v21 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v21
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v21 - 1] == UserServantEntity_TypeInfo )
        {
          v22 = Item[4];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v29.fields.currentCryptoKey = Item[3];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v29.fields.fakeValue = v22;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v28 = v29;
          if ( (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v28, 0LL) == v14
            && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v20, 0LL) )
          {
            klass = v20[5].klass;
            monitor = v20[5].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v30.fields.currentCryptoKey = klass;
            *(_QWORD *)&v30.fields.fakeValue = monitor;
            v12 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v30, 0LL);
            Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster;
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       v12,
                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              v26 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServantEquip(*(&Entity->fields.startType + 1), 0LL) )
                v17 += ServantEntity__get_IsFriendShipSvtEquip(v26, 0LL);
            }
          }
        }
      }
      if ( ++v18 >= v16 )
        return v17;
    }
LABEL_30:
    sub_B2C434(Instance, v12);
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
  __int64 v10; // x1
  UserServantMaster___c__DisplayClass1_0_o *v11; // x22
  __int64 v12; // x0
  const MethodInfo *v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *List; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x21
  UserServantEntity_o *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_418D236 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____67414616, svtEnt);
    sub_B2C35C(&Method_System_Func_UserServantEntity__bool___ctor__, v7);
    sub_B2C35C(&System_Func_UserServantEntity__bool__TypeInfo, v8);
    sub_B2C35C(&Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__, v9);
    sub_B2C35C(&UserServantMaster___c__DisplayClass1_0_TypeInfo, v10);
    byte_418D236 = 1;
  }
  v11 = (UserServantMaster___c__DisplayClass1_0_o *)sub_B2C42C(UserServantMaster___c__DisplayClass1_0_TypeInfo);
  UserServantMaster___c__DisplayClass1_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B2C434(v12, v13);
  v11->fields.svtId = svtId;
  List = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getList(this, v13);
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_UserServantEntity__bool___ctor__);
  v16 = (UserServantEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 List,
                                 (System_Func_TSource__bool__o *)v15,
                                 (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____67414616);
  *svtEnt = v16;
  sub_B2C2F8((BattleServantConfConponent_o *)svtEnt, (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22);
  return *svtEnt != 0LL;
}


bool __fastcall UserServantMaster__TryGetEntityListBySvtId(
        UserServantMaster_o *this,
        System_Collections_Generic_List_UserServantEntity__o **userServantList,
        int32_t svtId,
        bool isIncludeStorage,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x21
  const MethodInfo *v21; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v23; // x1
  __int64 v24; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v27; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v30; // x3
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v35; // x0
  __int64 v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x24
  __int64 v38; // x10
  void *monitor; // x25
  EventMissionProgressRequest_Argument_ProgressData_c *v40; // x26
  __int64 v41; // x0
  __int64 v42; // x1
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  unsigned __int64 v44; // x10
  int32_t *v45; // x11
  __int64 v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  Il2CppObject *syncRoot; // x8
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v54; // x22
  unsigned __int64 v55; // x19
  EventMissionProgressRequest_Argument_ProgressData_o *v56; // x23
  void *v57; // x24
  EventMissionProgressRequest_Argument_ProgressData_c *v58; // x25
  __int64 v60; // x0
  bool v61; // [xsp+Ch] [xbp-64h]
  BattleServantConfConponent_o *v62; // [xsp+10h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_418D255 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, userServantList);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantStorageMaster___, v9);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    sub_B2C35C(&System_IDisposable_TypeInfo, v11);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v16);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v17);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B2C35C(&UserServantEntity_TypeInfo, v19);
    byte_418D255 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_55;
  v61 = isIncludeStorage;
  v62 = (BattleServantConfConponent_o *)userServantList;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v23);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v27;
        p_offset += 4;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v24);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v31 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v32 = 0LL;
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v33 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v32;
        v33 += 4;
        if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_16:
      v34 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v30);
    }
    v35 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v34 + 8));
    v37 = v35;
    if ( !v35
      || (v38 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1), *(&v35->klass->_2.bitflags2 + 1) < (unsigned int)v38)
      || (UserServantEntity_c *)v35->klass->_2.typeHierarchy[v38 - 1] != UserServantEntity_TypeInfo )
    {
      sub_B2C434(v35, v36);
    }
    v40 = v35[2].klass;
    monitor = v35[2].monitor;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v63.fields.currentCryptoKey = v40;
    *(_QWORD *)&v63.fields.fakeValue = monitor;
    v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v63, 0LL);
    if ( (_DWORD)v41 == svtId )
    {
      if ( !v20 )
        sub_B2C434(v41, v42);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v20,
        v37,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
    }
  }
  v43 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v44 = 0LL;
    v45 = &v43->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      ++v44;
      v45 += 4;
      if ( v44 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v46 = (__int64)&v43->vtable[*v45].method;
  }
  else
  {
LABEL_31:
    v46 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v30);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(Enumerator, *(_QWORD *)(v46 + 8));
  if ( v61 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantStorageMaster___);
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)UserServantStorageMaster__getList(
                                                                                           (UserServantStorageMaster_o *)list,
                                                                                           v21);
      if ( list )
      {
        syncRoot = list->fields._syncRoot;
        v54 = list;
        if ( (int)syncRoot >= 1 )
        {
          v55 = 0LL;
          do
          {
            if ( v55 >= (unsigned int)syncRoot )
            {
              v60 = sub_B2C460(list);
              sub_B2C400(v60, 0LL);
            }
            v56 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)&v54[1].klass + v55);
            if ( v56 )
            {
              v58 = v56[2].klass;
              v57 = v56[2].monitor;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v64.fields.currentCryptoKey = v58;
              *(_QWORD *)&v64.fields.fakeValue = v57;
              list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                                                   v64,
                                                                                                   0LL);
              if ( (_DWORD)list == svtId )
              {
                if ( !v20 )
                  goto LABEL_55;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v20,
                  v56,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
            LODWORD(syncRoot) = v54->fields._syncRoot;
            ++v55;
          }
          while ( (__int64)v55 < (int)syncRoot );
        }
        goto LABEL_50;
      }
    }
LABEL_55:
    sub_B2C434(list, v21);
  }
LABEL_50:
  v62->klass = (BattleServantConfConponent_c *)v20;
  sub_B2C2F8(v62, (System_Int32_array **)v20, v47, v48, v49, v50, v51, v52);
  if ( !v62->klass )
    goto LABEL_55;
  return SLODWORD(v62->klass->_1.namespaze) > 0;
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
  __int64 v11; // x1
  System_Collections_Generic_List_long__o *v12; // x20
  __int64 v13; // x1
  int64_t list; // x0
  int32_t Count; // w21
  int64_t v16; // x22
  int32_t v17; // w23
  int64_t v18; // x24
  __int64 v19; // x10
  __int128 v20; // q0
  __int128 v21; // q0
  const MethodInfo *v22; // x1
  System_Int64_array *v23; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+40h] [xbp-70h]

  if ( (byte_418D249 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B2C35C(&UserServantEntity_TypeInfo, v10);
    sub_B2C35C(&UserServantNewManager_TypeInfo, v11);
    byte_418D249 = 1;
  }
  v12 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v12,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v16 = list;
    v17 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v17,
                        (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v18 = list;
        v19 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v19
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v19 - 8) == UserServantEntity_TypeInfo )
        {
          v20 = *(_OWORD *)(list + 64);
          *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)(list + 48);
          *(_OWORD *)&v26.fields.fakeValue = v20;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v25 = v26;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v25, 0LL);
          if ( list == v16 )
          {
            list = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v18, 0LL);
            if ( (list & 1) == 0 )
            {
              v21 = *(_OWORD *)(v18 + 32);
              *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)(v18 + 16);
              *(_OWORD *)&v26.fields.fakeValue = v21;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v24 = v26;
              list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v24, 0LL);
              if ( !v12 )
                break;
              System_Collections_Generic_List_long___Add(
                v12,
                list,
                (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
            }
          }
        }
      }
      if ( ++v17 >= Count )
        goto LABEL_24;
    }
LABEL_29:
    sub_B2C434(list, v13);
  }
LABEL_24:
  if ( !v12 )
    goto LABEL_29;
  v23 = System_Collections_Generic_List_long___ToArray(
          v12,
          (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  }
  UserServantNewManager__SetOld_34323412(v23, v22);
}


UserServantEntity_array *__fastcall UserServantMaster__getAllList(UserServantMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *List; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v9; // x19
  DataManager_o *Instance; // x0
  const MethodInfo *v11; // x1

  if ( (byte_418D24B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor___67324992, v5);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_418D24B = 1;
  }
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, method);
  v9 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v9,
    List,
    (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___67324992);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL
    || (Instance = (DataManager_o *)UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, v11), !v9) )
  {
    sub_B2C434(Instance, v11);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  __int64 v14; // x1
  int64_t Instance; // x0
  __int64 v16; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x27
  int64_t v18; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x23
  int32_t v21; // w24
  int64_t v22; // x25
  __int64 v23; // x10
  __int128 v24; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x21
  __int64 v26; // x26
  __int64 v27; // x27
  ServantEntity_o *v28; // x26
  int64_t v30; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_418D24A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&UserServantEntity_TypeInfo, v14);
    byte_418D24A = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_31;
  v18 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v21,
                            (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v22 = Instance;
        v23 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v23
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v23 - 8) == UserServantEntity_TypeInfo )
        {
          v24 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v32.fields.fakeValue = v24;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v31 = v32;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v31, 0LL);
          if ( Instance == v18 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v22, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v30 = v18;
              v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v27 = *(_QWORD *)(v22 + 80);
              v26 = *(_QWORD *)(v22 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v33.fields.currentCryptoKey = v27;
              *(_QWORD *)&v33.fields.fakeValue = v26;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v33, 0LL);
              if ( !v25 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v25;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v25,
                                    Instance,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v18 = v30;
              if ( !Instance )
                break;
              v28 = (ServantEntity_o *)Instance;
              Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                Instance = ServantEntity__get_IsServantMaterialTd(v28, 0LL);
                if ( (Instance & 1) == 0 )
                {
                  if ( !v20 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v20,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
                }
              }
            }
          }
        }
      }
      if ( ++v21 >= Count )
        goto LABEL_29;
    }
LABEL_31:
    sub_B2C434(Instance, v16);
  }
LABEL_29:
  if ( !v20 )
    goto LABEL_31;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


int32_t __fastcall UserServantMaster__getCount(
        UserServantMaster_o *this,
        int32_t *servantSum,
        int32_t *servantEquipSum,
        bool friendShipSvtEqExclude,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x19
  DataManager_o *v20; // x24
  int32_t Count; // w0
  int32_t v22; // w25
  int32_t v23; // w26
  int32_t v24; // w27
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v26; // x28
  __int64 v27; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v28; // q0
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x19
  void *monitor; // x28
  WarEntity_o *Entity; // x0
  int32_t v32; // w19
  ServantEntity_o *v33; // x28
  int32_t *v34; // x9
  int32_t *v36; // [xsp+10h] [xbp-A0h]
  DataMasterBase_WarMaster__WarEntity__int__o *v37; // [xsp+18h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_418D237 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, servantSum);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B2C35C(&NetworkManager_TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&UserServantEntity_TypeInfo, v16);
    byte_418D237 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
LABEL_35:
    sub_B2C434(Instance, v18);
  v20 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v36 = servantSum;
    v37 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    v22 = Count;
    v23 = 0;
    v24 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_35;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
               v24,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v26 = Item;
        v27 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v27
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v27 - 1] == UserServantEntity_TypeInfo )
        {
          v28 = Item[4];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v39.fields.currentCryptoKey = Item[3];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v39.fields.fakeValue = v28;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v38 = v39;
          if ( (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v38, 0LL) == v20
            && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v26, 0LL) )
          {
            klass = v26[5].klass;
            monitor = v26[5].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v40.fields.currentCryptoKey = klass;
            *(_QWORD *)&v40.fields.fakeValue = monitor;
            v18 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v40, 0LL);
            Instance = (DataManager_o *)v37;
            if ( !v37 )
              goto LABEL_35;
            ++v23;
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v37,
                       v18,
                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              v32 = *(&Entity->fields.startType + 1);
              v33 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServant(v32, 0LL) )
              {
                v34 = v36;
              }
              else
              {
                if ( !SvtType__IsKeepServantEquip(v32, 0LL)
                  || friendShipSvtEqExclude && ServantEntity__get_IsFriendShipSvtEquip(v33, 0LL) )
                {
                  goto LABEL_31;
                }
                v34 = servantEquipSum;
              }
              ++*v34;
            }
          }
        }
      }
LABEL_31:
      if ( ++v24 >= v22 )
        return v23;
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
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x19
  DataManager_o *v18; // x23
  int32_t Count; // w0
  int32_t v20; // w24
  int32_t v21; // w25
  int32_t v22; // w26
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v24; // x27
  __int64 v25; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v26; // q0
  void *monitor; // x27
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x28
  WarEntity_o *Entity; // x0
  int32_t v30; // w27
  int32_t *v31; // x9
  int32_t *v33; // [xsp+10h] [xbp-A0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_418D238 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, servantSum);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&UserServantEntity_TypeInfo, v14);
    byte_418D238 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
LABEL_33:
    sub_B2C434(Instance, v16);
  v18 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v33 = servantSum;
    v20 = Count;
    v21 = 0;
    v22 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_33;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
               v22,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v24 = Item;
        v25 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v25
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v25 - 1] == UserServantEntity_TypeInfo )
        {
          v26 = Item[4];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v35.fields.currentCryptoKey = Item[3];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v35.fields.fakeValue = v26;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v34 = v35;
          if ( (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v34, 0LL) == v18
            && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v24, 0LL) )
          {
            klass = v24[5].klass;
            monitor = v24[5].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v36.fields.currentCryptoKey = klass;
            *(_QWORD *)&v36.fields.fakeValue = monitor;
            v16 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v36, 0LL);
            Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster;
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_33;
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       v16,
                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              v30 = *(&Entity->fields.startType + 1);
              if ( SvtType__IsOrganization(v30, 0LL) )
              {
                v31 = v33;
LABEL_28:
                ++v21;
                ++*v31;
                goto LABEL_29;
              }
              if ( SvtType__IsServantEquip(v30, 0LL) )
              {
                v31 = servantEquipSum;
                goto LABEL_28;
              }
            }
          }
        }
      }
LABEL_29:
      if ( ++v22 >= v20 )
        return v21;
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
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w21
  int32_t v11; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  UserServantEntity_o *v13; // x23
  __int64 v14; // x10
  void *monitor; // x24
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_418D247 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&heroineId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&UserServantEntity_TypeInfo, v7);
    byte_418D247 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v11,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v13 = (UserServantEntity_o *)Item;
        v14 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v14 - 1] == UserServantEntity_TypeInfo )
        {
          klass = Item[5].klass;
          monitor = Item[5].monitor;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v18.fields.currentCryptoKey = klass;
          *(_QWORD *)&v18.fields.fakeValue = monitor;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v18, 0LL) == heroineId
            && UserServantEntity__IsHeroine(v13, 0LL) )
          {
            return v13;
          }
        }
      }
      if ( ++v11 >= v10 )
        return 0LL;
    }
LABEL_18:
    sub_B2C434(list, *(_QWORD *)&heroineId);
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
  __int64 v14; // x1
  int64_t Instance; // x0
  __int64 v16; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t v18; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x23
  int32_t v21; // w24
  int64_t v22; // x25
  __int64 v23; // x10
  __int128 v24; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x21
  __int64 v26; // x26
  __int64 v27; // x27
  int64_t v29; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_418D241 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&UserServantEntity_TypeInfo, v14);
    byte_418D241 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v18 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v21,
                            (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v22 = Instance;
        v23 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v23
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v23 - 8) == UserServantEntity_TypeInfo )
        {
          v24 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v31.fields.fakeValue = v24;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v30 = v31;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v30, 0LL);
          if ( Instance == v18 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v22, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v29 = v18;
              v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v27 = *(_QWORD *)(v22 + 80);
              v26 = *(_QWORD *)(v22 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v32.fields.currentCryptoKey = v27;
              *(_QWORD *)&v32.fields.fakeValue = v26;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v32, 0LL);
              if ( !v25 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v25;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v25,
                                    Instance,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v18 = v29;
              if ( !Instance )
                break;
              Instance = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( !v20 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v20,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v21 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B2C434(Instance, v16);
  }
LABEL_28:
  if ( !v20 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  __int64 v14; // x1
  int64_t Instance; // x0
  __int64 v16; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t v18; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x23
  int32_t v21; // w24
  int64_t v22; // x25
  __int64 v23; // x10
  __int128 v24; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x21
  __int64 v26; // x26
  __int64 v27; // x27
  int64_t v29; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_418D23F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&UserServantEntity_TypeInfo, v14);
    byte_418D23F = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v18 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v21,
                            (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v22 = Instance;
        v23 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v23
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v23 - 8) == UserServantEntity_TypeInfo )
        {
          v24 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v31.fields.fakeValue = v24;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v30 = v31;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v30, 0LL);
          if ( Instance == v18 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v22, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v29 = v18;
              v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v27 = *(_QWORD *)(v22 + 80);
              v26 = *(_QWORD *)(v22 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v32.fields.currentCryptoKey = v27;
              *(_QWORD *)&v32.fields.fakeValue = v26;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v32, 0LL);
              if ( !v25 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v25;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v25,
                                    Instance,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v18 = v29;
              if ( !Instance )
                break;
              Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( !v20 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v20,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v21 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B2C434(Instance, v16);
  }
LABEL_28:
  if ( !v20 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getList(UserServantMaster_o *this, const MethodInfo *method)
{
  int64_t UserId; // x1
  const MethodInfo *v4; // x2

  if ( (byte_418D239 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_418D239 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  return UserServantMaster__getList_34307940(this, UserId, v4);
}


UserServantEntity_array *__fastcall UserServantMaster__getList_34307940(
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
  int64_t list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x22
  int32_t v15; // w23
  UserServantEntity_o *v16; // x24
  __int64 v17; // x10
  __int128 v18; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-70h]

  if ( (byte_418D23A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B2C35C(&UserServantEntity_TypeInfo, v11);
    byte_418D23A = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v15,
                        (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v16 = (UserServantEntity_o *)list;
        v17 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v17
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v17 - 8) == UserServantEntity_TypeInfo )
        {
          v18 = *(_OWORD *)(list + 64);
          *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)(list + 48);
          *(_OWORD *)&v21.fields.fakeValue = v18;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v20 = v21;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v20, 0LL);
          if ( list == userId )
          {
            list = UserServantEntity__IsWithdrawal(v16, 0LL);
            if ( (list & 1) == 0 )
            {
              if ( !v14 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v14,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            }
          }
        }
      }
      if ( ++v15 >= Count )
        goto LABEL_18;
    }
LABEL_20:
    sub_B2C434(list, userId);
  }
LABEL_18:
  if ( !v14 )
    goto LABEL_20;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getNoneCombineSvt(
        UserServantMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t v3; // x19
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
  int64_t Instance; // x0
  __int64 v17; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x26
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x23
  int32_t v21; // w24
  int64_t v22; // x25
  __int64 v23; // x10
  __int128 v24; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x19
  __int64 v26; // x26
  __int64 v27; // x27
  int64_t v29; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  v3 = userId;
  if ( (byte_418D248 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&UserServantEntity_TypeInfo, v15);
    byte_418D248 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this->fields.list )
    goto LABEL_27;
  v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v21,
                            (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v22 = Instance;
        v23 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v23
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v23 - 8) == UserServantEntity_TypeInfo )
        {
          v24 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v31.fields.fakeValue = v24;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v30 = v31;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v30, 0LL);
          if ( Instance == v3 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v22, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v29 = v3;
              v25 = v18;
              v27 = *(_QWORD *)(v22 + 80);
              v26 = *(_QWORD *)(v22 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v32.fields.currentCryptoKey = v27;
              *(_QWORD *)&v32.fields.fakeValue = v26;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v32, 0LL);
              if ( !v25 )
                break;
              v18 = v25;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v25,
                                    Instance,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v3 = v29;
              if ( !Instance )
                break;
              if ( *(_DWORD *)(Instance + 84) != 3 )
              {
                if ( !v20 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v20,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v21 >= Count )
        goto LABEL_25;
    }
LABEL_27:
    sub_B2C434(Instance, v17);
  }
LABEL_25:
  if ( !v20 )
    goto LABEL_27;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  __int64 v19; // x1
  __int64 v20; // x1
  void *Instance; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x22
  int32_t Count; // w23
  SvtMaterialTdMaster_o *v26; // x24
  __int64 v27; // x25
  __int64 v28; // x26
  int32_t v29; // w25
  __int64 v30; // x27
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x10
  System_Int32_array **v38; // x1
  EventMissionProgressRequest_Argument_ProgressData_o **v39; // x26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v40; // x28
  void *monitor; // x27
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x28
  int32_t v43; // w27
  DataMasterBase_WarMaster__WarEntity__int__o *v45; // [xsp+8h] [xbp-68h]
  WarBoardPieceData_array *array; // [xsp+18h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_418D244 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Exists_SvtMaterialTdEntity___, usrSvtEnt);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___, v8);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B2C35C(&Method_System_Predicate_SvtMaterialTdEntity___ctor__, v15);
    sub_B2C35C(&System_Predicate_SvtMaterialTdEntity__TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&Method_UserServantMaster___c__DisplayClass15_0__getNpUpServantList_b__0__, v18);
    sub_B2C35C(&UserServantMaster___c__DisplayClass15_0_TypeInfo, v19);
    sub_B2C35C(&UserServantEntity_TypeInfo, v20);
    byte_418D244 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_39;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
  if ( !usrSvtEnt )
    goto LABEL_39;
  v26 = (SvtMaterialTdMaster_o *)Instance;
  v28 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v47.fields.currentCryptoKey = v28;
  *(_QWORD *)&v47.fields.fakeValue = v27;
  v45 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v47, 0LL);
  if ( !v26 )
    goto LABEL_39;
  Instance = SvtMaterialTdMaster__GetEntityList(v26, (int32_t)Instance, 0LL);
  array = (WarBoardPieceData_array *)Instance;
  if ( Count >= 1 )
  {
    v29 = 0;
    do
    {
      v30 = sub_B2C42C(UserServantMaster___c__DisplayClass15_0_TypeInfo);
      UserServantMaster___c__DisplayClass15_0___ctor((UserServantMaster___c__DisplayClass15_0_o *)v30, 0LL);
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_39;
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   v29,
                   (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v30 )
        goto LABEL_39;
      if ( Instance
        && (v37 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v37) )
      {
        if ( *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v37 - 8) == UserServantEntity_TypeInfo )
          v38 = (System_Int32_array **)Instance;
        else
          v38 = 0LL;
      }
      else
      {
        v38 = 0LL;
      }
      *(_QWORD *)(v30 + 16) = v38;
      v39 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v30 + 16);
      sub_B2C2F8((BattleServantConfConponent_o *)(v30 + 16), v38, v31, v32, v33, v34, v35, v36);
      Instance = *(void **)(v30 + 16);
      if ( Instance )
      {
        Instance = (void *)UserServantEntity__IsWithdrawal((UserServantEntity_o *)Instance, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          v40 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_SvtMaterialTdEntity__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v40,
            (Il2CppObject *)v30,
            Method_UserServantMaster___c__DisplayClass15_0__getNpUpServantList_b__0__,
            (const MethodInfo_2952BE4 *)Method_System_Predicate_SvtMaterialTdEntity___ctor__);
          Instance = (void *)System_Array__Exists_WarBoardPieceData_(
                               array,
                               (System_Predicate_T__o *)v40,
                               (const MethodInfo_1FFBF4C *)Method_System_Array_Exists_SvtMaterialTdEntity___);
          v22 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v30 + 16);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v24 )
              goto LABEL_39;
LABEL_35:
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v24,
              v22,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            continue;
          }
          if ( !v22 )
            goto LABEL_39;
          klass = v22[2].klass;
          monitor = v22[2].monitor;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v48.fields.currentCryptoKey = klass;
          *(_QWORD *)&v48.fields.fakeValue = monitor;
          v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)(unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                                       v48,
                                                                                       0LL);
          Instance = v45;
          if ( !v45 )
            goto LABEL_39;
          Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v45,
                       (int32_t)v22,
                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_39;
          v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                  *((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance + 2),
                  0LL);
          Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                               usrSvtEnt->fields.svtId,
                               0LL);
          if ( v43 == (_DWORD)Instance )
          {
            if ( !v24 )
              goto LABEL_39;
            v22 = *v39;
            goto LABEL_35;
          }
        }
      }
    }
    while ( ++v29 < Count );
  }
  if ( !v24 )
LABEL_39:
    sub_B2C434(Instance, v22);
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  __int64 v14; // x1
  int64_t Instance; // x0
  __int64 v16; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t v18; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x23
  int32_t v21; // w24
  int64_t v22; // x25
  __int64 v23; // x10
  __int128 v24; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x21
  __int64 v26; // x26
  __int64 v27; // x27
  int64_t v29; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_418D240 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&UserServantEntity_TypeInfo, v14);
    byte_418D240 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v18 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v21,
                            (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v22 = Instance;
        v23 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v23
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v23 - 8) == UserServantEntity_TypeInfo )
        {
          v24 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v31.fields.fakeValue = v24;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v30 = v31;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v30, 0LL);
          if ( Instance == v18 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v22, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v29 = v18;
              v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v27 = *(_QWORD *)(v22 + 80);
              v26 = *(_QWORD *)(v22 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v32.fields.currentCryptoKey = v27;
              *(_QWORD *)&v32.fields.fakeValue = v26;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v32, 0LL);
              if ( !v25 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v25;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v25,
                                    Instance,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v18 = v29;
              if ( !Instance )
                break;
              Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( !v20 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v20,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v21 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B2C434(Instance, v16);
  }
LABEL_28:
  if ( !v20 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  __int64 v23; // x1
  __int64 v24; // x1
  System_Collections_Generic_List_int__o *v25; // x22
  int64_t Instance; // x0
  __int64 v27; // x1
  System_Collections_Generic_Dictionary_int__List_int___o *v28; // x22
  __int64 v29; // x23
  __int64 v30; // x24
  int32_t v31; // w21
  int32_t Count; // w23
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v34; // x25
  __int64 v35; // x26
  SvtMaterialTdMaster_o *v36; // x24
  int32_t i; // w25
  __int64 v38; // x27
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x10
  System_Int32_array **v46; // x1
  int64_t *v47; // x26
  int64_t v48; // x8
  __int128 v49; // q0
  int64_t v50; // x0
  __int128 v51; // q0
  int64_t v52; // x28
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v53; // x28
  int64_t v54; // x8
  __int64 v55; // x27
  __int64 v56; // x28
  int32_t v57; // w27
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v58; // x20
  __int64 v59; // x19
  __int64 v60; // x23
  WarBoardPieceData_array *array; // [xsp+0h] [xbp-E0h]
  System_Collections_Generic_Dictionary_int__List_int___o **v63; // [xsp+8h] [xbp-D8h]
  System_Collections_Generic_List_int__o *v64; // [xsp+10h] [xbp-D0h]
  UserServantEntity_o *v65; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+60h] [xbp-80h]
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_418D243 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Exists_SvtMaterialTdEntity___, usrSvtEnt);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v15);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_B2C35C(&Method_System_Predicate_SvtMaterialTdEntity___ctor__, v19);
    sub_B2C35C(&System_Predicate_SvtMaterialTdEntity__TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B2C35C(&Method_UserServantMaster___c__DisplayClass14_0__getSameSvtNpLvCache_b__0__, v22);
    sub_B2C35C(&UserServantMaster___c__DisplayClass14_0_TypeInfo, v23);
    sub_B2C35C(&UserServantEntity_TypeInfo, v24);
    byte_418D243 = 1;
  }
  v25 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  value = (WarBoardEvalValueSquare_CalcEval_o *)v25;
  if ( !usrSvtEnt )
    goto LABEL_64;
  if ( UserServantEntity__IsEventJoin(usrSvtEnt, 0LL) )
    goto LABEL_13;
  v28 = *cachedUserServantNpLvDict;
  v30 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v70.fields.currentCryptoKey = v30;
  *(_QWORD *)&v70.fields.fakeValue = v29;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v70, 0LL);
  if ( !v28 )
    goto LABEL_64;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v28,
          Instance,
          &value,
          (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
LABEL_13:
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      DataManager__GetMasterData_WarQuestSelectionMaster_(
        (DataManager_o *)Instance,
        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = (int64_t)this->fields.list;
      if ( Instance )
      {
        Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
        v64 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v64,
          (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
        Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
          v65 = usrSvtEnt;
          v35 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
          v34 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
          v36 = (SvtMaterialTdMaster_o *)MasterData_WarQuestSelectionMaster;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v71.fields.currentCryptoKey = v35;
          *(_QWORD *)&v71.fields.fakeValue = v34;
          v63 = cachedUserServantNpLvDict;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v71, 0LL);
          if ( v36 )
          {
            Instance = (int64_t)SvtMaterialTdMaster__GetEntityList(v36, Instance, 0LL);
            array = (WarBoardPieceData_array *)Instance;
            if ( Count >= 1 )
            {
              for ( i = 0; i < Count; ++i )
              {
                v38 = sub_B2C42C(UserServantMaster___c__DisplayClass14_0_TypeInfo);
                UserServantMaster___c__DisplayClass14_0___ctor((UserServantMaster___c__DisplayClass14_0_o *)v38, 0LL);
                Instance = (int64_t)this->fields.list;
                if ( !Instance )
                  goto LABEL_64;
                Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                      (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                      i,
                                      (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
                if ( !v38 )
                  goto LABEL_64;
                if ( Instance
                  && (v45 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1),
                      *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v45) )
                {
                  if ( *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v45 - 8) == UserServantEntity_TypeInfo )
                    v46 = (System_Int32_array **)Instance;
                  else
                    v46 = 0LL;
                }
                else
                {
                  v46 = 0LL;
                }
                *(_QWORD *)(v38 + 16) = v46;
                v47 = (int64_t *)(v38 + 16);
                sub_B2C2F8((BattleServantConfConponent_o *)(v38 + 16), v46, v39, v40, v41, v42, v43, v44);
                Instance = *(_QWORD *)(v38 + 16);
                if ( Instance )
                {
                  Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)Instance, 0LL);
                  if ( (Instance & 1) == 0 )
                  {
                    Instance = *v47;
                    if ( !*v47 )
                      goto LABEL_64;
                    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
                    if ( (Instance & 1) == 0 )
                    {
                      v48 = *v47;
                      if ( !*v47 )
                        goto LABEL_64;
                      v49 = *(_OWORD *)(v48 + 32);
                      *(_OWORD *)&v68.fields.currentCryptoKey = *(_OWORD *)(v48 + 16);
                      *(_OWORD *)&v68.fields.fakeValue = v49;
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                      }
                      v67 = v68;
                      v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v67, 0LL);
                      v51 = *(_OWORD *)&v65->fields.id.fields.fakeValue;
                      v52 = v50;
                      *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&v65->fields.id.fields.currentCryptoKey;
                      *(_OWORD *)&v66.fields.fakeValue = v51;
                      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v66, 0LL);
                      if ( v52 != Instance )
                      {
                        Instance = UserServantEntity__IsMaterialTd(v65, 0LL);
                        if ( (Instance & 1) == 0 )
                        {
                          Instance = *v47;
                          if ( !*v47 )
                            goto LABEL_64;
                          Instance = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Instance, 0LL);
                          if ( (Instance & 1) != 0 )
                          {
                            v53 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_SvtMaterialTdEntity__TypeInfo);
                            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                              v53,
                              (Il2CppObject *)v38,
                              Method_UserServantMaster___c__DisplayClass14_0__getSameSvtNpLvCache_b__0__,
                              (const MethodInfo_2952BE4 *)Method_System_Predicate_SvtMaterialTdEntity___ctor__);
                            Instance = System_Array__Exists_WarBoardPieceData_(
                                         array,
                                         (System_Predicate_T__o *)v53,
                                         (const MethodInfo_1FFBF4C *)Method_System_Array_Exists_SvtMaterialTdEntity___);
                            if ( (Instance & 1) == 0 )
                              continue;
                          }
                          else
                          {
                            v54 = *v47;
                            if ( !*v47 )
                              goto LABEL_64;
                            v56 = *(_QWORD *)(v54 + 80);
                            v55 = *(_QWORD *)(v54 + 88);
                            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                            }
                            *(_QWORD *)&v72.fields.currentCryptoKey = v56;
                            *(_QWORD *)&v72.fields.fakeValue = v55;
                            v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v72, 0LL);
                            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                         v65->fields.svtId,
                                         0LL);
                            if ( v57 != (_DWORD)Instance )
                              continue;
                            Instance = UserServantEntity__IsEventJoin(v65, 0LL);
                            if ( (Instance & 1) != 0 )
                              continue;
                          }
                          if ( !*v47 )
                            goto LABEL_64;
                          Instance = (int64_t)v64;
                          if ( !v64 )
                            goto LABEL_64;
                          System_Collections_Generic_List_int___Add(
                            v64,
                            *(_DWORD *)(*v47 + 292),
                            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
                        }
                      }
                    }
                  }
                }
              }
            }
            if ( v64 )
            {
              if ( v64->fields._size < 1 )
                return 0;
              v31 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)v64, 0LL);
              if ( UserServantEntity__IsEventJoin(v65, 0LL) )
                return v31;
              v58 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)*v63;
              v60 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
              v59 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v73.fields.currentCryptoKey = v60;
              *(_QWORD *)&v73.fields.fakeValue = v59;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v73, 0LL);
              if ( v58 )
              {
                System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
                  v58,
                  Instance,
                  (WarBoardAIRoute_RouteData_o *)v64,
                  (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
                return v31;
              }
            }
          }
        }
      }
    }
LABEL_64:
    sub_B2C434(Instance, v27);
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
  __int64 v17; // x1
  int64_t Instance; // x0
  const MethodInfo *v19; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x19
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v22; // x1
  __int64 v23; // x3
  System_Collections_Generic_IEnumerator_T__o *v24; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v26; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v29; // x3
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int *v32; // x11
  __int64 v33; // x0
  UserServantEntity_o *v34; // x0
  UserServantEntity_o *v35; // x24
  __int64 v36; // x9
  __int128 v37; // q0
  int64_t v38; // x25
  __int64 v39; // x25
  __int64 v40; // x26
  __int64 v41; // x0
  ServantEntity_o *Entity; // x0
  __int64 v43; // x1
  __int64 v44; // x25
  __int64 v45; // x26
  __int64 v46; // x1
  __int64 v47; // x24
  __int64 v48; // x25
  int32_t v49; // w0
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  unsigned __int64 v51; // x10
  int *v52; // x11
  __int64 v53; // x0
  __int64 v54; // x8
  int64_t v55; // x22
  unsigned __int64 v56; // x20
  __int64 v57; // x23
  __int128 v58; // q0
  int64_t v59; // x24
  __int64 v60; // x24
  __int64 v61; // x25
  __int64 v62; // x24
  __int64 v63; // x25
  __int64 v64; // x23
  __int64 v65; // x24
  int32_t v66; // w0
  __int64 v68; // x0
  UserServantStorageMaster_o *v69; // [xsp+8h] [xbp-D8h]
  int32_t v70; // [xsp+14h] [xbp-CCh]
  System_Collections_Generic_List_int__o *v71; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+60h] [xbp-80h]
  __int64 v75; // [xsp+88h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16

  if ( (byte_418D23C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B2C35C(&NetworkManager_TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&UserServantEntity_TypeInfo, v17);
    byte_418D23C = 1;
  }
  HIDWORD(v75) = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  v69 = (UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v71 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v71,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_88;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v70 = 0;
  v24 = Enumerator;
LABEL_7:
  if ( !v24 )
    sub_B2C434(Enumerator, v22);
  while ( 1 )
  {
    klass = v24->klass;
    if ( *(_WORD *)&v24->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v26;
        p_offset += 4;
        if ( v26 >= *(unsigned __int16 *)&v24->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AC5258(v24, System_Collections_IEnumerator_TypeInfo, 0LL, v23);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v24,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v30 = v24->klass;
    if ( *(_WORD *)&v24->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v32 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v31;
        v32 += 4;
        if ( v31 >= *(unsigned __int16 *)&v24->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v33 = (__int64)&v30->vtable[*v32].method;
    }
    else
    {
LABEL_19:
      v33 = sub_AC5258(v24, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v29);
    }
    v34 = (UserServantEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                                   v24,
                                   *(_QWORD *)(v33 + 8));
    v35 = v34;
    if ( v34 )
    {
      v36 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v34->klass->_2.bitflags2 + 1) < (unsigned int)v36
        || (UserServantEntity_c *)v34->klass->_2.typeHierarchy[v36 - 1] != UserServantEntity_TypeInfo )
      {
        sub_B2C728(v34);
        goto LABEL_87;
      }
      v37 = *(_OWORD *)&v34->fields.userId.fields.fakeValue;
      *(_OWORD *)&v74.fields.currentCryptoKey = *(_OWORD *)&v34->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v74.fields.fakeValue = v37;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v73 = v74;
      v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v73, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( v38 == NetworkManager__get_UserId(0LL) && !UserServantEntity__IsWithdrawal(v35, 0LL) )
      {
        v40 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
        v39 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v76.fields.currentCryptoKey = v40;
        *(_QWORD *)&v76.fields.fakeValue = v39;
        v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v76, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          sub_B2C434(v41, (unsigned int)v41);
        Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v41,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_B2C434(0LL, v43);
        if ( ServantEntity__get_IsOrganization(Entity, 0LL) )
        {
          v45 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
          v44 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v77.fields.currentCryptoKey = v45;
          *(_QWORD *)&v77.fields.fakeValue = v44;
          v46 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v77, 0LL);
          if ( !v71 )
            sub_B2C434(0LL, v46);
          if ( !System_Collections_Generic_List_int___Contains(
                  v71,
                  v46,
                  (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            v48 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
            v47 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
            ++v70;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v78.fields.currentCryptoKey = v48;
            *(_QWORD *)&v78.fields.fakeValue = v47;
            v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v78, 0LL);
            System_Collections_Generic_List_int___Add(
              v71,
              v49,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
            goto LABEL_7;
          }
        }
      }
    }
  }
  v75 = 0x1000000B5LL;
  v50 = v24->klass;
  if ( *(_WORD *)&v24->klass->_2.bitflags1 )
  {
    v51 = 0LL;
    v52 = &v50->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      ++v51;
      v52 += 4;
      if ( v51 >= *(unsigned __int16 *)&v24->klass->_2.bitflags1 )
        goto LABEL_51;
    }
    v53 = (__int64)&v50->vtable[*v52].method;
  }
  else
  {
LABEL_51:
    v53 = sub_AC5258(v24, System_IDisposable_TypeInfo, 0LL, v29);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(v24, *(_QWORD *)(v53 + 8));
  if ( (_DWORD)v75 == 181 )
    v75 = 181LL;
  Instance = (int64_t)v69;
  if ( !v69 || (Instance = (int64_t)UserServantStorageMaster__getList(v69, v19)) == 0 )
LABEL_88:
    sub_B2C434(Instance, v19);
  v54 = *(_QWORD *)(Instance + 24);
  v55 = Instance;
  if ( (int)v54 >= 1 )
  {
    v56 = 0LL;
    while ( v56 < (unsigned int)v54 )
    {
      v57 = *(_QWORD *)(v55 + 32 + 8 * v56);
      if ( v57 )
      {
        v58 = *(_OWORD *)(v57 + 64);
        *(_OWORD *)&v74.fields.currentCryptoKey = *(_OWORD *)(v57 + 48);
        *(_OWORD *)&v74.fields.fakeValue = v58;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v72 = v74;
        v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v72, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        if ( v59 == Instance )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v57, 0LL);
          if ( (Instance & 1) == 0 )
          {
            v61 = *(_QWORD *)(v57 + 80);
            v60 = *(_QWORD *)(v57 + 88);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v79.fields.currentCryptoKey = v61;
            *(_QWORD *)&v79.fields.fakeValue = v60;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v79, 0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_88;
            Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  Instance,
                                  (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              goto LABEL_88;
            Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
            if ( (Instance & 1) != 0 )
            {
              v63 = *(_QWORD *)(v57 + 80);
              v62 = *(_QWORD *)(v57 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v80.fields.currentCryptoKey = v63;
              *(_QWORD *)&v80.fields.fakeValue = v62;
              v19 = (const MethodInfo *)(unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                        v80,
                                                        0LL);
              Instance = (int64_t)v71;
              if ( !v71 )
                goto LABEL_88;
              Instance = System_Collections_Generic_List_int___Contains(
                           v71,
                           (int32_t)v19,
                           (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
              if ( (Instance & 1) == 0 )
              {
                v65 = *(_QWORD *)(v57 + 80);
                v64 = *(_QWORD *)(v57 + 88);
                ++v70;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v81.fields.currentCryptoKey = v65;
                *(_QWORD *)&v81.fields.fakeValue = v64;
                v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v81, 0LL);
                System_Collections_Generic_List_int___Add(
                  v71,
                  v66,
                  (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
              }
            }
          }
        }
      }
      LODWORD(v54) = *(_DWORD *)(v55 + 24);
      if ( (__int64)++v56 >= (int)v54 )
        return v70;
    }
LABEL_87:
    v68 = sub_B2C460(Instance);
    sub_B2C400(v68, 0LL);
  }
  return v70;
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
  __int64 v14; // x1
  int64_t Instance; // x0
  __int64 v16; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t v18; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x23
  int32_t v21; // w24
  int64_t v22; // x25
  __int64 v23; // x10
  __int128 v24; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x21
  __int64 v26; // x26
  __int64 v27; // x27
  int64_t v29; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_418D242 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&UserServantEntity_TypeInfo, v14);
    byte_418D242 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v18 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v21,
                            (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v22 = Instance;
        v23 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v23
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v23 - 8) == UserServantEntity_TypeInfo )
        {
          v24 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v31.fields.fakeValue = v24;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v30 = v31;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v30, 0LL);
          if ( Instance == v18 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v22, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v29 = v18;
              v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v27 = *(_QWORD *)(v22 + 80);
              v26 = *(_QWORD *)(v22 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v32.fields.currentCryptoKey = v27;
              *(_QWORD *)&v32.fields.fakeValue = v26;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v32, 0LL);
              if ( !v25 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v25;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v25,
                                    Instance,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v18 = v29;
              if ( !Instance )
                break;
              Instance = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( !v20 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v20,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v21 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B2C434(Instance, v16);
  }
LABEL_28:
  if ( !v20 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  __int64 v15; // x1
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v19; // x1
  __int64 v20; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v26; // x3
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x22
  __int64 v33; // x9
  __int128 v34; // q0
  int64_t v35; // x23
  void *monitor; // x23
  EventMissionProgressRequest_Argument_ProgressData_c *v37; // x24
  __int64 v38; // x0
  __int64 v39; // x1
  ServantEntity_o *Entity; // x0
  __int64 v41; // x1
  __int64 v42; // x1
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  unsigned __int64 v44; // x10
  int32_t *v45; // x11
  __int64 v46; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+30h] [xbp-80h]
  __int64 v51; // [xsp+58h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_418D23B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v10);
    sub_B2C35C(&NetworkManager_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&UserServantEntity_TypeInfo, v15);
    byte_418D23B = 1;
  }
  HIDWORD(v51) = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              Instance,
                                                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___),
        v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v48,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0LL) )
  {
    sub_B2C434(Instance, v17);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v20);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_17:
      v30 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v26);
    }
    v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v30 + 8));
    v32 = v31;
    if ( v31 )
    {
      v33 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v31->klass->_2.bitflags2 + 1) < (unsigned int)v33
        || (UserServantEntity_c *)v31->klass->_2.typeHierarchy[v33 - 1] != UserServantEntity_TypeInfo )
      {
        sub_B2C728(v31);
LABEL_50:
        sub_B2C434(v38, v39);
      }
      v34 = *(_OWORD *)&v31[1].fields.targetId;
      *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&v31[1].monitor;
      *(_OWORD *)&v50.fields.fakeValue = v34;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v49 = v50;
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v49, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( v35 == NetworkManager__get_UserId(0LL) && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v32, 0LL) )
      {
        v37 = v32[2].klass;
        monitor = v32[2].monitor;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v52.fields.currentCryptoKey = v37;
        *(_QWORD *)&v52.fields.fakeValue = monitor;
        v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v52, 0LL);
        v39 = (unsigned int)v38;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_50;
        Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v38,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_B2C434(0LL, v41);
        if ( ServantEntity__get_IsServant(Entity, 0LL) )
        {
          if ( !v48 )
            sub_B2C434(0LL, v42);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v48,
            v32,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
        }
      }
    }
  }
  v51 = 0x10000007BLL;
  v43 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v44 = 0LL;
    v45 = &v43->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      ++v44;
      v45 += 4;
      if ( v44 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_43;
    }
    v46 = (__int64)&v43->vtable[*v45].method;
  }
  else
  {
LABEL_43:
    v46 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v26);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(Enumerator, *(_QWORD *)(v46 + 8));
  if ( (_DWORD)v51 == 123 )
    v51 = 123LL;
  return (System_Collections_Generic_List_UserServantEntity__o *)v48;
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
  __int64 v18; // x1
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x25
  __int64 v22; // x1
  __int64 v23; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v29; // x3
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0
  UserServantEntity_o *v34; // x0
  UserServantEntity_o *v35; // x23
  __int64 v36; // x9
  __int128 v37; // q0
  int64_t v38; // x24
  __int64 SvtClassId; // x1
  System_Collections_Generic_List_int__o *v40; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x21
  __int64 v42; // x24
  __int64 v43; // x25
  __int64 v44; // x1
  ServantEntity_o *Entity; // x0
  __int64 v46; // x1
  _BOOL8 IsServant; // x0
  __int64 v48; // x1
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  unsigned __int64 v50; // x10
  int32_t *v51; // x11
  __int64 v52; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_int__o *v55; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+30h] [xbp-80h]
  __int64 v58; // [xsp+58h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_418D23E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, classIdList);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_B2C35C(&NetworkManager_TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&UserServantEntity_TypeInfo, v18);
    byte_418D23E = 1;
  }
  HIDWORD(v58) = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              Instance,
                                                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___),
        v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v21,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0LL) )
  {
    sub_B2C434(Instance, v20);
  }
  v55 = classIdList;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v22);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v26;
        p_offset += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v23);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v30 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v32 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v31;
        v32 += 4;
        if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v33 = (__int64)&v30->vtable[*v32].method;
    }
    else
    {
LABEL_17:
      v33 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v29);
    }
    v34 = (UserServantEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                                   Enumerator,
                                   *(_QWORD *)(v33 + 8));
    v35 = v34;
    if ( v34 )
    {
      v36 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v34->klass->_2.bitflags2 + 1) < (unsigned int)v36
        || (UserServantEntity_c *)v34->klass->_2.typeHierarchy[v36 - 1] != UserServantEntity_TypeInfo )
      {
        sub_B2C728(v34);
LABEL_52:
        sub_B2C434(v40, SvtClassId);
      }
      v37 = *(_OWORD *)&v34->fields.userId.fields.fakeValue;
      *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&v34->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v57.fields.fakeValue = v37;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v56 = v57;
      v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v56, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( v38 == NetworkManager__get_UserId(0LL) && !UserServantEntity__IsWithdrawal(v35, 0LL) )
      {
        SvtClassId = (unsigned int)UserServantEntity__getSvtClassId(v35, 0LL);
        v40 = v55;
        if ( !v55 )
          goto LABEL_52;
        if ( System_Collections_Generic_List_int___Contains(
               v55,
               SvtClassId,
               (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v41 = v21;
          v43 = *(_QWORD *)&v35->fields.svtId.fields.currentCryptoKey;
          v42 = *(_QWORD *)&v35->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v59.fields.currentCryptoKey = v43;
          *(_QWORD *)&v59.fields.fakeValue = v42;
          v44 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v59, 0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            sub_B2C434(0LL, v44);
          v21 = v41;
          Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        v44,
                                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Entity )
            sub_B2C434(0LL, v46);
          IsServant = ServantEntity__get_IsServant(Entity, 0LL);
          if ( IsServant )
          {
            if ( !v41 )
              sub_B2C434(IsServant, v48);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v41,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
          }
        }
      }
    }
  }
  v58 = 0x100000089LL;
  v49 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v50 = 0LL;
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      ++v50;
      v51 += 4;
      if ( v50 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_45;
    }
    v52 = (__int64)&v49->vtable[*v51].method;
  }
  else
  {
LABEL_45:
    v52 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v29);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(Enumerator, *(_QWORD *)(v52 + 8));
  if ( (_DWORD)v58 == 137 )
    v58 = 137LL;
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
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v19; // x21
  DataManager_o *Instance; // x0
  const MethodInfo *v21; // x1
  System_Collections_Generic_List_long__o *v22; // x20
  _BOOL8 v23; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject v28; // q0
  int64_t v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+40h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_418D24C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor___67324992, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_418D24C = 1;
  }
  memset(&v33, 0, sizeof(v33));
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, *(const MethodInfo **)&svtId);
  v19 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v19,
    List,
    (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___67324992);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL
    || (Instance = (DataManager_o *)UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, v21), !v19) )
  {
    sub_B2C434(Instance, v21);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v19,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  v22 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v22,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v19,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  v33.fields.current = (Il2CppObject *)v32.fields.fakeValue;
  *(_OWORD *)&v33.fields.list = *(_OWORD *)&v32.fields.currentCryptoKey;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v33,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v23 )
      break;
    current = v33.fields.current;
    if ( !v33.fields.current )
      sub_B2C434(v23, v24);
    klass = v33.fields.current[5].klass;
    monitor = v33.fields.current[5].monitor;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v34.fields.currentCryptoKey = klass;
    *(_QWORD *)&v34.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v34, 0LL) == svtId
      && !UserServantEntity__IsEventJoin((UserServantEntity_o *)current, 0LL) )
    {
      v28 = current[2];
      *(Il2CppObject *)&v32.fields.currentCryptoKey = current[1];
      *(Il2CppObject *)&v32.fields.fakeValue = v28;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v31 = v32;
      v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v31, 0LL);
      if ( !v22 )
        sub_B2C434(v29, v29);
      System_Collections_Generic_List_long___Add(
        v22,
        v29,
        (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v33,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
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
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x22
  int32_t v13; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v14; // x24
  __int64 v15; // x10
  Il2CppObject *syncRoot; // x25
  struct System_Collections_Generic_IList_T__o *items; // x26
  int klass; // w8
  int v19; // w9
  __int128 v20; // q0
  int64_t v21; // x0
  __int128 v22; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_418D250 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B2C35C(&UserServantEntity_TypeInfo, v8);
    byte_418D250 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0LL;
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v13,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v14 = list;
      v15 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v15
        || (UserServantEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] != UserServantEntity_TypeInfo )
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
      *(_QWORD *)&v27.fields.currentCryptoKey = items;
      *(_QWORD *)&v27.fields.fakeValue = syncRoot;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v27, 0LL) == svtId
        && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v14, 0LL) )
      {
        if ( !v12 )
          goto LABEL_22;
        klass = (int)v12[8].klass;
        v19 = (int)v14[8].klass;
        if ( klass < v19 )
          goto LABEL_22;
        if ( klass == v19 )
        {
          v20 = *(_OWORD *)&v12[1].klass;
          *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__Fields *)&v26.fields.currentCryptoKey = v12->fields;
          *(_OWORD *)&v26.fields.fakeValue = v20;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v25 = v26;
          v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v25, 0LL);
          v22 = *(_OWORD *)&v14[1].klass;
          *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__Fields *)&v24.fields.currentCryptoKey = v14->fields;
          *(_OWORD *)&v24.fields.fakeValue = v22;
          if ( v21 > CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v24, 0LL) )
LABEL_22:
            v12 = v14;
        }
      }
      if ( ++v13 >= v11 )
        return (UserServantEntity_o *)v12;
    }
LABEL_27:
    sub_B2C434(list, *(_QWORD *)&svtId);
  }
  return 0LL;
}


void __fastcall UserServantMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct UserServantMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41856D8 & 1) == 0 )
  {
    sub_B2C35C(&UserServantMaster___c_TypeInfo, v1);
    byte_41856D8 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(UserServantMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = UserServantMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserServantMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
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
  if ( (byte_41856D9 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass14_0_o *)sub_B2C35C(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          m);
    byte_41856D9 = 1;
  }
  if ( !m || (e = v4->fields.e) == 0LL )
    sub_B2C434(this, m);
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
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v10, 0LL);
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
  if ( (byte_41856DA & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass15_0_o *)sub_B2C35C(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          m);
    byte_41856DA = 1;
  }
  if ( !m || (e = v4->fields.e) == 0LL )
    sub_B2C434(this, m);
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
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v10, 0LL);
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
  if ( (byte_41856DB & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass1_0_o *)sub_B2C35C(
                                                         &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                         ent);
    byte_41856DB = 1;
  }
  if ( !ent )
    sub_B2C434(this, ent);
  v6 = *(_QWORD *)&ent->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&ent->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return v4->fields.svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v8, 0LL);
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
  if ( (byte_41856DC & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass30_0_o *)sub_B2C35C(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          usrSvt);
    byte_41856DC = 1;
  }
  if ( !usrSvt )
    sub_B2C434(this, usrSvt);
  v6 = *(_QWORD *)&usrSvt->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&usrSvt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v8, 0LL) == v4->fields.svtId;
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
    sub_B2C434(this, a);
  }
  return (_DWORD)this - UserServantEntity__getSkillLevel(a, v5->fields.skillIdx, 0LL);
}