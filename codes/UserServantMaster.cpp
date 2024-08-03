void __fastcall UserServantMaster___ctor(UserServantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FD272 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__, method);
    byte_49FD272 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    14,
    (const MethodInfo_30D4010 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__);
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
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-18h] BYREF

  *(_QWORD *)servantEquipSum = 0LL;
  UserServantMaster__getCount(this, &servantEquipSum[1], servantEquipSum, friendShipSvtEqExclude, v4);
  v6 = servantEquipSum[0];
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_1B64324(0LL);
  return v6 + count > SelfUserGame->fields.svtEquipKeep;
}


bool __fastcall UserServantMaster__CheckServantAdd(UserServantMaster_o *this, int32_t count, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  int32_t v5; // w20
  UserGameEntity_o *SelfUserGame; // x0
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-18h] BYREF

  *(_QWORD *)servantEquipSum = 0LL;
  UserServantMaster__getCount(this, &servantEquipSum[1], servantEquipSum, 0, v3);
  v5 = servantEquipSum[1];
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_1B64324(0LL);
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
  int32_t Count; // w23
  int64_t UserId; // x0
  int64_t v16; // x24
  UserServantEntity_o *v17; // x22
  int32_t v18; // w25
  UserServantEntity_o *v19; // x26
  __int64 methodPtr_low; // x10
  __int128 v21; // q0
  __int64 v22; // x27
  __int64 v23; // x28
  __int64 v24; // x27
  __int64 v25; // x28
  int32_t v26; // w27
  __int64 v27; // x1
  __int64 v28; // x2
  const MethodInfo *v29; // x2
  __int64 v30; // x27
  __int64 v31; // x28
  int32_t v32; // w27
  __int64 v33; // x27
  __int64 v34; // x28
  int32_t v35; // w27
  const MethodInfo *v36; // x3
  UserServantEntity_o *v38; // [xsp+10h] [xbp-B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+40h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_49FD28B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&UserServantEntity_TypeInfo, v12);
    byte_49FD28B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_50;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v38 = 0LL;
    v16 = UserId;
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
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&list[2].klass;
      *(_OWORD *)&v41.fields.fakeValue = v21;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v40 = v41;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v40, 0LL) == v16 )
      {
        v23 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
        v22 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v42.fields.currentCryptoKey = v23;
        *(_QWORD *)&v42.fields.fakeValue = v22;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v42, 0LL) == svtId )
        {
          if ( (v19->fields.status & 4) != 0 )
          {
            v38 = v19;
          }
          else if ( v17 )
          {
            v25 = *(_QWORD *)&v19->fields.limitCount.fields.currentCryptoKey;
            v24 = *(_QWORD *)&v19->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v43.fields.currentCryptoKey = v25;
            *(_QWORD *)&v43.fields.fakeValue = v24;
            v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v43, 0LL);
            if ( v26 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v17->fields.limitCount, 0LL)
              || v19->fields.lv > v17->fields.lv )
            {
              goto LABEL_24;
            }
            v31 = *(_QWORD *)&v19->fields.limitCount.fields.currentCryptoKey;
            v30 = *(_QWORD *)&v19->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v44.fields.currentCryptoKey = v31;
            *(_QWORD *)&v44.fields.fakeValue = v30;
            v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v44, 0LL);
            if ( v32 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v17->fields.limitCount, 0LL)
              && v19->fields.lv == v17->fields.lv
              && (v19->fields.status & 0x40) == 0
              && (v17->fields.status & 0x40) != 0 )
            {
              goto LABEL_24;
            }
            v34 = *(_QWORD *)&v19->fields.limitCount.fields.currentCryptoKey;
            v33 = *(_QWORD *)&v19->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v45.fields.currentCryptoKey = v34;
            *(_QWORD *)&v45.fields.fakeValue = v33;
            v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v45, 0LL);
            if ( v35 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v17->fields.limitCount, 0LL)
              && v19->fields.lv == v17->fields.lv
              && v19->fields.createdAt < v17->fields.createdAt )
            {
LABEL_24:
              v17 = (UserServantEntity_o *)sub_1B64314(UserServantEntity_TypeInfo, v27, v28);
              UserServantEntity___ctor_39858792(v17, v19, v29);
            }
          }
          else
          {
            v17 = v19;
          }
        }
      }
      if ( Count == ++v18 )
        goto LABEL_42;
    }
LABEL_50:
    sub_1B64324(list);
  }
  v38 = 0LL;
  v17 = 0LL;
LABEL_42:
  if ( checkStorage )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !list )
      goto LABEL_50;
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)list,
                                                               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !list )
      goto LABEL_50;
    v17 = UserServantStorageMaster__CostumeTargetEntity((UserServantStorageMaster_o *)list, svtId, v17, v36);
  }
  if ( v17 )
    return v17;
  else
    return v38;
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
  Il2CppObject *MasterData_object; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_int__o *v22; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  _OWORD *v32; // x0
  _OWORD *v33; // x23
  __int64 methodPtr_low; // x9
  __int128 v35; // q0
  int64_t v36; // x24
  __int64 v37; // x24
  __int64 v38; // x25
  __int64 v39; // x0
  Il2CppObject *Entity; // x0
  __int64 v41; // x24
  __int64 v42; // x25
  __int64 v43; // x0
  __int64 v44; // x23
  __int64 v45; // x24
  __int64 v46; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  __int64 v51; // x9
  int32_t *v52; // x10
  __int64 v53; // x0
  const MethodInfo *v54; // x1
  __int64 v55; // x1
  __int64 v56; // x8
  int64_t v57; // x21
  unsigned __int64 v58; // x24
  __int64 v59; // x28
  __int128 v60; // q0
  int64_t v61; // x22
  __int64 v62; // x22
  __int64 v63; // x23
  __int64 v64; // x22
  __int64 v65; // x23
  __int64 v66; // x22
  __int64 v67; // x23
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

  if ( (byte_49FD27A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B640C8(&System_IDisposable_TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1B640C8(&NetworkManager_TypeInfo, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B640C8(&UserServantEntity_TypeInfo, v17);
    byte_49FD27A = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  v72 = (UserServantStorageMaster_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v22 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v20, v21);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_81;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
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
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v31 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
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
        sub_1B645E4(v32);
        goto LABEL_80;
      }
      v35 = v32[4];
      *(_OWORD *)&v75.fields.currentCryptoKey = v32[3];
      *(_OWORD *)&v75.fields.fakeValue = v35;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v74 = v75;
      v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v74, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( v36 == NetworkManager__get_UserId(0LL) && (*((_BYTE *)v33 + 300) & 4) == 0 )
      {
        v38 = *((_QWORD *)v33 + 10);
        v37 = *((_QWORD *)v33 + 11);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v76.fields.currentCryptoKey = v38;
        *(_QWORD *)&v76.fields.fakeValue = v37;
        v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v76, 0LL);
        if ( !MasterData_object )
          sub_1B64324(v39);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v39,
                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_1B64324(0LL);
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0LL) )
        {
          v42 = *((_QWORD *)v33 + 10);
          v41 = *((_QWORD *)v33 + 11);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v77.fields.currentCryptoKey = v42;
          *(_QWORD *)&v77.fields.fakeValue = v41;
          v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v77, 0LL);
          if ( !v22 )
            sub_1B64324(v43);
          if ( !System_Collections_Generic_List_int___Contains(
                  v22,
                  v43,
                  (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            v45 = *((_QWORD *)v33 + 10);
            v44 = *((_QWORD *)v33 + 11);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v78.fields.currentCryptoKey = v45;
            *(_QWORD *)&v78.fields.fakeValue = v44;
            v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v78, 0LL);
            items = v22->fields._items;
            v48 = Method_System_Collections_Generic_List_int__Add__;
            ++v22->fields._version;
            if ( !items )
              sub_1B64324(v46);
            size = v22->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v22,
                v46,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
            }
            else
            {
              v22->fields._size = size + 1;
              items->m_Items[size + 1] = v46;
            }
          }
        }
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
        goto LABEL_48;
    }
    v53 = (__int64)&v50->vtable[*v52].method;
  }
  else
  {
LABEL_48:
    v53 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(Enumerator, *(_QWORD *)(v53 + 8));
  Instance = (int64_t)v72;
  if ( !v72 || (Instance = (int64_t)UserServantStorageMaster__getList(v72, v54)) == 0 )
LABEL_81:
    sub_1B64324(Instance);
  v56 = *(_QWORD *)(Instance + 24);
  v57 = Instance;
  if ( (int)v56 >= 1 )
  {
    v58 = 0LL;
    while ( v58 < (unsigned int)v56 )
    {
      v59 = *(_QWORD *)(v57 + 32 + 8 * v58);
      if ( v59 )
      {
        v60 = *(_OWORD *)(v59 + 64);
        *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)(v59 + 48);
        *(_OWORD *)&v75.fields.fakeValue = v60;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v73 = v75;
        v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v73, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        if ( v61 == Instance )
        {
          v63 = *(_QWORD *)(v59 + 80);
          v62 = *(_QWORD *)(v59 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v79.fields.currentCryptoKey = v63;
          *(_QWORD *)&v79.fields.fakeValue = v62;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v79, 0LL);
          if ( !v22 )
            goto LABEL_81;
          Instance = System_Collections_Generic_List_int___Contains(
                       v22,
                       Instance,
                       (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Instance & 1) == 0 && (*(_BYTE *)(v59 + 300) & 4) == 0 )
          {
            v65 = *(_QWORD *)(v59 + 80);
            v64 = *(_QWORD *)(v59 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v80.fields.currentCryptoKey = v65;
            *(_QWORD *)&v80.fields.fakeValue = v64;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v80, 0LL);
            if ( !MasterData_object )
              goto LABEL_81;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              goto LABEL_81;
            Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
            if ( (Instance & 1) != 0 )
            {
              v67 = *(_QWORD *)(v59 + 80);
              v66 = *(_QWORD *)(v59 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v81.fields.currentCryptoKey = v67;
              *(_QWORD *)&v81.fields.fakeValue = v66;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v81, 0LL);
              v68 = v22->fields._items;
              v69 = Method_System_Collections_Generic_List_int__Add__;
              ++v22->fields._version;
              if ( !v68 )
                goto LABEL_81;
              v70 = v22->fields._size;
              v55 = (unsigned int)Instance;
              if ( (unsigned int)v70 >= v68->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v22,
                  Instance,
                  *(const MethodInfo_348FEDC **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
              }
              else
              {
                v22->fields._size = v70 + 1;
                v68->m_Items[v70 + 1] = Instance;
              }
            }
          }
        }
      }
      LODWORD(v56) = *(_DWORD *)(v57 + 24);
      if ( (__int64)++v58 >= (int)v56 )
        return v22;
    }
LABEL_80:
    sub_1B6432C(Instance, v55);
  }
  return v22;
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
  Il2CppObject *MasterData_object; // x27
  int64_t v17; // x20
  int32_t Count; // w23
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v22; // x26
  __int64 *v23; // x21
  int32_t v24; // w24
  int64_t v25; // x25
  __int64 methodPtr_low; // x10
  __int128 v27; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v28; // x0
  const MethodInfo_30D3EA4 **v29; // x22
  Il2CppObject *v30; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v31; // x20
  __int64 v32; // x26
  __int64 v33; // x27
  int32_t v34; // w1
  DataMasterBase_TMaster__TEntity__PKType__o *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Collections_Generic_List_object__o *v43; // [xsp+0h] [xbp-B0h]
  int64_t v44; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_49FD28C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B640C8(&UserServantEntity_TypeInfo, v14);
    byte_49FD28C = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_31;
  v17 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v22 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v23 = &Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__;
    v24 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v24,
                            (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v25 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v27 = *(_OWORD *)(Instance + 64);
          v28 = *v22;
          *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)(v25 + 48);
          *(_OWORD *)&v46.fields.fakeValue = v27;
          if ( !v28->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v28);
          v45 = v46;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v45, 0LL);
          if ( Instance == v17 && (*(_BYTE *)(v25 + 300) & 4) == 0 )
          {
            v43 = v21;
            v44 = v17;
            v29 = (const MethodInfo_30D3EA4 **)v23;
            v30 = MasterData_object;
            v31 = v22;
            v33 = *(_QWORD *)(v25 + 80);
            v32 = *(_QWORD *)(v25 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v47.fields.currentCryptoKey = v33;
            *(_QWORD *)&v47.fields.fakeValue = v32;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v47, 0LL);
            if ( !v30 )
              break;
            MasterData_object = v30;
            v34 = Instance;
            v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)v30;
            v23 = (__int64 *)v29;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(v35, v34, *v29);
            if ( !Instance )
              break;
            v22 = v31;
            Instance = ServantEntity__get_IsCombineMaterial((ServantEntity_o *)Instance, 0LL);
            v21 = v43;
            v17 = v44;
            if ( (Instance & 1) != 0 && (*(_BYTE *)(v25 + 300) & 0x11) == 0 )
            {
              if ( !v43 )
                break;
              items = v43->fields._items;
              v39 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v43->fields._version;
              if ( !items )
                break;
              size = v43->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v43,
                  (Il2CppObject *)v25,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
              }
              else
              {
                v41 = &items->obj.klass + size;
                v43->fields._size = size + 1;
                v41[4] = (Il2CppClass *)v25;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v41 + 4), v25, v36, v37);
              }
            }
          }
        }
      }
      if ( Count == ++v24 )
        goto LABEL_29;
    }
