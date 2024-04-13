void __fastcall UserServantMaster___ctor(UserServantMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE66D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__, (_DWORD)method, v2, v3);
    byte_42EE66D = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    14,
    (const MethodInfo_23FAF9C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__);
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
    sub_B5D69C(0LL, v8);
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
    sub_B5D69C(0LL, v7);
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
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  int64_t UserId; // x0
  int64_t v30; // x24
  UserServantEntity_o *v31; // x23
  int32_t v32; // w25
  __int64 v33; // x27
  __int64 v34; // x28
  int32_t v35; // w27
  __int64 v36; // x27
  __int64 v37; // x28
  int32_t v38; // w27
  UserServantEntity_o *v39; // x26
  __int64 v40; // x10
  __int128 v41; // q0
  __int64 v42; // x27
  __int64 v43; // x28
  __int64 v44; // x27
  __int64 v45; // x28
  int32_t v46; // w27
  const MethodInfo *v47; // x3
  UserServantEntity_o *v49; // [xsp+10h] [xbp-A0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_42EE685 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      svtId,
      checkStorage,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v24, v25, v26);
    byte_42EE685 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_56;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v49 = 0LL;
    v30 = UserId;
    v31 = 0LL;
    v32 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v32,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v39 = (UserServantEntity_o *)list;
      v40 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v40
        || (UserServantEntity_c *)list->klass->_2.typeHierarchy[v40 - 1] != UserServantEntity_TypeInfo )
      {
        break;
      }
      v41 = *(_OWORD *)&list[2].klass;
      *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__Fields *)&v52.fields.currentCryptoKey = list[1].fields;
      *(_OWORD *)&v52.fields.fakeValue = v41;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v51 = v52;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v51, 0LL) == v30 )
      {
        v43 = *(_QWORD *)&v39->fields.svtId.fields.currentCryptoKey;
        v42 = *(_QWORD *)&v39->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v55.fields.currentCryptoKey = v43;
        *(_QWORD *)&v55.fields.fakeValue = v42;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v55, 0LL) == svtId )
        {
          if ( UserServantEntity__IsWithdrawal(v39, 0LL) )
          {
            v49 = v39;
          }
          else if ( v31 )
          {
            v45 = *(_QWORD *)&v39->fields.limitCount.fields.currentCryptoKey;
            v44 = *(_QWORD *)&v39->fields.limitCount.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v56.fields.currentCryptoKey = v45;
            *(_QWORD *)&v56.fields.fakeValue = v44;
            v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v56, 0LL);
            if ( v46 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v31->fields.limitCount, 0LL)
              || v39->fields.lv > v31->fields.lv )
            {
              goto LABEL_43;
            }
            v34 = *(_QWORD *)&v39->fields.limitCount.fields.currentCryptoKey;
            v33 = *(_QWORD *)&v39->fields.limitCount.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v53.fields.currentCryptoKey = v34;
            *(_QWORD *)&v53.fields.fakeValue = v33;
            v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v53, 0LL);
            if ( v35 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v31->fields.limitCount, 0LL)
              && v39->fields.lv == v31->fields.lv
              && !UserServantEntity__IsCondJoin(v39, 0LL)
              && UserServantEntity__IsCondJoin(v31, 0LL) )
            {
              goto LABEL_43;
            }
            v37 = *(_QWORD *)&v39->fields.limitCount.fields.currentCryptoKey;
            v36 = *(_QWORD *)&v39->fields.limitCount.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v54.fields.currentCryptoKey = v37;
            *(_QWORD *)&v54.fields.fakeValue = v36;
            v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v54, 0LL);
            if ( v38 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v31->fields.limitCount, 0LL)
              && v39->fields.lv == v31->fields.lv
              && v39->fields.createdAt < v31->fields.createdAt )
            {
LABEL_43:
              v31 = (UserServantEntity_o *)sub_B5D694(UserServantEntity_TypeInfo);
              UserServantEntity___ctor_21827084(v31, v39, 0LL);
            }
          }
          else
          {
            v31 = v39;
          }
        }
      }
      if ( ++v32 >= Count )
        goto LABEL_48;
    }
LABEL_56:
    sub_B5D69C(list, *(_QWORD *)&svtId);
  }
  v49 = 0LL;
  v31 = 0LL;
LABEL_48:
  if ( checkStorage )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !list )
      goto LABEL_56;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                         (DataManager_o *)list,
                                                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !list )
      goto LABEL_56;
    v31 = UserServantStorageMaster__CostumeTargetEntity((UserServantStorageMaster_o *)list, svtId, v31, v47);
  }
  if ( v31 )
    return v31;
  else
    return v49;
}


System_Collections_Generic_List_int__o *__fastcall UserServantMaster__GetAllServantList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int64_t Instance; // x0
  const MethodInfo *v51; // x1
  UserServantStorageMaster_o *v52; // x19
  System_Collections_Generic_List_int__o *v53; // x20
  __int64 v54; // x1
  __int64 v55; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v58; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v61; // x3
  System_Collections_Generic_IEnumerator_T__c *v62; // x8
  unsigned __int64 v63; // x10
  int32_t *v64; // x11
  __int64 v65; // x0
  UserServantEntity_o *v66; // x0
  UserServantEntity_o *v67; // x23
  __int64 v68; // x9
  __int128 v69; // q0
  int64_t v70; // x24
  __int64 v71; // x24
  __int64 v72; // x25
  __int64 v73; // x1
  ServantEntity_o *Entity; // x0
  __int64 v75; // x1
  __int64 v76; // x24
  __int64 v77; // x25
  __int64 v78; // x0
  __int64 v79; // x23
  __int64 v80; // x24
  int32_t v81; // w0
  System_Collections_Generic_IEnumerator_T__c *v82; // x8
  unsigned __int64 v83; // x10
  int32_t *v84; // x11
  __int64 v85; // x0
  __int64 v86; // x8
  int64_t v87; // x21
  unsigned __int64 v88; // x19
  __int64 v89; // x22
  __int128 v90; // q0
  int64_t v91; // x23
  __int64 v92; // x23
  __int64 v93; // x24
  __int64 v94; // x23
  __int64 v95; // x24
  __int64 v96; // x22
  __int64 v97; // x23
  int32_t v98; // w0
  __int64 v100; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+50h] [xbp-80h]
  __int64 v105; // [xsp+78h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16

  if ( (byte_42EE675 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&NetworkManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44, v45, v46);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v47, v48, v49);
    byte_42EE675 = 1;
  }
  HIDWORD(v105) = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  v52 = (UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v53 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v53,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_89;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v54);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v58 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v58;
        p_offset += 4;
        if ( v58 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v55);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v62 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v63 = 0LL;
      v64 = &v62->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v64 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v63;
        v64 += 4;
        if ( v63 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v65 = (__int64)&v62->vtable[*v64].method;
    }
    else
    {
LABEL_18:
      v65 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v61);
    }
    v66 = (UserServantEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v65)(
                                   Enumerator,
                                   *(_QWORD *)(v65 + 8));
    v67 = v66;
    if ( v66 )
    {
      v68 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v66->klass->_2.bitflags2 + 1) < (unsigned int)v68
        || (UserServantEntity_c *)v66->klass->_2.typeHierarchy[v68 - 1] != UserServantEntity_TypeInfo )
      {
        sub_B5D990(v66);
        goto LABEL_88;
      }
      v69 = *(_OWORD *)&v66->fields.userId.fields.fakeValue;
      *(_OWORD *)&v104.fields.currentCryptoKey = *(_OWORD *)&v66->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v104.fields.fakeValue = v69;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v103 = v104;
      v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v103, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( v70 == NetworkManager__get_UserId(0LL) && !UserServantEntity__IsWithdrawal(v67, 0LL) )
      {
        v72 = *(_QWORD *)&v67->fields.svtId.fields.currentCryptoKey;
        v71 = *(_QWORD *)&v67->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v106.fields.currentCryptoKey = v72;
        *(_QWORD *)&v106.fields.fakeValue = v71;
        v73 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v106, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          sub_B5D69C(0LL, v73);
        Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v73,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_B5D69C(0LL, v75);
        if ( ServantEntity__get_IsOrganization(Entity, 0LL) )
        {
          v77 = *(_QWORD *)&v67->fields.svtId.fields.currentCryptoKey;
          v76 = *(_QWORD *)&v67->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v107.fields.currentCryptoKey = v77;
          *(_QWORD *)&v107.fields.fakeValue = v76;
          v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v107, 0LL);
          if ( !v53 )
            sub_B5D69C(v78, (unsigned int)v78);
          if ( !System_Collections_Generic_List_int___Contains(
                  v53,
                  v78,
                  (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            v80 = *(_QWORD *)&v67->fields.svtId.fields.currentCryptoKey;
            v79 = *(_QWORD *)&v67->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v108.fields.currentCryptoKey = v80;
            *(_QWORD *)&v108.fields.fakeValue = v79;
            v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v108, 0LL);
            System_Collections_Generic_List_int___Add(
              v53,
              v81,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
    }
  }
  v105 = 0x1000000AALL;
  v82 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v83 = 0LL;
    v84 = &v82->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v84 - 1) != System_IDisposable_TypeInfo )
    {
      ++v83;
      v84 += 4;
      if ( v83 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_51;
    }
    v85 = (__int64)&v82->vtable[*v84].method;
  }
  else
  {
LABEL_51:
    v85 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v61);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v85)(Enumerator, *(_QWORD *)(v85 + 8));
  if ( (_DWORD)v105 == 170 )
    v105 = 170LL;
  Instance = (int64_t)v52;
  if ( !v52 || (Instance = (int64_t)UserServantStorageMaster__getList(v52, v51)) == 0 )
LABEL_89:
    sub_B5D69C(Instance, v51);
  v86 = *(_QWORD *)(Instance + 24);
  v87 = Instance;
  if ( (int)v86 >= 1 )
  {
    v88 = 0LL;
    while ( v88 < (unsigned int)v86 )
    {
      v89 = *(_QWORD *)(v87 + 32 + 8 * v88);
      if ( v89 )
      {
        v90 = *(_OWORD *)(v89 + 64);
        *(_OWORD *)&v104.fields.currentCryptoKey = *(_OWORD *)(v89 + 48);
        *(_OWORD *)&v104.fields.fakeValue = v90;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v102 = v104;
        v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v102, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        if ( v91 == Instance )
        {
          v93 = *(_QWORD *)(v89 + 80);
          v92 = *(_QWORD *)(v89 + 88);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v109.fields.currentCryptoKey = v93;
          *(_QWORD *)&v109.fields.fakeValue = v92;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v109, 0LL);
          if ( !v53 )
            goto LABEL_89;
          Instance = System_Collections_Generic_List_int___Contains(
                       v53,
                       Instance,
                       (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Instance & 1) == 0 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v89, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v95 = *(_QWORD *)(v89 + 80);
              v94 = *(_QWORD *)(v89 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v110.fields.currentCryptoKey = v95;
              *(_QWORD *)&v110.fields.fakeValue = v94;
              v51 = (const MethodInfo *)(unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                        v110,
                                                        0LL);
              Instance = (int64_t)MasterData_WarQuestSelectionMaster;
              if ( !MasterData_WarQuestSelectionMaster )
                goto LABEL_89;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    (int32_t)v51,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              if ( !Instance )
                goto LABEL_89;
              Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                v97 = *(_QWORD *)(v89 + 80);
                v96 = *(_QWORD *)(v89 + 88);
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v111.fields.currentCryptoKey = v97;
                *(_QWORD *)&v111.fields.fakeValue = v96;
                v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v111, 0LL);
                System_Collections_Generic_List_int___Add(
                  v53,
                  v98,
                  (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
              }
            }
          }
        }
      }
      LODWORD(v86) = *(_DWORD *)(v87 + 24);
      if ( (__int64)++v88 >= (int)v86 )
        return v53;
    }
LABEL_88:
    v100 = sub_B5D6C8(Instance);
    sub_B5D668(v100, 0LL);
  }
  return v53;
}


