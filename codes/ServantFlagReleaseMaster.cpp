void __fastcall ServantFlagReleaseMaster___ctor(ServantFlagReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1693D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__, method, v2);
    byte_4B1693D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    225,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__);
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

  if ( (byte_4B1693B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&flagId);
    byte_4B1693B = 1;
  }
  PK = (Il2CppObject *)ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&idx);
  return (ServantFlagReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__);
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

  if ( (byte_4B1693C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&svtId);
    byte_4B1693C = 1;
  }
  PK = (Il2CppObject *)ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&flagId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = flagId;
  if ( (byte_4B1693F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId, *(_QWORD *)&flagId);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B1693F = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
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
    sub_1BCAA3C(Instance, v11);
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
  return ServantFlagReleaseMaster__isSecretTreasureDevice_40400676(this, svtId, &svtFlagEntity, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantFlagReleaseMaster__isSecretTreasureDevice_40400676(
        ServantFlagReleaseMaster_o *this,
        int32_t svtId,
        ServantFlagEntity_o **svtFlagEntity,
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
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  Il2CppObject *Instance; // x0
  __int64 v62; // x1
  const MethodInfo *v63; // x3
  ServantFlagEntity_o *Entity; // x21
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  System_Collections_Generic_Dictionary_int__object__o *v74; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x23
  int32_t v76; // w24
  int64_t v77; // x25
  __int64 methodPtr_low; // x10
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  int32_t v82; // w26
  System_Collections_Generic_List_object__o *v83; // x27
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  Il2CppClass *klass; // x8
  _QWORD *v91; // x9
  __int64 monitor_low; // x10
  void **v93; // x8
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x24
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  System_Collections_Generic_List_int__o *v98; // x23
  int v99; // w23
  Il2CppObject *Item; // x0
  __int64 v101; // x1
  int v102; // w26
  _BOOL8 v103; // x0
  __int64 v104; // x1
  int32_t klass_high; // w23
  int32_t v106; // w25
  int64_t v107; // x24
  char v109; // w19
  int v110; // w23
  Il2CppObject *v111; // x0
  __int64 v112; // x1
  __int64 v113; // x1
  Il2CppObject *MasterData_object; // x22
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v117; // x1
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  int32_t svtIda; // [xsp+Ch] [xbp-C4h]
  System_Collections_Generic_List_Enumerator_object__o v125; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v126; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v127; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4B1693E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&svtId,
      svtFlagEntity);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&CondType_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantFlagMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v13, v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__,
      v15,
      v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__, v17, v18);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__,
      v19,
      v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__get_Current__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v39, v40);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__, v41, v42);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v43, v44);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__, v45, v46);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__, v47, v48);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v49, v50);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v51, v52);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo, v53, v54);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v55, v56);
    sub_1BCA7E0(&ServantFlagReleaseEntity_TypeInfo, v57, v58);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v59, v60);
    byte_4B1693E = 1;
  }
  memset(&v127, 0, sizeof(v127));
  memset(&v126, 0, sizeof(v126));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantFlagMaster___);
  if ( !Instance )
    goto LABEL_50;
  Entity = ServantFlagMaster__getEntity((ServantFlagMaster_o *)Instance, svtId, 1, v63);
  *svtFlagEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)svtFlagEntity, 0LL, v65, v66, v67, v68, v69, v70);
  if ( !Entity )
    return 0;
  svtIda = svtId;
  v74 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo,
                                                                  v71,
                                                                  v72,
                                                                  v73);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v74,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_50;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
  {
    v76 = 0;
    while ( 1 )
    {
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   list,
                   v76,
                   (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v77 = (int64_t)Instance;
      methodPtr_low = LOBYTE(ServantFlagReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Instance->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
        || (ServantFlagReleaseEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantFlagReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(Instance[1].klass) == Entity->fields.svtId && HIDWORD(Instance[1].klass) == Entity->fields.flagId )
      {
        if ( !v74 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                v74,
                HIDWORD(Instance[1].monitor),
                (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__) )
        {
          v82 = *(_DWORD *)(v77 + 28);
          v83 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo,
                                                               v79,
                                                               v80,
                                                               v81);
          System_Collections_Generic_List_object____ctor(
            v83,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__);
          System_Collections_Generic_Dictionary_int__object___set_Item(
            v74,
            v82,
            (Il2CppObject *)v83,
            (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__);
        }
        Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                     v74,
                     *(_DWORD *)(v77 + 28),
                     (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__);
        if ( !Instance )
          break;
        klass = Instance[1].klass;
        v91 = Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__;
        ++HIDWORD(Instance[1].monitor);
        if ( !klass )
          break;
        monitor_low = SLODWORD(Instance[1].monitor);
        if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v77,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
        }
        else
        {
          v93 = &klass->_1.image + monitor_low;
          LODWORD(Instance[1].monitor) = monitor_low + 1;
          v93[4] = (void *)v77;
          sub_1BCA784((PartyOrganizationUtility_o *)(v93 + 4), v77, v84, v85, v86, v87, v88, v89);
        }
      }
      if ( ++v76 >= System_Collections_ObjectModel_Collection_object___get_Count(
                      list,
                      (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
        goto LABEL_23;
    }
LABEL_50:
    sub_1BCAA3C(Instance, v62);
  }
LABEL_23:
  if ( !v74
    || System_Collections_Generic_Dictionary_int__object___get_Count(
         v74,
         (const MethodInfo_3205B94 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__) < 1 )
  {
    return 0;
  }
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           v74,
           (const MethodInfo_3205BA4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__);
  v98 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v95,
                                                    v96,
                                                    v97);
  System_Collections_Generic_List_int____ctor_56116492(
    v98,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
  if ( !v98 )
    goto LABEL_50;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v125,
    v98,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v99 = 0;
  v127 = v125;
  do
  {
    if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v127,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      v109 = 0;
      v110 = 7;
      goto LABEL_49;
    }
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             v74,
             (int32_t)v127.fields._current,
             (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__);
    if ( !Item )
      sub_1BCAA3C(0LL, v101);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v125,
      (System_Collections_Generic_List_object__o *)Item,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__);
    v102 = v99;
    v126 = v125;
    while ( 1 )
    {
      v103 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v126,
               (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__);
      if ( !v103 )
        break;
      if ( !v126.fields._current )
        sub_1BCAA3C(v103, v104);
      v106 = (int32_t)v126.fields._current[2].klass;
      klass_high = HIDWORD(v126.fields._current[2].klass);
      v107 = SLODWORD(v126.fields._current[2].monitor);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v104);
      v102 |= !CondType__IsOpen(v106, klass_high, v107, 0, 0LL, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v126,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__);
    v99 = 1;
  }
  while ( (v102 & 1) != 0 );
  v111 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v111 )
    sub_1BCAA3C(0LL, v112);
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)v111,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v113);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    sub_1BCAA3C(UserId, UserId);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)MasterData_object,
                       UserId,
                       svtIda,
                       0LL);
  if ( !EntityDefinitely )
    sub_1BCAA3C(0LL, v117);
  if ( UserServantCollectionEntity__HasFlag(EntityDefinitely, 1 << Entity->fields.flagId, 0LL) )
  {
    v109 = 0;
  }
  else
  {
    *svtFlagEntity = Entity;
    sub_1BCA784((PartyOrganizationUtility_o *)svtFlagEntity, (int64_t)Entity, v118, v119, v120, v121, v122, v123);
    v109 = 1;
  }
  v110 = 14;
LABEL_49:
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v127,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v109 & (v110 == 14);
}