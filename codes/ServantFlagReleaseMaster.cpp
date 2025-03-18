void __fastcall ServantFlagReleaseMaster___ctor(ServantFlagReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C227ED & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__, method);
    byte_4C227ED = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    231,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantFlagReleaseEntity_o *__fastcall ServantFlagReleaseMaster__GetEntity(
        ServantFlagReleaseMaster_o *this,
        int32_t svtId,
        int32_t flagId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C227EB & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4C227EB = 1;
  }
  PK = (Il2CppObject *)ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&idx);
  return (ServantFlagReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_329F900 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantFlagReleaseMaster__TryGetEntity(
        ServantFlagReleaseMaster_o *this,
        ServantFlagReleaseEntity_o **entity,
        int32_t svtId,
        int32_t flagId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C227EC & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4C227EC = 1;
  }
  PK = (Il2CppObject *)ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&flagId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantFlagReleaseMaster__checkTresureDeviceEffectFlag(
        ServantFlagReleaseMaster_o *this,
        int32_t svtId,
        int32_t flagId,
        const MethodInfo *method)
{
  char v4; // w19
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = flagId;
  if ( (byte_4C227EF & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C227EF = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v9);
    byte_4C1C955 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_16;
  if ( !UserServantCollectionMaster__TryGetEntity(
          (UserServantCollectionMaster_o *)MasterData_object,
          &entity,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
          svtId,
          0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_16:
    sub_1C3B9C0(Instance, v9);
  return UserServantCollectionEntity__HasFlag(entity, 1 << v4, 0LL);
}


bool __fastcall ServantFlagReleaseMaster__isSecretTreasureDevice(
        ServantFlagReleaseMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantFlagEntity_o *svtFlagEntity; // [xsp+8h] [xbp-8h] BYREF

  svtFlagEntity = 0LL;
  return ServantFlagReleaseMaster__isSecretTreasureDevice_41220192(this, svtId, &svtFlagEntity, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantFlagReleaseMaster__isSecretTreasureDevice_41220192(
        ServantFlagReleaseMaster_o *this,
        int32_t svtId,
        ServantFlagEntity_o **svtFlagEntity,
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
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  Il2CppObject *Instance; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  ServantFlagEntity_o *Entity; // x28
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Collections_Generic_Dictionary_int__object__o *v44; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x23
  const MethodInfo_32F4D90 **v46; // x26
  const MethodInfo_32F4AFC **v47; // x27
  void **v48; // x29
  int32_t v49; // w24
  int64_t v50; // x25
  void **v51; // x21
  const MethodInfo_32F4D90 **v52; // x29
  int32_t v53; // w26
  ServantFlagEntity_o *v54; // x19
  const MethodInfo_32F4AFC **v55; // x28
  System_Collections_Generic_List_object__o *v56; // x27
  int32_t v57; // w1
  Il2CppObject *v58; // x2
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  Il2CppClass *klass; // x8
  _QWORD *v66; // x9
  __int64 monitor_low; // x10
  void **v68; // x8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x24
  System_Collections_Generic_List_int__o *v70; // x23
  int v71; // w23
  Il2CppObject *Item; // x0
  __int64 v73; // x1
  int v74; // w26
  _BOOL8 v75; // x0
  __int64 v76; // x1
  int32_t klass_high; // w23
  int32_t v78; // w25
  int64_t v79; // x24
  char v81; // w19
  int v82; // w23
  Il2CppObject *v83; // x0
  __int64 v84; // x1
  __int64 v85; // x1
  Il2CppObject *MasterData_object; // x22
  NetworkManager_c *v87; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v89; // x1
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  int32_t svtIda; // [xsp+14h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v97; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v98; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v99; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4C227EE & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_ServantFlagReleaseEntity__get_Count__,
      *(_QWORD *)&svtId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_ServantFlagReleaseEntity__get_Item__, v7);
    sub_1C3B764(&CondType_TypeInfo, v8);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantFlagMaster___, v9);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10);
    sub_1C3B764(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__getEntityList__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__, v16);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__, v17);
    sub_1C3B764(&System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__, v20);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v21);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__, v22);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__get_Current__, v23);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v24);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__, v25);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__GetEnumerator__, v26);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__, v27);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__, v28);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor___77852768, v29);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v30);
    sub_1C3B764(&System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo, v31);
    sub_1C3B764(&NetworkManager_TypeInfo, v32);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33);
    byte_4C227EE = 1;
  }
  memset(&v99, 0, sizeof(v99));
  memset(&v98, 0, sizeof(v98));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantFlagMaster___);
  if ( !Instance )
    goto LABEL_52;
  Entity = ServantFlagMaster__getEntity((ServantFlagMaster_o *)Instance, svtId, 1, v36);
  *svtFlagEntity = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)svtFlagEntity, 0LL, v38, v39, v40, v41, v42, v43);
  if ( !Entity )
    return 0;
  svtIda = svtId;
  v44 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v44,
    (const MethodInfo_32F41C8 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_52;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_ServantFlagReleaseEntity__get_Count__) >= 1 )
  {
    v46 = (const MethodInfo_32F4D90 **)&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__;
    v47 = (const MethodInfo_32F4AFC **)&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__;
    v48 = &Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__;
    v49 = 0;
    while ( 1 )
    {
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   list,
                   v49,
                   (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_ServantFlagReleaseEntity__get_Item__);
      if ( !Instance )
        break;
      v50 = (int64_t)Instance;
      if ( LODWORD(Instance[1].klass) == Entity->fields.svtId && HIDWORD(Instance[1].klass) == Entity->fields.flagId )
      {
        if ( !v44 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(v44, HIDWORD(Instance[1].monitor), *v46) )
        {
          v51 = v48;
          v52 = v46;
          v53 = *(_DWORD *)(v50 + 28);
          v54 = Entity;
          v55 = v47;
          v56 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v56,
            (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__);
          v57 = v53;
          v46 = v52;
          v48 = v51;
          v58 = (Il2CppObject *)v56;
          v47 = v55;
          Entity = v54;
          System_Collections_Generic_Dictionary_int__object___set_Item(
            v44,
            v57,
            v58,
            (const MethodInfo_32F4B88 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__);
        }
        Instance = System_Collections_Generic_Dictionary_int__object___get_Item(v44, *(_DWORD *)(v50 + 28), *v47);
        if ( !Instance )
          break;
        klass = Instance[1].klass;
        v66 = *v48;
        ++HIDWORD(Instance[1].monitor);
        if ( !klass )
          break;
        monitor_low = SLODWORD(Instance[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v50,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
        }
        else
        {
          v68 = &klass->_1.image + monitor_low;
          LODWORD(Instance[1].monitor) = monitor_low + 1;
          v68[4] = (void *)v50;
          sub_1C3B708((PartyOrganizationUtility_o *)(v68 + 4), v50, v59, v60, v61, v62, v63, v64);
        }
      }
      if ( ++v49 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      list,
                      (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_ServantFlagReleaseEntity__get_Count__) )
        goto LABEL_21;
    }
LABEL_52:
    sub_1C3B9C0(Instance, v35);
  }
LABEL_21:
  if ( !v44
    || System_Collections_Generic_Dictionary_int__object___get_Count(
         v44,
         (const MethodInfo_32F484C *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__) < 1 )
  {
    return 0;
  }
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v44,
           (const MethodInfo_32F485C *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__);
  v70 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_57074972(
    v70,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_366E51C *)Method_System_Collections_Generic_List_int___ctor___77852768);
  if ( !v70 )
    goto LABEL_52;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v97,
    v70,
    (const MethodInfo_366F71C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v71 = 0;
  v99 = v97;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v99,
            (const MethodInfo_341C2F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      v81 = 0;
      v82 = 7;
      goto LABEL_51;
    }
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             v44,
             (int32_t)v99.fields._current,
             (const MethodInfo_32F4AFC *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__);
    if ( !Item )
      sub_1C3B9C0(0LL, v73);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v97,
      (System_Collections_Generic_List_object__o *)Item,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__);
    v74 = v71;
    v98 = v97;
    while ( 1 )
    {
      v75 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v98,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__);
      if ( !v75 )
        break;
      if ( !v98.fields._current )
        sub_1C3B9C0(v75, v76);
      v78 = (int32_t)v98.fields._current[2].klass;
      klass_high = HIDWORD(v98.fields._current[2].klass);
      v79 = SLODWORD(v98.fields._current[2].monitor);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v74 |= !CondType__IsOpen(v78, klass_high, v79, 0, 0LL, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v98,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__);
    v71 = 1;
  }
  while ( (v74 & 1) != 0 );
  v83 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v83 )
    sub_1C3B9C0(0LL, v84);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)v83,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v85);
    byte_4C1C955 = 1;
  }
  v87 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v87 = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    sub_1C3B9C0(v87, v85);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       v87->static_fields->userIdNumber,
                       svtIda,
                       0LL);
  if ( !EntityDefinitely )
    sub_1C3B9C0(0LL, v89);
  if ( UserServantCollectionEntity__HasFlag(EntityDefinitely, 1 << Entity->fields.flagId, 0LL) )
  {
    v81 = 0;
  }
  else
  {
    *svtFlagEntity = Entity;
    sub_1C3B708((PartyOrganizationUtility_o *)svtFlagEntity, (int64_t)Entity, v90, v91, v92, v93, v94, v95);
    v81 = 1;
  }
  v82 = 14;
LABEL_51:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v99,
    (const MethodInfo_341C2F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v81 & (v82 == 14);
}