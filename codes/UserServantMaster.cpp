void __fastcall UserServantMaster___ctor(UserServantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF36B & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__, method);
    byte_49FF36B = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    14,
    (const MethodInfo_30D62EC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__);
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
    sub_1B64ACC(0LL, v8);
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
    sub_1B64ACC(0LL, v7);
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
  const MethodInfo *v27; // x2
  __int64 v28; // x27
  __int64 v29; // x28
  int32_t v30; // w27
  __int64 v31; // x27
  __int64 v32; // x28
  int32_t v33; // w27
  const MethodInfo *v34; // x3
  UserServantEntity_o *v36; // [xsp+10h] [xbp-B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+40h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_49FF384 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v7);
    sub_1B64870(&NetworkManager_TypeInfo, v8);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B64870(&UserServantEntity_TypeInfo, v12);
    byte_49FF384 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_50;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v36 = 0LL;
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
                                                                 (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)&list[2].klass;
      *(_OWORD *)&v39.fields.fakeValue = v21;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v38 = v39;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v38, 0LL) == v16 )
      {
        v23 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
        v22 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v40.fields.currentCryptoKey = v23;
        *(_QWORD *)&v40.fields.fakeValue = v22;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v40, 0LL) == svtId )
        {
          if ( (v19->fields.status & 4) != 0 )
          {
            v36 = v19;
          }
          else if ( v17 )
          {
            v25 = *(_QWORD *)&v19->fields.limitCount.fields.currentCryptoKey;
            v24 = *(_QWORD *)&v19->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v41.fields.currentCryptoKey = v25;
            *(_QWORD *)&v41.fields.fakeValue = v24;
            v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v41, 0LL);
            if ( v26 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v17->fields.limitCount, 0LL)
              || v19->fields.lv > v17->fields.lv )
            {
              goto LABEL_24;
            }
            v29 = *(_QWORD *)&v19->fields.limitCount.fields.currentCryptoKey;
            v28 = *(_QWORD *)&v19->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v42.fields.currentCryptoKey = v29;
            *(_QWORD *)&v42.fields.fakeValue = v28;
            v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v42, 0LL);
            if ( v30 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v17->fields.limitCount, 0LL)
              && v19->fields.lv == v17->fields.lv
              && (v19->fields.status & 0x40) == 0
              && (v17->fields.status & 0x40) != 0 )
            {
              goto LABEL_24;
            }
            v32 = *(_QWORD *)&v19->fields.limitCount.fields.currentCryptoKey;
            v31 = *(_QWORD *)&v19->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v43.fields.currentCryptoKey = v32;
            *(_QWORD *)&v43.fields.fakeValue = v31;
            v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v43, 0LL);
            if ( v33 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v17->fields.limitCount, 0LL)
              && v19->fields.lv == v17->fields.lv
              && v19->fields.createdAt < v17->fields.createdAt )
            {
LABEL_24:
              v17 = (UserServantEntity_o *)sub_1B64ABC(UserServantEntity_TypeInfo);
              UserServantEntity___ctor_39863300(v17, v19, v27);
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
    sub_1B64ACC(list, *(_QWORD *)&svtId);
  }
  v36 = 0LL;
  v17 = 0LL;
