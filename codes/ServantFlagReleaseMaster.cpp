void __fastcall ServantFlagReleaseMaster___ctor(ServantFlagReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FC756 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__, method);
    byte_40FC756 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    223,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantFlagReleaseEntity_o *__fastcall ServantFlagReleaseMaster__GetEntity(
        ServantFlagReleaseMaster_o *this,
        int32_t svtId,
        int32_t flagId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FC754 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_40FC754 = 1;
  }
  PK = ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&idx);
  return (ServantFlagReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_266F7D8 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__);
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
  System_String_o *PK; // x2

  if ( (byte_40FC755 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__,
      entity);
    byte_40FC755 = 1;
  }
  PK = ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&flagId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__);
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
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v4 = flagId;
  if ( (byte_40FC758 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FC758 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( !UserServantCollectionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, svtId, 0LL) )
    return 0;
  if ( !entity )
LABEL_13:
    sub_B170D4();
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
  return ServantFlagReleaseMaster__isSecretTreasureDevice_29589160(this, svtId, &svtFlagEntity, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantFlagReleaseMaster__isSecretTreasureDevice_29589160(
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
  WebViewManager_o *Instance; // x0
  ServantFlagMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v36; // x3
  ServantFlagEntity_o *Entity; // x19
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v48; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x23
  ServantFlagReleaseEntity_c **v50; // x27
  const MethodInfo_2DE92F8 **v51; // x28
  int32_t v52; // w24
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v54; // x25
  __int64 v55; // x10
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  int32_t eventId; // w19
  const MethodInfo_2DE92F8 **v61; // x21
  ServantFlagReleaseEntity_c **v62; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v63; // x27
  WarBoardAIRoute_RouteData_o *v64; // x2
  WarBoardEvalValueSquare_EvalValueSquare_o *v65; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x24
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  System_Collections_Generic_List_int__o *v71; // x23
  int v72; // w26
  int v73; // w23
  WarBoardEvalValueSquare_EvalValueSquare_o *v74; // x0
  int v75; // w27
  int32_t klass_high; // w23
  int32_t klass; // w25
  int64_t monitor_low; // x24
  int v79; // w28
  int v80; // w8
  int v81; // w8
  WebViewManager_o *v82; // x0
  UserServantCollectionMaster_o *v83; // x22
  int64_t UserId; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  int v92; // w28
  int v93; // w9
  int32_t svtIda; // [xsp+14h] [xbp-CCh]
  ServantFlagEntity_o *v96; // [xsp+18h] [xbp-C8h]
  _BYTE v97[40]; // [xsp+20h] [xbp-C0h] BYREF
  int v98; // [xsp+48h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v99; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v100; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_40FC757 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&CondType_TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantFlagMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__, v16);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__get_Current__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__, v28);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v29);
    sub_B16FFC(&System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo, v30);
    sub_B16FFC(&NetworkManager_TypeInfo, v31);
    sub_B16FFC(&ServantFlagReleaseEntity_TypeInfo, v32);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33);
    byte_40FC757 = 1;
  }
  memset(&v100, 0, sizeof(v100));
  memset(&v99, 0, sizeof(v99));
  v98 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  MasterData_WarQuestSelectionMaster = (ServantFlagMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantFlagMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_57;
  Entity = ServantFlagMaster__getEntity(MasterData_WarQuestSelectionMaster, svtId, 1, v36);
  *svtFlagEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)svtFlagEntity, 0LL, v38, v39, v40, v41, v42, v43);
  v96 = Entity;
  if ( Entity )
  {
    svtIda = svtId;
    v48 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                     System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo,
                                                                                                     v44,
                                                                                                     v45,
                                                                                                     v46,
                                                                                                     v47);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v48,
      (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__);
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_57;
    if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           list,
           (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
    {
      v50 = &ServantFlagReleaseEntity_TypeInfo;
      v51 = (const MethodInfo_2DE92F8 **)&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__;
      v52 = 0;
      while ( 1 )
      {
        Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 list,
                 v52,
                 (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !Item )
          break;
        v54 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v55 = *(&(*v50)->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v55
          || (ServantFlagReleaseEntity_c *)Item->klass->_2.typeHierarchy[v55 - 1] != *v50 )
        {
          break;
        }
        if ( LODWORD(Item[1].klass) == v96->fields.svtId && HIDWORD(Item[1].klass) == v96->fields.flagId )
        {
          if ( !v48 )
            break;
          if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                  (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v48,
                  HIDWORD(Item[1].monitor),
                  (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__) )
          {
            eventId = v54->fields.eventId;
            v61 = v51;
            v62 = v50;
            v63 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo, v56, v57, v58, v59);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v63,
              (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__);
            v64 = (WarBoardAIRoute_RouteData_o *)v63;
            v50 = v62;
            v51 = v61;
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v48,
              eventId,
              v64,
              (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__);
          }
          v65 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                  v48,
                  v54->fields.eventId,
                  *v51);
          if ( !v65 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v65,
            v54,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__);
        }
        if ( ++v52 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                        list,
                        (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
          goto LABEL_20;
      }
LABEL_57:
      sub_B170D4();
    }
LABEL_20:
    if ( !v48
      || System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
           v48,
           (const MethodInfo_2DE8FB8 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__) < 1 )
    {
      goto LABEL_53;
    }
    Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
             (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)v48,
             (const MethodInfo_2DE8FC8 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__);
    v71 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v67,
                                                      v68,
                                                      v69,
                                                      v70);
    System_Collections_Generic_List_int____ctor_49346956(
      v71,
      (System_Collections_Generic_IEnumerable_T__o *)Keys,
      (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
    if ( !v71 )
      goto LABEL_57;
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v97,
      v71,
      (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v72 = 0;
    v73 = 0;
    v100 = *(System_Collections_Generic_List_Enumerator_int__o *)v97;
    do
    {
      if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v100,
              (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        LOBYTE(Entity) = 0;
        v81 = 374;
        v79 = v72;
        goto LABEL_50;
      }
      v74 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
              v48,
              v100.fields.current,
              (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__);
      if ( !v74 )
        sub_B170D4();
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v97,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v74,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__);
      v75 = v73;
      v99 = *(System_Collections_Generic_List_Enumerator_T__o *)v97;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v99,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__) )
      {
        if ( !v99.fields.current )
          sub_B170D4();
        klass = (int32_t)v99.fields.current[2].klass;
        klass_high = HIDWORD(v99.fields.current[2].klass);
        monitor_low = SLODWORD(v99.fields.current[2].monitor);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v75 |= !CondType__IsOpen(klass, klass_high, monitor_low, 0, 0LL);
      }
      *(_DWORD *)&v97[4 * v72 + 24] = 290;
      v79 = ++v98;
      v72 = v98;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v99,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__);
      if ( v72 )
      {
        v80 = v72 - 1;
        if ( *(_DWORD *)&v97[4 * v72 + 20] == 290 )
        {
          v79 = --v72;
          v98 = v80;
        }
      }
      v73 = 1;
    }
    while ( (v75 & 1) != 0 );
    v82 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v82 )
      sub_B170D4();
    v83 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)v82,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !v83 )
      sub_B170D4();
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v83, UserId, svtIda, 0LL);
    if ( !EntityDefinitely )
      sub_B170D4();
    if ( UserServantCollectionEntity__HasFlag(EntityDefinitely, 1 << v96->fields.flagId, 0LL) )
    {
      LOBYTE(Entity) = 0;
    }
    else
    {
      *svtFlagEntity = v96;
      sub_B16F98(
        (BattleServantConfConponent_o *)svtFlagEntity,
        (System_Int32_array **)v96,
        v86,
        v87,
        v88,
        v89,
        v90,
        v91);
      LOBYTE(Entity) = 1;
    }
    v81 = 376;
LABEL_50:
    *(_DWORD *)&v97[4 * v79 + 24] = v81;
    v92 = ++v98;
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v100,
      (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    if ( !v92 )
      goto LABEL_53;
    v93 = *(_DWORD *)&v97[4 * v92 + 20];
    if ( v93 == 374 )
    {
      LOBYTE(Entity) = 0;
    }
    else if ( v93 != 376 )
    {
LABEL_53:
      LOBYTE(Entity) = 0;
      return (char)Entity;
    }
    v98 = v92 - 1;
  }
  return (char)Entity;
}