LABEL_31:
    sub_1B64324(Instance);
  }
LABEL_29:
  if ( !v21 )
    goto LABEL_31;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v21,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__GetEntities(
        UserServantMaster_o *this,
        System_Int64_array *userServantIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_long__o *v6; // x21

  if ( (byte_49FD291 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor___75657400, userServantIds);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v5);
    byte_49FD291 = 1;
  }
  if ( userServantIds )
  {
    v6 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                      System_Collections_Generic_List_long__TypeInfo,
                                                      userServantIds,
                                                      method);
    System_Collections_Generic_List_long____ctor_55134536(
      v6,
      (System_Collections_Generic_IEnumerable_T__o *)userServantIds,
      (const MethodInfo_3494948 *)Method_System_Collections_Generic_List_long___ctor___75657400);
  }
  else
  {
    v6 = 0LL;
  }
  return UserServantMaster__GetEntities_39936464(this, v6, method);
}


UserServantEntity_array *__fastcall UserServantMaster__GetEntities_39936464(
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
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  Il2CppObject *v27; // x0
  Il2CppObject *v28; // x22
  __int64 methodPtr_low; // x9
  Il2CppObject v30; // q0
  int64_t v31; // x1
  _BOOL8 v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
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

  if ( (byte_49FD292 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, userServantIds);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Contains__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v12);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1B640C8(&UserServantEntity_TypeInfo, v15);
    byte_49FD292 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       userServantIds,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( userServantIds && userServantIds->fields._size >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_43;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   list,
                   (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_1B64324(0LL);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v20;
          p_offset += 4;
          if ( !v20 )
            goto LABEL_11;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_11:
        p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v23 = Enumerator->klass;
      v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v25 = &v23->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v24;
          v25 += 4;
          if ( !v24 )
            goto LABEL_18;
        }
        v26 = (__int64)&v23->vtable[*v25].method;
      }
      else
      {
LABEL_18:
        v26 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v27 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                              Enumerator,
                              *(_QWORD *)(v26 + 8));
      v28 = v27;
      if ( v27 )
      {
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v27->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (UserServantEntity_c *)v27->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantEntity_TypeInfo )
        {
          sub_1B645E4(v27);
LABEL_41:
          sub_1B64324(v32);
        }
        v30 = v27[2];
        *(Il2CppObject *)&v45.fields.currentCryptoKey = v27[1];
        *(Il2CppObject *)&v45.fields.fakeValue = v30;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v44 = v45;
        v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v44, 0LL);
        v32 = System_Collections_Generic_List_long___Contains(
                userServantIds,
                v31,
                (const MethodInfo_34953EC *)Method_System_Collections_Generic_List_long__Contains__);
        if ( v32 )
        {
          if ( !v16 )
            goto LABEL_41;
          items = v16->fields._items;
          v36 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v16->fields._version;
          if ( !items )
            sub_1B64324(v32);
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              v28,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v38[4] = (Il2CppClass *)v28;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v28, v33, v34);
          }
        }
      }
    }
    v39 = Enumerator->klass;
    v40 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_35;
      }
      v42 = (__int64)&v39->vtable[*v41].method;
    }
    else
    {
LABEL_35:
      v42 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
                                                               Enumerator,
                                                               *(_QWORD *)(v42 + 8));
  }
  if ( !v16 )
LABEL_43:
    sub_1B64324(list);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v16,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  __int64 v17; // x1
  __int64 v18; // x2
  System_Predicate_object__o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  System_Object_array *v22; // x20
  System_Comparison_T__o *v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2

  if ( (byte_49FD28D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_FindAll_UserServantEntity___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Array_Sort_UserServantEntity___, v7);
    sub_1B640C8(&System_Comparison_UserServantEntity__TypeInfo, v8);
    sub_1B640C8(&System_Predicate_UserServantEntity__TypeInfo, v9);
    sub_1B640C8(&Method_UserServantMaster___c__DisplayClass31_0__GetHaveServantSkillLevelMax_b__0__, v10);
    sub_1B640C8(&Method_UserServantMaster___c__DisplayClass31_0__GetHaveServantSkillLevelMax_b__1__, v11);
    sub_1B640C8(&UserServantMaster___c__DisplayClass31_0_TypeInfo, v12);
    byte_49FD28D = 1;
  }
  v13 = sub_1B64314(UserServantMaster___c__DisplayClass31_0_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&skillIdx);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_10;
  *(_DWORD *)(v13 + 16) = svtId;
  *(_DWORD *)(v13 + 20) = skillIdx;
  AllList = (System_Object_array *)UserServantMaster__getAllList(this, v15);
  v19 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_UserServantEntity__TypeInfo, v17, v18);
  System_Predicate_object____ctor(
    v19,
    (Il2CppObject *)v13,
    Method_UserServantMaster___c__DisplayClass31_0__GetHaveServantSkillLevelMax_b__0__,
    0LL);
  All_object = (UserServantEntity_o *)System_Array__FindAll_object_(
                                        AllList,
                                        (System_Predicate_T__o *)v19,
                                        (const MethodInfo_2F3045C *)Method_System_Array_FindAll_UserServantEntity___);
  if ( !All_object )
    goto LABEL_10;
  v22 = (System_Object_array *)All_object;
  if ( All_object->fields.id.fields.hiddenValue )
  {
    v23 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_UserServantEntity__TypeInfo, v20, v21);
    System_Comparison_object____ctor(
      v23,
      (Il2CppObject *)v13,
      Method_UserServantMaster___c__DisplayClass31_0__GetHaveServantSkillLevelMax_b__1__,
      0LL);
    System_Array__Sort_object__48264584(
      v22,
      v23,
      (const MethodInfo_2E07588 *)Method_System_Array_Sort_UserServantEntity___);
    if ( !v22->max_length )
      sub_1B6432C(v24, v25);
    All_object = (UserServantEntity_o *)v22->m_Items[0];
    if ( All_object )
      return UserServantEntity__getSkillLevel(All_object, *(_DWORD *)(v13 + 20), v26);
