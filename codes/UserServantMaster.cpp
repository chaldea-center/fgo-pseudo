void __fastcall UserServantMaster___ctor(UserServantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B38066 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__, method);
    byte_4B38066 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    14,
    (const MethodInfo_31D205C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__);
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
    sub_1BD36B4(0LL, v8);
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
    sub_1BD36B4(0LL, v7);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  NetworkManager_c *v15; // x0
  int64_t userIdNumber; // x20
  UserServantEntity_o *v17; // x23
  int32_t v18; // w24
  UserServantEntity_o *v19; // x25
  __int64 methodPtr_low; // x10
  __int128 v21; // q0
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
  bool v36; // [xsp+Ch] [xbp-B4h]
  UserServantEntity_o *v37; // [xsp+10h] [xbp-B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+40h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4B3807F & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v7);
    sub_1BD3458(&NetworkManager_TypeInfo, v8);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BD3458(&UserServantEntity_TypeInfo, v12);
    byte_4B3807F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_54;
  v36 = checkStorage;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B31D77 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4B31D77 = 1;
  }
  v15 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v15 = NetworkManager_TypeInfo;
  }
  if ( Count >= 1 )
  {
    v37 = 0LL;
    userIdNumber = v15->static_fields->userIdNumber;
    v17 = 0LL;
    v18 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v18,
                                                                 (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v19 = (UserServantEntity_o *)list;
      methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UserServantEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantEntity_TypeInfo )
      {
        break;
      }
      v21 = *(_OWORD *)&list[2].fields.items;
      *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&list[2].klass;
      *(_OWORD *)&v40.fields.fakeValue = v21;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v39 = v40;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v39, 0LL) == userIdNumber )
      {
        v23 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
        v22 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v41.fields.currentCryptoKey = v23;
        *(_QWORD *)&v41.fields.fakeValue = v22;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v41, 0LL) == svtId )
        {
          if ( (v19->fields.status & 4) != 0 )
          {
            v37 = v19;
          }
          else if ( v17 )
          {
            v25 = *(_QWORD *)&v19->fields.limitCount.fields.currentCryptoKey;
            v24 = *(_QWORD *)&v19->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v42.fields.currentCryptoKey = v25;
            *(_QWORD *)&v42.fields.fakeValue = v24;
            v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v42, 0LL);
            if ( v26 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v17->fields.limitCount, 0LL)
              || v19->fields.lv > v17->fields.lv )
            {
              goto LABEL_28;
            }
            v29 = *(_QWORD *)&v19->fields.limitCount.fields.currentCryptoKey;
            v28 = *(_QWORD *)&v19->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v43.fields.currentCryptoKey = v29;
            *(_QWORD *)&v43.fields.fakeValue = v28;
            v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v43, 0LL);
            if ( v30 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v17->fields.limitCount, 0LL)
              && v19->fields.lv == v17->fields.lv
              && (v19->fields.status & 0x40) == 0
              && (v17->fields.status & 0x40) != 0 )
            {
              goto LABEL_28;
            }
            v32 = *(_QWORD *)&v19->fields.limitCount.fields.currentCryptoKey;
            v31 = *(_QWORD *)&v19->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v44.fields.currentCryptoKey = v32;
            *(_QWORD *)&v44.fields.fakeValue = v31;
            v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v44, 0LL);
            if ( v33 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v17->fields.limitCount, 0LL)
              && v19->fields.lv == v17->fields.lv
              && v19->fields.createdAt < v17->fields.createdAt )
            {
LABEL_28:
              v17 = (UserServantEntity_o *)sub_1BD36A4(UserServantEntity_TypeInfo);
              UserServantEntity___ctor_41019980(v17, v19, v27);
            }
          }
          else
          {
            v17 = v19;
          }
        }
      }
      if ( Count == ++v18 )
        goto LABEL_46;
    }
LABEL_54:
    sub_1BD36B4(list, *(_QWORD *)&svtId);
  }
  v37 = 0LL;
  v17 = 0LL;
LABEL_46:
  if ( v36 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !list )
      goto LABEL_54;
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)list,
                                                               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !list )
      goto LABEL_54;
    v17 = UserServantStorageMaster__CostumeTargetEntity((UserServantStorageMaster_o *)list, svtId, v17, v34);
  }
  if ( v17 )
    return v17;
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
  __int64 v17; // x1
  DataManager_o *Instance; // x0
  unsigned __int64 v19; // x1
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_int__o *v21; // x20
  __int64 v22; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  _OWORD *v32; // x0
  _OWORD *v33; // x24
  __int64 methodPtr_low; // x9
  __int128 v35; // q0
  __int64 v36; // x1
  int64_t v37; // x25
  NetworkManager_c *v38; // x0
  __int64 v39; // x25
  __int64 v40; // x26
  __int64 v41; // x1
  Il2CppObject *Entity; // x0
  __int64 v43; // x1
  __int64 v44; // x25
  __int64 v45; // x26
  __int64 v46; // x0
  __int64 v47; // x24
  __int64 v48; // x25
  __int64 v49; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v53; // x8
  __int64 v54; // x9
  int32_t *v55; // x10
  __int64 v56; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v58; // x22
  unsigned __int64 v59; // x19
  __int64 v60; // x29
  __int128 v61; // q0
  int64_t v62; // x23
  __int64 v63; // x23
  __int64 v64; // x24
  __int64 v65; // x23
  __int64 v66; // x24
  __int64 v67; // x23
  __int64 v68; // x24
  struct System_Int32_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  UserServantStorageMaster_o *v73; // [xsp+0h] [xbp-D0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v74; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+50h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16

  if ( (byte_4B3806E & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BD3458(&System_IDisposable_TypeInfo, v6);
    sub_1BD3458(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1BD3458(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1BD3458(&NetworkManager_TypeInfo, v13);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BD3458(&UserServantEntity_TypeInfo, v17);
    byte_4B3806E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  v73 = (UserServantStorageMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v21 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_89;
  v74 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_316EA98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BD36B4(0LL, v22);
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
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C25438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v30 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_18;
      }
      v31 = (__int64)&v28->vtable[*v30].method;
    }
    else
    {
LABEL_18:
      v31 = sub_1C25438(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v32 = (_OWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                      Enumerator,
                      *(_QWORD *)(v31 + 8));
    v33 = v32;
    if ( v32 )
    {
      methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v32 + 304LL) < (unsigned int)methodPtr_low
        || *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)v32 + 200LL) + 8 * methodPtr_low - 8) != UserServantEntity_TypeInfo )
      {
        sub_1BD3974(v32);
        goto LABEL_88;
      }
      v35 = v32[4];
      *(_OWORD *)&v77.fields.currentCryptoKey = v32[3];
      *(_OWORD *)&v77.fields.fakeValue = v35;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v76 = v77;
      v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v76, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B31D77 )
      {
        sub_1BD3458(&NetworkManager_TypeInfo, v36);
        byte_4B31D77 = 1;
      }
      v38 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v38 = NetworkManager_TypeInfo;
      }
      if ( v37 == v38->static_fields->userIdNumber && (*((_BYTE *)v33 + 300) & 4) == 0 )
      {
        v40 = *((_QWORD *)v33 + 10);
        v39 = *((_QWORD *)v33 + 11);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v78.fields.currentCryptoKey = v40;
        *(_QWORD *)&v78.fields.fakeValue = v39;
        v41 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v78, 0LL);
        if ( !v74 )
          sub_1BD36B4(0LL, v41);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   v74,
                   v41,
                   (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_1BD36B4(0LL, v43);
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0LL) )
        {
          v45 = *((_QWORD *)v33 + 10);
          v44 = *((_QWORD *)v33 + 11);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v79.fields.currentCryptoKey = v45;
          *(_QWORD *)&v79.fields.fakeValue = v44;
          v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v79, 0LL);
          if ( !v21 )
            sub_1BD36B4(v46, (unsigned int)v46);
          if ( !System_Collections_Generic_List_int___Contains(
                  v21,
                  v46,
                  (const MethodInfo_35A40E4 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            v48 = *((_QWORD *)v33 + 10);
            v47 = *((_QWORD *)v33 + 11);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v80.fields.currentCryptoKey = v48;
            *(_QWORD *)&v80.fields.fakeValue = v47;
            v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v80, 0LL);
            items = v21->fields._items;
            v51 = Method_System_Collections_Generic_List_int__Add__;
            ++v21->fields._version;
            if ( !items )
              sub_1BD36B4(v49, (unsigned int)v49);
            size = v21->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v21,
                v49,
                *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
            }
            else
            {
              v21->fields._size = size + 1;
              items->m_Items[size + 1] = v49;
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
        goto LABEL_52;
    }
    v56 = (__int64)&v53->vtable[*v55].method;
  }
  else
  {
LABEL_52:
    v56 = sub_1C25438(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v56)(Enumerator, *(_QWORD *)(v56 + 8));
  Instance = (DataManager_o *)v73;
  if ( !v73 || (Instance = (DataManager_o *)UserServantStorageMaster__getList(v73, (const MethodInfo *)v19)) == 0LL )
LABEL_89:
    sub_1BD36B4(Instance, v19);
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v58 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v59 = 0LL;
    while ( v59 < (unsigned int)m_CancellationTokenSource )
    {
      v60 = *((_QWORD *)&v58->fields._DispLog + v59);
      if ( v60 )
      {
        v61 = *(_OWORD *)(v60 + 64);
        *(_OWORD *)&v77.fields.currentCryptoKey = *(_OWORD *)(v60 + 48);
        *(_OWORD *)&v77.fields.fakeValue = v61;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v75 = v77;
        v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v75, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B31D77 )
        {
          sub_1BD3458(&NetworkManager_TypeInfo, v19);
          byte_4B31D77 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        if ( v62 == *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL) )
        {
          v64 = *(_QWORD *)(v60 + 80);
          v63 = *(_QWORD *)(v60 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v81.fields.currentCryptoKey = v64;
          *(_QWORD *)&v81.fields.fakeValue = v63;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v81, 0LL);
          if ( !v21 )
            goto LABEL_89;
          Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                        v21,
                                        (int32_t)Instance,
                                        (const MethodInfo_35A40E4 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)Instance & 1) == 0 && (*(_BYTE *)(v60 + 300) & 4) == 0 )
          {
            v66 = *(_QWORD *)(v60 + 80);
            v65 = *(_QWORD *)(v60 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v82.fields.currentCryptoKey = v66;
            *(_QWORD *)&v82.fields.fakeValue = v65;
            v19 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v82, 0LL);
            Instance = (DataManager_o *)v74;
            if ( !v74 )
              goto LABEL_89;
            Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                          v74,
                                          v19,
                                          (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              goto LABEL_89;
            Instance = (DataManager_o *)ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              v68 = *(_QWORD *)(v60 + 80);
              v67 = *(_QWORD *)(v60 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v83.fields.currentCryptoKey = v68;
              *(_QWORD *)&v83.fields.fakeValue = v67;
              Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v83, 0LL);
              v69 = v21->fields._items;
              v70 = Method_System_Collections_Generic_List_int__Add__;
              ++v21->fields._version;
              if ( !v69 )
                goto LABEL_89;
              v71 = v21->fields._size;
              v19 = (unsigned int)Instance;
              if ( (unsigned int)v71 >= v69->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v21,
                  (int32_t)Instance,
                  *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
              }
              else
              {
                v21->fields._size = v71 + 1;
                v69->m_Items[v71 + 1] = (int)Instance;
              }
            }
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v58->fields.m_CancellationTokenSource;
      if ( (__int64)++v59 >= (int)m_CancellationTokenSource )
        return v21;
    }
LABEL_88:
    sub_1BD36BC(Instance, v19);
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
  Il2CppObject *MasterData_object; // x26
  __int64 v18; // x20
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v20; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v21; // x25
  __int64 *v22; // x27
  int32_t v23; // w23
  int64_t v24; // x24
  __int64 methodPtr_low; // x10
  __int128 v26; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v27; // x0
  const MethodInfo_31D1EF0 **v28; // x21
  Il2CppObject *v29; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v30; // x20
  __int64 v31; // x25
  __int64 v32; // x26
  int32_t v33; // w1
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Collections_Generic_List_object__o *v46; // [xsp+0h] [xbp-B0h]
  __int64 v47; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4B38080 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1BD3458(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1BD3458(&NetworkManager_TypeInfo, v10);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BD3458(&UserServantEntity_TypeInfo, v14);
    byte_4B38080 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B31D77 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, v16);
    byte_4B31D77 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_35;
  v18 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v21 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v22 = &Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__;
    v23 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v23,
                            (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v24 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v26 = *(_OWORD *)(Instance + 64);
          v27 = *v21;
          *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)(v24 + 48);
          *(_OWORD *)&v49.fields.fakeValue = v26;
          if ( !v27->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v27);
          v48 = v49;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v48, 0LL);
          if ( Instance == v18 && (*(_BYTE *)(v24 + 300) & 4) == 0 )
          {
            v46 = v20;
            v47 = v18;
            v28 = (const MethodInfo_31D1EF0 **)v22;
            v29 = MasterData_object;
            v30 = v21;
            v32 = *(_QWORD *)(v24 + 80);
            v31 = *(_QWORD *)(v24 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v50.fields.currentCryptoKey = v32;
            *(_QWORD *)&v50.fields.fakeValue = v31;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v50, 0LL);
            if ( !v29 )
              break;
            MasterData_object = v29;
            v33 = Instance;
            v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)v29;
            v22 = (__int64 *)v28;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(v34, v33, *v28);
            if ( !Instance )
              break;
            v21 = v30;
            Instance = ServantEntity__get_IsCombineMaterial((ServantEntity_o *)Instance, 0LL);
            v20 = v46;
            v18 = v47;
            if ( (Instance & 1) != 0 && (*(_BYTE *)(v24 + 300) & 0x11) == 0 )
            {
              if ( !v46 )
                break;
              items = v46->fields._items;
              v42 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v46->fields._version;
              if ( !items )
                break;
              size = v46->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v46,
                  (Il2CppObject *)v24,
                  *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
              }
              else
              {
                v44 = &items->obj.klass + size;
                v46->fields._size = size + 1;
                v44[4] = (Il2CppClass *)v24;
                sub_1BD33FC((PartyOrganizationUtility_o *)(v44 + 4), v24, v35, v36, v37, v38, v39, v40);
              }
            }
          }
        }
      }
      if ( Count == ++v23 )
        goto LABEL_33;
    }
