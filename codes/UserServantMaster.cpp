void __fastcall UserServantMaster___ctor(UserServantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BFEC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__);
    byte_4A5BFEC = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    14,
    (const MethodInfo_311DAA0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__);
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
    sub_1B8880C(0LL, v8);
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
    sub_1B8880C(0LL, v7);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w23
  int64_t UserId; // x0
  int64_t v9; // x24
  UserServantEntity_o *v10; // x22
  int32_t v11; // w25
  UserServantEntity_o *v12; // x26
  __int64 methodPtr_low; // x10
  __int128 v14; // q0
  __int64 v15; // x27
  __int64 v16; // x28
  __int64 v17; // x27
  __int64 v18; // x28
  int32_t v19; // w27
  const MethodInfo *v20; // x2
  __int64 v21; // x27
  __int64 v22; // x28
  int32_t v23; // w27
  __int64 v24; // x27
  __int64 v25; // x28
  int32_t v26; // w27
  const MethodInfo *v27; // x3
  UserServantEntity_o *v29; // [xsp+10h] [xbp-B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+40h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4A5C005 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5C005 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_50;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v29 = 0LL;
    v9 = UserId;
    v10 = 0LL;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v11,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v12 = (UserServantEntity_o *)list;
      methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UserServantEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantEntity_TypeInfo )
      {
        break;
      }
      v14 = *(_OWORD *)&list[2].fields.items;
      *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&list[2].klass;
      *(_OWORD *)&v32.fields.fakeValue = v14;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v31 = v32;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v31, 0LL) == v9 )
      {
        v16 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
        v15 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v33.fields.currentCryptoKey = v16;
        *(_QWORD *)&v33.fields.fakeValue = v15;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v33, 0LL) == svtId )
        {
          if ( (v12->fields.status & 4) != 0 )
          {
            v29 = v12;
          }
          else if ( v10 )
          {
            v18 = *(_QWORD *)&v12->fields.limitCount.fields.currentCryptoKey;
            v17 = *(_QWORD *)&v12->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v34.fields.currentCryptoKey = v18;
            *(_QWORD *)&v34.fields.fakeValue = v17;
            v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v34, 0LL);
            if ( v19 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10->fields.limitCount, 0LL)
              || v12->fields.lv > v10->fields.lv )
            {
              goto LABEL_24;
            }
            v22 = *(_QWORD *)&v12->fields.limitCount.fields.currentCryptoKey;
            v21 = *(_QWORD *)&v12->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v35.fields.currentCryptoKey = v22;
            *(_QWORD *)&v35.fields.fakeValue = v21;
            v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v35, 0LL);
            if ( v23 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10->fields.limitCount, 0LL)
              && v12->fields.lv == v10->fields.lv
              && (v12->fields.status & 0x40) == 0
              && (v10->fields.status & 0x40) != 0 )
            {
              goto LABEL_24;
            }
            v25 = *(_QWORD *)&v12->fields.limitCount.fields.currentCryptoKey;
            v24 = *(_QWORD *)&v12->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v36.fields.currentCryptoKey = v25;
            *(_QWORD *)&v36.fields.fakeValue = v24;
            v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v36, 0LL);
            if ( v26 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10->fields.limitCount, 0LL)
              && v12->fields.lv == v10->fields.lv
              && v12->fields.createdAt < v10->fields.createdAt )
            {
LABEL_24:
              v10 = (UserServantEntity_o *)sub_1B887FC(UserServantEntity_TypeInfo);
              UserServantEntity___ctor_40192384(v10, v12, v20);
            }
          }
          else
          {
            v10 = v12;
          }
        }
      }
      if ( Count == ++v11 )
        goto LABEL_42;
    }
LABEL_50:
    sub_1B8880C(list, *(_QWORD *)&svtId);
  }
  v29 = 0LL;
  v10 = 0LL;
LABEL_42:
  if ( checkStorage )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !list )
      goto LABEL_50;
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)list,
                                                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !list )
      goto LABEL_50;
    v10 = UserServantStorageMaster__CostumeTargetEntity((UserServantStorageMaster_o *)list, svtId, v10, v27);
  }
  if ( v10 )
    return v10;
  else
    return v29;
}


System_Collections_Generic_List_int__o *__fastcall UserServantMaster__GetAllServantList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *MasterData_object; // x19
  System_Collections_Generic_List_int__o *v6; // x20
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  _OWORD *v17; // x0
  _OWORD *v18; // x23
  __int64 methodPtr_low; // x9
  __int128 v20; // q0
  int64_t v21; // x24
  __int64 v22; // x24
  __int64 v23; // x25
  __int64 v24; // x0
  Il2CppObject *Entity; // x0
  __int64 v26; // x1
  __int64 v27; // x24
  __int64 v28; // x25
  __int64 v29; // x0
  __int64 v30; // x23
  __int64 v31; // x24
  __int64 v32; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x8
  int64_t v41; // x21
  unsigned __int64 v42; // x24
  __int64 v43; // x28
  __int128 v44; // q0
  int64_t v45; // x22
  __int64 v46; // x22
  __int64 v47; // x23
  __int64 v48; // x22
  __int64 v49; // x23
  __int64 v50; // x22
  __int64 v51; // x23
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

  if ( (byte_4A5BFF4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5BFF4 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  v56 = (UserServantStorageMaster_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v6 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_81;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_18;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_18:
      v16 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v17 = (_OWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                      Enumerator,
                      *(_QWORD *)(v16 + 8));
    v18 = v17;
    if ( v17 )
    {
      methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v17 + 304LL) < (unsigned int)methodPtr_low
        || *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * methodPtr_low - 8) != UserServantEntity_TypeInfo )
      {
        sub_1B88ACC(v17);
        goto LABEL_80;
      }
      v20 = v17[4];
      *(_OWORD *)&v59.fields.currentCryptoKey = v17[3];
      *(_OWORD *)&v59.fields.fakeValue = v20;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v58 = v59;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v58, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( v21 == NetworkManager__get_UserId(0LL) && (*((_BYTE *)v18 + 300) & 4) == 0 )
      {
        v23 = *((_QWORD *)v18 + 10);
        v22 = *((_QWORD *)v18 + 11);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v60.fields.currentCryptoKey = v23;
        *(_QWORD *)&v60.fields.fakeValue = v22;
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v60, 0LL);
        if ( !MasterData_object )
          sub_1B8880C(v24, (unsigned int)v24);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v24,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_1B8880C(0LL, v26);
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0LL) )
        {
          v28 = *((_QWORD *)v18 + 10);
          v27 = *((_QWORD *)v18 + 11);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v61.fields.currentCryptoKey = v28;
          *(_QWORD *)&v61.fields.fakeValue = v27;
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v61, 0LL);
          if ( !v6 )
            sub_1B8880C(v29, (unsigned int)v29);
          if ( !System_Collections_Generic_List_int___Contains(
                  v6,
                  v29,
                  (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            v31 = *((_QWORD *)v18 + 10);
            v30 = *((_QWORD *)v18 + 11);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v62.fields.currentCryptoKey = v31;
            *(_QWORD *)&v62.fields.fakeValue = v30;
            v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v62, 0LL);
            items = v6->fields._items;
            v34 = Method_System_Collections_Generic_List_int__Add__;
            ++v6->fields._version;
            if ( !items )
              sub_1B8880C(v32, (unsigned int)v32);
            size = v6->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v6,
                v32,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            }
            else
            {
              v6->fields._size = size + 1;
              items->m_Items[size + 1] = v32;
            }
          }
        }
      }
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_48;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_48:
    v39 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  Instance = (int64_t)v56;
  if ( !v56 || (Instance = (int64_t)UserServantStorageMaster__getList(v56, v4)) == 0 )
LABEL_81:
    sub_1B8880C(Instance, v4);
  v40 = *(_QWORD *)(Instance + 24);
  v41 = Instance;
  if ( (int)v40 >= 1 )
  {
    v42 = 0LL;
    while ( v42 < (unsigned int)v40 )
    {
      v43 = *(_QWORD *)(v41 + 32 + 8 * v42);
      if ( v43 )
      {
        v44 = *(_OWORD *)(v43 + 64);
        *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)(v43 + 48);
        *(_OWORD *)&v59.fields.fakeValue = v44;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v57 = v59;
        v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v57, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        if ( v45 == Instance )
        {
          v47 = *(_QWORD *)(v43 + 80);
          v46 = *(_QWORD *)(v43 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v63.fields.currentCryptoKey = v47;
          *(_QWORD *)&v63.fields.fakeValue = v46;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v63, 0LL);
          if ( !v6 )
            goto LABEL_81;
          Instance = System_Collections_Generic_List_int___Contains(
                       v6,
                       Instance,
                       (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Instance & 1) == 0 && (*(_BYTE *)(v43 + 300) & 4) == 0 )
          {
            v49 = *(_QWORD *)(v43 + 80);
            v48 = *(_QWORD *)(v43 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v64.fields.currentCryptoKey = v49;
            *(_QWORD *)&v64.fields.fakeValue = v48;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v64, 0LL);
            if ( !MasterData_object )
              goto LABEL_81;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              goto LABEL_81;
            Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
            if ( (Instance & 1) != 0 )
            {
              v51 = *(_QWORD *)(v43 + 80);
              v50 = *(_QWORD *)(v43 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v65.fields.currentCryptoKey = v51;
              *(_QWORD *)&v65.fields.fakeValue = v50;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v65, 0LL);
              v52 = v6->fields._items;
              v53 = Method_System_Collections_Generic_List_int__Add__;
              ++v6->fields._version;
              if ( !v52 )
                goto LABEL_81;
              v54 = v6->fields._size;
              v4 = (const MethodInfo *)(unsigned int)Instance;
              if ( (unsigned int)v54 >= v52->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v6,
                  Instance,
                  *(const MethodInfo_34E0810 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
              }
              else
              {
                v6->fields._size = v54 + 1;
                v52->m_Items[v54 + 1] = Instance;
              }
            }
          }
        }
      }
      LODWORD(v40) = *(_DWORD *)(v41 + 24);
      if ( (__int64)++v42 >= (int)v40 )
        return v6;
    }
LABEL_80:
    sub_1B88814(Instance, v4);
  }
  return v6;
}


