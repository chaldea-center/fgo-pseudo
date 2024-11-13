void __fastcall UserServantMaster___ctor(UserServantMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B170A5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__, method, v2);
    byte_4B170A5 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    14,
    (const MethodInfo_31B2FAC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long___ctor__);
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
    sub_1BCAA3C(0LL, v8);
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
    sub_1BCAA3C(0LL, v7);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v21; // x1
  int32_t Count; // w23
  int64_t UserId; // x0
  int64_t v24; // x24
  UserServantEntity_o *v25; // x22
  int32_t v26; // w25
  UserServantEntity_o *v27; // x26
  __int64 methodPtr_low; // x10
  __int128 v29; // q0
  __int64 v30; // x27
  __int64 v31; // x28
  __int64 v32; // x27
  __int64 v33; // x28
  int32_t v34; // w27
  __int64 v35; // x2
  __int64 v36; // x3
  const MethodInfo *v37; // x2
  __int64 v38; // x27
  __int64 v39; // x28
  int32_t v40; // w27
  __int64 v41; // x27
  __int64 v42; // x28
  int32_t v43; // w27
  const MethodInfo *v44; // x3
  UserServantEntity_o *v46; // [xsp+10h] [xbp-B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+40h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_4B170BE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&svtId,
      checkStorage);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v8, v9);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v18, v19);
    byte_4B170BE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_50;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v21);
  UserId = NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v46 = 0LL;
    v24 = UserId;
    v25 = 0LL;
    v26 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v26,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v27 = (UserServantEntity_o *)list;
      methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UserServantEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantEntity_TypeInfo )
      {
        break;
      }
      v29 = *(_OWORD *)&list[2].fields.items;
      *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&list[2].klass;
      *(_OWORD *)&v49.fields.fakeValue = v29;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&svtId);
      v48 = v49;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v48, 0LL) == v24 )
      {
        v31 = *(_QWORD *)&v27->fields.svtId.fields.currentCryptoKey;
        v30 = *(_QWORD *)&v27->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
        *(_QWORD *)&v50.fields.currentCryptoKey = v31;
        *(_QWORD *)&v50.fields.fakeValue = v30;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v50, 0LL) == svtId )
        {
          if ( (v27->fields.status & 4) != 0 )
          {
            v46 = v27;
          }
          else if ( v25 )
          {
            v33 = *(_QWORD *)&v27->fields.limitCount.fields.currentCryptoKey;
            v32 = *(_QWORD *)&v27->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
            *(_QWORD *)&v51.fields.currentCryptoKey = v33;
            *(_QWORD *)&v51.fields.fakeValue = v32;
            v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v51, 0LL);
            if ( v34 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v25->fields.limitCount, 0LL)
              || v27->fields.lv > v25->fields.lv )
            {
              goto LABEL_24;
            }
            v39 = *(_QWORD *)&v27->fields.limitCount.fields.currentCryptoKey;
            v38 = *(_QWORD *)&v27->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
            *(_QWORD *)&v52.fields.currentCryptoKey = v39;
            *(_QWORD *)&v52.fields.fakeValue = v38;
            v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v52, 0LL);
            if ( v40 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v25->fields.limitCount, 0LL)
              && v27->fields.lv == v25->fields.lv
              && (v27->fields.status & 0x40) == 0
              && (v25->fields.status & 0x40) != 0 )
            {
              goto LABEL_24;
            }
            v42 = *(_QWORD *)&v27->fields.limitCount.fields.currentCryptoKey;
            v41 = *(_QWORD *)&v27->fields.limitCount.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
            *(_QWORD *)&v53.fields.currentCryptoKey = v42;
            *(_QWORD *)&v53.fields.fakeValue = v41;
            v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v53, 0LL);
            if ( v43 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v25->fields.limitCount, 0LL)
              && v27->fields.lv == v25->fields.lv
              && v27->fields.createdAt < v25->fields.createdAt )
            {
LABEL_24:
              v25 = (UserServantEntity_o *)sub_1BCAA2C(UserServantEntity_TypeInfo, *(_QWORD *)&svtId, v35, v36);
              UserServantEntity___ctor_40923816(v25, v27, v37);
            }
          }
          else
          {
            v25 = v27;
          }
        }
      }
      if ( Count == ++v26 )
        goto LABEL_42;
    }
LABEL_50:
    sub_1BCAA3C(list, *(_QWORD *)&svtId);
  }
  v46 = 0LL;
  v25 = 0LL;
LABEL_42:
  if ( checkStorage )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !list )
      goto LABEL_50;
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)list,
                                                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
    if ( !list )
      goto LABEL_50;
    v25 = UserServantStorageMaster__CostumeTargetEntity((UserServantStorageMaster_o *)list, svtId, v25, v44);
  }
  if ( v25 )
    return v25;
  else
    return v46;
}


System_Collections_Generic_List_int__o *__fastcall UserServantMaster__GetAllServantList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  int64_t Instance; // x0
  const MethodInfo *v35; // x1
  Il2CppObject *MasterData_object; // x19
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Collections_Generic_List_int__o *v40; // x20
  __int64 v41; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v44; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0
  _OWORD *v51; // x0
  _OWORD *v52; // x23
  __int64 methodPtr_low; // x9
  __int128 v54; // q0
  __int64 v55; // x1
  int64_t v56; // x24
  __int64 v57; // x1
  __int64 v58; // x24
  __int64 v59; // x25
  __int64 v60; // x0
  Il2CppObject *Entity; // x0
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x24
  __int64 v65; // x25
  __int64 v66; // x0
  __int64 v67; // x1
  __int64 v68; // x23
  __int64 v69; // x24
  __int64 v70; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v72; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v74; // x8
  __int64 v75; // x9
  int32_t *v76; // x10
  __int64 v77; // x0
  __int64 v78; // x8
  int64_t v79; // x21
  unsigned __int64 v80; // x24
  __int64 v81; // x28
  __int128 v82; // q0
  __int64 v83; // x1
  int64_t v84; // x22
  __int64 v85; // x22
  __int64 v86; // x23
  __int64 v87; // x22
  __int64 v88; // x23
  __int64 v89; // x22
  __int64 v90; // x23
  struct System_Int32_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  UserServantStorageMaster_o *v95; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+50h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16

  if ( (byte_4B170AD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v22, v23);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26, v27);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v32, v33);
    byte_4B170AD = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  v95 = (UserServantStorageMaster_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v40 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v37,
                                                    v38,
                                                    v39);
  System_Collections_Generic_List_int____ctor(
    v40,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_81;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v41);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v44 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v44;
        p_offset += 4;
        if ( !v44 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v47 = Enumerator->klass;
    v48 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v49 = &v47->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v49 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_18;
      }
      v50 = (__int64)&v47->vtable[*v49].method;
    }
    else
    {
LABEL_18:
      v50 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v51 = (_OWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(
                      Enumerator,
                      *(_QWORD *)(v50 + 8));
    v52 = v51;
    if ( v51 )
    {
      methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v51 + 304LL) < (unsigned int)methodPtr_low
        || *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)v51 + 200LL) + 8 * methodPtr_low - 8) != UserServantEntity_TypeInfo )
      {
        sub_1BCACFC(v51);
        goto LABEL_80;
      }
      v54 = v51[4];
      *(_OWORD *)&v98.fields.currentCryptoKey = v51[3];
      *(_OWORD *)&v98.fields.fakeValue = v54;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
          UserServantEntity_TypeInfo);
      v97 = v98;
      v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v97, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v55);
      if ( v56 == NetworkManager__get_UserId(0LL) && (*((_BYTE *)v52 + 300) & 4) == 0 )
      {
        v59 = *((_QWORD *)v52 + 10);
        v58 = *((_QWORD *)v52 + 11);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v57);
        *(_QWORD *)&v99.fields.currentCryptoKey = v59;
        *(_QWORD *)&v99.fields.fakeValue = v58;
        v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v99, 0LL);
        if ( !MasterData_object )
          sub_1BCAA3C(v60, (unsigned int)v60);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v60,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_1BCAA3C(0LL, v62);
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0LL) )
        {
          v65 = *((_QWORD *)v52 + 10);
          v64 = *((_QWORD *)v52 + 11);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v63);
          *(_QWORD *)&v100.fields.currentCryptoKey = v65;
          *(_QWORD *)&v100.fields.fakeValue = v64;
          v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v100, 0LL);
          if ( !v40 )
            sub_1BCAA3C(v66, (unsigned int)v66);
          if ( !System_Collections_Generic_List_int___Contains(
                  v40,
                  v66,
                  (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            v69 = *((_QWORD *)v52 + 10);
            v68 = *((_QWORD *)v52 + 11);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v67);
            *(_QWORD *)&v101.fields.currentCryptoKey = v69;
            *(_QWORD *)&v101.fields.fakeValue = v68;
            v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v101, 0LL);
            items = v40->fields._items;
            v72 = Method_System_Collections_Generic_List_int__Add__;
            ++v40->fields._version;
            if ( !items )
              sub_1BCAA3C(v70, (unsigned int)v70);
            size = v40->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v40,
                v70,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
            }
            else
            {
              v40->fields._size = size + 1;
              items->m_Items[size + 1] = v70;
            }
          }
        }
      }
    }
  }
  v74 = Enumerator->klass;
  v75 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v76 = &v74->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v76 - 1) != System_IDisposable_TypeInfo )
    {
      --v75;
      v76 += 4;
      if ( !v75 )
        goto LABEL_48;
    }
    v77 = (__int64)&v74->vtable[*v76].method;
  }
  else
  {
LABEL_48:
    v77 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v77)(Enumerator, *(_QWORD *)(v77 + 8));
  Instance = (int64_t)v95;
  if ( !v95 || (Instance = (int64_t)UserServantStorageMaster__getList(v95, v35)) == 0 )
LABEL_81:
    sub_1BCAA3C(Instance, v35);
  v78 = *(_QWORD *)(Instance + 24);
  v79 = Instance;
  if ( (int)v78 >= 1 )
  {
    v80 = 0LL;
    while ( v80 < (unsigned int)v78 )
    {
      v81 = *(_QWORD *)(v79 + 32 + 8 * v80);
      if ( v81 )
      {
        v82 = *(_OWORD *)(v81 + 64);
        *(_OWORD *)&v98.fields.currentCryptoKey = *(_OWORD *)(v81 + 48);
        *(_OWORD *)&v98.fields.fakeValue = v82;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35);
        v96 = v98;
        v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v96, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v83);
        Instance = NetworkManager__get_UserId(0LL);
        if ( v84 == Instance )
        {
          v86 = *(_QWORD *)(v81 + 80);
          v85 = *(_QWORD *)(v81 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35);
          *(_QWORD *)&v102.fields.currentCryptoKey = v86;
          *(_QWORD *)&v102.fields.fakeValue = v85;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v102, 0LL);
          if ( !v40 )
            goto LABEL_81;
          Instance = System_Collections_Generic_List_int___Contains(
                       v40,
                       Instance,
                       (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Instance & 1) == 0 && (*(_BYTE *)(v81 + 300) & 4) == 0 )
          {
            v88 = *(_QWORD *)(v81 + 80);
            v87 = *(_QWORD *)(v81 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35);
            *(_QWORD *)&v103.fields.currentCryptoKey = v88;
            *(_QWORD *)&v103.fields.fakeValue = v87;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v103, 0LL);
            if ( !MasterData_object )
              goto LABEL_81;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              goto LABEL_81;
            Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
            if ( (Instance & 1) != 0 )
            {
              v90 = *(_QWORD *)(v81 + 80);
              v89 = *(_QWORD *)(v81 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35);
              *(_QWORD *)&v104.fields.currentCryptoKey = v90;
              *(_QWORD *)&v104.fields.fakeValue = v89;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v104, 0LL);
              v91 = v40->fields._items;
              v92 = Method_System_Collections_Generic_List_int__Add__;
              ++v40->fields._version;
              if ( !v91 )
                goto LABEL_81;
              v93 = v40->fields._size;
              v35 = (const MethodInfo *)(unsigned int)Instance;
              if ( (unsigned int)v93 >= v91->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v40,
                  Instance,
                  *(const MethodInfo_3584C38 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
              }
              else
              {
                v40->fields._size = v93 + 1;
                v91->m_Items[v93 + 1] = Instance;
              }
            }
          }
        }
      }
      LODWORD(v78) = *(_DWORD *)(v79 + 24);
      if ( (__int64)++v80 >= (int)v78 )
        return v40;
    }
LABEL_80:
    sub_1BCAA44(Instance, v35);
  }
  return v40;
}


