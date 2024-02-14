void __fastcall ServantFlagReleaseMaster___ctor(ServantFlagReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4216903 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__, method);
    byte_4216903 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    223,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__);
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

  if ( (byte_4216901 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4216901 = 1;
  }
  PK = ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&idx);
  return (ServantFlagReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_266A024 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__);
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

  if ( (byte_4216902 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4216902 = 1;
  }
  PK = ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&flagId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__);
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
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v4 = flagId;
  if ( (byte_4216905 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4216905 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    sub_B0D97C(Instance);
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
  return ServantFlagReleaseMaster__isSecretTreasureDevice_28121116(this, svtId, &svtFlagEntity, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantFlagReleaseMaster__isSecretTreasureDevice_28121116(
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
  void *Instance; // x0
  const MethodInfo *v35; // x3
  ServantFlagEntity_o *Entity; // x19
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v45; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x23
  ServantFlagReleaseEntity_c **v47; // x27
  const MethodInfo_2E90364 **v48; // x28
  int32_t v49; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v50; // x25
  __int64 v51; // x10
  __int64 v52; // x1
  __int64 v53; // x2
  int32_t eventId; // w19
  const MethodInfo_2E90364 **v55; // x21
  ServantFlagReleaseEntity_c **v56; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v57; // x27
  WarBoardAIRoute_RouteData_o *v58; // x2
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x24
  __int64 v60; // x1
  __int64 v61; // x2
  System_Collections_Generic_List_int__o *v62; // x23
  int v63; // w26
  int v64; // w23
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  int v66; // w27
  int32_t klass_high; // w23
  int32_t klass; // w25
  int64_t monitor_low; // x24
  _BOOL8 v70; // x0
  int v71; // w28
  int v72; // w8
  int v73; // w8
  WebViewManager_o *v74; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  int v84; // w28
  int v85; // w9
  int32_t svtIda; // [xsp+14h] [xbp-CCh]
  ServantFlagEntity_o *v88; // [xsp+18h] [xbp-C8h]
  _BYTE v89[40]; // [xsp+20h] [xbp-C0h] BYREF
  int v90; // [xsp+48h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v91; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v92; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_4216904 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&CondType_TypeInfo, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantFlagMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__, v16);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__get_Current__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884944, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__, v28);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v29);
    sub_B0D8A4(&System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo, v30);
    sub_B0D8A4(&NetworkManager_TypeInfo, v31);
    sub_B0D8A4(&ServantFlagReleaseEntity_TypeInfo, v32);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33);
    byte_4216904 = 1;
  }
  memset(&v92, 0, sizeof(v92));
  memset(&v91, 0, sizeof(v91));
  v90 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantFlagMaster___);
  if ( !Instance )
    goto LABEL_57;
  Entity = ServantFlagMaster__getEntity((ServantFlagMaster_o *)Instance, svtId, 1, v35);
  *svtFlagEntity = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)svtFlagEntity, 0LL, v37, v38, v39, v40, v41, v42);
  v88 = Entity;
  if ( Entity )
  {
    svtIda = svtId;
    v45 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                     System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo,
                                                                                                     v43,
                                                                                                     v44);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v45,
      (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__);
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_57;
    if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           list,
           (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
    {
      v47 = &ServantFlagReleaseEntity_TypeInfo;
      v48 = (const MethodInfo_2E90364 **)&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__;
      v49 = 0;
      while ( 1 )
      {
        Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                     list,
                     v49,
                     (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !Instance )
          break;
        v50 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        v51 = *(&(*v47)->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v51
          || *(ServantFlagReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v51 - 8) != *v47 )
        {
          break;
        }
        if ( *((_DWORD *)Instance + 4) == v88->fields.svtId && *((_DWORD *)Instance + 5) == v88->fields.flagId )
        {
          if ( !v45 )
            break;
          if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                  (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v45,
                  *((_DWORD *)Instance + 7),
                  (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__) )
          {
            eventId = v50->fields.eventId;
            v55 = v48;
            v56 = v47;
            v57 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo, v52, v53);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v57,
              (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__);
            v58 = (WarBoardAIRoute_RouteData_o *)v57;
            v47 = v56;
            v48 = v55;
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v45,
              eventId,
              v58,
              (const MethodInfo_2E90400 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__);
          }
          Instance = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                       v45,
                       v50->fields.eventId,
                       *v48);
          if ( !Instance )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            v50,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__);
        }
        if ( ++v49 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                        list,
                        (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
          goto LABEL_20;
      }
LABEL_57:
      sub_B0D97C(Instance);
    }