LABEL_10:
    sub_1B64324(All_object);
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
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v12; // x1
  UserServantEntity_array *AllList; // x21
  __int64 v14; // x1
  __int64 v15; // x8
  int32_t v16; // w22
  unsigned __int64 i; // x25
  UserServantEntity_o *v18; // x28
  __int64 v19; // x23
  __int64 v20; // x24
  int32_t treasureDeviceLv1; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_49FD284 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v5);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1B640C8(&System_Math_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FD284 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___),
        AllList = UserServantMaster__getAllList(this, v12),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL
    || (Instance = (Il2CppObject *)UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL),
        !AllList) )
  {
LABEL_21:
    sub_1B64324(Instance);
  }
  v15 = *(_QWORD *)&AllList->max_length;
  v16 = (unsigned __int8)Instance & 1;
  if ( (int)v15 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v15; ++i )
    {
      if ( i >= (unsigned int)v15 )
        sub_1B6432C(Instance, v14);
      v18 = AllList->m_Items[i];
      if ( v18 )
      {
        v20 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
        v19 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v23.fields.currentCryptoKey = v20;
        *(_QWORD *)&v23.fields.fakeValue = v19;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v23, 0LL);
        if ( !MasterData_object )
          goto LABEL_21;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_21;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                     (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Instance[2],
                                     0LL);
        if ( (_DWORD)Instance == servantId )
        {
          treasureDeviceLv1 = v18->fields.treasureDeviceLv1;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          Instance = (Il2CppObject *)System_Math__Max_62194036(v16, treasureDeviceLv1, 0LL);
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
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v13; // x1
  __int64 v14; // x1
  __int64 v15; // x8
  UserServantEntity_array *v16; // x23
  int32_t v17; // w21
  unsigned __int64 v18; // x27
  UserServantEntity_o *v19; // x8
  __int64 v20; // x24
  __int64 v21; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_49FD282 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v7);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49FD282 = 1;
  }
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = UserServantMaster__getAllList(this, v13);
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
      sub_1B6432C(Instance, v14);
    v19 = v16->m_Items[v18];
    if ( v19 )
    {
      v21 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v23.fields.currentCryptoKey = v21;
      *(_QWORD *)&v23.fields.fakeValue = v20;
      Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                              v23,
                                              0LL);
      if ( !MasterData_object )
        goto LABEL_23;
      Instance = (UserServantEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                              (int32_t)Instance,
                                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_23;
      Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
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
    Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
      if ( Instance )
      {
        v17 += UserPresentBoxMaster__GetCount((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL);
        return v17;
      }
    }
LABEL_23:
    sub_1B64324(Instance);
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
  UserServantEntity_array *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  __int64 v13; // x8
  UserServantEntity_array *v14; // x21
  int v15; // w25
  unsigned __int64 v16; // x26
  UserServantEntity_o *v17; // x24
  __int64 v18; // x22
  __int64 v19; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_49FD283 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v5);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FD283 = 1;
  }
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = UserServantMaster__getAllList(this, v11);
  if ( !Instance )
    goto LABEL_21;
  v13 = *(_QWORD *)&Instance->max_length;
  v14 = Instance;
  if ( (int)v13 >= 1 )
  {
    v15 = 0;
    v16 = 0LL;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v13 )
        sub_1B6432C(Instance, v12);
      v17 = v14->m_Items[v16];
      if ( v17 )
      {
        v19 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
        v18 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v21.fields.currentCryptoKey = v19;
        *(_QWORD *)&v21.fields.fakeValue = v18;
        Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                v21,
                                                0LL);
        if ( !MasterData_object )
          goto LABEL_21;
        Instance = (UserServantEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                (int32_t)Instance,
                                                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_21;
        Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance->m_Items,
                                                0LL);
        if ( (_DWORD)Instance == servantId )
          v15 += v17->fields.treasureDeviceLv1;
      }
      LODWORD(v13) = v14->max_length;
      if ( (__int64)++v16 >= (int)v13 )
        goto LABEL_18;
    }
  }
  v15 = 0;
LABEL_18:
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL )
  {
LABEL_21:
    sub_1B64324(Instance);
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
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x22
  int64_t UserId; // x23
  const MethodInfo *v21; // x1
  UserServantEntity_array *AllList; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  UserServantMaster___c_c *v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x19
  System_Func_object__bool__o *_9__34_0; // x21
  Il2CppObject *v28; // x24
  struct UserServantMaster___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  DataManager_c *klass; // x8
  DataManager_o *v33; // x19
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 v36; // x0
  __int64 v37; // x19
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x0
  __int64 v47; // x24
  __int128 v48; // q0
  __int64 v49; // x25
  __int64 v50; // x26
  __int64 v51; // x0
  Il2CppObject *Entity; // x0
  Il2CppObject *v53; // x25
  __int64 v54; // x24
  __int64 v55; // x26
  int32_t v56; // w0
  int v57; // w8
  __int64 v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0
  int32_t v63; // [xsp+Ch] [xbp-A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_49FD28F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v6);
    sub_1B640C8(&System_Func_UserServantEntity__bool__TypeInfo, v7);
    sub_1B640C8(&System_IDisposable_TypeInfo, v8);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, v9);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, v10);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B640C8(&NetworkManager_TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B640C8(&Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__34_0__, v16);
    sub_1B640C8(&UserServantMaster___c_TypeInfo, v17);
    byte_49FD28F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  AllList = UserServantMaster__getAllList(this, v21);
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
    _9__34_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_UserServantEntity__bool__TypeInfo, v23, v24);
    System_Func_object__bool____ctor(
      _9__34_0,
      v28,
      Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__34_0__,
      0LL);
    static_fields = UserServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = (struct System_Func_UserServantEntity__bool__o *)_9__34_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__34_0, (int32_t)_9__34_0, v30, v31);
  }
  Instance = (DataManager_o *)System_Linq_Enumerable__Where_object_(
                                v26,
                                (System_Func_TSource__bool__o *)_9__34_0,
                                (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  if ( !Instance )
LABEL_58:
    sub_1B64324(Instance);
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
        goto LABEL_17;
    }
    v36 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v36 = sub_1BB60A8(Instance, System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, 0LL);
  }
  v37 = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v36)(v33, *(_QWORD *)(v36 + 8));
  if ( !v37 )
    sub_1B64324(0LL);
  v63 = 0;
  while ( 1 )
  {
    v38 = *(_QWORD *)v37;
    v39 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
    {
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v40 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_25;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_25:
      v41 = sub_1BB60A8(v37, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8)) & 1) == 0 )
      break;
    v42 = *(_QWORD *)v37;
    v43 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
    {
      v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v44 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        --v43;
        v44 += 4;
        if ( !v43 )
          goto LABEL_32;
      }
      v45 = v42 + 16LL * *v44 + 312;
    }
    else
    {
LABEL_32:
      v45 = sub_1BB60A8(v37, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL);
    }
    v46 = (*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v37, *(_QWORD *)(v45 + 8));
    v47 = v46;
    if ( v46 )
    {
      v48 = *(_OWORD *)(v46 + 64);
      *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)(v46 + 48);
      *(_OWORD *)&v65.fields.fakeValue = v48;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v64 = v65;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v64, 0LL) == UserId
        && (*(_BYTE *)(v47 + 300) & 4) == 0 )
      {
        v50 = *(_QWORD *)(v47 + 80);
        v49 = *(_QWORD *)(v47 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v66.fields.currentCryptoKey = v50;
        *(_QWORD *)&v66.fields.fakeValue = v49;
        v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v66, 0LL);
        if ( !MasterData_object )
          sub_1B64324(v51);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v51,
                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v53 = Entity;
        if ( !Entity )
          sub_1B64324(0LL);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
               (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[2],
               0LL) == servantId )
        {
          v55 = *(_QWORD *)(v47 + 96);
          v54 = *(_QWORD *)(v47 + 104);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v67.fields.currentCryptoKey = v55;
          *(_QWORD *)&v67.fields.fakeValue = v54;
          v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v67, 0LL);
          v57 = v63;
          if ( v56 == LODWORD(v53[5].monitor) )
            v57 = v63 + 1;
          v63 = v57;
        }
      }
    }
  }
  v58 = *(_QWORD *)v37;
  v59 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
  {
    v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      --v59;
      v60 += 4;
      if ( !v59 )
        goto LABEL_53;
    }
    v61 = v58 + 16LL * *v60 + 312;
  }
  else
  {
LABEL_53:
    v61 = sub_1BB60A8(v37, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v61)(v37, *(_QWORD *)(v61 + 8));
  return v63;
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
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v13; // x21
  int32_t Count; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v15; // x26
  int32_t v16; // w23
  int32_t v17; // w22
  int32_t v18; // w24
  Il2CppObject *Item; // x0
  Il2CppObject *v20; // x25
  __int64 methodPtr_low; // x10
  Il2CppObject v22; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v23; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v24; // x29
  void *monitor; // x25
  Il2CppClass *klass; // x26
  int32_t v27; // w1
  Il2CppObject *Entity; // x0
  ServantEntity_o *v29; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_49FD290 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B640C8(&UserServantEntity_TypeInfo, v10);
    byte_49FD290 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_27;
  v13 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v16 = Count;
    v17 = 0;
    v18 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v18,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v20 = Item;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantEntity_TypeInfo )
        {
          v22 = Item[4];
          *(Il2CppObject *)&v32.fields.currentCryptoKey = Item[3];
          *(Il2CppObject *)&v32.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v31 = v32;
          if ( (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v31, 0LL) == v13
            && (BYTE4(v20[18].monitor) & 4) == 0 )
          {
            v23 = *v15;
            v24 = v15;
            klass = v20[5].klass;
            monitor = v20[5].monitor;
            if ( !v23->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v23);
            *(_QWORD *)&v33.fields.currentCryptoKey = klass;
            *(_QWORD *)&v33.fields.fakeValue = monitor;
            v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v33, 0LL);
            Instance = (DataManager_o *)MasterData_object;
            if ( !MasterData_object )
              break;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       v27,
                       (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            v15 = v24;
            if ( Entity )
            {
              v29 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServantEquip(HIDWORD(Entity[5].klass), 0LL) )
                v17 += ServantEntity__get_IsFriendShipSvtEquip(v29, 0LL);
            }
          }
        }
      }
      if ( v16 == ++v18 )
        return v17;
    }