UserServantEntity_array *__fastcall UserServantMaster__GetCombineMaterialList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  int64_t Instance; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  Il2CppObject *MasterData_object; // x27
  int64_t v32; // x20
  int32_t Count; // w23
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_List_object__o *v37; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v38; // x26
  __int64 *v39; // x21
  int32_t v40; // w24
  int64_t v41; // x25
  __int64 methodPtr_low; // x10
  __int128 v43; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v44; // x0
  const MethodInfo_31B2E40 **v45; // x22
  Il2CppObject *v46; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v47; // x20
  __int64 v48; // x26
  __int64 v49; // x27
  int32_t v50; // w1
  DataMasterBase_TMaster__TEntity__PKType__o *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x0
  System_Collections_Generic_List_object__o *v63; // [xsp+0h] [xbp-B0h]
  int64_t v64; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4B170BF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v26, v27);
    byte_4B170BF = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v30);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_31;
  v32 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v37 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v34,
                                                       v35,
                                                       v36);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v38 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v39 = &Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__;
    v40 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v40,
                            (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v41 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v43 = *(_OWORD *)(Instance + 64);
          v44 = *v38;
          *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)(v41 + 48);
          *(_OWORD *)&v66.fields.fakeValue = v43;
          if ( !v44->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v44, v29);
          v65 = v66;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v65, 0LL);
          if ( Instance == v32 && (*(_BYTE *)(v41 + 300) & 4) == 0 )
          {
            v63 = v37;
            v64 = v32;
            v45 = (const MethodInfo_31B2E40 **)v39;
            v46 = MasterData_object;
            v47 = v38;
            v49 = *(_QWORD *)(v41 + 80);
            v48 = *(_QWORD *)(v41 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
            *(_QWORD *)&v67.fields.currentCryptoKey = v49;
            *(_QWORD *)&v67.fields.fakeValue = v48;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v67, 0LL);
            if ( !v46 )
              break;
            MasterData_object = v46;
            v50 = Instance;
            v51 = (DataMasterBase_TMaster__TEntity__PKType__o *)v46;
            v39 = (__int64 *)v45;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(v51, v50, *v45);
            if ( !Instance )
              break;
            v38 = v47;
            Instance = ServantEntity__get_IsCombineMaterial((ServantEntity_o *)Instance, 0LL);
            v37 = v63;
            v32 = v64;
            if ( (Instance & 1) != 0 && (*(_BYTE *)(v41 + 300) & 0x11) == 0 )
            {
              if ( !v63 )
                break;
              items = v63->fields._items;
              v59 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v63->fields._version;
              if ( !items )
                break;
              size = v63->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v63,
                  (Il2CppObject *)v41,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
              }
              else
              {
                v61 = &items->obj.klass + size;
                v63->fields._size = size + 1;
                v61[4] = (Il2CppClass *)v41;
                sub_1BCA784((PartyOrganizationUtility_o *)(v61 + 4), v41, v52, v53, v54, v55, v56, v57);
              }
            }
          }
        }
      }
      if ( Count == ++v40 )
        goto LABEL_29;
    }
LABEL_31:
    sub_1BCAA3C(Instance, v29);
  }
LABEL_29:
  if ( !v37 )
    goto LABEL_31;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v37,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__GetEntities(
        UserServantMaster_o *this,
        System_Int64_array *userServantIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_long__o *v8; // x21

  if ( (byte_4B170C4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor___76787640, userServantIds, method);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v6, v7);
    byte_4B170C4 = 1;
  }
  if ( userServantIds )
  {
    v8 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_long__TypeInfo,
                                                      userServantIds,
                                                      method,
                                                      v3);
    System_Collections_Generic_List_long____ctor_56137060(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)userServantIds,
      (const MethodInfo_3589564 *)Method_System_Collections_Generic_List_long___ctor___76787640);
  }
  else
  {
    v8 = 0LL;
  }
  return UserServantMaster__GetEntities_41000708(this, v8, method);
}


UserServantEntity_array *__fastcall UserServantMaster__GetEntities_41000708(
        UserServantMaster_o *this,
        System_Collections_Generic_List_long__o *userServantIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_List_object__o *v28; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v30; // x1
  __int64 v31; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  Il2CppObject *v41; // x0
  Il2CppObject *v42; // x22
  __int64 methodPtr_low; // x9
  Il2CppObject v44; // q0
  int64_t v45; // x1
  _BOOL8 v46; // x0
  __int64 v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  System_Collections_Generic_IEnumerator_T__c *v58; // x8
  __int64 v59; // x9
  int32_t *v60; // x10
  __int64 v61; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+20h] [xbp-80h]

  if ( (byte_4B170C5 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      userServantIds,
      method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Contains__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v22, v23);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v26, v27);
    byte_4B170C5 = 1;
  }
  v28 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       userServantIds,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( userServantIds && userServantIds->fields._size >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_43;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   list,
                   (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_1BCAA3C(0LL, v31);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v34;
          p_offset += 4;
          if ( !v34 )
            goto LABEL_11;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_11:
        p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v37 = Enumerator->klass;
      v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v39 = &v37->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v39 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v38;
          v39 += 4;
          if ( !v38 )
            goto LABEL_18;
        }
        v40 = (__int64)&v37->vtable[*v39].method;
      }
      else
      {
LABEL_18:
        v40 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v41 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                              Enumerator,
                              *(_QWORD *)(v40 + 8));
      v42 = v41;
      if ( v41 )
      {
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v41->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (UserServantEntity_c *)v41->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantEntity_TypeInfo )
        {
          sub_1BCACFC(v41);
LABEL_41:
          sub_1BCAA3C(v46, v47);
        }
        v44 = v41[2];
        *(Il2CppObject *)&v64.fields.currentCryptoKey = v41[1];
        *(Il2CppObject *)&v64.fields.fakeValue = v44;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
            UserServantEntity_TypeInfo);
        v63 = v64;
        v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v63, 0LL);
        v46 = System_Collections_Generic_List_long___Contains(
                userServantIds,
                v45,
                (const MethodInfo_358A008 *)Method_System_Collections_Generic_List_long__Contains__);
        if ( v46 )
        {
          if ( !v28 )
            goto LABEL_41;
          items = v28->fields._items;
          v55 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v28->fields._version;
          if ( !items )
            sub_1BCAA3C(v46, v47);
          size = v28->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v28,
              v42,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          }
          else
          {
            v57 = &items->obj.klass + size;
            v28->fields._size = size + 1;
            v57[4] = (Il2CppClass *)v42;
            sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 4), (int64_t)v42, v48, v49, v50, v51, v52, v53);
          }
        }
      }
    }
    v58 = Enumerator->klass;
    v59 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v60 = &v58->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
      {
        --v59;
        v60 += 4;
        if ( !v59 )
          goto LABEL_35;
      }
      v61 = (__int64)&v58->vtable[*v60].method;
    }
    else
    {
LABEL_35:
      v61 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v61)(
                                                               Enumerator,
                                                               *(_QWORD *)(v61 + 8));
  }
  if ( !v28 )
LABEL_43:
    sub_1BCAA3C(list, v30);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v28,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantMaster__GetHaveServantSkillLevelMax(
        UserServantMaster_o *this,
        int32_t svtId,
        int32_t skillIdx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x19
  UserServantEntity_o *All_object; // x0
  const MethodInfo *v21; // x1
  System_Object_array *AllList; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Predicate_object__o *v26; // x21
  __int64 v27; // x2
  __int64 v28; // x3
  System_Object_array *v29; // x20
  System_Comparison_T__o *v30; // x21
  __int64 v31; // x0
  const MethodInfo *v32; // x2

  if ( (byte_4B170C0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_FindAll_UserServantEntity___, *(_QWORD *)&svtId, *(_QWORD *)&skillIdx);
    sub_1BCA7E0(&Method_System_Array_Sort_UserServantEntity___, v7, v8);
    sub_1BCA7E0(&System_Comparison_UserServantEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Predicate_UserServantEntity__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_UserServantMaster___c__DisplayClass31_0__GetHaveServantSkillLevelMax_b__0__, v13, v14);
    sub_1BCA7E0(&Method_UserServantMaster___c__DisplayClass31_0__GetHaveServantSkillLevelMax_b__1__, v15, v16);
    sub_1BCA7E0(&UserServantMaster___c__DisplayClass31_0_TypeInfo, v17, v18);
    byte_4B170C0 = 1;
  }
  v19 = sub_1BCAA2C(UserServantMaster___c__DisplayClass31_0_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&skillIdx, method);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_10;
  *(_DWORD *)(v19 + 16) = svtId;
  *(_DWORD *)(v19 + 20) = skillIdx;
  AllList = (System_Object_array *)UserServantMaster__getAllList(this, v21);
  v26 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_UserServantEntity__TypeInfo, v23, v24, v25);
  System_Predicate_object____ctor(
    v26,
    (Il2CppObject *)v19,
    Method_UserServantMaster___c__DisplayClass31_0__GetHaveServantSkillLevelMax_b__0__,
    0LL);
  All_object = (UserServantEntity_o *)System_Array__FindAll_object_(
                                        AllList,
                                        (System_Predicate_T__o *)v26,
                                        (const MethodInfo_300CF94 *)Method_System_Array_FindAll_UserServantEntity___);
  if ( !All_object )
    goto LABEL_10;
  v29 = (System_Object_array *)All_object;
  if ( All_object->fields.id.fields.hiddenValue )
  {
    v30 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_UserServantEntity__TypeInfo, v21, v27, v28);
    System_Comparison_object____ctor(
      v30,
      (Il2CppObject *)v19,
      Method_UserServantMaster___c__DisplayClass31_0__GetHaveServantSkillLevelMax_b__1__,
      0LL);
    System_Array__Sort_object__49153980(
      v29,
      v30,
      (const MethodInfo_2EE07BC *)Method_System_Array_Sort_UserServantEntity___);
    if ( !v29->max_length )
      sub_1BCAA44(v31, v21);
    All_object = (UserServantEntity_o *)v29->m_Items[0];
    if ( All_object )
      return UserServantEntity__getSkillLevel(All_object, *(_DWORD *)(v19 + 20), v32);
LABEL_10:
    sub_1BCAA3C(All_object, v21);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v18; // x1
  UserServantEntity_array *AllList; // x21
  __int64 v20; // x8
  int32_t v21; // w22
  unsigned __int64 i; // x25
  UserServantEntity_o *v23; // x28
  __int64 v24; // x23
  __int64 v25; // x24
  int32_t treasureDeviceLv1; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4B170B7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&System_Math_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B170B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___),
        AllList = UserServantMaster__getAllList(this, v18),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL
    || (Instance = (Il2CppObject *)UserPresentBoxMaster__isExist((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL),
        !AllList) )
  {
LABEL_21:
    sub_1BCAA3C(Instance, v16);
  }
  v20 = *(_QWORD *)&AllList->max_length;
  v21 = (unsigned __int8)Instance & 1;
  if ( (int)v20 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v20; ++i )
    {
      if ( i >= (unsigned int)v20 )
        sub_1BCAA44(Instance, v16);
      v23 = AllList->m_Items[i];
      if ( v23 )
      {
        v25 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
        v24 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
        *(_QWORD *)&v28.fields.currentCryptoKey = v25;
        *(_QWORD *)&v28.fields.fakeValue = v24;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v28, 0LL);
        if ( !MasterData_object )
          goto LABEL_21;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_21;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                     (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Instance[2],
                                     0LL);
        if ( (_DWORD)Instance == servantId )
        {
          treasureDeviceLv1 = v23->fields.treasureDeviceLv1;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v16);
          Instance = (Il2CppObject *)System_Math__Max_63220196(v21, treasureDeviceLv1, 0LL);
          v21 = (int)Instance;
        }
      }
      LODWORD(v20) = AllList->max_length;
    }
  }
  return v21;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantMaster__GetServantHavingCount(
        UserServantMaster_o *this,
        int32_t servantId,
        bool isCheckPresentBox,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UserServantEntity_array *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v18; // x1
  __int64 v19; // x8
  UserServantEntity_array *v20; // x23
  int32_t v21; // w21
  unsigned __int64 v22; // x27
  UserServantEntity_o *v23; // x8
  __int64 v24; // x24
  __int64 v25; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4B170B5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId, isCheckPresentBox);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B170B5 = 1;
  }
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = UserServantMaster__getAllList(this, v18);
  if ( !Instance )
    goto LABEL_23;
  v19 = *(_QWORD *)&Instance->max_length;
  v20 = Instance;
  if ( (int)v19 < 1 )
  {
    v21 = 0;
    if ( !isCheckPresentBox )
      return v21;
    goto LABEL_19;
  }
  v21 = 0;
  v22 = 0LL;
  do
  {
    if ( v22 >= (unsigned int)v19 )
      sub_1BCAA44(Instance, v16);
    v23 = v20->m_Items[v22];
    if ( v23 )
    {
      v25 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
      v24 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
      *(_QWORD *)&v27.fields.currentCryptoKey = v25;
      *(_QWORD *)&v27.fields.fakeValue = v24;
      Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                              v27,
                                              0LL);
      if ( !MasterData_object )
        goto LABEL_23;
      Instance = (UserServantEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                              (int32_t)Instance,
                                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_23;
      Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance->m_Items,
                                              0LL);
      if ( (_DWORD)Instance == servantId )
        ++v21;
    }
    LODWORD(v19) = v20->max_length;
    ++v22;
  }
  while ( (__int64)v22 < (int)v19 );
  if ( isCheckPresentBox )
  {
LABEL_19:
    Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
      if ( Instance )
      {
        v21 += UserPresentBoxMaster__GetCount((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL);
        return v21;
      }
    }
LABEL_23:
    sub_1BCAA3C(Instance, v16);
  }
  return v21;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantMaster__GetServantHavingTdLvCount(
        UserServantMaster_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UserServantEntity_array *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v16; // x1
  __int64 v17; // x8
  UserServantEntity_array *v18; // x21
  int v19; // w25
  unsigned __int64 v20; // x26
  UserServantEntity_o *v21; // x24
  __int64 v22; // x22
  __int64 v23; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4B170B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B170B6 = 1;
  }
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = UserServantMaster__getAllList(this, v16);
  if ( !Instance )
    goto LABEL_21;
  v17 = *(_QWORD *)&Instance->max_length;
  v18 = Instance;
  if ( (int)v17 >= 1 )
  {
    v19 = 0;
    v20 = 0LL;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v17 )
        sub_1BCAA44(Instance, v14);
      v21 = v18->m_Items[v20];
      if ( v21 )
      {
        v23 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
        v22 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
        *(_QWORD *)&v25.fields.currentCryptoKey = v23;
        *(_QWORD *)&v25.fields.fakeValue = v22;
        Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                v25,
                                                0LL);
        if ( !MasterData_object )
          goto LABEL_21;
        Instance = (UserServantEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                (int32_t)Instance,
                                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_21;
        Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance->m_Items,
                                                0LL);
        if ( (_DWORD)Instance == servantId )
          v19 += v21->fields.treasureDeviceLv1;
      }
      LODWORD(v17) = v18->max_length;
      if ( (__int64)++v20 >= (int)v17 )
        goto LABEL_18;
    }
  }
  v19 = 0;
