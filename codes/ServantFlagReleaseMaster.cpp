void __fastcall ServantFlagReleaseMaster___ctor(ServantFlagReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D4DE & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__);
    byte_438D4DE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    224,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__);
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

  if ( (byte_438D4DC & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__);
    byte_438D4DC = 1;
  }
  PK = ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&idx);
  return (ServantFlagReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_21FBCE4 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__);
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

  if ( (byte_438D4DD & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__);
    byte_438D4DD = 1;
  }
  PK = ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&flagId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__);
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
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v4 = flagId;
  if ( (byte_438D4E0 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438D4E0 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( !UserServantCollectionMaster__TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          (int64_t)Instance,
          svtId,
          0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_13:
    sub_B7769C(Instance, v7);
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
  return ServantFlagReleaseMaster__isSecretTreasureDevice_29336116(this, svtId, &svtFlagEntity, v3);
}


bool __fastcall ServantFlagReleaseMaster__isSecretTreasureDevice_29336116(
        ServantFlagReleaseMaster_o *this,
        int32_t svtId,
        ServantFlagEntity_o **svtFlagEntity,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  ServantFlagEntity_o *Entity; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v17; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x23
  ServantFlagReleaseEntity_c **v19; // x27
  const MethodInfo_2FF40B4 **v20; // x28
  int32_t v21; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x25
  __int64 v23; // x10
  int32_t eventId; // w19
  const MethodInfo_2FF40B4 **v25; // x21
  ServantFlagReleaseEntity_c **v26; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x27
  WarBoardAIRoute_RouteData_o *v28; // x2
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x24
  System_Collections_Generic_List_int__o *v30; // x23
  int v31; // w26
  int v32; // w23
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  __int64 v34; // x1
  int v35; // w27
  int32_t klass_high; // w23
  int32_t klass; // w25
  int64_t monitor_low; // x24
  _BOOL8 v39; // x0
  __int64 v40; // x1
  int v41; // w28
  int v42; // w8
  int v43; // w8
  WebViewManager_o *v44; // x0
  __int64 v45; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  int v56; // w28
  int v57; // w9
  int32_t svtIda; // [xsp+14h] [xbp-CCh]
  ServantFlagEntity_o *v60; // [xsp+18h] [xbp-C8h]
  _BYTE v61[40]; // [xsp+20h] [xbp-C0h] BYREF
  int v62; // [xsp+48h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v64; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_438D4DF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantFlagMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&ServantFlagReleaseEntity_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438D4DF = 1;
  }
  memset(&v64, 0, sizeof(v64));
  memset(&v63, 0, sizeof(v63));
  v62 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantFlagMaster___);
  if ( !Instance )
    goto LABEL_57;
  Entity = ServantFlagMaster__getEntity((ServantFlagMaster_o *)Instance, svtId, 1, v9);
  *svtFlagEntity = 0LL;
  sub_B77560((BattleServantConfConponent_o *)svtFlagEntity, 0LL, v11, v12, v13, v14, v15, v16);
  v60 = Entity;
  if ( Entity )
  {
    svtIda = svtId;
    v17 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v17,
      (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__);
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_57;
    if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           list,
           (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
    {
      v19 = &ServantFlagReleaseEntity_TypeInfo;
      v20 = (const MethodInfo_2FF40B4 **)&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__;
      v21 = 0;
      while ( 1 )
      {
        Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                     list,
                     v21,
                     (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !Instance )
          break;
        v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        v23 = *(&(*v19)->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v23
          || *(ServantFlagReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v23 - 8) != *v19 )
        {
          break;
        }
        if ( *((_DWORD *)Instance + 4) == v60->fields.svtId && *((_DWORD *)Instance + 5) == v60->fields.flagId )
        {
          if ( !v17 )
            break;
          if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                  (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v17,
                  *((_DWORD *)Instance + 7),
                  (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__) )
          {
            eventId = v22->fields.eventId;
            v25 = v20;
            v26 = v19;
            v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v27,
              (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__);
            v28 = (WarBoardAIRoute_RouteData_o *)v27;
            v19 = v26;
            v20 = v25;
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v17,
              eventId,
              v28,
              (const MethodInfo_2FF4150 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__);
          }
          Instance = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                       v17,
                       v22->fields.eventId,
                       *v20);
          if ( !Instance )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            v22,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__);
        }
        if ( ++v21 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                        list,
                        (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
          goto LABEL_20;
      }
LABEL_57:
      sub_B7769C(Instance, v8);
    }
LABEL_20:
    if ( !v17
      || System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
           v17,
           (const MethodInfo_2FF3D74 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__) < 1 )
    {
      goto LABEL_53;
    }
    Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
             (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)v17,
             (const MethodInfo_2FF3D84 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__);
    v30 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_51270276(
      v30,
      (System_Collections_Generic_IEnumerable_T__o *)Keys,
      (const MethodInfo_30E5284 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !v30 )
      goto LABEL_57;
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v61,
      v30,
      (const MethodInfo_30E6C2C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v31 = 0;
    v32 = 0;
    v64 = *(System_Collections_Generic_List_Enumerator_int__o *)v61;
    do
    {
      if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v64,
              (const MethodInfo_225A1B4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        LOBYTE(Entity) = 0;
        v43 = 374;
        v41 = v31;
        goto LABEL_50;
      }
      Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
               v17,
               v64.fields.current,
               (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__);
      if ( !Item )
        sub_B7769C(0LL, v34);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v61,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Item,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__);
      v35 = v32;
      v63 = *(System_Collections_Generic_List_Enumerator_T__o *)v61;
      while ( 1 )
      {
        v39 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v63,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__);
        if ( !v39 )
          break;
        if ( !v63.fields.current )
          sub_B7769C(v39, v40);
        klass = (int32_t)v63.fields.current[2].klass;
        klass_high = HIDWORD(v63.fields.current[2].klass);
        monitor_low = SLODWORD(v63.fields.current[2].monitor);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v35 |= !CondType__IsOpen(klass, klass_high, monitor_low, 0, 0LL);
      }
      *(_DWORD *)&v61[4 * v31 + 24] = 290;
      v41 = ++v62;
      v31 = v62;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v63,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__);
      if ( v31 )
      {
        v42 = v31 - 1;
        if ( *(_DWORD *)&v61[4 * v31 + 20] == 290 )
        {
          v41 = --v31;
          v62 = v42;
        }
      }
      v32 = 1;
    }
    while ( (v35 & 1) != 0 );
    v44 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v44 )
      sub_B7769C(0LL, v45);
    MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)v44,
                                                                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B7769C(UserId, UserId);
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                         MasterData_WarQuestSelectionMaster,
                         UserId,
                         svtIda,
                         0LL);
    if ( !EntityDefinitely )
      sub_B7769C(0LL, v49);
    if ( UserServantCollectionEntity__HasFlag(EntityDefinitely, 1 << v60->fields.flagId, 0LL) )
    {
      LOBYTE(Entity) = 0;
    }
    else
    {
      *svtFlagEntity = v60;
      sub_B77560(
        (BattleServantConfConponent_o *)svtFlagEntity,
        (System_Int32_array **)v60,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
      LOBYTE(Entity) = 1;
    }
    v43 = 376;
LABEL_50:
    *(_DWORD *)&v61[4 * v41 + 24] = v43;
    v56 = ++v62;
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v64,
      (const MethodInfo_225A1B0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    if ( !v56 )
      goto LABEL_53;
    v57 = *(_DWORD *)&v61[4 * v56 + 20];
    if ( v57 == 374 )
    {
      LOBYTE(Entity) = 0;
    }
    else if ( v57 != 376 )
    {
LABEL_53:
      LOBYTE(Entity) = 0;
      return (char)Entity;
    }
    v62 = v56 - 1;
  }
  return (char)Entity;
}