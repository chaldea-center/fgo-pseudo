void __fastcall UserServantMaster___ctor(UserServantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FF6A8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__, method);
    byte_40FF6A8 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    14,
    (const MethodInfo_266F514 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__);
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
  int32_t servantEquipSum; // [xsp+8h] [xbp-8h] BYREF
  int32_t servantSum; // [xsp+Ch] [xbp-4h] BYREF

  servantSum = 0;
  servantEquipSum = 0;
  UserServantMaster__getCount(this, &servantSum, &servantEquipSum, friendShipSvtEqExclude, v4);
  v6 = servantEquipSum + count;
  servantEquipSum = v6;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B170D4();
  return v6 > SelfUserGame->fields.svtEquipKeep;
}


bool __fastcall UserServantMaster__CheckServantAdd(UserServantMaster_o *this, int32_t count, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  int32_t v5; // w19
  UserGameEntity_o *SelfUserGame; // x0
  int32_t servantEquipSum; // [xsp+8h] [xbp-8h] BYREF
  int32_t servantSum; // [xsp+Ch] [xbp-4h] BYREF

  servantSum = 0;
  servantEquipSum = 0;
  UserServantMaster__getCount(this, &servantSum, &servantEquipSum, 0, v3);
  v5 = servantSum + count;
  servantSum = v5;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B170D4();
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
  void *v19; // x27
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *v20; // x28
  int32_t v21; // w27
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  void *v26; // x27
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *v27; // x28
  int32_t v28; // w27
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v29; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v31; // x26
  __int64 v32; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v33; // q0
  void *monitor; // x27
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x28
  void *v36; // x27
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *v37; // x28
  int32_t v38; // w27
  WebViewManager_o *Instance; // x0
  UserServantStorageMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v41; // x3
  UserServantEntity_o *v43; // [xsp+10h] [xbp-A0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_40FF6C0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&UserServantEntity_TypeInfo, v12);
    byte_40FF6C0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_56;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v43 = 0LL;
    v16 = UserId;
    v17 = 0LL;
    v18 = 0;
    while ( 1 )
    {
      v29 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v29 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v29,
               v18,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v31 = Item;
      v32 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v32
        || (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v32 - 1] != UserServantEntity_TypeInfo )
      {
        break;
      }
      v33 = Item[4];
      *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v46.fields.currentCryptoKey = Item[3];
      *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v46.fields.fakeValue = v33;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v45 = v46;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v45, 0LL) == v16 )
      {
        klass = v31[5].klass;
        monitor = v31[5].monitor;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v49.fields.currentCryptoKey = klass;
        *(_QWORD *)&v49.fields.fakeValue = monitor;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v49, 0LL) == svtId )
        {
          if ( UserServantEntity__IsWithdrawal((UserServantEntity_o *)v31, 0LL) )
          {
            v43 = (UserServantEntity_o *)v31;
          }
          else if ( v17 )
          {
            v37 = v31[6].klass;
            v36 = v31[6].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v50.fields.currentCryptoKey = v37;
            *(_QWORD *)&v50.fields.fakeValue = v36;
            v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v50, 0LL);
            if ( v38 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v17->fields.limitCount, 0LL)
              || SLODWORD(v31[16].klass) > v17->fields.lv )
            {
              goto LABEL_43;
            }
            v20 = v31[6].klass;
            v19 = v31[6].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v47.fields.currentCryptoKey = v20;
            *(_QWORD *)&v47.fields.fakeValue = v19;
            v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v47, 0LL);
            if ( v21 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v17->fields.limitCount, 0LL)
              && LODWORD(v31[16].klass) == v17->fields.lv
              && !UserServantEntity__IsCondJoin((UserServantEntity_o *)v31, 0LL)
              && UserServantEntity__IsCondJoin(v17, 0LL) )
            {
              goto LABEL_43;
            }
            v27 = v31[6].klass;
            v26 = v31[6].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v48.fields.currentCryptoKey = v27;
            *(_QWORD *)&v48.fields.fakeValue = v26;
            v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v48, 0LL);
            if ( v28 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v17->fields.limitCount, 0LL)
              && LODWORD(v31[16].klass) == v17->fields.lv
              && (__int64)v31[19].klass < v17->fields.createdAt )
            {
LABEL_43:
              v17 = (UserServantEntity_o *)sub_B170CC(UserServantEntity_TypeInfo, v22, v23, v24, v25);
              UserServantEntity___ctor_21432252(v17, (UserServantEntity_o *)v31, 0LL);
            }
          }
          else
          {
            v17 = (UserServantEntity_o *)v31;
          }
        }
      }
      if ( ++v18 >= Count )
        goto LABEL_48;
    }
LABEL_56:
    sub_B170D4();
  }
  v43 = 0LL;
  v17 = 0LL;
LABEL_48:
  if ( checkStorage )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_56;
    MasterData_WarQuestSelectionMaster = (UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_56;
    v17 = UserServantStorageMaster__CostumeTargetEntity(MasterData_WarQuestSelectionMaster, svtId, v17, v41);
  }
  if ( v17 )
    return v17;
  else
    return v43;
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
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v19; // x0
  UserServantStorageMaster_o *v20; // x19
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_Generic_List_int__o *v25; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0
  UserServantEntity_o *v36; // x0
  UserServantEntity_o *v37; // x23
  __int64 v38; // x9
  __int128 v39; // q0
  int64_t v40; // x24
  __int64 v41; // x24
  __int64 v42; // x25
  int32_t v43; // w1
  ServantEntity_o *Entity; // x0
  __int64 v45; // x24
  __int64 v46; // x25
  int32_t v47; // w1
  __int64 v48; // x23
  __int64 v49; // x24
  int32_t v50; // w0
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  unsigned __int64 v52; // x10
  int32_t *v53; // x11
  __int64 v54; // x0
  const MethodInfo *v55; // x1
  int64_t UserId; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x8
  int64_t v60; // x21
  unsigned __int64 v61; // x19
  __int64 v62; // x22
  __int128 v63; // q0
  int64_t v64; // x23
  __int64 v65; // x23
  __int64 v66; // x24
  int32_t v67; // w0
  __int64 v68; // x23
  __int64 v69; // x24
  int32_t v70; // w1
  ServantEntity_o *v71; // x0
  __int64 v72; // x22
  __int64 v73; // x23
  int32_t v74; // w0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+50h] [xbp-80h]
  __int64 v80; // [xsp+78h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16

  if ( (byte_40FF6B0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B16FFC(&System_IDisposable_TypeInfo, v6);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&UserServantEntity_TypeInfo, v17);
    byte_40FF6B0 = 1;
  }
  HIDWORD(v80) = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v19 )
    goto LABEL_89;
  v20 = (UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v19,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v25 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v21,
                                                    v22,
                                                    v23,
                                                    v24);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_89;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v29 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v29;
        p_offset += 4;
        if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v32 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v33 = 0LL;
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v34 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v33;
        v34 += 4;
        if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v35 = (__int64)&v32->vtable[*v34].method;
    }
    else
    {
LABEL_18:
      v35 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v36 = (UserServantEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                                   Enumerator,
                                   *(_QWORD *)(v35 + 8));
    v37 = v36;
    if ( v36 )
    {
      v38 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v36->klass->_2.bitflags2 + 1) < (unsigned int)v38
        || (UserServantEntity_c *)v36->klass->_2.typeHierarchy[v38 - 1] != UserServantEntity_TypeInfo )
      {
        sub_B173C8(v36);
        goto LABEL_88;
      }
      v39 = *(_OWORD *)&v36->fields.userId.fields.fakeValue;
      *(_OWORD *)&v79.fields.currentCryptoKey = *(_OWORD *)&v36->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v79.fields.fakeValue = v39;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v78 = v79;
      v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v78, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( v40 == NetworkManager__get_UserId(0LL) && !UserServantEntity__IsWithdrawal(v37, 0LL) )
      {
        v42 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
        v41 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v81.fields.currentCryptoKey = v42;
        *(_QWORD *)&v81.fields.fakeValue = v41;
        v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v81, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          sub_B170D4();
        Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v43,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_B170D4();
        if ( ServantEntity__get_IsOrganization(Entity, 0LL) )
        {
          v46 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
          v45 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v82.fields.currentCryptoKey = v46;
          *(_QWORD *)&v82.fields.fakeValue = v45;
          v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v82, 0LL);
          if ( !v25 )
            sub_B170D4();
          if ( !System_Collections_Generic_List_int___Contains(
                  v25,
                  v47,
                  (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            v49 = *(_QWORD *)&v37->fields.svtId.fields.currentCryptoKey;
            v48 = *(_QWORD *)&v37->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v83.fields.currentCryptoKey = v49;
            *(_QWORD *)&v83.fields.fakeValue = v48;
            v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v83, 0LL);
            System_Collections_Generic_List_int___Add(
              v25,
              v50,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
    }
  }
  v80 = 0x1000000AALL;
  v51 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v52 = 0LL;
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      ++v52;
      v53 += 4;
      if ( v52 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_51;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_51:
    v54 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(Enumerator, *(_QWORD *)(v54 + 8));
  if ( (_DWORD)v80 == 170 )
    v80 = 170LL;
  if ( !v20 || (UserId = (int64_t)UserServantStorageMaster__getList(v20, v55)) == 0 )
LABEL_89:
    sub_B170D4();
  v59 = *(_QWORD *)(UserId + 24);
  v60 = UserId;
  if ( (int)v59 >= 1 )
  {
    v61 = 0LL;
    while ( v61 < (unsigned int)v59 )
    {
      v62 = *(_QWORD *)(v60 + 32 + 8 * v61);
      if ( v62 )
      {
        v63 = *(_OWORD *)(v62 + 64);
        *(_OWORD *)&v79.fields.currentCryptoKey = *(_OWORD *)(v62 + 48);
        *(_OWORD *)&v79.fields.fakeValue = v63;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v77 = v79;
        v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v77, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        if ( v64 == UserId )
        {
          v66 = *(_QWORD *)(v62 + 80);
          v65 = *(_QWORD *)(v62 + 88);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v84.fields.currentCryptoKey = v66;
          *(_QWORD *)&v84.fields.fakeValue = v65;
          v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v84, 0LL);
          if ( !v25 )
            goto LABEL_89;
          UserId = System_Collections_Generic_List_int___Contains(
                     v25,
                     v67,
                     (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (UserId & 1) == 0 )
          {
            UserId = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v62, 0LL);
            if ( (UserId & 1) == 0 )
            {
              v69 = *(_QWORD *)(v62 + 80);
              v68 = *(_QWORD *)(v62 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v85.fields.currentCryptoKey = v69;
              *(_QWORD *)&v85.fields.fakeValue = v68;
              v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v85, 0LL);
              if ( !MasterData_WarQuestSelectionMaster )
                goto LABEL_89;
              v71 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         MasterData_WarQuestSelectionMaster,
                                         v70,
                                         (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( !v71 )
                goto LABEL_89;
              UserId = ServantEntity__get_IsOrganization(v71, 0LL);
              if ( (UserId & 1) != 0 )
              {
                v73 = *(_QWORD *)(v62 + 80);
                v72 = *(_QWORD *)(v62 + 88);
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v86.fields.currentCryptoKey = v73;
                *(_QWORD *)&v86.fields.fakeValue = v72;
                v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v86, 0LL);
                System_Collections_Generic_List_int___Add(
                  v25,
                  v74,
                  (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
              }
            }
          }
        }
      }
      LODWORD(v59) = *(_DWORD *)(v60 + 24);
      if ( (__int64)++v61 >= (int)v59 )
        return v25;
    }
LABEL_88:
    sub_B17100(UserId, v57, v58);
    sub_B170A0();
  }
  return v25;
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t UserId; // x0
  int64_t v18; // x21
  int32_t Count; // w22
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x23
  int32_t v25; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x25
  __int64 v29; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v30; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x21
  void *monitor; // x26
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x27
  int32_t v34; // w0
  ServantEntity_o *Entity; // x0
  int64_t v37; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_40FF6C1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_B16FFC(&NetworkManager_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&UserServantEntity_TypeInfo, v14);
    byte_40FF6C1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_32;
  v18 = UserId;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v25,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v29 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v29
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v29 - 1] == UserServantEntity_TypeInfo )
        {
          v30 = Item[4];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v39.fields.currentCryptoKey = Item[3];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v39.fields.fakeValue = v30;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v38 = v39;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v38, 0LL) == v18
            && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v28, 0LL) )
          {
            v37 = v18;
            v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
            klass = v28[2].klass;
            monitor = v28[2].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v40.fields.currentCryptoKey = klass;
            *(_QWORD *)&v40.fields.fakeValue = monitor;
            v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v40, 0LL);
            if ( !v31 )
              break;
            MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v31;
            Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          v31,
                                          v34,
                                          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            v18 = v37;
            if ( !Entity )
              break;
            if ( ServantEntity__get_IsCombineMaterial(Entity, 0LL)
              && !UserServantEntity__IsLock((UserServantEntity_o *)v28, 0LL)
              && !UserServantEntity__IsChoice((UserServantEntity_o *)v28, 0LL) )
            {
              if ( !v24 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v24,
                v28,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            }
          }
        }
      }
      if ( ++v25 >= Count )
        goto LABEL_30;
    }