UserServantEntity_array *__fastcall UserServantMaster__GetCombineMaterialList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x27
  int64_t v6; // x20
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v8; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v9; // x26
  __int64 *v10; // x21
  int32_t v11; // w24
  int64_t v12; // x25
  __int64 methodPtr_low; // x10
  __int128 v14; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v15; // x0
  const MethodInfo_311D934 **v16; // x22
  Il2CppObject *v17; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v18; // x20
  __int64 v19; // x26
  __int64 v20; // x27
  int32_t v21; // w1
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_object__o *v30; // [xsp+0h] [xbp-B0h]
  int64_t v31; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4A5C006 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5C006 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_31;
  v6 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v10 = &Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__;
    v11 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v11,
                            (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v12 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v14 = *(_OWORD *)(Instance + 64);
          v15 = *v9;
          *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(v12 + 48);
          *(_OWORD *)&v33.fields.fakeValue = v14;
          if ( !v15->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v15);
          v32 = v33;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v32, 0LL);
          if ( Instance == v6 && (*(_BYTE *)(v12 + 300) & 4) == 0 )
          {
            v30 = v8;
            v31 = v6;
            v16 = (const MethodInfo_311D934 **)v10;
            v17 = MasterData_object;
            v18 = v9;
            v20 = *(_QWORD *)(v12 + 80);
            v19 = *(_QWORD *)(v12 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v34.fields.currentCryptoKey = v20;
            *(_QWORD *)&v34.fields.fakeValue = v19;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v34, 0LL);
            if ( !v17 )
              break;
            MasterData_object = v17;
            v21 = Instance;
            v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)v17;
            v10 = (__int64 *)v16;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(v22, v21, *v16);
            if ( !Instance )
              break;
            v9 = v18;
            Instance = ServantEntity__get_IsCombineMaterial((ServantEntity_o *)Instance, 0LL);
            v8 = v30;
            v6 = v31;
            if ( (Instance & 1) != 0 && (*(_BYTE *)(v12 + 300) & 0x11) == 0 )
            {
              if ( !v30 )
                break;
              items = v30->fields._items;
              v26 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v30->fields._version;
              if ( !items )
                break;
              size = v30->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v30,
                  (Il2CppObject *)v12,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
              }
              else
              {
                v28 = &items->obj.klass + size;
                v30->fields._size = size + 1;
                v28[4] = (Il2CppClass *)v12;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 4), v12, v23, v24);
              }
            }
          }
        }
      }
      if ( Count == ++v11 )
        goto LABEL_29;
    }
LABEL_31:
    sub_1B8880C(Instance, v4);
  }
LABEL_29:
  if ( !v8 )
    goto LABEL_31;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__GetEntities(
        UserServantMaster_o *this,
        System_Int64_array *userServantIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v5; // x21

  if ( (byte_4A5C00B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor___76036712);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    byte_4A5C00B = 1;
  }
  if ( userServantIds )
  {
    v5 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_55464252(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)userServantIds,
      (const MethodInfo_34E513C *)Method_System_Collections_Generic_List_long___ctor___76036712);
  }
  else
  {
    v5 = 0LL;
  }
  return UserServantMaster__GetEntities_40269172(this, v5, method);
}


UserServantEntity_array *__fastcall UserServantMaster__GetEntities_40269172(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  Il2CppObject *v18; // x0
  Il2CppObject *v19; // x22
  __int64 methodPtr_low; // x9
  Il2CppObject v21; // q0
  int64_t v22; // x1
  _BOOL8 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-80h]

  if ( (byte_4A5C00C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5C00C = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( userServantIds && userServantIds->fields._size >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_43;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   list,
                   (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_1B8880C(0LL, v8);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v11;
          p_offset += 4;
          if ( !v11 )
            goto LABEL_11;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_11:
        p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v14 = Enumerator->klass;
      v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v16 = &v14->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v15;
          v16 += 4;
          if ( !v15 )
            goto LABEL_18;
        }
        v17 = (__int64)&v14->vtable[*v16].method;
      }
      else
      {
LABEL_18:
        v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v18 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                              Enumerator,
                              *(_QWORD *)(v17 + 8));
      v19 = v18;
      if ( v18 )
      {
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v18->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (UserServantEntity_c *)v18->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantEntity_TypeInfo )
        {
          sub_1B88ACC(v18);
LABEL_41:
          sub_1B8880C(v23, v24);
        }
        v21 = v18[2];
        *(Il2CppObject *)&v37.fields.currentCryptoKey = v18[1];
        *(Il2CppObject *)&v37.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v36 = v37;
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v36, 0LL);
        v23 = System_Collections_Generic_List_long___Contains(
                userServantIds,
                v22,
                (const MethodInfo_34E5BE0 *)Method_System_Collections_Generic_List_long__Contains__);
        if ( v23 )
        {
          if ( !v5 )
            goto LABEL_41;
          items = v5->fields._items;
          v28 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            sub_1B8880C(v23, v24);
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v19,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v30[4] = (Il2CppClass *)v19;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v19, v25, v26);
          }
        }
      }
    }
    v31 = Enumerator->klass;
    v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_35;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_35:
      v34 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                                               Enumerator,
                                                               *(_QWORD *)(v34 + 8));
  }
  if ( !v5 )
LABEL_43:
    sub_1B8880C(list, v7);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


int32_t __fastcall UserServantMaster__GetHaveServantSkillLevelMax(
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
  System_Object_array *v12; // x20
  System_Comparison_T__o *v13; // x21
  __int64 v14; // x0
  const MethodInfo *v15; // x2

  if ( (byte_4A5C007 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_FindAll_UserServantEntity___);
    sub_1B885B0(&Method_System_Array_Sort_UserServantEntity___);
    sub_1B885B0(&System_Comparison_UserServantEntity__TypeInfo);
    sub_1B885B0(&System_Predicate_UserServantEntity__TypeInfo);
    sub_1B885B0(&Method_UserServantMaster___c__DisplayClass31_0__GetHaveServantSkillLevelMax_b__0__);
    sub_1B885B0(&Method_UserServantMaster___c__DisplayClass31_0__GetHaveServantSkillLevelMax_b__1__);
    sub_1B885B0(&UserServantMaster___c__DisplayClass31_0_TypeInfo);
    byte_4A5C007 = 1;
  }
  v7 = sub_1B887FC(UserServantMaster___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_10;
  *(_DWORD *)(v7 + 16) = svtId;
  *(_DWORD *)(v7 + 20) = skillIdx;
  AllList = (System_Object_array *)UserServantMaster__getAllList(this, v9);
  v11 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_UserServantEntity__TypeInfo);
  System_Predicate_object____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_UserServantMaster___c__DisplayClass31_0__GetHaveServantSkillLevelMax_b__0__,
    0LL);
  All_object = (UserServantEntity_o *)System_Array__FindAll_object_(
                                        AllList,
                                        (System_Predicate_T__o *)v11,
                                        (const MethodInfo_2F789CC *)Method_System_Array_FindAll_UserServantEntity___);
  if ( !All_object )
    goto LABEL_10;
  v12 = (System_Object_array *)All_object;
  if ( All_object->fields.id.fields.hiddenValue )
  {
    v13 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_object____ctor(
      v13,
      (Il2CppObject *)v7,
      Method_UserServantMaster___c__DisplayClass31_0__GetHaveServantSkillLevelMax_b__1__,
      0LL);
    System_Array__Sort_object__48551928(
      v12,
      v13,
      (const MethodInfo_2E4D7F8 *)Method_System_Array_Sort_UserServantEntity___);
    if ( !v12->max_length )
      sub_1B88814(v14, v9);
    All_object = (UserServantEntity_o *)v12->m_Items[0];
    if ( All_object )
      return UserServantEntity__getSkillLevel(All_object, *(_DWORD *)(v7 + 20), v15);
LABEL_10:
    sub_1B8880C(All_object, v9);
  }
  return 0;
}


int32_t __fastcall UserServantMaster__GetMaxTreasureDeviceLevel(
        UserServantMaster_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v8; // x1
  UserServantEntity_array *AllList; // x21
  __int64 v10; // x8
  int32_t v11; // w22
  unsigned __int64 i; // x25
  UserServantEntity_o *v13; // x28
  __int64 v14; // x23
  __int64 v15; // x24
  int32_t treasureDeviceLv1; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4A5BFFE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFFE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___),
        AllList = UserServantMaster__getAllList(this, v8),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL
    || (Instance = (Il2CppObject *)UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL),
        !AllList) )
  {
LABEL_21:
    sub_1B8880C(Instance, v6);
  }
  v10 = *(_QWORD *)&AllList->max_length;
  v11 = (unsigned __int8)Instance & 1;
  if ( (int)v10 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v10; ++i )
    {
      if ( i >= (unsigned int)v10 )
        sub_1B88814(Instance, v6);
      v13 = AllList->m_Items[i];
      if ( v13 )
      {
        v15 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
        v14 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v18.fields.currentCryptoKey = v15;
        *(_QWORD *)&v18.fields.fakeValue = v14;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v18, 0LL);
        if ( !MasterData_object )
          goto LABEL_21;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_21;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                     (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Instance[2],
                                     0LL);
        if ( (_DWORD)Instance == servantId )
        {
          treasureDeviceLv1 = v13->fields.treasureDeviceLv1;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          Instance = (Il2CppObject *)System_Math__Max_62525680(v11, treasureDeviceLv1, 0LL);
          v11 = (int)Instance;
        }
      }
      LODWORD(v10) = AllList->max_length;
    }
  }
  return v11;
}