LABEL_35:
    sub_1BD36B4(Instance, v16);
  }
LABEL_33:
  if ( !v20 )
    goto LABEL_35;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v20,
                                      (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__GetEntities(
        UserServantMaster_o *this,
        System_Int64_array *userServantIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_long__o *v6; // x21

  if ( (byte_4B38085 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_long___ctor___76919936, userServantIds);
    sub_1BD3458(&System_Collections_Generic_List_long__TypeInfo, v5);
    byte_4B38085 = 1;
  }
  if ( userServantIds )
  {
    v6 = (System_Collections_Generic_List_long__o *)sub_1BD36A4(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_56264344(
      v6,
      (System_Collections_Generic_IEnumerable_T__o *)userServantIds,
      (const MethodInfo_35A8698 *)Method_System_Collections_Generic_List_long___ctor___76919936);
  }
  else
  {
    v6 = 0LL;
  }
  return UserServantMaster__GetEntities_41098176(this, v6, method);
}


UserServantEntity_array *__fastcall UserServantMaster__GetEntities_41098176(
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
  System_Collections_Generic_List_object__o *v16; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v18; // x1
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
  Il2CppObject *v29; // x0
  Il2CppObject *v30; // x22
  __int64 methodPtr_low; // x9
  Il2CppObject v32; // q0
  int64_t v33; // x1
  _BOOL8 v34; // x0
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+20h] [xbp-80h]

  if ( (byte_4B38086 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, userServantIds);
    sub_1BD3458(&System_IDisposable_TypeInfo, v5);
    sub_1BD3458(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1BD3458(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_long__Contains__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_long__get_Count__, v12);
    sub_1BD3458(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1BD3458(&UserServantEntity_TypeInfo, v15);
    byte_4B38086 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( userServantIds && userServantIds->fields._size >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_43;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   list,
                   (const MethodInfo_316EA98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_1BD36B4(0LL, v19);
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
            goto LABEL_11;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_11:
        p_method = sub_1C25438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v26;
          v27 += 4;
          if ( !v26 )
            goto LABEL_18;
        }
        v28 = (__int64)&v25->vtable[*v27].method;
      }
      else
      {
LABEL_18:
        v28 = sub_1C25438(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v29 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                              Enumerator,
                              *(_QWORD *)(v28 + 8));
      v30 = v29;
      if ( v29 )
      {
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v29->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (UserServantEntity_c *)v29->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantEntity_TypeInfo )
        {
          sub_1BD3974(v29);
LABEL_41:
          sub_1BD36B4(v34, v35);
        }
        v32 = v29[2];
        *(Il2CppObject *)&v52.fields.currentCryptoKey = v29[1];
        *(Il2CppObject *)&v52.fields.fakeValue = v32;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v51 = v52;
        v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v51, 0LL);
        v34 = System_Collections_Generic_List_long___Contains(
                userServantIds,
                v33,
                (const MethodInfo_35A913C *)Method_System_Collections_Generic_List_long__Contains__);
        if ( v34 )
        {
          if ( !v16 )
            goto LABEL_41;
          items = v16->fields._items;
          v43 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v16->fields._version;
          if ( !items )
            sub_1BD36B4(v34, v35);
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              v30,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            v45 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v45[4] = (Il2CppClass *)v30;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v45 + 4), (int64_t)v30, v36, v37, v38, v39, v40, v41);
          }
        }
      }
    }
    v46 = Enumerator->klass;
    v47 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v48 = &v46->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
      {
        --v47;
        v48 += 4;
        if ( !v47 )
          goto LABEL_35;
      }
      v49 = (__int64)&v46->vtable[*v48].method;
    }
    else
    {
LABEL_35:
      v49 = sub_1C25438(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(
                                                               Enumerator,
                                                               *(_QWORD *)(v49 + 8));
  }
  if ( !v16 )
LABEL_43:
    sub_1BD36B4(list, v18);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v16,
                                      (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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

  if ( (byte_4B38081 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Array_FindAll_UserServantEntity___, *(_QWORD *)&svtId);
    sub_1BD3458(&Method_System_Array_Sort_UserServantEntity___, v7);
    sub_1BD3458(&System_Comparison_UserServantEntity__TypeInfo, v8);
    sub_1BD3458(&System_Predicate_UserServantEntity__TypeInfo, v9);
    sub_1BD3458(&Method_UserServantMaster___c__DisplayClass31_0__GetHaveServantSkillLevelMax_b__0__, v10);
    sub_1BD3458(&Method_UserServantMaster___c__DisplayClass31_0__GetHaveServantSkillLevelMax_b__1__, v11);
    sub_1BD3458(&UserServantMaster___c__DisplayClass31_0_TypeInfo, v12);
    byte_4B38081 = 1;
  }
  v13 = sub_1BD36A4(UserServantMaster___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_10;
  *(_DWORD *)(v13 + 16) = svtId;
  *(_DWORD *)(v13 + 20) = skillIdx;
  AllList = (System_Object_array *)UserServantMaster__getAllList(this, v15);
  v17 = (System_Predicate_object__o *)sub_1BD36A4(System_Predicate_UserServantEntity__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v13,
    Method_UserServantMaster___c__DisplayClass31_0__GetHaveServantSkillLevelMax_b__0__,
    0LL);
  All_object = (UserServantEntity_o *)System_Array__FindAll_object_(
                                        AllList,
                                        (System_Predicate_T__o *)v17,
                                        (const MethodInfo_302C5CC *)Method_System_Array_FindAll_UserServantEntity___);
  if ( !All_object )
    goto LABEL_10;
  v18 = (System_Object_array *)All_object;
  if ( All_object->fields.id.fields.hiddenValue )
  {
    v19 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_object____ctor(
      v19,
      (Il2CppObject *)v13,
      Method_UserServantMaster___c__DisplayClass31_0__GetHaveServantSkillLevelMax_b__1__,
      0LL);
    System_Array__Sort_object__49279172(
      v18,
      v19,
      (const MethodInfo_2EFF0C4 *)Method_System_Array_Sort_UserServantEntity___);
    if ( !v18->max_length )
      sub_1BD36BC(v20, v15);
    All_object = (UserServantEntity_o *)v18->m_Items[0];
    if ( All_object )
      return UserServantEntity__getSkillLevel(All_object, *(_DWORD *)(v13 + 20), v21);
LABEL_10:
    sub_1BD36B4(All_object, v15);
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

  if ( (byte_4B38078 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v5);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1BD3458(&System_Math_TypeInfo, v7);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B38078 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___),
        AllList = UserServantMaster__getAllList(this, v13),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL
    || (Instance = (Il2CppObject *)UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL),
        !AllList) )
  {
LABEL_21:
    sub_1BD36B4(Instance, v11);
  }
  v15 = *(_QWORD *)&AllList->max_length;
  v16 = (unsigned __int8)Instance & 1;
  if ( (int)v15 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v15; ++i )
    {
      if ( i >= (unsigned int)v15 )
        sub_1BD36BC(Instance, v11);
      v18 = AllList->m_Items[i];
      if ( v18 )
      {
        v20 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
        v19 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v23.fields.currentCryptoKey = v20;
        *(_QWORD *)&v23.fields.fakeValue = v19;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v23, 0LL);
        if ( !MasterData_object )
          goto LABEL_21;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_21;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
                                     (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Instance[2],
                                     0LL);
        if ( (_DWORD)Instance == servantId )
        {
          treasureDeviceLv1 = v18->fields.treasureDeviceLv1;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          Instance = (Il2CppObject *)System_Math__Max_63344224(v16, treasureDeviceLv1, 0LL);
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

  if ( (byte_4B38076 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v7);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B38076 = 1;
  }
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___);
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
      sub_1BD36BC(Instance, v12);
    v19 = v16->m_Items[v18];
    if ( v19 )
    {
      v21 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v23.fields.currentCryptoKey = v21;
      *(_QWORD *)&v23.fields.fakeValue = v20;
      Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
                                              v23,
                                              0LL);
      if ( !MasterData_object )
        goto LABEL_23;
      Instance = (UserServantEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                              (int32_t)Instance,
                                              (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_23;
      Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
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
    Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
      if ( Instance )
      {
        v17 += UserPresentBoxMaster__GetCount((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL);
        return v17;
      }
    }
LABEL_23:
    sub_1BD36B4(Instance, v12);
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
  int v16; // w24
  unsigned __int64 v17; // x25
  UserServantEntity_o *v18; // x29
  __int64 v19; // x22
  __int64 v20; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4B38077 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1BD3458(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v5);
    sub_1BD3458(&DataManager_TypeInfo, v6);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B38077 = 1;
  }
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___);
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
        sub_1BD36BC(Instance, v11);
      v18 = v15->m_Items[v17];
      if ( v18 )
      {
        v20 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
        v19 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v22.fields.currentCryptoKey = v20;
        *(_QWORD *)&v22.fields.fakeValue = v19;
        Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
                                                v22,
                                                0LL);
        if ( !MasterData_object )
          goto LABEL_23;
        Instance = (UserServantEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                (int32_t)Instance,
                                                (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_23;
        Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
                                                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance->m_Items,
                                                0LL);
        if ( (_DWORD)Instance == servantId && (v18->fields.status & 4) == 0 )
          v16 += v18->fields.treasureDeviceLv1;
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
  Instance = (UserServantEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !Instance )
LABEL_23:
    sub_1BD36B4(Instance, v11);
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

  if ( (byte_4B38083 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BD3458(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v6);
    sub_1BD3458(&System_Func_UserServantEntity__bool__TypeInfo, v7);
    sub_1BD3458(&System_IDisposable_TypeInfo, v8);
    sub_1BD3458(&System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, v9);
    sub_1BD3458(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, v10);
    sub_1BD3458(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1BD3458(&NetworkManager_TypeInfo, v12);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BD3458(&Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__34_0__, v16);
    sub_1BD3458(&UserServantMaster___c_TypeInfo, v17);
    byte_4B38083 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B31D77 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, v20);
    byte_4B31D77 = 1;
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
    _9__34_0 = (System_Func_object__bool__o *)sub_1BD36A4(System_Func_UserServantEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__34_0,
      v28,
      Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__34_0__,
      0LL);
    static_fields = UserServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = (struct System_Func_UserServantEntity__bool__o *)_9__34_0;
    sub_1BD33FC(
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
                                (const MethodInfo_2F70C40 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  if ( !Instance )
LABEL_62:
    sub_1BD36B4(Instance, v19);
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
    v40 = sub_1C25438(Instance, System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, 0LL);
  }
  v42 = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v40)(v37, *(_QWORD *)(v40 + 8));
  if ( !v42 )
    sub_1BD36B4(0LL, v41);
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
      v46 = sub_1C25438(v42, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v50 = sub_1C25438(v42, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL);
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
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v70, 0LL) == userIdNumber
        && (*(_BYTE *)(v52 + 300) & 4) == 0 )
      {
        v55 = *(_QWORD *)(v52 + 80);
        v54 = *(_QWORD *)(v52 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v72.fields.currentCryptoKey = v55;
        *(_QWORD *)&v72.fields.fakeValue = v54;
        v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v72, 0LL);
        if ( !MasterData_object )
          sub_1BD36B4(v56, (unsigned int)v56);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v56,
                   (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v59 = Entity;
        if ( !Entity )
          sub_1BD36B4(0LL, v58);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
               (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[2],
               0LL) == servantId )
        {
          v61 = *(_QWORD *)(v52 + 96);
          v60 = *(_QWORD *)(v52 + 104);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v73.fields.currentCryptoKey = v61;
          *(_QWORD *)&v73.fields.fakeValue = v60;
          v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v73, 0LL);
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
    v67 = sub_1C25438(v42, System_IDisposable_TypeInfo, 0LL);
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
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v14; // x26
  int32_t Count; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v16; // x25
  int32_t v17; // w22
  int32_t v18; // w21
  int32_t v19; // w23
  Il2CppObject *Item; // x0
  Il2CppObject *v21; // x24
  __int64 methodPtr_low; // x10
  Il2CppObject v23; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v25; // x29
  void *monitor; // x24
  Il2CppClass *klass; // x25
  Il2CppObject *Entity; // x0
  ServantEntity_o *v29; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4B38084 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BD3458(&NetworkManager_TypeInfo, v6);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BD3458(&UserServantEntity_TypeInfo, v10);
    byte_4B38084 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B31D77 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, v12);
    byte_4B31D77 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_31;
  v14 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v17 = Count;
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v19,
               (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v21 = Item;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantEntity_TypeInfo )
        {
          v23 = Item[4];
          *(Il2CppObject *)&v32.fields.currentCryptoKey = Item[3];
          *(Il2CppObject *)&v32.fields.fakeValue = v23;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v31 = v32;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v31, 0LL) == v14
            && (BYTE4(v21[18].monitor) & 4) == 0 )
          {
            v24 = *v16;
            v25 = v16;
            klass = v21[5].klass;
            monitor = v21[5].monitor;
            if ( !v24->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v24);
            *(_QWORD *)&v33.fields.currentCryptoKey = klass;
            *(_QWORD *)&v33.fields.fakeValue = monitor;
            v12 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v33, 0LL);
            Instance = (DataManager_o *)MasterData_object;
            if ( !MasterData_object )
              break;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       v12,
                       (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            v16 = v25;
            if ( Entity )
            {
              v29 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServantEquip(HIDWORD(Entity[5].klass), 0LL) )
                v18 += ServantEntity__get_IsFriendShipSvtEquip(v29, 0LL);
            }
          }
        }
      }
      if ( v17 == ++v19 )
        return v18;
    }