UserServantEntity_array *__fastcall UserServantMaster__GetCombineMaterialList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int64_t Instance; // x0
  __int64 v42; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t v44; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x23
  int32_t v47; // w24
  int64_t v48; // x25
  __int64 v49; // x10
  __int128 v50; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x21
  __int64 v52; // x26
  __int64 v53; // x27
  int64_t v55; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_42EE686 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&NetworkManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v38, v39, v40);
    byte_42EE686 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_32;
  v44 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v47 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v47,
                            (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v48 = Instance;
        v49 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v49
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v49 - 8) == UserServantEntity_TypeInfo )
        {
          v50 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v57.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v56 = v57;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v56, 0LL);
          if ( Instance == v44 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v48, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v55 = v44;
              v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v53 = *(_QWORD *)(v48 + 80);
              v52 = *(_QWORD *)(v48 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v58.fields.currentCryptoKey = v53;
              *(_QWORD *)&v58.fields.fakeValue = v52;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v58, 0LL);
              if ( !v51 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v51;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v51,
                                    Instance,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v44 = v55;
              if ( !Instance )
                break;
              Instance = ServantEntity__get_IsCombineMaterial((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                Instance = UserServantEntity__IsLock((UserServantEntity_o *)v48, 0LL);
                if ( (Instance & 1) == 0 )
                {
                  Instance = UserServantEntity__IsChoice((UserServantEntity_o *)v48, 0LL);
                  if ( (Instance & 1) == 0 )
                  {
                    if ( !v46 )
                      break;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v46,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
                      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
                  }
                }
              }
            }
          }
        }
      }
      if ( ++v47 >= Count )
        goto LABEL_30;
    }
LABEL_32:
    sub_B5D69C(Instance, v42);
  }
LABEL_30:
  if ( !v46 )
    goto LABEL_32;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v46,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__GetEntities(
        UserServantMaster_o *this,
        System_Int64_array *userServantIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_Generic_List_long__o *v9; // x21

  if ( (byte_42EE68B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_long___ctor___68740392,
      (_DWORD)userServantIds,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v6, v7, v8);
    byte_42EE68B = 1;
  }
  if ( userServantIds )
  {
    v9 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_50621476(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)userServantIds,
      (const MethodInfo_3046C24 *)Method_System_Collections_Generic_List_long___ctor___68740392);
  }
  else
  {
    v9 = 0LL;
  }
  return UserServantMaster__GetEntities_35232552(this, v9, method);
}


UserServantEntity_array *__fastcall UserServantMaster__GetEntities_35232552(
        UserServantMaster_o *this,
        System_Collections_Generic_List_long__o *userServantIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v46; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v49; // x3
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  unsigned __int64 v51; // x10
  int32_t *v52; // x11
  __int64 v53; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v54; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v55; // x22
  __int64 v56; // x9
  __int128 v57; // q0
  int64_t v58; // x1
  _BOOL8 v59; // x0
  __int64 v60; // x1
  System_Collections_Generic_IEnumerator_T__c *v61; // x8
  unsigned __int64 v62; // x10
  int32_t *v63; // x11
  __int64 v64; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+20h] [xbp-80h]
  __int64 v68; // [xsp+48h] [xbp-58h]

  if ( (byte_42EE68C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)userServantIds,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Contains__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v36, v37, v38);
    byte_42EE68C = 1;
  }
  HIDWORD(v68) = 0;
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( userServantIds && userServantIds->fields._size >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_43;
    Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                   list,
                   (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_B5D69C(0LL, v42);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v46 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v46;
          p_offset += 4;
          if ( v46 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_11;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_11:
        p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v43);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v50 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v51 = 0LL;
        v52 = &v50->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v52 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          ++v51;
          v52 += 4;
          if ( v51 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_18;
        }
        v53 = (__int64)&v50->vtable[*v52].method;
      }
      else
      {
LABEL_18:
        v53 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v49);
      }
      v54 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(
                                                                     Enumerator,
                                                                     *(_QWORD *)(v53 + 8));
      v55 = v54;
      if ( v54 )
      {
        v56 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v54->klass->_2.bitflags2 + 1) < (unsigned int)v56
          || (UserServantEntity_c *)v54->klass->_2.typeHierarchy[v56 - 1] != UserServantEntity_TypeInfo )
        {
          sub_B5D990(v54);
LABEL_42:
          sub_B5D69C(v59, v60);
        }
        v57 = *(_OWORD *)&v54->fields.addCount;
        *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&v54->fields.missionTargetId;
        *(_OWORD *)&v67.fields.fakeValue = v57;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v66 = v67;
        v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v66, 0LL);
        v59 = System_Collections_Generic_List_long___Contains(
                userServantIds,
                v58,
                (const MethodInfo_3047BDC *)Method_System_Collections_Generic_List_long__Contains__);
        if ( v59 )
        {
          if ( !v39 )
            goto LABEL_42;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v39,
            v55,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
        }
      }
    }
    v68 = 0x10000005DLL;
    v61 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v62 = 0LL;
      v63 = &v61->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
      {
        ++v62;
        v63 += 4;
        if ( v62 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_34;
      }
      v64 = (__int64)&v61->vtable[*v63].method;
    }
    else
    {
LABEL_34:
      v64 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v49);
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v64)(
                                                                                         Enumerator,
                                                                                         *(_QWORD *)(v64 + 8));
    if ( (_DWORD)v68 == 93 )
      v68 = 93LL;
  }
  if ( !v39 )
LABEL_43:
    sub_B5D69C(list, v41);
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v39,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


int32_t __fastcall UserServantMaster__GetHaveServantSkillLevelMax(
        UserServantMaster_o *this,
        int32_t svtId,
        int32_t skillIdx,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  UserServantMaster___c__DisplayClass30_0_o *v31; // x19
  UserServantEntity_o *All_BattleBuffData_BuffData; // x0
  const MethodInfo *v33; // x1
  UserServantEntity_array *AllList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v35; // x21
  BattleBuffData_BuffData_array *v36; // x20
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v37; // x21
  __int64 v38; // x0
  __int64 v40; // x0

  if ( (byte_42EE687 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_FindAll_UserServantEntity___, svtId, skillIdx, method);
    sub_B5D5C4(&Method_System_Array_Sort_UserServantEntity___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Comparison_UserServantEntity___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Comparison_UserServantEntity__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Predicate_UserServantEntity___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Predicate_UserServantEntity__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_UserServantMaster___c__DisplayClass30_0__GetHaveServantSkillLevelMax_b__0__, v22, v23, v24);
    sub_B5D5C4(&Method_UserServantMaster___c__DisplayClass30_0__GetHaveServantSkillLevelMax_b__1__, v25, v26, v27);
    sub_B5D5C4(&UserServantMaster___c__DisplayClass30_0_TypeInfo, v28, v29, v30);
    byte_42EE687 = 1;
  }
  v31 = (UserServantMaster___c__DisplayClass30_0_o *)sub_B5D694(UserServantMaster___c__DisplayClass30_0_TypeInfo);
  UserServantMaster___c__DisplayClass30_0___ctor(v31, 0LL);
  if ( !v31 )
    goto LABEL_10;
  v31->fields.svtId = svtId;
  v31->fields.skillIdx = skillIdx;
  AllList = UserServantMaster__getAllList(this, v33);
  v35 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_UserServantEntity__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v35,
    (Il2CppObject *)v31,
    Method_UserServantMaster___c__DisplayClass30_0__GetHaveServantSkillLevelMax_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_UserServantEntity___ctor__);
  All_BattleBuffData_BuffData = (UserServantEntity_o *)System_Array__FindAll_BattleBuffData_BuffData_(
                                                         (BattleBuffData_BuffData_array *)AllList,
                                                         (System_Predicate_T__o *)v35,
                                                         (const MethodInfo_1FC072C *)Method_System_Array_FindAll_UserServantEntity___);
  if ( !All_BattleBuffData_BuffData )
    goto LABEL_10;
  v36 = (BattleBuffData_BuffData_array *)All_BattleBuffData_BuffData;
  if ( All_BattleBuffData_BuffData->fields.id.fields.hiddenValue )
  {
    v37 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v37,
      (Il2CppObject *)v31,
      Method_UserServantMaster___c__DisplayClass30_0__GetHaveServantSkillLevelMax_b__1__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_UserServantEntity___ctor__);
    System_Array__Sort_BattleBuffData_BuffData_(
      v36,
      (System_Comparison_T__o *)v37,
      (const MethodInfo_1AC8530 *)Method_System_Array_Sort_UserServantEntity___);
    if ( !v36->max_length )
    {
      v40 = sub_B5D6C8(v38);
      sub_B5D668(v40, 0LL);
    }
    All_BattleBuffData_BuffData = (UserServantEntity_o *)v36->m_Items[0];
    if ( All_BattleBuffData_BuffData )
      return UserServantEntity__getSkillLevel(All_BattleBuffData_BuffData, v31->fields.skillIdx, 0LL);
LABEL_10:
    sub_B5D69C(All_BattleBuffData_BuffData, v33);
  }
  return 0;
}


