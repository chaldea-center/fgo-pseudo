void __fastcall ServantFlagReleaseMaster___ctor(ServantFlagReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CE17 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__, method);
    byte_4B1CE17 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    231,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__);
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

  if ( (byte_4B1CE15 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4B1CE15 = 1;
  }
  PK = (Il2CppObject *)ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&idx);
  return (ServantFlagReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_32CC8B8 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__);
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

  if ( (byte_4B1CE16 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4B1CE16 = 1;
  }
  PK = (Il2CppObject *)ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&flagId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__);
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
  if ( (byte_4B1CE19 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1CE19 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
    byte_4B165D1 = 1;
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
    sub_1BCB254(Instance, v9);
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
  return ServantFlagReleaseMaster__isSecretTreasureDevice_41836340(this, svtId, &svtFlagEntity, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantFlagReleaseMaster__isSecretTreasureDevice_41836340(
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
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Collections_Generic_Dictionary_int__object__o *v40; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x23
  const MethodInfo_33214D8 **v42; // x26
  const MethodInfo_3321244 **v43; // x27
  void **v44; // x29
  int32_t v45; // w24
  Il2CppObject *v46; // x25
  void **v47; // x21
  const MethodInfo_33214D8 **v48; // x29
  int32_t monitor_high; // w26
  ServantFlagEntity_o *v50; // x19
  const MethodInfo_3321244 **v51; // x28
  System_Collections_Generic_List_object__o *v52; // x27
  int32_t v53; // w1
  Il2CppObject *v54; // x2
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  Il2CppClass *klass; // x8
  _QWORD *v58; // x9
  __int64 monitor_low; // x10
  void **v60; // x8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x24
  System_Collections_Generic_List_int__o *v62; // x23
  int v63; // w23
  Il2CppObject *Item; // x0
  __int64 v65; // x1
  int v66; // w26
  _BOOL8 v67; // x0
  __int64 v68; // x1
  int32_t klass_high; // w23
  int32_t v70; // w25
  int64_t v71; // x24
  char v73; // w19
  int v74; // w23
  Il2CppObject *v75; // x0
  __int64 v76; // x1
  __int64 v77; // x1
  Il2CppObject *MasterData_object; // x22
  NetworkManager_c *v79; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v81; // x1
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  int32_t svtIda; // [xsp+14h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4B1CE18 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_ServantFlagReleaseEntity__get_Count__,
      *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_ServantFlagReleaseEntity__get_Item__, v7);
    sub_1BCAFF8(&CondType_TypeInfo, v8);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantFlagMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10);
    sub_1BCAFF8(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__getEntityList__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__, v17);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v21);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__, v22);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__get_Current__, v23);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v24);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__, v25);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v26);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__, v27);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__, v28);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor___76866480, v29);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v30);
    sub_1BCAFF8(&System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo, v31);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v32);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33);
    byte_4B1CE18 = 1;
  }
  memset(&v87, 0, sizeof(v87));
  memset(&v86, 0, sizeof(v86));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantFlagMaster___);
  if ( !Instance )
    goto LABEL_52;
  Entity = ServantFlagMaster__getEntity((ServantFlagMaster_o *)Instance, svtId, 1, v36);
  *svtFlagEntity = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)svtFlagEntity, 0, v38, v39);
  if ( !Entity )
    return 0;
  svtIda = svtId;
  v40 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v40,
    (const MethodInfo_3320910 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_52;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ServantFlagReleaseEntity__get_Count__) >= 1 )
  {
    v42 = (const MethodInfo_33214D8 **)&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__;
    v43 = (const MethodInfo_3321244 **)&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__;
    v44 = &Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__;
    v45 = 0;
    while ( 1 )
    {
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   list,
                   v45,
                   (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_ServantFlagReleaseEntity__get_Item__);
      if ( !Instance )
        break;
      v46 = Instance;
      if ( LODWORD(Instance[1].klass) == Entity->fields.svtId && HIDWORD(Instance[1].klass) == Entity->fields.flagId )
      {
        if ( !v40 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(v40, HIDWORD(Instance[1].monitor), *v42) )
        {
          v47 = v44;
          v48 = v42;
          monitor_high = HIDWORD(v46[1].monitor);
          v50 = Entity;
          v51 = v43;
          v52 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v52,
            (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__);
          v53 = monitor_high;
          v42 = v48;
          v44 = v47;
          v54 = (Il2CppObject *)v52;
          v43 = v51;
          Entity = v50;
          System_Collections_Generic_Dictionary_int__object___set_Item(
            v40,
            v53,
            v54,
            (const MethodInfo_33212D0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__);
        }
        Instance = System_Collections_Generic_Dictionary_int__object___get_Item(v40, HIDWORD(v46[1].monitor), *v43);
        if ( !Instance )
          break;
        klass = Instance[1].klass;
        v58 = *v44;
        ++HIDWORD(Instance[1].monitor);
        if ( !klass )
          break;
        monitor_low = SLODWORD(Instance[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            v46,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
        }
        else
        {
          v60 = &klass->_1.image + monitor_low;
          LODWORD(Instance[1].monitor) = monitor_low + 1;
          v60[4] = v46;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v60 + 4), (int32_t)v46, v55, v56);
        }
      }
      if ( ++v45 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      list,
                      (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_ServantFlagReleaseEntity__get_Count__) )
        goto LABEL_21;
    }
LABEL_52:
    sub_1BCB254(Instance, v35);
  }