LABEL_31:
    sub_1BD36B4(Instance, v12);
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

  if ( (byte_4B38067 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____77012920, svtEnt);
    sub_1BD3458(&System_Func_UserServantEntity__bool__TypeInfo, v7);
    sub_1BD3458(&Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__, v8);
    sub_1BD3458(&UserServantMaster___c__DisplayClass1_0_TypeInfo, v9);
    byte_4B38067 = 1;
  }
  v10 = (Il2CppObject *)sub_1BD36A4(UserServantMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor(v10, 0LL);
  if ( !v10 )
    sub_1BD36B4(v11, v12);
  v10[1].klass = (Il2CppClass *)svtId;
  List = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getList(this, v12);
  v14 = (System_Func_object__bool__o *)sub_1BD36A4(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    v10,
    Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__,
    0LL);
  v15 = System_Linq_Enumerable__FirstOrDefault_object__49631076(
          List,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_2F54F64 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____77012920);
  *svtEnt = (UserServantEntity_o *)v15;
  sub_1BD33FC((PartyOrganizationUtility_o *)svtEnt, (int64_t)v15, v16, v17, v18, v19, v20, v21);
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
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *v19; // x21
  const MethodInfo *v20; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v22; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  Il2CppObject *v32; // x0
  __int64 v33; // x1
  Il2CppObject *v34; // x24
  __int64 methodPtr_low; // x10
  void *monitor; // x25
  Il2CppClass *v37; // x26
  __int64 v38; // x0
  __int64 v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  __int64 v51; // x9
  int32_t *v52; // x10
  __int64 v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Collections_ObjectModel_Collection_T__c *v60; // x8
  System_Collections_ObjectModel_Collection_T__o *v61; // x22
  unsigned __int64 v62; // x19
  Il2CppObject *v63; // x23
  void *v64; // x24
  Il2CppClass *v65; // x25
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  PartyOrganizationUtility_o *v71; // [xsp+0h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  if ( (byte_4B38087 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, userServantList);
    sub_1BD3458(&Method_DataManager_GetMaster_UserServantStorageMaster___, v8);
    sub_1BD3458(&DataManager_TypeInfo, v9);
    sub_1BD3458(&System_IDisposable_TypeInfo, v10);
    sub_1BD3458(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_1BD3458(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v13);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v15);
    sub_1BD3458(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v16);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1BD3458(&UserServantEntity_TypeInfo, v18);
    byte_4B38087 = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_59;
  v71 = (PartyOrganizationUtility_o *)userServantList;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_316EA98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BD36B4(0LL, v22);
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
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C25438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v30 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_16;
      }
      v31 = (__int64)&v28->vtable[*v30].method;
    }
    else
    {
LABEL_16:
      v31 = sub_1C25438(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v32 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                            Enumerator,
                            *(_QWORD *)(v31 + 8));
    v34 = v32;
    if ( !v32
      || (methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v32->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (UserServantEntity_c *)v32->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantEntity_TypeInfo )
    {
      sub_1BD36B4(v32, v33);
    }
    v37 = v32[5].klass;
    monitor = v32[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v73.fields.currentCryptoKey = v37;
    *(_QWORD *)&v73.fields.fakeValue = monitor;
    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v73, 0LL);
    if ( (_DWORD)v38 == svtId )
    {
      if ( !v19 )
        sub_1BD36B4(v38, v39);
      items = v19->fields._items;
      v47 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++v19->fields._version;
      if ( !items )
        sub_1BD36B4(v38, v39);
      size = v19->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v19,
          v34,
          *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v49 = &items->obj.klass + size;
        v19->fields._size = size + 1;
        v49[4] = (Il2CppClass *)v34;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v49 + 4), (int64_t)v34, v40, v41, v42, v43, v44, v45);
      }
    }
  }
  v50 = Enumerator->klass;
  v51 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v52 = &v50->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      --v51;
      v52 += 4;
      if ( !v51 )
        goto LABEL_33;
    }
    v53 = (__int64)&v50->vtable[*v52].method;
  }
  else
  {
LABEL_33:
    v53 = sub_1C25438(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(Enumerator, *(_QWORD *)(v53 + 8));
  if ( isIncludeStorage )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)UserServantStorageMaster__getList(
                                                                 (UserServantStorageMaster_o *)list,
                                                                 v20);
      if ( list )
      {
        v60 = list[1].klass;
        v61 = list;
        if ( (int)v60 >= 1 )
        {
          v62 = 0LL;
          while ( 1 )
          {
            if ( v62 >= (unsigned int)v60 )
              sub_1BD36BC(list, v20);
            v63 = (Il2CppObject *)*((_QWORD *)&v61[1].monitor + v62);
            if ( v63 )
            {
              v65 = v63[5].klass;
              v64 = v63[5].monitor;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v74.fields.currentCryptoKey = v65;
              *(_QWORD *)&v74.fields.fakeValue = v64;
              list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
                                                                         v74,
                                                                         0LL);
              if ( (_DWORD)list == svtId )
              {
                if ( !v19 )
                  goto LABEL_59;
                v66 = v19->fields._items;
                v67 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v19->fields._version;
                if ( !v66 )
                  goto LABEL_59;
                v68 = v19->fields._size;
                if ( (unsigned int)v68 >= v66->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v19,
                    v63,
                    *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
                }
                else
                {
                  v69 = &v66->obj.klass + v68;
                  v19->fields._size = v68 + 1;
                  v69[4] = (Il2CppClass *)v63;
                  sub_1BD33FC((PartyOrganizationUtility_o *)(v69 + 4), (int64_t)v63, v54, v55, v56, v57, v58, v59);
                }
              }
            }
            LODWORD(v60) = v61[1].klass;
            if ( (__int64)++v62 >= (int)v60 )
              goto LABEL_53;
          }
        }
        goto LABEL_53;
      }
    }
LABEL_59:
    sub_1BD36B4(list, v20);
  }
LABEL_53:
  v71->klass = (PartyOrganizationUtility_c *)v19;
  sub_1BD33FC(v71, (int64_t)v19, v54, v55, v56, v57, v58, v59);
  if ( !v71->klass )
    goto LABEL_59;
  return SLODWORD(v71->klass->_1.namespaze) > 0;
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

  if ( (byte_4B38088 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMaster_UserServantStorageMaster___, userStorageServantList);
    sub_1BD3458(&DataManager_TypeInfo, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v9);
    sub_1BD3458(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v10);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4B38088 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
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
        sub_1BD36BC(Master_object, v14);
      v24 = (Il2CppObject *)v22->m_Items[v23];
      if ( v24 )
      {
        klass = v24[5].klass;
        monitor = v24[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v32.fields.currentCryptoKey = klass;
        *(_QWORD *)&v32.fields.fakeValue = monitor;
        Master_object = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
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
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v30[4] = (Il2CppClass *)v24;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)v24, v15, v16, v17, v18, v19, v20);
          }
        }
      }
      LODWORD(v21) = v22->max_length;
    }
    while ( (__int64)++v23 < (int)v21 );
  }
  *userStorageServantList = (System_Collections_Generic_List_UserServantEntity__o *)v12;
  sub_1BD33FC((PartyOrganizationUtility_o *)userStorageServantList, (int64_t)v12, v15, v16, v17, v18, v19, v20);
  if ( !*userStorageServantList )
