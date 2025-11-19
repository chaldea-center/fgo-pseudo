void ServantFlagReleaseMaster___ctor(ServantFlagReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6C10 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__);
    byte_4CB6C10 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    231,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantFlagReleaseEntity_o *ServantFlagReleaseMaster__GetEntity(
        ServantFlagReleaseMaster_o *this,
        int32_t svtId,
        int32_t flagId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CB6C0E & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__);
    byte_4CB6C0E = 1;
  }
  PK = (Il2CppObject *)ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&idx);
  return (ServantFlagReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_33FDB94 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ServantFlagReleaseMaster__TryGetEntity(
        ServantFlagReleaseMaster_o *this,
        ServantFlagReleaseEntity_o **entity,
        int32_t svtId,
        int32_t flagId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CB6C0F & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__);
    byte_4CB6C0F = 1;
  }
  PK = (Il2CppObject *)ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&flagId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__);
}


bool ServantFlagReleaseMaster__checkTresureDeviceEffectFlag(
        ServantFlagReleaseMaster_o *this,
        int32_t svtId,
        int32_t flagId,
        const MethodInfo *method)
{
  char v4; // w19
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = flagId;
  if ( (byte_4CB6C12 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB6C12 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
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
          0) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_16:
    sub_1C6BC60(Instance, v7);
  return UserServantCollectionEntity__HasFlag(entity, 1 << v4, 0);
}


bool ServantFlagReleaseMaster__isSecretTreasureDevice(
        ServantFlagReleaseMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantFlagEntity_o *svtFlagEntity; // [xsp+8h] [xbp-8h] BYREF

  svtFlagEntity = 0;
  return ServantFlagReleaseMaster__isSecretTreasureDevice_42929028(this, svtId, &svtFlagEntity, v3);
}


bool ServantFlagReleaseMaster__isSecretTreasureDevice_42929028(
        ServantFlagReleaseMaster_o *this,
        int32_t svtId,
        ServantFlagEntity_o **svtFlagEntity,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  ServantFlagEntity_o *Entity; // x28
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_Dictionary_int__object__o *v13; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x23
  const MethodInfo_34526E4 **v15; // x26
  const MethodInfo_3452450 **v16; // x27
  _QWORD *v17; // x29
  int32_t v18; // w24
  Il2CppObject *v19; // x25
  _QWORD *v20; // x21
  const MethodInfo_34526E4 **v21; // x29
  int32_t monitor_high; // w26
  ServantFlagEntity_o *v23; // x19
  const MethodInfo_3452450 **v24; // x28
  System_Collections_Generic_List_object__o *v25; // x27
  int32_t v26; // w1
  Il2CppObject *v27; // x2
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  Il2CppClass *klass; // x8
  __int64 v31; // x9
  __int64 monitor_low; // x10
  void **v33; // x8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x24
  System_Collections_Generic_List_int__o *v35; // x23
  int v36; // w23
  Il2CppObject *Item; // x0
  __int64 v38; // x1
  int v39; // w26
  _BOOL8 v40; // x0
  __int64 v41; // x1
  int32_t klass_high; // w23
  int32_t v43; // w25
  int64_t v44; // x24
  char v46; // w19
  int v47; // w23
  Il2CppObject *v48; // x0
  __int64 v49; // x1
  __int64 v50; // x1
  Il2CppObject *MasterData_object; // x22
  NetworkManager_c *v52; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v54; // x1
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  int32_t svtIda; // [xsp+14h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4CB6C11 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ServantFlagReleaseEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_ServantFlagReleaseEntity__get_Item__);
    sub_1C6BA08(&CondType_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantFlagMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__getEntityList__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor___78518792);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB6C11 = 1;
  }
  memset(&v60, 0, sizeof(v60));
  memset(&v59, 0, sizeof(v59));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantFlagMaster___);
  if ( !Instance )
    goto LABEL_52;
  Entity = ServantFlagMaster__getEntity((ServantFlagMaster_o *)Instance, svtId, 1, v9);
  *svtFlagEntity = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)svtFlagEntity, 0, v11, v12);
  if ( !Entity )
    return 0;
  svtIda = svtId;
  v13 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v13,
    (const MethodInfo_3451B1C *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_52;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ServantFlagReleaseEntity__get_Count__) >= 1 )
  {
    v15 = (const MethodInfo_34526E4 **)&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__;
    v16 = (const MethodInfo_3452450 **)&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__;
    v17 = &Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__;
    v18 = 0;
    while ( 1 )
    {
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   list,
                   v18,
                   (const MethodInfo_3391EF4 *)Method_System_Collections_ObjectModel_Collection_ServantFlagReleaseEntity__get_Item__);
      if ( !Instance )
        break;
      v19 = Instance;
      if ( LODWORD(Instance[1].klass) == Entity->fields.svtId && HIDWORD(Instance[1].klass) == Entity->fields.flagId )
      {
        if ( !v13 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(v13, HIDWORD(Instance[1].monitor), *v15) )
        {
          v20 = v17;
          v21 = v15;
          monitor_high = HIDWORD(v19[1].monitor);
          v23 = Entity;
          v24 = v16;
          v25 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v25,
            (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__);
          v26 = monitor_high;
          v15 = v21;
          v17 = v20;
          v27 = (Il2CppObject *)v25;
          v16 = v24;
          Entity = v23;
          System_Collections_Generic_Dictionary_int__object___set_Item(
            v13,
            v26,
            v27,
            (const MethodInfo_34524DC *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__);
        }
        Instance = System_Collections_Generic_Dictionary_int__object___get_Item(v13, HIDWORD(v19[1].monitor), *v16);
        if ( !Instance )
          break;
        klass = Instance[1].klass;
        v31 = *v17;
        ++HIDWORD(Instance[1].monitor);
        if ( !klass )
          break;
        monitor_low = SLODWORD(Instance[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            v19,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(*(_QWORD *)(v31 + 32) + 192LL) + 112LL));
        }
        else
        {
          v33 = &klass->_1.image + monitor_low;
          LODWORD(Instance[1].monitor) = monitor_low + 1;
          v33[4] = v19;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v19, v28, v29);
        }
      }
      if ( ++v18 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      list,
                      (const MethodInfo_3391E64 *)Method_System_Collections_ObjectModel_Collection_ServantFlagReleaseEntity__get_Count__) )
        goto LABEL_21;
    }
