void __fastcall ServantFlagReleaseMaster___ctor(ServantFlagReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67325 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__, method);
    byte_4B67325 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    229,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__);
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

  if ( (byte_4B67323 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4B67323 = 1;
  }
  PK = (Il2CppObject *)ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&idx);
  return (ServantFlagReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_31FDB1C *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__);
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

  if ( (byte_4B67324 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4B67324 = 1;
  }
  PK = (Il2CppObject *)ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&flagId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__);
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
  if ( (byte_4B67327 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B67327 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v9);
    byte_4B61717 = 1;
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
    sub_1BE4D28(Instance, v9);
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
  return ServantFlagReleaseMaster__isSecretTreasureDevice_40620880(this, svtId, &svtFlagEntity, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantFlagReleaseMaster__isSecretTreasureDevice_40620880(
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
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Collections_Generic_Dictionary_int__object__o *v44; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x23
  int32_t v46; // w24
  int64_t v47; // x25
  __int64 methodPtr_low; // x10
  int32_t v49; // w26
  System_Collections_Generic_List_object__o *v50; // x27
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
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
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  int32_t svtIda; // [xsp+14h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v90; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v91; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4B67326 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&CondType_TypeInfo, v8);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantFlagMaster___, v9);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__, v16);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo, v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v18);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__, v19);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v20);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__, v21);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__get_Current__, v22);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v23);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__, v24);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v25);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__, v26);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__, v27);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor___77109024, v28);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v29);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo, v30);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v31);
    sub_1BE4ACC(&ServantFlagReleaseEntity_TypeInfo, v32);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33);
    byte_4B67326 = 1;
  }
  memset(&v91, 0, sizeof(v91));
  memset(&v90, 0, sizeof(v90));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantFlagMaster___);
  if ( !Instance )
    goto LABEL_54;
  Entity = ServantFlagMaster__getEntity((ServantFlagMaster_o *)Instance, svtId, 1, v36);
  *svtFlagEntity = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)svtFlagEntity, 0LL, v38, v39, v40, v41, v42, v43);
  if ( !Entity )
    return 0;
  svtIda = svtId;
  v44 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v44,
    (const MethodInfo_324FE94 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_54;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
  {
    v46 = 0;
    while ( 1 )
    {
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   list,
                   v46,
                   (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v47 = (int64_t)Instance;
      methodPtr_low = LOBYTE(ServantFlagReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Instance->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (ServantFlagReleaseEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantFlagReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(Instance[1].klass) == Entity->fields.svtId && HIDWORD(Instance[1].klass) == Entity->fields.flagId )
      {
        if ( !v44 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                v44,
                HIDWORD(Instance[1].monitor),
                (const MethodInfo_3250A5C *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__) )
        {
          v49 = *(_DWORD *)(v47 + 28);
          v50 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v50,
            (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__);
          System_Collections_Generic_Dictionary_int__object___set_Item(
            v44,
            v49,
            (Il2CppObject *)v50,
            (const MethodInfo_3250854 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__);
        }
        Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                     v44,
                     *(_DWORD *)(v47 + 28),
                     (const MethodInfo_32507C8 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__);
        if ( !Instance )
          break;
        klass = Instance[1].klass;
        v58 = Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__;
        ++HIDWORD(Instance[1].monitor);
        if ( !klass )
          break;
        monitor_low = SLODWORD(Instance[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v47,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
        }
        else
        {
          v60 = &klass->_1.image + monitor_low;
          LODWORD(Instance[1].monitor) = monitor_low + 1;
          v60[4] = (void *)v47;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v60 + 4), v47, v51, v52, v53, v54, v55, v56);
        }
      }
      if ( ++v46 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      list,
                      (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_23;
    }
LABEL_54:
    sub_1BE4D28(Instance, v35);
  }
LABEL_23:
  if ( !v44
    || System_Collections_Generic_Dictionary_int__object___get_Count(
         v44,
         (const MethodInfo_3250518 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__) < 1 )
  {
    return 0;
  }
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v44,
           (const MethodInfo_3250528 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__);
  v62 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_56421076(
    v62,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_35CEAD4 *)Method_System_Collections_Generic_List_int___ctor___77109024);
  if ( !v62 )
    goto LABEL_54;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v89,
    v62,
    (const MethodInfo_35CFCD4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v63 = 0;
  v91 = v89;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v91,
            (const MethodInfo_335DC14 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      v73 = 0;
      v74 = 7;
      goto LABEL_53;
    }
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             v44,
             (int32_t)v91.fields._current,
             (const MethodInfo_32507C8 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__);
    if ( !Item )
      sub_1BE4D28(0LL, v65);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v89,
      (System_Collections_Generic_List_object__o *)Item,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__);
    v66 = v63;
    v90 = v89;
    while ( 1 )
    {
      v67 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v90,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__);
      if ( !v67 )
        break;
      if ( !v90.fields._current )
        sub_1BE4D28(v67, v68);
      v70 = (int32_t)v90.fields._current[2].klass;
      klass_high = HIDWORD(v90.fields._current[2].klass);
      v71 = SLODWORD(v90.fields._current[2].monitor);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      v66 |= !CondType__IsOpen(v70, klass_high, v71, 0, 0LL, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v90,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__);
    v63 = 1;
  }
  while ( (v66 & 1) != 0 );
  v75 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v75 )
    sub_1BE4D28(0LL, v76);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)v75,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v77);
    byte_4B61717 = 1;
  }
  v79 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v79 = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    sub_1BE4D28(v79, v77);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       v79->static_fields->userIdNumber,
                       svtIda,
                       0LL);
  if ( !EntityDefinitely )
    sub_1BE4D28(0LL, v81);
  if ( UserServantCollectionEntity__HasFlag(EntityDefinitely, 1 << Entity->fields.flagId, 0LL) )
  {
    v73 = 0;
  }
  else
  {
    *svtFlagEntity = Entity;
    sub_1BE4A70((PartyOrganizationUtility_o *)svtFlagEntity, (int64_t)Entity, v82, v83, v84, v85, v86, v87);
    v73 = 1;
  }
  v74 = 14;
LABEL_53:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v91,
    (const MethodInfo_335DC10 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v73 & (v74 == 14);
}