LABEL_18:
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___)) == 0LL )
  {
LABEL_21:
    sub_1BCAA3C(Instance, v14);
  }
  return UserPresentBoxMaster__GetCount((UserPresentBoxMaster_o *)Instance, 1, servantId, 0LL) + v19;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserServantMaster__GetServantHavintLimitMaxCount(
        UserServantMaster_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  DataManager_o *Instance; // x0
  __int64 v32; // x1
  __int64 v33; // x1
  Il2CppObject *MasterData_object; // x22
  int64_t UserId; // x23
  const MethodInfo *v36; // x1
  UserServantEntity_array *AllList; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  UserServantMaster___c_c *v41; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x19
  System_Func_object__bool__o *_9__34_0; // x21
  Il2CppObject *v44; // x24
  struct UserServantMaster___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  DataManager_c *klass; // x8
  DataManager_o *v53; // x19
  __int64 v54; // x9
  int32_t *p_offset; // x10
  __int64 v56; // x0
  __int64 v57; // x1
  __int64 v58; // x19
  __int64 v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  __int64 v63; // x8
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  __int64 v67; // x0
  __int64 v68; // x1
  __int64 v69; // x24
  __int128 v70; // q0
  __int64 v71; // x1
  __int64 v72; // x25
  __int64 v73; // x26
  __int64 v74; // x0
  Il2CppObject *Entity; // x0
  __int64 v76; // x1
  Il2CppObject *v77; // x25
  __int64 v78; // x1
  __int64 v79; // x24
  __int64 v80; // x26
  int32_t v81; // w0
  int v82; // w8
  __int64 v83; // x8
  __int64 v84; // x9
  int *v85; // x10
  __int64 v86; // x0
  int32_t v88; // [xsp+Ch] [xbp-A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16

  if ( (byte_4B170C2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&servantId, method);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v7, v8);
    sub_1BCA7E0(&System_Func_UserServantEntity__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v17, v18);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__34_0__, v27, v28);
    sub_1BCA7E0(&UserServantMaster___c_TypeInfo, v29, v30);
    byte_4B170C2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v33);
  UserId = NetworkManager__get_UserId(0LL);
  AllList = UserServantMaster__getAllList(this, v36);
  v41 = UserServantMaster___c_TypeInfo;
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)AllList;
  if ( !UserServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantMaster___c_TypeInfo, v38);
    v41 = UserServantMaster___c_TypeInfo;
  }
  _9__34_0 = (System_Func_object__bool__o *)v41->static_fields->__9__34_0;
  if ( !_9__34_0 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41, v38);
      v41 = UserServantMaster___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v41->static_fields->__9;
    _9__34_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_UserServantEntity__bool__TypeInfo, v38, v39, v40);
    System_Func_object__bool____ctor(
      _9__34_0,
      v44,
      Method_UserServantMaster___c__GetServantHavintLimitMaxCount_b__34_0__,
      0LL);
    static_fields = UserServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = (struct System_Func_UserServantEntity__bool__o *)_9__34_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__34_0,
      (int64_t)_9__34_0,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  Instance = (DataManager_o *)System_Linq_Enumerable__Where_object_(
                                v42,
                                (System_Func_TSource__bool__o *)_9__34_0,
                                (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
  if ( !Instance )
LABEL_58:
    sub_1BCAA3C(Instance, v32);
  klass = Instance->klass;
  v53 = Instance;
  v54 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_UserServantEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo )
    {
      --v54;
      p_offset += 4;
      if ( !v54 )
        goto LABEL_17;
    }
    v56 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v56 = sub_1C1C7C0(Instance, System_Collections_Generic_IEnumerable_UserServantEntity__TypeInfo, 0LL);
  }
  v58 = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v56)(v53, *(_QWORD *)(v56 + 8));
  if ( !v58 )
    sub_1BCAA3C(0LL, v57);
  v88 = 0;
  while ( 1 )
  {
    v59 = *(_QWORD *)v58;
    v60 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
    {
      v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v61 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v60;
        v61 += 4;
        if ( !v60 )
          goto LABEL_25;
      }
      v62 = v59 + 16LL * *v61 + 312;
    }
    else
    {
LABEL_25:
      v62 = sub_1C1C7C0(v58, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v62)(v58, *(_QWORD *)(v62 + 8)) & 1) == 0 )
      break;
    v63 = *(_QWORD *)v58;
    v64 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
    {
      v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_UserServantEntity__c **)v65 - 1) != System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo )
      {
        --v64;
        v65 += 4;
        if ( !v64 )
          goto LABEL_32;
      }
      v66 = v63 + 16LL * *v65 + 312;
    }
    else
    {
LABEL_32:
      v66 = sub_1C1C7C0(v58, System_Collections_Generic_IEnumerator_UserServantEntity__TypeInfo, 0LL);
    }
    v67 = (*(__int64 (__fastcall **)(__int64, _QWORD))v66)(v58, *(_QWORD *)(v66 + 8));
    v69 = v67;
    if ( v67 )
    {
      v70 = *(_OWORD *)(v67 + 64);
      *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)(v67 + 48);
      *(_OWORD *)&v90.fields.fakeValue = v70;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v68);
      v89 = v90;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v89, 0LL) == UserId
        && (*(_BYTE *)(v69 + 300) & 4) == 0 )
      {
        v73 = *(_QWORD *)(v69 + 80);
        v72 = *(_QWORD *)(v69 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v71);
        *(_QWORD *)&v91.fields.currentCryptoKey = v73;
        *(_QWORD *)&v91.fields.fakeValue = v72;
        v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v91, 0LL);
        if ( !MasterData_object )
          sub_1BCAA3C(v74, (unsigned int)v74);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v74,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v77 = Entity;
        if ( !Entity )
          sub_1BCAA3C(0LL, v76);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
               (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[2],
               0LL) == servantId )
        {
          v80 = *(_QWORD *)(v69 + 96);
          v79 = *(_QWORD *)(v69 + 104);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v78);
          *(_QWORD *)&v92.fields.currentCryptoKey = v80;
          *(_QWORD *)&v92.fields.fakeValue = v79;
          v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v92, 0LL);
          v82 = v88;
          if ( v81 == LODWORD(v77[5].monitor) )
            v82 = v88 + 1;
          v88 = v82;
        }
      }
    }
  }
  v83 = *(_QWORD *)v58;
  v84 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
  {
    v85 = (int *)(*(_QWORD *)(v83 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v85 - 1) != System_IDisposable_TypeInfo )
    {
      --v84;
      v85 += 4;
      if ( !v84 )
        goto LABEL_53;
    }
    v86 = v83 + 16LL * *v85 + 312;
  }
  else
  {
LABEL_53:
    v86 = sub_1C1C7C0(v58, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v86)(v58, *(_QWORD *)(v86 + 8));
  return v88;
}


int32_t __fastcall UserServantMaster__GetSvtEquipFriendShip(UserServantMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  Il2CppObject *MasterData_object; // x20
  DataManager_o *v24; // x21
  int32_t Count; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v26; // x26
  int32_t v27; // w23
  int32_t v28; // w22
  int32_t v29; // w24
  Il2CppObject *Item; // x0
  Il2CppObject *v31; // x25
  __int64 methodPtr_low; // x10
  Il2CppObject v33; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v35; // x29
  void *monitor; // x25
  Il2CppClass *klass; // x26
  Il2CppObject *Entity; // x0
  ServantEntity_o *v39; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4B170C3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v18, v19);
    byte_4B170C3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_27;
  v24 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v26 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v27 = Count;
    v28 = 0;
    v29 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v29,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v31 = Item;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantEntity_TypeInfo )
        {
          v33 = Item[4];
          *(Il2CppObject *)&v42.fields.currentCryptoKey = Item[3];
          *(Il2CppObject *)&v42.fields.fakeValue = v33;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
          v41 = v42;
          if ( (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v41, 0LL) == v24
            && (BYTE4(v31[18].monitor) & 4) == 0 )
          {
            v34 = *v26;
            v35 = v26;
            klass = v31[5].klass;
            monitor = v31[5].monitor;
            if ( !v34->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v34, v21);
            *(_QWORD *)&v43.fields.currentCryptoKey = klass;
            *(_QWORD *)&v43.fields.fakeValue = monitor;
            v21 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v43, 0LL);
            Instance = (DataManager_o *)MasterData_object;
            if ( !MasterData_object )
              break;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       v21,
                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            v26 = v35;
            if ( Entity )
            {
              v39 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServantEquip(HIDWORD(Entity[5].klass), 0LL) )
                v28 += ServantEntity__get_IsFriendShipSvtEquip(v39, 0LL);
            }
          }
        }
      }
      if ( v27 == ++v29 )
        return v28;
    }
LABEL_27:
    sub_1BCAA3C(Instance, v21);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *v13; // x22
  __int64 v14; // x0
  const MethodInfo *v15; // x1
  System_Collections_Generic_IEnumerable_TSource__o *List; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Func_object__bool__o *v20; // x21
  Il2CppObject *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B170A6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____76880424, svtEnt, svtId);
    sub_1BCA7E0(&System_Func_UserServantEntity__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__, v9, v10);
    sub_1BCA7E0(&UserServantMaster___c__DisplayClass1_0_TypeInfo, v11, v12);
    byte_4B170A6 = 1;
  }
  v13 = (Il2CppObject *)sub_1BCAA2C(UserServantMaster___c__DisplayClass1_0_TypeInfo, svtEnt, svtId, method);
  System_Object___ctor(v13, 0LL);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  v13[1].klass = (Il2CppClass *)svtId;
  List = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getList(this, v15);
  v20 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_UserServantEntity__bool__TypeInfo, v17, v18, v19);
  System_Func_object__bool____ctor(
    v20,
    v13,
    Method_UserServantMaster___c__DisplayClass1_0__TryGetEntityFromSvtId_b__0__,
    0LL);
  v21 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          List,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity____76880424);
  *svtEnt = (UserServantEntity_o *)v21;
  sub_1BCA784((PartyOrganizationUtility_o *)svtEnt, (int64_t)v21, v22, v23, v24, v25, v26, v27);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_object__o *v30; // x21
  const MethodInfo *v31; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v33; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0
  Il2CppObject *v43; // x0
  __int64 v44; // x1
  Il2CppObject *v45; // x24
  __int64 methodPtr_low; // x10
  void *monitor; // x25
  Il2CppClass *v48; // x26
  __int64 v49; // x0
  __int64 v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x0
  System_Collections_Generic_IEnumerator_T__c *v61; // x8
  __int64 v62; // x9
  int32_t *v63; // x10
  __int64 v64; // x0
  __int64 v65; // x1
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  System_Collections_ObjectModel_Collection_T__c *v72; // x8
  System_Collections_ObjectModel_Collection_T__o *v73; // x22
  unsigned __int64 v74; // x19
  Il2CppObject *v75; // x23
  void *v76; // x24
  Il2CppClass *v77; // x25
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  PartyOrganizationUtility_o *v83; // [xsp+0h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16

  if ( (byte_4B170C6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      userServantList,
      *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantStorageMaster___, v8, v9);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v24, v25);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26, v27);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v28, v29);
    byte_4B170C6 = 1;
  }
  v30 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       userServantList,
                                                       *(_QWORD *)&svtId,
                                                       isIncludeStorage);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_59;
  v83 = (PartyOrganizationUtility_o *)userServantList;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v33);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v36;
        p_offset += 4;
        if ( !v36 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v39 = Enumerator->klass;
    v40 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v41 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_16;
      }
      v42 = (__int64)&v39->vtable[*v41].method;
    }
    else
    {
LABEL_16:
      v42 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v43 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
                            Enumerator,
                            *(_QWORD *)(v42 + 8));
    v45 = v43;
    if ( !v43
      || (methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v43->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (UserServantEntity_c *)v43->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantEntity_TypeInfo )
    {
      sub_1BCAA3C(v43, v44);
    }
    v48 = v43[5].klass;
    monitor = v43[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v44);
    *(_QWORD *)&v85.fields.currentCryptoKey = v48;
    *(_QWORD *)&v85.fields.fakeValue = monitor;
    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v85, 0LL);
    if ( (_DWORD)v49 == svtId )
    {
      if ( !v30 )
        sub_1BCAA3C(v49, v50);
      items = v30->fields._items;
      v58 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
      ++v30->fields._version;
      if ( !items )
        sub_1BCAA3C(v49, v50);
      size = v30->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v30,
          v45,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
      }
      else
      {
        v60 = &items->obj.klass + size;
        v30->fields._size = size + 1;
        v60[4] = (Il2CppClass *)v45;
        sub_1BCA784((PartyOrganizationUtility_o *)(v60 + 4), (int64_t)v45, v51, v52, v53, v54, v55, v56);
      }
    }
  }
  v61 = Enumerator->klass;
  v62 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v63 = &v61->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
    {
      --v62;
      v63 += 4;
      if ( !v62 )
        goto LABEL_33;
    }
    v64 = (__int64)&v61->vtable[*v63].method;
  }
  else
  {
LABEL_33:
    v64 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v64)(Enumerator, *(_QWORD *)(v64 + 8));
  if ( isIncludeStorage )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v65);
    list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantStorageMaster___);
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)UserServantStorageMaster__getList(
                                                                 (UserServantStorageMaster_o *)list,
                                                                 v31);
      if ( list )
      {
        v72 = list[1].klass;
        v73 = list;
        if ( (int)v72 >= 1 )
        {
          v74 = 0LL;
          while ( 1 )
          {
            if ( v74 >= (unsigned int)v72 )
              sub_1BCAA44(list, v31);
            v75 = (Il2CppObject *)*((_QWORD *)&v73[1].monitor + v74);
            if ( v75 )
            {
              v77 = v75[5].klass;
              v76 = v75[5].monitor;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
              *(_QWORD *)&v86.fields.currentCryptoKey = v77;
              *(_QWORD *)&v86.fields.fakeValue = v76;
              list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                         v86,
                                                                         0LL);
              if ( (_DWORD)list == svtId )
              {
                if ( !v30 )
                  goto LABEL_59;
                v78 = v30->fields._items;
                v79 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v30->fields._version;
                if ( !v78 )
                  goto LABEL_59;
                v80 = v30->fields._size;
                if ( (unsigned int)v80 >= v78->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v30,
                    v75,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
                }
                else
                {
                  v81 = &v78->obj.klass + v80;
                  v30->fields._size = v80 + 1;
                  v81[4] = (Il2CppClass *)v75;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v81 + 4), (int64_t)v75, v66, v67, v68, v69, v70, v71);
                }
              }
            }
            LODWORD(v72) = v73[1].klass;
            if ( (__int64)++v74 >= (int)v72 )
              goto LABEL_53;
          }
        }
        goto LABEL_53;
      }
    }
