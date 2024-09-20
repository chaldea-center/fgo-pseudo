void __fastcall ServantFlagReleaseMaster___ctor(ServantFlagReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B88A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__);
    byte_4A5B88A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    225,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__);
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

  if ( (byte_4A5B888 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__);
    byte_4A5B888 = 1;
  }
  PK = (Il2CppObject *)ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&idx);
  return (ServantFlagReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_311DC8C *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__);
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

  if ( (byte_4A5B889 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__);
    byte_4A5B889 = 1;
  }
  PK = (Il2CppObject *)ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&flagId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__);
}


bool __fastcall ServantFlagReleaseMaster__checkTresureDeviceEffectFlag(
        ServantFlagReleaseMaster_o *this,
        int32_t svtId,
        int32_t flagId,
        const MethodInfo *method)
{
  char v4; // w19
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = flagId;
  if ( (byte_4A5B88C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B88C = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  if ( !UserServantCollectionMaster__TryGetEntity(
          (UserServantCollectionMaster_o *)MasterData_object,
          &entity,
          (int64_t)Instance,
          svtId,
          0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_12:
    sub_1B8880C(Instance, v7);
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
  return ServantFlagReleaseMaster__isSecretTreasureDevice_39674080(this, svtId, &svtFlagEntity, v3);
}


bool __fastcall ServantFlagReleaseMaster__isSecretTreasureDevice_39674080(
        ServantFlagReleaseMaster_o *this,
        int32_t svtId,
        ServantFlagEntity_o **svtFlagEntity,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  ServantFlagEntity_o *Entity; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_Dictionary_int__object__o *v13; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x23
  int32_t v15; // w24
  Il2CppObject *v16; // x25
  __int64 methodPtr_low; // x10
  int32_t monitor_high; // w26
  System_Collections_Generic_List_object__o *v19; // x27
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppClass *klass; // x8
  _QWORD *v23; // x9
  __int64 monitor_low; // x10
  void **v25; // x8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x24
  System_Collections_Generic_List_int__o *v27; // x23
  int v28; // w23
  Il2CppObject *Item; // x0
  __int64 v30; // x1
  int v31; // w26
  _BOOL8 v32; // x0
  __int64 v33; // x1
  int32_t klass_high; // w23
  int32_t v35; // w25
  int64_t v36; // x24
  char v38; // w19
  int v39; // w23
  Il2CppObject *v40; // x0
  __int64 v41; // x1
  Il2CppObject *MasterData_object; // x22
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t svtIda; // [xsp+Ch] [xbp-C4h]
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4A5B88B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantFlagMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor___76036512);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&ServantFlagReleaseEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B88B = 1;
  }
  memset(&v51, 0, sizeof(v51));
  memset(&v50, 0, sizeof(v50));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantFlagMaster___);
  if ( !Instance )
    goto LABEL_50;
  Entity = ServantFlagMaster__getEntity((ServantFlagMaster_o *)Instance, svtId, 1, v9);
  *svtFlagEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)svtFlagEntity, 0, v11, v12);
  if ( !Entity )
    return 0;
  svtIda = svtId;
  v13 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v13,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_50;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   list,
                   v15,
                   (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v16 = Instance;
      methodPtr_low = LOBYTE(ServantFlagReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Instance->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (ServantFlagReleaseEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantFlagReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(Instance[1].klass) == Entity->fields.svtId && HIDWORD(Instance[1].klass) == Entity->fields.flagId )
      {
        if ( !v13 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                v13,
                HIDWORD(Instance[1].monitor),
                (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__) )
        {
          monitor_high = HIDWORD(v16[1].monitor);
          v19 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v19,
            (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__);
          System_Collections_Generic_Dictionary_int__object___set_Item(
            v13,
            monitor_high,
            (Il2CppObject *)v19,
            (const MethodInfo_316D944 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__);
        }
        Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                     v13,
                     HIDWORD(v16[1].monitor),
                     (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__);
        if ( !Instance )
          break;
        klass = Instance[1].klass;
        v23 = Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__;
        ++HIDWORD(Instance[1].monitor);
        if ( !klass )
          break;
        monitor_low = SLODWORD(Instance[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            v16,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &klass->_1.image + monitor_low;
          LODWORD(Instance[1].monitor) = monitor_low + 1;
          v25[4] = v16;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v16, v20, v21);
        }
      }
      if ( ++v15 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      list,
                      (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_23;
    }
LABEL_50:
    sub_1B8880C(Instance, v8);
  }
LABEL_23:
  if ( !v13
    || System_Collections_Generic_Dictionary_int__object___get_Count(
         v13,
         (const MethodInfo_316D608 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__) < 1 )
  {
    return 0;
  }
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v13,
           (const MethodInfo_316D618 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__);
  v27 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_55443684(
    v27,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_34E00E4 *)Method_System_Collections_Generic_List_int___ctor___76036512);
  if ( !v27 )
    goto LABEL_50;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    v27,
    (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v28 = 0;
  v51 = v49;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v51,
            (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      v38 = 0;
      v39 = 7;
      goto LABEL_49;
    }
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             v13,
             (int32_t)v51.fields._current,
             (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__);
    if ( !Item )
      sub_1B8880C(0LL, v30);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v49,
      (System_Collections_Generic_List_object__o *)Item,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__);
    v31 = v28;
    v50 = v49;
    while ( 1 )
    {
      v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v50,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__);
      if ( !v32 )
        break;
      if ( !v50.fields._current )
        sub_1B8880C(v32, v33);
      v35 = (int32_t)v50.fields._current[2].klass;
      klass_high = HIDWORD(v50.fields._current[2].klass);
      v36 = SLODWORD(v50.fields._current[2].monitor);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v31 |= !CondType__IsOpen(v35, klass_high, v36, 0, 0LL, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v50,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__);
    v28 = 1;
  }
  while ( (v31 & 1) != 0 );
  v40 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v40 )
    sub_1B8880C(0LL, v41);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)v40,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    sub_1B8880C(UserId, UserId);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       UserId,
                       svtIda,
                       0LL);
  if ( !EntityDefinitely )
    sub_1B8880C(0LL, v45);
  if ( UserServantCollectionEntity__HasFlag(EntityDefinitely, 1 << Entity->fields.flagId, 0LL) )
  {
    v38 = 0;
  }
  else
  {
    *svtFlagEntity = Entity;
    sub_1B88554((ServantStatusBattleListViewItem_o *)svtFlagEntity, (int32_t)Entity, v46, v47);
    v38 = 1;
  }
  v39 = 14;
LABEL_49:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v51,
    (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v38 & (v39 == 14);
}