LABEL_27:
    sub_1B64324(Instance);
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
  __int64 v14; // x1
  __int64 v15; // x2
  System_Func_object__bool__o *v16; // x21
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_49FD273 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____75749112, svtEnt);
    sub_1B640C8(&System_Func_UserServantEntity__bool__TypeInfo, v7);
    sub_1B640C8(&Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__, v8);
    sub_1B640C8(&UserServantMaster___c__DisplayClass1_0_TypeInfo, v9);
    byte_49FD273 = 1;
  }
  v10 = (Il2CppObject *)sub_1B64314(UserServantMaster___c__DisplayClass1_0_TypeInfo, svtEnt, svtId);
  System_Object___ctor(v10, 0LL);
  if ( !v10 )
    sub_1B64324(v11);
  v10[1].klass = (Il2CppClass *)svtId;
  List = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getList(this, v12);
  v16 = (System_Func_object__bool__o *)sub_1B64314(System_Func_UserServantEntity__bool__TypeInfo, v14, v15);
  System_Func_object__bool____ctor(
    v16,
    v10,
    Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__,
    0LL);
  v17 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
          List,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____75749112);
  *svtEnt = (UserServantEntity_o *)v17;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)svtEnt, (int32_t)v17, v18, v19);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  Il2CppObject *v30; // x0
  Il2CppObject *v31; // x24
  __int64 methodPtr_low; // x10
  void *monitor; // x25
  Il2CppClass *v34; // x26
  __int64 v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  const MethodInfo *v48; // x1
  __int64 v49; // x1
  System_Collections_ObjectModel_Collection_T__c *v50; // x8
  System_Collections_ObjectModel_Collection_T__o *v51; // x22
  unsigned __int64 v52; // x19
  Il2CppObject *v53; // x23
  void *v54; // x24
  Il2CppClass *v55; // x25
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  Il2CppClass **v59; // x0
  ServantStatusBattleListViewItem_o *v61; // [xsp+0h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_49FD293 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, userServantList);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantStorageMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&System_IDisposable_TypeInfo, v10);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v15);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v16);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1B640C8(&UserServantEntity_TypeInfo, v18);
    byte_49FD293 = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       userServantList,
                                                       *(_QWORD *)&svtId);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_59;
  v61 = (ServantStatusBattleListViewItem_o *)userServantList;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
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
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          goto LABEL_16;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_16:
      v29 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v30 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                            Enumerator,
                            *(_QWORD *)(v29 + 8));
    v31 = v30;
    if ( !v30
      || (methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v30->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (UserServantEntity_c *)v30->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantEntity_TypeInfo )
    {
      sub_1B64324(v30);
    }
    v34 = v30[5].klass;
    monitor = v30[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v63.fields.currentCryptoKey = v34;
    *(_QWORD *)&v63.fields.fakeValue = monitor;
    v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v63, 0LL);
    if ( (_DWORD)v35 == svtId )
    {
      if ( !v19 )
        sub_1B64324(v35);
      items = v19->fields._items;
      v39 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++v19->fields._version;
      if ( !items )
        sub_1B64324(v35);
      size = v19->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v19,
          v31,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        v19->fields._size = size + 1;
        v41[4] = (Il2CppClass *)v31;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v31, v36, v37);
      }
    }
  }
  v42 = Enumerator->klass;
  v43 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_33;
    }
    v45 = (__int64)&v42->vtable[*v44].method;
  }
  else
  {
LABEL_33:
    v45 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(Enumerator, *(_QWORD *)(v45 + 8));
  if ( isIncludeStorage )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)UserServantStorageMaster__getList(
                                                                 (UserServantStorageMaster_o *)list,
                                                                 v48);
      if ( list )
      {
        v50 = list[1].klass;
        v51 = list;
        if ( (int)v50 >= 1 )
        {
          v52 = 0LL;
          while ( 1 )
          {
            if ( v52 >= (unsigned int)v50 )
              sub_1B6432C(list, v49);
            v53 = (Il2CppObject *)*((_QWORD *)&v51[1].monitor + v52);
            if ( v53 )
            {
              v55 = v53[5].klass;
              v54 = v53[5].monitor;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v64.fields.currentCryptoKey = v55;
              *(_QWORD *)&v64.fields.fakeValue = v54;
              list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                         v64,
                                                                         0LL);
              if ( (_DWORD)list == svtId )
              {
                if ( !v19 )
                  goto LABEL_59;
                v56 = v19->fields._items;
                v57 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v19->fields._version;
                if ( !v56 )
                  goto LABEL_59;
                v58 = v19->fields._size;
                if ( (unsigned int)v58 >= v56->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v19,
                    v53,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
                }
                else
                {
                  v59 = &v56->obj.klass + v58;
                  v19->fields._size = v58 + 1;
                  v59[4] = (Il2CppClass *)v53;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v59 + 4), (int32_t)v53, v46, v47);
                }
              }
            }
            LODWORD(v50) = v51[1].klass;
            if ( (__int64)++v52 >= (int)v50 )
              goto LABEL_53;
          }
        }
        goto LABEL_53;
      }
    }
LABEL_59:
    sub_1B64324(list);
  }
LABEL_53:
  v61->klass = (ServantStatusBattleListViewItem_c *)v19;
  sub_1B6406C(v61, (int32_t)v19, v46, v47);
  if ( !v61->klass )
    goto LABEL_59;
  return SLODWORD(v61->klass->_1.namespaze) > 0;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x8
  UserServantEntity_array *v19; // x22
  unsigned __int64 v20; // x26
  Il2CppObject *v21; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_49FD294 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantStorageMaster___, userStorageServantList);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v9);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_49FD294 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       userStorageServantList,
                                                       *(_QWORD *)&svtId);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
  if ( !Master_object )
    goto LABEL_23;
  Master_object = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Master_object, v14);
  if ( !Master_object )
    goto LABEL_23;
  v18 = *(_QWORD *)&Master_object->max_length;
  v19 = Master_object;
  if ( (int)v18 >= 1 )
  {
    v20 = 0LL;
    do
    {
      if ( v20 >= (unsigned int)v18 )
        sub_1B6432C(Master_object, v15);
      v21 = (Il2CppObject *)v19->m_Items[v20];
      if ( v21 )
      {
        klass = v21[5].klass;
        monitor = v21[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v29.fields.currentCryptoKey = klass;
        *(_QWORD *)&v29.fields.fakeValue = monitor;
        Master_object = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                     v29,
                                                     0LL);
        if ( (_DWORD)Master_object == svtId )
        {
          if ( !v12 )
            goto LABEL_23;
          items = v12->fields._items;
          v25 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            goto LABEL_23;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              v21,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v27[4] = (Il2CppClass *)v21;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v21, v16, v17);
          }
        }
      }
      LODWORD(v18) = v19->max_length;
    }
    while ( (__int64)++v20 < (int)v18 );
  }
  *userStorageServantList = (System_Collections_Generic_List_UserServantEntity__o *)v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)userStorageServantList, (int32_t)v12, v16, v17);
  if ( !*userStorageServantList )
LABEL_23:
    sub_1B64324(Master_object);
  return (*userStorageServantList)->fields._size > 0;
}


void __fastcall UserServantMaster__continueDeviceUserServant(UserServantMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_long__o *v13; // x20
  int64_t list; // x0
  int32_t Count; // w21
  int64_t v16; // x22
  int32_t v17; // w23
  int64_t v18; // x24
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

  if ( (byte_49FD287 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1B640C8(&UserServantEntity_TypeInfo, v11);
    sub_1B640C8(&UserServantNewManager_TypeInfo, v12);
    byte_49FD287 = 1;
  }
  v13 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     method,
                                                     v2);
  System_Collections_Generic_List_long____ctor(
    v13,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v17,
                        (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v27, 0LL);
          if ( list == v16 && (*(_BYTE *)(v18 + 300) & 4) == 0 )
          {
            v21 = *(_OWORD *)(v18 + 32);
            *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)(v18 + 16);
            *(_OWORD *)&v28.fields.fakeValue = v21;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v26 = v28;
            list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v26, 0LL);
            if ( !v13 )
              break;
            items = v13->fields._items;
            v23 = Method_System_Collections_Generic_List_long__Add__;
            ++v13->fields._version;
            if ( !items )
              break;
            size = v13->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_long___AddWithResize(
                v13,
                list,
                *(const MethodInfo_3495074 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v13->fields._size = size + 1;
              items->m_Items[size] = list;
            }
          }
        }
      }
      if ( Count == ++v17 )
        goto LABEL_24;
    }
LABEL_28:
    sub_1B64324(list);
  }
LABEL_24:
  if ( !v13 )
    goto LABEL_28;
  v25 = System_Collections_Generic_List_long___ToArray(
          v13,
          (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  UserServantNewManager__SetOld_40234800(v25, 0LL);
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
  System_Collections_Generic_List_object__o *v11; // x19
  UserServantEntity_array *Instance; // x0
  const MethodInfo *v13; // x1

  if ( (byte_49FD289 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor___75673192, v5);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FD289 = 1;
  }
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, method);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v9,
                                                       v10);
  System_Collections_Generic_List_object____ctor_55234504(
    v11,
    List,
    (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___75673192);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL
    || (Instance = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, v13), !v11) )
  {
    sub_1B64324(Instance);
  }
  System_Collections_Generic_List_object___AddRange(
    v11,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v11,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  int64_t v16; // x21
  int32_t Count; // w23
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x22
  int32_t v21; // w24
  int64_t v22; // x25
  __int64 methodPtr_low; // x10
  __int128 v24; // q0
  __int64 v25; // x26
  __int64 v26; // x27
  int32_t v27; // w1
  ServantEntity_o *v28; // x26
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_49FD288 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B640C8(&UserServantEntity_TypeInfo, v14);
    byte_49FD288 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_31;
  v16 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v18,
                                                       v19);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v22 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v24 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v38.fields.fakeValue = v24;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v37 = v38;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v37, 0LL);
          if ( Instance == v16 && (*(_BYTE *)(v22 + 300) & 4) == 0 )
          {
            v26 = *(_QWORD *)(v22 + 80);
            v25 = *(_QWORD *)(v22 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v39.fields.currentCryptoKey = v26;
            *(_QWORD *)&v39.fields.fakeValue = v25;
            v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v39, 0LL);
            Instance = (int64_t)MasterData_object;
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  MasterData_object,
                                  v27,
                                  (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                items = v20->fields._items;
                v32 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v20->fields._version;
                if ( !items )
                  break;
                size = v20->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v20,
                    (Il2CppObject *)v22,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
                }
                else
                {
                  v34 = &items->obj.klass + size;
                  v20->fields._size = size + 1;
                  v34[4] = (Il2CppClass *)v22;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 4), v22, v29, v30);
                }
              }
            }
          }
        }
      }
      if ( Count == ++v21 )
        goto LABEL_29;
    }
LABEL_31:
    sub_1B64324(Instance);
  }
LABEL_29:
  if ( !v20 )
    goto LABEL_31;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v20,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x23
  int64_t v19; // x24
  int32_t Count; // w0
  int32_t v21; // w25
  int32_t v22; // w26
  int32_t v23; // w27
  Il2CppObject *Item; // x0
  Il2CppObject *v25; // x28
  __int64 methodPtr_low; // x10
  Il2CppObject v27; // q0
  void *monitor; // x28
  Il2CppClass *klass; // x29
  Il2CppObject *Entity; // x0
  int32_t klass_high; // w29
  ServantEntity_o *v32; // x28
  int32_t *v33; // x9
  int32_t *v35; // [xsp+8h] [xbp-B8h]
  bool v36; // [xsp+14h] [xbp-ACh]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+40h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_49FD274 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, servantSum);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B640C8(&NetworkManager_TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B640C8(&UserServantEntity_TypeInfo, v16);
    byte_49FD274 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
LABEL_32:
    sub_1B64324(Instance);
  v19 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v35 = servantEquipSum;
    v36 = friendShipSvtEqExclude;
    v21 = Count;
    v22 = 0;
    v23 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_32;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v23,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v25 = Item;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantEntity_TypeInfo )
        {
          v27 = Item[4];
          *(Il2CppObject *)&v38.fields.currentCryptoKey = Item[3];
          *(Il2CppObject *)&v38.fields.fakeValue = v27;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v37 = v38;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v37, 0LL) == v19
            && (BYTE4(v25[18].monitor) & 4) == 0 )
          {
            klass = v25[5].klass;
            monitor = v25[5].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v39.fields.currentCryptoKey = klass;
            *(_QWORD *)&v39.fields.fakeValue = monitor;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v39, 0LL);
            if ( !MasterData_object )
              goto LABEL_32;
            ++v22;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       Instance,
                       (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              klass_high = HIDWORD(Entity[5].klass);
              v32 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServant(klass_high, 0LL) )
              {
                v33 = servantSum;
              }
              else
              {
                if ( !SvtType__IsKeepServantEquip(klass_high, 0LL)
                  || v36 && ServantEntity__get_IsFriendShipSvtEquip(v32, 0LL) )
                {
                  goto LABEL_28;
                }
                v33 = v35;
              }
              ++*v33;
            }
          }
        }
      }