int32_t __fastcall UserServantMaster__GetServantHavingCount(
        UserServantMaster_o *this,
        int32_t servantId,
        bool isCheckPresentBox,
        const MethodInfo *method)
{
  UserServantEntity_array *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v10; // x1
  __int64 v11; // x8
  UserServantEntity_array *v12; // x23
  int32_t v13; // w21
  unsigned __int64 v14; // x27
  UserServantEntity_o *v15; // x8
  __int64 v16; // x24
  __int64 v17; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4A5BFFC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFFC = 1;
  }
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = UserServantMaster__getAllList(this, v10);
  if ( !Instance )
    goto LABEL_23;
  v11 = *(_QWORD *)&Instance->max_length;
  v12 = Instance;
  if ( (int)v11 < 1 )
  {
    v13 = 0;
    if ( !isCheckPresentBox )
      return v13;
    goto LABEL_19;
  }
  v13 = 0;
  v14 = 0LL;
  do
  {
    if ( v14 >= (unsigned int)v11 )
      sub_1B88814(Instance, v8);
    v15 = v12->m_Items[v14];
    if ( v15 )
    {
      v17 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
      v16 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v19.fields.currentCryptoKey = v17;
      *(_QWORD *)&v19.fields.fakeValue = v16;
      Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                              v19,
                                              0LL);
      if ( !MasterData_object )
        goto LABEL_23;
      Instance = (UserServantEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                              (int32_t)Instance,
                                              (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_23;
      Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance->m_Items,
                                              0LL);
      if ( (_DWORD)Instance == servantId )
        ++v13;
    }
    LODWORD(v11) = v12->max_length;
    ++v14;
  }
  while ( (__int64)v14 < (int)v11 );
  if ( isCheckPresentBox )
  {
LABEL_19:
    Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
      if ( Instance )
      {
        v13 += UserPresentBoxMaster__GetCount((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL);
        return v13;
      }
    }
LABEL_23:
    sub_1B8880C(Instance, v8);
  }
  return v13;
}


int32_t __fastcall UserServantMaster__GetServantHavingTdLvCount(
        UserServantMaster_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  UserServantEntity_array *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v8; // x1
  __int64 v9; // x8
  UserServantEntity_array *v10; // x21
  int v11; // w25
  unsigned __int64 v12; // x26
  UserServantEntity_o *v13; // x24
  __int64 v14; // x22
  __int64 v15; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4A5BFFD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BFFD = 1;
  }
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = UserServantMaster__getAllList(this, v8);
  if ( !Instance )
    goto LABEL_21;
  v9 = *(_QWORD *)&Instance->max_length;
  v10 = Instance;
  if ( (int)v9 >= 1 )
  {
    v11 = 0;
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v9 )
        sub_1B88814(Instance, v6);
      v13 = v10->m_Items[v12];
      if ( v13 )
      {
        v15 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
        v14 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v17.fields.currentCryptoKey = v15;
        *(_QWORD *)&v17.fields.fakeValue = v14;
        Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                v17,
                                                0LL);
        if ( !MasterData_object )
          goto LABEL_21;
        Instance = (UserServantEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                (int32_t)Instance,
                                                (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_21;
        Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance->m_Items,
                                                0LL);
        if ( (_DWORD)Instance == servantId )
          v11 += v13->fields.treasureDeviceLv1;
      }
      LODWORD(v9) = v10->max_length;
      if ( (__int64)++v12 >= (int)v9 )
        goto LABEL_18;
    }
  }
  v11 = 0;
LABEL_18:
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL )
  {
LABEL_21:
    sub_1B8880C(Instance, v6);
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
  Il2CppObject *MasterData_object; // x22
  int64_t UserId; // x23
  const MethodInfo *v9; // x1
  UserServantEntity_array *AllList; // x0
  UserServantMaster___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  System_Func_object__bool__o *_9__34_0; // x21
  Il2CppObject *v14; // x24
  struct UserServantMaster___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  DataManager_c *klass; // x8
  DataManager_o *v19; // x19
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x19
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x24
  __int128 v35; // q0
  __int64 v36; // x25
  __int64 v37; // x26
  __int64 v38; // x0
  Il2CppObject *Entity; // x0
  __int64 v40; // x1
  Il2CppObject *v41; // x25
  __int64 v42; // x24
  __int64 v43; // x26
  int32_t v44; // w0
  int v45; // w8
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  int32_t v51; // [xsp+Ch] [xbp-A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4A5C009 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_1B885B0(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__34_0__);
    sub_1B885B0(&UserServantMaster___c_TypeInfo);
    byte_4A5C009 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  AllList = UserServantMaster__getAllList(this, v9);
  v11 = UserServantMaster___c_TypeInfo;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)AllList;
  if ( !UserServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantMaster___c_TypeInfo);
    v11 = UserServantMaster___c_TypeInfo;
  }
  _9__34_0 = (System_Func_object__bool__o *)v11->static_fields->__9__34_0;
  if ( !_9__34_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = UserServantMaster___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__34_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_UserServantEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__34_0,
      v14,
      Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__34_0__,
      0LL);
    static_fields = UserServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = (struct System_Func_UserServantEntity__bool__o *)_9__34_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__34_0, (int32_t)_9__34_0, v16, v17);
  }
  Instance = (DataManager_o *)System_Linq_Enumerable__Where_object_(
                                v12,
                                (System_Func_TSource__bool__o *)_9__34_0,
                                (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  if ( !Instance )
LABEL_58:
    sub_1B8880C(Instance, v6);
  klass = Instance->klass;
  v19 = Instance;
  v20 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_UserServantEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_17;
    }
    v22 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v22 = sub_1BDA590(Instance, System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, 0LL);
  }
  v24 = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
  if ( !v24 )
    sub_1B8880C(0LL, v23);
  v51 = 0;
  while ( 1 )
  {
    v25 = *(_QWORD *)v24;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_25;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_25:
      v28 = sub_1BDA590(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
      break;
    v29 = *(_QWORD *)v24;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v31 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_32;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_32:
      v32 = sub_1BDA590(v24, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL);
    }
    v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
    v34 = v33;
    if ( v33 )
    {
      v35 = *(_OWORD *)(v33 + 64);
      *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)(v33 + 48);
      *(_OWORD *)&v53.fields.fakeValue = v35;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v52 = v53;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v52, 0LL) == UserId
        && (*(_BYTE *)(v34 + 300) & 4) == 0 )
      {
        v37 = *(_QWORD *)(v34 + 80);
        v36 = *(_QWORD *)(v34 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v54.fields.currentCryptoKey = v37;
        *(_QWORD *)&v54.fields.fakeValue = v36;
        v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v54, 0LL);
        if ( !MasterData_object )
          sub_1B8880C(v38, (unsigned int)v38);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v38,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v41 = Entity;
        if ( !Entity )
          sub_1B8880C(0LL, v40);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
               (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[2],
               0LL) == servantId )
        {
          v43 = *(_QWORD *)(v34 + 96);
          v42 = *(_QWORD *)(v34 + 104);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v55.fields.currentCryptoKey = v43;
          *(_QWORD *)&v55.fields.fakeValue = v42;
          v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v55, 0LL);
          v45 = v51;
          if ( v44 == LODWORD(v41[5].monitor) )
            v45 = v51 + 1;
          v51 = v45;
        }
      }
    }
  }
  v46 = *(_QWORD *)v24;
  v47 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
  {
    v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_53;
    }
    v49 = v46 + 16LL * *v48 + 312;
  }
  else
  {
LABEL_53:
    v49 = sub_1BDA590(v24, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v49)(v24, *(_QWORD *)(v49 + 8));
  return v51;
}


int32_t __fastcall UserServantMaster__GetSvtEquipFriendShip(UserServantMaster_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v6; // x21
  int32_t Count; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v8; // x26
  int32_t v9; // w23
  int32_t v10; // w22
  int32_t v11; // w24
  Il2CppObject *Item; // x0
  Il2CppObject *v13; // x25
  __int64 methodPtr_low; // x10
  Il2CppObject v15; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v16; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v17; // x29
  void *monitor; // x25
  Il2CppClass *klass; // x26
  Il2CppObject *Entity; // x0
  ServantEntity_o *v21; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4A5C00A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5C00A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_27;
  v6 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v8 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v9 = Count;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v11,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v13 = Item;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantEntity_TypeInfo )
        {
          v15 = Item[4];
          *(Il2CppObject *)&v24.fields.currentCryptoKey = Item[3];
          *(Il2CppObject *)&v24.fields.fakeValue = v15;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v23 = v24;
          if ( (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v23, 0LL) == v6
            && (BYTE4(v13[18].monitor) & 4) == 0 )
          {
            v16 = *v8;
            v17 = v8;
            klass = v13[5].klass;
            monitor = v13[5].monitor;
            if ( !v16->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v16);
            *(_QWORD *)&v25.fields.currentCryptoKey = klass;
            *(_QWORD *)&v25.fields.fakeValue = monitor;
            v4 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v25, 0LL);
            Instance = (DataManager_o *)MasterData_object;
            if ( !MasterData_object )
              break;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       v4,
                       (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            v8 = v17;
            if ( Entity )
            {
              v21 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServantEquip(HIDWORD(Entity[5].klass), 0LL) )
                v10 += ServantEntity__get_IsFriendShipSvtEquip(v21, 0LL);
            }
          }
        }
      }
      if ( v9 == ++v11 )
        return v10;
    }
LABEL_27:
    sub_1B8880C(Instance, v4);
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
  Il2CppObject *v7; // x22
  __int64 v8; // x0
  const MethodInfo *v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *List; // x20
  System_Func_object__bool__o *v11; // x21
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A5BFED & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____76128728);
    sub_1B885B0(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1B885B0(&Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__);
    sub_1B885B0(&UserServantMaster___c__DisplayClass1_0_TypeInfo);
    byte_4A5BFED = 1;
  }
  v7 = (Il2CppObject *)sub_1B887FC(UserServantMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor(v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  v7[1].klass = (Il2CppClass *)svtId;
  List = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getList(this, v9);
  v11 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    v7,
    Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__,
    0LL);
  v12 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
          List,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____76128728);
  *svtEnt = (UserServantEntity_o *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)svtEnt, (int32_t)v12, v13, v14);
  return *svtEnt != 0LL;
}