LABEL_42:
  if ( checkStorage )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !list )
      goto LABEL_50;
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)list,
                                                               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !list )
      goto LABEL_50;
    v17 = UserServantStorageMaster__CostumeTargetEntity((UserServantStorageMaster_o *)list, svtId, v17, v34);
  }
  if ( v17 )
    return v17;
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
  __int64 v17; // x1
  int64_t Instance; // x0
  const MethodInfo *v19; // x1
  Il2CppObject *MasterData_object; // x19
  System_Collections_Generic_List_int__o *v21; // x20
  __int64 v22; // x1
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
  __int64 v41; // x1
  __int64 v42; // x24
  __int64 v43; // x25
  __int64 v44; // x0
  __int64 v45; // x23
  __int64 v46; // x24
  __int64 v47; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0
  __int64 v55; // x8
  int64_t v56; // x21
  unsigned __int64 v57; // x24
  __int64 v58; // x28
  __int128 v59; // q0
  int64_t v60; // x22
  __int64 v61; // x22
  __int64 v62; // x23
  __int64 v63; // x22
  __int64 v64; // x23
  __int64 v65; // x22
  __int64 v66; // x23
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

  if ( (byte_49FF373 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B64870(&System_IDisposable_TypeInfo, v6);
    sub_1B64870(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1B64870(&NetworkManager_TypeInfo, v13);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B64870(&UserServantEntity_TypeInfo, v17);
    byte_49FF373 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  v71 = (UserServantStorageMaster_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v21 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_81;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64ACC(0LL, v22);
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
      p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v31 = sub_1BB6850(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
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
        sub_1B64D8C(v32);
        goto LABEL_80;
      }
      v35 = v32[4];
      *(_OWORD *)&v74.fields.currentCryptoKey = v32[3];
      *(_OWORD *)&v74.fields.fakeValue = v35;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v73 = v74;
      v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v73, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( v36 == NetworkManager__get_UserId(0LL) && (*((_BYTE *)v33 + 300) & 4) == 0 )
      {
        v38 = *((_QWORD *)v33 + 10);
        v37 = *((_QWORD *)v33 + 11);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v75.fields.currentCryptoKey = v38;
        *(_QWORD *)&v75.fields.fakeValue = v37;
        v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v75, 0LL);
        if ( !MasterData_object )
          sub_1B64ACC(v39, (unsigned int)v39);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v39,
                   (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_1B64ACC(0LL, v41);
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0LL) )
        {
          v43 = *((_QWORD *)v33 + 10);
          v42 = *((_QWORD *)v33 + 11);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v76.fields.currentCryptoKey = v43;
          *(_QWORD *)&v76.fields.fakeValue = v42;
          v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v76, 0LL);
          if ( !v21 )
            sub_1B64ACC(v44, (unsigned int)v44);
          if ( !System_Collections_Generic_List_int___Contains(
                  v21,
                  v44,
                  (const MethodInfo_3492530 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            v46 = *((_QWORD *)v33 + 10);
            v45 = *((_QWORD *)v33 + 11);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v77.fields.currentCryptoKey = v46;
            *(_QWORD *)&v77.fields.fakeValue = v45;
            v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v77, 0LL);
            items = v21->fields._items;
            v49 = Method_System_Collections_Generic_List_int__Add__;
            ++v21->fields._version;
            if ( !items )
              sub_1B64ACC(v47, (unsigned int)v47);
            size = v21->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v21,
                v47,
                *(const MethodInfo_34921B8 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
            }
            else
            {
              v21->fields._size = size + 1;
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
        goto LABEL_48;
    }
    v54 = (__int64)&v51->vtable[*v53].method;
  }
  else
  {
LABEL_48:
    v54 = sub_1BB6850(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(Enumerator, *(_QWORD *)(v54 + 8));
  Instance = (int64_t)v71;
  if ( !v71 || (Instance = (int64_t)UserServantStorageMaster__getList(v71, v19)) == 0 )
LABEL_81:
    sub_1B64ACC(Instance, v19);
  v55 = *(_QWORD *)(Instance + 24);
  v56 = Instance;
  if ( (int)v55 >= 1 )
  {
    v57 = 0LL;
    while ( v57 < (unsigned int)v55 )
    {
      v58 = *(_QWORD *)(v56 + 32 + 8 * v57);
      if ( v58 )
      {
        v59 = *(_OWORD *)(v58 + 64);
        *(_OWORD *)&v74.fields.currentCryptoKey = *(_OWORD *)(v58 + 48);
        *(_OWORD *)&v74.fields.fakeValue = v59;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v72 = v74;
        v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v72, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        if ( v60 == Instance )
        {
          v62 = *(_QWORD *)(v58 + 80);
          v61 = *(_QWORD *)(v58 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v78.fields.currentCryptoKey = v62;
          *(_QWORD *)&v78.fields.fakeValue = v61;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v78, 0LL);
          if ( !v21 )
            goto LABEL_81;
          Instance = System_Collections_Generic_List_int___Contains(
                       v21,
                       Instance,
                       (const MethodInfo_3492530 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Instance & 1) == 0 && (*(_BYTE *)(v58 + 300) & 4) == 0 )
          {
            v64 = *(_QWORD *)(v58 + 80);
            v63 = *(_QWORD *)(v58 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v79.fields.currentCryptoKey = v64;
            *(_QWORD *)&v79.fields.fakeValue = v63;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v79, 0LL);
            if ( !MasterData_object )
              goto LABEL_81;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              goto LABEL_81;
            Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
            if ( (Instance & 1) != 0 )
            {
              v66 = *(_QWORD *)(v58 + 80);
              v65 = *(_QWORD *)(v58 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v80.fields.currentCryptoKey = v66;
              *(_QWORD *)&v80.fields.fakeValue = v65;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v80, 0LL);
              v67 = v21->fields._items;
              v68 = Method_System_Collections_Generic_List_int__Add__;
              ++v21->fields._version;
              if ( !v67 )
                goto LABEL_81;
              v69 = v21->fields._size;
              v19 = (const MethodInfo *)(unsigned int)Instance;
              if ( (unsigned int)v69 >= v67->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v21,
                  Instance,
                  *(const MethodInfo_34921B8 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
              }
              else
              {
                v21->fields._size = v69 + 1;
                v67->m_Items[v69 + 1] = Instance;
              }
            }
          }
        }
      }
      LODWORD(v55) = *(_DWORD *)(v56 + 24);
      if ( (__int64)++v57 >= (int)v55 )
        return v21;
    }
LABEL_80:
    sub_1B64AD4(Instance, v19);
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
  Il2CppObject *MasterData_object; // x27
  int64_t v18; // x20
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v20; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v21; // x26
  __int64 *v22; // x21
  int32_t v23; // w24
  int64_t v24; // x25
  __int64 methodPtr_low; // x10
  __int128 v26; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v27; // x0
  const MethodInfo_30D6180 **v28; // x22
  Il2CppObject *v29; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v30; // x20
  __int64 v31; // x26
  __int64 v32; // x27
  int32_t v33; // w1
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  System_Collections_Generic_List_object__o *v42; // [xsp+0h] [xbp-B0h]
  int64_t v43; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_49FF385 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1B64870(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1B64870(&NetworkManager_TypeInfo, v10);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B64870(&UserServantEntity_TypeInfo, v14);
    byte_49FF385 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_31;
  v18 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v24 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v26 = *(_OWORD *)(Instance + 64);
          v27 = *v21;
          *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)(v24 + 48);
          *(_OWORD *)&v45.fields.fakeValue = v26;
          if ( !v27->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v27);
          v44 = v45;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v44, 0LL);
          if ( Instance == v18 && (*(_BYTE *)(v24 + 300) & 4) == 0 )
          {
            v42 = v20;
            v43 = v18;
            v28 = (const MethodInfo_30D6180 **)v22;
            v29 = MasterData_object;
            v30 = v21;
            v32 = *(_QWORD *)(v24 + 80);
            v31 = *(_QWORD *)(v24 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v46.fields.currentCryptoKey = v32;
            *(_QWORD *)&v46.fields.fakeValue = v31;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v46, 0LL);
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
            v20 = v42;
            v18 = v43;
            if ( (Instance & 1) != 0 && (*(_BYTE *)(v24 + 300) & 0x11) == 0 )
            {
              if ( !v42 )
                break;
              items = v42->fields._items;
              v38 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v42->fields._version;
              if ( !items )
                break;
              size = v42->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v42,
                  (Il2CppObject *)v24,
                  *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
              }
              else
              {
                v40 = &items->obj.klass + size;
                v42->fields._size = size + 1;
                v40[4] = (Il2CppClass *)v24;
                sub_1B64814((ServantStatusBattleListViewItem_o *)(v40 + 4), v24, v35, v36);
              }
            }
          }
        }
      }
      if ( Count == ++v23 )
        goto LABEL_29;
    }
LABEL_31:
    sub_1B64ACC(Instance, v16);
  }
LABEL_29:
  if ( !v20 )
    goto LABEL_31;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v20,
                                      (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__GetEntities(
        UserServantMaster_o *this,
        System_Int64_array *userServantIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_long__o *v6; // x21

  if ( (byte_49FF38A & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_long___ctor___75665856, userServantIds);
    sub_1B64870(&System_Collections_Generic_List_long__TypeInfo, v5);
    byte_49FF38A = 1;
  }
  if ( userServantIds )
  {
    v6 = (System_Collections_Generic_List_long__o *)sub_1B64ABC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor_55143460(
      v6,
      (System_Collections_Generic_IEnumerable_T__o *)userServantIds,
      (const MethodInfo_3496C24 *)Method_System_Collections_Generic_List_long___ctor___75665856);
  }
  else
  {
    v6 = 0LL;
  }
  return UserServantMaster__GetEntities_39940972(this, v6, method);
}


UserServantEntity_array *__fastcall UserServantMaster__GetEntities_39940972(
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+20h] [xbp-80h]

  if ( (byte_49FF38B & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, userServantIds);
    sub_1B64870(&System_IDisposable_TypeInfo, v5);
    sub_1B64870(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_long__Contains__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_long__get_Count__, v12);
    sub_1B64870(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1B64870(&UserServantEntity_TypeInfo, v15);
    byte_49FF38B = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( userServantIds && userServantIds->fields._size >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_43;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   list,
                   (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_1B64ACC(0LL, v19);
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
        p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
        v28 = sub_1BB6850(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
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
          sub_1B64D8C(v29);
LABEL_41:
          sub_1B64ACC(v34, v35);
        }
        v32 = v29[2];
        *(Il2CppObject *)&v48.fields.currentCryptoKey = v29[1];
        *(Il2CppObject *)&v48.fields.fakeValue = v32;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v47 = v48;
        v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v47, 0LL);
        v34 = System_Collections_Generic_List_long___Contains(
                userServantIds,
                v33,
                (const MethodInfo_34976C8 *)Method_System_Collections_Generic_List_long__Contains__);
        if ( v34 )
        {
          if ( !v16 )
            goto LABEL_41;
          items = v16->fields._items;
          v39 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v16->fields._version;
          if ( !items )
            sub_1B64ACC(v34, v35);
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              v30,
              *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v41[4] = (Il2CppClass *)v30;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v30, v36, v37);
          }
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
          goto LABEL_35;
      }
      v45 = (__int64)&v42->vtable[*v44].method;
    }
    else
    {
LABEL_35:
      v45 = sub_1BB6850(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
                                                               Enumerator,
                                                               *(_QWORD *)(v45 + 8));
  }
  if ( !v16 )
LABEL_43:
    sub_1B64ACC(list, v18);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v16,
                                      (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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

  if ( (byte_49FF386 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Array_FindAll_UserServantEntity___, *(_QWORD *)&svtId);
    sub_1B64870(&Method_System_Array_Sort_UserServantEntity___, v7);
    sub_1B64870(&System_Comparison_UserServantEntity__TypeInfo, v8);
    sub_1B64870(&System_Predicate_UserServantEntity__TypeInfo, v9);
    sub_1B64870(&Method_UserServantMaster___c__DisplayClass31_0__GetHaveServantSkillLevelMax_b__0__, v10);
    sub_1B64870(&Method_UserServantMaster___c__DisplayClass31_0__GetHaveServantSkillLevelMax_b__1__, v11);
    sub_1B64870(&UserServantMaster___c__DisplayClass31_0_TypeInfo, v12);
    byte_49FF386 = 1;
  }
  v13 = sub_1B64ABC(UserServantMaster___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_10;
  *(_DWORD *)(v13 + 16) = svtId;
  *(_DWORD *)(v13 + 20) = skillIdx;
  AllList = (System_Object_array *)UserServantMaster__getAllList(this, v15);
  v17 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_UserServantEntity__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v13,
    Method_UserServantMaster___c__DisplayClass31_0__GetHaveServantSkillLevelMax_b__0__,
    0LL);
  All_object = (UserServantEntity_o *)System_Array__FindAll_object_(
                                        AllList,
                                        (System_Predicate_T__o *)v17,
                                        (const MethodInfo_2F32738 *)Method_System_Array_FindAll_UserServantEntity___);
  if ( !All_object )
    goto LABEL_10;
  v18 = (System_Object_array *)All_object;
  if ( All_object->fields.id.fields.hiddenValue )
  {
    v19 = (System_Comparison_T__o *)sub_1B64ABC(System_Comparison_UserServantEntity__TypeInfo);
    System_Comparison_object____ctor(
      v19,
      (Il2CppObject *)v13,
      Method_UserServantMaster___c__DisplayClass31_0__GetHaveServantSkillLevelMax_b__1__,
      0LL);
    System_Array__Sort_object__48273508(
      v18,
      v19,
      (const MethodInfo_2E09864 *)Method_System_Array_Sort_UserServantEntity___);
    if ( !v18->max_length )
      sub_1B64AD4(v20, v15);
    All_object = (UserServantEntity_o *)v18->m_Items[0];
    if ( All_object )
      return UserServantEntity__getSkillLevel(All_object, *(_DWORD *)(v13 + 20), v21);
LABEL_10:
    sub_1B64ACC(All_object, v15);
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

  if ( (byte_49FF37D & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1B64870(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v5);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1B64870(&System_Math_TypeInfo, v7);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FF37D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___),
        AllList = UserServantMaster__getAllList(this, v13),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL
    || (Instance = (Il2CppObject *)UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL),
        !AllList) )
  {
LABEL_21:
    sub_1B64ACC(Instance, v11);
  }
  v15 = *(_QWORD *)&AllList->max_length;
  v16 = (unsigned __int8)Instance & 1;
  if ( (int)v15 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v15; ++i )
    {
      if ( i >= (unsigned int)v15 )
        sub_1B64AD4(Instance, v11);
      v18 = AllList->m_Items[i];
      if ( v18 )
      {
        v20 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
        v19 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v23.fields.currentCryptoKey = v20;
        *(_QWORD *)&v23.fields.fakeValue = v19;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v23, 0LL);
        if ( !MasterData_object )
          goto LABEL_21;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_21;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                     (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Instance[2],
                                     0LL);
        if ( (_DWORD)Instance == servantId )
        {
          treasureDeviceLv1 = v18->fields.treasureDeviceLv1;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          Instance = (Il2CppObject *)System_Math__Max_62202216(v16, treasureDeviceLv1, 0LL);
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

  if ( (byte_49FF37B & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1B64870(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v7);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49FF37B = 1;
  }
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
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
      sub_1B64AD4(Instance, v12);
    v19 = v16->m_Items[v18];
    if ( v19 )
    {
      v21 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v23.fields.currentCryptoKey = v21;
      *(_QWORD *)&v23.fields.fakeValue = v20;
      Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                              v23,
                                              0LL);
      if ( !MasterData_object )
        goto LABEL_23;
      Instance = (UserServantEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                              (int32_t)Instance,
                                              (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_23;
      Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
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
    Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
      if ( Instance )
      {
        v17 += UserPresentBoxMaster__GetCount((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL);
        return v17;
      }
    }
LABEL_23:
    sub_1B64ACC(Instance, v12);
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
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v12; // x1
  __int64 v13; // x8
  UserServantEntity_array *v14; // x21
  int v15; // w25
  unsigned __int64 v16; // x26
  UserServantEntity_o *v17; // x24
  __int64 v18; // x22
  __int64 v19; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_49FF37C & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1B64870(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v5);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FF37C = 1;
  }
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = UserServantMaster__getAllList(this, v12);
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
        sub_1B64AD4(Instance, v10);
      v17 = v14->m_Items[v16];
      if ( v17 )
      {
        v19 = *(_QWORD *)&v17->fields.svtId.fields.currentCryptoKey;
        v18 = *(_QWORD *)&v17->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v21.fields.currentCryptoKey = v19;
        *(_QWORD *)&v21.fields.fakeValue = v18;
        Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                v21,
                                                0LL);
        if ( !MasterData_object )
          goto LABEL_21;
        Instance = (UserServantEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                (int32_t)Instance,
                                                (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_21;
        Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
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
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL )
  {
LABEL_21:
    sub_1B64ACC(Instance, v10);
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
  __int64 v19; // x1
  Il2CppObject *MasterData_object; // x22
  int64_t UserId; // x23
  const MethodInfo *v22; // x1
  UserServantEntity_array *AllList; // x0
  UserServantMaster___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x19
  System_Func_object__bool__o *_9__34_0; // x21
  Il2CppObject *v27; // x24
  struct UserServantMaster___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  DataManager_c *klass; // x8
  DataManager_o *v32; // x19
  __int64 v33; // x9
  int32_t *p_offset; // x10
  __int64 v35; // x0
  __int64 v36; // x1
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
  __int64 v53; // x1
  Il2CppObject *v54; // x25
  __int64 v55; // x24
  __int64 v56; // x26
  int32_t v57; // w0
  int v58; // w8
  __int64 v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  int32_t v64; // [xsp+Ch] [xbp-A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_49FF388 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B64870(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v6);
    sub_1B64870(&System_Func_UserServantEntity__bool__TypeInfo, v7);
    sub_1B64870(&System_IDisposable_TypeInfo, v8);
    sub_1B64870(&System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, v9);
    sub_1B64870(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, v10);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B64870(&NetworkManager_TypeInfo, v12);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B64870(&Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__34_0__, v16);
    sub_1B64870(&UserServantMaster___c_TypeInfo, v17);
    byte_49FF388 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  AllList = UserServantMaster__getAllList(this, v22);
  v24 = UserServantMaster___c_TypeInfo;
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)AllList;
  if ( !UserServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantMaster___c_TypeInfo);
    v24 = UserServantMaster___c_TypeInfo;
  }
  _9__34_0 = (System_Func_object__bool__o *)v24->static_fields->__9__34_0;
  if ( !_9__34_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = UserServantMaster___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v24->static_fields->__9;
    _9__34_0 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_UserServantEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__34_0,
      v27,
      Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__34_0__,
      0LL);
    static_fields = UserServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = (struct System_Func_UserServantEntity__bool__o *)_9__34_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__34_0, (int32_t)_9__34_0, v29, v30);
  }
  Instance = (DataManager_o *)System_Linq_Enumerable__Where_object_(
                                v25,
                                (System_Func_TSource__bool__o *)_9__34_0,
                                (const MethodInfo_2E79378 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  if ( !Instance )
LABEL_58:
    sub_1B64ACC(Instance, v19);
  klass = Instance->klass;
  v32 = Instance;
  v33 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_UserServantEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo )
    {
      --v33;
      p_offset += 4;
      if ( !v33 )
        goto LABEL_17;
    }
    v35 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v35 = sub_1BB6850(Instance, System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, 0LL);
  }
  v37 = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v35)(v32, *(_QWORD *)(v35 + 8));
  if ( !v37 )
    sub_1B64ACC(0LL, v36);
  v64 = 0;
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
      v41 = sub_1BB6850(v37, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v45 = sub_1BB6850(v37, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL);
    }
    v46 = (*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v37, *(_QWORD *)(v45 + 8));
    v47 = v46;
    if ( v46 )
    {
      v48 = *(_OWORD *)(v46 + 64);
      *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)(v46 + 48);
      *(_OWORD *)&v66.fields.fakeValue = v48;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v65 = v66;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v65, 0LL) == UserId
        && (*(_BYTE *)(v47 + 300) & 4) == 0 )
      {
        v50 = *(_QWORD *)(v47 + 80);
        v49 = *(_QWORD *)(v47 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v67.fields.currentCryptoKey = v50;
        *(_QWORD *)&v67.fields.fakeValue = v49;
        v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v67, 0LL);
        if ( !MasterData_object )
          sub_1B64ACC(v51, (unsigned int)v51);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v51,
                   (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v54 = Entity;
        if ( !Entity )
          sub_1B64ACC(0LL, v53);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
               (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[2],
               0LL) == servantId )
        {
          v56 = *(_QWORD *)(v47 + 96);
          v55 = *(_QWORD *)(v47 + 104);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v68.fields.currentCryptoKey = v56;
          *(_QWORD *)&v68.fields.fakeValue = v55;
          v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v68, 0LL);
          v58 = v64;
          if ( v57 == LODWORD(v54[5].monitor) )
            v58 = v64 + 1;
          v64 = v58;
        }
      }
    }
  }
  v59 = *(_QWORD *)v37;
  v60 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
  {
    v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
    {
      --v60;
      v61 += 4;
      if ( !v60 )
        goto LABEL_53;
    }
    v62 = v59 + 16LL * *v61 + 312;
  }
  else
  {
LABEL_53:
    v62 = sub_1BB6850(v37, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v62)(v37, *(_QWORD *)(v62 + 8));
  return v64;
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
  DataManager_o *v14; // x21
  int32_t Count; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v16; // x26
  int32_t v17; // w23
  int32_t v18; // w22
  int32_t v19; // w24
  Il2CppObject *Item; // x0
  Il2CppObject *v21; // x25
  __int64 methodPtr_low; // x10
  Il2CppObject v23; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v25; // x29
  void *monitor; // x25
  Il2CppClass *klass; // x26
  Il2CppObject *Entity; // x0
  ServantEntity_o *v29; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_49FF389 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B64870(&NetworkManager_TypeInfo, v6);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B64870(&UserServantEntity_TypeInfo, v10);
    byte_49FF389 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_27;
  v14 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          if ( (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v31, 0LL) == v14
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
            v12 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v33, 0LL);
            Instance = (DataManager_o *)MasterData_object;
            if ( !MasterData_object )
              break;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       v12,
                       (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
LABEL_27:
    sub_1B64ACC(Instance, v12);
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
  int32_t v17; // w3

  if ( (byte_49FF36C & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____75757568, svtEnt);
    sub_1B64870(&System_Func_UserServantEntity__bool__TypeInfo, v7);
    sub_1B64870(&Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__, v8);
    sub_1B64870(&UserServantMaster___c__DisplayClass1_0_TypeInfo, v9);
    byte_49FF36C = 1;
  }
  v10 = (Il2CppObject *)sub_1B64ABC(UserServantMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor(v10, 0LL);
  if ( !v10 )
    sub_1B64ACC(v11, v12);
  v10[1].klass = (Il2CppClass *)svtId;
  List = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getList(this, v12);
  v14 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    v10,
    Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__,
    0LL);
  v15 = System_Linq_Enumerable__FirstOrDefault_object__48626624(
          List,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_2E5FBC0 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____75757568);
  *svtEnt = (UserServantEntity_o *)v15;
  sub_1B64814((ServantStatusBattleListViewItem_o *)svtEnt, (int32_t)v15, v16, v17);
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
  int32_t v50; // w2
  int32_t v51; // w3
  System_Collections_ObjectModel_Collection_T__c *v52; // x8
  System_Collections_ObjectModel_Collection_T__o *v53; // x22
  unsigned __int64 v54; // x19
  Il2CppObject *v55; // x23
  void *v56; // x24
  Il2CppClass *v57; // x25
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  Il2CppClass **v61; // x0
  ServantStatusBattleListViewItem_o *v63; // [xsp+0h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_49FF38C & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, userServantList);
    sub_1B64870(&Method_DataManager_GetMaster_UserServantStorageMaster___, v8);
    sub_1B64870(&DataManager_TypeInfo, v9);
    sub_1B64870(&System_IDisposable_TypeInfo, v10);
    sub_1B64870(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v13);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v15);
    sub_1B64870(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v16);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1B64870(&UserServantEntity_TypeInfo, v18);
    byte_49FF38C = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_59;
  v63 = (ServantStatusBattleListViewItem_o *)userServantList;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64ACC(0LL, v22);
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
      p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v31 = sub_1BB6850(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
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
      sub_1B64ACC(v32, v33);
    }
    v37 = v32[5].klass;
    monitor = v32[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v65.fields.currentCryptoKey = v37;
    *(_QWORD *)&v65.fields.fakeValue = monitor;
    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v65, 0LL);
    if ( (_DWORD)v38 == svtId )
    {
      if ( !v19 )
        sub_1B64ACC(v38, v39);
      items = v19->fields._items;
      v43 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++v19->fields._version;
      if ( !items )
        sub_1B64ACC(v38, v39);
      size = v19->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v19,
          v34,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = &items->obj.klass + size;
        v19->fields._size = size + 1;
        v45[4] = (Il2CppClass *)v34;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v34, v40, v41);
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
        goto LABEL_33;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_33:
    v49 = sub_1BB6850(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(Enumerator, *(_QWORD *)(v49 + 8));
  if ( isIncludeStorage )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)UserServantStorageMaster__getList(
                                                                 (UserServantStorageMaster_o *)list,
                                                                 v20);
      if ( list )
      {
        v52 = list[1].klass;
        v53 = list;
        if ( (int)v52 >= 1 )
        {
          v54 = 0LL;
          while ( 1 )
          {
            if ( v54 >= (unsigned int)v52 )
              sub_1B64AD4(list, v20);
            v55 = (Il2CppObject *)*((_QWORD *)&v53[1].monitor + v54);
            if ( v55 )
            {
              v57 = v55[5].klass;
              v56 = v55[5].monitor;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v66.fields.currentCryptoKey = v57;
              *(_QWORD *)&v66.fields.fakeValue = v56;
              list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                                         v66,
                                                                         0LL);
              if ( (_DWORD)list == svtId )
              {
                if ( !v19 )
                  goto LABEL_59;
                v58 = v19->fields._items;
                v59 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v19->fields._version;
                if ( !v58 )
                  goto LABEL_59;
                v60 = v19->fields._size;
                if ( (unsigned int)v60 >= v58->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v19,
                    v55,
                    *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
                }
                else
                {
                  v61 = &v58->obj.klass + v60;
                  v19->fields._size = v60 + 1;
                  v61[4] = (Il2CppClass *)v55;
                  sub_1B64814((ServantStatusBattleListViewItem_o *)(v61 + 4), (int32_t)v55, v50, v51);
                }
              }
            }
            LODWORD(v52) = v53[1].klass;
            if ( (__int64)++v54 >= (int)v52 )
              goto LABEL_53;
          }
        }
        goto LABEL_53;
      }
    }
