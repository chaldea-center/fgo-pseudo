void __fastcall ServantFlagReleaseMaster___ctor(ServantFlagReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4189F7A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__, method);
    byte_4189F7A = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    223,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__);
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

  if ( (byte_4189F78 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4189F78 = 1;
  }
  PK = ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&idx);
  return (ServantFlagReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__);
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

  if ( (byte_4189F79 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4189F79 = 1;
  }
  PK = ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&flagId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__);
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
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v4 = flagId;
  if ( (byte_4189F7C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4189F7C = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    sub_B2C434(Instance, v9);
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
  return ServantFlagReleaseMaster__isSecretTreasureDevice_29308316(this, svtId, &svtFlagEntity, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantFlagReleaseMaster__isSecretTreasureDevice_29308316(
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
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  ServantFlagEntity_o *Entity; // x19
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v44; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x23
  ServantFlagReleaseEntity_c **v46; // x27
  const MethodInfo_2E64688 **v47; // x28
  int32_t v48; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v49; // x25
  __int64 v50; // x10
  int32_t eventId; // w19
  const MethodInfo_2E64688 **v52; // x21
  ServantFlagReleaseEntity_c **v53; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v54; // x27
  WarBoardAIRoute_RouteData_o *v55; // x2
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x24
  System_Collections_Generic_List_int__o *v57; // x23
  int v58; // w26
  int v59; // w23
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  __int64 v61; // x1
  int v62; // w27
  int32_t klass_high; // w23
  int32_t klass; // w25
  int64_t monitor_low; // x24
  _BOOL8 v66; // x0
  __int64 v67; // x1
  int v68; // w28
  int v69; // w8
  int v70; // w8
  WebViewManager_o *v71; // x0
  __int64 v72; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v76; // x1
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  int v83; // w28
  int v84; // w9
  int32_t svtIda; // [xsp+14h] [xbp-CCh]
  ServantFlagEntity_o *v87; // [xsp+18h] [xbp-C8h]
  _BYTE v88[40]; // [xsp+20h] [xbp-C0h] BYREF
  int v89; // [xsp+48h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v90; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v91; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_4189F7B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&CondType_TypeInfo, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantFlagMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__, v16);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__get_Current__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__, v28);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v29);
    sub_B2C35C(&System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo, v30);
    sub_B2C35C(&NetworkManager_TypeInfo, v31);
    sub_B2C35C(&ServantFlagReleaseEntity_TypeInfo, v32);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33);
    byte_4189F7B = 1;
  }
  memset(&v91, 0, sizeof(v91));
  memset(&v90, 0, sizeof(v90));
  v89 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantFlagMaster___);
  if ( !Instance )
    goto LABEL_57;
  Entity = ServantFlagMaster__getEntity((ServantFlagMaster_o *)Instance, svtId, 1, v36);
  *svtFlagEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)svtFlagEntity, 0LL, v38, v39, v40, v41, v42, v43);
  v87 = Entity;
  if ( Entity )
  {
    svtIda = svtId;
    v44 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v44,
      (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__);
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_57;
    if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           list,
           (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
    {
      v46 = &ServantFlagReleaseEntity_TypeInfo;
      v47 = (const MethodInfo_2E64688 **)&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__;
      v48 = 0;
      while ( 1 )
      {
        Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                     list,
                     v48,
                     (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !Instance )
          break;
        v49 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        v50 = *(&(*v46)->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v50
          || *(ServantFlagReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v50 - 8) != *v46 )
        {
          break;
        }
        if ( *((_DWORD *)Instance + 4) == v87->fields.svtId && *((_DWORD *)Instance + 5) == v87->fields.flagId )
        {
          if ( !v44 )
            break;
          if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                  (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v44,
                  *((_DWORD *)Instance + 7),
                  (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__) )
          {
            eventId = v49->fields.eventId;
            v52 = v47;
            v53 = v46;
            v54 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v54,
              (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__);
            v55 = (WarBoardAIRoute_RouteData_o *)v54;
            v46 = v53;
            v47 = v52;
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v44,
              eventId,
              v55,
              (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__);
          }
          Instance = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                       v44,
                       v49->fields.eventId,
                       *v47);
          if ( !Instance )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            v49,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__);
        }
        if ( ++v48 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                        list,
                        (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
          goto LABEL_20;
      }
LABEL_57:
      sub_B2C434(Instance, v35);
    }
LABEL_20:
    if ( !v44
      || System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
           v44,
           (const MethodInfo_2E64348 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__) < 1 )
    {
      goto LABEL_53;
    }
    Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
             (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)v44,
             (const MethodInfo_2E64358 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__);
    v57 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_49702036(
      v57,
      (System_Collections_Generic_IEnumerable_T__o *)Keys,
      (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
    if ( !v57 )
      goto LABEL_57;
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v88,
      v57,
      (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v58 = 0;
    v59 = 0;
    v91 = *(System_Collections_Generic_List_Enumerator_int__o *)v88;
    do
    {
      if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v91,
              (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        LOBYTE(Entity) = 0;
        v70 = 374;
        v68 = v58;
        goto LABEL_50;
      }
      Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
               v44,
               v91.fields.current,
               (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__);
      if ( !Item )
        sub_B2C434(0LL, v61);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v88,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Item,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__);
      v62 = v59;
      v90 = *(System_Collections_Generic_List_Enumerator_T__o *)v88;
      while ( 1 )
      {
        v66 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v90,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__);
        if ( !v66 )
          break;
        if ( !v90.fields.current )
          sub_B2C434(v66, v67);
        klass = (int32_t)v90.fields.current[2].klass;
        klass_high = HIDWORD(v90.fields.current[2].klass);
        monitor_low = SLODWORD(v90.fields.current[2].monitor);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v62 |= !CondType__IsOpen(klass, klass_high, monitor_low, 0, 0LL);
      }
      *(_DWORD *)&v88[4 * v58 + 24] = 290;
      v68 = ++v89;
      v58 = v89;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v90,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__);
      if ( v58 )
      {
        v69 = v58 - 1;
        if ( *(_DWORD *)&v88[4 * v58 + 20] == 290 )
        {
          v68 = --v58;
          v89 = v69;
        }
      }
      v59 = 1;
    }
    while ( (v62 & 1) != 0 );
    v71 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v71 )
      sub_B2C434(0LL, v72);
    MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)v71,
                                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B2C434(UserId, UserId);
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                         MasterData_WarQuestSelectionMaster,
                         UserId,
                         svtIda,
                         0LL);
    if ( !EntityDefinitely )
      sub_B2C434(0LL, v76);
    if ( UserServantCollectionEntity__HasFlag(EntityDefinitely, 1 << v87->fields.flagId, 0LL) )
    {
      LOBYTE(Entity) = 0;
    }
    else
    {
      *svtFlagEntity = v87;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)svtFlagEntity,
        (System_Int32_array **)v87,
        v77,
        v78,
        v79,
        v80,
        v81,
        v82);
      LOBYTE(Entity) = 1;
    }
    v70 = 376;
LABEL_50:
    *(_DWORD *)&v88[4 * v68 + 24] = v70;
    v83 = ++v89;
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v91,
      (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    if ( !v83 )
      goto LABEL_53;
    v84 = *(_DWORD *)&v88[4 * v83 + 20];
    if ( v84 == 374 )
    {
      LOBYTE(Entity) = 0;
    }
    else if ( v84 != 376 )
    {
LABEL_53:
      LOBYTE(Entity) = 0;
      return (char)Entity;
    }
    v89 = v83 - 1;
  }
  return (char)Entity;
}