LABEL_52:
    sub_1C6BC60(Instance, v8);
  }
LABEL_21:
  if ( !v13
    || System_Collections_Generic_Dictionary_int__object___get_Count(
         v13,
         (const MethodInfo_34521A0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__) < 1 )
  {
    return 0;
  }
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v13,
           (const MethodInfo_34521B0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__);
  v35 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58602020(
    v35,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_37E3224 *)Method_System_Collections_Generic_List_int___ctor___78518792);
  if ( !v35 )
    goto LABEL_52;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    v35,
    (const MethodInfo_37E4424 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v36 = 0;
  v60 = v58;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v60,
            (const MethodInfo_358270C *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      v46 = 0;
      v47 = 7;
      goto LABEL_51;
    }
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             v13,
             (int32_t)v60.fields._current,
             (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__);
    if ( !Item )
      sub_1C6BC60(0, v38);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v58,
      (System_Collections_Generic_List_object__o *)Item,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__);
    v39 = v36;
    v59 = v58;
    while ( 1 )
    {
      v40 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v59,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__);
      if ( !v40 )
        break;
      if ( !v59.fields._current )
        sub_1C6BC60(v40, v41);
      v43 = (int32_t)v59.fields._current[2].klass;
      klass_high = HIDWORD(v59.fields._current[2].klass);
      v44 = SLODWORD(v59.fields._current[2].monitor);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v39 |= !CondType__IsOpen(v43, klass_high, v44, 0, 0, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v59,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__);
    v36 = 1;
  }
  while ( (v39 & 1) != 0 );
  v48 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v48 )
    sub_1C6BC60(0, v49);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)v48,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  v52 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v52 = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    sub_1C6BC60(v52, v50);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       v52->static_fields->userIdNumber,
                       svtIda,
                       0);
  if ( !EntityDefinitely )
    sub_1C6BC60(0, v54);
  if ( UserServantCollectionEntity__HasFlag(EntityDefinitely, 1 << Entity->fields.flagId, 0) )
  {
    v46 = 0;
  }
  else
  {
    *svtFlagEntity = Entity;
    sub_1C6B9AC((CGThumbnailListItem_o *)svtFlagEntity, (int32_t)Entity, v55, v56);
    v46 = 1;
  }
  v47 = 14;
LABEL_51:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v60,
    (const MethodInfo_3582708 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v46 & (v47 == 14);
}