LABEL_59:
    sub_1B64ACC(list, v20);
  }
LABEL_53:
  v63->klass = (ServantStatusBattleListViewItem_c *)v19;
  sub_1B64814(v63, (int32_t)v19, v50, v51);
  if ( !v63->klass )
    goto LABEL_59;
  return SLODWORD(v63->klass->_1.namespaze) > 0;
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
  int32_t v15; // w2
  int32_t v16; // w3
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

  if ( (byte_49FF38D & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_UserServantStorageMaster___, userStorageServantList);
    sub_1B64870(&DataManager_TypeInfo, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v9);
    sub_1B64870(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v10);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_49FF38D = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_UserServantStorageMaster___);
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
        sub_1B64AD4(Master_object, v14);
      v20 = (Il2CppObject *)v18->m_Items[v19];
      if ( v20 )
      {
        klass = v20[5].klass;
        monitor = v20[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v28.fields.currentCryptoKey = klass;
        *(_QWORD *)&v28.fields.fakeValue = monitor;
        Master_object = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
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
              *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v20;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v20, v15, v16);
          }
        }
      }
      LODWORD(v17) = v18->max_length;
    }
    while ( (__int64)++v19 < (int)v17 );
  }
  *userStorageServantList = (System_Collections_Generic_List_UserServantEntity__o *)v12;
  sub_1B64814((ServantStatusBattleListViewItem_o *)userStorageServantList, (int32_t)v12, v15, v16);
  if ( !*userStorageServantList )