LABEL_59:
    sub_1BCAA3C(list, v31);
  }
LABEL_53:
  v83->klass = (PartyOrganizationUtility_c *)v30;
  sub_1BCA784(v83, (int64_t)v30, v66, v67, v68, v69, v70, v71);
  if ( !v83->klass )
    goto LABEL_59;
  return SLODWORD(v83->klass->_1.namespaze) > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantMaster__TryGetEntitySvtStorageListBySvtId(
        UserServantMaster_o *this,
        System_Collections_Generic_List_UserServantEntity__o **userStorageServantList,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x21
  __int64 v19; // x1
  UserServantEntity_array *Master_object; // x0
  const MethodInfo *v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x8
  UserServantEntity_array *v29; // x22
  unsigned __int64 v30; // x26
  Il2CppObject *v31; // x23
  void *monitor; // x24
  Il2CppClass *klass; // x25
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4B170C7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantStorageMaster___, userStorageServantList, *(_QWORD *)&svtId);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v14, v15);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16, v17);
    byte_4B170C7 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       userStorageServantList,
                                                       *(_QWORD *)&svtId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
  Master_object = (UserServantEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantStorageMaster___);
  if ( !Master_object )
    goto LABEL_23;
  Master_object = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Master_object, v21);
  if ( !Master_object )
    goto LABEL_23;
  v28 = *(_QWORD *)&Master_object->max_length;
  v29 = Master_object;
  if ( (int)v28 >= 1 )
  {
    v30 = 0LL;
    do
    {
      if ( v30 >= (unsigned int)v28 )
        sub_1BCAA44(Master_object, v21);
      v31 = (Il2CppObject *)v29->m_Items[v30];
      if ( v31 )
      {
        klass = v31[5].klass;
        monitor = v31[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
        *(_QWORD *)&v39.fields.currentCryptoKey = klass;
        *(_QWORD *)&v39.fields.fakeValue = monitor;
        Master_object = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                     v39,
                                                     0LL);
        if ( (_DWORD)Master_object == svtId )
        {
          if ( !v18 )
            goto LABEL_23;
          items = v18->fields._items;
          v35 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v18->fields._version;
          if ( !items )
            goto LABEL_23;
          size = v18->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              v31,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &items->obj.klass + size;
            v18->fields._size = size + 1;
            v37[4] = (Il2CppClass *)v31;
            sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)v31, v22, v23, v24, v25, v26, v27);
          }
        }
      }
      LODWORD(v28) = v29->max_length;
    }
    while ( (__int64)++v30 < (int)v28 );
  }
  *userStorageServantList = (System_Collections_Generic_List_UserServantEntity__o *)v18;
  sub_1BCA784((PartyOrganizationUtility_o *)userStorageServantList, (int64_t)v18, v22, v23, v24, v25, v26, v27);
  if ( !*userStorageServantList )
LABEL_23:
    sub_1BCAA3C(Master_object, v21);
  return (*userStorageServantList)->fields._size > 0;
}


void __fastcall UserServantMaster__continueDeviceUserServant(UserServantMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_long__o *v23; // x20
  int64_t v24; // x1
  int64_t list; // x0
  __int64 v26; // x1
  int32_t Count; // w21
  int64_t v28; // x22
  int32_t v29; // w23
  int64_t v30; // x24
  __int64 methodPtr_low; // x10
  __int128 v32; // q0
  __int128 v33; // q0
  struct System_Int64_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  __int64 v37; // x1
  System_Int64_array *v38; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+40h] [xbp-80h]

  if ( (byte_4B170BA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v19, v20);
    sub_1BCA7E0(&UserServantNewManager_TypeInfo, v21, v22);
    byte_4B170BA = 1;
  }
  v23 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     method,
                                                     v2,
                                                     v3);
  System_Collections_Generic_List_long____ctor(
    v23,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v26);
  list = NetworkManager__get_UserId(0LL);
  if ( Count >= 1 )
  {
    v28 = list;
    v29 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v29,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v30 = list;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v32 = *(_OWORD *)(list + 64);
          *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)(list + 48);
          *(_OWORD *)&v41.fields.fakeValue = v32;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
          v40 = v41;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v40, 0LL);
          if ( list == v28 && (*(_BYTE *)(v30 + 300) & 4) == 0 )
          {
            v33 = *(_OWORD *)(v30 + 32);
            *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)(v30 + 16);
            *(_OWORD *)&v41.fields.fakeValue = v33;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
            v39 = v41;
            list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v39, 0LL);
            if ( !v23 )
              break;
            items = v23->fields._items;
            v35 = Method_System_Collections_Generic_List_long__Add__;
            ++v23->fields._version;
            if ( !items )
              break;
            size = v23->fields._size;
            v24 = list;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_long___AddWithResize(
                v23,
                list,
                *(const MethodInfo_3589C90 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v23->fields._size = size + 1;
              items->m_Items[size] = list;
            }
          }
        }
      }
      if ( Count == ++v29 )
        goto LABEL_24;
    }
LABEL_28:
    sub_1BCAA3C(list, v24);
  }
LABEL_24:
  if ( !v23 )
    goto LABEL_28;
  v38 = System_Collections_Generic_List_long___ToArray(
          v23,
          (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo, v37);
  UserServantNewManager__SetOld_41308244(v38, 0LL);
}


UserServantEntity_array *__fastcall UserServantMaster__getAllList(UserServantMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_IEnumerable_T__o *List; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Collections_Generic_List_object__o *v18; // x19
  UserServantEntity_array *Instance; // x0
  const MethodInfo *v20; // x1

  if ( (byte_4B170BC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantStorageMaster___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor___76803536, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    byte_4B170BC = 1;
  }
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, method);
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v15,
                                                       v16,
                                                       v17);
  System_Collections_Generic_List_object____ctor_56235344(
    v18,
    List,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76803536);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL
    || (Instance = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, v20), !v18) )
  {
    sub_1BCAA3C(Instance, v20);
  }
  System_Collections_Generic_List_object___AddRange(
    v18,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v18,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getCombineMaterialList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  int64_t Instance; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  int64_t v31; // x21
  int32_t Count; // w23
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Collections_Generic_List_object__o *v36; // x22
  int32_t v37; // w24
  int64_t v38; // x25
  __int64 methodPtr_low; // x10
  __int128 v40; // q0
  __int64 v41; // x26
  __int64 v42; // x27
  ServantEntity_o *v43; // x26
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
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_4B170BB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v26, v27);
    byte_4B170BB = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v30);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_31;
  v31 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v36 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v33,
                                                       v34,
                                                       v35);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v37 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v37,
                            (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v38 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v40 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v57.fields.fakeValue = v40;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v29);
          v56 = v57;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v56, 0LL);
          if ( Instance == v31 && (*(_BYTE *)(v38 + 300) & 4) == 0 )
          {
            v42 = *(_QWORD *)(v38 + 80);
            v41 = *(_QWORD *)(v38 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
            *(_QWORD *)&v58.fields.currentCryptoKey = v42;
            *(_QWORD *)&v58.fields.fakeValue = v41;
            v29 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v58, 0LL);
            Instance = (int64_t)MasterData_object;
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  MasterData_object,
                                  v29,
                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v43 = (ServantEntity_o *)Instance;
            Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = ServantEntity__get_IsServantMaterialTd(v43, 0LL);
              if ( (Instance & 1) == 0 )
              {
                if ( !v36 )
                  break;
                items = v36->fields._items;
                v51 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v36->fields._version;
                if ( !items )
                  break;
                size = v36->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v36,
                    (Il2CppObject *)v38,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
                }
                else
                {
                  v53 = &items->obj.klass + size;
                  v36->fields._size = size + 1;
                  v53[4] = (Il2CppClass *)v38;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v53 + 4), v38, v44, v45, v46, v47, v48, v49);
                }
              }
            }
          }
        }
      }
      if ( Count == ++v37 )
        goto LABEL_29;
    }
LABEL_31:
    sub_1BCAA3C(Instance, v29);
  }
LABEL_29:
  if ( !v36 )
    goto LABEL_31;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v36,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


int32_t __fastcall UserServantMaster__getCount(
        UserServantMaster_o *this,
        int32_t *servantSum,
        int32_t *servantEquipSum,
        bool friendShipSvtEqExclude,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  int64_t Instance; // x0
  __int64 v26; // x1
  __int64 v27; // x1
  Il2CppObject *MasterData_object; // x23
  int64_t v29; // x24
  int32_t Count; // w0
  int32_t v31; // w25
  int32_t v32; // w26
  int32_t v33; // w27
  Il2CppObject *Item; // x0
  Il2CppObject *v35; // x28
  __int64 methodPtr_low; // x10
  Il2CppObject v37; // q0
  void *monitor; // x28
  Il2CppClass *klass; // x29
  Il2CppObject *Entity; // x0
  int32_t klass_high; // w29
  ServantEntity_o *v42; // x28
  int32_t *v43; // x9
  int32_t *v45; // [xsp+8h] [xbp-B8h]
  bool v46; // [xsp+14h] [xbp-ACh]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4B170A7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      servantSum,
      servantEquipSum);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v23, v24);
    byte_4B170A7 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
LABEL_32:
    sub_1BCAA3C(Instance, v26);
  v29 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v45 = servantEquipSum;
    v46 = friendShipSvtEqExclude;
    v31 = Count;
    v32 = 0;
    v33 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_32;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v33,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v35 = Item;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantEntity_TypeInfo )
        {
          v37 = Item[4];
          *(Il2CppObject *)&v48.fields.currentCryptoKey = Item[3];
          *(Il2CppObject *)&v48.fields.fakeValue = v37;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26);
          v47 = v48;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v47, 0LL) == v29
            && (BYTE4(v35[18].monitor) & 4) == 0 )
          {
            klass = v35[5].klass;
            monitor = v35[5].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
            *(_QWORD *)&v49.fields.currentCryptoKey = klass;
            *(_QWORD *)&v49.fields.fakeValue = monitor;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v49, 0LL);
            if ( !MasterData_object )
              goto LABEL_32;
            ++v32;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       Instance,
                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              klass_high = HIDWORD(Entity[5].klass);
              v42 = (ServantEntity_o *)Entity;
              if ( SvtType__IsKeepServant(klass_high, 0LL) )
              {
                v43 = servantSum;
              }
              else
              {
                if ( !SvtType__IsKeepServantEquip(klass_high, 0LL)
                  || v46 && ServantEntity__get_IsFriendShipSvtEquip(v42, 0LL) )
                {
                  goto LABEL_28;
                }
                v43 = v45;
              }
              ++*v43;
            }
          }
        }
      }
LABEL_28:
      if ( v31 == ++v33 )
        return v32;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  int64_t Instance; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  Il2CppObject *MasterData_object; // x22
  int64_t v27; // x23
  int32_t Count; // w0
  int32_t v29; // w24
  int32_t v30; // w25
  int32_t v31; // w26
  Il2CppObject *Item; // x0
  Il2CppObject *v33; // x27
  __int64 methodPtr_low; // x10
  Il2CppObject v35; // q0
  void *monitor; // x27
  Il2CppClass *klass; // x28
  Il2CppObject *Entity; // x0
  int32_t klass_high; // w27
  int32_t *v40; // x9
  int32_t *v42; // [xsp+0h] [xbp-B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4B170A8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      servantSum,
      servantEquipSum);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v21, v22);
    byte_4B170A8 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v25);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
