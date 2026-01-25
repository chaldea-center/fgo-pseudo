void ServantFlagReleaseMaster___ctor(ServantFlagReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEFB3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__);
    byte_4CEEFB3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    231,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__);
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

  if ( (byte_4CEEFB1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__);
    byte_4CEEFB1 = 1;
  }
  PK = (Il2CppObject *)ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&idx);
  return (ServantFlagReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_3432DB4 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__);
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

  if ( (byte_4CEEFB2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__);
    byte_4CEEFB2 = 1;
  }
  PK = (Il2CppObject *)ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&flagId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__);
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
  if ( (byte_4CEEFB5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEEFB5 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
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
    sub_1C7BD40(Instance, v7);
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
  return ServantFlagReleaseMaster__isSecretTreasureDevice_43245644(this, svtId, &svtFlagEntity, v3);
}


bool ServantFlagReleaseMaster__isSecretTreasureDevice_43245644(
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_Dictionary_int__object__o *v17; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x23
  const MethodInfo_3487904 **v19; // x26
  const MethodInfo_3487670 **v20; // x27
  _QWORD *v21; // x29
  int32_t v22; // w24
  Il2CppObject *v23; // x25
  _QWORD *v24; // x21
  const MethodInfo_3487904 **v25; // x29
  int32_t monitor_high; // w26
  ServantFlagEntity_o *v27; // x19
  const MethodInfo_3487670 **v28; // x28
  System_Collections_Generic_List_object__o *v29; // x27
  int32_t v30; // w1
  Il2CppObject *v31; // x2
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  Il2CppClass *klass; // x8
  __int64 v39; // x9
  __int64 monitor_low; // x10
  void **v41; // x8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x24
  System_Collections_Generic_List_int__o *v43; // x23
  int v44; // w23
  Il2CppObject *Item; // x0
  __int64 v46; // x1
  int v47; // w26
  _BOOL8 v48; // x0
  __int64 v49; // x1
  int32_t klass_high; // w23
  int32_t v51; // w25
  int64_t v52; // x24
  char v54; // w19
  int v55; // w23
  Il2CppObject *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x1
  Il2CppObject *MasterData_object; // x22
  NetworkManager_c *v60; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v62; // x1
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  int32_t svtIda; // [xsp+14h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4CEEFB4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_ServantFlagReleaseEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_ServantFlagReleaseEntity__get_Item__);
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantFlagMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__getEntityList__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor___78742272);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEEFB4 = 1;
  }
  memset(&v72, 0, sizeof(v72));
  memset(&v71, 0, sizeof(v71));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantFlagMaster___);
  if ( !Instance )
    goto LABEL_52;
  Entity = ServantFlagMaster__getEntity((ServantFlagMaster_o *)Instance, svtId, 1, v9);
  *svtFlagEntity = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)svtFlagEntity, 0, v11, v12, v13, v14, v15, v16);
  if ( !Entity )
    return 0;
  svtIda = svtId;
  v17 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v17,
    (const MethodInfo_3486D3C *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_52;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_ServantFlagReleaseEntity__get_Count__) >= 1 )
  {
    v19 = (const MethodInfo_3487904 **)&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__;
    v20 = (const MethodInfo_3487670 **)&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__;
    v21 = &Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__;
    v22 = 0;
    while ( 1 )
    {
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   list,
                   v22,
                   (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_ServantFlagReleaseEntity__get_Item__);
      if ( !Instance )
        break;
      v23 = Instance;
      if ( LODWORD(Instance[1].klass) == Entity->fields.svtId && HIDWORD(Instance[1].klass) == Entity->fields.flagId )
      {
        if ( !v17 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(v17, HIDWORD(Instance[1].monitor), *v19) )
        {
          v24 = v21;
          v25 = v19;
          monitor_high = HIDWORD(v23[1].monitor);
          v27 = Entity;
          v28 = v20;
          v29 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v29,
            (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__);
          v30 = monitor_high;
          v19 = v25;
          v21 = v24;
          v31 = (Il2CppObject *)v29;
          v20 = v28;
          Entity = v27;
          System_Collections_Generic_Dictionary_int__object___set_Item(
            v17,
            v30,
            v31,
            (const MethodInfo_34876FC *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__);
        }
        Instance = System_Collections_Generic_Dictionary_int__object___get_Item(v17, HIDWORD(v23[1].monitor), *v20);
        if ( !Instance )
          break;
        klass = Instance[1].klass;
        v39 = *v21;
        ++HIDWORD(Instance[1].monitor);
        if ( !klass )
          break;
        monitor_low = SLODWORD(Instance[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            v23,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(*(_QWORD *)(v39 + 32) + 192LL) + 112LL));
        }
        else
        {
          v41 = &klass->_1.image + monitor_low;
          LODWORD(Instance[1].monitor) = monitor_low + 1;
          v41[4] = v23;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v41 + 4), (int32_t)v23, v32, v33, v34, v35, v36, v37);
        }
      }
      if ( ++v22 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      list,
                      (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_ServantFlagReleaseEntity__get_Count__) )
        goto LABEL_21;
    }
LABEL_52:
    sub_1C7BD40(Instance, v8);
  }
LABEL_21:
  if ( !v17
    || System_Collections_Generic_Dictionary_int__object___get_Count(
         v17,
         (const MethodInfo_34873C0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__) < 1 )
  {
    return 0;
  }
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v17,
           (const MethodInfo_34873D0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__);
  v43 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58857132(
    v43,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_38216AC *)Method_System_Collections_Generic_List_int___ctor___78742272);
  if ( !v43 )
    goto LABEL_52;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v70,
    v43,
    (const MethodInfo_38228AC *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v44 = 0;
  v72 = v70;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v72,
            (const MethodInfo_35BA180 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      v54 = 0;
      v55 = 7;
      goto LABEL_51;
    }
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             v17,
             (int32_t)v72.fields._current,
             (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__);
    if ( !Item )
      sub_1C7BD40(0, v46);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v70,
      (System_Collections_Generic_List_object__o *)Item,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__);
    v47 = v44;
    v71 = v70;
    while ( 1 )
    {
      v48 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v71,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__);
      if ( !v48 )
        break;
      if ( !v71.fields._current )
        sub_1C7BD40(v48, v49);
      v51 = (int32_t)v71.fields._current[2].klass;
      klass_high = HIDWORD(v71.fields._current[2].klass);
      v52 = SLODWORD(v71.fields._current[2].monitor);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v47 |= !CondType__IsOpen(v51, klass_high, v52, 0, 0, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v71,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__);
    v44 = 1;
  }
  while ( (v47 & 1) != 0 );
  v56 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v56 )
    sub_1C7BD40(0, v57);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)v56,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  v60 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v60 = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    sub_1C7BD40(v60, v58);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       v60->static_fields->userIdNumber,
                       svtIda,
                       0);
  if ( !EntityDefinitely )
    sub_1C7BD40(0, v62);
  if ( UserServantCollectionEntity__HasFlag(EntityDefinitely, 1 << Entity->fields.flagId, 0) )
  {
    v54 = 0;
  }
  else
  {
    *svtFlagEntity = Entity;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)svtFlagEntity, (int32_t)Entity, v63, v64, v65, v66, v67, v68);
    v54 = 1;
  }
  v55 = 14;
LABEL_51:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v72,
    (const MethodInfo_35BA17C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v54 & (v55 == 14);
}