LABEL_23:
    sub_1B64ACC(Master_object, v14);
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

  if ( (byte_49FF380 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_long__Add__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_long__ToArray__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_1B64870(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_1B64870(&NetworkManager_TypeInfo, v8);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1B64870(&UserServantEntity_TypeInfo, v10);
    sub_1B64870(&UserServantNewManager_TypeInfo, v11);
    byte_49FF380 = 1;
  }
  v12 = (System_Collections_Generic_List_long__o *)sub_1B64ABC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v12,
    (const MethodInfo_3496AFC *)Method_System_Collections_Generic_List_long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                        (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v27, 0LL);
          if ( list == v16 && (*(_BYTE *)(v18 + 300) & 4) == 0 )
          {
            v21 = *(_OWORD *)(v18 + 32);
            *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)(v18 + 16);
            *(_OWORD *)&v28.fields.fakeValue = v21;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v26 = v28;
            list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v26, 0LL);
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
                *(const MethodInfo_3497350 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
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
        goto LABEL_24;
    }
LABEL_28:
    sub_1B64ACC(list, v13);
  }
LABEL_24:
  if ( !v12 )
    goto LABEL_28;
  v25 = System_Collections_Generic_List_long___ToArray(
          v12,
          (const MethodInfo_3498EA8 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  UserServantNewManager__SetOld_40239308(v25, 0LL);
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

  if ( (byte_49FF382 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantStorageMaster___, method);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity___ctor___75681680, v5);
    sub_1B64870(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v6);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FF382 = 1;
  }
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, method);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_55243428(
    v9,
    List,
    (const MethodInfo_34AF2A4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___75681680);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL
    || (Instance = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, v11), !v9) )
  {
    sub_1B64ACC(Instance, v11);
  }
  System_Collections_Generic_List_object___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_34AFBBC *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v9,
                                      (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  int64_t v17; // x21
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v19; // x22
  int32_t v20; // w24
  int64_t v21; // x25
  __int64 methodPtr_low; // x10
  __int128 v23; // q0
  __int64 v24; // x26
  __int64 v25; // x27
  ServantEntity_o *v26; // x26
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_49FF381 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1B64870(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1B64870(&NetworkManager_TypeInfo, v10);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B64870(&UserServantEntity_TypeInfo, v14);
    byte_49FF381 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_31;
  v17 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v21 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v23 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v36.fields.fakeValue = v23;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v35 = v36;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v35, 0LL);
          if ( Instance == v17 && (*(_BYTE *)(v21 + 300) & 4) == 0 )
          {
            v25 = *(_QWORD *)(v21 + 80);
            v24 = *(_QWORD *)(v21 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v37.fields.currentCryptoKey = v25;
            *(_QWORD *)&v37.fields.fakeValue = v24;
            v16 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v37, 0LL);
            Instance = (int64_t)MasterData_object;
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  MasterData_object,
                                  v16,
                                  (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
                v30 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v19->fields._version;
                if ( !items )
                  break;
                size = v19->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v19,
                    (Il2CppObject *)v21,
                    *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
                }
                else
                {
                  v32 = &items->obj.klass + size;
                  v19->fields._size = size + 1;
                  v32[4] = (Il2CppClass *)v21;
                  sub_1B64814((ServantStatusBattleListViewItem_o *)(v32 + 4), v21, v27, v28);
                }
              }
            }
          }
        }
      }
      if ( Count == ++v20 )
        goto LABEL_29;
    }
LABEL_31:
    sub_1B64ACC(Instance, v16);
  }
LABEL_29:
  if ( !v19 )
    goto LABEL_31;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v19,
                                      (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x23
  int64_t v20; // x24
  int32_t Count; // w0
  int32_t v22; // w25
  int32_t v23; // w26
  int32_t v24; // w27
  Il2CppObject *Item; // x0
  Il2CppObject *v26; // x28
  __int64 methodPtr_low; // x10
  Il2CppObject v28; // q0
  void *monitor; // x28
  Il2CppClass *klass; // x29
  Il2CppObject *Entity; // x0
  int32_t klass_high; // w29
  ServantEntity_o *v33; // x28
  int32_t *v34; // x9
  int32_t *v36; // [xsp+8h] [xbp-B8h]
  bool v37; // [xsp+14h] [xbp-ACh]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+40h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_49FF36D & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, servantSum);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B64870(&NetworkManager_TypeInfo, v12);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B64870(&UserServantEntity_TypeInfo, v16);
    byte_49FF36D = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
LABEL_32:
    sub_1B64ACC(Instance, v18);
  v20 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v36 = servantEquipSum;
    v37 = friendShipSvtEqExclude;
    v22 = Count;
    v23 = 0;
    v24 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_32;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v24,
               (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v26 = Item;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantEntity_TypeInfo )
        {
          v28 = Item[4];
          *(Il2CppObject *)&v39.fields.currentCryptoKey = Item[3];
          *(Il2CppObject *)&v39.fields.fakeValue = v28;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v39;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v38, 0LL) == v20
            && (BYTE4(v26[18].monitor) & 4) == 0 )
          {
            klass = v26[5].klass;
            monitor = v26[5].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v40.fields.currentCryptoKey = klass;
            *(_QWORD *)&v40.fields.fakeValue = monitor;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v40, 0LL);
            if ( !MasterData_object )
              goto LABEL_32;
            ++v23;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       Instance,
                       (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              klass_high = HIDWORD(Entity[5].klass);
              v33 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServant(klass_high, 0LL) )
              {
                v34 = servantSum;
              }
              else
              {
                if ( !SvtType__IsKeepServantEquip(klass_high, 0LL)
                  || v37 && ServantEntity__get_IsFriendShipSvtEquip(v33, 0LL) )
                {
                  goto LABEL_28;
                }
                v34 = v36;
              }
              ++*v34;
            }
          }
        }
      }
LABEL_28:
      if ( v22 == ++v24 )
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
  int64_t Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x22
  int64_t v18; // x23
  int32_t Count; // w0
  int32_t v20; // w24
  int32_t v21; // w25
  int32_t v22; // w26
  Il2CppObject *Item; // x0
  Il2CppObject *v24; // x27
  __int64 methodPtr_low; // x10
  Il2CppObject v26; // q0
  void *monitor; // x27
  Il2CppClass *klass; // x28
  Il2CppObject *Entity; // x0
  int32_t klass_high; // w27
  int32_t *v31; // x9
  int32_t *v33; // [xsp+0h] [xbp-B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_49FF36E & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, servantSum);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B64870(&NetworkManager_TypeInfo, v10);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B64870(&UserServantEntity_TypeInfo, v14);
    byte_49FF36E = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
LABEL_30:
    sub_1B64ACC(Instance, v16);
  v18 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v33 = servantEquipSum;
    v20 = Count;
    v21 = 0;
    v22 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_30;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v22,
               (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v24 = Item;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantEntity_TypeInfo )
        {
          v26 = Item[4];
          *(Il2CppObject *)&v35.fields.currentCryptoKey = Item[3];
          *(Il2CppObject *)&v35.fields.fakeValue = v26;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v34 = v35;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v34, 0LL) == v18
            && (BYTE4(v24[18].monitor) & 4) == 0 )
          {
            klass = v24[5].klass;
            monitor = v24[5].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v36.fields.currentCryptoKey = klass;
            *(_QWORD *)&v36.fields.fakeValue = monitor;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v36, 0LL);
            if ( !MasterData_object )
              goto LABEL_30;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       Instance,
                       (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              klass_high = HIDWORD(Entity[5].klass);
              if ( SvtType__IsOrganization(klass_high, 0LL) )
              {
                v31 = servantSum;
LABEL_25:
                ++v21;
                ++*v31;
                goto LABEL_26;
              }
              if ( SvtType__IsServantEquip(klass_high, 0LL) )
              {
                v31 = v33;
                goto LABEL_25;
              }
            }
          }
        }
      }