bool __fastcall UserServantMaster__TryGetEntityListBySvtId(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  Il2CppObject *v23; // x24
  __int64 methodPtr_low; // x10
  void *monitor; // x25
  Il2CppClass *v26; // x26
  __int64 v27; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_Collections_ObjectModel_Collection_T__c *v41; // x8
  System_Collections_ObjectModel_Collection_T__o *v42; // x22
  unsigned __int64 v43; // x19
  Il2CppObject *v44; // x23
  void *v45; // x24
  Il2CppClass *v46; // x25
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass **v50; // x0
  ServantStatusBattleListViewItem_o *v52; // [xsp+0h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4A5C00D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantStorageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5C00D = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_59;
  v52 = (ServantStatusBattleListViewItem_o *)userServantList;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                            Enumerator,
                            *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21
      || (methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v21->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (UserServantEntity_c *)v21->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantEntity_TypeInfo )
    {
      sub_1B8880C(v21, v22);
    }
    v26 = v21[5].klass;
    monitor = v21[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v54.fields.currentCryptoKey = v26;
    *(_QWORD *)&v54.fields.fakeValue = monitor;
    v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v54, 0LL);
    if ( (_DWORD)v27 == svtId )
    {
      if ( !v8 )
        sub_1B8880C(v27, v28);
      items = v8->fields._items;
      v32 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++v8->fields._version;
      if ( !items )
        sub_1B8880C(v27, v28);
      size = v8->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          v23,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v34[4] = (Il2CppClass *)v23;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v23, v29, v30);
      }
    }
  }
  v35 = Enumerator->klass;
  v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_33;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_33:
    v38 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  if ( isIncludeStorage )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)UserServantStorageMaster__getList(
                                                                 (UserServantStorageMaster_o *)list,
                                                                 v9);
      if ( list )
      {
        v41 = list[1].klass;
        v42 = list;
        if ( (int)v41 >= 1 )
        {
          v43 = 0LL;
          while ( 1 )
          {
            if ( v43 >= (unsigned int)v41 )
              sub_1B88814(list, v9);
            v44 = (Il2CppObject *)*((_QWORD *)&v42[1].monitor + v43);
            if ( v44 )
            {
              v46 = v44[5].klass;
              v45 = v44[5].monitor;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v55.fields.currentCryptoKey = v46;
              *(_QWORD *)&v55.fields.fakeValue = v45;
              list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                         v55,
                                                                         0LL);
              if ( (_DWORD)list == svtId )
              {
                if ( !v8 )
                  goto LABEL_59;
                v47 = v8->fields._items;
                v48 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v8->fields._version;
                if ( !v47 )
                  goto LABEL_59;
                v49 = v8->fields._size;
                if ( (unsigned int)v49 >= v47->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v8,
                    v44,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
                }
                else
                {
                  v50 = &v47->obj.klass + v49;
                  v8->fields._size = v49 + 1;
                  v50[4] = (Il2CppClass *)v44;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v50 + 4), (int32_t)v44, v39, v40);
                }
              }
            }
            LODWORD(v41) = v42[1].klass;
            if ( (__int64)++v43 >= (int)v41 )
              goto LABEL_53;
          }
        }
        goto LABEL_53;
      }
    }
LABEL_59:
    sub_1B8880C(list, v9);
  }
LABEL_53:
  v52->klass = (ServantStatusBattleListViewItem_c *)v8;
  sub_1B88554(v52, (int32_t)v8, v39, v40);
  if ( !v52->klass )
    goto LABEL_59;
  return SLODWORD(v52->klass->_1.namespaze) > 0;
}


bool __fastcall UserServantMaster__TryGetEntitySvtStorageListBySvtId(
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
  __int64 v11; // x8
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

  if ( (byte_4A5C00E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantStorageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C00E = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
  if ( !Master_object )
    goto LABEL_23;
  Master_object = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Master_object, v8);
  if ( !Master_object )
    goto LABEL_23;
  v11 = *(_QWORD *)&Master_object->max_length;
  v12 = Master_object;
  if ( (int)v11 >= 1 )
  {
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)v11 )
        sub_1B88814(Master_object, v8);
      v14 = (Il2CppObject *)v12->m_Items[v13];
      if ( v14 )
      {
        klass = v14[5].klass;
        monitor = v14[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v22.fields.currentCryptoKey = klass;
        *(_QWORD *)&v22.fields.fakeValue = monitor;
        Master_object = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                     v22,
                                                     0LL);
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
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              v14,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v14;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v14, v9, v10);
          }
        }
      }
      LODWORD(v11) = v12->max_length;
    }
    while ( (__int64)++v13 < (int)v11 );
  }
  *userStorageServantList = (System_Collections_Generic_List_UserServantEntity__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)userStorageServantList, (int32_t)v6, v9, v10);
  if ( !*userStorageServantList )
LABEL_23:
    sub_1B8880C(Master_object, v8);
  return (*userStorageServantList)->fields._size > 0;
}


void __fastcall UserServantMaster__continueDeviceUserServant(UserServantMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  int64_t v4; // x1
  int64_t list; // x0
  int32_t Count; // w21
  int64_t v7; // x22
  int32_t v8; // w23
  int64_t v9; // x24
  __int64 methodPtr_low; // x10
  __int128 v11; // q0
  __int128 v12; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  System_Int64_array *v16; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+40h] [xbp-80h]

  if ( (byte_4A5C001 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    sub_1B885B0(&UserServantNewManager_TypeInfo);
    byte_4A5C001 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v8,
                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v9 = list;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v11 = *(_OWORD *)(list + 64);
          *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)(list + 48);
          *(_OWORD *)&v19.fields.fakeValue = v11;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v18 = v19;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v18, 0LL);
          if ( list == v7 && (*(_BYTE *)(v9 + 300) & 4) == 0 )
          {
            v12 = *(_OWORD *)(v9 + 32);
            *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)(v9 + 16);
            *(_OWORD *)&v19.fields.fakeValue = v12;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v17 = v19;
            list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v17, 0LL);
            if ( !v3 )
              break;
            items = v3->fields._items;
            v14 = Method_System_Collections_Generic_List_long__Add__;
            ++v3->fields._version;
            if ( !items )
              break;
            size = v3->fields._size;
            v4 = list;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_long___AddWithResize(
                v3,
                list,
                *(const MethodInfo_34E5868 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
        goto LABEL_24;
    }
LABEL_28:
    sub_1B8880C(list, v4);
  }
LABEL_24:
  if ( !v3 )
    goto LABEL_28;
  v16 = System_Collections_Generic_List_long___ToArray(
          v3,
          (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  UserServantNewManager__SetOld_40569840(v16, 0LL);
}


UserServantEntity_array *__fastcall UserServantMaster__getAllList(UserServantMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *List; // x20
  System_Collections_Generic_List_object__o *v4; // x19
  UserServantEntity_array *Instance; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4A5C003 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor___76052560);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C003 = 1;
  }
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, method);
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_55562536(
    v4,
    List,
    (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76052560);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL
    || (Instance = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, v6), !v4) )
  {
    sub_1B8880C(Instance, v6);
  }
  System_Collections_Generic_List_object___AddRange(
    v4,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v4,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getCombineMaterialList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  int64_t v5; // x21
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w24
  int64_t v9; // x25
  __int64 methodPtr_low; // x10
  __int128 v11; // q0
  __int64 v12; // x26
  __int64 v13; // x27
  ServantEntity_o *v14; // x26
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4A5C002 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5C002 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_31;
  v5 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v8,
                            (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v9 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v11 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v24.fields.fakeValue = v11;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v23 = v24;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v23, 0LL);
          if ( Instance == v5 && (*(_BYTE *)(v9 + 300) & 4) == 0 )
          {
            v13 = *(_QWORD *)(v9 + 80);
            v12 = *(_QWORD *)(v9 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v25.fields.currentCryptoKey = v13;
            *(_QWORD *)&v25.fields.fakeValue = v12;
            v4 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v25, 0LL);
            Instance = (int64_t)MasterData_object;
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  MasterData_object,
                                  v4,
                                  (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v14 = (ServantEntity_o *)Instance;
            Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = ServantEntity__get_IsServantMaterialTd(v14, 0LL);
              if ( (Instance & 1) == 0 )
              {
                if ( !v7 )
                  break;
                items = v7->fields._items;
                v18 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v7->fields._version;
                if ( !items )
                  break;
                size = v7->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v7,
                    (Il2CppObject *)v9,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
                }
                else
                {
                  v20 = &items->obj.klass + size;
                  v7->fields._size = size + 1;
                  v20[4] = (Il2CppClass *)v9;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), v9, v15, v16);
                }
              }
            }
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_29;
    }
LABEL_31:
    sub_1B8880C(Instance, v4);
  }
LABEL_29:
  if ( !v7 )
    goto LABEL_31;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v7,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


int32_t __fastcall UserServantMaster__getCount(
        UserServantMaster_o *this,
        int32_t *servantSum,
        int32_t *servantEquipSum,
        bool friendShipSvtEqExclude,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x23
  int64_t v12; // x24
  int32_t Count; // w0
  int32_t v14; // w25
  int32_t v15; // w26
  int32_t v16; // w27
  Il2CppObject *Item; // x0
  Il2CppObject *v18; // x28
  __int64 methodPtr_low; // x10
  Il2CppObject v20; // q0
  void *monitor; // x28
  Il2CppClass *klass; // x29
  Il2CppObject *Entity; // x0
  int32_t klass_high; // w29
  ServantEntity_o *v25; // x28
  int32_t *v26; // x9
  int32_t *v28; // [xsp+8h] [xbp-B8h]
  bool v29; // [xsp+14h] [xbp-ACh]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4A5BFEE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5BFEE = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
LABEL_32:
    sub_1B8880C(Instance, v10);
  v12 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v28 = servantEquipSum;
    v29 = friendShipSvtEqExclude;
    v14 = Count;
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_32;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v16,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v18 = Item;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantEntity_TypeInfo )
        {
          v20 = Item[4];
          *(Il2CppObject *)&v31.fields.currentCryptoKey = Item[3];
          *(Il2CppObject *)&v31.fields.fakeValue = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v30 = v31;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v30, 0LL) == v12
            && (BYTE4(v18[18].monitor) & 4) == 0 )
          {
            klass = v18[5].klass;
            monitor = v18[5].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v32.fields.currentCryptoKey = klass;
            *(_QWORD *)&v32.fields.fakeValue = monitor;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v32, 0LL);
            if ( !MasterData_object )
              goto LABEL_32;
            ++v15;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       Instance,
                       (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              klass_high = HIDWORD(Entity[5].klass);
              v25 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServant(klass_high, 0LL) )
              {
                v26 = servantSum;
              }
              else
              {
                if ( !SvtType__IsKeepServantEquip(klass_high, 0LL)
                  || v29 && ServantEntity__get_IsFriendShipSvtEquip(v25, 0LL) )
                {
                  goto LABEL_28;
                }
                v26 = v28;
              }
              ++*v26;
            }
          }
        }
      }