LABEL_23:
    sub_1BD36B4(Master_object, v14);
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
  __int64 v11; // x1
  System_Collections_Generic_List_long__o *v12; // x20
  int64_t v13; // x1
  int64_t list; // x0
  int32_t Count; // w21
  __int64 v16; // x25
  int32_t v17; // w22
  int64_t v18; // x23
  __int64 methodPtr_low; // x10
  __int128 v20; // q0
  __int128 v21; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  System_Int64_array *v25; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+40h] [xbp-80h]

  if ( (byte_4B3807B & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_long__Add__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_long__ToArray__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_1BD3458(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_1BD3458(&NetworkManager_TypeInfo, v8);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1BD3458(&UserServantEntity_TypeInfo, v10);
    sub_1BD3458(&UserServantNewManager_TypeInfo, v11);
    byte_4B3807B = 1;
  }
  v12 = (System_Collections_Generic_List_long__o *)sub_1BD36A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v12,
    (const MethodInfo_35A8570 *)Method_System_Collections_Generic_List_long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_32;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B31D77 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, v13);
    byte_4B31D77 = 1;
  }
  list = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    list = (int64_t)NetworkManager_TypeInfo;
  }
  if ( Count >= 1 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(list + 184) + 64LL);
    v17 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v17,
                        (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v18 = list;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v20 = *(_OWORD *)(list + 64);
          *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)(list + 48);
          *(_OWORD *)&v28.fields.fakeValue = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v27 = v28;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v27, 0LL);
          if ( list == v16 && (*(_BYTE *)(v18 + 300) & 4) == 0 )
          {
            v21 = *(_OWORD *)(v18 + 32);
            *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)(v18 + 16);
            *(_OWORD *)&v28.fields.fakeValue = v21;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v26 = v28;
            list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v26, 0LL);
            if ( !v12 )
              break;
            items = v12->fields._items;
            v23 = Method_System_Collections_Generic_List_long__Add__;
            ++v12->fields._version;
            if ( !items )
              break;
            size = v12->fields._size;
            v13 = list;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_long___AddWithResize(
                v12,
                list,
                *(const MethodInfo_35A8DC4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v12->fields._size = size + 1;
              items->m_Items[size] = list;
            }
          }
        }
      }
      if ( Count == ++v17 )
        goto LABEL_28;
    }
LABEL_32:
    sub_1BD36B4(list, v13);
  }
LABEL_28:
  if ( !v12 )
    goto LABEL_32;
  v25 = System_Collections_Generic_List_long___ToArray(
          v12,
          (const MethodInfo_35AA87C *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  UserServantNewManager__SetOld_41409112(v25, 0LL);
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

  if ( (byte_4B3807D & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_UserServantStorageMaster___, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity___ctor___76935864, v5);
    sub_1BD3458(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v6);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B3807D = 1;
  }
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, method);
  v9 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_56362628(
    v9,
    List,
    (const MethodInfo_35C0684 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76935864);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL
    || (Instance = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, v11), !v9) )
  {
    sub_1BD36B4(Instance, v11);
  }
  System_Collections_Generic_List_object___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_35C0F9C *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v9,
                                      (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  __int64 v17; // x27
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w23
  int64_t v21; // x24
  __int64 methodPtr_low; // x10
  __int128 v23; // q0
  __int64 v24; // x25
  __int64 v25; // x26
  ServantEntity_o *v26; // x25
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4B3807C & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1BD3458(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1BD3458(&NetworkManager_TypeInfo, v10);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BD3458(&UserServantEntity_TypeInfo, v14);
    byte_4B3807C = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B31D77 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, v16);
    byte_4B31D77 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_35;
  v17 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v21 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v23 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v40.fields.fakeValue = v23;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = v40;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v39, 0LL);
          if ( Instance == v17 && (*(_BYTE *)(v21 + 300) & 4) == 0 )
          {
            v25 = *(_QWORD *)(v21 + 80);
            v24 = *(_QWORD *)(v21 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v41.fields.currentCryptoKey = v25;
            *(_QWORD *)&v41.fields.fakeValue = v24;
            v16 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v41, 0LL);
            Instance = (int64_t)MasterData_object;
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  MasterData_object,
                                  v16,
                                  (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v26 = (ServantEntity_o *)Instance;
            Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = ServantEntity__get_IsServantMaterialTd(v26, 0LL);
              if ( (Instance & 1) == 0 )
              {
                if ( !v19 )
                  break;
                items = v19->fields._items;
                v34 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v19->fields._version;
                if ( !items )
                  break;
                size = v19->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v19,
                    (Il2CppObject *)v21,
                    *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
                }
                else
                {
                  v36 = &items->obj.klass + size;
                  v19->fields._size = size + 1;
                  v36[4] = (Il2CppClass *)v21;
                  sub_1BD33FC((PartyOrganizationUtility_o *)(v36 + 4), v21, v27, v28, v29, v30, v31, v32);
                }
              }
            }
          }
        }
      }
      if ( Count == ++v20 )
        goto LABEL_33;
    }
LABEL_35:
    sub_1BD36B4(Instance, v16);
  }
LABEL_33:
  if ( !v19 )
    goto LABEL_35;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v19,
                                      (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  Il2CppObject *MasterData_object; // x23
  __int64 v20; // x29
  int32_t Count; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v22; // x28
  int32_t v23; // w24
  int32_t v24; // w25
  int32_t v25; // w26
  Il2CppObject *Item; // x0
  Il2CppObject *v27; // x27
  __int64 methodPtr_low; // x10
  Il2CppObject v29; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v31; // x21
  void *monitor; // x27
  Il2CppClass *klass; // x28
  Il2CppObject *Entity; // x0
  int32_t klass_high; // w28
  ServantEntity_o *v36; // x27
  int32_t *v38; // [xsp+0h] [xbp-C0h]
  bool v39; // [xsp+Ch] [xbp-B4h]
  int32_t *v40; // [xsp+10h] [xbp-B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+40h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4B38068 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, servantSum);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1BD3458(&NetworkManager_TypeInfo, v12);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BD3458(&UserServantEntity_TypeInfo, v16);
    byte_4B38068 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B31D77 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, v18);
    byte_4B31D77 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
LABEL_36:
    sub_1BD36B4(Instance, v18);
  v20 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v40 = servantSum;
    v38 = servantEquipSum;
    v39 = friendShipSvtEqExclude;
    v22 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v23 = Count;
    v24 = 0;
    v25 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_36;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v25,
               (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v27 = Item;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantEntity_TypeInfo )
        {
          v29 = Item[4];
          *(Il2CppObject *)&v42.fields.currentCryptoKey = Item[3];
          *(Il2CppObject *)&v42.fields.fakeValue = v29;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v41 = v42;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v41, 0LL) == v20
            && (BYTE4(v27[18].monitor) & 4) == 0 )
          {
            v30 = *v22;
            v31 = v22;
            klass = v27[5].klass;
            monitor = v27[5].monitor;
            if ( !v30->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v30);
            *(_QWORD *)&v43.fields.currentCryptoKey = klass;
            *(_QWORD *)&v43.fields.fakeValue = monitor;
            v18 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v43, 0LL);
            Instance = (DataManager_o *)MasterData_object;
            if ( !MasterData_object )
              goto LABEL_36;
            ++v24;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       v18,
                       (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              klass_high = HIDWORD(Entity[5].klass);
              v36 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServant(klass_high, 0LL) )
              {
                ++*v40;
              }
              else if ( SvtType__IsKeepServantEquip(klass_high, 0LL) )
              {
                v22 = v31;
                if ( !v39 || !ServantEntity__get_IsFriendShipSvtEquip(v36, 0LL) )
                  ++*v38;
                goto LABEL_32;
              }
            }
            v22 = v31;
          }
        }
      }
LABEL_32:
      if ( v23 == ++v25 )
        return v24;
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
  Il2CppObject *MasterData_object; // x22
  __int64 v18; // x28
  int32_t Count; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v20; // x27
  int32_t v21; // w23
  int32_t v22; // w24
  int32_t v23; // w25
  Il2CppObject *Item; // x0
  Il2CppObject *v25; // x26
  __int64 methodPtr_low; // x10
  Il2CppObject v27; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v29; // x20
  void *monitor; // x26
  Il2CppClass *klass; // x27
  Il2CppObject *Entity; // x0
  int32_t klass_high; // w26
  int32_t *v34; // x9
  int32_t *v36; // [xsp+8h] [xbp-B8h]
  int32_t *v37; // [xsp+10h] [xbp-B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+40h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4B38069 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, servantSum);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1BD3458(&NetworkManager_TypeInfo, v10);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BD3458(&UserServantEntity_TypeInfo, v14);
    byte_4B38069 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B31D77 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, v16);
    byte_4B31D77 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
LABEL_34:
    sub_1BD36B4(Instance, v16);
  v18 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v37 = servantSum;
    v36 = servantEquipSum;
    v20 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v21 = Count;
    v22 = 0;
    v23 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_34;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v23,
               (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v25 = Item;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantEntity_TypeInfo )
        {
          v27 = Item[4];
          *(Il2CppObject *)&v39.fields.currentCryptoKey = Item[3];
          *(Il2CppObject *)&v39.fields.fakeValue = v27;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v39;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v38, 0LL) == v18
            && (BYTE4(v25[18].monitor) & 4) == 0 )
          {
            v28 = *v20;
            v29 = v20;
            klass = v25[5].klass;
            monitor = v25[5].monitor;
            if ( !v28->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v28);
            *(_QWORD *)&v40.fields.currentCryptoKey = klass;
            *(_QWORD *)&v40.fields.fakeValue = monitor;
            v16 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v40, 0LL);
            Instance = (DataManager_o *)MasterData_object;
            if ( !MasterData_object )
              goto LABEL_34;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       v16,
                       (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            v20 = v29;
            if ( Entity )
            {
              klass_high = HIDWORD(Entity[5].klass);
              if ( SvtType__IsOrganization(klass_high, 0LL) )
              {
                v34 = v37;
LABEL_29:
                ++v22;
                ++*v34;
                goto LABEL_30;
              }
              if ( SvtType__IsServantEquip(klass_high, 0LL) )
              {
                v34 = v36;
                goto LABEL_29;
              }
            }
          }
        }
      }
LABEL_30:
      if ( v21 == ++v23 )
        return v22;
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w21
  int32_t v11; // w22
  Il2CppObject *Item; // x0
  UserServantEntity_o *v13; // x23
  __int64 methodPtr_low; // x10
  void *monitor; // x24
  Il2CppClass *klass; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4B38079 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&heroineId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BD3458(&UserServantEntity_TypeInfo, v7);
    byte_4B38079 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v11,
               (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v13 = (UserServantEntity_o *)Item;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantEntity_TypeInfo )
        {
          klass = Item[5].klass;
          monitor = Item[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v18.fields.currentCryptoKey = klass;
          *(_QWORD *)&v18.fields.fakeValue = monitor;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v18, 0LL) == heroineId
            && UserServantEntity__IsHeroine(v13, *(const MethodInfo **)&heroineId) )
          {
            return v13;
          }
        }
      }
      if ( v10 == ++v11 )
        return 0LL;
    }