LABEL_26:
      if ( v20 == ++v22 )
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

  if ( (byte_49FF37E & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&heroineId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B64870(&UserServantEntity_TypeInfo, v7);
    byte_49FF37E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v18, 0LL) == heroineId
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
    sub_1B64ACC(list, *(_QWORD *)&heroineId);
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
  Il2CppObject *MasterData_object; // x21
  int64_t v18; // x20
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v20; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v21; // x26
  int32_t v22; // w24
  int64_t v23; // x25
  __int64 methodPtr_low; // x10
  __int128 v25; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v27; // x20
  __int64 v28; // x26
  __int64 v29; // x27
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  int64_t v37; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_49FF377 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1B64870(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1B64870(&NetworkManager_TypeInfo, v10);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B64870(&UserServantEntity_TypeInfo, v14);
    byte_49FF377 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v18 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v23 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v25 = *(_OWORD *)(Instance + 64);
          v26 = *v21;
          *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v23 + 48);
          *(_OWORD *)&v39.fields.fakeValue = v25;
          if ( !v26->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v26);
          v38 = v39;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v38, 0LL);
          if ( Instance == v18 && (*(_BYTE *)(v23 + 300) & 4) == 0 )
          {
            v37 = v18;
            v27 = v21;
            v29 = *(_QWORD *)(v23 + 80);
            v28 = *(_QWORD *)(v23 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v40.fields.currentCryptoKey = v29;
            *(_QWORD *)&v40.fields.fakeValue = v28;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v40, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v21 = v27;
            Instance = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)Instance, 0LL);
            v18 = v37;
            if ( (Instance & 1) != 0 )
            {
              if ( !v20 )
                break;
              items = v20->fields._items;
              v33 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v20->fields._version;
              if ( !items )
                break;
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v20,
                  (Il2CppObject *)v23,
                  *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
              }
              else
              {
                v35 = &items->obj.klass + size;
                v20->fields._size = size + 1;
                v35[4] = (Il2CppClass *)v23;
                sub_1B64814((ServantStatusBattleListViewItem_o *)(v35 + 4), v23, v30, v31);
              }
            }
          }
        }
      }
      if ( Count == ++v22 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1B64ACC(Instance, v16);
  }
LABEL_28:
  if ( !v20 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v20,
                                      (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  Il2CppObject *MasterData_object; // x21
  int64_t v18; // x20
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v20; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v21; // x26
  int32_t v22; // w24
  int64_t v23; // x25
  __int64 methodPtr_low; // x10
  __int128 v25; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v27; // x20
  __int64 v28; // x26
  __int64 v29; // x27
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  int64_t v37; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_49FF375 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1B64870(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1B64870(&NetworkManager_TypeInfo, v10);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B64870(&UserServantEntity_TypeInfo, v14);
    byte_49FF375 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v18 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v23 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v25 = *(_OWORD *)(Instance + 64);
          v26 = *v21;
          *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v23 + 48);
          *(_OWORD *)&v39.fields.fakeValue = v25;
          if ( !v26->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v26);
          v38 = v39;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v38, 0LL);
          if ( Instance == v18 && (*(_BYTE *)(v23 + 300) & 4) == 0 )
          {
            v37 = v18;
            v27 = v21;
            v29 = *(_QWORD *)(v23 + 80);
            v28 = *(_QWORD *)(v23 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v40.fields.currentCryptoKey = v29;
            *(_QWORD *)&v40.fields.fakeValue = v28;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v40, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v21 = v27;
            Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0LL);
            v18 = v37;
            if ( (Instance & 1) != 0 )
            {
              if ( !v20 )
                break;
              items = v20->fields._items;
              v33 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v20->fields._version;
              if ( !items )
                break;
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v20,
                  (Il2CppObject *)v23,
                  *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
              }
              else
              {
                v35 = &items->obj.klass + size;
                v20->fields._size = size + 1;
                v35[4] = (Il2CppClass *)v23;
                sub_1B64814((ServantStatusBattleListViewItem_o *)(v35 + 4), v23, v30, v31);
              }
            }
          }
        }
      }
      if ( Count == ++v22 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1B64ACC(Instance, v16);
  }
LABEL_28:
  if ( !v20 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v20,
                                      (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getList(UserServantMaster_o *this, const MethodInfo *method)
{
  int64_t UserId; // x1
  const MethodInfo *v4; // x2

  if ( (byte_49FF36F & 1) == 0 )
  {
    sub_1B64870(&NetworkManager_TypeInfo, method);
    byte_49FF36F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  return UserServantMaster__getList_39916980(this, UserId, v4);
}


UserServantEntity_array *__fastcall UserServantMaster__getList_39916980(
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
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-80h]

  if ( (byte_49FF370 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1B64870(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1B64870(&UserServantEntity_TypeInfo, v11);
    byte_49FF370 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                        (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v16 = list;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v18 = *(_OWORD *)(list + 64);
          *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)(list + 48);
          *(_OWORD *)&v27.fields.fakeValue = v18;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v26 = v27;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v26, 0LL);
          if ( list == userId && (*(_BYTE *)(v16 + 300) & 4) == 0 )
          {
            if ( !v14 )
              break;
            items = v14->fields._items;
            v22 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v14->fields._version;
            if ( !items )
              break;
            size = v14->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v14,
                (Il2CppObject *)v16,
                *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v14->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v16;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v24 + 4), v16, v19, v20);
            }
          }
        }
      }
      if ( Count == ++v15 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B64ACC(list, userId);
  }
LABEL_20:
  if ( !v14 )
    goto LABEL_22;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v14,
                                      (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  int64_t v35; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  v3 = userId;
  if ( (byte_49FF37F & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v10);
    sub_1B64870(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v11);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B64870(&UserServantEntity_TypeInfo, v15);
    byte_49FF37F = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this->fields.list )
    goto LABEL_28;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v22 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v24 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v37.fields.fakeValue = v24;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v36 = v37;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v36, 0LL);
          if ( Instance == v3 && (*(_BYTE *)(v22 + 300) & 4) == 0 )
          {
            v35 = v3;
            v25 = v18;
            v27 = *(_QWORD *)(v22 + 80);
            v26 = *(_QWORD *)(v22 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v38.fields.currentCryptoKey = v27;
            *(_QWORD *)&v38.fields.fakeValue = v26;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v38, 0LL);
            if ( !v25 )
              break;
            v18 = v25;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  v25,
                                  Instance,
                                  (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            v3 = v35;
            if ( !Instance )
              break;
            if ( *(_DWORD *)(Instance + 84) != 3 )
            {
              if ( !v20 )
                break;
              items = v20->fields._items;
              v31 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v20->fields._version;
              if ( !items )
                break;
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v20,
                  (Il2CppObject *)v22,
                  *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
              }
              else
              {
                v33 = &items->obj.klass + size;
                v20->fields._size = size + 1;
                v33[4] = (Il2CppClass *)v22;
                sub_1B64814((ServantStatusBattleListViewItem_o *)(v33 + 4), v22, v28, v29);
              }
            }
          }
        }
      }
      if ( Count == ++v21 )
        goto LABEL_26;
    }
LABEL_28:
    sub_1B64ACC(Instance, v17);
  }
LABEL_26:
  if ( !v20 )
    goto LABEL_28;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v20,
                                      (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  Il2CppObject *klass; // x1
  Il2CppObject *MasterData_object; // x27
  System_Collections_Generic_List_object__o *v23; // x21
  int32_t Count; // w23
  SvtMaterialTdMaster_o *v25; // x24
  __int64 v26; // x25
  __int64 v27; // x26
  System_Object_array *v28; // x24
  int32_t v29; // w25
  Il2CppObject *v30; // x27
  int32_t v31; // w2
  int32_t v32; // w3
  UserServantEntity_c *v33; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v35; // x10
  int32_t v36; // w1
  ServantStatusBattleListViewItem_o *v37; // x26
  System_Predicate_object__o *v38; // x28
  int32_t v39; // w2
  int32_t v40; // w3
  void *monitor; // x27
  Il2CppClass *v42; // x28
  int32_t v43; // w27
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  UserServantEntity_o *v49; // [xsp+0h] [xbp-70h]
  DataMasterBase_TMaster__TEntity__PKType__o *v50; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_49FF37A & 1) == 0 )
  {
    sub_1B64870(&Method_System_Array_Exists_SvtMaterialTdEntity___, usrSvtEnt);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B64870(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___, v8);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v12);
    sub_1B64870(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B64870(&System_Predicate_SvtMaterialTdEntity__TypeInfo, v15);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B64870(&Method_UserServantMaster___c__DisplayClass15_0__getNpUpServantList_b__0__, v17);
    sub_1B64870(&UserServantMaster___c__DisplayClass15_0_TypeInfo, v18);
    sub_1B64870(&UserServantEntity_TypeInfo, v19);
    byte_49FF37A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v23 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_46;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
  if ( !usrSvtEnt )
    goto LABEL_46;
  v25 = (SvtMaterialTdMaster_o *)Instance;
  v49 = usrSvtEnt;
  v27 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v51.fields.currentCryptoKey = v27;
  *(_QWORD *)&v51.fields.fakeValue = v26;
  v50 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v51, 0LL);
  if ( !v25 )
    goto LABEL_46;
  Instance = SvtMaterialTdMaster__GetEntityList(v25, (int32_t)Instance, 0LL);
  if ( Count >= 1 )
  {
    v28 = (System_Object_array *)Instance;
    v29 = 0;
    do
    {
      v30 = (Il2CppObject *)sub_1B64ABC(UserServantMaster___c__DisplayClass15_0_TypeInfo);
      System_Object___ctor(v30, 0LL);
      Instance = this->fields.list;
      if ( !Instance )
        goto LABEL_46;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v29,
                   (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v30 )
        goto LABEL_46;
      if ( Instance )
      {
        v33 = UserServantEntity_TypeInfo;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low )
        {
          if ( *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
            v35 = (Il2CppClass *)Instance;
          else
            v35 = 0LL;
        }
        else
        {
          v35 = 0LL;
        }
        v30[1].klass = v35;
        v37 = (ServantStatusBattleListViewItem_o *)&v30[1];
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low )
        {
          if ( *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == v33 )
            v36 = (int)Instance;
          else
            v36 = 0;
        }
        else
        {
          v36 = 0;
        }
      }
      else
      {
        v36 = 0;
        v30[1].klass = 0LL;
        v37 = (ServantStatusBattleListViewItem_o *)&v30[1];
      }
      sub_1B64814(v37, v36, v31, v32);
      if ( v37->klass && (*(&v37->klass->_2.bitflags2 + 1) & 4) == 0 )
      {
        v38 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_SvtMaterialTdEntity__TypeInfo);
        System_Predicate_object____ctor(
          v38,
          v30,
          Method_UserServantMaster___c__DisplayClass15_0__getNpUpServantList_b__0__,
          0LL);
        Instance = (void *)System_Array__Exists_object_(
                             v28,
                             (System_Predicate_T__o *)v38,
                             (const MethodInfo_2F31D50 *)Method_System_Array_Exists_SvtMaterialTdEntity___);
        klass = (Il2CppObject *)v37->klass;
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v23 )
            goto LABEL_46;