LABEL_28:
      if ( v14 == ++v16 )
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
  int64_t Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x22
  int64_t v10; // x23
  int32_t Count; // w0
  int32_t v12; // w24
  int32_t v13; // w25
  int32_t v14; // w26
  Il2CppObject *Item; // x0
  Il2CppObject *v16; // x27
  __int64 methodPtr_low; // x10
  Il2CppObject v18; // q0
  void *monitor; // x27
  Il2CppClass *klass; // x28
  Il2CppObject *Entity; // x0
  int32_t klass_high; // w27
  int32_t *v23; // x9
  int32_t *v25; // [xsp+0h] [xbp-B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4A5BFEF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5BFEF = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
LABEL_30:
    sub_1B8880C(Instance, v8);
  v10 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v25 = servantEquipSum;
    v12 = Count;
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_30;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v14,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v16 = Item;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantEntity_TypeInfo )
        {
          v18 = Item[4];
          *(Il2CppObject *)&v27.fields.currentCryptoKey = Item[3];
          *(Il2CppObject *)&v27.fields.fakeValue = v18;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v26 = v27;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v26, 0LL) == v10
            && (BYTE4(v16[18].monitor) & 4) == 0 )
          {
            klass = v16[5].klass;
            monitor = v16[5].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v28.fields.currentCryptoKey = klass;
            *(_QWORD *)&v28.fields.fakeValue = monitor;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v28, 0LL);
            if ( !MasterData_object )
              goto LABEL_30;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       Instance,
                       (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              klass_high = HIDWORD(Entity[5].klass);
              if ( SvtType__IsOrganization(klass_high, 0LL) )
              {
                v23 = servantSum;
LABEL_25:
                ++v13;
                ++*v23;
                goto LABEL_26;
              }
              if ( SvtType__IsServantEquip(klass_high, 0LL) )
              {
                v23 = v25;
                goto LABEL_25;
              }
            }
          }
        }
      }
LABEL_26:
      if ( v12 == ++v14 )
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  Il2CppObject *Item; // x0
  UserServantEntity_o *v10; // x23
  __int64 methodPtr_low; // x10
  void *monitor; // x24
  Il2CppClass *klass; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4A5BFFF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5BFFF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v10 = (UserServantEntity_o *)Item;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantEntity_TypeInfo )
        {
          klass = Item[5].klass;
          monitor = Item[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v15.fields.currentCryptoKey = klass;
          *(_QWORD *)&v15.fields.fakeValue = monitor;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL) == heroineId
            && UserServantEntity__IsHeroine(v10, *(const MethodInfo **)&heroineId) )
          {
            return v10;
          }
        }
      }
      if ( v7 == ++v8 )
        return 0LL;
    }
LABEL_17:
    sub_1B8880C(list, *(_QWORD *)&heroineId);
  }
  return 0LL;
}


UserServantEntity_array *__fastcall UserServantMaster__getKeepServantEquipList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t v6; // x20
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v8; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v9; // x26
  int32_t v10; // w24
  int64_t v11; // x25
  __int64 methodPtr_low; // x10
  __int128 v13; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v14; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v15; // x20
  __int64 v16; // x26
  __int64 v17; // x27
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  int64_t v25; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4A5BFF8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5BFF8 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v6 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v10 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v10,
                            (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v11 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v13 = *(_OWORD *)(Instance + 64);
          v14 = *v9;
          *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v11 + 48);
          *(_OWORD *)&v27.fields.fakeValue = v13;
          if ( !v14->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v14);
          v26 = v27;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v26, 0LL);
          if ( Instance == v6 && (*(_BYTE *)(v11 + 300) & 4) == 0 )
          {
            v25 = v6;
            v15 = v9;
            v17 = *(_QWORD *)(v11 + 80);
            v16 = *(_QWORD *)(v11 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v28.fields.currentCryptoKey = v17;
            *(_QWORD *)&v28.fields.fakeValue = v16;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v28, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v9 = v15;
            Instance = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)Instance, 0LL);
            v6 = v25;
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
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  (Il2CppObject *)v11,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
              }
              else
              {
                v23 = &items->obj.klass + size;
                v8->fields._size = size + 1;
                v23[4] = (Il2CppClass *)v11;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 4), v11, v18, v19);
              }
            }
          }
        }
      }
      if ( Count == ++v10 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1B8880C(Instance, v4);
  }
LABEL_28:
  if ( !v8 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getKeepServantList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t v6; // x20
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v8; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v9; // x26
  int32_t v10; // w24
  int64_t v11; // x25
  __int64 methodPtr_low; // x10
  __int128 v13; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v14; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v15; // x20
  __int64 v16; // x26
  __int64 v17; // x27
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  int64_t v25; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4A5BFF6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5BFF6 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v6 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v10 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v10,
                            (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v11 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v13 = *(_OWORD *)(Instance + 64);
          v14 = *v9;
          *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v11 + 48);
          *(_OWORD *)&v27.fields.fakeValue = v13;
          if ( !v14->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v14);
          v26 = v27;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v26, 0LL);
          if ( Instance == v6 && (*(_BYTE *)(v11 + 300) & 4) == 0 )
          {
            v25 = v6;
            v15 = v9;
            v17 = *(_QWORD *)(v11 + 80);
            v16 = *(_QWORD *)(v11 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v28.fields.currentCryptoKey = v17;
            *(_QWORD *)&v28.fields.fakeValue = v16;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v28, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v9 = v15;
            Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0LL);
            v6 = v25;
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
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  (Il2CppObject *)v11,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
              }
              else
              {
                v23 = &items->obj.klass + size;
                v8->fields._size = size + 1;
                v23[4] = (Il2CppClass *)v11;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 4), v11, v18, v19);
              }
            }
          }
        }
      }
      if ( Count == ++v10 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1B8880C(Instance, v4);
  }
LABEL_28:
  if ( !v8 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getList(UserServantMaster_o *this, const MethodInfo *method)
{
  int64_t UserId; // x1
  const MethodInfo *v4; // x2

  if ( (byte_4A5BFF0 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5BFF0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  return UserServantMaster__getList_40246056(this, UserId, v4);
}


UserServantEntity_array *__fastcall UserServantMaster__getList_40246056(
        UserServantMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v7; // x21
  int32_t v8; // w23
  int64_t v9; // x24
  __int64 methodPtr_low; // x10
  __int128 v11; // q0
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-80h]

  if ( (byte_4A5BFF1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5BFF1 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v9 = list;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v11 = *(_OWORD *)(list + 64);
          *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)(list + 48);
          *(_OWORD *)&v20.fields.fakeValue = v11;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v19 = v20;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v19, 0LL);
          if ( list == userId && (*(_BYTE *)(v9 + 300) & 4) == 0 )
          {
            if ( !v7 )
              break;
            items = v7->fields._items;
            v15 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v7->fields._version;
            if ( !items )
              break;
            size = v7->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                (Il2CppObject *)v9,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
            }
            else
            {
              v17 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v17[4] = (Il2CppClass *)v9;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), v9, v12, v13);
            }
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B8880C(list, userId);
  }
LABEL_20:
  if ( !v7 )
    goto LABEL_22;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v7,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getNoneCombineSvt(
        UserServantMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x27
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v9; // x22
  int32_t v10; // w24
  int64_t v11; // x25
  __int64 methodPtr_low; // x10
  __int128 v13; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x19
  __int64 v15; // x26
  __int64 v16; // x27
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  int64_t v24; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4A5C000 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5C000 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this->fields.list )
    goto LABEL_28;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v11 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v13 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v26.fields.fakeValue = v13;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v25 = v26;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v25, 0LL);
          if ( Instance == userId && (*(_BYTE *)(v11 + 300) & 4) == 0 )
          {
            v24 = userId;
            v14 = v7;
            v16 = *(_QWORD *)(v11 + 80);
            v15 = *(_QWORD *)(v11 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v27.fields.currentCryptoKey = v16;
            *(_QWORD *)&v27.fields.fakeValue = v15;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v27, 0LL);
            if ( !v14 )
              break;
            v7 = v14;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  v14,
                                  Instance,
                                  (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            userId = v24;
            if ( !Instance )
              break;
            if ( *(_DWORD *)(Instance + 84) != 3 )
            {
              if ( !v9 )
                break;
              items = v9->fields._items;
              v20 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v9->fields._version;
              if ( !items )
                break;
              size = v9->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v9,
                  (Il2CppObject *)v11,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
              }
              else
              {
                v22 = &items->obj.klass + size;
                v9->fields._size = size + 1;
                v22[4] = (Il2CppClass *)v11;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), v11, v17, v18);
              }
            }
          }
        }
      }
      if ( Count == ++v10 )
        goto LABEL_26;
    }
LABEL_28:
    sub_1B8880C(Instance, v6);
  }