LABEL_17:
    sub_1BD36B4(list, *(_QWORD *)&heroineId);
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
  Il2CppObject *MasterData_object; // x27
  __int64 v18; // x20
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v20; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v21; // x25
  int32_t v22; // w23
  int64_t v23; // x24
  __int64 methodPtr_low; // x10
  __int128 v25; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v27; // x20
  __int64 v28; // x25
  __int64 v29; // x26
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  __int64 v41; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4B38072 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1BD3458(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1BD3458(&NetworkManager_TypeInfo, v10);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BD3458(&UserServantEntity_TypeInfo, v14);
    byte_4B38072 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B31D77 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, v16);
    byte_4B31D77 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_34;
  v18 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v21 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v22 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v22,
                            (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v23 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v25 = *(_OWORD *)(Instance + 64);
          v26 = *v21;
          *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)(v23 + 48);
          *(_OWORD *)&v43.fields.fakeValue = v25;
          if ( !v26->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v26);
          v42 = v43;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v42, 0LL);
          if ( Instance == v18 && (*(_BYTE *)(v23 + 300) & 4) == 0 )
          {
            v41 = v18;
            v27 = v21;
            v29 = *(_QWORD *)(v23 + 80);
            v28 = *(_QWORD *)(v23 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v44.fields.currentCryptoKey = v29;
            *(_QWORD *)&v44.fields.fakeValue = v28;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v44, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v21 = v27;
            Instance = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)Instance, 0LL);
            v18 = v41;
            if ( (Instance & 1) != 0 )
            {
              if ( !v20 )
                break;
              items = v20->fields._items;
              v37 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v20->fields._version;
              if ( !items )
                break;
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v20,
                  (Il2CppObject *)v23,
                  *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
              }
              else
              {
                v39 = &items->obj.klass + size;
                v20->fields._size = size + 1;
                v39[4] = (Il2CppClass *)v23;
                sub_1BD33FC((PartyOrganizationUtility_o *)(v39 + 4), v23, v30, v31, v32, v33, v34, v35);
              }
            }
          }
        }
      }
      if ( Count == ++v22 )
        goto LABEL_32;
    }
LABEL_34:
    sub_1BD36B4(Instance, v16);
  }
LABEL_32:
  if ( !v20 )
    goto LABEL_34;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v20,
                                      (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  Il2CppObject *MasterData_object; // x27
  __int64 v18; // x20
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v20; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v21; // x25
  int32_t v22; // w23
  int64_t v23; // x24
  __int64 methodPtr_low; // x10
  __int128 v25; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v27; // x20
  __int64 v28; // x25
  __int64 v29; // x26
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  __int64 v41; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4B38070 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1BD3458(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1BD3458(&NetworkManager_TypeInfo, v10);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BD3458(&UserServantEntity_TypeInfo, v14);
    byte_4B38070 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B31D77 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, v16);
    byte_4B31D77 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_34;
  v18 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v21 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v22 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v22,
                            (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v23 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v25 = *(_OWORD *)(Instance + 64);
          v26 = *v21;
          *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)(v23 + 48);
          *(_OWORD *)&v43.fields.fakeValue = v25;
          if ( !v26->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v26);
          v42 = v43;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v42, 0LL);
          if ( Instance == v18 && (*(_BYTE *)(v23 + 300) & 4) == 0 )
          {
            v41 = v18;
            v27 = v21;
            v29 = *(_QWORD *)(v23 + 80);
            v28 = *(_QWORD *)(v23 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v44.fields.currentCryptoKey = v29;
            *(_QWORD *)&v44.fields.fakeValue = v28;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v44, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v21 = v27;
            Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0LL);
            v18 = v41;
            if ( (Instance & 1) != 0 )
            {
              if ( !v20 )
                break;
              items = v20->fields._items;
              v37 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v20->fields._version;
              if ( !items )
                break;
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v20,
                  (Il2CppObject *)v23,
                  *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
              }
              else
              {
                v39 = &items->obj.klass + size;
                v20->fields._size = size + 1;
                v39[4] = (Il2CppClass *)v23;
                sub_1BD33FC((PartyOrganizationUtility_o *)(v39 + 4), v23, v30, v31, v32, v33, v34, v35);
              }
            }
          }
        }
      }
      if ( Count == ++v22 )
        goto LABEL_32;
    }
LABEL_34:
    sub_1BD36B4(Instance, v16);
  }
LABEL_32:
  if ( !v20 )
    goto LABEL_34;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v20,
                                      (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getList(UserServantMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0

  if ( (byte_4B3806A & 1) == 0 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, method);
    byte_4B3806A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B31D77 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, method);
    byte_4B31D77 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  return UserServantMaster__getList_41074164(this, v4->static_fields->userIdNumber, v2);
}


UserServantEntity_array *__fastcall UserServantMaster__getList_41074164(
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
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v14; // x21
  int32_t v15; // w23
  int64_t v16; // x24
  __int64 methodPtr_low; // x10
  __int128 v18; // q0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-80h]

  if ( (byte_4B3806B & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1BD3458(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1BD3458(&UserServantEntity_TypeInfo, v11);
    byte_4B3806B = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v14 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v15,
                        (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v16 = list;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v18 = *(_OWORD *)(list + 64);
          *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(list + 48);
          *(_OWORD *)&v31.fields.fakeValue = v18;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v30 = v31;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v30, 0LL);
          if ( list == userId && (*(_BYTE *)(v16 + 300) & 4) == 0 )
          {
            if ( !v14 )
              break;
            items = v14->fields._items;
            v26 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v14->fields._version;
            if ( !items )
              break;
            size = v14->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v14,
                (Il2CppObject *)v16,
                *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v28 = &items->obj.klass + size;
              v14->fields._size = size + 1;
              v28[4] = (Il2CppClass *)v16;
              sub_1BD33FC((PartyOrganizationUtility_o *)(v28 + 4), v16, v19, v20, v21, v22, v23, v24);
            }
          }
        }
      }
      if ( Count == ++v15 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1BD36B4(list, userId);
  }
LABEL_20:
  if ( !v14 )
    goto LABEL_22;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v14,
                                      (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x27
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v20; // x22
  int32_t v21; // w24
  int64_t v22; // x25
  __int64 methodPtr_low; // x10
  __int128 v24; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x19
  __int64 v26; // x26
  __int64 v27; // x27
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  int64_t v39; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  v3 = userId;
  if ( (byte_4B3807A & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v10);
    sub_1BD3458(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v11);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1BD3458(&UserServantEntity_TypeInfo, v15);
    byte_4B3807A = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this->fields.list )
    goto LABEL_28;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v21,
                            (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v22 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v24 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v41.fields.fakeValue = v24;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v40 = v41;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v40, 0LL);
          if ( Instance == v3 && (*(_BYTE *)(v22 + 300) & 4) == 0 )
          {
            v39 = v3;
            v25 = v18;
            v27 = *(_QWORD *)(v22 + 80);
            v26 = *(_QWORD *)(v22 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v42.fields.currentCryptoKey = v27;
            *(_QWORD *)&v42.fields.fakeValue = v26;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v42, 0LL);
            if ( !v25 )
              break;
            v18 = v25;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  v25,
                                  Instance,
                                  (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            v3 = v39;
            if ( !Instance )
              break;
            if ( *(_DWORD *)(Instance + 84) != 3 )
            {
              if ( !v20 )
                break;
              items = v20->fields._items;
              v35 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v20->fields._version;
              if ( !items )
                break;
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v20,
                  (Il2CppObject *)v22,
                  *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
              }
              else
              {
                v37 = &items->obj.klass + size;
                v20->fields._size = size + 1;
                v37[4] = (Il2CppClass *)v22;
                sub_1BD33FC((PartyOrganizationUtility_o *)(v37 + 4), v22, v28, v29, v30, v31, v32, v33);
              }
            }
          }
        }
      }
      if ( Count == ++v21 )
        goto LABEL_26;
    }
LABEL_28:
    sub_1BD36B4(Instance, v17);
  }
LABEL_26:
  if ( !v20 )
    goto LABEL_28;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v20,
                                      (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  int64_t Instance; // x0
  signed __int64 klass; // x1
  Il2CppObject *MasterData_object; // x27
  System_Collections_Generic_List_object__o *v23; // x21
  int32_t Count; // w23
  SvtMaterialTdMaster_o *v25; // x24
  __int64 v26; // x25
  __int64 v27; // x26
  System_Object_array *v28; // x24
  int32_t v29; // w25
  Il2CppObject *v30; // x27
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  UserServantEntity_c *v37; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v39; // x10
  int64_t v40; // x1
  PartyOrganizationUtility_o *v41; // x26
  System_Predicate_object__o *v42; // x28
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  void *v49; // x27
  Il2CppClass *v50; // x28
  int32_t v51; // w27
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  UserServantEntity_o *v57; // [xsp+0h] [xbp-70h]
  DataMasterBase_TMaster__TEntity__PKType__o *v58; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_4B38075 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Array_Exists_SvtMaterialTdEntity___, usrSvtEnt);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1BD3458(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___, v8);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v12);
    sub_1BD3458(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1BD3458(&System_Predicate_SvtMaterialTdEntity__TypeInfo, v15);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BD3458(&Method_UserServantMaster___c__DisplayClass15_0__getNpUpServantList_b__0__, v17);
    sub_1BD3458(&UserServantMaster___c__DisplayClass15_0_TypeInfo, v18);
    sub_1BD3458(&UserServantEntity_TypeInfo, v19);
    byte_4B38075 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_46;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
  if ( !usrSvtEnt )
    goto LABEL_46;
  v25 = (SvtMaterialTdMaster_o *)Instance;
  v57 = usrSvtEnt;
  v27 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v59.fields.currentCryptoKey = v27;
  *(_QWORD *)&v59.fields.fakeValue = v26;
  v58 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v59, 0LL);
  if ( !v25 )
    goto LABEL_46;
  Instance = (int64_t)SvtMaterialTdMaster__GetEntityList(v25, Instance, 0LL);
  if ( Count >= 1 )
  {
    v28 = (System_Object_array *)Instance;
    v29 = 0;
    do
    {
      v30 = (Il2CppObject *)sub_1BD36A4(UserServantMaster___c__DisplayClass15_0_TypeInfo);
      System_Object___ctor(v30, 0LL);
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_46;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v29,
                            (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v30 )
        goto LABEL_46;
      if ( Instance )
      {
        v37 = UserServantEntity_TypeInfo;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low )
        {
          if ( *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
            v39 = (Il2CppClass *)Instance;
          else
            v39 = 0LL;
        }
        else
        {
          v39 = 0LL;
        }
        v30[1].klass = v39;
        v41 = (PartyOrganizationUtility_o *)&v30[1];
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low )
        {
          if ( *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == v37 )
            v40 = Instance;
          else
            v40 = 0LL;
        }
        else
        {
          v40 = 0LL;
        }
      }
      else
      {
        v40 = 0LL;
        v30[1].klass = 0LL;
        v41 = (PartyOrganizationUtility_o *)&v30[1];
      }
      sub_1BD33FC(v41, v40, v31, v32, v33, v34, v35, v36);
      if ( v41->klass && (*(&v41->klass->_2.bitflags2 + 1) & 4) == 0 )
      {
        v42 = (System_Predicate_object__o *)sub_1BD36A4(System_Predicate_SvtMaterialTdEntity__TypeInfo);
        System_Predicate_object____ctor(
          v42,
          v30,
          Method_UserServantMaster___c__DisplayClass15_0__getNpUpServantList_b__0__,
          0LL);
        Instance = System_Array__Exists_object_(
                     v28,
                     (System_Predicate_T__o *)v42,
                     (const MethodInfo_302BBE4 *)Method_System_Array_Exists_SvtMaterialTdEntity___);
        klass = (signed __int64)v41->klass;
        if ( (Instance & 1) != 0 )
        {
          if ( !v23 )
            goto LABEL_46;
LABEL_39:
          items = v23->fields._items;
          v53 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v23->fields._version;
          if ( !items )
            goto LABEL_46;
          size = v23->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v23,
              (Il2CppObject *)klass,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
          }
          else
          {
            v55 = &items->obj.klass + size;
            v23->fields._size = size + 1;
            v55[4] = (Il2CppClass *)klass;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v55 + 4), klass, v43, v44, v45, v46, v47, v48);
          }
          continue;
        }
        if ( !klass )
          goto LABEL_46;
        v50 = *(Il2CppClass **)(klass + 80);
        v49 = *(void **)(klass + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v60.fields.currentCryptoKey = v50;
        *(_QWORD *)&v60.fields.fakeValue = v49;
        klass = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v60, 0LL);
        Instance = (int64_t)v58;
        if ( !v58 )
          goto LABEL_46;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              v58,
                              klass,
                              (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_46;
        v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(Instance + 32),
                0LL);
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v57->fields.svtId, 0LL);
        if ( v51 == (_DWORD)Instance )
        {
          if ( !v23 )
            goto LABEL_46;
          klass = (signed __int64)v41->klass;
          goto LABEL_39;
        }
      }
    }
    while ( Count != ++v29 );
  }
  if ( !v23 )