LABEL_39:
          items = v23->fields._items;
          v45 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v23->fields._version;
          if ( !items )
            goto LABEL_46;
          size = v23->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v23,
              klass,
              *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
          }
          else
          {
            v47 = &items->obj.klass + size;
            v23->fields._size = size + 1;
            v47[4] = (Il2CppClass *)klass;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)klass, v39, v40);
          }
          continue;
        }
        if ( !klass )
          goto LABEL_46;
        v42 = klass[5].klass;
        monitor = klass[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v52.fields.currentCryptoKey = v42;
        *(_QWORD *)&v52.fields.fakeValue = monitor;
        klass = (Il2CppObject *)(unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                v52,
                                                0LL);
        Instance = v50;
        if ( !v50 )
          goto LABEL_46;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v50,
                     (int32_t)klass,
                     (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_46;
        v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                *((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance + 2),
                0LL);
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v49->fields.svtId, 0LL);
        if ( v43 == (_DWORD)Instance )
        {
          if ( !v23 )
            goto LABEL_46;
          klass = (Il2CppObject *)v37->klass;
          goto LABEL_39;
        }
      }
    }
    while ( Count != ++v29 );
  }
  if ( !v23 )
LABEL_46:
    sub_1B64ACC(Instance, klass);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v23,
                                      (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  Il2CppObject *MasterData_object; // x21
  int64_t v18; // x20
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v20; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v21; // x26
  int32_t v22; // w24
  int64_t v23; // x25
  __int64 methodPtr_low; // x10
  __int128 v25; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v27; // x20
  __int64 v28; // x26
  __int64 v29; // x27
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  int64_t v37; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_49FF376 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1B64870(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1B64870(&NetworkManager_TypeInfo, v10);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B64870(&UserServantEntity_TypeInfo, v14);
    byte_49FF376 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v18 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v23 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v25 = *(_OWORD *)(Instance + 64);
          v26 = *v21;
          *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v23 + 48);
          *(_OWORD *)&v39.fields.fakeValue = v25;
          if ( !v26->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v26);
          v38 = v39;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v38, 0LL);
          if ( Instance == v18 && (*(_BYTE *)(v23 + 300) & 4) == 0 )
          {
            v37 = v18;
            v27 = v21;
            v29 = *(_QWORD *)(v23 + 80);
            v28 = *(_QWORD *)(v23 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v40.fields.currentCryptoKey = v29;
            *(_QWORD *)&v40.fields.fakeValue = v28;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v40, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v21 = v27;
            Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
            v18 = v37;
            if ( (Instance & 1) != 0 )
            {
              if ( !v20 )
                break;
              items = v20->fields._items;
              v33 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v20->fields._version;
              if ( !items )
                break;
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v20,
                  (Il2CppObject *)v23,
                  *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
              }
              else
              {
                v35 = &items->obj.klass + size;
                v20->fields._size = size + 1;
                v35[4] = (Il2CppClass *)v23;
                sub_1B64814((ServantStatusBattleListViewItem_o *)(v35 + 4), v23, v30, v31);
              }
            }
          }
        }
      }
      if ( Count == ++v22 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1B64ACC(Instance, v16);
  }
LABEL_28:
  if ( !v20 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v20,
                                      (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  int32_t v38; // w2
  int32_t v39; // w3
  UserServantEntity_c *v40; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v42; // x10
  int32_t v43; // w1
  ServantStatusBattleListViewItem_o *v44; // x26
  ServantStatusBattleListViewItem_c *klass; // x8
  Il2CppType byval_arg; // q0
  int64_t v47; // x0
  __int128 v48; // q1
  int64_t v49; // x28
  System_Predicate_object__o *v50; // x28
  ServantStatusBattleListViewItem_c *v51; // x8
  Il2CppClass *parent; // x27
  Il2CppClass *declaringType; // x28
  int32_t v54; // w27
  struct System_Int32_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_int__object__o *v58; // x20
  __int64 v59; // x19
  __int64 v60; // x23
  System_Object_array *array; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_Dictionary_int__List_int___o **v63; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_List_int__o *v64; // [xsp+18h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+60h] [xbp-90h]
  Il2CppObject *value; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_49FF379 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Array_Exists_SvtMaterialTdEntity___, usrSvtEnt);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1B64870(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___, v10);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v11);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1B64870(&Method_System_Collections_Generic_List_int__get_Count__, v15);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_1B64870(&System_Predicate_SvtMaterialTdEntity__TypeInfo, v19);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B64870(&Method_UserServantMaster___c__DisplayClass14_0__getSameSvtNpLvCache_b__0__, v21);
    sub_1B64870(&UserServantMaster___c__DisplayClass14_0_TypeInfo, v22);
    sub_1B64870(&UserServantEntity_TypeInfo, v23);
    byte_49FF379 = 1;
  }
  v24 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
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
  *(_QWORD *)&v69.fields.currentCryptoKey = v29;
  *(_QWORD *)&v69.fields.fakeValue = v28;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v69, 0LL);
  if ( !v27 )
    goto LABEL_66;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)v27,
          Instance,
          &value,
          (const MethodInfo_31273EC *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
LABEL_12:
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      DataManager__GetMasterData_object_(
        (DataManager_o *)Instance,
        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = (int64_t)this->fields.list;
      if ( Instance )
      {
        Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
        v64 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v64,
          (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
          v34 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
          v33 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
          v35 = (SvtMaterialTdMaster_o *)MasterData_object;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v70.fields.currentCryptoKey = v34;
          *(_QWORD *)&v70.fields.fakeValue = v33;
          v63 = cachedUserServantNpLvDict;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v70, 0LL);
          if ( v35 )
          {
            Instance = (int64_t)SvtMaterialTdMaster__GetEntityList(v35, Instance, 0LL);
            array = (System_Object_array *)Instance;
            if ( Count >= 1 )
            {
              for ( i = 0; Count != i; ++i )
              {
                v37 = (Il2CppObject *)sub_1B64ABC(UserServantMaster___c__DisplayClass14_0_TypeInfo);
                System_Object___ctor(v37, 0LL);
                Instance = (int64_t)this->fields.list;
                if ( !Instance )
                  goto LABEL_66;
                Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                      i,
                                      (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
                if ( !v37 )
                  goto LABEL_66;
                if ( Instance )
                {
                  v40 = UserServantEntity_TypeInfo;
                  methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
                  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low )
                  {
                    if ( *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
                      v42 = (Il2CppClass *)Instance;
                    else
                      v42 = 0LL;
                  }
                  else
                  {
                    v42 = 0LL;
                  }
                  v37[1].klass = v42;
                  v44 = (ServantStatusBattleListViewItem_o *)&v37[1];
                  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low )
                  {
                    if ( *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == v40 )
                      v43 = Instance;
                    else
                      v43 = 0;
                  }
                  else
                  {
                    v43 = 0;
                  }
                }
                else
                {
                  v43 = 0;
                  v37[1].klass = 0LL;
                  v44 = (ServantStatusBattleListViewItem_o *)&v37[1];
                }
                sub_1B64814(v44, v43, v38, v39);
                klass = v44->klass;
                if ( v44->klass && (*(&klass->_2.bitflags2 + 1) & 6) == 0 )
                {
                  byval_arg = klass->_1.byval_arg;
                  *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
                  *(Il2CppType *)&v67.fields.fakeValue = byval_arg;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                  v66 = v67;
                  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v66, 0LL);
                  v48 = *(_OWORD *)&usrSvtEnt->fields.id.fields.fakeValue;
                  v49 = v47;
                  *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&usrSvtEnt->fields.id.fields.currentCryptoKey;
                  *(_OWORD *)&v65.fields.fakeValue = v48;
                  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v65, 0LL);
                  if ( v49 != Instance )
                  {
                    Instance = UserServantEntity__IsMaterialTd(usrSvtEnt, v26);
                    if ( (Instance & 1) == 0 )
                    {
                      Instance = (int64_t)v44->klass;
                      if ( !v44->klass )
                        goto LABEL_66;
                      Instance = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Instance, v26);
                      if ( (Instance & 1) != 0 )
                      {
                        v50 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_SvtMaterialTdEntity__TypeInfo);
                        System_Predicate_object____ctor(
                          v50,
                          v37,
                          Method_UserServantMaster___c__DisplayClass14_0__getSameSvtNpLvCache_b__0__,
                          0LL);
                        Instance = System_Array__Exists_object_(
                                     array,
                                     (System_Predicate_T__o *)v50,
                                     (const MethodInfo_2F31D50 *)Method_System_Array_Exists_SvtMaterialTdEntity___);
                        if ( (Instance & 1) == 0 )
                          continue;
                      }
                      else
                      {
                        v51 = v44->klass;
                        if ( !v44->klass )
                          goto LABEL_66;
                        declaringType = v51->_1.declaringType;
                        parent = v51->_1.parent;
                        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                        *(_QWORD *)&v71.fields.currentCryptoKey = declaringType;
                        *(_QWORD *)&v71.fields.fakeValue = parent;
                        v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v71, 0LL);
                        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                     usrSvtEnt->fields.svtId,
                                     0LL);
                        if ( v54 != (_DWORD)Instance || (usrSvtEnt->fields.status & 2) != 0 )
                          continue;
                      }
                      if ( !v44->klass )
                        goto LABEL_66;
                      Instance = (int64_t)v64;
                      if ( !v64 )
                        goto LABEL_66;
                      v26 = (const MethodInfo *)*(unsigned int *)&v44->klass->_2.typeHierarchyDepth;
                      items = v64->fields._items;
                      v56 = Method_System_Collections_Generic_List_int__Add__;
                      ++v64->fields._version;
                      if ( !items )
                        goto LABEL_66;
                      size = v64->fields._size;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v64,
                          (int32_t)v26,
                          *(const MethodInfo_34921B8 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v64->fields._size = size + 1;
                        items->m_Items[size + 1] = (int)v26;
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
              v30 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)v64, 0LL);
              if ( (usrSvtEnt->fields.status & 2) != 0 )
                return v30;
              v58 = (System_Collections_Generic_Dictionary_int__object__o *)*v63;
              v60 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
              v59 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v72.fields.currentCryptoKey = v60;
              *(_QWORD *)&v72.fields.fakeValue = v59;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v72, 0LL);
              if ( v58 )
              {
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  v58,
                  Instance,
                  (Il2CppObject *)v64,
                  (const MethodInfo_3125C4C *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
                return v30;
              }
            }
          }
        }
      }
    }