LABEL_26:
  if ( !v9 )
    goto LABEL_28;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v9,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getNpUpServantList(
        UserServantMaster_o *this,
        UserServantEntity_o *usrSvtEnt,
        const MethodInfo *method)
{
  void *Instance; // x0
  Il2CppObject *klass; // x1
  Il2CppObject *MasterData_object; // x27
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t Count; // w23
  SvtMaterialTdMaster_o *v10; // x24
  __int64 v11; // x25
  __int64 v12; // x26
  System_Object_array *v13; // x24
  int32_t v14; // w25
  Il2CppObject *v15; // x27
  int32_t v16; // w2
  int32_t v17; // w3
  UserServantEntity_c *v18; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v20; // x10
  int32_t v21; // w1
  ServantStatusBattleListViewItem_o *v22; // x26
  System_Predicate_object__o *v23; // x28
  int32_t v24; // w2
  int32_t v25; // w3
  void *monitor; // x27
  Il2CppClass *v27; // x28
  int32_t v28; // w27
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  UserServantEntity_o *v34; // [xsp+0h] [xbp-70h]
  DataMasterBase_TMaster__TEntity__PKType__o *v35; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4A5BFFB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Exists_SvtMaterialTdEntity___);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&System_Predicate_SvtMaterialTdEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_UserServantMaster___c__DisplayClass15_0__getNpUpServantList_b__0__);
    sub_1B885B0(&UserServantMaster___c__DisplayClass15_0_TypeInfo);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5BFFB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_46;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
  if ( !usrSvtEnt )
    goto LABEL_46;
  v10 = (SvtMaterialTdMaster_o *)Instance;
  v34 = usrSvtEnt;
  v12 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v36.fields.currentCryptoKey = v12;
  *(_QWORD *)&v36.fields.fakeValue = v11;
  v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v36, 0LL);
  if ( !v10 )
    goto LABEL_46;
  Instance = SvtMaterialTdMaster__GetEntityList(v10, (int32_t)Instance, 0LL);
  if ( Count >= 1 )
  {
    v13 = (System_Object_array *)Instance;
    v14 = 0;
    do
    {
      v15 = (Il2CppObject *)sub_1B887FC(UserServantMaster___c__DisplayClass15_0_TypeInfo);
      System_Object___ctor(v15, 0LL);
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_46;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v14,
                   (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v15 )
        goto LABEL_46;
      if ( Instance )
      {
        v18 = UserServantEntity_TypeInfo;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low )
        {
          if ( *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
            v20 = (Il2CppClass *)Instance;
          else
            v20 = 0LL;
        }
        else
        {
          v20 = 0LL;
        }
        v15[1].klass = v20;
        v22 = (ServantStatusBattleListViewItem_o *)&v15[1];
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low )
        {
          if ( *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == v18 )
            v21 = (int)Instance;
          else
            v21 = 0;
        }
        else
        {
          v21 = 0;
        }
      }
      else
      {
        v21 = 0;
        v15[1].klass = 0LL;
        v22 = (ServantStatusBattleListViewItem_o *)&v15[1];
      }
      sub_1B88554(v22, v21, v16, v17);
      if ( v22->klass && (*(&v22->klass->_2.bitflags2 + 1) & 4) == 0 )
      {
        v23 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_SvtMaterialTdEntity__TypeInfo);
        System_Predicate_object____ctor(
          v23,
          v15,
          Method_UserServantMaster___c__DisplayClass15_0__getNpUpServantList_b__0__,
          0LL);
        Instance = (void *)System_Array__Exists_object_(
                             v13,
                             (System_Predicate_T__o *)v23,
                             (const MethodInfo_2F77FE4 *)Method_System_Array_Exists_SvtMaterialTdEntity___);
        klass = (Il2CppObject *)v22->klass;
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_46;
LABEL_39:
          items = v8->fields._items;
          v30 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_46;
          size = v8->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              klass,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v32[4] = (Il2CppClass *)klass;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 4), (int32_t)klass, v24, v25);
          }
          continue;
        }
        if ( !klass )
          goto LABEL_46;
        v27 = klass[5].klass;
        monitor = klass[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v37.fields.currentCryptoKey = v27;
        *(_QWORD *)&v37.fields.fakeValue = monitor;
        klass = (Il2CppObject *)(unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                v37,
                                                0LL);
        Instance = v35;
        if ( !v35 )
          goto LABEL_46;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v35,
                     (int32_t)klass,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_46;
        v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                *((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance + 2),
                0LL);
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v34->fields.svtId, 0LL);
        if ( v28 == (_DWORD)Instance )
        {
          if ( !v8 )
            goto LABEL_46;
          klass = (Il2CppObject *)v22->klass;
          goto LABEL_39;
        }
      }
    }
    while ( Count != ++v14 );
  }
  if ( !v8 )
LABEL_46:
    sub_1B8880C(Instance, klass);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getOrganizationList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t v6; // x20
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v8; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v9; // x26
  int32_t v10; // w24
  int64_t v11; // x25
  __int64 methodPtr_low; // x10
  __int128 v13; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v14; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v15; // x20
  __int64 v16; // x26
  __int64 v17; // x27
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  int64_t v25; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4A5BFF7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5BFF7 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v6 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v10 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v10,
                            (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v11 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v13 = *(_OWORD *)(Instance + 64);
          v14 = *v9;
          *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v11 + 48);
          *(_OWORD *)&v27.fields.fakeValue = v13;
          if ( !v14->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v14);
          v26 = v27;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v26, 0LL);
          if ( Instance == v6 && (*(_BYTE *)(v11 + 300) & 4) == 0 )
          {
            v25 = v6;
            v15 = v9;
            v17 = *(_QWORD *)(v11 + 80);
            v16 = *(_QWORD *)(v11 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v28.fields.currentCryptoKey = v17;
            *(_QWORD *)&v28.fields.fakeValue = v16;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v28, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v9 = v15;
            Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
            v6 = v25;
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
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  (Il2CppObject *)v11,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
              }
              else
              {
                v23 = &items->obj.klass + size;
                v8->fields._size = size + 1;
                v23[4] = (Il2CppClass *)v11;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 4), v11, v18, v19);
              }
            }
          }
        }
      }
      if ( Count == ++v10 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1B8880C(Instance, v4);
  }
LABEL_28:
  if ( !v8 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


int32_t __fastcall UserServantMaster__getSameSvtNpLvCache(
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
  Il2CppObject *MasterData_object; // x0
  __int64 v16; // x25
  __int64 v17; // x26
  SvtMaterialTdMaster_o *v18; // x24
  int32_t i; // w25
  Il2CppObject *v20; // x27
  int32_t v21; // w2
  int32_t v22; // w3
  UserServantEntity_c *v23; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v25; // x10
  int32_t v26; // w1
  ServantStatusBattleListViewItem_o *v27; // x26
  ServantStatusBattleListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q0
  int64_t v30; // x0
  __int128 v31; // q1
  int64_t v32; // x28
  System_Predicate_object__o *v33; // x28
  ServantStatusBattleListViewItem_c *v34; // x8
  Il2CppClass *parent; // x27
  Il2CppClass *declaringType; // x28
  int32_t v37; // w27
  struct System_Int32_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_int__object__o *v41; // x20
  __int64 v42; // x19
  __int64 v43; // x23
  System_Object_array *array; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_Dictionary_int__List_int___o **v46; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_List_int__o *v47; // [xsp+18h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+60h] [xbp-90h]
  Il2CppObject *value; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4A5BFFA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Exists_SvtMaterialTdEntity___);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&System_Predicate_SvtMaterialTdEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_UserServantMaster___c__DisplayClass14_0__getSameSvtNpLvCache_b__0__);
    sub_1B885B0(&UserServantMaster___c__DisplayClass14_0_TypeInfo);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5BFFA = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  value = (Il2CppObject *)v7;
  if ( !usrSvtEnt )
    goto LABEL_66;
  if ( (usrSvtEnt->fields.status & 2) != 0 )
    goto LABEL_12;
  v10 = *cachedUserServantNpLvDict;
  v12 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v52.fields.currentCryptoKey = v12;
  *(_QWORD *)&v52.fields.fakeValue = v11;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v52, 0LL);
  if ( !v10 )
    goto LABEL_66;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)v10,
          Instance,
          &value,
          (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
LABEL_12:
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      DataManager__GetMasterData_object_(
        (DataManager_o *)Instance,
        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = (int64_t)this->fields.list;
      if ( Instance )
      {
        Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
        v47 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v47,
          (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
          v17 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
          v16 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
          v18 = (SvtMaterialTdMaster_o *)MasterData_object;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v53.fields.currentCryptoKey = v17;
          *(_QWORD *)&v53.fields.fakeValue = v16;
          v46 = cachedUserServantNpLvDict;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v53, 0LL);
          if ( v18 )
          {
            Instance = (int64_t)SvtMaterialTdMaster__GetEntityList(v18, Instance, 0LL);
            array = (System_Object_array *)Instance;
            if ( Count >= 1 )
            {
              for ( i = 0; Count != i; ++i )
              {
                v20 = (Il2CppObject *)sub_1B887FC(UserServantMaster___c__DisplayClass14_0_TypeInfo);
                System_Object___ctor(v20, 0LL);
                Instance = (int64_t)this->fields.list;
                if ( !Instance )
                  goto LABEL_66;
                Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                      i,
                                      (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
                if ( !v20 )
                  goto LABEL_66;
                if ( Instance )
                {
                  v23 = UserServantEntity_TypeInfo;
                  methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
                  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low )
                  {
                    if ( *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
                      v25 = (Il2CppClass *)Instance;
                    else
                      v25 = 0LL;
                  }
                  else
                  {
                    v25 = 0LL;
                  }
                  v20[1].klass = v25;
                  v27 = (ServantStatusBattleListViewItem_o *)&v20[1];
                  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low )
                  {
                    if ( *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == v23 )
                      v26 = Instance;
                    else
                      v26 = 0;
                  }
                  else
                  {
                    v26 = 0;
                  }
                }
                else
                {
                  v26 = 0;
                  v20[1].klass = 0LL;
                  v27 = (ServantStatusBattleListViewItem_o *)&v20[1];
                }
                sub_1B88554(v27, v26, v21, v22);
                klass = v27->klass;
                if ( v27->klass && (*(&klass->_2.bitflags2 + 1) & 6) == 0 )
                {
                  byval_arg = klass->_1.byval_arg;
                  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
                  *(Il2CppType *)&v50.fields.fakeValue = byval_arg;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  v49 = v50;
                  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v49, 0LL);
                  v31 = *(_OWORD *)&usrSvtEnt->fields.id.fields.fakeValue;
                  v32 = v30;
                  *(_OWORD *)&v48.fields.currentCryptoKey = *(_OWORD *)&usrSvtEnt->fields.id.fields.currentCryptoKey;
                  *(_OWORD *)&v48.fields.fakeValue = v31;
                  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v48, 0LL);
                  if ( v32 != Instance )
                  {
                    Instance = UserServantEntity__IsMaterialTd(usrSvtEnt, v9);
                    if ( (Instance & 1) == 0 )
                    {
                      Instance = (int64_t)v27->klass;
                      if ( !v27->klass )
                        goto LABEL_66;
                      Instance = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Instance, v9);
                      if ( (Instance & 1) != 0 )
                      {
                        v33 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_SvtMaterialTdEntity__TypeInfo);
                        System_Predicate_object____ctor(
                          v33,
                          v20,
                          Method_UserServantMaster___c__DisplayClass14_0__getSameSvtNpLvCache_b__0__,
                          0LL);
                        Instance = System_Array__Exists_object_(
                                     array,
                                     (System_Predicate_T__o *)v33,
                                     (const MethodInfo_2F77FE4 *)Method_System_Array_Exists_SvtMaterialTdEntity___);
                        if ( (Instance & 1) == 0 )
                          continue;
                      }
                      else
                      {
                        v34 = v27->klass;
                        if ( !v27->klass )
                          goto LABEL_66;
                        declaringType = v34->_1.declaringType;
                        parent = v34->_1.parent;
                        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        *(_QWORD *)&v54.fields.currentCryptoKey = declaringType;
                        *(_QWORD *)&v54.fields.fakeValue = parent;
                        v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v54, 0LL);
                        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                     usrSvtEnt->fields.svtId,
                                     0LL);
                        if ( v37 != (_DWORD)Instance || (usrSvtEnt->fields.status & 2) != 0 )
                          continue;
                      }
                      if ( !v27->klass )
                        goto LABEL_66;
                      Instance = (int64_t)v47;
                      if ( !v47 )
                        goto LABEL_66;
                      v9 = (const MethodInfo *)*(unsigned int *)&v27->klass->_2.typeHierarchyDepth;
                      items = v47->fields._items;
                      v39 = Method_System_Collections_Generic_List_int__Add__;
                      ++v47->fields._version;
                      if ( !items )
                        goto LABEL_66;
                      size = v47->fields._size;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v47,
                          (int32_t)v9,
                          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v47->fields._size = size + 1;
                        items->m_Items[size + 1] = (int)v9;
                      }
                    }
                  }
                }
              }
            }
            if ( v47 )
            {
              if ( v47->fields._size < 1 )
                return 0;
              v13 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)v47, 0LL);
              if ( (usrSvtEnt->fields.status & 2) != 0 )
                return v13;
              v41 = (System_Collections_Generic_Dictionary_int__object__o *)*v46;
              v43 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
              v42 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v55.fields.currentCryptoKey = v43;
              *(_QWORD *)&v55.fields.fakeValue = v42;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v55, 0LL);
              if ( v41 )
              {
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  v41,
                  Instance,
                  (Il2CppObject *)v47,
                  (const MethodInfo_316D944 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
                return v13;
              }
            }
          }
        }
      }
    }