int32_t __fastcall UserServantMaster__GetServantHavingCount(
        UserServantMaster_o *this,
        int32_t servantId,
        bool isCheckPresentBox,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  void *Instance; // x0
  __int64 v20; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  const MethodInfo *v22; // x1
  __int64 v23; // x8
  _QWORD *v24; // x23
  int32_t v25; // w21
  unsigned __int64 v26; // x27
  __int64 v27; // x8
  __int64 v28; // x24
  __int64 v29; // x25
  __int64 v31; // x0
  bool v32; // [xsp+Ch] [xbp-54h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_42EE67D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, servantId, isCheckPresentBox, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10, v11, v12);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42EE67D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = UserServantMaster__getAllList(this, v22);
  if ( !Instance )
    goto LABEL_24;
  v23 = *((_QWORD *)Instance + 3);
  v24 = Instance;
  v32 = isCheckPresentBox;
  if ( (int)v23 >= 1 )
  {
    v25 = 0;
    v26 = 0LL;
    while ( 1 )
    {
      if ( v26 >= (unsigned int)v23 )
      {
        v31 = sub_B5D6C8(Instance);
        sub_B5D668(v31, 0LL);
      }
      v27 = v24[v26 + 4];
      if ( v27 )
      {
        v29 = *(_QWORD *)(v27 + 80);
        v28 = *(_QWORD *)(v27 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v33.fields.currentCryptoKey = v29;
        *(_QWORD *)&v33.fields.fakeValue = v28;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v33, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_24;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     (int32_t)Instance,
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_24;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                             *((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance + 2),
                             0LL);
        if ( (_DWORD)Instance == servantId )
          ++v25;
      }
      LODWORD(v23) = *((_DWORD *)v24 + 6);
      if ( (__int64)++v26 >= (int)v23 )
        goto LABEL_19;
    }
  }
  v25 = 0;
LABEL_19:
  if ( v32 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
      if ( Instance )
      {
        v25 += UserPresentBoxMaster__GetCount((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL);
        return v25;
      }
    }
LABEL_24:
    sub_B5D69C(Instance, v20);
  }
  return v25;
}


int32_t __fastcall UserServantMaster__GetServantHavingTdLvCount(
        UserServantMaster_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  void *Instance; // x0
  __int64 v19; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v21; // x1
  __int64 v22; // x8
  _QWORD *v23; // x21
  int v24; // w25
  unsigned __int64 v25; // x26
  __int64 v26; // x28
  __int64 v27; // x22
  __int64 v28; // x23
  __int64 v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_42EE67E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, servantId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42EE67E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = UserServantMaster__getAllList(this, v21);
  if ( !Instance )
    goto LABEL_22;
  v22 = *((_QWORD *)Instance + 3);
  v23 = Instance;
  if ( (int)v22 >= 1 )
  {
    v24 = 0;
    v25 = 0LL;
    while ( 1 )
    {
      if ( v25 >= (unsigned int)v22 )
      {
        v30 = sub_B5D6C8(Instance);
        sub_B5D668(v30, 0LL);
      }
      v26 = v23[v25 + 4];
      if ( v26 )
      {
        v28 = *(_QWORD *)(v26 + 80);
        v27 = *(_QWORD *)(v26 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v31.fields.currentCryptoKey = v28;
        *(_QWORD *)&v31.fields.fakeValue = v27;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v31, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_22;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     (int32_t)Instance,
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_22;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                             *((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance + 2),
                             0LL);
        if ( (_DWORD)Instance == servantId )
          v24 += *(_DWORD *)(v26 + 292);
      }
      LODWORD(v22) = *((_DWORD *)v23 + 6);
      if ( (__int64)++v25 >= (int)v22 )
        goto LABEL_19;
    }
  }
  v24 = 0;
LABEL_19:
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL )
  {
LABEL_22:
    sub_B5D69C(Instance, v19);
  }
  return UserPresentBoxMaster__GetCount((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL) + v24;
}


int32_t __fastcall UserServantMaster__GetServantHavintLimitMaxCount(
        UserServantMaster_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  DataManager_o *Instance; // x0
  __int64 v49; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  int64_t UserId; // x23
  const MethodInfo *v52; // x1
  System_Collections_Generic_IEnumerable_TSource__o *AllList; // x20
  UserServantMaster___c_c *v54; // x8
  struct UserServantMaster___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__33_0; // x21
  Il2CppObject *v57; // x24
  struct UserServantMaster___c_StaticFields *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  __int64 v65; // x3
  DataManager_c *klass; // x8
  DataManager_o *v67; // x20
  unsigned __int64 v68; // x10
  int32_t *p_offset; // x11
  __int64 v70; // x0
  __int64 v71; // x1
  __int64 v72; // x3
  __int64 v73; // x21
  __int64 v74; // x8
  unsigned __int64 v75; // x10
  int *v76; // x11
  __int64 v77; // x0
  __int64 v78; // x0
  __int64 v79; // x24
  __int128 v80; // q0
  __int64 v81; // x25
  __int64 v82; // x26
  __int64 v83; // x0
  WarEntity_o *Entity; // x0
  __int64 v85; // x1
  WarEntity_o *v86; // x25
  __int64 v87; // x24
  __int64 v88; // x26
  int32_t v89; // w0
  int v90; // w8
  __int64 v91; // x8
  unsigned __int64 v92; // x10
  int *v93; // x11
  __int64 v94; // x0
  __int64 v95; // x3
  __int64 v96; // x8
  unsigned __int64 v97; // x10
  int *v98; // x11
  __int64 v99; // x0
  int32_t v101; // [xsp+Ch] [xbp-A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+30h] [xbp-80h]
  __int64 v104; // [xsp+58h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16

  if ( (byte_42EE689 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, servantId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_UserServantEntity__bool___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_UserServantEntity__bool__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&NetworkManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40, v41);
    sub_B5D5C4(&Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__33_0__, v42, v43, v44);
    sub_B5D5C4(&UserServantMaster___c_TypeInfo, v45, v46, v47);
    byte_42EE689 = 1;
  }
  HIDWORD(v104) = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  AllList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getAllList(this, v52);
  v54 = UserServantMaster___c_TypeInfo;
  if ( (BYTE3(UserServantMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantMaster___c_TypeInfo);
    v54 = UserServantMaster___c_TypeInfo;
  }
  static_fields = v54->static_fields;
  _9__33_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__33_0;
  if ( !_9__33_0 )
  {
    if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v54);
      static_fields = UserServantMaster___c_TypeInfo->static_fields;
    }
    v57 = (Il2CppObject *)static_fields->__9;
    _9__33_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_UserServantEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__33_0,
      v57,
      Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__33_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_UserServantEntity__bool___ctor__);
    v58 = UserServantMaster___c_TypeInfo->static_fields;
    v58->__9__33_0 = (struct System_Func_UserServantEntity__bool__o *)_9__33_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v58->__9__33_0,
      (System_Int32_array **)_9__33_0,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
  }
  Instance = (DataManager_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                AllList,
                                (System_Func_TSource__bool__o *)_9__33_0,
                                (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  if ( !Instance )
LABEL_68:
    sub_B5D69C(Instance, v49);
  klass = Instance->klass;
  v67 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v68 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_UserServantEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo )
    {
      ++v68;
      p_offset += 4;
      if ( v68 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_20;
    }
    v70 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_20:
    v70 = sub_AF54C0(Instance, System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, 0LL, v65);
  }
  v73 = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v70)(v67, *(_QWORD *)(v70 + 8));
  if ( !v73 )
    sub_B5D69C(0LL, v71);
  v101 = 0;
  while ( 1 )
  {
    v91 = *(_QWORD *)v73;
    if ( *(_WORD *)(*(_QWORD *)v73 + 298LL) )
    {
      v92 = 0LL;
      v93 = (int *)(*(_QWORD *)(v91 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v93 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v92;
        v93 += 4;
        if ( v92 >= *(unsigned __int16 *)(*(_QWORD *)v73 + 298LL) )
          goto LABEL_52;
      }
      v94 = v91 + 16LL * *v93 + 312;
    }
    else
    {
LABEL_52:
      v94 = sub_AF54C0(v73, System_Collections_IEnumerator_TypeInfo, 0LL, v72);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v94)(v73, *(_QWORD *)(v94 + 8)) & 1) == 0 )
      break;
    v74 = *(_QWORD *)v73;
    if ( *(_WORD *)(*(_QWORD *)v73 + 298LL) )
    {
      v75 = 0LL;
      v76 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v76 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        ++v75;
        v76 += 4;
        if ( v75 >= *(unsigned __int16 *)(*(_QWORD *)v73 + 298LL) )
          goto LABEL_28;
      }
      v77 = v74 + 16LL * *v76 + 312;
    }
    else
    {
LABEL_28:
      v77 = sub_AF54C0(v73, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL, v95);
    }
    v78 = (*(__int64 (__fastcall **)(__int64, _QWORD))v77)(v73, *(_QWORD *)(v77 + 8));
    v79 = v78;
    if ( v78 )
    {
      v80 = *(_OWORD *)(v78 + 64);
      *(_OWORD *)&v103.fields.currentCryptoKey = *(_OWORD *)(v78 + 48);
      *(_OWORD *)&v103.fields.fakeValue = v80;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v102 = v103;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v102, 0LL) == UserId
        && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v79, 0LL) )
      {
        v82 = *(_QWORD *)(v79 + 80);
        v81 = *(_QWORD *)(v79 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v105.fields.currentCryptoKey = v82;
        *(_QWORD *)&v105.fields.fakeValue = v81;
        v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v105, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          sub_B5D69C(v83, (unsigned int)v83);
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   v83,
                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v86 = Entity;
        if ( !Entity )
          sub_B5D69C(0LL, v85);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
               *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&Entity->fields.name,
               0LL) == servantId )
        {
          v88 = *(_QWORD *)(v79 + 96);
          v87 = *(_QWORD *)(v79 + 104);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v106.fields.currentCryptoKey = v88;
          *(_QWORD *)&v106.fields.fakeValue = v87;
          v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v106, 0LL);
          v90 = v101;
          if ( v89 == LODWORD(v86->fields.targetId) )
            v90 = v101 + 1;
          v101 = v90;
        }
      }
    }
  }
  v104 = 0x1000000B9LL;
  v96 = *(_QWORD *)v73;
  if ( *(_WORD *)(*(_QWORD *)v73 + 298LL) )
  {
    v97 = 0LL;
    v98 = (int *)(*(_QWORD *)(v96 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v98 - 1) != System_IDisposable_TypeInfo )
    {
      ++v97;
      v98 += 4;
      if ( v97 >= *(unsigned __int16 *)(*(_QWORD *)v73 + 298LL) )
        goto LABEL_60;
    }
    v99 = v96 + 16LL * *v98 + 312;
  }
  else
  {
LABEL_60:
    v99 = sub_AF54C0(v73, System_IDisposable_TypeInfo, 0LL, v95);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v99)(v73, *(_QWORD *)(v99 + 8));
  if ( (_DWORD)v104 == 185 )
    v104 = 185LL;
  return v101;
}


int32_t __fastcall UserServantMaster__GetSvtEquipFriendShip(UserServantMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  DataManager_o *v32; // x21
  int32_t Count; // w0
  int32_t v34; // w23
  int32_t v35; // w22
  int32_t v36; // w24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v38; // x25
  __int64 v39; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v40; // q0
  void *monitor; // x25
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x26
  WarEntity_o *Entity; // x0
  ServantEntity_o *v44; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_42EE68A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v26, v27, v28);
    byte_42EE68A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v32 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v34 = Count;
    v35 = 0;
    v36 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
               v36,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v38 = Item;
        v39 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v39
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v39 - 1] == UserServantEntity_TypeInfo )
        {
          v40 = Item[4];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v47.fields.currentCryptoKey = Item[3];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v47.fields.fakeValue = v40;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v46 = v47;
          if ( (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v46, 0LL) == v32
            && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v38, 0LL) )
          {
            klass = v38[5].klass;
            monitor = v38[5].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v48.fields.currentCryptoKey = klass;
            *(_QWORD *)&v48.fields.fakeValue = monitor;
            v30 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v48, 0LL);
            Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster;
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       v30,
                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              v44 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServantEquip(*(&Entity->fields.startType + 1), 0LL) )
                v35 += ServantEntity__get_IsFriendShipSvtEquip(v44, 0LL);
            }
          }
        }
      }
      if ( ++v36 >= v34 )
        return v35;
    }