LABEL_66:
    sub_1B64ACC(Instance, v26);
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
  const MethodInfo *v19; // x1
  Il2CppObject *MasterData_object; // x19
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
  int64_t v36; // x25
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
  int32_t v51; // w29
  System_Collections_Generic_IEnumerator_T__c *v52; // x8
  __int64 v53; // x9
  int32_t *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x8
  int64_t v57; // x22
  unsigned __int64 v58; // x21
  __int64 v59; // x26
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

  if ( (byte_49FF372 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B64870(&System_IDisposable_TypeInfo, v6);
    sub_1B64870(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1B64870(&NetworkManager_TypeInfo, v13);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B64870(&UserServantEntity_TypeInfo, v17);
    byte_49FF372 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  v72 = (UserServantStorageMaster_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v21 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_82;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64ACC(0LL, v22);
  v73 = 0;
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
      p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v31 = sub_1BB6850(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
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
        sub_1B64D8C(v32);
        goto LABEL_81;
      }
      v35 = v32[4];
      *(_OWORD *)&v76.fields.currentCryptoKey = v32[3];
      *(_OWORD *)&v76.fields.fakeValue = v35;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v75 = v76;
      v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v75, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( v36 == NetworkManager__get_UserId(0LL) && (*((_BYTE *)v33 + 300) & 4) == 0 )
      {
        v38 = *((_QWORD *)v33 + 10);
        v37 = *((_QWORD *)v33 + 11);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v77.fields.currentCryptoKey = v38;
        *(_QWORD *)&v77.fields.fakeValue = v37;
        v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v77, 0LL);
        if ( !MasterData_object )
          sub_1B64ACC(v39, (unsigned int)v39);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v39,
                   (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_1B64ACC(0LL, v41);
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0LL) )
        {
          v43 = *((_QWORD *)v33 + 10);
          v42 = *((_QWORD *)v33 + 11);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v78.fields.currentCryptoKey = v43;
          *(_QWORD *)&v78.fields.fakeValue = v42;
          v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v78, 0LL);
          if ( !v21 )
            sub_1B64ACC(v44, (unsigned int)v44);
          if ( !System_Collections_Generic_List_int___Contains(
                  v21,
                  v44,
                  (const MethodInfo_3492530 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            v46 = *((_QWORD *)v33 + 10);
            v45 = *((_QWORD *)v33 + 11);
            ++v73;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v79.fields.currentCryptoKey = v46;
            *(_QWORD *)&v79.fields.fakeValue = v45;
            v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v79, 0LL);
            items = v21->fields._items;
            v49 = Method_System_Collections_Generic_List_int__Add__;
            ++v21->fields._version;
            if ( !items )
              sub_1B64ACC(v47, (unsigned int)v47);
            size = v21->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v21,
                v47,
                *(const MethodInfo_34921B8 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
            }
            else
            {
              v21->fields._size = size + 1;
              items->m_Items[size + 1] = v47;
            }
          }
        }
      }
    }
  }
  v51 = v73;
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
        goto LABEL_49;
    }
    v55 = (__int64)&v52->vtable[*v54].method;
  }
  else
  {
LABEL_49:
    v55 = sub_1BB6850(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v55)(Enumerator, *(_QWORD *)(v55 + 8));
  Instance = (int64_t)v72;
  if ( !v72 || (Instance = (int64_t)UserServantStorageMaster__getList(v72, v19)) == 0 )
LABEL_82:
    sub_1B64ACC(Instance, v19);
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
        *(_OWORD *)&v76.fields.currentCryptoKey = *(_OWORD *)(v59 + 48);
        *(_OWORD *)&v76.fields.fakeValue = v60;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v74 = v76;
        v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v74, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        if ( v61 == Instance && (*(_BYTE *)(v59 + 300) & 4) == 0 )
        {
          v63 = *(_QWORD *)(v59 + 80);
          v62 = *(_QWORD *)(v59 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v80.fields.currentCryptoKey = v63;
          *(_QWORD *)&v80.fields.fakeValue = v62;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v80, 0LL);
          if ( !MasterData_object )
            goto LABEL_82;
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                Instance,
                                (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_82;
          Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
          if ( (Instance & 1) != 0 )
          {
            v65 = *(_QWORD *)(v59 + 80);
            v64 = *(_QWORD *)(v59 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v81.fields.currentCryptoKey = v65;
            *(_QWORD *)&v81.fields.fakeValue = v64;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v81, 0LL);
            if ( !v21 )
              goto LABEL_82;
            Instance = System_Collections_Generic_List_int___Contains(
                         v21,
                         Instance,
                         (const MethodInfo_3492530 *)Method_System_Collections_Generic_List_int__Contains__);
            if ( (Instance & 1) == 0 )
            {
              v67 = *(_QWORD *)(v59 + 80);
              v66 = *(_QWORD *)(v59 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v82.fields.currentCryptoKey = v67;
              *(_QWORD *)&v82.fields.fakeValue = v66;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v82, 0LL);
              v68 = v21->fields._items;
              v69 = Method_System_Collections_Generic_List_int__Add__;
              ++v21->fields._version;
              if ( !v68 )
                goto LABEL_82;
              v70 = v21->fields._size;
              v19 = (const MethodInfo *)(unsigned int)Instance;
              ++v51;
              if ( (unsigned int)v70 >= v68->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v21,
                  Instance,
                  *(const MethodInfo_34921B8 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
              }
              else
              {
                v21->fields._size = v70 + 1;
                v68->m_Items[v70 + 1] = Instance;
              }
            }
          }
        }
      }
      LODWORD(v56) = *(_DWORD *)(v57 + 24);
      if ( (__int64)++v58 >= (int)v56 )
        return v51;
    }
LABEL_81:
    sub_1B64AD4(Instance, v19);
  }
  return v51;
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
  Il2CppObject *MasterData_object; // x21
  int64_t v18; // x20
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v20; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v21; // x26
  int32_t v22; // w24
  int64_t v23; // x25
  __int64 methodPtr_low; // x10
  __int128 v25; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v26; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v27; // x20
  __int64 v28; // x26
  __int64 v29; // x27
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  int64_t v37; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_49FF378 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v8);
    sub_1B64870(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v9);
    sub_1B64870(&NetworkManager_TypeInfo, v10);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B64870(&UserServantEntity_TypeInfo, v14);
    byte_49FF378 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v18 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
                            (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v23 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v25 = *(_OWORD *)(Instance + 64);
          v26 = *v21;
          *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v23 + 48);
          *(_OWORD *)&v39.fields.fakeValue = v25;
          if ( !v26->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v26);
          v38 = v39;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v38, 0LL);
          if ( Instance == v18 && (*(_BYTE *)(v23 + 300) & 4) == 0 )
          {
            v37 = v18;
            v27 = v21;
            v29 = *(_QWORD *)(v23 + 80);
            v28 = *(_QWORD *)(v23 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v40.fields.currentCryptoKey = v29;
            *(_QWORD *)&v40.fields.fakeValue = v28;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v40, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v21 = v27;
            Instance = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
            v18 = v37;
            if ( (Instance & 1) != 0 )
            {
              if ( !v20 )
                break;
              items = v20->fields._items;
              v33 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v20->fields._version;
              if ( !items )
                break;
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v20,
                  (Il2CppObject *)v23,
                  *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
              }
              else
              {
                v35 = &items->obj.klass + size;
                v20->fields._size = size + 1;
                v35[4] = (Il2CppClass *)v23;
                sub_1B64814((ServantStatusBattleListViewItem_o *)(v35 + 4), v23, v30, v31);
              }
            }
          }
        }
      }
      if ( Count == ++v22 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1B64ACC(Instance, v16);
  }