LABEL_66:
    sub_1B8880C(Instance, v9);
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
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *MasterData_object; // x19
  System_Collections_Generic_List_int__o *v6; // x20
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  _OWORD *v17; // x0
  _OWORD *v18; // x24
  __int64 methodPtr_low; // x9
  __int128 v20; // q0
  int64_t v21; // x25
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
  int32_t v36; // w29
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x8
  int64_t v42; // x22
  unsigned __int64 v43; // x21
  __int64 v44; // x26
  __int128 v45; // q0
  int64_t v46; // x23
  __int64 v47; // x23
  __int64 v48; // x24
  __int64 v49; // x23
  __int64 v50; // x24
  __int64 v51; // x23
  __int64 v52; // x24
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

  if ( (byte_4A5BFF3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5BFF3 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  v57 = (UserServantStorageMaster_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v6 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_82;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v7);
  v58 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_19;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_19:
      v16 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v17 = (_OWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                      Enumerator,
                      *(_QWORD *)(v16 + 8));
    v18 = v17;
    if ( v17 )
    {
      methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v17 + 304LL) < (unsigned int)methodPtr_low
        || *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * methodPtr_low - 8) != UserServantEntity_TypeInfo )
      {
        sub_1B88ACC(v17);
        goto LABEL_81;
      }
      v20 = v17[4];
      *(_OWORD *)&v61.fields.currentCryptoKey = v17[3];
      *(_OWORD *)&v61.fields.fakeValue = v20;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v60 = v61;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v60, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( v21 == NetworkManager__get_UserId(0LL) && (*((_BYTE *)v18 + 300) & 4) == 0 )
      {
        v23 = *((_QWORD *)v18 + 10);
        v22 = *((_QWORD *)v18 + 11);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v62.fields.currentCryptoKey = v23;
        *(_QWORD *)&v62.fields.fakeValue = v22;
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v62, 0LL);
        if ( !MasterData_object )
          sub_1B8880C(v24, (unsigned int)v24);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v24,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_1B8880C(0LL, v26);
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0LL) )
        {
          v28 = *((_QWORD *)v18 + 10);
          v27 = *((_QWORD *)v18 + 11);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v63.fields.currentCryptoKey = v28;
          *(_QWORD *)&v63.fields.fakeValue = v27;
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v63, 0LL);
          if ( !v6 )
            sub_1B8880C(v29, (unsigned int)v29);
          if ( !System_Collections_Generic_List_int___Contains(
                  v6,
                  v29,
                  (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            v31 = *((_QWORD *)v18 + 10);
            v30 = *((_QWORD *)v18 + 11);
            ++v58;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v64.fields.currentCryptoKey = v31;
            *(_QWORD *)&v64.fields.fakeValue = v30;
            v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v64, 0LL);
            items = v6->fields._items;
            v34 = Method_System_Collections_Generic_List_int__Add__;
            ++v6->fields._version;
            if ( !items )
              sub_1B8880C(v32, (unsigned int)v32);
            size = v6->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v6,
                v32,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            }
            else
            {
              v6->fields._size = size + 1;
              items->m_Items[size + 1] = v32;
            }
          }
        }
      }
    }
  }
  v36 = v58;
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_49;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_49:
    v40 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  Instance = (int64_t)v57;
  if ( !v57 || (Instance = (int64_t)UserServantStorageMaster__getList(v57, v4)) == 0 )
LABEL_82:
    sub_1B8880C(Instance, v4);
  v41 = *(_QWORD *)(Instance + 24);
  v42 = Instance;
  if ( (int)v41 >= 1 )
  {
    v43 = 0LL;
    while ( v43 < (unsigned int)v41 )
    {
      v44 = *(_QWORD *)(v42 + 32 + 8 * v43);
      if ( v44 )
      {
        v45 = *(_OWORD *)(v44 + 64);
        *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)(v44 + 48);
        *(_OWORD *)&v61.fields.fakeValue = v45;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v59 = v61;
        v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v59, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        if ( v46 == Instance && (*(_BYTE *)(v44 + 300) & 4) == 0 )
        {
          v48 = *(_QWORD *)(v44 + 80);
          v47 = *(_QWORD *)(v44 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v65.fields.currentCryptoKey = v48;
          *(_QWORD *)&v65.fields.fakeValue = v47;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v65, 0LL);
          if ( !MasterData_object )
            goto LABEL_82;
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                Instance,
                                (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_82;
          Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
          if ( (Instance & 1) != 0 )
          {
            v50 = *(_QWORD *)(v44 + 80);
            v49 = *(_QWORD *)(v44 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v66.fields.currentCryptoKey = v50;
            *(_QWORD *)&v66.fields.fakeValue = v49;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v66, 0LL);
            if ( !v6 )
              goto LABEL_82;
            Instance = System_Collections_Generic_List_int___Contains(
                         v6,
                         Instance,
                         (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
            if ( (Instance & 1) == 0 )
            {
              v52 = *(_QWORD *)(v44 + 80);
              v51 = *(_QWORD *)(v44 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v67.fields.currentCryptoKey = v52;
              *(_QWORD *)&v67.fields.fakeValue = v51;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v67, 0LL);
              v53 = v6->fields._items;
              v54 = Method_System_Collections_Generic_List_int__Add__;
              ++v6->fields._version;
              if ( !v53 )
                goto LABEL_82;
              v55 = v6->fields._size;
              v4 = (const MethodInfo *)(unsigned int)Instance;
              ++v36;
              if ( (unsigned int)v55 >= v53->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v6,
                  Instance,
                  *(const MethodInfo_34E0810 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
              }
              else
              {
                v6->fields._size = v55 + 1;
                v53->m_Items[v55 + 1] = Instance;
              }
            }
          }
        }
      }
      LODWORD(v41) = *(_DWORD *)(v42 + 24);
      if ( (__int64)++v43 >= (int)v41 )
        return v36;
    }
LABEL_81:
    sub_1B88814(Instance, v4);
  }
  return v36;
}


UserServantEntity_array *__fastcall UserServantMaster__getServantEquipList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t v6; // x20
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v8; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v9; // x26
  int32_t v10; // w24
  int64_t v11; // x25
  __int64 methodPtr_low; // x10
  __int128 v13; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v14; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v15; // x20
  __int64 v16; // x26
  __int64 v17; // x27
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  int64_t v25; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4A5BFF9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5BFF9 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v6 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v9 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v10 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v10,
                            (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v11 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v13 = *(_OWORD *)(Instance + 64);
          v14 = *v9;
          *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(v11 + 48);
          *(_OWORD *)&v27.fields.fakeValue = v13;
          if ( !v14->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v14);
          v26 = v27;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v26, 0LL);
          if ( Instance == v6 && (*(_BYTE *)(v11 + 300) & 4) == 0 )
          {
            v25 = v6;
            v15 = v9;
            v17 = *(_QWORD *)(v11 + 80);
            v16 = *(_QWORD *)(v11 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v28.fields.currentCryptoKey = v17;
            *(_QWORD *)&v28.fields.fakeValue = v16;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v28, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v9 = v15;
            Instance = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
            v6 = v25;
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
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  (Il2CppObject *)v11,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
              }
              else
              {
                v23 = &items->obj.klass + size;
                v8->fields._size = size + 1;
                v23[4] = (Il2CppClass *)v11;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 4), v11, v18, v19);
              }
            }
          }
        }
      }
      if ( Count == ++v10 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1B8880C(Instance, v4);
  }