LABEL_30:
    sub_B5D69C(Instance, v30);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UserServantMaster___c__DisplayClass1_0_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo *v21; // x1
  System_Collections_Generic_IEnumerable_TSource__o *List; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v23; // x21
  UserServantEntity_o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_42EE66E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____68845872,
      (_DWORD)svtEnt,
      svtId,
      method);
    sub_B5D5C4(&Method_System_Func_UserServantEntity__bool___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Func_UserServantEntity__bool__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__, v13, v14, v15);
    sub_B5D5C4(&UserServantMaster___c__DisplayClass1_0_TypeInfo, v16, v17, v18);
    byte_42EE66E = 1;
  }
  v19 = (UserServantMaster___c__DisplayClass1_0_o *)sub_B5D694(UserServantMaster___c__DisplayClass1_0_TypeInfo);
  UserServantMaster___c__DisplayClass1_0___ctor(v19, 0LL);
  if ( !v19 )
    sub_B5D69C(v20, v21);
  v19->fields.svtId = svtId;
  List = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getList(this, v21);
  v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v23,
    (Il2CppObject *)v19,
    Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_UserServantEntity__bool___ctor__);
  v24 = (UserServantEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 List,
                                 (System_Func_TSource__bool__o *)v23,
                                 (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____68845872);
  *svtEnt = v24;
  sub_B5D560((BattleServantConfConponent_o *)svtEnt, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x21
  const MethodInfo *v43; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v45; // x1
  __int64 v46; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v52; // x3
  System_Collections_Generic_IEnumerator_T__c *v53; // x8
  unsigned __int64 v54; // x10
  int32_t *v55; // x11
  __int64 v56; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v57; // x0
  __int64 v58; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v59; // x24
  __int64 v60; // x10
  void *monitor; // x25
  EventMissionProgressRequest_Argument_ProgressData_c *v62; // x26
  __int64 v63; // x0
  __int64 v64; // x1
  System_Collections_Generic_IEnumerator_T__c *v65; // x8
  unsigned __int64 v66; // x10
  int32_t *v67; // x11
  __int64 v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  Il2CppObject *syncRoot; // x8
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v76; // x22
  unsigned __int64 v77; // x19
  EventMissionProgressRequest_Argument_ProgressData_o *v78; // x23
  void *v79; // x24
  EventMissionProgressRequest_Argument_ProgressData_c *v80; // x25
  __int64 v82; // x0
  bool v83; // [xsp+Ch] [xbp-64h]
  BattleServantConfConponent_o *v84; // [xsp+10h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16

  if ( (byte_42EE68D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)userServantList,
      svtId,
      isIncludeStorage);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantStorageMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v39, v40, v41);
    byte_42EE68D = 1;
  }
  v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v42,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_55;
  v83 = isIncludeStorage;
  v84 = (BattleServantConfConponent_o *)userServantList;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v45);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v49 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v49;
        p_offset += 4;
        if ( v49 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v46);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v53 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v54 = 0LL;
      v55 = &v53->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v55 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v54;
        v55 += 4;
        if ( v54 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v56 = (__int64)&v53->vtable[*v55].method;
    }
    else
    {
LABEL_16:
      v56 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v52);
    }
    v57 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v56)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v56 + 8));
    v59 = v57;
    if ( !v57
      || (v60 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1), *(&v57->klass->_2.bitflags2 + 1) < (unsigned int)v60)
      || (UserServantEntity_c *)v57->klass->_2.typeHierarchy[v60 - 1] != UserServantEntity_TypeInfo )
    {
      sub_B5D69C(v57, v58);
    }
    v62 = v57[2].klass;
    monitor = v57[2].monitor;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v85.fields.currentCryptoKey = v62;
    *(_QWORD *)&v85.fields.fakeValue = monitor;
    v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v85, 0LL);
    if ( (_DWORD)v63 == svtId )
    {
      if ( !v42 )
        sub_B5D69C(v63, v64);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v42,
        v59,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
    }
  }
  v65 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v66 = 0LL;
    v67 = &v65->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
    {
      ++v66;
      v67 += 4;
      if ( v66 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v68 = (__int64)&v65->vtable[*v67].method;
  }
  else
  {
LABEL_31:
    v68 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v52);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v68)(Enumerator, *(_QWORD *)(v68 + 8));
  if ( v83 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantStorageMaster___);
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)UserServantStorageMaster__getList(
                                                                                           (UserServantStorageMaster_o *)list,
                                                                                           v43);
      if ( list )
      {
        syncRoot = list->fields._syncRoot;
        v76 = list;
        if ( (int)syncRoot >= 1 )
        {
          v77 = 0LL;
          do
          {
            if ( v77 >= (unsigned int)syncRoot )
            {
              v82 = sub_B5D6C8(list);
              sub_B5D668(v82, 0LL);
            }
            v78 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)&v76[1].klass + v77);
            if ( v78 )
            {
              v80 = v78[2].klass;
              v79 = v78[2].monitor;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v86.fields.currentCryptoKey = v80;
              *(_QWORD *)&v86.fields.fakeValue = v79;
              list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                                                   v86,
                                                                                                   0LL);
              if ( (_DWORD)list == svtId )
              {
                if ( !v42 )
                  goto LABEL_55;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v42,
                  v78,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
            LODWORD(syncRoot) = v76->fields._syncRoot;
            ++v77;
          }
          while ( (__int64)v77 < (int)syncRoot );
        }
        goto LABEL_50;
      }
    }
LABEL_55:
    sub_B5D69C(list, v43);
  }
LABEL_50:
  v84->klass = (BattleServantConfConponent_c *)v42;
  sub_B5D560(v84, (System_Int32_array **)v42, v69, v70, v71, v72, v73, v74);
  if ( !v84->klass )
    goto LABEL_55;
  return SLODWORD(v84->klass->_1.namespaze) > 0;
}


bool __fastcall UserServantMaster__TryGetEntitySvtStorageListBySvtId(
        UserServantMaster_o *this,
        System_Collections_Generic_List_UserServantEntity__o **userStorageServantList,
        int32_t svtId,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  UserServantStorageMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct System_String_o *MasterName_k__BackingField; // x8
  UserServantStorageMaster_o *v34; // x22
  unsigned __int64 v35; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v36; // x23
  void *monitor; // x24
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x25
  __int64 v40; // x0
  BattleServantConfConponent_o *v41; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_42EE68E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantStorageMaster___, (_DWORD)userStorageServantList, svtId, method);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22, v23);
    byte_42EE68E = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantStorageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantStorageMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  v41 = (BattleServantConfConponent_o *)userStorageServantList;
  Master_WarQuestSelectionMaster = (UserServantStorageMaster_o *)UserServantStorageMaster__getList(
                                                                   Master_WarQuestSelectionMaster,
                                                                   v26);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  MasterName_k__BackingField = Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
  v34 = Master_WarQuestSelectionMaster;
  if ( (int)MasterName_k__BackingField >= 1 )
  {
    v35 = 0LL;
    do
    {
      if ( v35 >= (unsigned int)MasterName_k__BackingField )
      {
        v40 = sub_B5D6C8(Master_WarQuestSelectionMaster);
        sub_B5D668(v40, 0LL);
      }
      v36 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)&v34->fields.list + v35);
      if ( v36 )
      {
        klass = v36[2].klass;
        monitor = v36[2].monitor;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v42.fields.currentCryptoKey = klass;
        *(_QWORD *)&v42.fields.fakeValue = monitor;
        Master_WarQuestSelectionMaster = (UserServantStorageMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                         v42,
                                                                         0LL);
        if ( (_DWORD)Master_WarQuestSelectionMaster == svtId )
        {
          if ( !v24 )
            goto LABEL_22;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v24,
            v36,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
        }
      }
      LODWORD(MasterName_k__BackingField) = v34->fields._MasterName_k__BackingField;
      ++v35;
    }
    while ( (__int64)v35 < (int)MasterName_k__BackingField );
  }
  v41->klass = (BattleServantConfConponent_c *)v24;
  sub_B5D560(v41, (System_Int32_array **)v24, v27, v28, v29, v30, v31, v32);
  if ( !v41->klass )
LABEL_22:
    sub_B5D69C(Master_WarQuestSelectionMaster, v26);
  return SLODWORD(v41->klass->_1.namespaze) > 0;
}


void __fastcall UserServantMaster__continueDeviceUserServant(UserServantMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  System_Collections_Generic_List_long__o *v32; // x20
  __int64 v33; // x1
  int64_t list; // x0
  int32_t Count; // w21
  int64_t v36; // x22
  int32_t v37; // w23
  int64_t v38; // x24
  __int64 v39; // x10
  __int128 v40; // q0
  __int128 v41; // q0
  const MethodInfo *v42; // x1
  System_Int64_array *v43; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+40h] [xbp-70h]

  if ( (byte_42EE681 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&NetworkManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&UserServantNewManager_TypeInfo, v29, v30, v31);
    byte_42EE681 = 1;
  }
  v32 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v32,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v36 = list;
    v37 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v37,
                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v38 = list;
        v39 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v39
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v39 - 8) == UserServantEntity_TypeInfo )
        {
          v40 = *(_OWORD *)(list + 64);
          *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)(list + 48);
          *(_OWORD *)&v46.fields.fakeValue = v40;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v45 = v46;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v45, 0LL);
          if ( list == v36 )
          {
            list = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v38, 0LL);
            if ( (list & 1) == 0 )
            {
              v41 = *(_OWORD *)(v38 + 32);
              *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)(v38 + 16);
              *(_OWORD *)&v46.fields.fakeValue = v41;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v44 = v46;
              list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v44, 0LL);
              if ( !v32 )
                break;
              System_Collections_Generic_List_long___Add(
                v32,
                list,
                (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
            }
          }
        }
      }
      if ( ++v37 >= Count )
        goto LABEL_24;
    }
LABEL_29:
    sub_B5D69C(list, v33);
  }
LABEL_24:
  if ( !v32 )
    goto LABEL_29;
  v43 = System_Collections_Generic_List_long___ToArray(
          v32,
          (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  }
  UserServantNewManager__SetOld_35224388(v43, v42);
}


UserServantEntity_array *__fastcall UserServantMaster__getAllList(UserServantMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_IEnumerable_T__o *List; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v21; // x19
  DataManager_o *Instance; // x0
  const MethodInfo *v23; // x1

  if ( (byte_42EE683 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor___68753944, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    byte_42EE683 = 1;
  }
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, method);
  v21 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v21,
    List,
    (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___68753944);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL
    || (Instance = (DataManager_o *)UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, v23), !v21) )
  {
    sub_B5D69C(Instance, v23);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v21,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v21,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getCombineMaterialList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int64_t Instance; // x0
  __int64 v42; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x27
  int64_t v44; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x23
  int32_t v47; // w24
  int64_t v48; // x25
  __int64 v49; // x10
  __int128 v50; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x21
  __int64 v52; // x26
  __int64 v53; // x27
  ServantEntity_o *v54; // x26
  int64_t v56; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_42EE682 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&NetworkManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v38, v39, v40);
    byte_42EE682 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_31;
  v44 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v47 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v47,
                            (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v48 = Instance;
        v49 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v49
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v49 - 8) == UserServantEntity_TypeInfo )
        {
          v50 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v58.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v57 = v58;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v57, 0LL);
          if ( Instance == v44 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v48, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v56 = v44;
              v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v53 = *(_QWORD *)(v48 + 80);
              v52 = *(_QWORD *)(v48 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v59.fields.currentCryptoKey = v53;
              *(_QWORD *)&v59.fields.fakeValue = v52;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v59, 0LL);
              if ( !v51 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v51;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v51,
                                    Instance,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v44 = v56;
              if ( !Instance )
                break;
              v54 = (ServantEntity_o *)Instance;
              Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                Instance = ServantEntity__get_IsServantMaterialTd(v54, 0LL);
                if ( (Instance & 1) == 0 )
                {
                  if ( !v46 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v46,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
                }
              }
            }
          }
        }
      }
      if ( ++v47 >= Count )
        goto LABEL_29;
    }
LABEL_31:
    sub_B5D69C(Instance, v42);
  }
LABEL_29:
  if ( !v46 )
    goto LABEL_31;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v46,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantMaster__getCount(
        UserServantMaster_o *this,
        int32_t *servantSum,
        int32_t *servantEquipSum,
        bool friendShipSvtEqExclude,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  DataManager_o *Instance; // x0
  __int64 v34; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x19
  DataManager_o *v36; // x24
  int32_t Count; // w0
  int32_t v38; // w25
  int32_t v39; // w26
  int32_t v40; // w27
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v42; // x28
  __int64 v43; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v44; // q0
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x19
  void *monitor; // x28
  WarEntity_o *Entity; // x0
  int32_t v48; // w19
  ServantEntity_o *v49; // x28
  int32_t *v50; // x9
  int32_t *v52; // [xsp+10h] [xbp-A0h]
  DataMasterBase_WarMaster__WarEntity__int__o *v53; // [xsp+18h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_42EE66F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)servantSum,
      (_DWORD)servantEquipSum,
      friendShipSvtEqExclude);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28, v29);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v30, v31, v32);
    byte_42EE66F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
LABEL_35:
    sub_B5D69C(Instance, v34);
  v36 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v52 = servantSum;
    v53 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    v38 = Count;
    v39 = 0;
    v40 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_35;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
               v40,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v42 = Item;
        v43 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v43
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v43 - 1] == UserServantEntity_TypeInfo )
        {
          v44 = Item[4];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v55.fields.currentCryptoKey = Item[3];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v55.fields.fakeValue = v44;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v54 = v55;
          if ( (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v54, 0LL) == v36
            && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v42, 0LL) )
          {
            klass = v42[5].klass;
            monitor = v42[5].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v56.fields.currentCryptoKey = klass;
            *(_QWORD *)&v56.fields.fakeValue = monitor;
            v34 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v56, 0LL);
            Instance = (DataManager_o *)v53;
            if ( !v53 )
              goto LABEL_35;
            ++v39;
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v53,
                       v34,
                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              v48 = *(&Entity->fields.startType + 1);
              v49 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServant(v48, 0LL) )
              {
                v50 = v52;
              }
              else
              {
                if ( !SvtType__IsKeepServantEquip(v48, 0LL)
                  || friendShipSvtEqExclude && ServantEntity__get_IsFriendShipSvtEquip(v49, 0LL) )
                {
                  goto LABEL_31;
                }
                v50 = servantEquipSum;
              }
              ++*v50;
            }
          }
        }
      }