LABEL_28:
      if ( v21 == ++v23 )
        return v22;
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
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x22
  int64_t v17; // x23
  int32_t Count; // w0
  int32_t v19; // w24
  int32_t v20; // w25
  int32_t v21; // w26
  Il2CppObject *Item; // x0
  Il2CppObject *v23; // x27
  __int64 methodPtr_low; // x10
  Il2CppObject v25; // q0
  void *monitor; // x27
  Il2CppClass *klass; // x28
  Il2CppObject *Entity; // x0
  int32_t klass_high; // w27
  int32_t *v30; // x9
  int32_t *v32; // [xsp+0h] [xbp-B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_49FD275 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, servantSum);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B640C8(&UserServantEntity_TypeInfo, v14);
    byte_49FD275 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
LABEL_30:
    sub_1B64324(Instance);
  v17 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v32 = servantEquipSum;
    v19 = Count;
    v20 = 0;
    v21 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_30;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v21,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v23 = Item;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantEntity_TypeInfo )
        {
          v25 = Item[4];
          *(Il2CppObject *)&v34.fields.currentCryptoKey = Item[3];
          *(Il2CppObject *)&v34.fields.fakeValue = v25;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v33 = v34;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v33, 0LL) == v17
            && (BYTE4(v23[18].monitor) & 4) == 0 )
          {
            klass = v23[5].klass;
            monitor = v23[5].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v35.fields.currentCryptoKey = klass;
            *(_QWORD *)&v35.fields.fakeValue = monitor;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v35, 0LL);
            if ( !MasterData_object )
              goto LABEL_30;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       Instance,
                       (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              klass_high = HIDWORD(Entity[5].klass);
              if ( SvtType__IsOrganization(klass_high, 0LL) )
              {
                v30 = servantSum;
LABEL_25:
                ++v20;
                ++*v30;
                goto LABEL_26;
              }
              if ( SvtType__IsServantEquip(klass_high, 0LL) )
              {
                v30 = v32;
                goto LABEL_25;
              }
            }
          }
        }
      }
LABEL_26:
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
  const MethodInfo *v17; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_49FD285 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&heroineId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&UserServantEntity_TypeInfo, v7);
    byte_49FD285 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          *(_QWORD *)&v19.fields.currentCryptoKey = klass;
          *(_QWORD *)&v19.fields.fakeValue = monitor;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v19, 0LL) == heroineId
            && UserServantEntity__IsHeroine(v13, v17) )
          {
            return v13;
          }
        }
      }
      if ( v10 == ++v11 )
        return 0LL;
    }
LABEL_17:
    sub_1B64324(list);
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
  Il2CppObject *MasterData_object; // x21
  int64_t v17; // x20
  int32_t Count; // w23
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v22; // x26
  int32_t v23; // w24
  int64_t v24; // x25
  __int64 methodPtr_low; // x10
  __int128 v26; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v28; // x20
  __int64 v29; // x26
  __int64 v30; // x27
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  int64_t v38; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_49FD27E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B640C8(&UserServantEntity_TypeInfo, v14);
    byte_49FD27E = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v17 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v22 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v23 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v23,
                            (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v24 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v26 = *(_OWORD *)(Instance + 64);
          v27 = *v22;
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v24 + 48);
          *(_OWORD *)&v40.fields.fakeValue = v26;
          if ( !v27->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v27);
          v39 = v40;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v39, 0LL);
          if ( Instance == v17 && (*(_BYTE *)(v24 + 300) & 4) == 0 )
          {
            v38 = v17;
            v28 = v22;
            v30 = *(_QWORD *)(v24 + 80);
            v29 = *(_QWORD *)(v24 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v41.fields.currentCryptoKey = v30;
            *(_QWORD *)&v41.fields.fakeValue = v29;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v41, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v22 = v28;
            Instance = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)Instance, 0LL);
            v17 = v38;
            if ( (Instance & 1) != 0 )
            {
              if ( !v21 )
                break;
              items = v21->fields._items;
              v34 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v21->fields._version;
              if ( !items )
                break;
              size = v21->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v21,
                  (Il2CppObject *)v24,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
              }
              else
              {
                v36 = &items->obj.klass + size;
                v21->fields._size = size + 1;
                v36[4] = (Il2CppClass *)v24;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 4), v24, v31, v32);
              }
            }
          }
        }
      }
      if ( Count == ++v23 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1B64324(Instance);
  }
LABEL_28:
  if ( !v21 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v21,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  Il2CppObject *MasterData_object; // x21
  int64_t v17; // x20
  int32_t Count; // w23
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v22; // x26
  int32_t v23; // w24
  int64_t v24; // x25
  __int64 methodPtr_low; // x10
  __int128 v26; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v28; // x20
  __int64 v29; // x26
  __int64 v30; // x27
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  int64_t v38; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_49FD27C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B640C8(&UserServantEntity_TypeInfo, v14);
    byte_49FD27C = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v17 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v22 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v23 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v23,
                            (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v24 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v26 = *(_OWORD *)(Instance + 64);
          v27 = *v22;
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v24 + 48);
          *(_OWORD *)&v40.fields.fakeValue = v26;
          if ( !v27->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v27);
          v39 = v40;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v39, 0LL);
          if ( Instance == v17 && (*(_BYTE *)(v24 + 300) & 4) == 0 )
          {
            v38 = v17;
            v28 = v22;
            v30 = *(_QWORD *)(v24 + 80);
            v29 = *(_QWORD *)(v24 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v41.fields.currentCryptoKey = v30;
            *(_QWORD *)&v41.fields.fakeValue = v29;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v41, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v22 = v28;
            Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0LL);
            v17 = v38;
            if ( (Instance & 1) != 0 )
            {
              if ( !v21 )
                break;
              items = v21->fields._items;
              v34 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v21->fields._version;
              if ( !items )
                break;
              size = v21->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v21,
                  (Il2CppObject *)v24,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
              }
              else
              {
                v36 = &items->obj.klass + size;
                v21->fields._size = size + 1;
                v36[4] = (Il2CppClass *)v24;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 4), v24, v31, v32);
              }
            }
          }
        }
      }
      if ( Count == ++v23 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1B64324(Instance);
  }
LABEL_28:
  if ( !v21 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v21,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getList(UserServantMaster_o *this, const MethodInfo *method)
{
  int64_t UserId; // x1
  const MethodInfo *v4; // x2

  if ( (byte_49FD276 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    byte_49FD276 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  return UserServantMaster__getList_39912472(this, UserId, v4);
}


UserServantEntity_array *__fastcall UserServantMaster__getList_39912472(
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
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x21
  int32_t v17; // w23
  int64_t v18; // x24
  __int64 methodPtr_low; // x10
  __int128 v20; // q0
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-80h]

  if ( (byte_49FD277 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1B640C8(&UserServantEntity_TypeInfo, v11);
    byte_49FD277 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v14,
                                                       v15);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v17,
                        (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v18 = list;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v20 = *(_OWORD *)(list + 64);
          *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)(list + 48);
          *(_OWORD *)&v29.fields.fakeValue = v20;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v28 = v29;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v28, 0LL);
          if ( list == userId && (*(_BYTE *)(v18 + 300) & 4) == 0 )
          {
            if ( !v16 )
              break;
            items = v16->fields._items;
            v24 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v16->fields._version;
            if ( !items )
              break;
            size = v16->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v16,
                (Il2CppObject *)v18,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = &items->obj.klass + size;
              v16->fields._size = size + 1;
              v26[4] = (Il2CppClass *)v18;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), v18, v21, v22);
            }
          }
        }
      }
      if ( Count == ++v17 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B64324(list);
  }
LABEL_20:
  if ( !v16 )
    goto LABEL_22;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v16,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x27
  int32_t Count; // w23
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x22
  int32_t v22; // w24
  int64_t v23; // x25
  __int64 methodPtr_low; // x10
  __int128 v25; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v26; // x19
  __int64 v27; // x26
  __int64 v28; // x27
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  int64_t v36; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  v3 = userId;
  if ( (byte_49FD286 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B640C8(&UserServantEntity_TypeInfo, v15);
    byte_49FD286 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this->fields.list )
    goto LABEL_28;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v22,
                            (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v23 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v25 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v38.fields.fakeValue = v25;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v37 = v38;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v37, 0LL);
          if ( Instance == v3 && (*(_BYTE *)(v23 + 300) & 4) == 0 )
          {
            v36 = v3;
            v26 = v17;
            v28 = *(_QWORD *)(v23 + 80);
            v27 = *(_QWORD *)(v23 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v39.fields.currentCryptoKey = v28;
            *(_QWORD *)&v39.fields.fakeValue = v27;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v39, 0LL);
            if ( !v26 )
              break;
            v17 = v26;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  v26,
                                  Instance,
                                  (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            v3 = v36;
            if ( !Instance )
              break;
            if ( *(_DWORD *)(Instance + 84) != 3 )
            {
              if ( !v21 )
                break;
              items = v21->fields._items;
              v32 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v21->fields._version;
              if ( !items )
                break;
              size = v21->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v21,
                  (Il2CppObject *)v23,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
              }
              else
              {
                v34 = &items->obj.klass + size;
                v21->fields._size = size + 1;
                v34[4] = (Il2CppClass *)v23;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 4), v23, v29, v30);
              }
            }
          }
        }
      }
      if ( Count == ++v22 )
        goto LABEL_26;
    }
LABEL_28:
    sub_1B64324(Instance);
  }