LABEL_20:
    if ( !v45
      || System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
           v45,
           (const MethodInfo_2E90024 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__) < 1 )
    {
      goto LABEL_53;
    }
    Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
             (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)v45,
             (const MethodInfo_2E90034 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__);
    v62 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v60, v61);
    System_Collections_Generic_List_int____ctor_50000796(
      v62,
      (System_Collections_Generic_IEnumerable_T__o *)Keys,
      (const MethodInfo_2FAF39C *)Method_System_Collections_Generic_List_int___ctor___67884944);
    if ( !v62 )
      goto LABEL_57;
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v89,
      v62,
      (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v63 = 0;
    v64 = 0;
    v92 = *(System_Collections_Generic_List_Enumerator_int__o *)v89;
    do
    {
      if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v92,
              (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        LOBYTE(Entity) = 0;
        v73 = 374;
        v71 = v63;
        goto LABEL_50;
      }
      Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
               v45,
               v92.fields.current,
               (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__);
      if ( !Item )
        sub_B0D97C(0LL);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v89,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Item,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__);
      v66 = v64;
      v91 = *(System_Collections_Generic_List_Enumerator_T__o *)v89;
      while ( 1 )
      {
        v70 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v91,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__);
        if ( !v70 )
          break;
        if ( !v91.fields.current )
          sub_B0D97C(v70);
        klass = (int32_t)v91.fields.current[2].klass;
        klass_high = HIDWORD(v91.fields.current[2].klass);
        monitor_low = SLODWORD(v91.fields.current[2].monitor);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v66 |= !CondType__IsOpen(klass, klass_high, monitor_low, 0, 0LL);
      }
      *(_DWORD *)&v89[4 * v63 + 24] = 290;
      v71 = ++v90;
      v63 = v90;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v91,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__);
      if ( v63 )
      {
        v72 = v63 - 1;
        if ( *(_DWORD *)&v89[4 * v63 + 20] == 290 )
        {
          v71 = --v63;
          v90 = v72;
        }
      }
      v64 = 1;
    }
    while ( (v66 & 1) != 0 );
    v74 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v74 )
      sub_B0D97C(0LL);
    MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)v74,
                                                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B0D97C(UserId);
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                         MasterData_WarQuestSelectionMaster,
                         UserId,
                         svtIda,
                         0LL);
    if ( !EntityDefinitely )
      sub_B0D97C(0LL);
    if ( UserServantCollectionEntity__HasFlag(EntityDefinitely, 1 << v88->fields.flagId, 0LL) )
    {
      LOBYTE(Entity) = 0;
    }
    else
    {
      *svtFlagEntity = v88;
      sub_B0D840(
        (BattleServantConfConponent_o *)svtFlagEntity,
        (System_Int32_array **)v88,
        v78,
        v79,
        v80,
        v81,
        v82,
        v83);
      LOBYTE(Entity) = 1;
    }
    v73 = 376;
LABEL_50:
    *(_DWORD *)&v89[4 * v71 + 24] = v73;
    v84 = ++v90;
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v92,
      (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    if ( !v84 )
      goto LABEL_53;
    v85 = *(_DWORD *)&v89[4 * v84 + 20];
    if ( v85 == 374 )
    {
      LOBYTE(Entity) = 0;
    }
    else if ( v85 != 376 )
    {
LABEL_53:
      LOBYTE(Entity) = 0;
      return (char)Entity;
    }
    v90 = v84 - 1;
  }
  return (char)Entity;
}