LABEL_31:
      if ( ++v40 >= v38 )
        return v39;
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  DataManager_o *Instance; // x0
  __int64 v32; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x19
  DataManager_o *v34; // x23
  int32_t Count; // w0
  int32_t v36; // w24
  int32_t v37; // w25
  int32_t v38; // w26
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v40; // x27
  __int64 v41; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_o v42; // q0
  void *monitor; // x27
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x28
  WarEntity_o *Entity; // x0
  int32_t v46; // w27
  int32_t *v47; // x9
  int32_t *v49; // [xsp+10h] [xbp-A0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_42EE670 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)servantSum,
      (_DWORD)servantEquipSum,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14, v15);
    sub_B5D5C4(&NetworkManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26, v27);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v28, v29, v30);
    byte_42EE670 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
LABEL_33:
    sub_B5D69C(Instance, v32);
  v34 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v49 = servantSum;
    v36 = Count;
    v37 = 0;
    v38 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_33;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
               v38,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v40 = Item;
        v41 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v41
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v41 - 1] == UserServantEntity_TypeInfo )
        {
          v42 = Item[4];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v51.fields.currentCryptoKey = Item[3];
          *(System_Net_NetworkInformation_UnicastIPAddressInformation_o *)&v51.fields.fakeValue = v42;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v50 = v51;
          if ( (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v50, 0LL) == v34
            && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v40, 0LL) )
          {
            klass = v40[5].klass;
            monitor = v40[5].monitor;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v52.fields.currentCryptoKey = klass;
            *(_QWORD *)&v52.fields.fakeValue = monitor;
            v32 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v52, 0LL);
            Instance = (DataManager_o *)MasterData_WarQuestSelectionMaster;
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_33;
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       v32,
                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              v46 = *(&Entity->fields.startType + 1);
              if ( SvtType__IsOrganization(v46, 0LL) )
              {
                v47 = v49;
LABEL_28:
                ++v37;
                ++*v47;
                goto LABEL_29;
              }
              if ( SvtType__IsServantEquip(v46, 0LL) )
              {
                v47 = servantEquipSum;
                goto LABEL_28;
              }
            }
          }
        }
      }
LABEL_29:
      if ( ++v38 >= v36 )
        return v37;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v17; // w21
  int32_t v18; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  UserServantEntity_o *v20; // x23
  __int64 v21; // x10
  void *monitor; // x24
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_42EE67F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      heroineId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v12, v13, v14);
    byte_42EE67F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v17 = Count;
    v18 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v18,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v20 = (UserServantEntity_o *)Item;
        v21 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v21
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[v21 - 1] == UserServantEntity_TypeInfo )
        {
          klass = Item[5].klass;
          monitor = Item[5].monitor;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v25.fields.currentCryptoKey = klass;
          *(_QWORD *)&v25.fields.fakeValue = monitor;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v25, 0LL) == heroineId
            && UserServantEntity__IsHeroine(v20, 0LL) )
          {
            return v20;
          }
        }
      }
      if ( ++v18 >= v17 )
        return 0LL;
    }
LABEL_18:
    sub_B5D69C(list, *(_QWORD *)&heroineId);
  }
  return 0LL;
}


UserServantEntity_array *__fastcall UserServantMaster__getKeepServantEquipList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int64_t Instance; // x0
  __int64 v42; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t v44; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x23
  int32_t v47; // w24
  int64_t v48; // x25
  __int64 v49; // x10
  __int128 v50; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x21
  __int64 v52; // x26
  __int64 v53; // x27
  int64_t v55; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_42EE679 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&NetworkManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v38, v39, v40);
    byte_42EE679 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v44 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v47 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v47,
                            (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v48 = Instance;
        v49 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v49
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v49 - 8) == UserServantEntity_TypeInfo )
        {
          v50 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v57.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v56 = v57;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v56, 0LL);
          if ( Instance == v44 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v48, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v55 = v44;
              v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v53 = *(_QWORD *)(v48 + 80);
              v52 = *(_QWORD *)(v48 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v58.fields.currentCryptoKey = v53;
              *(_QWORD *)&v58.fields.fakeValue = v52;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v58, 0LL);
              if ( !v51 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v51;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v51,
                                    Instance,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v44 = v55;
              if ( !Instance )
                break;
              Instance = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( !v46 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v46,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v47 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B5D69C(Instance, v42);
  }
LABEL_28:
  if ( !v46 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v46,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getKeepServantList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int64_t Instance; // x0
  __int64 v42; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t v44; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x23
  int32_t v47; // w24
  int64_t v48; // x25
  __int64 v49; // x10
  __int128 v50; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x21
  __int64 v52; // x26
  __int64 v53; // x27
  int64_t v55; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_42EE677 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&NetworkManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v38, v39, v40);
    byte_42EE677 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v44 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v47 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v47,
                            (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v48 = Instance;
        v49 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v49
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v49 - 8) == UserServantEntity_TypeInfo )
        {
          v50 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v57.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v56 = v57;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v56, 0LL);
          if ( Instance == v44 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v48, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v55 = v44;
              v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v53 = *(_QWORD *)(v48 + 80);
              v52 = *(_QWORD *)(v48 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v58.fields.currentCryptoKey = v53;
              *(_QWORD *)&v58.fields.fakeValue = v52;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v58, 0LL);
              if ( !v51 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v51;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v51,
                                    Instance,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v44 = v55;
              if ( !Instance )
                break;
              Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( !v46 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v46,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v47 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B5D69C(Instance, v42);
  }
LABEL_28:
  if ( !v46 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v46,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getList(UserServantMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int64_t UserId; // x1
  const MethodInfo *v6; // x2

  if ( (byte_42EE671 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE671 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  return UserServantMaster__getList_35208916(this, UserId, v6);
}


UserServantEntity_array *__fastcall UserServantMaster__getList_35208916(
        UserServantMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int64_t list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x22
  int32_t v30; // w23
  UserServantEntity_o *v31; // x24
  __int64 v32; // x10
  __int128 v33; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+20h] [xbp-70h]

  if ( (byte_42EE672 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      userId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v24, v25, v26);
    byte_42EE672 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v30,
                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v31 = (UserServantEntity_o *)list;
        v32 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v32
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v32 - 8) == UserServantEntity_TypeInfo )
        {
          v33 = *(_OWORD *)(list + 64);
          *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)(list + 48);
          *(_OWORD *)&v36.fields.fakeValue = v33;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v35 = v36;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v35, 0LL);
          if ( list == userId )
          {
            list = UserServantEntity__IsWithdrawal(v31, 0LL);
            if ( (list & 1) == 0 )
            {
              if ( !v29 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v29,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            }
          }
        }
      }
      if ( ++v30 >= Count )
        goto LABEL_18;
    }
LABEL_20:
    sub_B5D69C(list, userId);
  }
LABEL_18:
  if ( !v29 )
    goto LABEL_20;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v29,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getNoneCombineSvt(
        UserServantMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int64_t v4; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int64_t Instance; // x0
  __int64 v40; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v41; // x26
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // x23
  int32_t v44; // w24
  int64_t v45; // x25
  __int64 v46; // x10
  __int128 v47; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v48; // x19
  __int64 v49; // x26
  __int64 v50; // x27
  int64_t v52; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  v4 = userId;
  if ( (byte_42EE680 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      userId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v36, v37, v38);
    byte_42EE680 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this->fields.list )
    goto LABEL_27;
  v41 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v43 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v43,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v44 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v44,
                            (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v45 = Instance;
        v46 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v46
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v46 - 8) == UserServantEntity_TypeInfo )
        {
          v47 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v54.fields.fakeValue = v47;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v53 = v54;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v53, 0LL);
          if ( Instance == v4 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v45, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v52 = v4;
              v48 = v41;
              v50 = *(_QWORD *)(v45 + 80);
              v49 = *(_QWORD *)(v45 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v55.fields.currentCryptoKey = v50;
              *(_QWORD *)&v55.fields.fakeValue = v49;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v55, 0LL);
              if ( !v48 )
                break;
              v41 = v48;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v48,
                                    Instance,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v4 = v52;
              if ( !Instance )
                break;
              if ( *(_DWORD *)(Instance + 84) != 3 )
              {
                if ( !v43 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v43,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v45,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v44 >= Count )
        goto LABEL_25;
    }
LABEL_27:
    sub_B5D69C(Instance, v40);
  }
LABEL_25:
  if ( !v43 )
    goto LABEL_27;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v43,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getNpUpServantList(
        UserServantMaster_o *this,
        UserServantEntity_o *usrSvtEnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  void *Instance; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v55; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v57; // x22
  int32_t Count; // w23
  SvtMaterialTdMaster_o *v59; // x24
  __int64 v60; // x25
  __int64 v61; // x26
  int32_t v62; // w25
  __int64 v63; // x27
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  __int64 v70; // x10
  System_Int32_array **v71; // x1
  EventMissionProgressRequest_Argument_ProgressData_o **v72; // x26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v73; // x28
  void *monitor; // x27
  EventMissionProgressRequest_Argument_ProgressData_c *klass; // x28
  int32_t v76; // w27
  DataMasterBase_WarMaster__WarEntity__int__o *v78; // [xsp+8h] [xbp-68h]
  WarBoardPieceData_array *array; // [xsp+18h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16

  if ( (byte_42EE67C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Exists_SvtMaterialTdEntity___, (_DWORD)usrSvtEnt, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_System_Predicate_SvtMaterialTdEntity___ctor__, v36, v37, v38);
    sub_B5D5C4(&System_Predicate_SvtMaterialTdEntity__TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42, v43, v44);
    sub_B5D5C4(&Method_UserServantMaster___c__DisplayClass15_0__getNpUpServantList_b__0__, v45, v46, v47);
    sub_B5D5C4(&UserServantMaster___c__DisplayClass15_0_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v51, v52, v53);
    byte_42EE67C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v57 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v57,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_39;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
  if ( !usrSvtEnt )
    goto LABEL_39;
  v59 = (SvtMaterialTdMaster_o *)Instance;
  v61 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
  v60 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v80.fields.currentCryptoKey = v61;
  *(_QWORD *)&v80.fields.fakeValue = v60;
  v78 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v80, 0LL);
  if ( !v59 )
    goto LABEL_39;
  Instance = SvtMaterialTdMaster__GetEntityList(v59, (int32_t)Instance, 0LL);
  array = (WarBoardPieceData_array *)Instance;
  if ( Count >= 1 )
  {
    v62 = 0;
    do
    {
      v63 = sub_B5D694(UserServantMaster___c__DisplayClass15_0_TypeInfo);
      UserServantMaster___c__DisplayClass15_0___ctor((UserServantMaster___c__DisplayClass15_0_o *)v63, 0LL);
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_39;
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   v62,
                   (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v63 )
        goto LABEL_39;
      if ( Instance
        && (v70 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1),
            *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v70) )
      {
        if ( *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v70 - 8) == UserServantEntity_TypeInfo )
          v71 = (System_Int32_array **)Instance;
        else
          v71 = 0LL;
      }
      else
      {
        v71 = 0LL;
      }
      *(_QWORD *)(v63 + 16) = v71;
      v72 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v63 + 16);
      sub_B5D560((BattleServantConfConponent_o *)(v63 + 16), v71, v64, v65, v66, v67, v68, v69);
      Instance = *(void **)(v63 + 16);
      if ( Instance )
      {
        Instance = (void *)UserServantEntity__IsWithdrawal((UserServantEntity_o *)Instance, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          v73 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_SvtMaterialTdEntity__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v73,
            (Il2CppObject *)v63,
            Method_UserServantMaster___c__DisplayClass15_0__getNpUpServantList_b__0__,
            (const MethodInfo_2B9320C *)Method_System_Predicate_SvtMaterialTdEntity___ctor__);
          Instance = (void *)System_Array__Exists_WarBoardPieceData_(
                               array,
                               (System_Predicate_T__o *)v73,
                               (const MethodInfo_1FC018C *)Method_System_Array_Exists_SvtMaterialTdEntity___);
          v55 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(v63 + 16);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v57 )
              goto LABEL_39;
LABEL_35:
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v57,
              v55,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            continue;
          }
          if ( !v55 )
            goto LABEL_39;
          klass = v55[2].klass;
          monitor = v55[2].monitor;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v81.fields.currentCryptoKey = klass;
          *(_QWORD *)&v81.fields.fakeValue = monitor;
          v55 = (EventMissionProgressRequest_Argument_ProgressData_o *)(unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                                       v81,
                                                                                       0LL);
          Instance = v78;
          if ( !v78 )
            goto LABEL_39;
          Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v78,
                       (int32_t)v55,
                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_39;
          v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                  *((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance + 2),
                  0LL);
          Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                               usrSvtEnt->fields.svtId,
                               0LL);
          if ( v76 == (_DWORD)Instance )
          {
            if ( !v57 )
              goto LABEL_39;
            v55 = *v72;
            goto LABEL_35;
          }
        }
      }
    }
    while ( ++v62 < Count );
  }
  if ( !v57 )