LABEL_46:
    sub_1BD36B4(Instance, klass);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v23,
                                      (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  Il2CppObject *MasterData_object; // x27
  __int64 v18; // x20
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v20; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v21; // x25
  int32_t v22; // w23
  int64_t v23; // x24
  __int64 methodPtr_low; // x10
  __int128 v25; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v27; // x20
  __int64 v28; // x25
  __int64 v29; // x26
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  __int64 v41; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4B38071 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1BD3458(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1BD3458(&NetworkManager_TypeInfo, v10);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BD3458(&UserServantEntity_TypeInfo, v14);
    byte_4B38071 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B31D77 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, v16);
    byte_4B31D77 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_34;
  v18 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v21 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v22 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v22,
                            (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v23 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v25 = *(_OWORD *)(Instance + 64);
          v26 = *v21;
          *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)(v23 + 48);
          *(_OWORD *)&v43.fields.fakeValue = v25;
          if ( !v26->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v26);
          v42 = v43;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v42, 0LL);
          if ( Instance == v18 && (*(_BYTE *)(v23 + 300) & 4) == 0 )
          {
            v41 = v18;
            v27 = v21;
            v29 = *(_QWORD *)(v23 + 80);
            v28 = *(_QWORD *)(v23 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v44.fields.currentCryptoKey = v29;
            *(_QWORD *)&v44.fields.fakeValue = v28;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v44, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v21 = v27;
            Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
            v18 = v41;
            if ( (Instance & 1) != 0 )
            {
              if ( !v20 )
                break;
              items = v20->fields._items;
              v37 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v20->fields._version;
              if ( !items )
                break;
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v20,
                  (Il2CppObject *)v23,
                  *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
              }
              else
              {
                v39 = &items->obj.klass + size;
                v20->fields._size = size + 1;
                v39[4] = (Il2CppClass *)v23;
                sub_1BD33FC((PartyOrganizationUtility_o *)(v39 + 4), v23, v30, v31, v32, v33, v34, v35);
              }
            }
          }
        }
      }
      if ( Count == ++v22 )
        goto LABEL_32;
    }
LABEL_34:
    sub_1BD36B4(Instance, v16);
  }
LABEL_32:
  if ( !v20 )
    goto LABEL_34;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v20,
                                      (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  System_Collections_Generic_List_int__o *v24; // x22
  int64_t Instance; // x0
  const MethodInfo *v26; // x1
  System_Collections_Generic_Dictionary_int__List_int___o *v27; // x22
  __int64 v28; // x23
  __int64 v29; // x24
  int32_t v30; // w21
  int32_t Count; // w23
  Il2CppObject *MasterData_object; // x0
  __int64 v33; // x25
  __int64 v34; // x26
  SvtMaterialTdMaster_o *v35; // x24
  int32_t i; // w25
  Il2CppObject *v37; // x27
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  UserServantEntity_c *v44; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v46; // x10
  int64_t v47; // x1
  PartyOrganizationUtility_o *v48; // x26
  PartyOrganizationUtility_c *klass; // x8
  Il2CppType byval_arg; // q0
  int64_t v51; // x0
  __int128 v52; // q1
  int64_t v53; // x28
  System_Predicate_object__o *v54; // x28
  PartyOrganizationUtility_c *v55; // x8
  Il2CppClass *parent; // x27
  Il2CppClass *declaringType; // x28
  int32_t v58; // w27
  struct System_Int32_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_int__object__o *v62; // x20
  __int64 v63; // x19
  __int64 v64; // x23
  System_Object_array *array; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_Dictionary_int__List_int___o **v67; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_List_int__o *v68; // [xsp+18h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+60h] [xbp-90h]
  Il2CppObject *value; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  if ( (byte_4B38074 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Array_Exists_SvtMaterialTdEntity___, usrSvtEnt);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1BD3458(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___, v10);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__get_Count__, v15);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_1BD3458(&System_Predicate_SvtMaterialTdEntity__TypeInfo, v19);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1BD3458(&Method_UserServantMaster___c__DisplayClass14_0__getSameSvtNpLvCache_b__0__, v21);
    sub_1BD3458(&UserServantMaster___c__DisplayClass14_0_TypeInfo, v22);
    sub_1BD3458(&UserServantEntity_TypeInfo, v23);
    byte_4B38074 = 1;
  }
  v24 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  value = (Il2CppObject *)v24;
  if ( !usrSvtEnt )
    goto LABEL_66;
  if ( (usrSvtEnt->fields.status & 2) != 0 )
    goto LABEL_12;
  v27 = *cachedUserServantNpLvDict;
  v29 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v73.fields.currentCryptoKey = v29;
  *(_QWORD *)&v73.fields.fakeValue = v28;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v73, 0LL);
  if ( !v27 )
    goto LABEL_66;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)v27,
          Instance,
          &value,
          (const MethodInfo_3226720 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
LABEL_12:
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      DataManager__GetMasterData_object_(
        (DataManager_o *)Instance,
        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = (int64_t)this->fields.list;
      if ( Instance )
      {
        Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
        v68 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v68,
          (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
          v34 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
          v33 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
          v35 = (SvtMaterialTdMaster_o *)MasterData_object;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v74.fields.currentCryptoKey = v34;
          *(_QWORD *)&v74.fields.fakeValue = v33;
          v67 = cachedUserServantNpLvDict;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v74, 0LL);
          if ( v35 )
          {
            Instance = (int64_t)SvtMaterialTdMaster__GetEntityList(v35, Instance, 0LL);
            array = (System_Object_array *)Instance;
            if ( Count >= 1 )
            {
              for ( i = 0; Count != i; ++i )
              {
                v37 = (Il2CppObject *)sub_1BD36A4(UserServantMaster___c__DisplayClass14_0_TypeInfo);
                System_Object___ctor(v37, 0LL);
                Instance = (int64_t)this->fields.list;
                if ( !Instance )
                  goto LABEL_66;
                Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                      i,
                                      (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
                if ( !v37 )
                  goto LABEL_66;
                if ( Instance )
                {
                  v44 = UserServantEntity_TypeInfo;
                  methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
                  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low )
                  {
                    if ( *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
                      v46 = (Il2CppClass *)Instance;
                    else
                      v46 = 0LL;
                  }
                  else
                  {
                    v46 = 0LL;
                  }
                  v37[1].klass = v46;
                  v48 = (PartyOrganizationUtility_o *)&v37[1];
                  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low )
                  {
                    if ( *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == v44 )
                      v47 = Instance;
                    else
                      v47 = 0LL;
                  }
                  else
                  {
                    v47 = 0LL;
                  }
                }
                else
                {
                  v47 = 0LL;
                  v37[1].klass = 0LL;
                  v48 = (PartyOrganizationUtility_o *)&v37[1];
                }
                sub_1BD33FC(v48, v47, v38, v39, v40, v41, v42, v43);
                klass = v48->klass;
                if ( v48->klass && (*(&klass->_2.bitflags2 + 1) & 6) == 0 )
                {
                  byval_arg = klass->_1.byval_arg;
                  *(_OWORD *)&v71.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
                  *(Il2CppType *)&v71.fields.fakeValue = byval_arg;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  v70 = v71;
                  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v70, 0LL);
                  v52 = *(_OWORD *)&usrSvtEnt->fields.id.fields.fakeValue;
                  v53 = v51;
                  *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&usrSvtEnt->fields.id.fields.currentCryptoKey;
                  *(_OWORD *)&v69.fields.fakeValue = v52;
                  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v69, 0LL);
                  if ( v53 != Instance )
                  {
                    Instance = UserServantEntity__IsMaterialTd(usrSvtEnt, v26);
                    if ( (Instance & 1) == 0 )
                    {
                      Instance = (int64_t)v48->klass;
                      if ( !v48->klass )
                        goto LABEL_66;
                      Instance = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Instance, v26);
                      if ( (Instance & 1) != 0 )
                      {
                        v54 = (System_Predicate_object__o *)sub_1BD36A4(System_Predicate_SvtMaterialTdEntity__TypeInfo);
                        System_Predicate_object____ctor(
                          v54,
                          v37,
                          Method_UserServantMaster___c__DisplayClass14_0__getSameSvtNpLvCache_b__0__,
                          0LL);
                        Instance = System_Array__Exists_object_(
                                     array,
                                     (System_Predicate_T__o *)v54,
                                     (const MethodInfo_302BBE4 *)Method_System_Array_Exists_SvtMaterialTdEntity___);
                        if ( (Instance & 1) == 0 )
                          continue;
                      }
                      else
                      {
                        v55 = v48->klass;
                        if ( !v48->klass )
                          goto LABEL_66;
                        declaringType = v55->_1.declaringType;
                        parent = v55->_1.parent;
                        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        *(_QWORD *)&v75.fields.currentCryptoKey = declaringType;
                        *(_QWORD *)&v75.fields.fakeValue = parent;
                        v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v75, 0LL);
                        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
                                     usrSvtEnt->fields.svtId,
                                     0LL);
                        if ( v58 != (_DWORD)Instance || (usrSvtEnt->fields.status & 2) != 0 )
                          continue;
                      }
                      if ( !v48->klass )
                        goto LABEL_66;
                      Instance = (int64_t)v68;
                      if ( !v68 )
                        goto LABEL_66;
                      v26 = (const MethodInfo *)*(unsigned int *)&v48->klass->_2.typeHierarchyDepth;
                      items = v68->fields._items;
                      v60 = Method_System_Collections_Generic_List_int__Add__;
                      ++v68->fields._version;
                      if ( !items )
                        goto LABEL_66;
                      size = v68->fields._size;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v68,
                          (int32_t)v26,
                          *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v68->fields._size = size + 1;
                        items->m_Items[size + 1] = (int)v26;
                      }
                    }
                  }
                }
              }
            }
            if ( v68 )
            {
              if ( v68->fields._size < 1 )
                return 0;
              v30 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)v68, 0LL);
              if ( (usrSvtEnt->fields.status & 2) != 0 )
                return v30;
              v62 = (System_Collections_Generic_Dictionary_int__object__o *)*v67;
              v64 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
              v63 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v76.fields.currentCryptoKey = v64;
              *(_QWORD *)&v76.fields.fakeValue = v63;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v76, 0LL);
              if ( v62 )
              {
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  v62,
                  Instance,
                  (Il2CppObject *)v68,
                  (const MethodInfo_3224F80 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
                return v30;
              }
            }
          }
        }
      }
    }