LABEL_26:
  if ( !v21 )
    goto LABEL_28;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v21,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x27
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_object__o *v24; // x21
  int32_t Count; // w23
  SvtMaterialTdMaster_o *v26; // x24
  __int64 v27; // x25
  __int64 v28; // x26
  __int64 v29; // x1
  __int64 v30; // x2
  System_Object_array *v31; // x24
  int32_t v32; // w25
  Il2CppObject *v33; // x27
  int32_t v34; // w2
  int32_t v35; // w3
  UserServantEntity_c *v36; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v38; // x10
  int32_t v39; // w1
  ServantStatusBattleListViewItem_o *v40; // x26
  System_Predicate_object__o *v41; // x28
  int32_t v42; // w3
  Il2CppObject *klass; // x1
  void *monitor; // x27
  Il2CppClass *v45; // x28
  int32_t v46; // w1
  int32_t v47; // w27
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  UserServantEntity_o *v53; // [xsp+0h] [xbp-70h]
  DataMasterBase_TMaster__TEntity__PKType__o *v54; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_49FD281 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Exists_SvtMaterialTdEntity___, usrSvtEnt);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___, v8);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B640C8(&System_Predicate_SvtMaterialTdEntity__TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B640C8(&Method_UserServantMaster___c__DisplayClass15_0__getNpUpServantList_b__0__, v17);
    sub_1B640C8(&UserServantMaster___c__DisplayClass15_0_TypeInfo, v18);
    sub_1B640C8(&UserServantEntity_TypeInfo, v19);
    byte_49FD281 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v24 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v22,
                                                       v23);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_46;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
  if ( !usrSvtEnt )
    goto LABEL_46;
  v26 = (SvtMaterialTdMaster_o *)Instance;
  v53 = usrSvtEnt;
  v28 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v55.fields.currentCryptoKey = v28;
  *(_QWORD *)&v55.fields.fakeValue = v27;
  v54 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v55, 0LL);
  if ( !v26 )
    goto LABEL_46;
  Instance = SvtMaterialTdMaster__GetEntityList(v26, (int32_t)Instance, 0LL);
  if ( Count >= 1 )
  {
    v31 = (System_Object_array *)Instance;
    v32 = 0;
    do
    {
      v33 = (Il2CppObject *)sub_1B64314(UserServantMaster___c__DisplayClass15_0_TypeInfo, v29, v30);
      System_Object___ctor(v33, 0LL);
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_46;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v32,
                   (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v33 )
        goto LABEL_46;
      if ( Instance )
      {
        v36 = UserServantEntity_TypeInfo;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low )
        {
          if ( *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
            v38 = (Il2CppClass *)Instance;
          else
            v38 = 0LL;
        }
        else
        {
          v38 = 0LL;
        }
        v33[1].klass = v38;
        v40 = (ServantStatusBattleListViewItem_o *)&v33[1];
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low )
        {
          if ( *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == v36 )
            v39 = (int)Instance;
          else
            v39 = 0;
        }
        else
        {
          v39 = 0;
        }
      }
      else
      {
        v39 = 0;
        v33[1].klass = 0LL;
        v40 = (ServantStatusBattleListViewItem_o *)&v33[1];
      }
      sub_1B6406C(v40, v39, v34, v35);
      if ( v40->klass && (*(&v40->klass->_2.bitflags2 + 1) & 4) == 0 )
      {
        v41 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_SvtMaterialTdEntity__TypeInfo, v29, v30);
        System_Predicate_object____ctor(
          v41,
          v33,
          Method_UserServantMaster___c__DisplayClass15_0__getNpUpServantList_b__0__,
          0LL);
        Instance = (void *)System_Array__Exists_object_(
                             v31,
                             (System_Predicate_T__o *)v41,
                             (const MethodInfo_2F2FA74 *)Method_System_Array_Exists_SvtMaterialTdEntity___);
        klass = (Il2CppObject *)v40->klass;
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v24 )
            goto LABEL_46;
LABEL_39:
          items = v24->fields._items;
          v49 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v24->fields._version;
          if ( !items )
            goto LABEL_46;
          size = v24->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v24,
              klass,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
          }
          else
          {
            v51 = &items->obj.klass + size;
            v24->fields._size = size + 1;
            v51[4] = (Il2CppClass *)klass;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 4), (int32_t)klass, v30, v42);
          }
          continue;
        }
        if ( !klass )
          goto LABEL_46;
        v45 = klass[5].klass;
        monitor = klass[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v56.fields.currentCryptoKey = v45;
        *(_QWORD *)&v56.fields.fakeValue = monitor;
        v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v56, 0LL);
        Instance = v54;
        if ( !v54 )
          goto LABEL_46;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v54,
                     v46,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_46;
        v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                *((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance + 2),
                0LL);
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v53->fields.svtId, 0LL);
        if ( v47 == (_DWORD)Instance )
        {
          if ( !v24 )
            goto LABEL_46;
          klass = (Il2CppObject *)v40->klass;
          goto LABEL_39;
        }
      }
    }
    while ( Count != ++v32 );
  }
  if ( !v24 )
LABEL_46:
    sub_1B64324(Instance);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v24,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  Il2CppObject *MasterData_object; // x21
  int64_t v17; // x20
  int32_t Count; // w23
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v22; // x26
  int32_t v23; // w24
  int64_t v24; // x25
  __int64 methodPtr_low; // x10
  __int128 v26; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v28; // x20
  __int64 v29; // x26
  __int64 v30; // x27
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  int64_t v38; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_49FD27D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B640C8(&UserServantEntity_TypeInfo, v14);
    byte_49FD27D = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v17 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v22 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v23 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v23,
                            (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v24 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v26 = *(_OWORD *)(Instance + 64);
          v27 = *v22;
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v24 + 48);
          *(_OWORD *)&v40.fields.fakeValue = v26;
          if ( !v27->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v27);
          v39 = v40;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v39, 0LL);
          if ( Instance == v17 && (*(_BYTE *)(v24 + 300) & 4) == 0 )
          {
            v38 = v17;
            v28 = v22;
            v30 = *(_QWORD *)(v24 + 80);
            v29 = *(_QWORD *)(v24 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v41.fields.currentCryptoKey = v30;
            *(_QWORD *)&v41.fields.fakeValue = v29;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v41, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v22 = v28;
            Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
            v17 = v38;
            if ( (Instance & 1) != 0 )
            {
              if ( !v21 )
                break;
              items = v21->fields._items;
              v34 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v21->fields._version;
              if ( !items )
                break;
              size = v21->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v21,
                  (Il2CppObject *)v24,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
              }
              else
              {
                v36 = &items->obj.klass + size;
                v21->fields._size = size + 1;
                v36[4] = (Il2CppClass *)v24;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 4), v24, v31, v32);
              }
            }
          }
        }
      }
      if ( Count == ++v23 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1B64324(Instance);
  }
LABEL_28:
  if ( !v21 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v21,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  System_Collections_Generic_Dictionary_int__List_int___o *v26; // x22
  __int64 v27; // x23
  __int64 v28; // x24
  int32_t v29; // w21
  int32_t Count; // w23
  __int64 v31; // x1
  __int64 v32; // x2
  Il2CppObject *MasterData_object; // x0
  __int64 v34; // x25
  __int64 v35; // x26
  SvtMaterialTdMaster_o *v36; // x24
  const MethodInfo *v37; // x1
  __int64 v38; // x2
  int32_t i; // w25
  Il2CppObject *v40; // x27
  int32_t v41; // w2
  int32_t v42; // w3
  UserServantEntity_c *v43; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v45; // x10
  int32_t v46; // w1
  ServantStatusBattleListViewItem_o *v47; // x26
  ServantStatusBattleListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q0
  int64_t v50; // x0
  __int128 v51; // q1
  int64_t v52; // x28
  __int64 v53; // x1
  __int64 v54; // x2
  System_Predicate_object__o *v55; // x28
  ServantStatusBattleListViewItem_c *v56; // x8
  Il2CppClass *parent; // x27
  Il2CppClass *declaringType; // x28
  int32_t v59; // w27
  struct System_Int32_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_int__object__o *v63; // x20
  __int64 v64; // x19
  __int64 v65; // x23
  System_Object_array *array; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_Dictionary_int__List_int___o **v68; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_List_int__o *v69; // [xsp+18h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+60h] [xbp-90h]
  Il2CppObject *value; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16

  if ( (byte_49FD280 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Exists_SvtMaterialTdEntity___, usrSvtEnt);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v15);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_1B640C8(&System_Predicate_SvtMaterialTdEntity__TypeInfo, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B640C8(&Method_UserServantMaster___c__DisplayClass14_0__getSameSvtNpLvCache_b__0__, v21);
    sub_1B640C8(&UserServantMaster___c__DisplayClass14_0_TypeInfo, v22);
    sub_1B640C8(&UserServantEntity_TypeInfo, v23);
    byte_49FD280 = 1;
  }
  v24 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    usrSvtEnt,
                                                    cachedUserServantNpLvDict);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  value = (Il2CppObject *)v24;
  if ( !usrSvtEnt )
    goto LABEL_66;
  if ( (usrSvtEnt->fields.status & 2) != 0 )
    goto LABEL_12;
  v26 = *cachedUserServantNpLvDict;
  v28 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v74.fields.currentCryptoKey = v28;
  *(_QWORD *)&v74.fields.fakeValue = v27;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v74, 0LL);
  if ( !v26 )
    goto LABEL_66;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)v26,
          Instance,
          &value,
          (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
LABEL_12:
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      DataManager__GetMasterData_object_(
        (DataManager_o *)Instance,
        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = (int64_t)this->fields.list;
      if ( Instance )
      {
        Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
        v69 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v31,
                                                          v32);
        System_Collections_Generic_List_int____ctor(
          v69,
          (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
          v35 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
          v34 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
          v36 = (SvtMaterialTdMaster_o *)MasterData_object;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v75.fields.currentCryptoKey = v35;
          *(_QWORD *)&v75.fields.fakeValue = v34;
          v68 = cachedUserServantNpLvDict;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v75, 0LL);
          if ( v36 )
          {
            Instance = (int64_t)SvtMaterialTdMaster__GetEntityList(v36, Instance, 0LL);
            array = (System_Object_array *)Instance;
            if ( Count >= 1 )
            {
              for ( i = 0; Count != i; ++i )
              {
                v40 = (Il2CppObject *)sub_1B64314(UserServantMaster___c__DisplayClass14_0_TypeInfo, v37, v38);
                System_Object___ctor(v40, 0LL);
                Instance = (int64_t)this->fields.list;
                if ( !Instance )
                  goto LABEL_66;
                Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                      i,
                                      (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
                if ( !v40 )
                  goto LABEL_66;
                if ( Instance )
                {
                  v43 = UserServantEntity_TypeInfo;
                  methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
                  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low )
                  {
                    if ( *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
                      v45 = (Il2CppClass *)Instance;
                    else
                      v45 = 0LL;
                  }
                  else
                  {
                    v45 = 0LL;
                  }
                  v40[1].klass = v45;
                  v47 = (ServantStatusBattleListViewItem_o *)&v40[1];
                  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low )
                  {
                    if ( *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == v43 )
                      v46 = Instance;
                    else
                      v46 = 0;
                  }
                  else
                  {
                    v46 = 0;
                  }
                }
                else
                {
                  v46 = 0;
                  v40[1].klass = 0LL;
                  v47 = (ServantStatusBattleListViewItem_o *)&v40[1];
                }
                sub_1B6406C(v47, v46, v41, v42);
                klass = v47->klass;
                if ( v47->klass && (*(&klass->_2.bitflags2 + 1) & 6) == 0 )
                {
                  byval_arg = klass->_1.byval_arg;
                  *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
                  *(Il2CppType *)&v72.fields.fakeValue = byval_arg;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  v71 = v72;
                  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v71, 0LL);
                  v51 = *(_OWORD *)&usrSvtEnt->fields.id.fields.fakeValue;
                  v52 = v50;
                  *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)&usrSvtEnt->fields.id.fields.currentCryptoKey;
                  *(_OWORD *)&v70.fields.fakeValue = v51;
                  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v70, 0LL);
                  if ( v52 != Instance )
                  {
                    Instance = UserServantEntity__IsMaterialTd(usrSvtEnt, v37);
                    if ( (Instance & 1) == 0 )
                    {
                      Instance = (int64_t)v47->klass;
                      if ( !v47->klass )
                        goto LABEL_66;
                      Instance = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Instance, v37);
                      if ( (Instance & 1) != 0 )
                      {
                        v55 = (System_Predicate_object__o *)sub_1B64314(
                                                              System_Predicate_SvtMaterialTdEntity__TypeInfo,
                                                              v53,
                                                              v54);
                        System_Predicate_object____ctor(
                          v55,
                          v40,
                          Method_UserServantMaster___c__DisplayClass14_0__getSameSvtNpLvCache_b__0__,
                          0LL);
                        Instance = System_Array__Exists_object_(
                                     array,
                                     (System_Predicate_T__o *)v55,
                                     (const MethodInfo_2F2FA74 *)Method_System_Array_Exists_SvtMaterialTdEntity___);
                        if ( (Instance & 1) == 0 )
                          continue;
                      }
                      else
                      {
                        v56 = v47->klass;
                        if ( !v47->klass )
                          goto LABEL_66;
                        declaringType = v56->_1.declaringType;
                        parent = v56->_1.parent;
                        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        *(_QWORD *)&v76.fields.currentCryptoKey = declaringType;
                        *(_QWORD *)&v76.fields.fakeValue = parent;
                        v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v76, 0LL);
                        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                     usrSvtEnt->fields.svtId,
                                     0LL);
                        if ( v59 != (_DWORD)Instance || (usrSvtEnt->fields.status & 2) != 0 )
                          continue;
                      }
                      if ( !v47->klass )
                        goto LABEL_66;
                      Instance = (int64_t)v69;
                      if ( !v69 )
                        goto LABEL_66;
                      v37 = (const MethodInfo *)*(unsigned int *)&v47->klass->_2.typeHierarchyDepth;
                      items = v69->fields._items;
                      v61 = Method_System_Collections_Generic_List_int__Add__;
                      ++v69->fields._version;
                      if ( !items )
                        goto LABEL_66;
                      size = v69->fields._size;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v69,
                          (int32_t)v37,
                          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v69->fields._size = size + 1;
                        items->m_Items[size + 1] = (int)v37;
                      }
                    }
                  }
                }
              }
            }
            if ( v69 )
            {
              if ( v69->fields._size < 1 )
                return 0;
              v29 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)v69, 0LL);
              if ( (usrSvtEnt->fields.status & 2) != 0 )
                return v29;
              v63 = (System_Collections_Generic_Dictionary_int__object__o *)*v68;
              v65 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
              v64 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v77.fields.currentCryptoKey = v65;
              *(_QWORD *)&v77.fields.fakeValue = v64;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v77, 0LL);
              if ( v63 )
              {
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  v63,
                  Instance,
                  (Il2CppObject *)v69,
                  (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
                return v29;
              }
            }
          }
        }
      }
    }