LABEL_32:
    sub_B170D4();
  }
LABEL_30:
  if ( !v24 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__GetEntities(
        UserServantMaster_o *this,
        System_Int64_array *userServantIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  System_Collections_Generic_List_long__o *v8; // x21

  if ( (byte_40FF6C6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor___66737392, userServantIds);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v7);
    byte_40FF6C6 = 1;
  }
  if ( userServantIds )
  {
    v8 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                      System_Collections_Generic_List_long__TypeInfo,
                                                      userServantIds,
                                                      method,
                                                      v3,
                                                      v4);
    System_Collections_Generic_List_long____ctor_49371452(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)userServantIds,
      (const MethodInfo_2F1593C *)Method_System_Collections_Generic_List_long___ctor___66737392);
  }
  else
  {
    v8 = 0LL;
  }
  return UserServantMaster__GetEntities_34340040(this, v8, method);
}


UserServantEntity_array *__fastcall UserServantMaster__GetEntities_34340040(
        UserServantMaster_o *this,
        System_Collections_Generic_List_long__o *userServantIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v29; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v30; // x22
  __int64 v31; // x9
  __int128 v32; // q0
  int64_t v33; // x1
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-80h]
  __int64 v41; // [xsp+48h] [xbp-58h]

  if ( (byte_40FF6C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, userServantIds);
    sub_B16FFC(&System_IDisposable_TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Contains__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v14);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v15);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_B16FFC(&UserServantEntity_TypeInfo, v17);
    byte_40FF6C7 = 1;
  }
  HIDWORD(v41) = 0;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  userServantIds,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( userServantIds && userServantIds->fields._size >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_43;
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B170D4();
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v22 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v22;
          p_offset += 4;
          if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_11;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_11:
        p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v25 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v26 = 0LL;
        v27 = &v25->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v26;
          v27 += 4;
          if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_18;
        }
        v28 = (__int64)&v25->vtable[*v27].method;
      }
      else
      {
LABEL_18:
        v28 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v29 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                                                                     Enumerator,
                                                                     *(_QWORD *)(v28 + 8));
      v30 = v29;
      if ( v29 )
      {
        v31 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v29->klass->_2.bitflags2 + 1) < (unsigned int)v31
          || (UserServantEntity_c *)v29->klass->_2.typeHierarchy[v31 - 1] != UserServantEntity_TypeInfo )
        {
          sub_B173C8(v29);
LABEL_42:
          sub_B170D4();
        }
        v32 = *(_OWORD *)&v29->fields.addCount;
        *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&v29->fields.missionTargetId;
        *(_OWORD *)&v40.fields.fakeValue = v32;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v39 = v40;
        v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v39, 0LL);
        if ( System_Collections_Generic_List_long___Contains(
               userServantIds,
               v33,
               (const MethodInfo_2F168F4 *)Method_System_Collections_Generic_List_long__Contains__) )
        {
          if ( !v18 )
            goto LABEL_42;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v18,
            v30,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
        }
      }
    }
    v41 = 0x10000005DLL;
    v34 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
      {
        ++v35;
        v36 += 4;
        if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_34;
      }
      v37 = (__int64)&v34->vtable[*v36].method;
    }
    else
    {
LABEL_34:
      v37 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
      Enumerator,
      *(_QWORD *)(v37 + 8));
    if ( (_DWORD)v41 == 93 )
      v41 = 93LL;
  }
  if ( !v18 )
LABEL_43:
    sub_B170D4();
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantMaster__GetHaveServantSkillLevelMax(
        UserServantMaster_o *this,
        int32_t svtId,
        int32_t skillIdx,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UserServantMaster___c__DisplayClass30_0_o *v16; // x19
  const MethodInfo *v17; // x1
  UserServantEntity_array *AllList; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v23; // x21
  BattleBuffData_BuffData_array *All_BattleBuffData_BuffData; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  BattleBuffData_BuffData_array *v29; // x20
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v30; // x21
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  UserServantEntity_o *v34; // x0

  if ( (byte_40FF6C2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_FindAll_UserServantEntity___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Array_Sort_UserServantEntity___, v8);
    sub_B16FFC(&Method_System_Comparison_UserServantEntity___ctor__, v9);
    sub_B16FFC(&System_Comparison_UserServantEntity__TypeInfo, v10);
    sub_B16FFC(&Method_System_Predicate_UserServantEntity___ctor__, v11);
    sub_B16FFC(&System_Predicate_UserServantEntity__TypeInfo, v12);
    sub_B16FFC(&Method_UserServantMaster___c__DisplayClass30_0__GetHaveServantSkillLevelMax_b__0__, v13);
    sub_B16FFC(&Method_UserServantMaster___c__DisplayClass30_0__GetHaveServantSkillLevelMax_b__1__, v14);
    sub_B16FFC(&UserServantMaster___c__DisplayClass30_0_TypeInfo, v15);
    byte_40FF6C2 = 1;
  }
  v16 = (UserServantMaster___c__DisplayClass30_0_o *)sub_B170CC(
                                                       UserServantMaster___c__DisplayClass30_0_TypeInfo,
                                                       *(_QWORD *)&svtId,
                                                       *(_QWORD *)&skillIdx,
                                                       method,
                                                       v4);
  UserServantMaster___c__DisplayClass30_0___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_10;
  v16->fields.svtId = svtId;
  v16->fields.skillIdx = skillIdx;
  AllList = UserServantMaster__getAllList(this, v17);
  v23 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_UserServantEntity__TypeInfo,
                                                                   v19,
                                                                   v20,
                                                                   v21,
                                                                   v22);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v23,
    (Il2CppObject *)v16,
    Method_UserServantMaster___c__DisplayClass30_0__GetHaveServantSkillLevelMax_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_UserServantEntity___ctor__);
  All_BattleBuffData_BuffData = System_Array__FindAll_BattleBuffData_BuffData_(
                                  (BattleBuffData_BuffData_array *)AllList,
                                  (System_Predicate_T__o *)v23,
                                  (const MethodInfo_2044520 *)Method_System_Array_FindAll_UserServantEntity___);
  if ( !All_BattleBuffData_BuffData )
    goto LABEL_10;
  v29 = All_BattleBuffData_BuffData;
  if ( *(_QWORD *)&All_BattleBuffData_BuffData->max_length )
  {
    v30 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                      System_Comparison_UserServantEntity__TypeInfo,
                                                                      v25,
                                                                      v26,
                                                                      v27,
                                                                      v28);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v30,
      (Il2CppObject *)v16,
      Method_UserServantMaster___c__DisplayClass30_0__GetHaveServantSkillLevelMax_b__1__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_UserServantEntity___ctor__);
    System_Array__Sort_BattleBuffData_BuffData_(
      v29,
      (System_Comparison_T__o *)v30,
      (const MethodInfo_2506BD4 *)Method_System_Array_Sort_UserServantEntity___);
    if ( !v29->max_length )
    {
      sub_B17100(v31, v32, v33);
      sub_B170A0();
    }
    v34 = (UserServantEntity_o *)v29->m_Items[0];
    if ( v34 )
      return UserServantEntity__getSkillLevel(v34, v16->fields.skillIdx, 0LL);
