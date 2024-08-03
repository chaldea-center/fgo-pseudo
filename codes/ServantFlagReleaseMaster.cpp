void __fastcall ServantFlagReleaseMaster___ctor(ServantFlagReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FCB1B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__, method);
    byte_49FCB1B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    225,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__);
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

  if ( (byte_49FCB19 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_49FCB19 = 1;
  }
  PK = (Il2CppObject *)ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&idx);
  return (ServantFlagReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_30D41FC *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__);
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

  if ( (byte_49FCB1A & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__,
      entity);
    byte_49FCB1A = 1;
  }
  PK = (Il2CppObject *)ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&flagId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__);
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
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = flagId;
  if ( (byte_49FCB1D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FCB1D = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    sub_1B64324(Instance);
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
  return ServantFlagReleaseMaster__isSecretTreasureDevice_39344744(this, svtId, &svtFlagEntity, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantFlagReleaseMaster__isSecretTreasureDevice_39344744(
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
  const MethodInfo *v35; // x3
  ServantFlagEntity_o *Entity; // x21
  int32_t v37; // w2
  int32_t v38; // w3
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_Dictionary_int__object__o *v41; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x23
  int32_t v43; // w24
  Il2CppObject *v44; // x25
  __int64 methodPtr_low; // x10
  __int64 v46; // x1
  __int64 v47; // x2
  int32_t monitor_high; // w26
  System_Collections_Generic_List_object__o *v49; // x27
  int32_t v50; // w2
  int32_t v51; // w3
  Il2CppClass *klass; // x8
  _QWORD *v53; // x9
  __int64 monitor_low; // x10
  void **v55; // x8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x24
  __int64 v57; // x1
  __int64 v58; // x2
  System_Collections_Generic_List_int__o *v59; // x23
  int v60; // w23
  Il2CppObject *Item; // x0
  int v62; // w26
  _BOOL8 v63; // x0
  int32_t klass_high; // w23
  int32_t v65; // w25
  int64_t v66; // x24
  char v68; // w19
  int v69; // w23
  Il2CppObject *v70; // x0
  Il2CppObject *MasterData_object; // x22
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  int32_t svtIda; // [xsp+Ch] [xbp-C4h]
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_49FCB1C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&CondType_TypeInfo, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantFlagMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__, v16);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__get_Current__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657200, v28);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v29);
    sub_1B640C8(&System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo, v30);
    sub_1B640C8(&NetworkManager_TypeInfo, v31);
    sub_1B640C8(&ServantFlagReleaseEntity_TypeInfo, v32);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33);
    byte_49FCB1C = 1;
  }
  memset(&v79, 0, sizeof(v79));
  memset(&v78, 0, sizeof(v78));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantFlagMaster___);
  if ( !Instance )
    goto LABEL_50;
  Entity = ServantFlagMaster__getEntity((ServantFlagMaster_o *)Instance, svtId, 1, v35);
  *svtFlagEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)svtFlagEntity, 0, v37, v38);
  if ( !Entity )
    return 0;
  svtIda = svtId;
  v41 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo,
                                                                  v39,
                                                                  v40);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v41,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_50;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
  {
    v43 = 0;
    while ( 1 )
    {
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   list,
                   v43,
                   (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v44 = Instance;
      methodPtr_low = LOBYTE(ServantFlagReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Instance->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (ServantFlagReleaseEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantFlagReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(Instance[1].klass) == Entity->fields.svtId && HIDWORD(Instance[1].klass) == Entity->fields.flagId )
      {
        if ( !v41 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                v41,
                HIDWORD(Instance[1].monitor),
                (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__) )
        {
          monitor_high = HIDWORD(v44[1].monitor);
          v49 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                               System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo,
                                                               v46,
                                                               v47);
          System_Collections_Generic_List_object____ctor(
            v49,
            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__);
          System_Collections_Generic_Dictionary_int__object___set_Item(
            v41,
            monitor_high,
            (Il2CppObject *)v49,
            (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__);
        }
        Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                     v41,
                     HIDWORD(v44[1].monitor),
                     (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__);
        if ( !Instance )
          break;
        klass = Instance[1].klass;
        v53 = Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__;
        ++HIDWORD(Instance[1].monitor);
        if ( !klass )
          break;
        monitor_low = SLODWORD(Instance[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            v44,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
        }
        else
        {
          v55 = &klass->_1.image + monitor_low;
          LODWORD(Instance[1].monitor) = monitor_low + 1;
          v55[4] = v44;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v55 + 4), (int32_t)v44, v50, v51);
        }
      }
      if ( ++v43 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      list,
                      (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_23;
    }
LABEL_50:
    sub_1B64324(Instance);
  }
LABEL_23:
  if ( !v41
    || System_Collections_Generic_Dictionary_int__object___get_Count(
         v41,
         (const MethodInfo_3123634 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__) < 1 )
  {
    return 0;
  }
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v41,
           (const MethodInfo_3123644 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__);
  v59 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v57, v58);
  System_Collections_Generic_List_int____ctor_55113648(
    v59,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
  if ( !v59 )
    goto LABEL_50;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v77,
    v59,
    (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v60 = 0;
  v79 = v77;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v79,
            (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      v68 = 0;
      v69 = 7;
      goto LABEL_49;
    }
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             v41,
             (int32_t)v79.fields._current,
             (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__);
    if ( !Item )
      sub_1B64324(0LL);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v77,
      (System_Collections_Generic_List_object__o *)Item,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__);
    v62 = v60;
    v78 = v77;
    while ( 1 )
    {
      v63 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v78,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__);
      if ( !v63 )
        break;
      if ( !v78.fields._current )
        sub_1B64324(v63);
      v65 = (int32_t)v78.fields._current[2].klass;
      klass_high = HIDWORD(v78.fields._current[2].klass);
      v66 = SLODWORD(v78.fields._current[2].monitor);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v62 |= !CondType__IsOpen(v65, klass_high, v66, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v78,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__);
    v60 = 1;
  }
  while ( (v62 & 1) != 0 );
  v70 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v70 )
    sub_1B64324(0LL);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)v70,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    sub_1B64324(UserId);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       UserId,
                       svtIda,
                       0LL);
  if ( !EntityDefinitely )
    sub_1B64324(0LL);
  if ( UserServantCollectionEntity__HasFlag(EntityDefinitely, 1 << Entity->fields.flagId, 0LL) )
  {
    v68 = 0;
  }
  else
  {
    *svtFlagEntity = Entity;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)svtFlagEntity, (int32_t)Entity, v74, v75);
    v68 = 1;
  }
  v69 = 14;
LABEL_49:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v79,
    (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v68 & (v69 == 14);
}