void __fastcall ServantFlagReleaseMaster___ctor(ServantFlagReleaseMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAD92 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EAD92 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    224,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string___ctor__);
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

  if ( (byte_42EAD90 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__,
      svtId,
      flagId,
      *(_QWORD *)&idx);
    byte_42EAD90 = 1;
  }
  PK = ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&idx);
  return (ServantFlagReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__GetEntity__);
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

  if ( (byte_42EAD91 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&flagId);
    byte_42EAD91 = 1;
  }
  PK = ServantFlagReleaseEntity__CreatePK(svtId, flagId, idx, *(const MethodInfo **)&flagId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantFlagReleaseMaster__ServantFlagReleaseEntity__string__TryGetEntity__);
}


bool __fastcall ServantFlagReleaseMaster__checkTresureDeviceEffectFlag(
        ServantFlagReleaseMaster_o *this,
        int32_t svtId,
        int32_t flagId,
        const MethodInfo *method)
{
  char v4; // w19
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v4 = flagId;
  if ( (byte_42EAD94 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, svtId, (_BYTE)flagId, method);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42EAD94 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          Instance,
                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    sub_B5D69C(Instance, v13);
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
  return ServantFlagReleaseMaster__isSecretTreasureDevice_29327396(this, svtId, &svtFlagEntity, v3);
}


bool __fastcall ServantFlagReleaseMaster__isSecretTreasureDevice_29327396(
        ServantFlagReleaseMaster_o *this,
        int32_t svtId,
        ServantFlagEntity_o **svtFlagEntity,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  void *Instance; // x0
  __int64 v89; // x1
  const MethodInfo *v90; // x3
  ServantFlagEntity_o *Entity; // x19
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v98; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x23
  ServantFlagReleaseEntity_c **v100; // x27
  const MethodInfo_2F32000 **v101; // x28
  int32_t v102; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v103; // x25
  __int64 v104; // x10
  int32_t eventId; // w19
  const MethodInfo_2F32000 **v106; // x21
  ServantFlagReleaseEntity_c **v107; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v108; // x27
  WarBoardAIRoute_RouteData_o *v109; // x2
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x24
  System_Collections_Generic_List_int__o *v111; // x23
  int v112; // w26
  int v113; // w23
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  __int64 v115; // x1
  int v116; // w27
  int32_t klass_high; // w23
  int32_t klass; // w25
  int64_t monitor_low; // x24
  _BOOL8 v120; // x0
  __int64 v121; // x1
  int v122; // w28
  int v123; // w8
  int v124; // w8
  WebViewManager_o *v125; // x0
  __int64 v126; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v130; // x1
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  int v137; // w28
  int v138; // w9
  int32_t svtIda; // [xsp+14h] [xbp-CCh]
  ServantFlagEntity_o *v141; // [xsp+18h] [xbp-C8h]
  _BYTE v142[40]; // [xsp+20h] [xbp-C0h] BYREF
  int v143; // [xsp+48h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v144; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v145; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_42EAD93 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      svtId,
      (_DWORD)svtFlagEntity,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&CondType_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantFlagMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v16, v17, v18);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__,
      v19,
      v20,
      v21);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__,
      v22,
      v23,
      v24);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__,
      v25,
      v26,
      v27);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__,
      v28,
      v29,
      v30);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__,
      v31,
      v32,
      v33);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__,
      v34,
      v35,
      v36);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v40, v41, v42);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__, v43, v44, v45);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v46, v47, v48);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__, v49, v50, v51);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v52, v53, v54);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__get_Current__,
      v55,
      v56,
      v57);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__, v58, v59, v60);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v61, v62, v63);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__, v64, v65, v66);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v67, v68, v69);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__, v70, v71, v72);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v73, v74, v75);
    sub_B5D5C4(&System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo, v76, v77, v78);
    sub_B5D5C4(&NetworkManager_TypeInfo, v79, v80, v81);
    sub_B5D5C4(&ServantFlagReleaseEntity_TypeInfo, v82, v83, v84);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v85, v86, v87);
    byte_42EAD93 = 1;
  }
  memset(&v145, 0, sizeof(v145));
  memset(&v144, 0, sizeof(v144));
  v143 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantFlagMaster___);
  if ( !Instance )
    goto LABEL_57;
  Entity = ServantFlagMaster__getEntity((ServantFlagMaster_o *)Instance, svtId, 1, v90);
  *svtFlagEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)svtFlagEntity, 0LL, v92, v93, v94, v95, v96, v97);
  v141 = Entity;
  if ( Entity )
  {
    svtIda = svtId;
    v98 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v98,
      (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity____ctor__);
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_57;
    if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           list,
           (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
    {
      v100 = &ServantFlagReleaseEntity_TypeInfo;
      v101 = (const MethodInfo_2F32000 **)&Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__;
      v102 = 0;
      while ( 1 )
      {
        Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                     list,
                     v102,
                     (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( !Instance )
          break;
        v103 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
        v104 = *(&(*v100)->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v104
          || *(ServantFlagReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v104 - 8) != *v100 )
        {
          break;
        }
        if ( *((_DWORD *)Instance + 4) == v141->fields.svtId && *((_DWORD *)Instance + 5) == v141->fields.flagId )
        {
          if ( !v98 )
            break;
          if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                  (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v98,
                  *((_DWORD *)Instance + 7),
                  (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___ContainsKey__) )
          {
            eventId = v103->fields.eventId;
            v106 = v101;
            v107 = v100;
            v108 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantFlagReleaseEntity__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v108,
              (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity___ctor__);
            v109 = (WarBoardAIRoute_RouteData_o *)v108;
            v100 = v107;
            v101 = v106;
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v98,
              eventId,
              v109,
              (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___set_Item__);
          }
          Instance = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                       v98,
                       v103->fields.eventId,
                       *v101);
          if ( !Instance )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            v103,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity__Add__);
        }
        if ( ++v102 >= System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                         list,
                         (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
          goto LABEL_20;
      }
LABEL_57:
      sub_B5D69C(Instance, v89);
    }
LABEL_20:
    if ( !v98
      || System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
           v98,
           (const MethodInfo_2F31CC0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Count__) < 1 )
    {
      goto LABEL_53;
    }
    Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
             (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)v98,
             (const MethodInfo_2F31CD0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Keys__);
    v111 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_50870440(
      v111,
      (System_Collections_Generic_IEnumerable_T__o *)Keys,
      (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !v111 )
      goto LABEL_57;
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v142,
      v111,
      (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v112 = 0;
    v113 = 0;
    v145 = *(System_Collections_Generic_List_Enumerator_int__o *)v142;
    do
    {
      if ( !System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v145,
              (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        LOBYTE(Entity) = 0;
        v124 = 374;
        v122 = v112;
        goto LABEL_50;
      }
      Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
               v98,
               v145.fields.current,
               (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__List_ServantFlagReleaseEntity___get_Item__);
      if ( !Item )
        sub_B5D69C(0LL, v115);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v142,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Item,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantFlagReleaseEntity__GetEnumerator__);
      v116 = v113;
      v144 = *(System_Collections_Generic_List_Enumerator_T__o *)v142;
      while ( 1 )
      {
        v120 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                 &v144,
                 (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__MoveNext__);
        if ( !v120 )
          break;
        if ( !v144.fields.current )
          sub_B5D69C(v120, v121);
        klass = (int32_t)v144.fields.current[2].klass;
        klass_high = HIDWORD(v144.fields.current[2].klass);
        monitor_low = SLODWORD(v144.fields.current[2].monitor);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v116 |= !CondType__IsOpen(klass, klass_high, monitor_low, 0, 0LL);
      }
      *(_DWORD *)&v142[4 * v112 + 24] = 290;
      v122 = ++v143;
      v112 = v143;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v144,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantFlagReleaseEntity__Dispose__);
      if ( v112 )
      {
        v123 = v112 - 1;
        if ( *(_DWORD *)&v142[4 * v112 + 20] == 290 )
        {
          v122 = --v112;
          v143 = v123;
        }
      }
      v113 = 1;
    }
    while ( (v116 & 1) != 0 );
    v125 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v125 )
      sub_B5D69C(0LL, v126);
    MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)v125,
                                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B5D69C(UserId, UserId);
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                         MasterData_WarQuestSelectionMaster,
                         UserId,
                         svtIda,
                         0LL);
    if ( !EntityDefinitely )
      sub_B5D69C(0LL, v130);
    if ( UserServantCollectionEntity__HasFlag(EntityDefinitely, 1 << v141->fields.flagId, 0LL) )
    {
      LOBYTE(Entity) = 0;
    }
    else
    {
      *svtFlagEntity = v141;
      sub_B5D560(
        (BattleServantConfConponent_o *)svtFlagEntity,
        (System_Int32_array **)v141,
        v131,
        v132,
        v133,
        v134,
        v135,
        v136);
      LOBYTE(Entity) = 1;
    }
    v124 = 376;
LABEL_50:
    *(_DWORD *)&v142[4 * v122 + 24] = v124;
    v137 = ++v143;
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v145,
      (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    if ( !v137 )
      goto LABEL_53;
    v138 = *(_DWORD *)&v142[4 * v137 + 20];
    if ( v138 == 374 )
    {
      LOBYTE(Entity) = 0;
    }
    else if ( v138 != 376 )
    {
LABEL_53:
      LOBYTE(Entity) = 0;
      return (char)Entity;
    }
    v143 = v137 - 1;
  }
  return (char)Entity;
}