LABEL_39:
    sub_B5D69C(Instance, v55);
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v57,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getOrganizationList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int64_t Instance; // x0
  __int64 v42; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t v44; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x23
  int32_t v47; // w24
  int64_t v48; // x25
  __int64 v49; // x10
  __int128 v50; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x21
  __int64 v52; // x26
  __int64 v53; // x27
  int64_t v55; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_42EE678 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&NetworkManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v38, v39, v40);
    byte_42EE678 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v44 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v47 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v47,
                            (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v48 = Instance;
        v49 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v49
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v49 - 8) == UserServantEntity_TypeInfo )
        {
          v50 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v57.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v56 = v57;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v56, 0LL);
          if ( Instance == v44 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v48, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v55 = v44;
              v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v53 = *(_QWORD *)(v48 + 80);
              v52 = *(_QWORD *)(v48 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v58.fields.currentCryptoKey = v53;
              *(_QWORD *)&v58.fields.fakeValue = v52;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v58, 0LL);
              if ( !v51 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v51;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v51,
                                    Instance,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v44 = v55;
              if ( !Instance )
                break;
              Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( !v46 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v46,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v47 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B5D69C(Instance, v42);
  }
LABEL_28:
  if ( !v46 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v46,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


int32_t __fastcall UserServantMaster__getSameSvtNpLvCache(
        UserServantMaster_o *this,
        UserServantEntity_o *usrSvtEnt,
        System_Collections_Generic_Dictionary_int__List_int___o **cachedUserServantNpLvDict,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  System_Collections_Generic_List_int__o *v61; // x22
  int64_t Instance; // x0
  __int64 v63; // x1
  System_Collections_Generic_Dictionary_int__List_int___o *v64; // x22
  __int64 v65; // x23
  __int64 v66; // x24
  int32_t v67; // w21
  int32_t Count; // w23
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v70; // x25
  __int64 v71; // x26
  SvtMaterialTdMaster_o *v72; // x24
  int32_t i; // w25
  __int64 v74; // x27
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  __int64 v81; // x10
  System_Int32_array **v82; // x1
  int64_t *v83; // x26
  int64_t v84; // x8
  __int128 v85; // q0
  int64_t v86; // x0
  __int128 v87; // q0
  int64_t v88; // x28
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v89; // x28
  int64_t v90; // x8
  __int64 v91; // x27
  __int64 v92; // x28
  int32_t v93; // w27
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v94; // x20
  __int64 v95; // x19
  __int64 v96; // x23
  WarBoardPieceData_array *array; // [xsp+0h] [xbp-E0h]
  System_Collections_Generic_Dictionary_int__List_int___o **v99; // [xsp+8h] [xbp-D8h]
  System_Collections_Generic_List_int__o *v100; // [xsp+10h] [xbp-D0h]
  UserServantEntity_o *v101; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+60h] [xbp-80h]
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16

  if ( (byte_42EE67B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Array_Exists_SvtMaterialTdEntity___,
      (_DWORD)usrSvtEnt,
      (_DWORD)cachedUserServantNpLvDict,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v31, v32, v33);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v34, v35, v36);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&Method_System_Predicate_SvtMaterialTdEntity___ctor__, v43, v44, v45);
    sub_B5D5C4(&System_Predicate_SvtMaterialTdEntity__TypeInfo, v46, v47, v48);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v49, v50, v51);
    sub_B5D5C4(&Method_UserServantMaster___c__DisplayClass14_0__getSameSvtNpLvCache_b__0__, v52, v53, v54);
    sub_B5D5C4(&UserServantMaster___c__DisplayClass14_0_TypeInfo, v55, v56, v57);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v58, v59, v60);
    byte_42EE67B = 1;
  }
  v61 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v61,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  value = (WarBoardEvalValueSquare_CalcEval_o *)v61;
  if ( !usrSvtEnt )
    goto LABEL_64;
  if ( UserServantEntity__IsEventJoin(usrSvtEnt, 0LL) )
    goto LABEL_13;
  v64 = *cachedUserServantNpLvDict;
  v66 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
  v65 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v106.fields.currentCryptoKey = v66;
  *(_QWORD *)&v106.fields.fakeValue = v65;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v106, 0LL);
  if ( !v64 )
    goto LABEL_64;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v64,
          Instance,
          &value,
          (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
LABEL_13:
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      DataManager__GetMasterData_WarQuestSelectionMaster_(
        (DataManager_o *)Instance,
        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = (int64_t)this->fields.list;
      if ( Instance )
      {
        Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
        v100 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v100,
          (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
        Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
          v101 = usrSvtEnt;
          v71 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
          v70 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
          v72 = (SvtMaterialTdMaster_o *)MasterData_WarQuestSelectionMaster;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v107.fields.currentCryptoKey = v71;
          *(_QWORD *)&v107.fields.fakeValue = v70;
          v99 = cachedUserServantNpLvDict;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v107, 0LL);
          if ( v72 )
          {
            Instance = (int64_t)SvtMaterialTdMaster__GetEntityList(v72, Instance, 0LL);
            array = (WarBoardPieceData_array *)Instance;
            if ( Count >= 1 )
            {
              for ( i = 0; i < Count; ++i )
              {
                v74 = sub_B5D694(UserServantMaster___c__DisplayClass14_0_TypeInfo);
                UserServantMaster___c__DisplayClass14_0___ctor((UserServantMaster___c__DisplayClass14_0_o *)v74, 0LL);
                Instance = (int64_t)this->fields.list;
                if ( !Instance )
                  goto LABEL_64;
                Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                      (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                      i,
                                      (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
                if ( !v74 )
                  goto LABEL_64;
                if ( Instance
                  && (v81 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1),
                      *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v81) )
                {
                  if ( *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v81 - 8) == UserServantEntity_TypeInfo )
                    v82 = (System_Int32_array **)Instance;
                  else
                    v82 = 0LL;
                }
                else
                {
                  v82 = 0LL;
                }
                *(_QWORD *)(v74 + 16) = v82;
                v83 = (int64_t *)(v74 + 16);
                sub_B5D560((BattleServantConfConponent_o *)(v74 + 16), v82, v75, v76, v77, v78, v79, v80);
                Instance = *(_QWORD *)(v74 + 16);
                if ( Instance )
                {
                  Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)Instance, 0LL);
                  if ( (Instance & 1) == 0 )
                  {
                    Instance = *v83;
                    if ( !*v83 )
                      goto LABEL_64;
                    Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
                    if ( (Instance & 1) == 0 )
                    {
                      v84 = *v83;
                      if ( !*v83 )
                        goto LABEL_64;
                      v85 = *(_OWORD *)(v84 + 32);
                      *(_OWORD *)&v104.fields.currentCryptoKey = *(_OWORD *)(v84 + 16);
                      *(_OWORD *)&v104.fields.fakeValue = v85;
                      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                      }
                      v103 = v104;
                      v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v103, 0LL);
                      v87 = *(_OWORD *)&v101->fields.id.fields.fakeValue;
                      v88 = v86;
                      *(_OWORD *)&v102.fields.currentCryptoKey = *(_OWORD *)&v101->fields.id.fields.currentCryptoKey;
                      *(_OWORD *)&v102.fields.fakeValue = v87;
                      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v102, 0LL);
                      if ( v88 != Instance )
                      {
                        Instance = UserServantEntity__IsMaterialTd(v101, 0LL);
                        if ( (Instance & 1) == 0 )
                        {
                          Instance = *v83;
                          if ( !*v83 )
                            goto LABEL_64;
                          Instance = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Instance, 0LL);
                          if ( (Instance & 1) != 0 )
                          {
                            v89 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_SvtMaterialTdEntity__TypeInfo);
                            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                              v89,
                              (Il2CppObject *)v74,
                              Method_UserServantMaster___c__DisplayClass14_0__getSameSvtNpLvCache_b__0__,
                              (const MethodInfo_2B9320C *)Method_System_Predicate_SvtMaterialTdEntity___ctor__);
                            Instance = System_Array__Exists_WarBoardPieceData_(
                                         array,
                                         (System_Predicate_T__o *)v89,
                                         (const MethodInfo_1FC018C *)Method_System_Array_Exists_SvtMaterialTdEntity___);
                            if ( (Instance & 1) == 0 )
                              continue;
                          }
                          else
                          {
                            v90 = *v83;
                            if ( !*v83 )
                              goto LABEL_64;
                            v92 = *(_QWORD *)(v90 + 80);
                            v91 = *(_QWORD *)(v90 + 88);
                            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                            }
                            *(_QWORD *)&v108.fields.currentCryptoKey = v92;
                            *(_QWORD *)&v108.fields.fakeValue = v91;
                            v93 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v108, 0LL);
                            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                         v101->fields.svtId,
                                         0LL);
                            if ( v93 != (_DWORD)Instance )
                              continue;
                            Instance = UserServantEntity__IsEventJoin(v101, 0LL);
                            if ( (Instance & 1) != 0 )
                              continue;
                          }
                          if ( !*v83 )
                            goto LABEL_64;
                          Instance = (int64_t)v100;
                          if ( !v100 )
                            goto LABEL_64;
                          System_Collections_Generic_List_int___Add(
                            v100,
                            *(_DWORD *)(*v83 + 292),
                            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
                        }
                      }
                    }
                  }
                }
              }
            }
            if ( v100 )
            {
              if ( v100->fields._size < 1 )
                return 0;
              v67 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)v100, 0LL);
              if ( UserServantEntity__IsEventJoin(v101, 0LL) )
                return v67;
              v94 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)*v99;
              v96 = *(_QWORD *)&v101->fields.svtId.fields.currentCryptoKey;
              v95 = *(_QWORD *)&v101->fields.svtId.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v109.fields.currentCryptoKey = v96;
              *(_QWORD *)&v109.fields.fakeValue = v95;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v109, 0LL);
              if ( v94 )
              {
                System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
                  v94,
                  Instance,
                  (WarBoardAIRoute_RouteData_o *)v100,
                  (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
                return v67;
              }
            }
          }
        }
      }
    }
