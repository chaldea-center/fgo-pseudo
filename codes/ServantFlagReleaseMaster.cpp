void __fastcall ServantFlagReleaseMaster___ctor(ServantFlagReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E65C & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__, method);
    byte_4A2E65C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    225,
    (const MethodInfo_30FFA98 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__);
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

  if ( (byte_4A2E65A & 1) == 0 )
  {
    sub_1B761C0(
      &Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4A2E65A = 1;
  }
  PK = (Il2CppObject *)ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&idx);
  return (ServantFlagReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_30FFAD8 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__);
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

  if ( (byte_4A2E65B & 1) == 0 )
  {
    sub_1B761C0(
      &Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4A2E65B = 1;
  }
  PK = (Il2CppObject *)ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&flagId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30FFB28 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__);
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
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = flagId;
  if ( (byte_4A2E65E & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_1B761C0(&NetworkManager_TypeInfo, v6);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A2E65E = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    sub_1B7641C(Instance, v9);
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
  return ServantFlagReleaseMaster__isSecretTreasureDevice_39489320(this, svtId, &svtFlagEntity, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantFlagReleaseMaster__isSecretTreasureDevice_39489320(
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
  ServantFlagEntity_o *Entity; // x21
  int32_t v38; // w2
  int32_t v39; // w3
  System_Collections_Generic_Dictionary_int__object__o *v40; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x23
  int32_t v42; // w24
  Il2CppObject *v43; // x25
  __int64 methodPtr_low; // x10
  int32_t monitor_high; // w26
  System_Collections_Generic_List_object__o *v46; // x27
  int32_t v47; // w2
  int32_t v48; // w3
  Il2CppClass *klass; // x8
  _QWORD *v50; // x9
  __int64 monitor_low; // x10
  void **v52; // x8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x24
  System_Collections_Generic_List_int__o *v54; // x23
  int v55; // w23
  Il2CppObject *Item; // x0
  __int64 v57; // x1
  int v58; // w26
  _BOOL8 v59; // x0
  __int64 v60; // x1
  int32_t klass_high; // w23
  int32_t v62; // w25
  int64_t v63; // x24
  char v65; // w19
  int v66; // w23
  Il2CppObject *v67; // x0
  __int64 v68; // x1
  Il2CppObject *MasterData_object; // x22
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v72; // x1
  int32_t v73; // w2
  int32_t v74; // w3
  int32_t svtIda; // [xsp+Ch] [xbp-C4h]
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4A2E65D & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B761C0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B761C0(&CondType_TypeInfo, v8);
    sub_1B761C0(&Method_DataManager_GetMasterData_ServantFlagMaster___, v9);
    sub_1B761C0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__, v12);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__, v13);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__, v14);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__, v15);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__, v16);
    sub_1B761C0(&System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo, v17);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v18);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__, v19);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v20);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__, v21);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__get_Current__, v22);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v23);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__, v24);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v25);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__, v26);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__, v27);
    sub_1B761C0(&Method_System_Collections_Generic_List_int___ctor___75854368, v28);
    sub_1B761C0(&System_Collections_Generic_List_int__TypeInfo, v29);
    sub_1B761C0(&System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo, v30);
    sub_1B761C0(&NetworkManager_TypeInfo, v31);
    sub_1B761C0(&ServantFlagReleaseEntity_TypeInfo, v32);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33);
    byte_4A2E65D = 1;
  }
  memset(&v78, 0, sizeof(v78));
  memset(&v77, 0, sizeof(v77));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ServantFlagMaster___);
  if ( !Instance )
    goto LABEL_50;
  Entity = ServantFlagMaster__getEntity((ServantFlagMaster_o *)Instance, svtId, 1, v36);
  *svtFlagEntity = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)svtFlagEntity, 0, v38, v39);
  if ( !Entity )
    return 0;
  svtIda = svtId;
  v40 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B7640C(System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v40,
    (const MethodInfo_314EEA0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_50;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
  {
    v42 = 0;
    while ( 1 )
    {
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   list,
                   v42,
                   (const MethodInfo_309CB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v43 = Instance;
      methodPtr_low = LOBYTE(ServantFlagReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Instance->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (ServantFlagReleaseEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantFlagReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(Instance[1].klass) == Entity->fields.svtId && HIDWORD(Instance[1].klass) == Entity->fields.flagId )
      {
        if ( !v40 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                v40,
                HIDWORD(Instance[1].monitor),
                (const MethodInfo_314FA68 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__) )
        {
          monitor_high = HIDWORD(v43[1].monitor);
          v46 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v46,
            (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__);
          System_Collections_Generic_Dictionary_int__object___set_Item(
            v40,
            monitor_high,
            (Il2CppObject *)v46,
            (const MethodInfo_314F860 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__);
        }
        Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                     v40,
                     HIDWORD(v43[1].monitor),
                     (const MethodInfo_314F7D4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__);
        if ( !Instance )
          break;
        klass = Instance[1].klass;
        v50 = Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__;
        ++HIDWORD(Instance[1].monitor);
        if ( !klass )
          break;
        monitor_low = SLODWORD(Instance[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            v43,
            *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
        }
        else
        {
          v52 = &klass->_1.image + monitor_low;
          LODWORD(Instance[1].monitor) = monitor_low + 1;
          v52[4] = v43;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v52 + 4), (int32_t)v43, v47, v48);
        }
      }
      if ( ++v42 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      list,
                      (const MethodInfo_309CAC8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_23;
    }
LABEL_50:
    sub_1B7641C(Instance, v35);
  }
LABEL_23:
  if ( !v40
    || System_Collections_Generic_Dictionary_int__object___get_Count(
         v40,
         (const MethodInfo_314F524 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__) < 1 )
  {
    return 0;
  }
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v40,
           (const MethodInfo_314F534 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__);
  v54 = (System_Collections_Generic_List_int__o *)sub_1B7640C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_55287428(
    v54,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_34B9E84 *)Method_System_Collections_Generic_List_int___ctor___75854368);
  if ( !v54 )
    goto LABEL_50;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v76,
    v54,
    (const MethodInfo_34BB084 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v55 = 0;
  v78 = v76;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v78,
            (const MethodInfo_325280C *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      v65 = 0;
      v66 = 7;
      goto LABEL_49;
    }
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             v40,
             (int32_t)v78.fields._current,
             (const MethodInfo_314F7D4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__);
    if ( !Item )
      sub_1B7641C(0LL, v57);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v76,
      (System_Collections_Generic_List_object__o *)Item,
      (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__);
    v58 = v55;
    v77 = v76;
    while ( 1 )
    {
      v59 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v77,
              (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__);
      if ( !v59 )
        break;
      if ( !v77.fields._current )
        sub_1B7641C(v59, v60);
      v62 = (int32_t)v77.fields._current[2].klass;
      klass_high = HIDWORD(v77.fields._current[2].klass);
      v63 = SLODWORD(v77.fields._current[2].monitor);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v58 |= !CondType__IsOpen(v62, klass_high, v63, 0, 0LL, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v77,
      (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__);
    v55 = 1;
  }
  while ( (v58 & 1) != 0 );
  v67 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v67 )
    sub_1B7641C(0LL, v68);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)v67,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    sub_1B7641C(UserId, UserId);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       UserId,
                       svtIda,
                       0LL);
  if ( !EntityDefinitely )
    sub_1B7641C(0LL, v72);
  if ( UserServantCollectionEntity__HasFlag(EntityDefinitely, 1 << Entity->fields.flagId, 0LL) )
  {
    v65 = 0;
  }
  else
  {
    *svtFlagEntity = Entity;
    sub_1B76164((ServantStatusBattleListViewItem_o *)svtFlagEntity, (int32_t)Entity, v73, v74);
    v65 = 1;
  }
  v66 = 14;
LABEL_49:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v78,
    (const MethodInfo_3252808 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v65 & (v66 == 14);
}