LABEL_66:
    sub_1B64324(Instance);
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
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_int__o *v22; // x20
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
  int64_t v36; // x25
  __int64 v37; // x25
  __int64 v38; // x26
  __int64 v39; // x0
  Il2CppObject *Entity; // x0
  __int64 v41; // x25
  __int64 v42; // x26
  __int64 v43; // x0
  __int64 v44; // x24
  __int64 v45; // x25
  __int64 v46; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  int32_t v50; // w29
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0
  const MethodInfo *v55; // x1
  __int64 v56; // x1
  __int64 v57; // x8
  int64_t v58; // x22
  unsigned __int64 v59; // x21
  __int64 v60; // x26
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
  int32_t v74; // [xsp+Ch] [xbp-C4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+50h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16

  if ( (byte_49FD279 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B640C8(&System_IDisposable_TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1B640C8(&NetworkManager_TypeInfo, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B640C8(&UserServantEntity_TypeInfo, v17);
    byte_49FD279 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  v73 = (UserServantStorageMaster_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v22 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v20, v21);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_82;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
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
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v31 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
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
        sub_1B645E4(v32);
        goto LABEL_81;
      }
      v35 = v32[4];
      *(_OWORD *)&v77.fields.currentCryptoKey = v32[3];
      *(_OWORD *)&v77.fields.fakeValue = v35;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v76 = v77;
      v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v76, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( v36 == NetworkManager__get_UserId(0LL) && (*((_BYTE *)v33 + 300) & 4) == 0 )
      {
        v38 = *((_QWORD *)v33 + 10);
        v37 = *((_QWORD *)v33 + 11);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v78.fields.currentCryptoKey = v38;
        *(_QWORD *)&v78.fields.fakeValue = v37;
        v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v78, 0LL);
        if ( !MasterData_object )
          sub_1B64324(v39);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v39,
                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_1B64324(0LL);
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0LL) )
        {
          v42 = *((_QWORD *)v33 + 10);
          v41 = *((_QWORD *)v33 + 11);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v79.fields.currentCryptoKey = v42;
          *(_QWORD *)&v79.fields.fakeValue = v41;
          v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v79, 0LL);
          if ( !v22 )
            sub_1B64324(v43);
          if ( !System_Collections_Generic_List_int___Contains(
                  v22,
                  v43,
                  (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            v45 = *((_QWORD *)v33 + 10);
            v44 = *((_QWORD *)v33 + 11);
            ++v74;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v80.fields.currentCryptoKey = v45;
            *(_QWORD *)&v80.fields.fakeValue = v44;
            v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v80, 0LL);
            items = v22->fields._items;
            v48 = Method_System_Collections_Generic_List_int__Add__;
            ++v22->fields._version;
            if ( !items )
              sub_1B64324(v46);
            size = v22->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v22,
                v46,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
            }
            else
            {
              v22->fields._size = size + 1;
              items->m_Items[size + 1] = v46;
            }
          }
        }
      }
    }
  }
  v50 = v74;
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
        goto LABEL_49;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_49:
    v54 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(Enumerator, *(_QWORD *)(v54 + 8));
  Instance = (int64_t)v73;
  if ( !v73 || (Instance = (int64_t)UserServantStorageMaster__getList(v73, v55)) == 0 )
LABEL_82:
    sub_1B64324(Instance);
  v57 = *(_QWORD *)(Instance + 24);
  v58 = Instance;
  if ( (int)v57 >= 1 )
  {
    v59 = 0LL;
    while ( v59 < (unsigned int)v57 )
    {
      v60 = *(_QWORD *)(v58 + 32 + 8 * v59);
      if ( v60 )
      {
        v61 = *(_OWORD *)(v60 + 64);
        *(_OWORD *)&v77.fields.currentCryptoKey = *(_OWORD *)(v60 + 48);
        *(_OWORD *)&v77.fields.fakeValue = v61;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v75 = v77;
        v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v75, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        if ( v62 == Instance && (*(_BYTE *)(v60 + 300) & 4) == 0 )
        {
          v64 = *(_QWORD *)(v60 + 80);
          v63 = *(_QWORD *)(v60 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v81.fields.currentCryptoKey = v64;
          *(_QWORD *)&v81.fields.fakeValue = v63;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v81, 0LL);
          if ( !MasterData_object )
            goto LABEL_82;
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                Instance,
                                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_82;
          Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
          if ( (Instance & 1) != 0 )
          {
            v66 = *(_QWORD *)(v60 + 80);
            v65 = *(_QWORD *)(v60 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v82.fields.currentCryptoKey = v66;
            *(_QWORD *)&v82.fields.fakeValue = v65;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v82, 0LL);
            if ( !v22 )
              goto LABEL_82;
            Instance = System_Collections_Generic_List_int___Contains(
                         v22,
                         Instance,
                         (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
            if ( (Instance & 1) == 0 )
            {
              v68 = *(_QWORD *)(v60 + 80);
              v67 = *(_QWORD *)(v60 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v83.fields.currentCryptoKey = v68;
              *(_QWORD *)&v83.fields.fakeValue = v67;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v83, 0LL);
              v69 = v22->fields._items;
              v70 = Method_System_Collections_Generic_List_int__Add__;
              ++v22->fields._version;
              if ( !v69 )
                goto LABEL_82;
              v71 = v22->fields._size;
              v56 = (unsigned int)Instance;
              ++v50;
              if ( (unsigned int)v71 >= v69->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v22,
                  Instance,
                  *(const MethodInfo_348FEDC **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
              }
              else
              {
                v22->fields._size = v71 + 1;
                v69->m_Items[v71 + 1] = Instance;
              }
            }
          }
        }
      }
      LODWORD(v57) = *(_DWORD *)(v58 + 24);
      if ( (__int64)++v59 >= (int)v57 )
        return v50;
    }
LABEL_81:
    sub_1B6432C(Instance, v56);
  }
  return v50;
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
  Il2CppObject *MasterData_object; // x21
  int64_t v17; // x20
  int32_t Count; // w23
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v22; // x26
  int32_t v23; // w24
  int64_t v24; // x25
  __int64 methodPtr_low; // x10
  __int128 v26; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v28; // x20
  __int64 v29; // x26
  __int64 v30; // x27
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  int64_t v38; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_49FD27F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B640C8(&UserServantEntity_TypeInfo, v14);
    byte_49FD27F = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v17 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v22 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v23 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v23,
                            (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v24 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v26 = *(_OWORD *)(Instance + 64);
          v27 = *v22;
          *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)(v24 + 48);
          *(_OWORD *)&v40.fields.fakeValue = v26;
          if ( !v27->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v27);
          v39 = v40;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v39, 0LL);
          if ( Instance == v17 && (*(_BYTE *)(v24 + 300) & 4) == 0 )
          {
            v38 = v17;
            v28 = v22;
            v30 = *(_QWORD *)(v24 + 80);
            v29 = *(_QWORD *)(v24 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v41.fields.currentCryptoKey = v30;
            *(_QWORD *)&v41.fields.fakeValue = v29;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v41, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v22 = v28;
            Instance = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
            v17 = v38;
            if ( (Instance & 1) != 0 )
            {
              if ( !v21 )
                break;
              items = v21->fields._items;
              v34 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v21->fields._version;
              if ( !items )
                break;
              size = v21->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v21,
                  (Il2CppObject *)v24,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
              }
              else
              {
                v36 = &items->obj.klass + size;
                v21->fields._size = size + 1;
                v36[4] = (Il2CppClass *)v24;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 4), v24, v31, v32);
              }
            }
          }
        }
      }
      if ( Count == ++v23 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1B64324(Instance);
  }