LABEL_64:
    sub_B5D69C(Instance, v63);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int64_t Instance; // x0
  const MethodInfo *v51; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x19
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v54; // x1
  __int64 v55; // x3
  System_Collections_Generic_IEnumerator_T__o *v56; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v58; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v61; // x3
  System_Collections_Generic_IEnumerator_T__c *v62; // x8
  unsigned __int64 v63; // x10
  int *v64; // x11
  __int64 v65; // x0
  UserServantEntity_o *v66; // x0
  UserServantEntity_o *v67; // x24
  __int64 v68; // x9
  __int128 v69; // q0
  int64_t v70; // x25
  __int64 v71; // x25
  __int64 v72; // x26
  __int64 v73; // x0
  ServantEntity_o *Entity; // x0
  __int64 v75; // x1
  __int64 v76; // x25
  __int64 v77; // x26
  __int64 v78; // x1
  __int64 v79; // x24
  __int64 v80; // x25
  int32_t v81; // w0
  System_Collections_Generic_IEnumerator_T__c *v82; // x8
  unsigned __int64 v83; // x10
  int *v84; // x11
  __int64 v85; // x0
  __int64 v86; // x8
  int64_t v87; // x22
  unsigned __int64 v88; // x20
  __int64 v89; // x23
  __int128 v90; // q0
  int64_t v91; // x24
  __int64 v92; // x24
  __int64 v93; // x25
  __int64 v94; // x24
  __int64 v95; // x25
  __int64 v96; // x23
  __int64 v97; // x24
  int32_t v98; // w0
  __int64 v100; // x0
  UserServantStorageMaster_o *v101; // [xsp+8h] [xbp-D8h]
  int32_t v102; // [xsp+14h] [xbp-CCh]
  System_Collections_Generic_List_int__o *v103; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+60h] [xbp-80h]
  __int64 v107; // [xsp+88h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16

  if ( (byte_42EE674 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&NetworkManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44, v45, v46);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v47, v48, v49);
    byte_42EE674 = 1;
  }
  HIDWORD(v107) = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  v101 = (UserServantStorageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v103 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v103,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_88;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v102 = 0;
  v56 = Enumerator;
LABEL_7:
  if ( !v56 )
    sub_B5D69C(Enumerator, v54);
  while ( 1 )
  {
    klass = v56->klass;
    if ( *(_WORD *)&v56->klass->_2.bitflags1 )
    {
      v58 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v58;
        p_offset += 4;
        if ( v58 >= *(unsigned __int16 *)&v56->klass->_2.bitflags1 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_AF54C0(v56, System_Collections_IEnumerator_TypeInfo, 0LL, v55);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            v56,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v62 = v56->klass;
    if ( *(_WORD *)&v56->klass->_2.bitflags1 )
    {
      v63 = 0LL;
      v64 = &v62->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v64 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v63;
        v64 += 4;
        if ( v63 >= *(unsigned __int16 *)&v56->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v65 = (__int64)&v62->vtable[*v64].method;
    }
    else
    {
LABEL_19:
      v65 = sub_AF54C0(v56, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v61);
    }
    v66 = (UserServantEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v65)(
                                   v56,
                                   *(_QWORD *)(v65 + 8));
    v67 = v66;
    if ( v66 )
    {
      v68 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v66->klass->_2.bitflags2 + 1) < (unsigned int)v68
        || (UserServantEntity_c *)v66->klass->_2.typeHierarchy[v68 - 1] != UserServantEntity_TypeInfo )
      {
        sub_B5D990(v66);
        goto LABEL_87;
      }
      v69 = *(_OWORD *)&v66->fields.userId.fields.fakeValue;
      *(_OWORD *)&v106.fields.currentCryptoKey = *(_OWORD *)&v66->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v106.fields.fakeValue = v69;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v105 = v106;
      v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v105, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( v70 == NetworkManager__get_UserId(0LL) && !UserServantEntity__IsWithdrawal(v67, 0LL) )
      {
        v72 = *(_QWORD *)&v67->fields.svtId.fields.currentCryptoKey;
        v71 = *(_QWORD *)&v67->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v108.fields.currentCryptoKey = v72;
        *(_QWORD *)&v108.fields.fakeValue = v71;
        v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v108, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          sub_B5D69C(v73, (unsigned int)v73);
        Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v73,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_B5D69C(0LL, v75);
        if ( ServantEntity__get_IsOrganization(Entity, 0LL) )
        {
          v77 = *(_QWORD *)&v67->fields.svtId.fields.currentCryptoKey;
          v76 = *(_QWORD *)&v67->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v109.fields.currentCryptoKey = v77;
          *(_QWORD *)&v109.fields.fakeValue = v76;
          v78 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v109, 0LL);
          if ( !v103 )
            sub_B5D69C(0LL, v78);
          if ( !System_Collections_Generic_List_int___Contains(
                  v103,
                  v78,
                  (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            v80 = *(_QWORD *)&v67->fields.svtId.fields.currentCryptoKey;
            v79 = *(_QWORD *)&v67->fields.svtId.fields.fakeValue;
            ++v102;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v110.fields.currentCryptoKey = v80;
            *(_QWORD *)&v110.fields.fakeValue = v79;
            v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v110, 0LL);
            System_Collections_Generic_List_int___Add(
              v103,
              v81,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
            goto LABEL_7;
          }
        }
      }
    }
  }
  v107 = 0x1000000B5LL;
  v82 = v56->klass;
  if ( *(_WORD *)&v56->klass->_2.bitflags1 )
  {
    v83 = 0LL;
    v84 = &v82->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v84 - 1) != System_IDisposable_TypeInfo )
    {
      ++v83;
      v84 += 4;
      if ( v83 >= *(unsigned __int16 *)&v56->klass->_2.bitflags1 )
        goto LABEL_51;
    }
    v85 = (__int64)&v82->vtable[*v84].method;
  }
  else
  {
LABEL_51:
    v85 = sub_AF54C0(v56, System_IDisposable_TypeInfo, 0LL, v61);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v85)(v56, *(_QWORD *)(v85 + 8));
  if ( (_DWORD)v107 == 181 )
    v107 = 181LL;
  Instance = (int64_t)v101;
  if ( !v101 || (Instance = (int64_t)UserServantStorageMaster__getList(v101, v51)) == 0 )
LABEL_88:
    sub_B5D69C(Instance, v51);
  v86 = *(_QWORD *)(Instance + 24);
  v87 = Instance;
  if ( (int)v86 >= 1 )
  {
    v88 = 0LL;
    while ( v88 < (unsigned int)v86 )
    {
      v89 = *(_QWORD *)(v87 + 32 + 8 * v88);
      if ( v89 )
      {
        v90 = *(_OWORD *)(v89 + 64);
        *(_OWORD *)&v106.fields.currentCryptoKey = *(_OWORD *)(v89 + 48);
        *(_OWORD *)&v106.fields.fakeValue = v90;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v104 = v106;
        v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v104, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        if ( v91 == Instance )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v89, 0LL);
          if ( (Instance & 1) == 0 )
          {
            v93 = *(_QWORD *)(v89 + 80);
            v92 = *(_QWORD *)(v89 + 88);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v111.fields.currentCryptoKey = v93;
            *(_QWORD *)&v111.fields.fakeValue = v92;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v111, 0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_88;
            Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  Instance,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              goto LABEL_88;
            Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
            if ( (Instance & 1) != 0 )
            {
              v95 = *(_QWORD *)(v89 + 80);
              v94 = *(_QWORD *)(v89 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v112.fields.currentCryptoKey = v95;
              *(_QWORD *)&v112.fields.fakeValue = v94;
              v51 = (const MethodInfo *)(unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                        v112,
                                                        0LL);
              Instance = (int64_t)v103;
              if ( !v103 )
                goto LABEL_88;
              Instance = System_Collections_Generic_List_int___Contains(
                           v103,
                           (int32_t)v51,
                           (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( (Instance & 1) == 0 )
              {
                v97 = *(_QWORD *)(v89 + 80);
                v96 = *(_QWORD *)(v89 + 88);
                ++v102;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v113.fields.currentCryptoKey = v97;
                *(_QWORD *)&v113.fields.fakeValue = v96;
                v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v113, 0LL);
                System_Collections_Generic_List_int___Add(
                  v103,
                  v98,
                  (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
              }
            }
          }
        }
      }
      LODWORD(v86) = *(_DWORD *)(v87 + 24);
      if ( (__int64)++v88 >= (int)v86 )
        return v102;
    }
LABEL_87:
    v100 = sub_B5D6C8(Instance);
    sub_B5D668(v100, 0LL);
  }
  return v102;
}


UserServantEntity_array *__fastcall UserServantMaster__getServantEquipList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int64_t Instance; // x0
  __int64 v42; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x26
  int64_t v44; // x21
  int32_t Count; // w22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x23
  int32_t v47; // w24
  int64_t v48; // x25
  __int64 v49; // x10
  __int128 v50; // q0
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x21
  __int64 v52; // x26
  __int64 v53; // x27
  int64_t v55; // [xsp+8h] [xbp-98h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_42EE67A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&NetworkManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v38, v39, v40);
    byte_42EE67A = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v44 = Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v47 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v47,
                            (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v48 = Instance;
        v49 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v49
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v49 - 8) == UserServantEntity_TypeInfo )
        {
          v50 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v57.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v56 = v57;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v56, 0LL);
          if ( Instance == v44 )
          {
            Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v48, 0LL);
            if ( (Instance & 1) == 0 )
            {
              v55 = v44;
              v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
              v53 = *(_QWORD *)(v48 + 80);
              v52 = *(_QWORD *)(v48 + 88);
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v58.fields.currentCryptoKey = v53;
              *(_QWORD *)&v58.fields.fakeValue = v52;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v58, 0LL);
              if ( !v51 )
                break;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)v51;
              Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v51,
                                    Instance,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              v44 = v55;
              if ( !Instance )
                break;
              Instance = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( !v46 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v46,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      if ( ++v47 >= Count )
        goto LABEL_28;
    }
LABEL_30:
    sub_B5D69C(Instance, v42);
  }
LABEL_28:
  if ( !v46 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v46,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


System_Collections_Generic_List_UserServantEntity__o *__fastcall UserServantMaster__getServantList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  DataManager_o *Instance; // x0
  __int64 v45; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v47; // x1
  __int64 v48; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v51; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v54; // x3
  System_Collections_Generic_IEnumerator_T__c *v55; // x8
  unsigned __int64 v56; // x10
  int32_t *v57; // x11
  __int64 v58; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v59; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v60; // x22
  __int64 v61; // x9
  __int128 v62; // q0
  int64_t v63; // x23
  void *monitor; // x23
  EventMissionProgressRequest_Argument_ProgressData_c *v65; // x24
  __int64 v66; // x0
  __int64 v67; // x1
  ServantEntity_o *Entity; // x0
  __int64 v69; // x1
  __int64 v70; // x1
  System_Collections_Generic_IEnumerator_T__c *v71; // x8
  unsigned __int64 v72; // x10
  int32_t *v73; // x11
  __int64 v74; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v76; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+30h] [xbp-80h]
  __int64 v79; // [xsp+58h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  if ( (byte_42EE673 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&NetworkManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38, v39, v40);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v41, v42, v43);
    byte_42EE673 = 1;
  }
  HIDWORD(v79) = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              Instance,
                                                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___),
        v76 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v76,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0LL) )
  {
    sub_B5D69C(Instance, v45);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v47);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v51 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v51;
        p_offset += 4;
        if ( v51 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v48);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v55 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v56 = 0LL;
      v57 = &v55->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v57 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v56;
        v57 += 4;
        if ( v56 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v58 = (__int64)&v55->vtable[*v57].method;
    }
    else
    {
LABEL_17:
      v58 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v54);
    }
    v59 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v58)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v58 + 8));
    v60 = v59;
    if ( v59 )
    {
      v61 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v59->klass->_2.bitflags2 + 1) < (unsigned int)v61
        || (UserServantEntity_c *)v59->klass->_2.typeHierarchy[v61 - 1] != UserServantEntity_TypeInfo )
      {
        sub_B5D990(v59);
LABEL_50:
        sub_B5D69C(v66, v67);
      }
      v62 = *(_OWORD *)&v59[1].fields.targetId;
      *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)&v59[1].monitor;
      *(_OWORD *)&v78.fields.fakeValue = v62;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v77 = v78;
      v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v77, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( v63 == NetworkManager__get_UserId(0LL) && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v60, 0LL) )
      {
        v65 = v60[2].klass;
        monitor = v60[2].monitor;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v80.fields.currentCryptoKey = v65;
        *(_QWORD *)&v80.fields.fakeValue = monitor;
        v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v80, 0LL);
        v67 = (unsigned int)v66;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_50;
        Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      v66,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_B5D69C(0LL, v69);
        if ( ServantEntity__get_IsServant(Entity, 0LL) )
        {
          if ( !v76 )
            sub_B5D69C(0LL, v70);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v76,
            v60,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
        }
      }
    }
  }
  v79 = 0x10000007BLL;
  v71 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v72 = 0LL;
    v73 = &v71->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v73 - 1) != System_IDisposable_TypeInfo )
    {
      ++v72;
      v73 += 4;
      if ( v72 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_43;
    }
    v74 = (__int64)&v71->vtable[*v73].method;
  }
  else
  {
LABEL_43:
    v74 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v54);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v74)(Enumerator, *(_QWORD *)(v74 + 8));
  if ( (_DWORD)v79 == 123 )
    v79 = 123LL;
  return (System_Collections_Generic_List_UserServantEntity__o *)v76;
}


