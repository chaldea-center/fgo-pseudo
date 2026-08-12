void ServantFlagReleaseMaster___ctor(ServantFlagReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59711F2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__);
    byte_59711F2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    233,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__);
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

  if ( (byte_59711F0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__);
    byte_59711F0 = 1;
  }
  PK = (Il2CppObject *)ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&idx);
  return (ServantFlagReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_3F157EC *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__);
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

  if ( (byte_59711F1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__);
    byte_59711F1 = 1;
  }
  PK = (Il2CppObject *)ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&flagId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__);
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
  if ( (byte_59711F4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59711F4 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
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
    sub_2213CDC(Instance, v7);
  return UserServantCollectionEntity__HasFlag(entity, 1 << v4, 0);
}


bool ServantFlagReleaseMaster__isSecretTreasureDevice(
        ServantFlagReleaseMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantFlagEntity_o *svtFlagEntity; // [xsp+8h] [xbp-8h] BYREF

  return ServantFlagReleaseMaster__isSecretTreasureDevice_49712440(this, svtId, &svtFlagEntity, v3);
}


bool ServantFlagReleaseMaster__isSecretTreasureDevice_49712440(
        ServantFlagReleaseMaster_o *this,
        int32_t svtId,
        ServantFlagEntity_o **svtFlagEntity,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  ServantFlagEntity_o *Entity; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_Dictionary_int__object__o *v17; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x23
  const MethodInfo_3E94214 **v19; // x19
  const MethodInfo_3F9C410 **v20; // x27
  _QWORD *v21; // x28
  int32_t v22; // w24
  Il2CppObject *v23; // x25
  int32_t monitor_high; // w26
  const MethodInfo_3E94214 **v25; // x20
  ServantFlagEntity_o *v26; // x19
  _QWORD *v27; // x21
  const MethodInfo_3F9C410 **v28; // x28
  System_Collections_Generic_List_object__o *v29; // x27
  Il2CppObject *v30; // x2
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  Il2CppClass *klass; // x8
  __int64 v38; // x9
  __int64 monitor_low; // x10
  void **v40; // x8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x24
  System_Collections_Generic_List_int__o *v42; // x23
  int v43; // w23
  Il2CppObject *Item; // x0
  __int64 v45; // x1
  __int128 v46; // q0
  int v47; // w29
  _BOOL8 v48; // x0
  __int64 v49; // x1
  int64_t v50; // x25
  int32_t v51; // w23
  int32_t klass_high; // w24
  char v54; // w20
  char v55; // w21
  Il2CppObject *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x1
  Il2CppObject *MasterData_object; // x22
  NetworkManager_c *v60; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v62; // x1
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  MissionNaviTransitionBoardItem_o *v69; // [xsp+8h] [xbp-D8h]
  int32_t svtIda; // [xsp+14h] [xbp-CCh]
  System_Collections_Generic_List_Enumerator_int__o v71; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v73; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_59711F3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantFlagReleaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantFlagReleaseEntity__get_Item__);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantFlagMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__getEntityList__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor___91653480);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59711F3 = 1;
  }
  memset(&v73, 0, sizeof(v73));
  memset(&v72, 0, sizeof(v72));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantFlagMaster___);
  if ( !Instance )
    goto LABEL_51;
  Entity = ServantFlagMaster__getEntity((ServantFlagMaster_o *)Instance, svtId, 1, v9);
  *svtFlagEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)svtFlagEntity, 0, v11, v12, v13, v14, v15, v16);
  if ( !Entity )
    return 0;
  svtIda = svtId;
  v69 = (MissionNaviTransitionBoardItem_o *)svtFlagEntity;
  v17 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v17,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_51;
  v19 = (const MethodInfo_3E94214 **)&Method_System_Collections_ObjectModel_Collection_ServantFlagReleaseEntity__get_Count__;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_ServantFlagReleaseEntity__get_Count__) >= 1 )
  {
    v20 = (const MethodInfo_3F9C410 **)&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__;
    v21 = &Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__;
    v22 = 0;
    while ( 1 )
    {
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   list,
                   v22,
                   (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_ServantFlagReleaseEntity__get_Item__);
      if ( !Instance )
        break;
      v23 = Instance;
      if ( LODWORD(Instance[1].klass) == Entity->fields.svtId && HIDWORD(Instance[1].klass) == Entity->fields.flagId )
      {
        if ( !v17 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                v17,
                HIDWORD(Instance[1].monitor),
                (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__) )
        {
          monitor_high = HIDWORD(v23[1].monitor);
          v25 = v19;
          v26 = Entity;
          v27 = v21;
          v28 = v20;
          v29 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v29,
            (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__);
          v30 = (Il2CppObject *)v29;
          v20 = v28;
          v21 = v27;
          Entity = v26;
          v19 = v25;
          System_Collections_Generic_Dictionary_int__object___set_Item(
            v17,
            monitor_high,
            v30,
            (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__);
        }
        Instance = System_Collections_Generic_Dictionary_int__object___get_Item(v17, HIDWORD(v23[1].monitor), *v20);
        if ( !Instance )
          break;
        klass = Instance[1].klass;
        v38 = *v21;
        ++HIDWORD(Instance[1].monitor);
        if ( !klass )
          break;
        monitor_low = SLODWORD(Instance[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            v23,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(*(_QWORD *)(v38 + 32) + 192LL) + 112LL));
        }
        else
        {
          v40 = &klass->_1.image + monitor_low;
          LODWORD(Instance[1].monitor) = monitor_low + 1;
          v40[4] = v23;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v40 + 4), (int32_t)v23, v31, v32, v33, v34, v35, v36);
        }
      }
      if ( ++v22 >= System_Collections_ObjectModel_Collection_object___get_Count(list, *v19) )
        goto LABEL_21;
    }