LABEL_10:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  const MethodInfo *v13; // x1
  UserServantEntity_array *AllList; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x8
  UserServantEntity_array *v18; // x23
  int32_t v19; // w21
  unsigned __int64 v20; // x27
  UserServantEntity_o *v21; // x8
  __int64 v22; // x24
  __int64 v23; // x25
  int32_t v24; // w0
  WarEntity_o *Entity; // x0
  WebViewManager_o *v26; // x0
  UserPresentBoxMaster_o *v27; // x0
  bool v29; // [xsp+Ch] [xbp-54h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_40FF6B8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FF6B8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  AllList = UserServantMaster__getAllList(this, v13);
  if ( !AllList )
    goto LABEL_24;
  v17 = *(_QWORD *)&AllList->max_length;
  v18 = AllList;
  v29 = isCheckPresentBox;
  if ( (int)v17 >= 1 )
  {
    v19 = 0;
    v20 = 0LL;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v17 )
      {
        sub_B17100(AllList, v15, v16);
        sub_B170A0();
      }
      v21 = v18->m_Items[v20];
      if ( v21 )
      {
        v23 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
        v22 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v30.fields.currentCryptoKey = v23;
        *(_QWORD *)&v30.fields.fakeValue = v22;
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v30, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_24;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   v24,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          goto LABEL_24;
        AllList = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                               *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&Entity->fields.name,
                                               0LL);
        if ( (_DWORD)AllList == servantId )
          ++v19;
      }
      LODWORD(v17) = v18->max_length;
      if ( (__int64)++v20 >= (int)v17 )
        goto LABEL_19;
    }
  }
  v19 = 0;
LABEL_19:
  if ( v29 )
  {
    v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( v26 )
    {
      v27 = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v26,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
      if ( v27 )
      {
        v19 += UserPresentBoxMaster__GetCount(v27, 1, servantId, 0LL);
        return v19;
      }
    }
LABEL_24:
    sub_B170D4();
  }
  return v19;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v11; // x1
  UserServantEntity_array *AllList; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x8
  UserServantEntity_array *v16; // x21
  int v17; // w25
  unsigned __int64 v18; // x26
  UserServantEntity_o *v19; // x28
  __int64 v20; // x22
  __int64 v21; // x23
  int32_t v22; // w0
  WarEntity_o *Entity; // x0
  WebViewManager_o *v24; // x0
  UserPresentBoxMaster_o *v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_40FF6B9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FF6B9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  AllList = UserServantMaster__getAllList(this, v11);
  if ( !AllList )
    goto LABEL_22;
  v15 = *(_QWORD *)&AllList->max_length;
  v16 = AllList;
  if ( (int)v15 >= 1 )
  {
    v17 = 0;
    v18 = 0LL;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v15 )
      {
        sub_B17100(AllList, v13, v14);
        sub_B170A0();
      }
      v19 = v16->m_Items[v18];
      if ( v19 )
      {
        v21 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
        v20 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v27.fields.currentCryptoKey = v21;
        *(_QWORD *)&v27.fields.fakeValue = v20;
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v27, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_22;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   v22,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          goto LABEL_22;
        AllList = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                               *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&Entity->fields.name,
                                               0LL);
        if ( (_DWORD)AllList == servantId )
          v17 += v19->fields.treasureDeviceLv1;
      }
      LODWORD(v15) = v16->max_length;
      if ( (__int64)++v18 >= (int)v15 )
        goto LABEL_19;
    }
  }
  v17 = 0;
LABEL_19:
  v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v24
    || (v25 = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)v24,
                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL )
  {
LABEL_22:
    sub_B170D4();
  }
  return UserPresentBoxMaster__GetCount(v25, 1, servantId, 0LL) + v17;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  int64_t UserId; // x23
  const MethodInfo *v22; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Collections_Generic_IEnumerable_TSource__o *AllList; // x20
  UserServantMaster___c_c *v28; // x8
  struct UserServantMaster___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__33_0; // x21
  Il2CppObject *v31; // x24
  struct UserServantMaster___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x20
  unsigned __int64 v42; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v45; // x21
  __int64 v46; // x8
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  __int64 v50; // x0
  __int64 v51; // x24
  __int128 v52; // q0
  __int64 v53; // x25
  __int64 v54; // x26
  int32_t v55; // w1
  WarEntity_o *Entity; // x0
  WarEntity_o *v57; // x25
  __int64 v58; // x24
  __int64 v59; // x26
  int32_t v60; // w0
  int v61; // w8
  __int64 v62; // x8
  unsigned __int64 v63; // x10
  int *v64; // x11
  __int64 v65; // x0
  __int64 v66; // x8
  unsigned __int64 v67; // x10
  int *v68; // x11
  __int64 v69; // x0
  int32_t v71; // [xsp+Ch] [xbp-A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+30h] [xbp-80h]
  __int64 v74; // [xsp+58h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  if ( (byte_40FF6C4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v6);
    sub_B16FFC(&Method_System_Func_UserServantEntity__bool___ctor__, v7);
    sub_B16FFC(&System_Func_UserServantEntity__bool__TypeInfo, v8);
    sub_B16FFC(&System_IDisposable_TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, v11);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__33_0__, v17);
    sub_B16FFC(&UserServantMaster___c_TypeInfo, v18);
    byte_40FF6C4 = 1;
  }
  HIDWORD(v74) = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  AllList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getAllList(this, v22);
  v28 = UserServantMaster___c_TypeInfo;
  if ( (BYTE3(UserServantMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantMaster___c_TypeInfo);
    v28 = UserServantMaster___c_TypeInfo;
  }
  static_fields = v28->static_fields;
  _9__33_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__33_0;
  if ( !_9__33_0 )
  {
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      static_fields = UserServantMaster___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)static_fields->__9;
    _9__33_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_UserServantEntity__bool__TypeInfo,
                                                                                    v23,
                                                                                    v24,
                                                                                    v25,
                                                                                    v26);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__33_0,
      v31,
      Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__33_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_UserServantEntity__bool___ctor__);
    v32 = UserServantMaster___c_TypeInfo->static_fields;
    v32->__9__33_0 = (struct System_Func_UserServantEntity__bool__o *)_9__33_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v32->__9__33_0,
      (System_Int32_array **)_9__33_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  v39 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          AllList,
          (System_Func_TSource__bool__o *)_9__33_0,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  if ( !v39 )
LABEL_68:
    sub_B170D4();
  klass = v39->klass;
  v41 = v39;
  if ( *(_WORD *)&v39->klass->_2.bitflags1 )
  {
    v42 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_UserServantEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo )
    {
      ++v42;
      p_offset += 4;
      if ( v42 >= *(unsigned __int16 *)&v39->klass->_2.bitflags1 )
        goto LABEL_20;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_20:
    p_method = sub_AAFEF8(v39, System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, 0LL);
  }
  v45 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v41,
          *(_QWORD *)(p_method + 8));
  if ( !v45 )
    sub_B170D4();
  v71 = 0;
  while ( 1 )
  {
    v62 = *(_QWORD *)v45;
    if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
    {
      v63 = 0LL;
      v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v64 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v63;
        v64 += 4;
        if ( v63 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
          goto LABEL_52;
      }
      v65 = v62 + 16LL * *v64 + 312;
    }
    else
    {
LABEL_52:
      v65 = sub_AAFEF8(v45, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v65)(v45, *(_QWORD *)(v65 + 8)) & 1) == 0 )
      break;
    v46 = *(_QWORD *)v45;
    if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
    {
      v47 = 0LL;
      v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v48 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        ++v47;
        v48 += 4;
        if ( v47 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
          goto LABEL_28;
      }
      v49 = v46 + 16LL * *v48 + 312;
    }
    else
    {
LABEL_28:
      v49 = sub_AAFEF8(v45, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL);
    }
    v50 = (*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v45, *(_QWORD *)(v49 + 8));
    v51 = v50;
    if ( v50 )
    {
      v52 = *(_OWORD *)(v50 + 64);
      *(_OWORD *)&v73.fields.currentCryptoKey = *(_OWORD *)(v50 + 48);
      *(_OWORD *)&v73.fields.fakeValue = v52;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v72 = v73;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v72, 0LL) == UserId
        && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v51, 0LL) )
      {
        v54 = *(_QWORD *)(v51 + 80);
        v53 = *(_QWORD *)(v51 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v75.fields.currentCryptoKey = v54;
        *(_QWORD *)&v75.fields.fakeValue = v53;
        v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v75, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          sub_B170D4();
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   v55,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v57 = Entity;
        if ( !Entity )
          sub_B170D4();
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
               *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&Entity->fields.name,
               0LL) == servantId )
        {
          v59 = *(_QWORD *)(v51 + 96);
          v58 = *(_QWORD *)(v51 + 104);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v76.fields.currentCryptoKey = v59;
          *(_QWORD *)&v76.fields.fakeValue = v58;
          v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v76, 0LL);
          v61 = v71;
          if ( v60 == LODWORD(v57->fields.targetId) )
            v61 = v71 + 1;
          v71 = v61;
        }
      }
    }
  }
  v74 = 0x1000000B9LL;
  v66 = *(_QWORD *)v45;
  if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
  {
    v67 = 0LL;
    v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
    {
      ++v67;
      v68 += 4;
      if ( v67 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
        goto LABEL_60;
    }
    v69 = v66 + 16LL * *v68 + 312;
  }
  else
  {
LABEL_60:
    v69 = sub_AAFEF8(v45, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v69)(v45, *(_QWORD *)(v69 + 8));
  if ( (_DWORD)v74 == 185 )
    v74 = 185LL;
  return v71;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  int64_t v14; // x21
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w22
  int32_t v18; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v21; // x25
  __int64 v22; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v23; // q0
  void *monitor; // x25
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x26
  int32_t v26; // w1
  WarEntity_o *Entity; // x0
  ServantEntity_o *v28; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_40FF6C5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&UserServantEntity_TypeInfo, v10);
    byte_40FF6C5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v14 = UserId;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    v18 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v18,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v21 = Item;
        v22 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v22
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v22 - 1] == UserServantEntity_TypeInfo )
        {
          v23 = Item[4];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v31.fields.currentCryptoKey = Item[3];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v31.fields.fakeValue = v23;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v30 = v31;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v30, 0LL) == v14
            && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v21, 0LL) )
          {
            klass = v21[5].klass;
            monitor = v21[5].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v32.fields.currentCryptoKey = klass;
            *(_QWORD *)&v32.fields.fakeValue = monitor;
            v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v32, 0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       v26,
                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              v28 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServantEquip(*(&Entity->fields.startType + 1), 0LL) )
                v17 += ServantEntity__get_IsFriendShipSvtEquip(v28, 0LL);
            }
          }
        }
      }
      if ( ++v18 >= v16 )
        return v17;
    }