System_Collections_Generic_List_UserServantEntity__o *__fastcall UserServantMaster__getServantListByClassIdList(
        UserServantMaster_o *this,
        System_Collections_Generic_List_int__o *classIdList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  DataManager_o *Instance; // x0
  __int64 v49; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // x25
  __int64 v51; // x1
  __int64 v52; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v55; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v58; // x3
  System_Collections_Generic_IEnumerator_T__c *v59; // x8
  unsigned __int64 v60; // x10
  int32_t *v61; // x11
  __int64 v62; // x0
  UserServantEntity_o *v63; // x0
  UserServantEntity_o *v64; // x23
  __int64 v65; // x9
  __int128 v66; // q0
  int64_t v67; // x24
  __int64 SvtClassId; // x1
  System_Collections_Generic_List_int__o *v69; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v70; // x21
  __int64 v71; // x24
  __int64 v72; // x25
  __int64 v73; // x1
  ServantEntity_o *Entity; // x0
  __int64 v75; // x1
  _BOOL8 IsServant; // x0
  __int64 v77; // x1
  System_Collections_Generic_IEnumerator_T__c *v78; // x8
  unsigned __int64 v79; // x10
  int32_t *v80; // x11
  __int64 v81; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_int__o *v84; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+30h] [xbp-80h]
  __int64 v87; // [xsp+58h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  if ( (byte_42EE676 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)classIdList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&NetworkManager_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42, v43, v44);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v45, v46, v47);
    byte_42EE676 = 1;
  }
  HIDWORD(v87) = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              Instance,
                                                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___),
        v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v50,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0LL) )
  {
    sub_B5D69C(Instance, v49);
  }
  v84 = classIdList;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v51);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v55 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v55;
        p_offset += 4;
        if ( v55 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v52);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v59 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v60 = 0LL;
      v61 = &v59->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v61 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v60;
        v61 += 4;
        if ( v60 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v62 = (__int64)&v59->vtable[*v61].method;
    }
    else
    {
LABEL_17:
      v62 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v58);
    }
    v63 = (UserServantEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v62)(
                                   Enumerator,
                                   *(_QWORD *)(v62 + 8));
    v64 = v63;
    if ( v63 )
    {
      v65 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v63->klass->_2.bitflags2 + 1) < (unsigned int)v65
        || (UserServantEntity_c *)v63->klass->_2.typeHierarchy[v65 - 1] != UserServantEntity_TypeInfo )
      {
        sub_B5D990(v63);
LABEL_52:
        sub_B5D69C(v69, SvtClassId);
      }
      v66 = *(_OWORD *)&v63->fields.userId.fields.fakeValue;
      *(_OWORD *)&v86.fields.currentCryptoKey = *(_OWORD *)&v63->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v86.fields.fakeValue = v66;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v85 = v86;
      v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v85, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( v67 == NetworkManager__get_UserId(0LL) && !UserServantEntity__IsWithdrawal(v64, 0LL) )
      {
        SvtClassId = (unsigned int)UserServantEntity__getSvtClassId(v64, 0LL);
        v69 = v84;
        if ( !v84 )
          goto LABEL_52;
        if ( System_Collections_Generic_List_int___Contains(
               v84,
               SvtClassId,
               (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v70 = v50;
          v72 = *(_QWORD *)&v64->fields.svtId.fields.currentCryptoKey;
          v71 = *(_QWORD *)&v64->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v88.fields.currentCryptoKey = v72;
          *(_QWORD *)&v88.fields.fakeValue = v71;
          v73 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v88, 0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            sub_B5D69C(0LL, v73);
          v50 = v70;
          Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        v73,
                                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Entity )
            sub_B5D69C(0LL, v75);
          IsServant = ServantEntity__get_IsServant(Entity, 0LL);
          if ( IsServant )
          {
            if ( !v70 )
              sub_B5D69C(IsServant, v77);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v70,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v64,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
          }
        }
      }
    }
  }
  v87 = 0x100000089LL;
  v78 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v79 = 0LL;
    v80 = &v78->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v80 - 1) != System_IDisposable_TypeInfo )
    {
      ++v79;
      v80 += 4;
      if ( v79 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_45;
    }
    v81 = (__int64)&v78->vtable[*v80].method;
  }
  else
  {
LABEL_45:
    v81 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v58);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v81)(Enumerator, *(_QWORD *)(v81 + 8));
  if ( (_DWORD)v87 == 137 )
    v87 = 137LL;
  return (System_Collections_Generic_List_UserServantEntity__o *)v50;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_long__o *__fastcall UserServantMaster__getSvtAllUserIdList(
        UserServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  System_Collections_Generic_IEnumerable_T__o *List; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v46; // x21
  DataManager_o *Instance; // x0
  const MethodInfo *v48; // x1
  System_Collections_Generic_List_long__o *v49; // x20
  _BOOL8 v50; // x0
  __int64 v51; // x1
  Il2CppObject *current; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject v55; // q0
  int64_t v56; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+40h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_42EE684 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor___68753944, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42, v43, v44);
    byte_42EE684 = 1;
  }
  memset(&v60, 0, sizeof(v60));
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, *(const MethodInfo **)&svtId);
  v46 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v46,
    List,
    (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___68753944);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL
    || (Instance = (DataManager_o *)UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, v48), !v46) )
  {
    sub_B5D69C(Instance, v48);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v46,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  v49 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v49,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v46,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  v60.fields.current = (Il2CppObject *)v59.fields.fakeValue;
  *(_OWORD *)&v60.fields.list = *(_OWORD *)&v59.fields.currentCryptoKey;
  while ( 1 )
  {
    v50 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v60,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v50 )
      break;
    current = v60.fields.current;
    if ( !v60.fields.current )
      sub_B5D69C(v50, v51);
    klass = v60.fields.current[5].klass;
    monitor = v60.fields.current[5].monitor;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v61.fields.currentCryptoKey = klass;
    *(_QWORD *)&v61.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v61, 0LL) == svtId
      && !UserServantEntity__IsEventJoin((UserServantEntity_o *)current, 0LL) )
    {
      v55 = current[2];
      *(Il2CppObject *)&v59.fields.currentCryptoKey = current[1];
      *(Il2CppObject *)&v59.fields.fakeValue = v55;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v58 = v59;
      v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v58, 0LL);
      if ( !v49 )
        sub_B5D69C(v56, v56);
      System_Collections_Generic_List_long___Add(
        v49,
        v56,
        (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v60,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  return v49;
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_o *__fastcall UserServantMaster__getSvtIdBattle(
        UserServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v20; // w21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v21; // x22
  int32_t v22; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v23; // x24
  __int64 v24; // x10
  Il2CppObject *syncRoot; // x25
  struct System_Collections_Generic_IList_T__o *items; // x26
  int klass; // w8
  int v28; // w9
  __int128 v29; // q0
  int64_t v30; // x0
  __int128 v31; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+40h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_42EE688 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v15, v16, v17);
    byte_42EE688 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_27;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0LL;
    v22 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v22,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v23 = list;
      v24 = *(&UserServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v24
        || (UserServantEntity_c *)list->klass->_2.typeHierarchy[v24 - 1] != UserServantEntity_TypeInfo )
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
      *(_QWORD *)&v36.fields.currentCryptoKey = items;
      *(_QWORD *)&v36.fields.fakeValue = syncRoot;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v36, 0LL) == svtId
        && !UserServantEntity__IsWithdrawal((UserServantEntity_o *)v23, 0LL) )
      {
        if ( !v21 )
          goto LABEL_22;
        klass = (int)v21[8].klass;
        v28 = (int)v23[8].klass;
        if ( klass < v28 )
          goto LABEL_22;
        if ( klass == v28 )
        {
          v29 = *(_OWORD *)&v21[1].klass;
          *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__Fields *)&v35.fields.currentCryptoKey = v21->fields;
          *(_OWORD *)&v35.fields.fakeValue = v29;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v34 = v35;
          v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v34, 0LL);
          v31 = *(_OWORD *)&v23[1].klass;
          *(System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__Fields *)&v33.fields.currentCryptoKey = v23->fields;
          *(_OWORD *)&v33.fields.fakeValue = v31;
          if ( v30 > CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v33, 0LL) )
LABEL_22:
            v21 = v23;
        }
      }
      if ( ++v22 >= v20 )
        return (UserServantEntity_o *)v21;
    }
LABEL_27:
    sub_B5D69C(list, *(_QWORD *)&svtId);
  }
  return 0LL;
}


void __fastcall UserServantMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E702A & 1) == 0 )
  {
    sub_B5D5C4(&UserServantMaster___c_TypeInfo, v1, v2, v3);
    byte_42E702A = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(UserServantMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserServantMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  UserServantMaster___c__DisplayClass14_0_o *v5; // x20
  struct UserServantEntity_o *e; // x8
  int32_t materialSvtId; // w21
  __int64 v8; // x19
  __int64 v9; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  v5 = this;
  if ( (byte_42E702B & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass14_0_o *)sub_B5D5C4(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          (_DWORD)m,
                                                          (_DWORD)method,
                                                          v3);
    byte_42E702B = 1;
  }
  if ( !m || (e = v5->fields.e) == 0LL )
    sub_B5D69C(this, m);
  materialSvtId = m->fields.materialSvtId;
  v9 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v9;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v11, 0LL);
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
  __int64 v3; // x3
  UserServantMaster___c__DisplayClass15_0_o *v5; // x20
  struct UserServantEntity_o *e; // x8
  int32_t materialSvtId; // w21
  __int64 v8; // x19
  __int64 v9; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  v5 = this;
  if ( (byte_42E702C & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass15_0_o *)sub_B5D5C4(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          (_DWORD)m,
                                                          (_DWORD)method,
                                                          v3);
    byte_42E702C = 1;
  }
  if ( !m || (e = v5->fields.e) == 0LL )
    sub_B5D69C(this, m);
  materialSvtId = m->fields.materialSvtId;
  v9 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v9;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v11, 0LL);
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
  __int64 v3; // x3
  UserServantMaster___c__DisplayClass1_0_o *v5; // x19
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v5 = this;
  if ( (byte_42E702D & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass1_0_o *)sub_B5D5C4(
                                                         &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                         (_DWORD)ent,
                                                         (_DWORD)method,
                                                         v3);
    byte_42E702D = 1;
  }
  if ( !ent )
    sub_B5D69C(this, ent);
  v7 = *(_QWORD *)&ent->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&ent->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return v5->fields.svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v9, 0LL);
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
  __int64 v3; // x3
  UserServantMaster___c__DisplayClass30_0_o *v5; // x19
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v5 = this;
  if ( (byte_42E702E & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass30_0_o *)sub_B5D5C4(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          (_DWORD)usrSvt,
                                                          (_DWORD)method,
                                                          v3);
    byte_42E702E = 1;
  }
  if ( !usrSvt )
    sub_B5D69C(this, usrSvt);
  v7 = *(_QWORD *)&usrSvt->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&usrSvt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v9, 0LL) == v5->fields.svtId;
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
    sub_B5D69C(this, a);
  }
  return (_DWORD)this - UserServantEntity__getSkillLevel(a, v5->fields.skillIdx, 0LL);
}