LABEL_66:
    sub_1BD36B4(Instance, v26);
  }
  Instance = (int64_t)value;
  if ( !value )
    goto LABEL_66;
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
  __int64 v17; // x1
  DataManager_o *Instance; // x0
  unsigned __int64 v19; // x1
  Il2CppObject *MasterData_object; // x19
  System_Collections_Generic_List_int__o *v21; // x20
  __int64 v22; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  _OWORD *v32; // x0
  _OWORD *v33; // x25
  __int64 methodPtr_low; // x9
  __int128 v35; // q0
  __int64 v36; // x1
  int64_t v37; // x26
  NetworkManager_c *v38; // x0
  __int64 v39; // x26
  __int64 v40; // x27
  __int64 v41; // x0
  Il2CppObject *Entity; // x0
  __int64 v43; // x1
  __int64 v44; // x26
  __int64 v45; // x27
  __int64 v46; // x1
  __int64 v47; // x25
  __int64 v48; // x26
  __int64 v49; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v53; // x8
  __int64 v54; // x9
  int32_t *v55; // x10
  __int64 v56; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v58; // x23
  unsigned __int64 v59; // x20
  __int64 v60; // x29
  __int128 v61; // q0
  int64_t v62; // x24
  __int64 v63; // x24
  __int64 v64; // x25
  __int64 v65; // x24
  __int64 v66; // x25
  __int64 v67; // x24
  __int64 v68; // x25
  struct System_Int32_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  UserServantStorageMaster_o *v73; // [xsp+8h] [xbp-D8h]
  int32_t v74; // [xsp+14h] [xbp-CCh]
  System_Collections_Generic_List_int__o *v75; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16

  if ( (byte_4B3806D & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BD3458(&System_IDisposable_TypeInfo, v6);
    sub_1BD3458(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1BD3458(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1BD3458(&NetworkManager_TypeInfo, v13);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BD3458(&UserServantEntity_TypeInfo, v17);
    byte_4B3806D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_90;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_90;
  v73 = (UserServantStorageMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v21 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_90;
  v75 = v21;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_316EA98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BD36B4(0LL, v22);
  v74 = 0;
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
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C25438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v30 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_19;
      }
      v31 = (__int64)&v28->vtable[*v30].method;
    }
    else
    {
LABEL_19:
      v31 = sub_1C25438(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v32 = (_OWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                      Enumerator,
                      *(_QWORD *)(v31 + 8));
    v33 = v32;
    if ( v32 )
    {
      methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v32 + 304LL) < (unsigned int)methodPtr_low
        || *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)v32 + 200LL) + 8 * methodPtr_low - 8) != UserServantEntity_TypeInfo )
      {
        sub_1BD3974(v32);
        goto LABEL_89;
      }
      v35 = v32[4];
      *(_OWORD *)&v78.fields.currentCryptoKey = v32[3];
      *(_OWORD *)&v78.fields.fakeValue = v35;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v77 = v78;
      v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v77, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B31D77 )
      {
        sub_1BD3458(&NetworkManager_TypeInfo, v36);
        byte_4B31D77 = 1;
      }
      v38 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v38 = NetworkManager_TypeInfo;
      }
      if ( v37 == v38->static_fields->userIdNumber && (*((_BYTE *)v33 + 300) & 4) == 0 )
      {
        v40 = *((_QWORD *)v33 + 10);
        v39 = *((_QWORD *)v33 + 11);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v79.fields.currentCryptoKey = v40;
        *(_QWORD *)&v79.fields.fakeValue = v39;
        v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v79, 0LL);
        if ( !MasterData_object )
          sub_1BD36B4(v41, (unsigned int)v41);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v41,
                   (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_1BD36B4(0LL, v43);
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0LL) )
        {
          v45 = *((_QWORD *)v33 + 10);
          v44 = *((_QWORD *)v33 + 11);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v80.fields.currentCryptoKey = v45;
          *(_QWORD *)&v80.fields.fakeValue = v44;
          v46 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v80, 0LL);
          if ( !v21 )
            sub_1BD36B4(0LL, v46);
          if ( !System_Collections_Generic_List_int___Contains(
                  v21,
                  v46,
                  (const MethodInfo_35A40E4 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            v48 = *((_QWORD *)v33 + 10);
            v47 = *((_QWORD *)v33 + 11);
            ++v74;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v81.fields.currentCryptoKey = v48;
            *(_QWORD *)&v81.fields.fakeValue = v47;
            v49 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v81, 0LL);
            items = v21->fields._items;
            v51 = Method_System_Collections_Generic_List_int__Add__;
            ++v21->fields._version;
            if ( !items )
              sub_1BD36B4(v21, v49);
            size = v21->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v21,
                v49,
                *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
            }
            else
            {
              v21->fields._size = size + 1;
              items->m_Items[size + 1] = v49;
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
        goto LABEL_53;
    }
    v56 = (__int64)&v53->vtable[*v55].method;
  }
  else
  {
LABEL_53:
    v56 = sub_1C25438(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v56)(Enumerator, *(_QWORD *)(v56 + 8));
  Instance = (DataManager_o *)v73;
  if ( !v73 || (Instance = (DataManager_o *)UserServantStorageMaster__getList(v73, (const MethodInfo *)v19)) == 0LL )
LABEL_90:
    sub_1BD36B4(Instance, v19);
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v58 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v59 = 0LL;
    while ( v59 < (unsigned int)m_CancellationTokenSource )
    {
      v60 = *((_QWORD *)&v58->fields._DispLog + v59);
      if ( v60 )
      {
        v61 = *(_OWORD *)(v60 + 64);
        *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)(v60 + 48);
        *(_OWORD *)&v78.fields.fakeValue = v61;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v76 = v78;
        v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v76, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B31D77 )
        {
          sub_1BD3458(&NetworkManager_TypeInfo, v19);
          byte_4B31D77 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        if ( v62 == *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL) && (*(_BYTE *)(v60 + 300) & 4) == 0 )
        {
          v64 = *(_QWORD *)(v60 + 80);
          v63 = *(_QWORD *)(v60 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v82.fields.currentCryptoKey = v64;
          *(_QWORD *)&v82.fields.fakeValue = v63;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v82, 0LL);
          if ( !MasterData_object )
            goto LABEL_90;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                        (int32_t)Instance,
                                        (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_90;
          Instance = (DataManager_o *)ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            v66 = *(_QWORD *)(v60 + 80);
            v65 = *(_QWORD *)(v60 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v83.fields.currentCryptoKey = v66;
            *(_QWORD *)&v83.fields.fakeValue = v65;
            v19 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v83, 0LL);
            Instance = (DataManager_o *)v75;
            if ( !v75 )
              goto LABEL_90;
            Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                          v75,
                                          v19,
                                          (const MethodInfo_35A40E4 *)Method_System_Collections_Generic_List_int__Contains__);
            if ( ((unsigned __int8)Instance & 1) == 0 )
            {
              v68 = *(_QWORD *)(v60 + 80);
              v67 = *(_QWORD *)(v60 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v84.fields.currentCryptoKey = v68;
              *(_QWORD *)&v84.fields.fakeValue = v67;
              v19 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v84, 0LL);
              Instance = (DataManager_o *)v75;
              v69 = v75->fields._items;
              v70 = Method_System_Collections_Generic_List_int__Add__;
              ++v75->fields._version;
              if ( !v69 )
                goto LABEL_90;
              v71 = v75->fields._size;
              ++v74;
              if ( (unsigned int)v71 >= v69->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v75,
                  v19,
                  *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
              }
              else
              {
                v75->fields._size = v71 + 1;
                v69->m_Items[v71 + 1] = v19;
              }
            }
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v58->fields.m_CancellationTokenSource;
      if ( (__int64)++v59 >= (int)m_CancellationTokenSource )
        return v74;
    }
LABEL_89:
    sub_1BD36BC(Instance, v19);
  }
  return v74;
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
  Il2CppObject *MasterData_object; // x27
  __int64 v18; // x20
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v20; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v21; // x25
  int32_t v22; // w23
  int64_t v23; // x24
  __int64 methodPtr_low; // x10
  __int128 v25; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v27; // x20
  __int64 v28; // x25
  __int64 v29; // x26
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  __int64 v41; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4B38073 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1BD3458(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1BD3458(&NetworkManager_TypeInfo, v10);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BD3458(&UserServantEntity_TypeInfo, v14);
    byte_4B38073 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B31D77 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, v16);
    byte_4B31D77 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !this->fields.list )
    goto LABEL_34;
  v18 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v21 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v22 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v22,
                            (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v23 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v25 = *(_OWORD *)(Instance + 64);
          v26 = *v21;
          *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)(v23 + 48);
          *(_OWORD *)&v43.fields.fakeValue = v25;
          if ( !v26->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v26);
          v42 = v43;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v42, 0LL);
          if ( Instance == v18 && (*(_BYTE *)(v23 + 300) & 4) == 0 )
          {
            v41 = v18;
            v27 = v21;
            v29 = *(_QWORD *)(v23 + 80);
            v28 = *(_QWORD *)(v23 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v44.fields.currentCryptoKey = v29;
            *(_QWORD *)&v44.fields.fakeValue = v28;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v44, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v21 = v27;
            Instance = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
            v18 = v41;
            if ( (Instance & 1) != 0 )
            {
              if ( !v20 )
                break;
              items = v20->fields._items;
              v37 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v20->fields._version;
              if ( !items )
                break;
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v20,
                  (Il2CppObject *)v23,
                  *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
              }
              else
              {
                v39 = &items->obj.klass + size;
                v20->fields._size = size + 1;
                v39[4] = (Il2CppClass *)v23;
                sub_1BD33FC((PartyOrganizationUtility_o *)(v39 + 4), v23, v30, v31, v32, v33, v34, v35);
              }
            }
          }
        }
      }
      if ( Count == ++v22 )
        goto LABEL_32;
    }
LABEL_34:
    sub_1BD36B4(Instance, v16);
  }