LABEL_21:
  if ( !v40
    || System_Collections_Generic_Dictionary_int__object___get_Count(
         v40,
         (const MethodInfo_3320F94 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__) < 1 )
  {
    return 0;
  }
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v40,
           (const MethodInfo_3320FA4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__);
  v62 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_57263232(
    v62,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_369C480 *)Method_System_Collections_Generic_List_int___ctor___76866480);
  if ( !v62 )
    goto LABEL_52;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v85,
    v62,
    (const MethodInfo_369D680 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v63 = 0;
  v87 = v85;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v87,
            (const MethodInfo_344B704 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      v73 = 0;
      v74 = 7;
      goto LABEL_51;
    }
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             v40,
             (int32_t)v87.fields._current,
             (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__);
    if ( !Item )
      sub_1BCB254(0LL, v65);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v85,
      (System_Collections_Generic_List_object__o *)Item,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__);
    v66 = v63;
    v86 = v85;
    while ( 1 )
    {
      v67 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v86,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__);
      if ( !v67 )
        break;
      if ( !v86.fields._current )
        sub_1BCB254(v67, v68);
      v70 = (int32_t)v86.fields._current[2].klass;
      klass_high = HIDWORD(v86.fields._current[2].klass);
      v71 = SLODWORD(v86.fields._current[2].monitor);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v66 |= !CondType__IsOpen(v70, klass_high, v71, 0, 0LL, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v86,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__);
    v63 = 1;
  }
  while ( (v66 & 1) != 0 );
  v75 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v75 )
    sub_1BCB254(0LL, v76);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)v75,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v77);
    byte_4B165D1 = 1;
  }
  v79 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v79 = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    sub_1BCB254(v79, v77);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       v79->static_fields->userIdNumber,
                       svtIda,
                       0LL);
  if ( !EntityDefinitely )
    sub_1BCB254(0LL, v81);
  if ( UserServantCollectionEntity__HasFlag(EntityDefinitely, 1 << Entity->fields.flagId, 0LL) )
  {
    v73 = 0;
  }
  else
  {
    *svtFlagEntity = Entity;
    sub_1BCAF9C((CGThumbnailListItem_o *)svtFlagEntity, (int32_t)Entity, v82, v83);
    v73 = 1;
  }
  v74 = 14;
LABEL_51:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v87,
    (const MethodInfo_344B700 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v73 & (v74 == 14);
}