LABEL_28:
  if ( !v8 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


System_Collections_Generic_List_UserServantEntity__o *__fastcall UserServantMaster__getServantList(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  Il2CppObject *v17; // x0
  Il2CppObject *v18; // x22
  __int64 methodPtr_low; // x9
  Il2CppObject v20; // q0
  int64_t v21; // x23
  void *monitor; // x23
  Il2CppClass *v23; // x24
  __int64 v24; // x0
  Il2CppObject *Entity; // x0
  __int64 v26; // x1
  _BOOL8 IsServant; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
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

  if ( (byte_4A5BFF2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5BFF2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___),
        v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v6,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_17:
      v16 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v17 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                            Enumerator,
                            *(_QWORD *)(v16 + 8));
    v18 = v17;
    if ( v17 )
    {
      methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v17->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (UserServantEntity_c *)v17->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantEntity_TypeInfo )
      {
        sub_1B88ACC(v17);
LABEL_46:
        sub_1B8880C(Entity, v26);
      }
      v20 = v17[4];
      *(Il2CppObject *)&v41.fields.currentCryptoKey = v17[3];
      *(Il2CppObject *)&v41.fields.fakeValue = v20;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v40 = v41;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v40, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( v21 == NetworkManager__get_UserId(0LL) && (BYTE4(v18[18].monitor) & 4) == 0 )
      {
        v23 = v18[5].klass;
        monitor = v18[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v42.fields.currentCryptoKey = v23;
        *(_QWORD *)&v42.fields.fakeValue = monitor;
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v42, 0LL);
        if ( !MasterData_object )
          sub_1B8880C(v24, (unsigned int)v24);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v24,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          goto LABEL_46;
        IsServant = ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL);
        if ( IsServant )
        {
          if ( !v6 )
            sub_1B8880C(IsServant, v28);
          items = v6->fields._items;
          v32 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v6->fields._version;
          if ( !items )
            sub_1B8880C(IsServant, v28);
          size = v6->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              v18,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v34[4] = (Il2CppClass *)v18;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v18, v29, v30);
          }
        }
      }
    }
  }
  v35 = Enumerator->klass;
  v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_42;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_42:
    v38 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  return (System_Collections_Generic_List_UserServantEntity__o *)v6;
}


System_Collections_Generic_List_UserServantEntity__o *__fastcall UserServantMaster__getServantListByClassIdList(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  UserServantEntity_o *v19; // x0
  UserServantEntity_o *v20; // x23
  __int64 methodPtr_low; // x9
  __int128 v22; // q0
  int64_t v23; // x24
  const MethodInfo *v24; // x2
  __int64 SvtClassId; // x0
  __int64 v26; // x1
  __int64 v27; // x24
  __int64 v28; // x25
  __int64 v29; // x1
  Il2CppObject *Entity; // x0
  __int64 v31; // x1
  _BOOL8 IsServant; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v45; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4A5BFF5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5BFF5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___),
        v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v8,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0LL) )
  {
    sub_1B8880C(Instance, v6);
  }
  v45 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_17;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_17:
      v18 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (UserServantEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                   Enumerator,
                                   *(_QWORD *)(v18 + 8));
    v20 = v19;
    if ( v19 )
    {
      methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v19->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UserServantEntity_c *)v19->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantEntity_TypeInfo )
      {
        sub_1B88ACC(v19);
LABEL_48:
        sub_1B8880C(SvtClassId, v26);
      }
      v22 = *(_OWORD *)&v19->fields.userId.fields.fakeValue;
      *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&v19->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v47.fields.fakeValue = v22;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v46 = v47;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v46, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( v23 == NetworkManager__get_UserId(0LL) && (v20->fields.status & 4) == 0 )
      {
        SvtClassId = UserServantEntity__getSvtClassId(v20, 0, v24);
        v26 = (unsigned int)SvtClassId;
        if ( !classIdList )
          goto LABEL_48;
        if ( System_Collections_Generic_List_int___Contains(
               classIdList,
               SvtClassId,
               (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v28 = *(_QWORD *)&v20->fields.svtId.fields.currentCryptoKey;
          v27 = *(_QWORD *)&v20->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v48.fields.currentCryptoKey = v28;
          *(_QWORD *)&v48.fields.fakeValue = v27;
          v29 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v48, 0LL);
          if ( !v45 )
            sub_1B8880C(0LL, v29);
          Entity = DataMasterBase_object__object__int___GetEntity(
                     v45,
                     v29,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Entity )
            sub_1B8880C(0LL, v31);
          IsServant = ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL);
          if ( IsServant )
          {
            if ( !v8 )
              sub_1B8880C(IsServant, v33);
            items = v8->fields._items;
            v37 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v8->fields._version;
            if ( !items )
              sub_1B8880C(IsServant, v33);
            size = v8->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                (Il2CppObject *)v20,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
            }
            else
            {
              v39 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v39[4] = (Il2CppClass *)v20;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v20, v34, v35);
            }
          }
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
        goto LABEL_44;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_44:
    v43 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(Enumerator, *(_QWORD *)(v43 + 8));
  return (System_Collections_Generic_List_UserServantEntity__o *)v8;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_long__o *__fastcall UserServantMaster__getSvtAllUserIdList(
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

  if ( (byte_4A5C004 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor___76052560);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C004 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, *(const MethodInfo **)&svtId);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_55562536(
    v6,
    List,
    (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76052560);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL
    || (Instance = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, v8), !v6) )
  {
    sub_1B8880C(Instance, v8);
  }
  System_Collections_Generic_List_object___AddRange(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  v9 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    v6,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  *(_OWORD *)&v23.fields._list = *(_OWORD *)&v22.fields.currentCryptoKey;
  v23.fields._current = (Il2CppObject *)v22.fields.fakeValue;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      sub_1B8880C(v10, v11);
    klass = v23.fields._current[5].klass;
    monitor = v23.fields._current[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v24.fields.currentCryptoKey = klass;
    *(_QWORD *)&v24.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v24, 0LL) == svtId
      && (BYTE4(current[18].monitor) & 2) == 0 )
    {
      v15 = current[2];
      *(Il2CppObject *)&v22.fields.currentCryptoKey = current[1];
      *(Il2CppObject *)&v22.fields.fakeValue = v15;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v21 = v22;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v21, 0LL);
      if ( !v9 )
        sub_1B8880C(v16, v16);
      items = v9->fields._items;
      v18 = Method_System_Collections_Generic_List_long__Add__;
      ++v9->fields._version;
      if ( !items )
        sub_1B8880C(v16, v16);
      size = v9->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v9,
          v16,
          *(const MethodInfo_34E5868 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
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
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  return v9;
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_o *__fastcall UserServantMaster__getSvtIdBattle(
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
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_IList_T__o *items; // x25
  void *monitor; // x26
  int v14; // w8
  int v15; // w9
  __int128 v16; // q0
  int64_t v17; // x0
  __int128 v18; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+40h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4A5C008 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5C008 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0LL;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v10 = list;
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
      *(_QWORD *)&v23.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v23.fields.fakeValue = items;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v23, 0LL) == svtId
        && (BYTE4(v10[12].monitor) & 4) == 0 )
      {
        if ( !v8 )
          goto LABEL_20;
        v14 = (int)v8[10].fields.items;
        v15 = (int)v10[10].fields.items;
        if ( v14 < v15 )
          goto LABEL_20;
        if ( v14 == v15 )
        {
          v16 = *(_OWORD *)&v8[1].monitor;
          *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&v8->fields.items;
          *(_OWORD *)&v22.fields.fakeValue = v16;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v21 = v22;
          v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v21, 0LL);
          v18 = *(_OWORD *)&v10[1].monitor;
          *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&v10->fields.items;
          *(_OWORD *)&v20.fields.fakeValue = v18;
          if ( v17 > CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v20, 0LL) )
LABEL_20:
            v8 = v10;
        }
      }
      if ( v7 == ++v9 )
        return (UserServantEntity_o *)v8;
    }
LABEL_25:
    sub_1B8880C(list, *(_QWORD *)&svtId);
  }
  return 0LL;
}


void __fastcall UserServantMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5C00F & 1) == 0 )
  {
    sub_1B885B0(&UserServantMaster___c_TypeInfo);
    byte_4A5C00F = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(UserServantMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  UserServantMaster___c_TypeInfo->static_fields->__9 = (struct UserServantMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)UserServantMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, 0LL);
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
  if ( (byte_4A5C010 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass14_0_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C010 = 1;
  }
  if ( !m || (e = v4->fields.e) == 0LL )
    sub_1B8880C(this, m);
  materialSvtId = m->fields.materialSvtId;
  v8 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
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
  if ( (byte_4A5C011 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass15_0_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C011 = 1;
  }
  if ( !m || (e = v4->fields.e) == 0LL )
    sub_1B8880C(this, m);
  materialSvtId = m->fields.materialSvtId;
  v8 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
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
  if ( (byte_4A5C012 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass1_0_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C012 = 1;
  }
  if ( !ent )
    sub_1B8880C(this, ent);
  v6 = *(_QWORD *)&ent->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&ent->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return v4->fields.svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v8, 0LL);
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
  if ( (byte_4A5C013 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass31_0_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5C013 = 1;
  }
  if ( !usrSvt )
    sub_1B8880C(this, usrSvt);
  v6 = *(_QWORD *)&usrSvt->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&usrSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v8, 0LL) == v4->fields.svtId;
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
    sub_1B8880C(this, a);
  }
  return (_DWORD)this - UserServantEntity__getSkillLevel(a, v5->fields.skillIdx, v6);
}