LABEL_30:
    sub_1BCAA3C(Instance, v24);
  v27 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *servantSum = 0;
  *servantEquipSum = 0;
  if ( Count >= 1 )
  {
    v42 = servantEquipSum;
    v29 = Count;
    v30 = 0;
    v31 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_30;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v31,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v33 = Item;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantEntity_TypeInfo )
        {
          v35 = Item[4];
          *(Il2CppObject *)&v44.fields.currentCryptoKey = Item[3];
          *(Il2CppObject *)&v44.fields.fakeValue = v35;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24);
          v43 = v44;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v43, 0LL) == v27
            && (BYTE4(v33[18].monitor) & 4) == 0 )
          {
            klass = v33[5].klass;
            monitor = v33[5].monitor;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
            *(_QWORD *)&v45.fields.currentCryptoKey = klass;
            *(_QWORD *)&v45.fields.fakeValue = monitor;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v45, 0LL);
            if ( !MasterData_object )
              goto LABEL_30;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       Instance,
                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( Entity )
            {
              klass_high = HIDWORD(Entity[5].klass);
              if ( SvtType__IsOrganization(klass_high, 0LL) )
              {
                v40 = servantSum;
LABEL_25:
                ++v30;
                ++*v40;
                goto LABEL_26;
              }
              if ( SvtType__IsServantEquip(klass_high, 0LL) )
              {
                v40 = v42;
                goto LABEL_25;
              }
            }
          }
        }
      }
LABEL_26:
      if ( v29 == ++v31 )
        return v30;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w21
  int32_t v14; // w22
  Il2CppObject *Item; // x0
  UserServantEntity_o *v16; // x23
  __int64 methodPtr_low; // x10
  void *monitor; // x24
  Il2CppClass *klass; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B170B8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&heroineId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v9, v10);
    byte_4B170B8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v14,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v16 = (UserServantEntity_o *)Item;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserServantEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserServantEntity_TypeInfo )
        {
          klass = Item[5].klass;
          monitor = Item[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&heroineId);
          *(_QWORD *)&v21.fields.currentCryptoKey = klass;
          *(_QWORD *)&v21.fields.fakeValue = monitor;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v21, 0LL) == heroineId
            && UserServantEntity__IsHeroine(v16, *(const MethodInfo **)&heroineId) )
          {
            return v16;
          }
        }
      }
      if ( v13 == ++v14 )
        return 0LL;
    }
LABEL_17:
    sub_1BCAA3C(list, *(_QWORD *)&heroineId);
  }
  return 0LL;
}


UserServantEntity_array *__fastcall UserServantMaster__getKeepServantEquipList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  int64_t Instance; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t v32; // x20
  int32_t Count; // w23
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_List_object__o *v37; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v38; // x26
  int32_t v39; // w24
  int64_t v40; // x25
  __int64 methodPtr_low; // x10
  __int128 v42; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v44; // x20
  __int64 v45; // x26
  __int64 v46; // x27
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  int64_t v58; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_4B170B1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v26, v27);
    byte_4B170B1 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v30);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v32 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v37 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v34,
                                                       v35,
                                                       v36);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v38 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v39 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v39,
                            (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v40 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v42 = *(_OWORD *)(Instance + 64);
          v43 = *v38;
          *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)(v40 + 48);
          *(_OWORD *)&v60.fields.fakeValue = v42;
          if ( !v43->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v43, v29);
          v59 = v60;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v59, 0LL);
          if ( Instance == v32 && (*(_BYTE *)(v40 + 300) & 4) == 0 )
          {
            v58 = v32;
            v44 = v38;
            v46 = *(_QWORD *)(v40 + 80);
            v45 = *(_QWORD *)(v40 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
            *(_QWORD *)&v61.fields.currentCryptoKey = v46;
            *(_QWORD *)&v61.fields.fakeValue = v45;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v61, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v38 = v44;
            Instance = ServantEntity__get_IsKeepServantEquip((ServantEntity_o *)Instance, 0LL);
            v32 = v58;
            if ( (Instance & 1) != 0 )
            {
              if ( !v37 )
                break;
              items = v37->fields._items;
              v54 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v37->fields._version;
              if ( !items )
                break;
              size = v37->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v37,
                  (Il2CppObject *)v40,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
              }
              else
              {
                v56 = &items->obj.klass + size;
                v37->fields._size = size + 1;
                v56[4] = (Il2CppClass *)v40;
                sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 4), v40, v47, v48, v49, v50, v51, v52);
              }
            }
          }
        }
      }
      if ( Count == ++v39 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1BCAA3C(Instance, v29);
  }
LABEL_28:
  if ( !v37 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v37,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getKeepServantList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  int64_t Instance; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t v32; // x20
  int32_t Count; // w23
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_List_object__o *v37; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v38; // x26
  int32_t v39; // w24
  int64_t v40; // x25
  __int64 methodPtr_low; // x10
  __int128 v42; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v44; // x20
  __int64 v45; // x26
  __int64 v46; // x27
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  int64_t v58; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_4B170AF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v26, v27);
    byte_4B170AF = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v30);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v32 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v37 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v34,
                                                       v35,
                                                       v36);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v38 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v39 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v39,
                            (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v40 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v42 = *(_OWORD *)(Instance + 64);
          v43 = *v38;
          *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)(v40 + 48);
          *(_OWORD *)&v60.fields.fakeValue = v42;
          if ( !v43->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v43, v29);
          v59 = v60;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v59, 0LL);
          if ( Instance == v32 && (*(_BYTE *)(v40 + 300) & 4) == 0 )
          {
            v58 = v32;
            v44 = v38;
            v46 = *(_QWORD *)(v40 + 80);
            v45 = *(_QWORD *)(v40 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
            *(_QWORD *)&v61.fields.currentCryptoKey = v46;
            *(_QWORD *)&v61.fields.fakeValue = v45;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v61, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v38 = v44;
            Instance = ServantEntity__get_IsKeepServant((ServantEntity_o *)Instance, 0LL);
            v32 = v58;
            if ( (Instance & 1) != 0 )
            {
              if ( !v37 )
                break;
              items = v37->fields._items;
              v54 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v37->fields._version;
              if ( !items )
                break;
              size = v37->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v37,
                  (Il2CppObject *)v40,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
              }
              else
              {
                v56 = &items->obj.klass + size;
                v37->fields._size = size + 1;
                v56[4] = (Il2CppClass *)v40;
                sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 4), v40, v47, v48, v49, v50, v51, v52);
              }
            }
          }
        }
      }
      if ( Count == ++v39 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1BCAA3C(Instance, v29);
  }
LABEL_28:
  if ( !v37 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v37,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getList(UserServantMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t UserId; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4B170A9 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B170A9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  UserId = NetworkManager__get_UserId(0LL);
  return UserServantMaster__getList_40977592(this, UserId, v5);
}


UserServantEntity_array *__fastcall UserServantMaster__getList_40977592(
        UserServantMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int64_t list; // x0
  int32_t Count; // w22
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Collections_Generic_List_object__o *v24; // x21
  int32_t v25; // w23
  int64_t v26; // x24
  __int64 methodPtr_low; // x10
  __int128 v28; // q0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-80h]

  if ( (byte_4B170AA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v17, v18);
    byte_4B170AA = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v24 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v21,
                                                       v22,
                                                       v23);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v25,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v26 = list;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v28 = *(_OWORD *)(list + 64);
          *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)(list + 48);
          *(_OWORD *)&v41.fields.fakeValue = v28;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userId);
          v40 = v41;
          list = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v40, 0LL);
          if ( list == userId && (*(_BYTE *)(v26 + 300) & 4) == 0 )
          {
            if ( !v24 )
              break;
            items = v24->fields._items;
            v36 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v24->fields._version;
            if ( !items )
              break;
            size = v24->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v24,
                (Il2CppObject *)v26,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
            }
            else
            {
              v38 = &items->obj.klass + size;
              v24->fields._size = size + 1;
              v38[4] = (Il2CppClass *)v26;
              sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 4), v26, v29, v30, v31, v32, v33, v34);
            }
          }
        }
      }
      if ( Count == ++v25 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1BCAA3C(list, userId);
  }
LABEL_20:
  if ( !v24 )
    goto LABEL_22;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v24,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getNoneCombineSvt(
        UserServantMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t v3; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  int64_t Instance; // x0
  __int64 v28; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x27
  int32_t Count; // w23
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Collections_Generic_List_object__o *v34; // x22
  int32_t v35; // w24
  int64_t v36; // x25
  __int64 methodPtr_low; // x10
  __int128 v38; // q0
  DataMasterBase_TMaster__TEntity__PKType__o *v39; // x19
  __int64 v40; // x26
  __int64 v41; // x27
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  int64_t v53; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  v3 = userId;
  if ( (byte_4B170B9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v25, v26);
    byte_4B170B9 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !this->fields.list )
    goto LABEL_28;
  v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v34 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v31,
                                                       v32,
                                                       v33);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v35,
                            (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v36 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v38 = *(_OWORD *)(Instance + 64);
          *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)(Instance + 48);
          *(_OWORD *)&v55.fields.fakeValue = v38;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
          v54 = v55;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v54, 0LL);
          if ( Instance == v3 && (*(_BYTE *)(v36 + 300) & 4) == 0 )
          {
            v53 = v3;
            v39 = v29;
            v41 = *(_QWORD *)(v36 + 80);
            v40 = *(_QWORD *)(v36 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
            *(_QWORD *)&v56.fields.currentCryptoKey = v41;
            *(_QWORD *)&v56.fields.fakeValue = v40;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v56, 0LL);
            if ( !v39 )
              break;
            v29 = v39;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  v39,
                                  Instance,
                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            v3 = v53;
            if ( !Instance )
              break;
            if ( *(_DWORD *)(Instance + 84) != 3 )
            {
              if ( !v34 )
                break;
              items = v34->fields._items;
              v49 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v34->fields._version;
              if ( !items )
                break;
              size = v34->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v34,
                  (Il2CppObject *)v36,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
              }
              else
              {
                v51 = &items->obj.klass + size;
                v34->fields._size = size + 1;
                v51[4] = (Il2CppClass *)v36;
                sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 4), v36, v42, v43, v44, v45, v46, v47);
              }
            }
          }
        }
      }
      if ( Count == ++v35 )
        goto LABEL_26;
    }
LABEL_28:
    sub_1BCAA3C(Instance, v28);
  }
LABEL_26:
  if ( !v34 )
    goto LABEL_28;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v34,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getNpUpServantList(
        UserServantMaster_o *this,
        UserServantEntity_o *usrSvtEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  int64_t Instance; // x0
  signed __int64 klass; // x1
  Il2CppObject *MasterData_object; // x27
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Collections_Generic_List_object__o *v41; // x21
  int32_t Count; // w23
  SvtMaterialTdMaster_o *v43; // x24
  __int64 v44; // x25
  __int64 v45; // x26
  int64_t v46; // x2
  __int64 v47; // x3
  System_Object_array *v48; // x24
  int32_t v49; // w25
  Il2CppObject *v50; // x27
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  UserServantEntity_c *v57; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v59; // x10
  int64_t v60; // x1
  PartyOrganizationUtility_o *v61; // x26
  System_Predicate_object__o *v62; // x28
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  void *v67; // x27
  Il2CppClass *v68; // x28
  int32_t v69; // w27
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  Il2CppClass **v73; // x0
  UserServantEntity_o *v75; // [xsp+0h] [xbp-70h]
  DataMasterBase_TMaster__TEntity__PKType__o *v76; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  if ( (byte_4B170B4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Exists_SvtMaterialTdEntity___, usrSvtEnt, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v21, v22);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Predicate_SvtMaterialTdEntity__TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&Method_UserServantMaster___c__DisplayClass15_0__getNpUpServantList_b__0__, v29, v30);
    sub_1BCA7E0(&UserServantMaster___c__DisplayClass15_0_TypeInfo, v31, v32);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v33, v34);
    byte_4B170B4 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v41 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v38,
                                                       v39,
                                                       v40);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_46;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
  if ( !usrSvtEnt )
    goto LABEL_46;
  v43 = (SvtMaterialTdMaster_o *)Instance;
  v75 = usrSvtEnt;
  v45 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
  v44 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, klass);
  *(_QWORD *)&v77.fields.currentCryptoKey = v45;
  *(_QWORD *)&v77.fields.fakeValue = v44;
  v76 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v77, 0LL);
  if ( !v43 )
    goto LABEL_46;
  Instance = (int64_t)SvtMaterialTdMaster__GetEntityList(v43, Instance, 0LL);
  if ( Count >= 1 )
  {
    v48 = (System_Object_array *)Instance;
    v49 = 0;
    do
    {
      v50 = (Il2CppObject *)sub_1BCAA2C(UserServantMaster___c__DisplayClass15_0_TypeInfo, klass, v46, v47);
      System_Object___ctor(v50, 0LL);
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_46;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v49,
                            (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v50 )
        goto LABEL_46;
      if ( Instance )
      {
        v57 = UserServantEntity_TypeInfo;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low )
        {
          if ( *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
            v59 = (Il2CppClass *)Instance;
          else
            v59 = 0LL;
        }
        else
        {
          v59 = 0LL;
        }
        v50[1].klass = v59;
        v61 = (PartyOrganizationUtility_o *)&v50[1];
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low )
        {
          if ( *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == v57 )
            v60 = Instance;
          else
            v60 = 0LL;
        }
        else
        {
          v60 = 0LL;
        }
      }
      else
      {
        v60 = 0LL;
        v50[1].klass = 0LL;
        v61 = (PartyOrganizationUtility_o *)&v50[1];
      }
      sub_1BCA784(v61, v60, v51, v52, v53, v54, v55, v56);
      if ( v61->klass && (*(&v61->klass->_2.bitflags2 + 1) & 4) == 0 )
      {
        v62 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_SvtMaterialTdEntity__TypeInfo, klass, v46, v47);
        System_Predicate_object____ctor(
          v62,
          v50,
          Method_UserServantMaster___c__DisplayClass15_0__getNpUpServantList_b__0__,
          0LL);
        Instance = System_Array__Exists_object_(
                     v48,
                     (System_Predicate_T__o *)v62,
                     (const MethodInfo_300C5AC *)Method_System_Array_Exists_SvtMaterialTdEntity___);
        klass = (signed __int64)v61->klass;
        if ( (Instance & 1) != 0 )
        {
          if ( !v41 )
            goto LABEL_46;
LABEL_39:
          items = v41->fields._items;
          v71 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v41->fields._version;
          if ( !items )
            goto LABEL_46;
          size = v41->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v41,
              (Il2CppObject *)klass,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
          }
          else
          {
            v73 = &items->obj.klass + size;
            v41->fields._size = size + 1;
            v73[4] = (Il2CppClass *)klass;
            sub_1BCA784((PartyOrganizationUtility_o *)(v73 + 4), klass, v46, v47, v63, v64, v65, v66);
          }
          continue;
        }
        if ( !klass )
          goto LABEL_46;
        v68 = *(Il2CppClass **)(klass + 80);
        v67 = *(void **)(klass + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, klass);
        *(_QWORD *)&v78.fields.currentCryptoKey = v68;
        *(_QWORD *)&v78.fields.fakeValue = v67;
        klass = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v78, 0LL);
        Instance = (int64_t)v76;
        if ( !v76 )
          goto LABEL_46;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              v76,
                              klass,
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_46;
        v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(Instance + 32),
                0LL);
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v75->fields.svtId, 0LL);
        if ( v69 == (_DWORD)Instance )
        {
          if ( !v41 )
            goto LABEL_46;
          klass = (signed __int64)v61->klass;
          goto LABEL_39;
        }
      }
    }
    while ( Count != ++v49 );
  }
  if ( !v41 )