LABEL_30:
    sub_B170D4();
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UserServantMaster___c__DisplayClass1_0_o *v12; // x22
  const MethodInfo *v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *List; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x21
  UserServantEntity_o *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40FF6A9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____66839432, svtEnt);
    sub_B16FFC(&Method_System_Func_UserServantEntity__bool___ctor__, v8);
    sub_B16FFC(&System_Func_UserServantEntity__bool__TypeInfo, v9);
    sub_B16FFC(&Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__, v10);
    sub_B16FFC(&UserServantMaster___c__DisplayClass1_0_TypeInfo, v11);
    byte_40FF6A9 = 1;
  }
  v12 = (UserServantMaster___c__DisplayClass1_0_o *)sub_B170CC(
                                                      UserServantMaster___c__DisplayClass1_0_TypeInfo,
                                                      svtEnt,
                                                      svtId,
                                                      method,
                                                      v4);
  UserServantMaster___c__DisplayClass1_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  v12->fields.svtId = svtId;
  List = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getList(this, v13);
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_UserServantEntity__bool__TypeInfo,
                                                                             v15,
                                                                             v16,
                                                                             v17,
                                                                             v18);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v19,
    (Il2CppObject *)v12,
    Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_UserServantEntity__bool___ctor__);
  v20 = (UserServantEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 List,
                                 (System_Func_TSource__bool__o *)v19,
                                 (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____66839432);
  *svtEnt = v20;
  sub_B16F98((BattleServantConfConponent_o *)svtEnt, (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
  return *svtEnt != 0LL;
}


// local variable allocation has failed, the output may be wrong!
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x24
  __int64 v33; // x10
  void *monitor; // x25
  EventMissionProgressRequest_Argument_ProgressData_c *v35; // x26
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UserServantStorageMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v47; // x1
  UserServantEntity_array *v48; // x0
  __int64 v49; // x1
  __int64 v50; // x8
  UserServantEntity_array *v51; // x22
  unsigned __int64 v52; // x19
  EventMissionProgressRequest_Argument_ProgressData_o *v53; // x23
  void *v54; // x24
  EventMissionProgressRequest_Argument_ProgressData_c *v55; // x25
  bool v57; // [xsp+Ch] [xbp-64h]
  BattleServantConfConponent_o *v58; // [xsp+10h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_40FF6C8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, userServantList);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantStorageMaster___, v9);
    sub_B16FFC(&DataManager_TypeInfo, v10);
    sub_B16FFC(&System_IDisposable_TypeInfo, v11);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v16);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v17);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B16FFC(&UserServantEntity_TypeInfo, v19);
    byte_40FF6C8 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  userServantList,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  isIncludeStorage,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_55;
  v57 = isIncludeStorage;
  v58 = (BattleServantConfConponent_o *)userServantList;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v24;
        p_offset += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          goto LABEL_16;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_16:
      v30 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v30 + 8));
    v32 = v31;
    if ( !v31
      || (v33 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1), *(&v31->klass->_2.bitflags2 + 1) < (unsigned int)v33)
      || (UserServantEntity_c *)v31->klass->_2.typeHierarchy[v33 - 1] != UserServantEntity_TypeInfo )
    {
      sub_B170D4();
    }
    v35 = v31[2].klass;
    monitor = v31[2].monitor;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v59.fields.currentCryptoKey = v35;
    *(_QWORD *)&v59.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v59, 0LL) == svtId )
    {
      if ( !v20 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v20,
        v32,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
    }
  }
  v36 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      v38 += 4;
      if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_31:
    v39 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  if ( v57 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UserServantStorageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      v48 = UserServantStorageMaster__getList(Master_WarQuestSelectionMaster, v47);
      if ( v48 )
      {
        v50 = *(_QWORD *)&v48->max_length;
        v51 = v48;
        if ( (int)v50 >= 1 )
        {
          v52 = 0LL;
          do
          {
            if ( v52 >= (unsigned int)v50 )
            {
              sub_B17100(v48, v49, v40);
              sub_B170A0();
            }
            v53 = (EventMissionProgressRequest_Argument_ProgressData_o *)v51->m_Items[v52];
            if ( v53 )
            {
              v55 = v53[2].klass;
              v54 = v53[2].monitor;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v60.fields.currentCryptoKey = v55;
              *(_QWORD *)&v60.fields.fakeValue = v54;
              v48 = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                 v60,
                                                 0LL);
              if ( (_DWORD)v48 == svtId )
              {
                if ( !v20 )
                  goto LABEL_55;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v20,
                  v53,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
            LODWORD(v50) = v51->max_length;
            ++v52;
          }
          while ( (__int64)v52 < (int)v50 );
        }
        goto LABEL_50;
      }
    }
LABEL_55:
    sub_B170D4();
  }
LABEL_50:
  v58->klass = (BattleServantConfConponent_c *)v20;
  sub_B16F98(v58, (System_Int32_array **)v20, v40, v41, v42, v43, v44, v45);
  if ( !v58->klass )
    goto LABEL_55;
  return SLODWORD(v58->klass->_1.namespaze) > 0;
}


void __fastcall UserServantMaster__continueDeviceUserServant(UserServantMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_long__o *v15; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  int64_t UserId; // x0
  int64_t v19; // x22
  int32_t v20; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v21; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v23; // x24
  __int64 v24; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v25; // q0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v26; // q0
  int64_t v27; // x0
  const MethodInfo *v28; // x1
  System_Int64_array *v29; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+40h] [xbp-70h]

  if ( (byte_40FF6BC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v10);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B16FFC(&UserServantEntity_TypeInfo, v13);
    sub_B16FFC(&UserServantNewManager_TypeInfo, v14);
    byte_40FF6BC = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     method,
                                                     v2,
                                                     v3,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v19 = UserId;
    v20 = 0;
    while ( 1 )
    {
      v21 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v21 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v21,
               v20,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v23 = Item;
        v24 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v24
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v24 - 1] == UserServantEntity_TypeInfo )
        {
          v25 = Item[4];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v32.fields.currentCryptoKey = Item[3];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v32.fields.fakeValue = v25;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v31 = v32;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v31, 0LL) == v19
            && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v23, 0LL) )
          {
            v26 = v23[2];
            *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v32.fields.currentCryptoKey = v23[1];
            *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v32.fields.fakeValue = v26;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v30 = v32;
            v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v30, 0LL);
            if ( !v15 )
              break;
            System_Collections_Generic_List_long___Add(
              v15,
              v27,
              (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
          }
        }
      }
      if ( ++v20 >= Count )
        goto LABEL_24;
    }
LABEL_29:
    sub_B170D4();
  }
LABEL_24:
  if ( !v15 )
    goto LABEL_29;
  v29 = System_Collections_Generic_List_long___ToArray(
          v15,
          (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  }
  UserServantNewManager__SetOld_34331876(v29, v28);
}


UserServantEntity_array *__fastcall UserServantMaster__getAllList(UserServantMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *List; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v13; // x19
  WebViewManager_o *Instance; // x0
  UserServantStorageMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v16; // x1
  System_Collections_Generic_IEnumerable_T__o *v17; // x0

  if ( (byte_40FF6BE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor___66750736, v5);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FF6BE = 1;
  }
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, method);
  v13 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                          System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                          v9,
                                                                          v10,
                                                                          v11,
                                                                          v12);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v13,
    List,
    (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_UserServantEntity___ctor___66750736);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)Instance,
                                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL
    || (v17 = (System_Collections_Generic_IEnumerable_T__o *)UserServantStorageMaster__getList(
                                                               MasterData_WarQuestSelectionMaster,
                                                               v16),
        !v13) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v13,
    v17,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x27
  int64_t UserId; // x0
  int64_t v18; // x21
  int32_t Count; // w22
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x23
  int32_t v25; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x25
  __int64 v29; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v30; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x21
  void *monitor; // x26
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x27
  int32_t v34; // w0
  ServantEntity_o *Entity; // x0
  ServantEntity_o *v36; // x26
  int64_t v38; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_40FF6BD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_B16FFC(&NetworkManager_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&UserServantEntity_TypeInfo, v14);
    byte_40FF6BD = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_31;
  v18 = UserId;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v25,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v29 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v29
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v29 - 1] == UserServantEntity_TypeInfo )
        {
          v30 = Item[4];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v40.fields.currentCryptoKey = Item[3];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v40.fields.fakeValue = v30;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v39 = v40;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v39, 0LL) == v18
            && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v28, 0LL) )
          {
            v38 = v18;
            v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
            klass = v28[2].klass;
            monitor = v28[2].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v41.fields.currentCryptoKey = klass;
            *(_QWORD *)&v41.fields.fakeValue = monitor;
            v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v41, 0LL);
            if ( !v31 )
              break;
            MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v31;
            Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          v31,
                                          v34,
                                          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            v18 = v38;
            if ( !Entity )
              break;
            v36 = Entity;
            if ( ServantEntity__get_IsKeepServant(Entity, 0LL) && !ServantEntity__get_IsServantMaterialTd(v36, 0LL) )
            {
              if ( !v24 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v24,
                v28,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            }
          }
        }
      }
      if ( ++v25 >= Count )
        goto LABEL_29;
    }
LABEL_31:
    sub_B170D4();
  }
LABEL_29:
  if ( !v24 )
    goto LABEL_31;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x19
  int64_t UserId; // x0
  int64_t v20; // x24
  int32_t Count; // w0
  int32_t v22; // w25
  int32_t v23; // w26
  int32_t v24; // w27
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v27; // x28
  __int64 v28; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v29; // q0
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x19
  void *monitor; // x28
  int32_t v32; // w1
  WarEntity_o *Entity; // x0
  int32_t v34; // w19
  ServantEntity_o *v35; // x28
  int32_t *v36; // x9
  int32_t *v38; // [xsp+10h] [xbp-A0h]
  DataMasterBase_WarMaster__WarEntity__int__o *v39; // [xsp+18h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_40FF6AA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, servantSum);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&UserServantEntity_TypeInfo, v16);
    byte_40FF6AA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