LABEL_51:
    sub_2213CDC(Instance, v8);
  }
LABEL_21:
  if ( !v17
    || System_Collections_Generic_Dictionary_int__object___get_Count(
         v17,
         (const MethodInfo_3F9C148 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__) < 1 )
  {
    return 0;
  }
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v17,
           (const MethodInfo_3F9C158 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__);
  v42 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_71723804(
    v42,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_4466B1C *)Method_System_Collections_Generic_List_int___ctor___91653480);
  if ( !v42 )
    goto LABEL_51;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    v42,
    (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v73 = v71;
  v43 = 0;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v73,
            (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      v54 = 0;
      v55 = 0;
      goto LABEL_50;
    }
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             v17,
             v73.fields._current,
             (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__);
    if ( !Item )
      sub_2213CDC(0, v45);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v71,
      (System_Collections_Generic_List_object__o *)Item,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__);
    v46 = *(_OWORD *)&v71.fields._list;
    v47 = v43;
    v71.fields._list = 0;
    *(_QWORD *)&v71.fields._index = &v72;
    *(_OWORD *)&v72.fields._list = v46;
    v72.fields._current = *(Il2CppObject **)&v71.fields._current;
    while ( 1 )
    {
      v48 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v72,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__);
      if ( !v48 )
        break;
      if ( !v72.fields._current )
        sub_2213CDC(v48, v49);
      v50 = SLODWORD(v72.fields._current[2].monitor);
      v51 = (int32_t)v72.fields._current[2].klass;
      klass_high = HIDWORD(v72.fields._current[2].klass);
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v49);
      v47 |= !CondType__IsOpen(v51, klass_high, v50, 0, 0, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v72,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__);
    v43 = 1;
  }
  while ( (v47 & 1) != 0 );
  v56 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v56 )
    sub_2213CDC(0, v57);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)v56,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v58);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v60 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v58);
    v60 = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    sub_2213CDC(v60, v58);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       v60->static_fields->userIdNumber,
                       svtIda,
                       0);
  if ( !EntityDefinitely )
    sub_2213CDC(0, v62);
  if ( UserServantCollectionEntity__HasFlag(EntityDefinitely, 1 << Entity->fields.flagId, 0) )
  {
    v55 = 0;
    v54 = 1;
  }
  else
  {
    v69->klass = (MissionNaviTransitionBoardItem_c *)Entity;
    sub_2213A04(v69, (int32_t)Entity, v63, v64, v65, v66, v67, v68);
    v54 = 1;
    v55 = 1;
  }
LABEL_50:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v73,
    (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v54 & v55;
}