LABEL_46:
    sub_1BCAA3C(Instance, klass);
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v41,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


UserServantEntity_array *__fastcall UserServantMaster__getOrganizationList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  int64_t Instance; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t v32; // x20
  int32_t Count; // w23
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_List_object__o *v37; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v38; // x26
  int32_t v39; // w24
  int64_t v40; // x25
  __int64 methodPtr_low; // x10
  __int128 v42; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v44; // x20
  __int64 v45; // x26
  __int64 v46; // x27
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  int64_t v58; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_4B170B0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v26, v27);
    byte_4B170B0 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v30);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v32 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v37 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v34,
                                                       v35,
                                                       v36);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v38 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v39 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v39,
                            (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v40 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v42 = *(_OWORD *)(Instance + 64);
          v43 = *v38;
          *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)(v40 + 48);
          *(_OWORD *)&v60.fields.fakeValue = v42;
          if ( !v43->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v43, v29);
          v59 = v60;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v59, 0LL);
          if ( Instance == v32 && (*(_BYTE *)(v40 + 300) & 4) == 0 )
          {
            v58 = v32;
            v44 = v38;
            v46 = *(_QWORD *)(v40 + 80);
            v45 = *(_QWORD *)(v40 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
            *(_QWORD *)&v61.fields.currentCryptoKey = v46;
            *(_QWORD *)&v61.fields.fakeValue = v45;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v61, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v38 = v44;
            Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
            v32 = v58;
            if ( (Instance & 1) != 0 )
            {
              if ( !v37 )
                break;
              items = v37->fields._items;
              v54 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v37->fields._version;
              if ( !items )
                break;
              size = v37->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v37,
                  (Il2CppObject *)v40,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
              }
              else
              {
                v56 = &items->obj.klass + size;
                v37->fields._size = size + 1;
                v56[4] = (Il2CppClass *)v40;
                sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 4), v40, v47, v48, v49, v50, v51, v52);
              }
            }
          }
        }
      }
      if ( Count == ++v39 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1BCAA3C(Instance, v29);
  }
LABEL_28:
  if ( !v37 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v37,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


int32_t __fastcall UserServantMaster__getSameSvtNpLvCache(
        UserServantMaster_o *this,
        UserServantEntity_o *usrSvtEnt,
        System_Collections_Generic_Dictionary_int__List_int___o **cachedUserServantNpLvDict,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_List_int__o *v41; // x22
  int64_t Instance; // x0
  const MethodInfo *v43; // x1
  System_Collections_Generic_Dictionary_int__List_int___o *v44; // x22
  __int64 v45; // x23
  __int64 v46; // x24
  int32_t v47; // w21
  int32_t Count; // w23
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  Il2CppObject *MasterData_object; // x0
  __int64 v53; // x1
  __int64 v54; // x25
  __int64 v55; // x26
  SvtMaterialTdMaster_o *v56; // x24
  __int64 v57; // x2
  __int64 v58; // x3
  int32_t i; // w25
  Il2CppObject *v60; // x27
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  UserServantEntity_c *v67; // x8
  __int64 methodPtr_low; // x9
  Il2CppClass *v69; // x10
  int64_t v70; // x1
  PartyOrganizationUtility_o *v71; // x26
  PartyOrganizationUtility_c *klass; // x8
  Il2CppType byval_arg; // q0
  int64_t v74; // x0
  __int128 v75; // q1
  int64_t v76; // x28
  __int64 v77; // x2
  __int64 v78; // x3
  System_Predicate_object__o *v79; // x28
  PartyOrganizationUtility_c *v80; // x8
  Il2CppClass *parent; // x27
  Il2CppClass *declaringType; // x28
  int32_t v83; // w27
  struct System_Int32_array *items; // x8
  _QWORD *v85; // x9
  __int64 size; // x10
  __int64 v87; // x1
  System_Collections_Generic_Dictionary_int__object__o *v88; // x20
  __int64 v89; // x19
  __int64 v90; // x23
  System_Object_array *array; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_Dictionary_int__List_int___o **v93; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_List_int__o *v94; // [xsp+18h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+60h] [xbp-90h]
  Il2CppObject *value; // [xsp+88h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16

  if ( (byte_4B170B3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Exists_SvtMaterialTdEntity___, usrSvtEnt, cachedUserServantNpLvDict);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SvtMaterialTdMaster___, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v25, v26);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27, v28);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v29, v30);
    sub_1BCA7E0(&System_Predicate_SvtMaterialTdEntity__TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34);
    sub_1BCA7E0(&Method_UserServantMaster___c__DisplayClass14_0__getSameSvtNpLvCache_b__0__, v35, v36);
    sub_1BCA7E0(&UserServantMaster___c__DisplayClass14_0_TypeInfo, v37, v38);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v39, v40);
    byte_4B170B3 = 1;
  }
  v41 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    usrSvtEnt,
                                                    cachedUserServantNpLvDict,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v41,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  value = (Il2CppObject *)v41;
  if ( !usrSvtEnt )
    goto LABEL_66;
  if ( (usrSvtEnt->fields.status & 2) != 0 )
    goto LABEL_12;
  v44 = *cachedUserServantNpLvDict;
  v46 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
  v45 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43);
  *(_QWORD *)&v99.fields.currentCryptoKey = v46;
  *(_QWORD *)&v99.fields.fakeValue = v45;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v99, 0LL);
  if ( !v44 )
    goto LABEL_66;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)v44,
          Instance,
          &value,
          (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
LABEL_12:
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      DataManager__GetMasterData_object_(
        (DataManager_o *)Instance,
        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = (int64_t)this->fields.list;
      if ( Instance )
      {
        Count = System_Collections_ObjectModel_Collection_object___get_Count(
                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
        v94 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v49,
                                                          v50,
                                                          v51);
        System_Collections_Generic_List_int____ctor(
          v94,
          (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SvtMaterialTdMaster___);
          v55 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
          v54 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
          v56 = (SvtMaterialTdMaster_o *)MasterData_object;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v53);
          *(_QWORD *)&v100.fields.currentCryptoKey = v55;
          *(_QWORD *)&v100.fields.fakeValue = v54;
          v93 = cachedUserServantNpLvDict;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v100, 0LL);
          if ( v56 )
          {
            Instance = (int64_t)SvtMaterialTdMaster__GetEntityList(v56, Instance, 0LL);
            array = (System_Object_array *)Instance;
            if ( Count >= 1 )
            {
              for ( i = 0; Count != i; ++i )
              {
                v60 = (Il2CppObject *)sub_1BCAA2C(UserServantMaster___c__DisplayClass14_0_TypeInfo, v43, v57, v58);
                System_Object___ctor(v60, 0LL);
                Instance = (int64_t)this->fields.list;
                if ( !Instance )
                  goto LABEL_66;
                Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                      i,
                                      (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
                if ( !v60 )
                  goto LABEL_66;
                if ( Instance )
                {
                  v67 = UserServantEntity_TypeInfo;
                  methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
                  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low )
                  {
                    if ( *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
                      v69 = (Il2CppClass *)Instance;
                    else
                      v69 = 0LL;
                  }
                  else
                  {
                    v69 = 0LL;
                  }
                  v60[1].klass = v69;
                  v71 = (PartyOrganizationUtility_o *)&v60[1];
                  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low )
                  {
                    if ( *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == v67 )
                      v70 = Instance;
                    else
                      v70 = 0LL;
                  }
                  else
                  {
                    v70 = 0LL;
                  }
                }
                else
                {
                  v70 = 0LL;
                  v60[1].klass = 0LL;
                  v71 = (PartyOrganizationUtility_o *)&v60[1];
                }
                sub_1BCA784(v71, v70, v61, v62, v63, v64, v65, v66);
                klass = v71->klass;
                if ( v71->klass && (*(&klass->_2.bitflags2 + 1) & 6) == 0 )
                {
                  byval_arg = klass->_1.byval_arg;
                  *(_OWORD *)&v97.fields.currentCryptoKey = *(_OWORD *)&klass->_1.name;
                  *(Il2CppType *)&v97.fields.fakeValue = byval_arg;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v43);
                  v96 = v97;
                  v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v96, 0LL);
                  v75 = *(_OWORD *)&usrSvtEnt->fields.id.fields.fakeValue;
                  v76 = v74;
                  *(_OWORD *)&v95.fields.currentCryptoKey = *(_OWORD *)&usrSvtEnt->fields.id.fields.currentCryptoKey;
                  *(_OWORD *)&v95.fields.fakeValue = v75;
                  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v95, 0LL);
                  if ( v76 != Instance )
                  {
                    Instance = UserServantEntity__IsMaterialTd(usrSvtEnt, v43);
                    if ( (Instance & 1) == 0 )
                    {
                      Instance = (int64_t)v71->klass;
                      if ( !v71->klass )
                        goto LABEL_66;
                      Instance = UserServantEntity__IsMaterialTd((UserServantEntity_o *)Instance, v43);
                      if ( (Instance & 1) != 0 )
                      {
                        v79 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                              System_Predicate_SvtMaterialTdEntity__TypeInfo,
                                                              v43,
                                                              v77,
                                                              v78);
                        System_Predicate_object____ctor(
                          v79,
                          v60,
                          Method_UserServantMaster___c__DisplayClass14_0__getSameSvtNpLvCache_b__0__,
                          0LL);
                        Instance = System_Array__Exists_object_(
                                     array,
                                     (System_Predicate_T__o *)v79,
                                     (const MethodInfo_300C5AC *)Method_System_Array_Exists_SvtMaterialTdEntity___);
                        if ( (Instance & 1) == 0 )
                          continue;
                      }
                      else
                      {
                        v80 = v71->klass;
                        if ( !v71->klass )
                          goto LABEL_66;
                        declaringType = v80->_1.declaringType;
                        parent = v80->_1.parent;
                        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43);
                        *(_QWORD *)&v101.fields.currentCryptoKey = declaringType;
                        *(_QWORD *)&v101.fields.fakeValue = parent;
                        v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v101, 0LL);
                        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                     usrSvtEnt->fields.svtId,
                                     0LL);
                        if ( v83 != (_DWORD)Instance || (usrSvtEnt->fields.status & 2) != 0 )
                          continue;
                      }
                      if ( !v71->klass )
                        goto LABEL_66;
                      Instance = (int64_t)v94;
                      if ( !v94 )
                        goto LABEL_66;
                      v43 = (const MethodInfo *)*(unsigned int *)&v71->klass->_2.typeHierarchyDepth;
                      items = v94->fields._items;
                      v85 = Method_System_Collections_Generic_List_int__Add__;
                      ++v94->fields._version;
                      if ( !items )
                        goto LABEL_66;
                      size = v94->fields._size;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v94,
                          (int32_t)v43,
                          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v94->fields._size = size + 1;
                        items->m_Items[size + 1] = (int)v43;
                      }
                    }
                  }
                }
              }
            }
            if ( v94 )
            {
              if ( v94->fields._size < 1 )
                return 0;
              v47 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)v94, 0LL);
              if ( (usrSvtEnt->fields.status & 2) != 0 )
                return v47;
              v88 = (System_Collections_Generic_Dictionary_int__object__o *)*v93;
              v90 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.currentCryptoKey;
              v89 = *(_QWORD *)&usrSvtEnt->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v87);
              *(_QWORD *)&v102.fields.currentCryptoKey = v90;
              *(_QWORD *)&v102.fields.fakeValue = v89;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v102, 0LL);
              if ( v88 )
              {
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  v88,
                  Instance,
                  (Il2CppObject *)v94,
                  (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
                return v47;
              }
            }
          }
        }
      }
    }