LABEL_35:
    sub_B170D4();
  v20 = UserId;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v38 = servantSum;
    v39 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    v22 = Count;
    v23 = 0;
    v24 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        goto LABEL_35;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v24,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v27 = Item;
        v28 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v28
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v28 - 1] == UserServantEntity_TypeInfo )
        {
          v29 = Item[4];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v41.fields.currentCryptoKey = Item[3];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v41.fields.fakeValue = v29;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v40 = v41;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v40, 0LL) == v20
            && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v27, 0LL) )
          {
            klass = v27[5].klass;
            monitor = v27[5].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v42.fields.currentCryptoKey = klass;
            *(_QWORD *)&v42.fields.fakeValue = monitor;
            v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v42, 0LL);
            if ( !v39 )
              goto LABEL_35;
            ++v23;
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v39,
                       v32,
                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              v34 = *(&Entity->fields.startType + 1);
              v35 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServant(v34, 0LL) )
              {
                v36 = v38;
              }
              else
              {
                if ( !SvtType__IsKeepServantEquip(v34, 0LL)
                  || friendShipSvtEqExclude && ServantEntity__get_IsFriendShipSvtEquip(v35, 0LL) )
                {
                  goto LABEL_31;
                }
                v36 = servantEquipSum;
              }
              ++*v36;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x19
  int64_t UserId; // x0
  int64_t v18; // x23
  int32_t Count; // w0
  int32_t v20; // w24
  int32_t v21; // w25
  int32_t v22; // w26
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v25; // x27
  __int64 v26; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v27; // q0
  void *monitor; // x27
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x28
  int32_t v30; // w1
  WarEntity_o *Entity; // x0
  int32_t v32; // w27
  int32_t *v33; // x9
  int32_t *v35; // [xsp+10h] [xbp-A0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_40FF6AB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, servantSum);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B16FFC(&NetworkManager_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&UserServantEntity_TypeInfo, v14);
    byte_40FF6AB = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
LABEL_33:
    sub_B170D4();
  v18 = UserId;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v35 = servantSum;
    v20 = Count;
    v21 = 0;
    v22 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        goto LABEL_33;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v22,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v25 = Item;
        v26 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v26
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v26 - 1] == UserServantEntity_TypeInfo )
        {
          v27 = Item[4];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v37.fields.currentCryptoKey = Item[3];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v37.fields.fakeValue = v27;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v36 = v37;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v36, 0LL) == v18
            && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v25, 0LL) )
          {
            klass = v25[5].klass;
            monitor = v25[5].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v38.fields.currentCryptoKey = klass;
            *(_QWORD *)&v38.fields.fakeValue = monitor;
            v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v38, 0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_33;
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       v30,
                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              v32 = *(&Entity->fields.startType + 1);
              if ( SvtType__IsOrganization(v32, 0LL) )
              {
                v33 = v35;
LABEL_28:
                ++v21;
                ++*v33;
                goto LABEL_29;
              }
              if ( SvtType__IsServantEquip(v32, 0LL) )
              {
                v33 = servantEquipSum;
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  UserServantEntity_o *v14; // x23
  __int64 v15; // x10
  void *monitor; // x24
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_40FF6BA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&heroineId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&UserServantEntity_TypeInfo, v7);
    byte_40FF6BA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      v12 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v12 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v12,
               v11,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v14 = (UserServantEntity_o *)Item;
        v15 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v15
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v15 - 1] == UserServantEntity_TypeInfo )
        {
          klass = Item[5].klass;
          monitor = Item[5].monitor;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v19.fields.currentCryptoKey = klass;
          *(_QWORD *)&v19.fields.fakeValue = monitor;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v19, 0LL) == heroineId
            && UserServantEntity__IsHeroine(v14, 0LL) )
          {
            return v14;
          }
        }
      }
      if ( ++v11 >= v10 )
        return 0LL;
    }
LABEL_18:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t UserId; // x0
  int64_t v18; // x21
  int32_t Count; // w22
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x23
  int32_t v25; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x25
  __int64 v29; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v30; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x21
  void *monitor; // x26
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x27
  int32_t v34; // w0
  ServantEntity_o *Entity; // x0
  int64_t v37; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_40FF6B4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_B16FFC(&NetworkManager_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&UserServantEntity_TypeInfo, v14);
    byte_40FF6B4 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v18 = UserId;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v25,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v29 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v29
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v29 - 1] == UserServantEntity_TypeInfo )
        {
          v30 = Item[4];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v39.fields.currentCryptoKey = Item[3];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v39.fields.fakeValue = v30;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v38 = v39;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v38, 0LL) == v18
            && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v28, 0LL) )
          {
            v37 = v18;
            v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
            klass = v28[2].klass;
            monitor = v28[2].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v40.fields.currentCryptoKey = klass;
            *(_QWORD *)&v40.fields.fakeValue = monitor;
            v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v40, 0LL);
            if ( !v31 )
              break;
            MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v31;
            Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          v31,
                                          v34,
                                          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            v18 = v37;
            if ( !Entity )
              break;
            if ( ServantEntity__get_IsKeepServantEquip(Entity, 0LL) )
            {
              if ( !v24 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v24,
                v28,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            }
          }
        }
      }
      if ( ++v25 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B170D4();
  }
LABEL_28:
  if ( !v24 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t UserId; // x0
  int64_t v18; // x21
  int32_t Count; // w22
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x23
  int32_t v25; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x25
  __int64 v29; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v30; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x21
  void *monitor; // x26
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x27
  int32_t v34; // w0
  ServantEntity_o *Entity; // x0
  int64_t v37; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_40FF6B2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_B16FFC(&NetworkManager_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&UserServantEntity_TypeInfo, v14);
    byte_40FF6B2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v18 = UserId;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v25,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v29 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v29
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v29 - 1] == UserServantEntity_TypeInfo )
        {
          v30 = Item[4];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v39.fields.currentCryptoKey = Item[3];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v39.fields.fakeValue = v30;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v38 = v39;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v38, 0LL) == v18
            && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v28, 0LL) )
          {
            v37 = v18;
            v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
            klass = v28[2].klass;
            monitor = v28[2].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v40.fields.currentCryptoKey = klass;
            *(_QWORD *)&v40.fields.fakeValue = monitor;
            v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v40, 0LL);
            if ( !v31 )
              break;
            MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v31;
            Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          v31,
                                          v34,
                                          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            v18 = v37;
            if ( !Entity )
              break;
            if ( ServantEntity__get_IsKeepServant(Entity, 0LL) )
            {
              if ( !v24 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v24,
                v28,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            }
          }
        }
      }
      if ( ++v25 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B170D4();
  }
LABEL_28:
  if ( !v24 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getList(UserServantMaster_o *this, const MethodInfo *method)
{
  int64_t UserId; // x1
  const MethodInfo *v4; // x2

  if ( (byte_40FF6AC & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40FF6AC = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  return UserServantMaster__getList_34316404(this, UserId, v4);
}


UserServantEntity_array *__fastcall UserServantMaster__getList_34316404(
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x22
  int32_t v19; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v20; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x24
  __int64 v23; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v24; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-70h]

  if ( (byte_40FF6AD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B16FFC(&UserServantEntity_TypeInfo, v11);
    byte_40FF6AD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      v20 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v20 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v20,
               v19,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v23 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v23
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v23 - 1] == UserServantEntity_TypeInfo )
        {
          v24 = Item[4];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v27.fields.currentCryptoKey = Item[3];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v27.fields.fakeValue = v24;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v26 = v27;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v26, 0LL) == userId
            && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v22, 0LL) )
          {
            if ( !v18 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v18,
              v22,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
          }
        }
      }
      if ( ++v19 >= Count )
        goto LABEL_18;
    }
LABEL_20:
    sub_B170D4();
  }
LABEL_18:
  if ( !v18 )
    goto LABEL_20;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x26
  int32_t Count; // w22
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x23
  int32_t v25; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x25
  __int64 v29; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v30; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x19
  void *monitor; // x26
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x27
  int32_t v34; // w0
  WarEntity_o *Entity; // x0
  int64_t v37; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  v3 = userId;
  if ( (byte_40FF6BB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&UserServantEntity_TypeInfo, v15);
    byte_40FF6BB = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this->fields.list )
    goto LABEL_27;
  v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v25,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v29 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v29
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v29 - 1] == UserServantEntity_TypeInfo )
        {
          v30 = Item[4];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v39.fields.currentCryptoKey = Item[3];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v39.fields.fakeValue = v30;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v38 = v39;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v38, 0LL) == v3
            && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v28, 0LL) )
          {
            v37 = v3;
            v31 = v18;
            klass = v28[2].klass;
            monitor = v28[2].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v40.fields.currentCryptoKey = klass;
            *(_QWORD *)&v40.fields.fakeValue = monitor;
            v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v40, 0LL);
            if ( !v31 )
              break;
            v18 = v31;
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v31,
                       v34,
                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            v3 = v37;
            if ( !Entity )
              break;
            if ( *(&Entity->fields.startType + 1) != 3 )
            {
              if ( !v24 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v24,
                v28,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            }
          }
        }
      }
      if ( ++v25 >= Count )
        goto LABEL_25;
    }
LABEL_27:
    sub_B170D4();
  }