LABEL_28:
  if ( !v20 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v20,
                                      (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
  Il2CppObject *MasterData_object; // x21
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
  Il2CppObject *v30; // x0
  Il2CppObject *v31; // x22
  __int64 methodPtr_low; // x9
  Il2CppObject v33; // q0
  int64_t v34; // x23
  void *monitor; // x23
  Il2CppClass *v36; // x24
  __int64 v37; // x0
  Il2CppObject *Entity; // x0
  __int64 v39; // x1
  _BOOL8 IsServant; // x0
  __int64 v41; // x1
  int32_t v42; // w2
  int32_t v43; // w3
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

  if ( (byte_49FF371 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v4);
    sub_1B64870(&System_IDisposable_TypeInfo, v5);
    sub_1B64870(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v9);
    sub_1B64870(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v10);
    sub_1B64870(&NetworkManager_TypeInfo, v11);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B64870(&UserServantEntity_TypeInfo, v15);
    byte_49FF371 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___),
        v19 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UserServantEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v19,
          (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0LL) )
  {
    sub_1B64ACC(Instance, v17);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64ACC(0LL, v20);
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
      p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v29 = sub_1BB6850(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
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
        sub_1B64D8C(v30);
LABEL_46:
        sub_1B64ACC(Entity, v39);
      }
      v33 = v30[4];
      *(Il2CppObject *)&v54.fields.currentCryptoKey = v30[3];
      *(Il2CppObject *)&v54.fields.fakeValue = v33;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v53 = v54;
      v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v53, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( v34 == NetworkManager__get_UserId(0LL) && (BYTE4(v31[18].monitor) & 4) == 0 )
      {
        v36 = v31[5].klass;
        monitor = v31[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v55.fields.currentCryptoKey = v36;
        *(_QWORD *)&v55.fields.fakeValue = monitor;
        v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v55, 0LL);
        if ( !MasterData_object )
          sub_1B64ACC(v37, (unsigned int)v37);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v37,
                   (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          goto LABEL_46;
        IsServant = ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL);
        if ( IsServant )
        {
          if ( !v19 )
            sub_1B64ACC(IsServant, v41);
          items = v19->fields._items;
          v45 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v19->fields._version;
          if ( !items )
            sub_1B64ACC(IsServant, v41);
          size = v19->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v19,
              v31,
              *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
          }
          else
          {
            v47 = &items->obj.klass + size;
            v19->fields._size = size + 1;
            v47[4] = (Il2CppClass *)v31;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)v31, v42, v43);
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
        goto LABEL_42;
    }
    v51 = (__int64)&v48->vtable[*v50].method;
  }
  else
  {
LABEL_42:
    v51 = sub_1BB6850(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(Enumerator, *(_QWORD *)(v51 + 8));
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
  UserServantEntity_o *v33; // x0
  UserServantEntity_o *v34; // x23
  __int64 methodPtr_low; // x9
  __int128 v36; // q0
  int64_t v37; // x24
  const MethodInfo *v38; // x2
  __int64 SvtClassId; // x0
  __int64 v40; // x1
  __int64 v41; // x24
  __int64 v42; // x25
  __int64 v43; // x1
  Il2CppObject *Entity; // x0
  __int64 v45; // x1
  _BOOL8 IsServant; // x0
  __int64 v47; // x1
  int32_t v48; // w2
  int32_t v49; // w3
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  System_Collections_Generic_IEnumerator_T__c *v54; // x8
  __int64 v55; // x9
  int32_t *v56; // x10
  __int64 v57; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v59; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_49FF374 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, classIdList);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1B64870(&System_IDisposable_TypeInfo, v7);
    sub_1B64870(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v12);
    sub_1B64870(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1B64870(&NetworkManager_TypeInfo, v14);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B64870(&UserServantEntity_TypeInfo, v18);
    byte_49FF374 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___),
        v22 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UserServantEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v22,
          (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0LL) )
  {
    sub_1B64ACC(Instance, v20);
  }
  v59 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64ACC(0LL, v23);
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
      p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v32 = sub_1BB6850(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
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
        sub_1B64D8C(v33);
LABEL_48:
        sub_1B64ACC(SvtClassId, v40);
      }
      v36 = *(_OWORD *)&v33->fields.userId.fields.fakeValue;
      *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&v33->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v61.fields.fakeValue = v36;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v60 = v61;
      v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v60, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( v37 == NetworkManager__get_UserId(0LL) && (v34->fields.status & 4) == 0 )
      {
        SvtClassId = UserServantEntity__getSvtClassId(v34, 0, v38);
        v40 = (unsigned int)SvtClassId;
        if ( !classIdList )
          goto LABEL_48;
        if ( System_Collections_Generic_List_int___Contains(
               classIdList,
               SvtClassId,
               (const MethodInfo_3492530 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v42 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
          v41 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v62.fields.currentCryptoKey = v42;
          *(_QWORD *)&v62.fields.fakeValue = v41;
          v43 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v62, 0LL);
          if ( !v59 )
            sub_1B64ACC(0LL, v43);
          Entity = DataMasterBase_object__object__int___GetEntity(
                     v59,
                     v43,
                     (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Entity )
            sub_1B64ACC(0LL, v45);
          IsServant = ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL);
          if ( IsServant )
          {
            if ( !v22 )
              sub_1B64ACC(IsServant, v47);
            items = v22->fields._items;
            v51 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v22->fields._version;
            if ( !items )
              sub_1B64ACC(IsServant, v47);
            size = v22->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v22,
                (Il2CppObject *)v34,
                *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
            }
            else
            {
              v53 = &items->obj.klass + size;
              v22->fields._size = size + 1;
              v53[4] = (Il2CppClass *)v34;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v53 + 4), (int32_t)v34, v48, v49);
            }
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
        goto LABEL_44;
    }
    v57 = (__int64)&v54->vtable[*v56].method;
  }
  else
  {
LABEL_44:
    v57 = sub_1BB6850(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v57)(Enumerator, *(_QWORD *)(v57 + 8));
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

  if ( (byte_49FF383 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantStorageMaster___, *(_QWORD *)&svtId);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_long__Add__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_UserServantEntity___ctor___75681680, v12);
    sub_1B64870(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13);
    sub_1B64870(&System_Collections_Generic_List_long__TypeInfo, v14);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_49FF383 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, *(const MethodInfo **)&svtId);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_55243428(
    v19,
    List,
    (const MethodInfo_34AF2A4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___75681680);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL
    || (Instance = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, v21), !v19) )
  {
    sub_1B64ACC(Instance, v21);
  }
  System_Collections_Generic_List_object___AddRange(
    v19,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_34AFBBC *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  v22 = (System_Collections_Generic_List_long__o *)sub_1B64ABC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v22,
    (const MethodInfo_3496AFC *)Method_System_Collections_Generic_List_long___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    v19,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  *(_OWORD *)&v36.fields._list = *(_OWORD *)&v35.fields.currentCryptoKey;
  v36.fields._current = (Il2CppObject *)v35.fields.fakeValue;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v23 )
      break;
    current = v36.fields._current;
    if ( !v36.fields._current )
      sub_1B64ACC(v23, v24);
    klass = v36.fields._current[5].klass;
    monitor = v36.fields._current[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v37.fields.currentCryptoKey = klass;
    *(_QWORD *)&v37.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v37, 0LL) == svtId
      && (BYTE4(current[18].monitor) & 2) == 0 )
    {
      v28 = current[2];
      *(Il2CppObject *)&v35.fields.currentCryptoKey = current[1];
      *(Il2CppObject *)&v35.fields.fakeValue = v28;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v34 = v35;
      v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v34, 0LL);
      if ( !v22 )
        sub_1B64ACC(v29, v29);
      items = v22->fields._items;
      v31 = Method_System_Collections_Generic_List_long__Add__;
      ++v22->fields._version;
      if ( !items )
        sub_1B64ACC(v29, v29);
      size = v22->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v22,
          v29,
          *(const MethodInfo_3497350 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
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
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
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

  if ( (byte_49FF387 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1B64870(&UserServantEntity_TypeInfo, v8);
    byte_49FF387 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v27, 0LL) == svtId
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
          v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v25, 0LL);
          v22 = *(_OWORD *)&v14[1].monitor;
          *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&v14->fields.items;
          *(_OWORD *)&v24.fields.fakeValue = v22;
          if ( v21 > CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v24, 0LL) )
LABEL_20:
            v12 = v14;
        }
      }
      if ( v11 == ++v13 )
        return (UserServantEntity_o *)v12;
    }
LABEL_25:
    sub_1B64ACC(list, *(_QWORD *)&svtId);
  }
  return 0LL;
}


void __fastcall UserServantMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FF38E & 1) == 0 )
  {
    sub_1B64870(&UserServantMaster___c_TypeInfo, v1);
    byte_49FF38E = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(UserServantMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserServantMaster___c_TypeInfo->static_fields->__9 = (struct UserServantMaster___c_o *)v2;
  sub_1B64814((ServantStatusBattleListViewItem_o *)UserServantMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B64ACC(this, 0LL);
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
  if ( (byte_49FF38F & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass14_0_o *)sub_1B64870(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          m);
    byte_49FF38F = 1;
  }
  if ( !m || (e = v4->fields.e) == 0LL )
    sub_1B64ACC(this, m);
  materialSvtId = m->fields.materialSvtId;
  v8 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v10, 0LL);
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
  if ( (byte_49FF390 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass15_0_o *)sub_1B64870(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          m);
    byte_49FF390 = 1;
  }
  if ( !m || (e = v4->fields.e) == 0LL )
    sub_1B64ACC(this, m);
  materialSvtId = m->fields.materialSvtId;
  v8 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v10, 0LL);
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
  if ( (byte_49FF391 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass1_0_o *)sub_1B64870(
                                                         &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                         ent);
    byte_49FF391 = 1;
  }
  if ( !ent )
    sub_1B64ACC(this, ent);
  v6 = *(_QWORD *)&ent->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&ent->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return v4->fields.svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v8, 0LL);
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
  if ( (byte_49FF392 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass31_0_o *)sub_1B64870(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          usrSvt);
    byte_49FF392 = 1;
  }
  if ( !usrSvt )
    sub_1B64ACC(this, usrSvt);
  v6 = *(_QWORD *)&usrSvt->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&usrSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v8, 0LL) == v4->fields.svtId;
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
    sub_1B64ACC(this, a);
  }
  return (_DWORD)this - UserServantEntity__getSkillLevel(a, v5->fields.skillIdx, v6);
}