LABEL_66:
    sub_1BCAA3C(Instance, v43);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  int64_t Instance; // x0
  const MethodInfo *v35; // x1
  Il2CppObject *MasterData_object; // x19
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Collections_Generic_List_int__o *v40; // x20
  __int64 v41; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v44; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0
  _OWORD *v51; // x0
  _OWORD *v52; // x24
  __int64 methodPtr_low; // x9
  __int128 v54; // q0
  __int64 v55; // x1
  int64_t v56; // x25
  __int64 v57; // x1
  __int64 v58; // x25
  __int64 v59; // x26
  __int64 v60; // x0
  Il2CppObject *Entity; // x0
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x25
  __int64 v65; // x26
  __int64 v66; // x0
  __int64 v67; // x1
  __int64 v68; // x24
  __int64 v69; // x25
  __int64 v70; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v72; // x9
  __int64 size; // x10
  int32_t v74; // w29
  System_Collections_Generic_IEnumerator_T__c *v75; // x8
  __int64 v76; // x9
  int32_t *v77; // x10
  __int64 v78; // x0
  __int64 v79; // x8
  int64_t v80; // x22
  unsigned __int64 v81; // x21
  __int64 v82; // x26
  __int128 v83; // q0
  __int64 v84; // x1
  int64_t v85; // x23
  __int64 v86; // x23
  __int64 v87; // x24
  __int64 v88; // x23
  __int64 v89; // x24
  __int64 v90; // x23
  __int64 v91; // x24
  struct System_Int32_array *v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  UserServantStorageMaster_o *v96; // [xsp+0h] [xbp-D0h]
  int32_t v97; // [xsp+Ch] [xbp-C4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v99; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v100; // [xsp+50h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16

  if ( (byte_4B170AC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v22, v23);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26, v27);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v32, v33);
    byte_4B170AC = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  v96 = (UserServantStorageMaster_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  v40 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v37,
                                                    v38,
                                                    v39);
  System_Collections_Generic_List_int____ctor(
    v40,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (int64_t)this->fields.list;
  if ( !Instance )
    goto LABEL_82;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v41);
  v97 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v44 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v44;
        p_offset += 4;
        if ( !v44 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v47 = Enumerator->klass;
    v48 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v49 = &v47->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v49 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_19;
      }
      v50 = (__int64)&v47->vtable[*v49].method;
    }
    else
    {
LABEL_19:
      v50 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v51 = (_OWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(
                      Enumerator,
                      *(_QWORD *)(v50 + 8));
    v52 = v51;
    if ( v51 )
    {
      methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v51 + 304LL) < (unsigned int)methodPtr_low
        || *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)v51 + 200LL) + 8 * methodPtr_low - 8) != UserServantEntity_TypeInfo )
      {
        sub_1BCACFC(v51);
        goto LABEL_81;
      }
      v54 = v51[4];
      *(_OWORD *)&v100.fields.currentCryptoKey = v51[3];
      *(_OWORD *)&v100.fields.fakeValue = v54;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
          UserServantEntity_TypeInfo);
      v99 = v100;
      v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v99, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v55);
      if ( v56 == NetworkManager__get_UserId(0LL) && (*((_BYTE *)v52 + 300) & 4) == 0 )
      {
        v59 = *((_QWORD *)v52 + 10);
        v58 = *((_QWORD *)v52 + 11);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v57);
        *(_QWORD *)&v101.fields.currentCryptoKey = v59;
        *(_QWORD *)&v101.fields.fakeValue = v58;
        v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v101, 0LL);
        if ( !MasterData_object )
          sub_1BCAA3C(v60, (unsigned int)v60);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v60,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          sub_1BCAA3C(0LL, v62);
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)Entity, 0LL) )
        {
          v65 = *((_QWORD *)v52 + 10);
          v64 = *((_QWORD *)v52 + 11);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v63);
          *(_QWORD *)&v102.fields.currentCryptoKey = v65;
          *(_QWORD *)&v102.fields.fakeValue = v64;
          v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v102, 0LL);
          if ( !v40 )
            sub_1BCAA3C(v66, (unsigned int)v66);
          if ( !System_Collections_Generic_List_int___Contains(
                  v40,
                  v66,
                  (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            v69 = *((_QWORD *)v52 + 10);
            v68 = *((_QWORD *)v52 + 11);
            ++v97;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v67);
            *(_QWORD *)&v103.fields.currentCryptoKey = v69;
            *(_QWORD *)&v103.fields.fakeValue = v68;
            v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v103, 0LL);
            items = v40->fields._items;
            v72 = Method_System_Collections_Generic_List_int__Add__;
            ++v40->fields._version;
            if ( !items )
              sub_1BCAA3C(v70, (unsigned int)v70);
            size = v40->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v40,
                v70,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
            }
            else
            {
              v40->fields._size = size + 1;
              items->m_Items[size + 1] = v70;
            }
          }
        }
      }
    }
  }
  v74 = v97;
  v75 = Enumerator->klass;
  v76 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v77 = &v75->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v77 - 1) != System_IDisposable_TypeInfo )
    {
      --v76;
      v77 += 4;
      if ( !v76 )
        goto LABEL_49;
    }
    v78 = (__int64)&v75->vtable[*v77].method;
  }
  else
  {
LABEL_49:
    v78 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v78)(Enumerator, *(_QWORD *)(v78 + 8));
  Instance = (int64_t)v96;
  if ( !v96 || (Instance = (int64_t)UserServantStorageMaster__getList(v96, v35)) == 0 )
LABEL_82:
    sub_1BCAA3C(Instance, v35);
  v79 = *(_QWORD *)(Instance + 24);
  v80 = Instance;
  if ( (int)v79 >= 1 )
  {
    v81 = 0LL;
    while ( v81 < (unsigned int)v79 )
    {
      v82 = *(_QWORD *)(v80 + 32 + 8 * v81);
      if ( v82 )
      {
        v83 = *(_OWORD *)(v82 + 64);
        *(_OWORD *)&v100.fields.currentCryptoKey = *(_OWORD *)(v82 + 48);
        *(_OWORD *)&v100.fields.fakeValue = v83;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35);
        v98 = v100;
        v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v98, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v84);
        Instance = NetworkManager__get_UserId(0LL);
        if ( v85 == Instance && (*(_BYTE *)(v82 + 300) & 4) == 0 )
        {
          v87 = *(_QWORD *)(v82 + 80);
          v86 = *(_QWORD *)(v82 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35);
          *(_QWORD *)&v104.fields.currentCryptoKey = v87;
          *(_QWORD *)&v104.fields.fakeValue = v86;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v104, 0LL);
          if ( !MasterData_object )
            goto LABEL_82;
          Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                Instance,
                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_82;
          Instance = ServantEntity__get_IsOrganization((ServantEntity_o *)Instance, 0LL);
          if ( (Instance & 1) != 0 )
          {
            v89 = *(_QWORD *)(v82 + 80);
            v88 = *(_QWORD *)(v82 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35);
            *(_QWORD *)&v105.fields.currentCryptoKey = v89;
            *(_QWORD *)&v105.fields.fakeValue = v88;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v105, 0LL);
            if ( !v40 )
              goto LABEL_82;
            Instance = System_Collections_Generic_List_int___Contains(
                         v40,
                         Instance,
                         (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
            if ( (Instance & 1) == 0 )
            {
              v91 = *(_QWORD *)(v82 + 80);
              v90 = *(_QWORD *)(v82 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35);
              *(_QWORD *)&v106.fields.currentCryptoKey = v91;
              *(_QWORD *)&v106.fields.fakeValue = v90;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v106, 0LL);
              v92 = v40->fields._items;
              v93 = Method_System_Collections_Generic_List_int__Add__;
              ++v40->fields._version;
              if ( !v92 )
                goto LABEL_82;
              v94 = v40->fields._size;
              v35 = (const MethodInfo *)(unsigned int)Instance;
              ++v74;
              if ( (unsigned int)v94 >= v92->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v40,
                  Instance,
                  *(const MethodInfo_3584C38 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
              }
              else
              {
                v40->fields._size = v94 + 1;
                v92->m_Items[v94 + 1] = Instance;
              }
            }
          }
        }
      }
      LODWORD(v79) = *(_DWORD *)(v80 + 24);
      if ( (__int64)++v81 >= (int)v79 )
        return v74;
    }
LABEL_81:
    sub_1BCAA44(Instance, v35);
  }
  return v74;
}


UserServantEntity_array *__fastcall UserServantMaster__getServantEquipList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  int64_t Instance; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  Il2CppObject *MasterData_object; // x21
  int64_t v32; // x20
  int32_t Count; // w23
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_List_object__o *v37; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v38; // x26
  int32_t v39; // w24
  int64_t v40; // x25
  __int64 methodPtr_low; // x10
  __int128 v42; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c **v44; // x20
  __int64 v45; // x26
  __int64 v46; // x27
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  int64_t v58; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_4B170B2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v26, v27);
    byte_4B170B2 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v30);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !this->fields.list )
    goto LABEL_30;
  v32 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v37 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v34,
                                                       v35,
                                                       v36);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( Count >= 1 )
  {
    v38 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
    v39 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v39,
                            (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v40 = Instance;
        methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == UserServantEntity_TypeInfo )
        {
          v42 = *(_OWORD *)(Instance + 64);
          v43 = *v38;
          *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)(v40 + 48);
          *(_OWORD *)&v60.fields.fakeValue = v42;
          if ( !v43->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v43, v29);
          v59 = v60;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v59, 0LL);
          if ( Instance == v32 && (*(_BYTE *)(v40 + 300) & 4) == 0 )
          {
            v58 = v32;
            v44 = v38;
            v46 = *(_QWORD *)(v40 + 80);
            v45 = *(_QWORD *)(v40 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29);
            *(_QWORD *)&v61.fields.currentCryptoKey = v46;
            *(_QWORD *)&v61.fields.fakeValue = v45;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v61, 0LL);
            if ( !MasterData_object )
              break;
            Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                  Instance,
                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              break;
            v38 = v44;
            Instance = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
            v32 = v58;
            if ( (Instance & 1) != 0 )
            {
              if ( !v37 )
                break;
              items = v37->fields._items;
              v54 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
              ++v37->fields._version;
              if ( !items )
                break;
              size = v37->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v37,
                  (Il2CppObject *)v40,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
              }
              else
              {
                v56 = &items->obj.klass + size;
                v37->fields._size = size + 1;
                v56[4] = (Il2CppClass *)v40;
                sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 4), v40, v47, v48, v49, v50, v51, v52);
              }
            }
          }
        }
      }
      if ( Count == ++v39 )
        goto LABEL_28;
    }
LABEL_30:
    sub_1BCAA3C(Instance, v29);
  }
LABEL_28:
  if ( !v37 )
    goto LABEL_30;
  return (UserServantEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v37,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
}


System_Collections_Generic_List_UserServantEntity__o *__fastcall UserServantMaster__getServantList(
        UserServantMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  DataManager_o *Instance; // x0
  __int64 v31; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Collections_Generic_List_object__o *v36; // x20
  __int64 v37; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v40; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  _OWORD *v47; // x0
  int64_t v48; // x22
  __int64 methodPtr_low; // x9
  __int128 v50; // q0
  __int64 v51; // x1
  int64_t v52; // x23
  __int64 v53; // x1
  __int64 v54; // x23
  __int64 v55; // x24
  __int64 v56; // x0
  Il2CppObject *Entity; // x0
  __int64 v58; // x1
  _BOOL8 IsServant; // x0
  __int64 v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  struct System_Object_array *items; // x8
  _QWORD *v68; // x9
  __int64 size; // x10
  Il2CppClass **v70; // x0
  System_Collections_Generic_IEnumerator_T__c *v71; // x8
  __int64 v72; // x9
  int32_t *v73; // x10
  __int64 v74; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+20h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  if ( (byte_4B170AB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v18, v19);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22, v23);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v28, v29);
    byte_4B170AB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___),
        v36 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                             v33,
                                                             v34,
                                                             v35),
        System_Collections_Generic_List_object____ctor(
          v36,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0LL) )
  {
    sub_1BCAA3C(Instance, v31);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v37);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v40 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v40;
        p_offset += 4;
        if ( !v40 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v43 = Enumerator->klass;
    v44 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v45 = &v43->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v45 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_17;
      }
      v46 = (__int64)&v43->vtable[*v45].method;
    }
    else
    {
LABEL_17:
      v46 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v47 = (_OWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(
                      Enumerator,
                      *(_QWORD *)(v46 + 8));
    v48 = (int64_t)v47;
    if ( v47 )
    {
      methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v47 + 304LL) < (unsigned int)methodPtr_low
        || *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)v47 + 200LL) + 8 * methodPtr_low - 8) != UserServantEntity_TypeInfo )
      {
        sub_1BCACFC(v47);
LABEL_46:
        sub_1BCAA3C(Entity, v58);
      }
      v50 = v47[4];
      *(_OWORD *)&v77.fields.currentCryptoKey = v47[3];
      *(_OWORD *)&v77.fields.fakeValue = v50;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
          UserServantEntity_TypeInfo);
      v76 = v77;
      v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v76, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v51);
      if ( v52 == NetworkManager__get_UserId(0LL) && (*(_BYTE *)(v48 + 300) & 4) == 0 )
      {
        v55 = *(_QWORD *)(v48 + 80);
        v54 = *(_QWORD *)(v48 + 88);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v53);
        *(_QWORD *)&v78.fields.currentCryptoKey = v55;
        *(_QWORD *)&v78.fields.fakeValue = v54;
        v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v78, 0LL);
        if ( !MasterData_object )
          sub_1BCAA3C(v56, (unsigned int)v56);
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   v56,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Entity )
          goto LABEL_46;
        IsServant = ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL);
        if ( IsServant )
        {
          if ( !v36 )
            sub_1BCAA3C(IsServant, v60);
          items = v36->fields._items;
          v68 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
          ++v36->fields._version;
          if ( !items )
            sub_1BCAA3C(IsServant, v60);
          size = v36->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v36,
              (Il2CppObject *)v48,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
          }
          else
          {
            v70 = &items->obj.klass + size;
            v36->fields._size = size + 1;
            v70[4] = (Il2CppClass *)v48;
            sub_1BCA784((PartyOrganizationUtility_o *)(v70 + 4), v48, v61, v62, v63, v64, v65, v66);
          }
        }
      }
    }
  }
  v71 = Enumerator->klass;
  v72 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v73 = &v71->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v73 - 1) != System_IDisposable_TypeInfo )
    {
      --v72;
      v73 += 4;
      if ( !v72 )
        goto LABEL_42;
    }
    v74 = (__int64)&v71->vtable[*v73].method;
  }
  else
  {
LABEL_42:
    v74 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v74)(Enumerator, *(_QWORD *)(v74 + 8));
  return (System_Collections_Generic_List_UserServantEntity__o *)v36;
}