LABEL_25:
  if ( !v24 )
    goto LABEL_27;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x27
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w23
  WebViewManager_o *v30; // x0
  WarQuestSelectionMaster_o *v31; // x0
  SvtMaterialTdMaster_o *v32; // x24
  __int64 v33; // x25
  __int64 v34; // x26
  int32_t v35; // w0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  int32_t v40; // w25
  __int64 v41; // x27
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v42; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x10
  System_Int32_array **v51; // x1
  EventMissionProgressRequest_Argument_ProgressData_o **v52; // x26
  UserServantEntity_o *v53; // x0
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v54; // x28
  bool exists; // w0
  EventMissionProgressRequest_Argument_ProgressData_o *v56; // x1
  void *monitor; // x27
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x28
  int32_t v59; // w1
  WarEntity_o *Entity; // x0
  int32_t v61; // w27
  DataMasterBase_WarMaster__WarEntity__int__o *v63; // [xsp+8h] [xbp-68h]
  WarBoardPieceData_array *array; // [xsp+18h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_40FF6B7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Exists_SvtMaterialTdEntity___, usrSvtEnt);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B16FFC(&Method_System_Predicate_SvtMaterialTdEntity___ctor__, v15);
    sub_B16FFC(&System_Predicate_SvtMaterialTdEntity__TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&Method_UserServantMaster___c__DisplayClass15_0__getNpUpServantList_b__0__, v18);
    sub_B16FFC(&UserServantMaster___c__DisplayClass15_0_TypeInfo, v19);
    sub_B16FFC(&UserServantEntity_TypeInfo, v20);
    byte_40FF6B7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  v23,
                                                                                                  v24,
                                                                                                  v25,
                                                                                                  v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_39;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v30 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v30 )
    goto LABEL_39;
  v31 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v30,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
  if ( !usrSvtEnt )
    goto LABEL_39;
  v32 = (SvtMaterialTdMaster_o *)v31;
  v34 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
  v33 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v65.fields.currentCryptoKey = v34;
  *(_QWORD *)&v65.fields.fakeValue = v33;
  v63 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v65, 0LL);
  if ( !v32 )
    goto LABEL_39;
  array = (WarBoardPieceData_array *)SvtMaterialTdMaster__GetEntityList(v32, v35, 0LL);
  if ( Count >= 1 )
  {
    v40 = 0;
    do
    {
      v41 = sub_B170CC(UserServantMaster___c__DisplayClass15_0_TypeInfo, v36, v37, v38, v39);
      UserServantMaster___c__DisplayClass15_0___ctor((UserServantMaster___c__DisplayClass15_0_o *)v41, 0LL);
      v42 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v42 )
        goto LABEL_39;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v42,
               v40,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v41 )
        goto LABEL_39;
      if ( Item
        && (v50 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1),
            *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v50) )
      {
        if ( (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v50 - 1] == UserServantEntity_TypeInfo )
          v51 = (System_Int32_array **)Item;
        else
          v51 = 0LL;
      }
      else
      {
        v51 = 0LL;
      }
      *(_QWORD *)(v41 + 16) = v51;
      v52 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v41 + 16);
      sub_B16F98((BattleServantConfConponent_o *)(v41 + 16), v51, v44, v45, v46, v47, v48, v49);
      v53 = *(UserServantEntity_o **)(v41 + 16);
      if ( v53 && !UserServantEntity__IsWithdrawal(v53, 0LL) )
      {
        v54 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_SvtMaterialTdEntity__TypeInfo,
                                                                         v36,
                                                                         v37,
                                                                         v38,
                                                                         v39);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v54,
          (Il2CppObject *)v41,
          Method_UserServantMaster___c__DisplayClass15_0__getNpUpServantList_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_SvtMaterialTdEntity___ctor__);
        exists = System_Array__Exists_WarBoardPieceData_(
                   array,
                   (System_Predicate_T__o *)v54,
                   (const MethodInfo_2043F80 *)Method_System_Array_Exists_SvtMaterialTdEntity___);
        v56 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v41 + 16);
        if ( exists )
        {
          if ( !v27 )
            goto LABEL_39;
LABEL_35:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v27,
            v56,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
          continue;
        }
        if ( !v56 )
          goto LABEL_39;
        klass = v56[2].klass;
        monitor = v56[2].monitor;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v66.fields.currentCryptoKey = klass;
        *(_QWORD *)&v66.fields.fakeValue = monitor;
        v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v66, 0LL);
        if ( !v63 )
          goto LABEL_39;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v63,
                   v59,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          goto LABEL_39;
        v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&Entity->fields.name,
                0LL);
        if ( v61 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(usrSvtEnt->fields.svtId, 0LL) )
        {
          if ( !v27 )
            goto LABEL_39;
          v56 = *v52;
          goto LABEL_35;
        }
      }
    }
    while ( ++v40 < Count );
  }
  if ( !v27 )
LABEL_39:
    sub_B170D4();
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t UserId; // x0
  int64_t v18; // x21
  int32_t Count; // w22
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x23
  int32_t v25; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x25
  __int64 v29; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v30; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x21
  void *monitor; // x26
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x27
  int32_t v34; // w0
  ServantEntity_o *Entity; // x0
  int64_t v37; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_40FF6B3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_B16FFC(&NetworkManager_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&UserServantEntity_TypeInfo, v14);
    byte_40FF6B3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v18 = UserId;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v25,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v29 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v29
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v29 - 1] == UserServantEntity_TypeInfo )
        {
          v30 = Item[4];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v39.fields.currentCryptoKey = Item[3];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v39.fields.fakeValue = v30;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v38 = v39;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v38, 0LL) == v18
            && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v28, 0LL) )
          {
            v37 = v18;
            v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
            klass = v28[2].klass;
            monitor = v28[2].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v40.fields.currentCryptoKey = klass;
            *(_QWORD *)&v40.fields.fakeValue = monitor;
            v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v40, 0LL);
            if ( !v31 )
              break;
            MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v31;
            Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          v31,
                                          v34,
                                          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            v18 = v37;
            if ( !Entity )
              break;
            if ( ServantEntity__get_IsOrganization(Entity, 0LL) )
            {
              if ( !v24 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v24,
                v28,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            }
          }
        }
      }
      if ( ++v25 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B170D4();
  }
LABEL_28:
  if ( !v24 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


int32_t __fastcall UserServantMaster__getSameSvtNpLvCache(
        UserServantMaster_o *this,
        UserServantEntity_o *usrSvtEnt,
        System_Collections_Generic_Dictionary_int__List_int___o **cachedUserServantNpLvDict,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v25; // x1
  System_Collections_Generic_List_int__o *v26; // x22
  System_Collections_Generic_Dictionary_int__List_int___o *v27; // x22
  __int64 v28; // x23
  __int64 v29; // x24
  int32_t v30; // w0
  int32_t v31; // w21
  WebViewManager_o *Instance; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w23
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  WebViewManager_o *v39; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v41; // x25
  __int64 v42; // x26
  SvtMaterialTdMaster_o *v43; // x24
  int32_t v44; // w0
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  int32_t i; // w25
  __int64 v50; // x27
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v51; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  __int64 v59; // x10
  System_Int32_array **v60; // x1
  UserServantEntity_o **v61; // x26
  UserServantEntity_o *v62; // x0
  UserServantEntity_o *v63; // x8
  __int128 v64; // q0
  int64_t v65; // x0
  __int128 v66; // q0
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v71; // x28
  UserServantEntity_o *v72; // x8
  __int64 v73; // x27
  __int64 v74; // x28
  int32_t v75; // w27
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v76; // x20
  __int64 v77; // x19
  __int64 v78; // x23
  int32_t v79; // w0
  WarBoardPieceData_array *array; // [xsp+0h] [xbp-E0h]
  System_Collections_Generic_Dictionary_int__List_int___o **v82; // [xsp+8h] [xbp-D8h]
  System_Collections_Generic_List_int__o *v83; // [xsp+10h] [xbp-D0h]
  UserServantEntity_o *v84; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+60h] [xbp-80h]
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16

  if ( (byte_40FF6B6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Exists_SvtMaterialTdEntity___, usrSvtEnt);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v16);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19);
    sub_B16FFC(&Method_System_Predicate_SvtMaterialTdEntity___ctor__, v20);
    sub_B16FFC(&System_Predicate_SvtMaterialTdEntity__TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B16FFC(&Method_UserServantMaster___c__DisplayClass14_0__getSameSvtNpLvCache_b__0__, v23);
    sub_B16FFC(&UserServantMaster___c__DisplayClass14_0_TypeInfo, v24);
    sub_B16FFC(&UserServantEntity_TypeInfo, v25);
    byte_40FF6B6 = 1;
  }
  v26 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    usrSvtEnt,
                                                    cachedUserServantNpLvDict,
                                                    method,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  value = (WarBoardEvalValueSquare_CalcEval_o *)v26;
  if ( !usrSvtEnt )
    goto LABEL_64;
  if ( UserServantEntity__IsEventJoin(usrSvtEnt, 0LL) )
    goto LABEL_13;
  v27 = *cachedUserServantNpLvDict;
  v29 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v89.fields.currentCryptoKey = v29;
  *(_QWORD *)&v89.fields.fakeValue = v28;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v89, 0LL);
  if ( !v27 )
    goto LABEL_64;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v27,
          v30,
          &value,
          (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
LABEL_13:
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      DataManager__GetMasterData_WarQuestSelectionMaster_(
        (DataManager_o *)Instance,
        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( list )
      {
        Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
        v83 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v35,
                                                          v36,
                                                          v37,
                                                          v38);
        System_Collections_Generic_List_int____ctor(
          v83,
          (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
        v39 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( v39 )
        {
          MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)v39,
                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
          v84 = usrSvtEnt;
          v42 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
          v41 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
          v43 = (SvtMaterialTdMaster_o *)MasterData_WarQuestSelectionMaster;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v90.fields.currentCryptoKey = v42;
          *(_QWORD *)&v90.fields.fakeValue = v41;
          v82 = cachedUserServantNpLvDict;
          v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v90, 0LL);
          if ( v43 )
          {
            array = (WarBoardPieceData_array *)SvtMaterialTdMaster__GetEntityList(v43, v44, 0LL);
            if ( Count >= 1 )
            {
              for ( i = 0; i < Count; ++i )
              {
                v50 = sub_B170CC(UserServantMaster___c__DisplayClass14_0_TypeInfo, v45, v46, v47, v48);
                UserServantMaster___c__DisplayClass14_0___ctor((UserServantMaster___c__DisplayClass14_0_o *)v50, 0LL);
                v51 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
                if ( !v51 )
                  goto LABEL_64;
                Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                         v51,
                         i,
                         (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
                if ( !v50 )
                  goto LABEL_64;
                if ( Item
                  && (v59 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1),
                      *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v59) )
                {
                  if ( (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v59 - 1] == UserServantEntity_TypeInfo )
                    v60 = (System_Int32_array **)Item;
                  else
                    v60 = 0LL;
                }
                else
                {
                  v60 = 0LL;
                }
                *(_QWORD *)(v50 + 16) = v60;
                v61 = (UserServantEntity_o **)(v50 + 16);
                sub_B16F98((BattleServantConfConponent_o *)(v50 + 16), v60, v53, v54, v55, v56, v57, v58);
                v62 = *(UserServantEntity_o **)(v50 + 16);
                if ( v62 && !UserServantEntity__IsWithdrawal(v62, 0LL) )
                {
                  if ( !*v61 )
                    goto LABEL_64;
                  if ( !UserServantEntity__IsEventJoin(*v61, 0LL) )
                  {
                    v63 = *v61;
                    if ( !*v61 )
                      goto LABEL_64;
                    v64 = *(_OWORD *)&v63->fields.id.fields.fakeValue;
                    *(_OWORD *)&v87.fields.currentCryptoKey = *(_OWORD *)&v63->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v87.fields.fakeValue = v64;
                    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                    }
                    v86 = v87;
                    v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v86, 0LL);
                    v66 = *(_OWORD *)&v84->fields.id.fields.fakeValue;
                    *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)&v84->fields.id.fields.currentCryptoKey;
                    *(_OWORD *)&v85.fields.fakeValue = v66;
                    if ( v65 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v85, 0LL)
                      && !UserServantEntity__IsMaterialTd(v84, 0LL) )
                    {
                      if ( !*v61 )
                        goto LABEL_64;
                      if ( UserServantEntity__IsMaterialTd(*v61, 0LL) )
                      {
                        v71 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                                         System_Predicate_SvtMaterialTdEntity__TypeInfo,
                                                                                         v67,
                                                                                         v68,
                                                                                         v69,
                                                                                         v70);
                        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                          v71,
                          (Il2CppObject *)v50,
                          Method_UserServantMaster___c__DisplayClass14_0__getSameSvtNpLvCache_b__0__,
                          (const MethodInfo_2B0B204 *)Method_System_Predicate_SvtMaterialTdEntity___ctor__);
                        if ( !System_Array__Exists_WarBoardPieceData_(
                                array,
                                (System_Predicate_T__o *)v71,
                                (const MethodInfo_2043F80 *)Method_System_Array_Exists_SvtMaterialTdEntity___) )
                          continue;
                      }
                      else
                      {
                        v72 = *v61;
                        if ( !*v61 )
                          goto LABEL_64;
                        v74 = *(_QWORD *)&v72->fields.svtId.fields.currentCryptoKey;
                        v73 = *(_QWORD *)&v72->fields.svtId.fields.fakeValue;
                        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        }
                        *(_QWORD *)&v91.fields.currentCryptoKey = v74;
                        *(_QWORD *)&v91.fields.fakeValue = v73;
                        v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v91, 0LL);
                        if ( v75 != CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                      v84->fields.svtId,
                                      0LL)
                          || UserServantEntity__IsEventJoin(v84, 0LL) )
                        {
                          continue;
                        }
                      }
                      if ( !*v61 || !v83 )
                        goto LABEL_64;
                      System_Collections_Generic_List_int___Add(
                        v83,
                        (*v61)->fields.treasureDeviceLv1,
                        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
                    }
                  }
                }
              }
            }
            if ( v83 )
            {
              if ( v83->fields._size < 1 )
                return 0;
              v31 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)v83, 0LL);
              if ( UserServantEntity__IsEventJoin(v84, 0LL) )
                return v31;
              v76 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)*v82;
              v78 = *(_QWORD *)&v84->fields.svtId.fields.currentCryptoKey;
              v77 = *(_QWORD *)&v84->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v92.fields.currentCryptoKey = v78;
              *(_QWORD *)&v92.fields.fakeValue = v77;
              v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v92, 0LL);
              if ( v76 )
              {
                System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
                  v76,
                  v79,
                  (WarBoardAIRoute_RouteData_o *)v83,
                  (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
                return v31;
              }
            }
          }
        }
      }
    }