LABEL_32:
  if ( !v20 )
    goto LABEL_34;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v20,
                                      (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *v19; // x20
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  _OWORD *v30; // x0
  int64_t v31; // x23
  __int64 methodPtr_low; // x9
  __int128 v33; // q0
  __int64 v34; // x1
  int64_t v35; // x24
  NetworkManager_c *v36; // x0
  __int64 v37; // x24
  __int64 v38; // x25
  __int64 v39; // x1
  Il2CppObject *Entity; // x0
  __int64 v41; // x1
  _BOOL8 IsServant; // x0
  __int64 v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  System_Collections_Generic_IEnumerator_T__c *v54; // x8
  __int64 v55; // x9
  int32_t *v56; // x10
  __int64 v57; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_4B3806C & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1BD3458(&System_IDisposable_TypeInfo, v5);
    sub_1BD3458(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1BD3458(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v9);
    sub_1BD3458(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v10);
    sub_1BD3458(&NetworkManager_TypeInfo, v11);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1BD3458(&UserServantEntity_TypeInfo, v15);
    byte_4B3806C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___),
        v19 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_UserServantEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v19,
          (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0LL) )
  {
    sub_1BD36B4(Instance, v17);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_316EA98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BD36B4(0LL, v20);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C25438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_17;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_17:
      v29 = sub_1C25438(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v30 = (_OWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                      Enumerator,
                      *(_QWORD *)(v29 + 8));
    v31 = (int64_t)v30;
    if ( v30 )
    {
      methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v30 + 304LL) < (unsigned int)methodPtr_low
        || *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)v30 + 200LL) + 8 * methodPtr_low - 8) != UserServantEntity_TypeInfo )
      {
        sub_1BD3974(v30);
LABEL_50:
        sub_1BD36B4(Entity, v41);
      }
      v33 = v30[4];
      *(_OWORD *)&v60.fields.currentCryptoKey = v30[3];
      *(_OWORD *)&v60.fields.fakeValue = v33;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v59 = v60;
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v59, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B31D77 )
      {
        sub_1BD3458(&NetworkManager_TypeInfo, v34);
        byte_4B31D77 = 1;
      }
      v36 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v36 = NetworkManager_TypeInfo;
      }
      if ( v35 == v36->static_fields->userIdNumber && (*(_BYTE *)(v31 + 300) & 4) == 0 )
      {
        v38 = *(_QWORD *)(v31 + 80);
        v37 = *(_QWORD *)(v31 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v61.fields.currentCryptoKey = v38;
        *(_QWORD *)&v61.fields.fakeValue = v37;
        v39 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v61, 0LL);
        if ( !MasterData_object )
          sub_1BD36B4(0LL, v39);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v39,
                   (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          goto LABEL_50;
        IsServant = ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL);
        if ( IsServant )
        {
          if ( !v19 )
            sub_1BD36B4(IsServant, v43);
          items = v19->fields._items;
          v51 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v19->fields._version;
          if ( !items )
            sub_1BD36B4(IsServant, v43);
          size = v19->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v19,
              (Il2CppObject *)v31,
              *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
          }
          else
          {
            v53 = &items->obj.klass + size;
            v19->fields._size = size + 1;
            v53[4] = (Il2CppClass *)v31;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v53 + 4), v31, v44, v45, v46, v47, v48, v49);
          }
        }
      }
    }
  }
  v54 = Enumerator->klass;
  v55 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v56 = &v54->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
    {
      --v55;
      v56 += 4;
      if ( !v55 )
        goto LABEL_46;
    }
    v57 = (__int64)&v54->vtable[*v56].method;
  }
  else
  {
LABEL_46:
    v57 = sub_1C25438(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v57)(Enumerator, *(_QWORD *)(v57 + 8));
  return (System_Collections_Generic_List_UserServantEntity__o *)v19;
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
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v22; // x20
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  _OWORD *v33; // x0
  int64_t v34; // x24
  __int64 methodPtr_low; // x9
  __int128 v36; // q0
  __int64 v37; // x1
  const MethodInfo *v38; // x2
  int64_t v39; // x25
  NetworkManager_c *v40; // x0
  __int64 SvtClassId; // x0
  __int64 v42; // x1
  __int64 v43; // x25
  __int64 v44; // x26
  __int64 v45; // x1
  Il2CppObject *Entity; // x0
  __int64 v47; // x1
  _BOOL8 IsServant; // x0
  __int64 v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  Il2CppClass **v59; // x0
  System_Collections_Generic_IEnumerator_T__c *v60; // x8
  __int64 v61; // x9
  int32_t *v62; // x10
  __int64 v63; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4B3806F & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, classIdList);
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1BD3458(&System_IDisposable_TypeInfo, v7);
    sub_1BD3458(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1BD3458(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v12);
    sub_1BD3458(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1BD3458(&NetworkManager_TypeInfo, v14);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1BD3458(&UserServantEntity_TypeInfo, v18);
    byte_4B3806F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantMaster___),
        v22 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_UserServantEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v22,
          (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0LL) )
  {
    sub_1BD36B4(Instance, v20);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_316EA98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BD36B4(0LL, v23);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        p_offset += 4;
        if ( !v26 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C25438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_17;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_17:
      v32 = sub_1C25438(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v33 = (_OWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                      Enumerator,
                      *(_QWORD *)(v32 + 8));
    v34 = (int64_t)v33;
    if ( v33 )
    {
      methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v33 + 304LL) < (unsigned int)methodPtr_low
        || *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)v33 + 200LL) + 8 * methodPtr_low - 8) != UserServantEntity_TypeInfo )
      {
        sub_1BD3974(v33);
LABEL_52:
        sub_1BD36B4(SvtClassId, v42);
      }
      v36 = v33[4];
      *(_OWORD *)&v66.fields.currentCryptoKey = v33[3];
      *(_OWORD *)&v66.fields.fakeValue = v36;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v65 = v66;
      v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v65, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B31D77 )
      {
        sub_1BD3458(&NetworkManager_TypeInfo, v37);
        byte_4B31D77 = 1;
      }
      v40 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v40 = NetworkManager_TypeInfo;
      }
      if ( v39 == v40->static_fields->userIdNumber && (*(_BYTE *)(v34 + 300) & 4) == 0 )
      {
        SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)v34, 0, v38);
        v42 = (unsigned int)SvtClassId;
        if ( !classIdList )
          goto LABEL_52;
        if ( System_Collections_Generic_List_int___Contains(
               classIdList,
               SvtClassId,
               (const MethodInfo_35A40E4 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v44 = *(_QWORD *)(v34 + 80);
          v43 = *(_QWORD *)(v34 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v67.fields.currentCryptoKey = v44;
          *(_QWORD *)&v67.fields.fakeValue = v43;
          v45 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v67, 0LL);
          if ( !MasterData_object )
            sub_1BD36B4(0LL, v45);
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     v45,
                     (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Entity )
            sub_1BD36B4(0LL, v47);
          IsServant = ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL);
          if ( IsServant )
          {
            if ( !v22 )
              sub_1BD36B4(IsServant, v49);
            items = v22->fields._items;
            v57 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v22->fields._version;
            if ( !items )
              sub_1BD36B4(IsServant, v49);
            size = v22->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v22,
                (Il2CppObject *)v34,
                *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
            }
            else
            {
              v59 = &items->obj.klass + size;
              v22->fields._size = size + 1;
              v59[4] = (Il2CppClass *)v34;
              sub_1BD33FC((PartyOrganizationUtility_o *)(v59 + 4), v34, v50, v51, v52, v53, v54, v55);
            }
          }
        }
      }
    }
  }
  v60 = Enumerator->klass;
  v61 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v62 = &v60->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
    {
      --v61;
      v62 += 4;
      if ( !v61 )
        goto LABEL_48;
    }
    v63 = (__int64)&v60->vtable[*v62].method;
  }
  else
  {
LABEL_48:
    v63 = sub_1C25438(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v63)(Enumerator, *(_QWORD *)(v63 + 8));
  return (System_Collections_Generic_List_UserServantEntity__o *)v22;
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

  if ( (byte_4B3807E & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_UserServantStorageMaster___, *(_QWORD *)&svtId);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_long__Add__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantEntity___ctor___76935864, v12);
    sub_1BD3458(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1BD3458(&System_Collections_Generic_List_long__TypeInfo, v14);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4B3807E = 1;
  }
  memset(&v36, 0, sizeof(v36));
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, *(const MethodInfo **)&svtId);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_56362628(
    v19,
    List,
    (const MethodInfo_35C0684 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76935864);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL
    || (Instance = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, v21), !v19) )
  {
    sub_1BD36B4(Instance, v21);
  }
  System_Collections_Generic_List_object___AddRange(
    v19,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_35C0F9C *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  v22 = (System_Collections_Generic_List_long__o *)sub_1BD36A4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v22,
    (const MethodInfo_35A8570 *)Method_System_Collections_Generic_List_long___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    v19,
    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  *(_OWORD *)&v36.fields._list = *(_OWORD *)&v35.fields.currentCryptoKey;
  v36.fields._current = (Il2CppObject *)v35.fields.fakeValue;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v23 )
      break;
    current = v36.fields._current;
    if ( !v36.fields._current )
      sub_1BD36B4(v23, v24);
    klass = v36.fields._current[5].klass;
    monitor = v36.fields._current[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v37.fields.currentCryptoKey = klass;
    *(_QWORD *)&v37.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v37, 0LL) == svtId
      && (BYTE4(current[18].monitor) & 2) == 0 )
    {
      v28 = current[2];
      *(Il2CppObject *)&v35.fields.currentCryptoKey = current[1];
      *(Il2CppObject *)&v35.fields.fakeValue = v28;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v34 = v35;
      v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v34, 0LL);
      if ( !v22 )
        sub_1BD36B4(v29, v29);
      items = v22->fields._items;
      v31 = Method_System_Collections_Generic_List_long__Add__;
      ++v22->fields._version;
      if ( !items )
        sub_1BD36B4(v29, v29);
      size = v22->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v22,
          v29,
          *(const MethodInfo_35A8DC4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
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
    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w21
  System_Collections_ObjectModel_Collection_T__o *v12; // x22
  int32_t v13; // w23
  System_Collections_ObjectModel_Collection_T__o *v14; // x24
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_IList_T__o *items; // x25
  void *monitor; // x26
  int v18; // w8
  int v19; // w9
  __int128 v20; // q0
  int64_t v21; // x0
  __int128 v22; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+40h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4B38082 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1BD3458(&UserServantEntity_TypeInfo, v8);
    byte_4B38082 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0LL;
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v14 = list;
      methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UserServantEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantEntity_TypeInfo )
      {
        break;
      }
      monitor = list[3].monitor;
      items = list[3].fields.items;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v27.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v27.fields.fakeValue = items;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v27, 0LL) == svtId
        && (BYTE4(v14[12].monitor) & 4) == 0 )
      {
        if ( !v12 )
          goto LABEL_20;
        v18 = (int)v12[10].fields.items;
        v19 = (int)v14[10].fields.items;
        if ( v18 < v19 )
          goto LABEL_20;
        if ( v18 == v19 )
        {
          v20 = *(_OWORD *)&v12[1].monitor;
          *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&v12->fields.items;
          *(_OWORD *)&v26.fields.fakeValue = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v25 = v26;
          v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v25, 0LL);
          v22 = *(_OWORD *)&v14[1].monitor;
          *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&v14->fields.items;
          *(_OWORD *)&v24.fields.fakeValue = v22;
          if ( v21 > CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v24, 0LL) )
LABEL_20:
            v12 = v14;
        }
      }
      if ( v11 == ++v13 )
        return (UserServantEntity_o *)v12;
    }
LABEL_25:
    sub_1BD36B4(list, *(_QWORD *)&svtId);
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

  if ( (byte_4B38089 & 1) == 0 )
  {
    sub_1BD3458(&UserServantMaster___c_TypeInfo, v1);
    byte_4B38089 = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(UserServantMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserServantMaster___c_TypeInfo->static_fields->__9 = (struct UserServantMaster___c_o *)v2;
  sub_1BD33FC(
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
    sub_1BD36B4(this, 0LL);
  return !UserServantEntity__IsMaterialTd(x, (const MethodInfo *)x);
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
  if ( (byte_4B3808A & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass14_0_o *)sub_1BD3458(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          m);
    byte_4B3808A = 1;
  }
  if ( !m || (e = v4->fields.e) == 0LL )
    sub_1BD36B4(this, m);
  materialSvtId = m->fields.materialSvtId;
  v8 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v10, 0LL);
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
  if ( (byte_4B3808B & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass15_0_o *)sub_1BD3458(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          m);
    byte_4B3808B = 1;
  }
  if ( !m || (e = v4->fields.e) == 0LL )
    sub_1BD36B4(this, m);
  materialSvtId = m->fields.materialSvtId;
  v8 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v10, 0LL);
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
  if ( (byte_4B3808C & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass1_0_o *)sub_1BD3458(
                                                         &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                         ent);
    byte_4B3808C = 1;
  }
  if ( !ent )
    sub_1BD36B4(this, ent);
  v6 = *(_QWORD *)&ent->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&ent->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return v4->fields.svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v8, 0LL);
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
  if ( (byte_4B3808D & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass31_0_o *)sub_1BD3458(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          usrSvt);
    byte_4B3808D = 1;
  }
  if ( !usrSvt )
    sub_1BD36B4(this, usrSvt);
  v6 = *(_QWORD *)&usrSvt->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&usrSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v8, 0LL) == v4->fields.svtId;
}


int32_t __fastcall UserServantMaster___c__DisplayClass31_0___GetHaveServantSkillLevelMax_b__1(
        UserServantMaster___c__DisplayClass31_0_o *this,
        UserServantEntity_o *a,
        UserServantEntity_o *b,
        const MethodInfo *method)
{
  UserServantMaster___c__DisplayClass31_0_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( !b
    || (v5 = this,
        this = (UserServantMaster___c__DisplayClass31_0_o *)UserServantEntity__getSkillLevel(
                                                              b,
                                                              this->fields.skillIdx,
                                                              (const MethodInfo *)b),
        !a) )
  {
    sub_1BD36B4(this, a);
  }
  return (_DWORD)this - UserServantEntity__getSkillLevel(a, v5->fields.skillIdx, v6);
}