System_Collections_Generic_List_UserServantEntity__o *__fastcall UserServantMaster__getServantListByClassIdList(
        UserServantMaster_o *this,
        System_Collections_Generic_List_int__o *classIdList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  DataManager_o *Instance; // x0
  __int64 v34; // x1
  Il2CppObject *MasterData_object; // x23
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Collections_Generic_List_object__o *v39; // x20
  __int64 v40; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v43; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0
  _OWORD *v50; // x0
  int64_t v51; // x23
  __int64 methodPtr_low; // x9
  __int128 v53; // q0
  __int64 v54; // x1
  int64_t v55; // x24
  const MethodInfo *v56; // x2
  __int64 SvtClassId; // x0
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x24
  __int64 v61; // x25
  __int64 v62; // x1
  Il2CppObject *Entity; // x0
  __int64 v64; // x1
  _BOOL8 IsServant; // x0
  __int64 v66; // x1
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  struct System_Object_array *items; // x8
  _QWORD *v74; // x9
  __int64 size; // x10
  Il2CppClass **v76; // x0
  System_Collections_Generic_IEnumerator_T__c *v77; // x8
  __int64 v78; // x9
  int32_t *v79; // x10
  __int64 v80; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v82; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16

  if ( (byte_4B170AE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, classIdList, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v21, v22);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25, v26);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v31, v32);
    byte_4B170AE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___),
        v39 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                             v36,
                                                             v37,
                                                             v38),
        System_Collections_Generic_List_object____ctor(
          v39,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__),
        (Instance = (DataManager_o *)this->fields.list) == 0LL) )
  {
    sub_1BCAA3C(Instance, v34);
  }
  v82 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v40);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v43 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v43;
        p_offset += 4;
        if ( !v43 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v46 = Enumerator->klass;
    v47 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v48 = &v46->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v48 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v47;
        v48 += 4;
        if ( !v47 )
          goto LABEL_17;
      }
      v49 = (__int64)&v46->vtable[*v48].method;
    }
    else
    {
LABEL_17:
      v49 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v50 = (_OWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(
                      Enumerator,
                      *(_QWORD *)(v49 + 8));
    v51 = (int64_t)v50;
    if ( v50 )
    {
      methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v50 + 304LL) < (unsigned int)methodPtr_low
        || *(UserServantEntity_c **)(*(_QWORD *)(*(_QWORD *)v50 + 200LL) + 8 * methodPtr_low - 8) != UserServantEntity_TypeInfo )
      {
        sub_1BCACFC(v50);
LABEL_48:
        sub_1BCAA3C(SvtClassId, v58);
      }
      v53 = v50[4];
      *(_OWORD *)&v84.fields.currentCryptoKey = v50[3];
      *(_OWORD *)&v84.fields.fakeValue = v53;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
          UserServantEntity_TypeInfo);
      v83 = v84;
      v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v83, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v54);
      if ( v55 == NetworkManager__get_UserId(0LL) && (*(_BYTE *)(v51 + 300) & 4) == 0 )
      {
        SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)v51, 0, v56);
        v58 = (unsigned int)SvtClassId;
        if ( !classIdList )
          goto LABEL_48;
        if ( System_Collections_Generic_List_int___Contains(
               classIdList,
               SvtClassId,
               (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          v61 = *(_QWORD *)(v51 + 80);
          v60 = *(_QWORD *)(v51 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v59);
          *(_QWORD *)&v85.fields.currentCryptoKey = v61;
          *(_QWORD *)&v85.fields.fakeValue = v60;
          v62 = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v85, 0LL);
          if ( !v82 )
            sub_1BCAA3C(0LL, v62);
          Entity = DataMasterBase_object__object__int___GetEntity(
                     v82,
                     v62,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !Entity )
            sub_1BCAA3C(0LL, v64);
          IsServant = ServantEntity__get_IsServant((ServantEntity_o *)Entity, 0LL);
          if ( IsServant )
          {
            if ( !v39 )
              sub_1BCAA3C(IsServant, v66);
            items = v39->fields._items;
            v74 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v39->fields._version;
            if ( !items )
              sub_1BCAA3C(IsServant, v66);
            size = v39->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v39,
                (Il2CppObject *)v51,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
            }
            else
            {
              v76 = &items->obj.klass + size;
              v39->fields._size = size + 1;
              v76[4] = (Il2CppClass *)v51;
              sub_1BCA784((PartyOrganizationUtility_o *)(v76 + 4), v51, v67, v68, v69, v70, v71, v72);
            }
          }
        }
      }
    }
  }
  v77 = Enumerator->klass;
  v78 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v79 = &v77->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v79 - 1) != System_IDisposable_TypeInfo )
    {
      --v78;
      v79 += 4;
      if ( !v78 )
        goto LABEL_44;
    }
    v80 = (__int64)&v77->vtable[*v79].method;
  }
  else
  {
LABEL_44:
    v80 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v80)(Enumerator, *(_QWORD *)(v80 + 8));
  return (System_Collections_Generic_List_UserServantEntity__o *)v39;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_long__o *__fastcall UserServantMaster__getSvtAllUserIdList(
        UserServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_IEnumerable_T__o *List; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Collections_Generic_List_object__o *v35; // x21
  UserServantEntity_array *Instance; // x0
  const MethodInfo *v37; // x1
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Collections_Generic_List_long__o *v41; // x20
  _BOOL8 v42; // x0
  __int64 v43; // x1
  Il2CppObject *current; // x28
  void *monitor; // x21
  Il2CppClass *klass; // x22
  __int64 v47; // x1
  Il2CppObject v48; // q0
  int64_t v49; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+40h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_4B170BD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantStorageMaster___, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor___76803536, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v23, v24);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25, v26);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30);
    byte_4B170BD = 1;
  }
  memset(&v56, 0, sizeof(v56));
  List = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getList(this, *(const MethodInfo **)&svtId);
  v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       v32,
                                                       v33,
                                                       v34);
  System_Collections_Generic_List_object____ctor_56235344(
    v35,
    List,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___76803536);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___)) == 0LL
    || (Instance = UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, v37), !v35) )
  {
    sub_1BCAA3C(Instance, v37);
  }
  System_Collections_Generic_List_object___AddRange(
    v35,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
  v41 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v38,
                                                     v39,
                                                     v40);
  System_Collections_Generic_List_long____ctor(
    v41,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    v35,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
  *(_OWORD *)&v56.fields._list = *(_OWORD *)&v55.fields.currentCryptoKey;
  v56.fields._current = (Il2CppObject *)v55.fields.fakeValue;
  while ( 1 )
  {
    v42 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v56,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    if ( !v42 )
      break;
    current = v56.fields._current;
    if ( !v56.fields._current )
      sub_1BCAA3C(v42, v43);
    klass = v56.fields._current[5].klass;
    monitor = v56.fields._current[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43);
    *(_QWORD *)&v57.fields.currentCryptoKey = klass;
    *(_QWORD *)&v57.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v57, 0LL) == svtId
      && (BYTE4(current[18].monitor) & 2) == 0 )
    {
      v48 = current[2];
      *(Il2CppObject *)&v55.fields.currentCryptoKey = current[1];
      *(Il2CppObject *)&v55.fields.fakeValue = v48;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v47);
      v54 = v55;
      v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v54, 0LL);
      if ( !v41 )
        sub_1BCAA3C(v49, v49);
      items = v41->fields._items;
      v51 = Method_System_Collections_Generic_List_long__Add__;
      ++v41->fields._version;
      if ( !items )
        sub_1BCAA3C(v49, v49);
      size = v41->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v41,
          v49,
          *(const MethodInfo_3589C90 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v41->fields._size = size + 1;
        items->m_Items[size] = v49;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v56,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
  return v41;
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_o *__fastcall UserServantMaster__getSvtIdBattle(
        UserServantMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w21
  System_Collections_ObjectModel_Collection_T__o *v16; // x22
  int32_t v17; // w23
  System_Collections_ObjectModel_Collection_T__o *v18; // x24
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_IList_T__o *items; // x25
  void *monitor; // x26
  int v22; // w8
  int v23; // w9
  __int128 v24; // q0
  int64_t v25; // x0
  __int128 v26; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+40h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4B170C1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&svtId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v10);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v11, v12);
    byte_4B170C1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0LL;
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v17,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v18 = list;
      methodPtr_low = LOBYTE(UserServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UserServantEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != UserServantEntity_TypeInfo )
      {
        break;
      }
      monitor = list[3].monitor;
      items = list[3].fields.items;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
      *(_QWORD *)&v31.fields.currentCryptoKey = monitor;
      *(_QWORD *)&v31.fields.fakeValue = items;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v31, 0LL) == svtId
        && (BYTE4(v18[12].monitor) & 4) == 0 )
      {
        if ( !v16 )
          goto LABEL_20;
        v22 = (int)v16[10].fields.items;
        v23 = (int)v18[10].fields.items;
        if ( v22 < v23 )
          goto LABEL_20;
        if ( v22 == v23 )
        {
          v24 = *(_OWORD *)&v16[1].monitor;
          *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&v16->fields.items;
          *(_OWORD *)&v30.fields.fakeValue = v24;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&svtId);
          v29 = v30;
          v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v29, 0LL);
          v26 = *(_OWORD *)&v18[1].monitor;
          *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&v18->fields.items;
          *(_OWORD *)&v28.fields.fakeValue = v26;
          if ( v25 > CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v28, 0LL) )
LABEL_20:
            v16 = v18;
        }
      }
      if ( v15 == ++v17 )
        return (UserServantEntity_o *)v16;
    }
LABEL_25:
    sub_1BCAA3C(list, *(_QWORD *)&svtId);
  }
  return 0LL;
}


void __fastcall UserServantMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B170C8 & 1) == 0 )
  {
    sub_1BCA7E0(&UserServantMaster___c_TypeInfo, v1, v2);
    byte_4B170C8 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(UserServantMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  UserServantMaster___c_TypeInfo->static_fields->__9 = (struct UserServantMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)UserServantMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
  if ( (byte_4B170C9 & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass14_0_o *)sub_1BCA7E0(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          m,
                                                          method);
    byte_4B170C9 = 1;
  }
  if ( !m || (e = v4->fields.e) == 0LL )
    sub_1BCAA3C(this, m);
  materialSvtId = m->fields.materialSvtId;
  v8 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, m);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v10, 0LL);
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
  if ( (byte_4B170CA & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass15_0_o *)sub_1BCA7E0(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          m,
                                                          method);
    byte_4B170CA = 1;
  }
  if ( !m || (e = v4->fields.e) == 0LL )
    sub_1BCAA3C(this, m);
  materialSvtId = m->fields.materialSvtId;
  v8 = *(_QWORD *)&e->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&e->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, m);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  return materialSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v10, 0LL);
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
  if ( (byte_4B170CB & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass1_0_o *)sub_1BCA7E0(
                                                         &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                         ent,
                                                         method);
    byte_4B170CB = 1;
  }
  if ( !ent )
    sub_1BCAA3C(this, ent);
  v6 = *(_QWORD *)&ent->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&ent->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, ent);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return v4->fields.svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v8, 0LL);
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
  if ( (byte_4B170CC & 1) == 0 )
  {
    this = (UserServantMaster___c__DisplayClass31_0_o *)sub_1BCA7E0(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          usrSvt,
                                                          method);
    byte_4B170CC = 1;
  }
  if ( !usrSvt )
    sub_1BCAA3C(this, usrSvt);
  v6 = *(_QWORD *)&usrSvt->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&usrSvt->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, usrSvt);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v8, 0LL) == v4->fields.svtId;
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
    sub_1BCAA3C(this, a);
  }
  return (_DWORD)this - UserServantEntity__getSkillLevel(a, v5->fields.skillIdx, v6);
}