LABEL_28:
  if ( !v21 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v21,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  Il2CppObject *MasterData_object; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  Il2CppObject *v30; // x0
  Il2CppObject *v31; // x22
  __int64 methodPtr_low; // x9
  Il2CppObject v33; // q0
  int64_t v34; // x23
  void *monitor; // x23
  Il2CppClass *v36; // x24
  __int64 v37; // x0
  Il2CppObject *Entity; // x0
  _BOOL8 IsServant; // x0
  int32_t v40; // w2
  int32_t v41; // w3
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_49FD278 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v10);
    sub_1B640C8(&NetworkManager_TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B640C8(&UserServantEntity_TypeInfo, v15);
    byte_49FD278 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___),
        v20 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                             System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                             v18,
                                                             v19),
        System_Collections_Generic_List_object____ctor(
          v20,
          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
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
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v29 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v30 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                            Enumerator,
                            *(_QWORD *)(v29 + 8));
    v31 = v30;
    if ( v30 )
    {
      methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v30->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (UserServantEntity_c *)v30->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantEntity_TypeInfo )
      {
        sub_1B645E4(v30);
LABEL_46:
        sub_1B64324(Entity);
      }
      v33 = v30[4];
      *(Il2CppObject *)&v52.fields.currentCryptoKey = v30[3];
      *(Il2CppObject *)&v52.fields.fakeValue = v33;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v51 = v52;
      v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v51, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( v34 == NetworkManager__get_UserId(0LL) && (BYTE4(v31[18].monitor) & 4) == 0 )
      {
        v36 = v31[5].klass;
        monitor = v31[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v53.fields.currentCryptoKey = v36;
        *(_QWORD *)&v53.fields.fakeValue = monitor;
        v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v53, 0LL);
        if ( !MasterData_object )
          sub_1B64324(v37);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v37,
                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          goto LABEL_46;
        IsServant = ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL);
        if ( IsServant )
        {
          if ( !v20 )
            sub_1B64324(IsServant);
          items = v20->fields._items;
          v43 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v20->fields._version;
          if ( !items )
            sub_1B64324(IsServant);
          size = v20->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v20,
              v31,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            v45 = &items->obj.klass + size;
            v20->fields._size = size + 1;
            v45[4] = (Il2CppClass *)v31;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v31, v40, v41);
          }
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
        goto LABEL_42;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_42:
    v49 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(Enumerator, *(_QWORD *)(v49 + 8));
  return (System_Collections_Generic_List_UserServantEntity__o *)v20;
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
  Il2CppObject *MasterData_object; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *v23; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  UserServantEntity_o *v33; // x0
  UserServantEntity_o *v34; // x23
  __int64 methodPtr_low; // x9
  __int128 v36; // q0
  int64_t v37; // x24
  const MethodInfo *v38; // x2
  __int64 SvtClassId; // x0
  __int64 v40; // x24
  __int64 v41; // x25
  int32_t v42; // w1
  Il2CppObject *Entity; // x0
  _BOOL8 IsServant; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v56; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  if ( (byte_49FD27B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, classIdList);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1B640C8(&System_IDisposable_TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1B640C8(&NetworkManager_TypeInfo, v14);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&UserServantEntity_TypeInfo, v18);
    byte_49FD27B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___),
        v23 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                             System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                             v21,
                                                             v22),
        System_Collections_Generic_List_object____ctor(
          v23,
          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  v56 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
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
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v32 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v33 = (UserServantEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                                   Enumerator,
                                   *(_QWORD *)(v32 + 8));
    v34 = v33;
    if ( v33 )
    {
      methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v33->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UserServantEntity_c *)v33->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantEntity_TypeInfo )
      {
        sub_1B645E4(v33);
LABEL_48:
        sub_1B64324(SvtClassId);
      }
      v36 = *(_OWORD *)&v33->fields.userId.fields.fakeValue;
      *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&v33->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v58.fields.fakeValue = v36;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v57 = v58;
      v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v57, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( v37 == NetworkManager__get_UserId(0LL) && (v34->fields.status & 4) == 0 )
      {
        SvtClassId = UserServantEntity__getSvtClassId(v34, 0, v38);
        if ( !classIdList )
          goto LABEL_48;
        if ( System_Collections_Generic_List_int___Contains(
               classIdList,
               SvtClassId,
               (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v41 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
          v40 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v59.fields.currentCryptoKey = v41;
          *(_QWORD *)&v59.fields.fakeValue = v40;
          v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v59, 0LL);
          if ( !v56 )
            sub_1B64324(0LL);
          Entity = DataMasterBase_object__object__int___GetEntity(
                     v56,
                     v42,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Entity )
            sub_1B64324(0LL);
          IsServant = ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL);
          if ( IsServant )
          {
            if ( !v23 )
              sub_1B64324(IsServant);
            items = v23->fields._items;
            v48 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v23->fields._version;
            if ( !items )
              sub_1B64324(IsServant);
            size = v23->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v23,
                (Il2CppObject *)v34,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
            }
            else
            {
              v50 = &items->obj.klass + size;
              v23->fields._size = size + 1;
              v50[4] = (Il2CppClass *)v34;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v50 + 4), (int32_t)v34, v45, v46);
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
        goto LABEL_44;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_44:
    v54 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(Enumerator, *(_QWORD *)(v54 + 8));
  return (System_Collections_Generic_List_UserServantEntity__o *)v23;
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
  System_Collections_Generic_List_object__o *v21; // x21
  UserServantEntity_array *Instance; // x0
  const MethodInfo *v23; // x1
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_long__o *v26; // x20
  _BOOL8 v27; // x0
  Il2CppObject *current; // x28
  void *monitor; // x21
  Il2CppClass *klass; // x22
  Il2CppObject v31; // q0
  int64_t v32; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_49FD28A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor___75673192, v12);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v14);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_49FD28A = 1;
  }
  memset(&v39, 0, sizeof(v39));
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, *(const MethodInfo **)&svtId);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor_55234504(
    v21,
    List,
    (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___75673192);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL
    || (Instance = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, v23), !v21) )
  {
    sub_1B64324(Instance);
  }
  System_Collections_Generic_List_object___AddRange(
    v21,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  v26 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v24, v25);
  System_Collections_Generic_List_long____ctor(
    v26,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    v21,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  *(_OWORD *)&v39.fields._list = *(_OWORD *)&v38.fields.currentCryptoKey;
  v39.fields._current = (Il2CppObject *)v38.fields.fakeValue;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v27 )
      break;
    current = v39.fields._current;
    if ( !v39.fields._current )
      sub_1B64324(v27);
    klass = v39.fields._current[5].klass;
    monitor = v39.fields._current[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v40.fields.currentCryptoKey = klass;
    *(_QWORD *)&v40.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v40, 0LL) == svtId
      && (BYTE4(current[18].monitor) & 2) == 0 )
    {
      v31 = current[2];
      *(Il2CppObject *)&v38.fields.currentCryptoKey = current[1];
      *(Il2CppObject *)&v38.fields.fakeValue = v31;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v37 = v38;
      v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v37, 0LL);
      if ( !v26 )
        sub_1B64324(v32);
      items = v26->fields._items;
      v34 = Method_System_Collections_Generic_List_long__Add__;
      ++v26->fields._version;
      if ( !items )
        sub_1B64324(v32);
      size = v26->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v26,
          v32,
          *(const MethodInfo_3495074 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v26->fields._size = size + 1;
        items->m_Items[size] = v32;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  return v26;
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

  if ( (byte_49FD28E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1B640C8(&UserServantEntity_TypeInfo, v8);
    byte_49FD28E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v27, 0LL) == svtId
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
          v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v25, 0LL);
          v22 = *(_OWORD *)&v14[1].monitor;
          *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&v14->fields.items;
          *(_OWORD *)&v24.fields.fakeValue = v22;
          if ( v21 > CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v24, 0LL) )
LABEL_20:
            v12 = v14;
        }
      }
      if ( v11 == ++v13 )
        return (UserServantEntity_o *)v12;
    }
LABEL_25:
    sub_1B64324(list);
  }
  return 0LL;
}


void __fastcall UserServantMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FD295 & 1) == 0 )
  {
    sub_1B640C8(&UserServantMaster___c_TypeInfo, v1);
    byte_49FD295 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(UserServantMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  UserServantMaster___c_TypeInfo->static_fields->__9 = (struct UserServantMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)UserServantMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
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
  if ( (byte_49FD296 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass14_0_o *)sub_1B640C8(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          m);
    byte_49FD296 = 1;
  }
  if ( !m || (e = v4->fields.e) == 0LL )
    sub_1B64324(this);
  materialSvtId = m->fields.materialSvtId;
  v8 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v10, 0LL);
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
  if ( (byte_49FD297 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass15_0_o *)sub_1B640C8(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          m);
    byte_49FD297 = 1;
  }
  if ( !m || (e = v4->fields.e) == 0LL )
    sub_1B64324(this);
  materialSvtId = m->fields.materialSvtId;
  v8 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v10, 0LL);
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
  if ( (byte_49FD298 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass1_0_o *)sub_1B640C8(
                                                         &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                         ent);
    byte_49FD298 = 1;
  }
  if ( !ent )
    sub_1B64324(this);
  v6 = *(_QWORD *)&ent->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&ent->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return v4->fields.svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v8, 0LL);
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
  if ( (byte_49FD299 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass31_0_o *)sub_1B640C8(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          usrSvt);
    byte_49FD299 = 1;
  }
  if ( !usrSvt )
    sub_1B64324(this);
  v6 = *(_QWORD *)&usrSvt->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&usrSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v8, 0LL) == v4->fields.svtId;
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
    sub_1B64324(this);
  }
  return (_DWORD)this - UserServantEntity__getSkillLevel(a, v5->fields.skillIdx, v6);
}