LABEL_64:
    sub_B170D4();
  }
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x19
  WebViewManager_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0
  UserServantEntity_o *v35; // x0
  UserServantEntity_o *v36; // x24
  __int64 v37; // x9
  __int128 v38; // q0
  int64_t v39; // x25
  __int64 v40; // x25
  __int64 v41; // x26
  int32_t v42; // w1
  ServantEntity_o *Entity; // x0
  __int64 v44; // x25
  __int64 v45; // x26
  int32_t v46; // w1
  __int64 v47; // x24
  __int64 v48; // x25
  int32_t v49; // w0
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  unsigned __int64 v51; // x10
  int32_t *v52; // x11
  __int64 v53; // x0
  const MethodInfo *v54; // x1
  int64_t UserId; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x8
  int64_t v59; // x22
  unsigned __int64 v60; // x20
  __int64 v61; // x23
  __int128 v62; // q0
  int64_t v63; // x24
  __int64 v64; // x24
  __int64 v65; // x25
  int32_t v66; // w0
  ServantEntity_o *v67; // x0
  __int64 v68; // x24
  __int64 v69; // x25
  int32_t v70; // w1
  __int64 v71; // x23
  __int64 v72; // x24
  int32_t v73; // w0
  UserServantStorageMaster_o *v75; // [xsp+8h] [xbp-D8h]
  int32_t v76; // [xsp+14h] [xbp-CCh]
  System_Collections_Generic_List_int__o *v77; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+60h] [xbp-80h]
  __int64 v81; // [xsp+88h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16

  if ( (byte_40FF6AF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B16FFC(&System_IDisposable_TypeInfo, v6);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&UserServantEntity_TypeInfo, v17);
    byte_40FF6AF = 1;
  }
  HIDWORD(v81) = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v20 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v20 )
    goto LABEL_88;
  v75 = (UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v20,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v77 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v21,
                                                    v22,
                                                    v23,
                                                    v24);
  System_Collections_Generic_List_int____ctor(
    v77,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_88;
  v76 = 0;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
LABEL_7:
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v28;
        p_offset += 4;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          goto LABEL_19;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_19:
      v34 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v35 = (UserServantEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                   Enumerator,
                                   *(_QWORD *)(v34 + 8));
    v36 = v35;
    if ( v35 )
    {
      v37 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v35->klass->_2.bitflags2 + 1) < (unsigned int)v37
        || (UserServantEntity_c *)v35->klass->_2.typeHierarchy[v37 - 1] != UserServantEntity_TypeInfo )
      {
        sub_B173C8(v35);
        goto LABEL_87;
      }
      v38 = *(_OWORD *)&v35->fields.userId.fields.fakeValue;
      *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&v35->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v80.fields.fakeValue = v38;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v79 = v80;
      v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v79, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( v39 == NetworkManager__get_UserId(0LL) && !UserServantEntity__IsWithdrawal(v36, 0LL) )
      {
        v41 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
        v40 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v82.fields.currentCryptoKey = v41;
        *(_QWORD *)&v82.fields.fakeValue = v40;
        v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v82, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          sub_B170D4();
        Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v42,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_B170D4();
        if ( ServantEntity__get_IsOrganization(Entity, 0LL) )
        {
          v45 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
          v44 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v83.fields.currentCryptoKey = v45;
          *(_QWORD *)&v83.fields.fakeValue = v44;
          v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v83, 0LL);
          if ( !v77 )
            sub_B170D4();
          if ( !System_Collections_Generic_List_int___Contains(
                  v77,
                  v46,
                  (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            v48 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
            v47 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
            ++v76;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v84.fields.currentCryptoKey = v48;
            *(_QWORD *)&v84.fields.fakeValue = v47;
            v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v84, 0LL);
            System_Collections_Generic_List_int___Add(
              v77,
              v49,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
            goto LABEL_7;
          }
        }
      }
    }
  }
  v81 = 0x1000000B5LL;
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
    v53 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(Enumerator, *(_QWORD *)(v53 + 8));
  if ( (_DWORD)v81 == 181 )
    v81 = 181LL;
  if ( !v75 || (UserId = (int64_t)UserServantStorageMaster__getList(v75, v54)) == 0 )
LABEL_88:
    sub_B170D4();
  v58 = *(_QWORD *)(UserId + 24);
  v59 = UserId;
  if ( (int)v58 >= 1 )
  {
    v60 = 0LL;
    while ( v60 < (unsigned int)v58 )
    {
      v61 = *(_QWORD *)(v59 + 32 + 8 * v60);
      if ( v61 )
      {
        v62 = *(_OWORD *)(v61 + 64);
        *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)(v61 + 48);
        *(_OWORD *)&v80.fields.fakeValue = v62;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v78 = v80;
        v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v78, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        if ( v63 == UserId )
        {
          UserId = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v61, 0LL);
          if ( (UserId & 1) == 0 )
          {
            v65 = *(_QWORD *)(v61 + 80);
            v64 = *(_QWORD *)(v61 + 88);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v85.fields.currentCryptoKey = v65;
            *(_QWORD *)&v85.fields.fakeValue = v64;
            v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v85, 0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_88;
            v67 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       MasterData_WarQuestSelectionMaster,
                                       v66,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !v67 )
              goto LABEL_88;
            UserId = ServantEntity__get_IsOrganization(v67, 0LL);
            if ( (UserId & 1) != 0 )
            {
              v69 = *(_QWORD *)(v61 + 80);
              v68 = *(_QWORD *)(v61 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v86.fields.currentCryptoKey = v69;
              *(_QWORD *)&v86.fields.fakeValue = v68;
              v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v86, 0LL);
              if ( !v77 )
                goto LABEL_88;
              UserId = System_Collections_Generic_List_int___Contains(
                         v77,
                         v70,
                         (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( (UserId & 1) == 0 )
              {
                v72 = *(_QWORD *)(v61 + 80);
                v71 = *(_QWORD *)(v61 + 88);
                ++v76;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v87.fields.currentCryptoKey = v72;
                *(_QWORD *)&v87.fields.fakeValue = v71;
                v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v87, 0LL);
                System_Collections_Generic_List_int___Add(
                  v77,
                  v73,
                  (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
              }
            }
          }
        }
      }
      LODWORD(v58) = *(_DWORD *)(v59 + 24);
      if ( (__int64)++v60 >= (int)v58 )
        return v76;
    }
LABEL_87:
    sub_B17100(UserId, v56, v57);
    sub_B170A0();
  }
  return v76;
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t UserId; // x0
  int64_t v18; // x21
  int32_t Count; // w22
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x23
  int32_t v25; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x25
  __int64 v29; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v30; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x21
  void *monitor; // x26
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x27
  int32_t v34; // w0
  ServantEntity_o *Entity; // x0
  int64_t v37; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_40FF6B5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_B16FFC(&NetworkManager_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&UserServantEntity_TypeInfo, v14);
    byte_40FF6B5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v18 = UserId;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v25,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v29 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v29
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v29 - 1] == UserServantEntity_TypeInfo )
        {
          v30 = Item[4];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v39.fields.currentCryptoKey = Item[3];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v39.fields.fakeValue = v30;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v38 = v39;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v38, 0LL) == v18
            && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v28, 0LL) )
          {
            v37 = v18;
            v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
            klass = v28[2].klass;
            monitor = v28[2].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v40.fields.currentCryptoKey = klass;
            *(_QWORD *)&v40.fields.fakeValue = monitor;
            v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v40, 0LL);
            if ( !v31 )
              break;
            MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v31;
            Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          v31,
                                          v34,
                                          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            v18 = v37;
            if ( !Entity )
              break;
            if ( ServantEntity__get_IsServantEquip(Entity, 0LL) )
            {
              if ( !v24 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v24,
                v28,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            }
          }
        }
      }
      if ( ++v25 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B170D4();
  }
LABEL_28:
  if ( !v24 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v33; // x22
  __int64 v34; // x9
  __int128 v35; // q0
  int64_t v36; // x23
  void *monitor; // x23
  EventMissionProgressRequest_Argument_ProgressData_c *v38; // x24
  int32_t v39; // w1
  ServantEntity_o *Entity; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+30h] [xbp-80h]
  __int64 v49; // [xsp+58h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_40FF6AE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v10);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&UserServantEntity_TypeInfo, v15);
    byte_40FF6AE = 1;
  }
  HIDWORD(v49) = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___),
        v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_UserServantEntity__TypeInfo, v18, v19, v20, v21),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v46,
          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
    sub_B170D4();
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v25;
        p_offset += 4;
        if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v28 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v29 = 0LL;
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v30 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v31 = (__int64)&v28->vtable[*v30].method;
    }
    else
    {
LABEL_17:
      v31 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v32 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v31 + 8));
    v33 = v32;
    if ( v32 )
    {
      v34 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v32->klass->_2.bitflags2 + 1) < (unsigned int)v34
        || (UserServantEntity_c *)v32->klass->_2.typeHierarchy[v34 - 1] != UserServantEntity_TypeInfo )
      {
        sub_B173C8(v32);
LABEL_50:
        sub_B170D4();
      }
      v35 = *(_OWORD *)&v32[1].fields.targetId;
      *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&v32[1].monitor;
      *(_OWORD *)&v48.fields.fakeValue = v35;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v47 = v48;
      v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v47, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( v36 == NetworkManager__get_UserId(0LL) && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v33, 0LL) )
      {
        v38 = v33[2].klass;
        monitor = v33[2].monitor;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v50.fields.currentCryptoKey = v38;
        *(_QWORD *)&v50.fields.fakeValue = monitor;
        v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v50, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_50;
        Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v39,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_B170D4();
        if ( ServantEntity__get_IsServant(Entity, 0LL) )
        {
          if ( !v46 )
            sub_B170D4();
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v46,
            v33,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
        }
      }
    }
  }
  v49 = 0x10000007BLL;
  v41 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v42 = 0LL;
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      ++v42;
      v43 += 4;
      if ( v42 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_43;
    }
    v44 = (__int64)&v41->vtable[*v43].method;
  }
  else
  {
LABEL_43:
    v44 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(Enumerator, *(_QWORD *)(v44 + 8));
  if ( (_DWORD)v49 == 123 )
    v49 = 123LL;
  return (System_Collections_Generic_List_UserServantEntity__o *)v46;
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
  WebViewManager_o *Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x25
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0
  UserServantEntity_o *v35; // x0
  UserServantEntity_o *v36; // x23
  __int64 v37; // x9
  __int128 v38; // q0
  int64_t v39; // x24
  int32_t SvtClassId; // w1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x21
  __int64 v42; // x24
  __int64 v43; // x25
  int32_t v44; // w1
  ServantEntity_o *Entity; // x0
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  unsigned __int64 v47; // x10
  int32_t *v48; // x11
  __int64 v49; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_int__o *v52; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+30h] [xbp-80h]
  __int64 v55; // [xsp+58h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_40FF6B1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, classIdList);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B16FFC(&System_IDisposable_TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_B16FFC(&NetworkManager_TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&UserServantEntity_TypeInfo, v18);
    byte_40FF6B1 = 1;
  }
  HIDWORD(v55) = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___),
        v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_UserServantEntity__TypeInfo, v20, v21, v22, v23),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v24,
          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
    sub_B170D4();
  }
  v52 = classIdList;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v28;
        p_offset += 4;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          goto LABEL_17;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_17:
      v34 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v35 = (UserServantEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                   Enumerator,
                                   *(_QWORD *)(v34 + 8));
    v36 = v35;
    if ( v35 )
    {
      v37 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v35->klass->_2.bitflags2 + 1) < (unsigned int)v37
        || (UserServantEntity_c *)v35->klass->_2.typeHierarchy[v37 - 1] != UserServantEntity_TypeInfo )
      {
        sub_B173C8(v35);
LABEL_52:
        sub_B170D4();
      }
      v38 = *(_OWORD *)&v35->fields.userId.fields.fakeValue;
      *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&v35->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v54.fields.fakeValue = v38;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v53 = v54;
      v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v53, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( v39 == NetworkManager__get_UserId(0LL) && !UserServantEntity__IsWithdrawal(v36, 0LL) )
      {
        SvtClassId = UserServantEntity__getSvtClassId(v36, 0LL);
        if ( !v52 )
          goto LABEL_52;
        if ( System_Collections_Generic_List_int___Contains(
               v52,
               SvtClassId,
               (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v41 = v24;
          v43 = *(_QWORD *)&v36->fields.svtId.fields.currentCryptoKey;
          v42 = *(_QWORD *)&v36->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v56.fields.currentCryptoKey = v43;
          *(_QWORD *)&v56.fields.fakeValue = v42;
          v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v56, 0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            sub_B170D4();
          v24 = v41;
          Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        v44,
                                        (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Entity )
            sub_B170D4();
          if ( ServantEntity__get_IsServant(Entity, 0LL) )
          {
            if ( !v41 )
              sub_B170D4();
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v41,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
          }
        }
      }
    }
  }
  v55 = 0x100000089LL;
  v46 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v47 = 0LL;
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      ++v47;
      v48 += 4;
      if ( v47 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_45;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_45:
    v49 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(Enumerator, *(_QWORD *)(v49 + 8));
  if ( (_DWORD)v55 == 137 )
    v55 = 137LL;
  return (System_Collections_Generic_List_UserServantEntity__o *)v24;
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v23; // x21
  WebViewManager_o *Instance; // x0
  UserServantStorageMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v26; // x1
  System_Collections_Generic_IEnumerable_T__o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Collections_Generic_List_long__o *v32; // x20
  Il2CppObject *current; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject v36; // q0
  int64_t v37; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+40h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_40FF6BF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor___66750736, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_40FF6BF = 1;
  }
  memset(&v41, 0, sizeof(v41));
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, *(const MethodInfo **)&svtId);
  v23 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                          System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                          v19,
                                                                          v20,
                                                                          v21,
                                                                          v22);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v23,
    List,
    (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_UserServantEntity___ctor___66750736);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)Instance,
                                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL
    || (v27 = (System_Collections_Generic_IEnumerable_T__o *)UserServantStorageMaster__getList(
                                                               MasterData_WarQuestSelectionMaster,
                                                               v26),
        !v23) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v23,
    v27,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  v32 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v28,
                                                     v29,
                                                     v30,
                                                     v31);
  System_Collections_Generic_List_long____ctor(
    v32,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v23,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  v41.fields.current = (Il2CppObject *)v40.fields.fakeValue;
  *(_OWORD *)&v41.fields.list = *(_OWORD *)&v40.fields.currentCryptoKey;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v41,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
  {
    current = v41.fields.current;
    if ( !v41.fields.current )
      sub_B170D4();
    klass = v41.fields.current[5].klass;
    monitor = v41.fields.current[5].monitor;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v42.fields.currentCryptoKey = klass;
    *(_QWORD *)&v42.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v42, 0LL) == svtId
      && !UserServantEntity__IsEventJoin((UserServantEntity_o *)current, 0LL) )
    {
      v36 = current[2];
      *(Il2CppObject *)&v40.fields.currentCryptoKey = current[1];
      *(Il2CppObject *)&v40.fields.fakeValue = v36;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v39 = v40;
      v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v39, 0LL);
      if ( !v32 )
        sub_B170D4();
      System_Collections_Generic_List_long___Add(
        v32,
        v37,
        (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v41,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  return v32;
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
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v12; // x22
  int32_t v13; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v14; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v16; // x24
  __int64 v17; // x10
  void *monitor; // x25
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x26
  int v20; // w8
  int v21; // w9
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v22; // q0
  int64_t v23; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v24; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_40FF6C3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_B16FFC(&UserServantEntity_TypeInfo, v8);
    byte_40FF6C3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0LL;
    v13 = 0;
    while ( 1 )
    {
      v14 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v14 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v14,
               v13,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v16 = Item;
      v17 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v17
        || (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v17 - 1] != UserServantEntity_TypeInfo )
      {
        break;
      }
      klass = Item[5].klass;
      monitor = Item[5].monitor;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v29.fields.currentCryptoKey = klass;
      *(_QWORD *)&v29.fields.fakeValue = monitor;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v29, 0LL) == svtId
        && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v16, 0LL) )
      {
        if ( !v12 )
          goto LABEL_22;
        v20 = (int)v12[16].klass;
        v21 = (int)v16[16].klass;
        if ( v20 < v21 )
          goto LABEL_22;
        if ( v20 == v21 )
        {
          v22 = v12[2];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v28.fields.currentCryptoKey = v12[1];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v28.fields.fakeValue = v22;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v27 = v28;
          v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v27, 0LL);
          v24 = v16[2];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v26.fields.currentCryptoKey = v16[1];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v26.fields.fakeValue = v24;
          if ( v23 > CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v26, 0LL) )
LABEL_22:
            v12 = v16;
        }
      }
      if ( ++v13 >= v11 )
        return (UserServantEntity_o *)v12;
    }
LABEL_27:
    sub_B170D4();
  }
  return 0LL;
}


void __fastcall UserServantMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F79B0 & 1) == 0 )
  {
    sub_B16FFC(&UserServantMaster___c_TypeInfo, v1);
    byte_40F79B0 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(UserServantMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserServantMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
  struct UserServantEntity_o *e; // x8
  int32_t materialSvtId; // w21
  __int64 v7; // x19
  __int64 v8; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_40F79B1 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, m);
    byte_40F79B1 = 1;
  }
  if ( !m || (e = this->fields.e) == 0LL )
    sub_B170D4();
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
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v10, 0LL);
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
  struct UserServantEntity_o *e; // x8
  int32_t materialSvtId; // w21
  __int64 v7; // x19
  __int64 v8; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_40F79B2 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, m);
    byte_40F79B2 = 1;
  }
  if ( !m || (e = this->fields.e) == 0LL )
    sub_B170D4();
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
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v10, 0LL);
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
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_40F79B3 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, ent);
    byte_40F79B3 = 1;
  }
  if ( !ent )
    sub_B170D4();
  v6 = *(_QWORD *)&ent->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&ent->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return this->fields.svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v8, 0LL);
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
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_40F79B4 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, usrSvt);
    byte_40F79B4 = 1;
  }
  if ( !usrSvt )
    sub_B170D4();
  v6 = *(_QWORD *)&usrSvt->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&usrSvt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v8, 0LL) == this->fields.svtId;
}


int32_t __fastcall UserServantMaster___c__DisplayClass30_0___GetHaveServantSkillLevelMax_b__1(
        UserServantMaster___c__DisplayClass30_0_o *this,
        UserServantEntity_o *a,
        UserServantEntity_o *b,
        const MethodInfo *method)
{
  int32_t SkillLevel; // w0

  if ( !b || (SkillLevel = UserServantEntity__getSkillLevel(b, this->fields.skillIdx, 0LL), !a) )
    sub_B170D4();
  return SkillLevel - UserServantEntity__getSkillLevel(a, this->fields.skillIdx, 0LL);
}