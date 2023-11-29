void __fastcall EventItemDisplayMaster___ctor(EventItemDisplayMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F8840 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string___ctor__, method);
    byte_40F8840 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    162,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventItemDisplayEntity_o *__fastcall EventItemDisplayMaster__GetEntity(
        EventItemDisplayMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40F883E & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_40F883E = 1;
  }
  PK = EventItemDisplayEntity__CreatePK(id, eventId, *(const MethodInfo **)&eventId);
  return (EventItemDisplayEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_List_EventItemDisplayEntity___o *__fastcall EventItemDisplayMaster__GetGroupItemLists(
        EventItemDisplayMaster_o *this,
        int32_t eventId,
        int32_t screenFlag,
        bool isTerminalTop,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x19
  const MethodInfo *v35; // x4
  EventItemDisplayEntity_array *ListByEventIdAndScreenFlag; // x23
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v47; // x21
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  __int64 v53; // x8
  int32_t v54; // w19
  __int64 v55; // x20
  unsigned int v56; // w24
  EventItemDisplayEntity_o *v57; // x25
  int32_t v58; // w9
  int32_t groupIndex; // w26
  int32_t v60; // w27
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v65; // x28
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  EventItemDisplayMaster_EventItemDisplaySort_o *v70; // x28
  const MethodInfo *v71; // x3
  EventItemDisplayGroupEntity_o *Entity; // x0
  int32_t v73; // w8
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  EventItemDisplayMaster___c_c *v75; // x0
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v78; // x23
  struct EventItemDisplayMaster___c_StaticFields *v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  EventMissionProgressRequest_Argument_ProgressData_o *v86; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v88; // [xsp+8h] [xbp-88h]
  EventItemDisplayGroupMaster_o *v89; // [xsp+18h] [xbp-78h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v90; // [xsp+20h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_T__o v91; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_40F8842 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_EventItemDisplayMaster_EventItemDisplaySort___ctor__, *(_QWORD *)&eventId);
    sub_B16FFC(&System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventItemDisplayGroupMaster___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___ContainsKey__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity____ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___set_Item__, v14);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___TypeInfo, v15);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__Dispose__,
      v16);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__MoveNext__,
      v17);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__get_Current__,
      v18);
    sub_B16FFC(&EventItemDisplayMaster_EventItemDisplaySort_TypeInfo, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_EventItemDisplayEntity___Add__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Add__, v22);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__GetEnumerator__,
      v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Sort__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_EventItemDisplayEntity____ctor__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort___ctor__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__, v27);
    sub_B16FFC(&System_Collections_Generic_List_List_EventItemDisplayEntity___TypeInfo, v28);
    sub_B16FFC(&System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo, v29);
    sub_B16FFC(&System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo, v30);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    sub_B16FFC(&Method_EventItemDisplayMaster___c__GetGroupItemLists_b__5_0__, v32);
    sub_B16FFC(&EventItemDisplayMaster___c_TypeInfo, v33);
    byte_40F8842 = 1;
  }
  memset(&v91, 0, sizeof(v91));
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_List_EventItemDisplayEntity___TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&screenFlag,
                                                                                                  isTerminalTop,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_List_EventItemDisplayEntity____ctor__);
  ListByEventIdAndScreenFlag = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
                                 this,
                                 eventId,
                                 screenFlag,
                                 isTerminalTop,
                                 v35);
  v90 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo,
                                                                                                  v37,
                                                                                                  v38,
                                                                                                  v39,
                                                                                                  v40);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v90,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventItemDisplayGroupMaster___);
  if ( !ListByEventIdAndScreenFlag )
    goto LABEL_45;
  if ( !*(_QWORD *)&ListByEventIdAndScreenFlag->max_length )
    return (System_Collections_Generic_List_List_EventItemDisplayEntity___o *)v34;
  v88 = v34;
  v89 = (EventItemDisplayGroupMaster_o *)MasterData_WarQuestSelectionMaster;
  v47 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___TypeInfo,
                                                                                                   v43,
                                                                                                   v44,
                                                                                                   v45,
                                                                                                   v46);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v47,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity____ctor__);
  v53 = *(_QWORD *)&ListByEventIdAndScreenFlag->max_length;
  if ( (int)v53 >= 1 )
  {
    v54 = screenFlag;
    v55 = 0LL;
    v56 = v54 - 16;
    while ( 1 )
    {
      if ( (unsigned int)v55 >= (unsigned int)v53 )
      {
        sub_B17100(v48, v49, v50);
        sub_B170A0();
      }
      v57 = ListByEventIdAndScreenFlag->m_Items[v55];
      if ( !v57 )
        goto LABEL_45;
      if ( v56 > 0x30 || ((1LL << v56) & 0x1000000010001LL) == 0 )
        break;
      v58 = v57->fields.screenFlag;
      if ( (v58 & 2) == 0 )
        goto LABEL_15;
LABEL_16:
      if ( !v47 )
        goto LABEL_45;
      groupIndex = v57->fields.groupIndex;
      v60 = v57->fields.eventId;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v47,
              groupIndex,
              (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___ContainsKey__) )
      {
        v65 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo, v61, v62, v63, v64);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v65,
          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v47,
          groupIndex,
          (WarBoardAIRoute_RouteData_o *)v65,
          (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___set_Item__);
        v70 = (EventItemDisplayMaster_EventItemDisplaySort_o *)sub_B170CC(
                                                                 EventItemDisplayMaster_EventItemDisplaySort_TypeInfo,
                                                                 v66,
                                                                 v67,
                                                                 v68,
                                                                 v69);
        EventItemDisplayMaster_EventItemDisplaySort___ctor(v70, 0LL);
        if ( !v89 )
          goto LABEL_45;
        Entity = EventItemDisplayGroupMaster__GetEntity(v89, v60, groupIndex, v71);
        if ( !v70 )
          goto LABEL_45;
        v70->fields.dispEventId = v60;
        v70->fields.dispGroupIndex = groupIndex;
        v73 = Entity ? Entity->fields.priority : 0;
        v70->fields.dispPriority = v73;
        if ( !v90 )
          goto LABEL_45;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v90,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v70,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Add__);
        v56 = v54 - 16;
      }
      Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
               v47,
               groupIndex,
               (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__);
      if ( !Item )
        goto LABEL_45;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Item,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v57,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__);
      v53 = *(_QWORD *)&ListByEventIdAndScreenFlag->max_length;
LABEL_27:
      if ( (int)++v55 >= (int)v53 )
        goto LABEL_28;
    }
    v58 = v57->fields.screenFlag;
LABEL_15:
    if ( (v58 & v54) == 0 )
      goto LABEL_27;
    goto LABEL_16;
  }
LABEL_28:
  v75 = EventItemDisplayMaster___c_TypeInfo;
  if ( (BYTE3(EventItemDisplayMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventItemDisplayMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemDisplayMaster___c_TypeInfo);
    v75 = EventItemDisplayMaster___c_TypeInfo;
  }
  static_fields = v75->static_fields;
  v34 = v88;
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v75->vtable._0_Equals.methodPtr) & 4) != 0 && !v75->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v75);
      static_fields = EventItemDisplayMaster___c_TypeInfo->static_fields;
    }
    v78 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo,
                                                                          v49,
                                                                          v50,
                                                                          v51,
                                                                          v52);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v78,
      Method_EventItemDisplayMaster___c__GetGroupItemLists_b__5_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventItemDisplayMaster_EventItemDisplaySort___ctor__);
    v79 = EventItemDisplayMaster___c_TypeInfo->static_fields;
    v79->__9__5_0 = (struct System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__o *)_9__5_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v79->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
  }
  if ( !v90 )
LABEL_45:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v90,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Sort__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v91,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v90,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v91,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__MoveNext__) )
  {
    if ( !v91.fields.current )
      sub_B170D4();
    if ( !v47 )
      sub_B170D4();
    v86 = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                   v47,
                                                                   (int32_t)v91.fields.current[1].monitor,
                                                                   (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__);
    if ( !v88 )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v88,
      v86,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_List_EventItemDisplayEntity___Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v91,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__Dispose__);
  return (System_Collections_Generic_List_List_EventItemDisplayEntity___o *)v34;
}


// local variable allocation has failed, the output may be wrong!
EventItemDisplayEntity_array *__fastcall EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
        EventItemDisplayMaster_o *this,
        int32_t eventId,
        int32_t screenFlag,
        bool isTerminalTop,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  unsigned int v25; // w24
  bool v26; // w28
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0
  EventItemDisplayEntity_o *v35; // x0
  EventItemDisplayEntity_c *v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x23
  __int64 v38; // x9
  int32_t v39; // w8
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  unsigned __int64 v41; // x10
  int32_t *v42; // x11
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  EventItemDisplayMaster___c_c *v48; // x0
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v51; // x21
  struct EventItemDisplayMaster___c_StaticFields *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7

  if ( (byte_40F8841 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Comparison_EventItemDisplayEntity___ctor__, v9);
    sub_B16FFC(&System_Comparison_EventItemDisplayEntity__TypeInfo, v10);
    sub_B16FFC(&EventItemDisplayEntity_TypeInfo, v11);
    sub_B16FFC(&System_IDisposable_TypeInfo, v12);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Sort__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventItemDisplayEntity__ToArray__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__, v18);
    sub_B16FFC(&System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo, v19);
    sub_B16FFC(&Method_EventItemDisplayMaster___c__GetListByEventIdAndScreenFlag_b__4_0__, v20);
    sub_B16FFC(&EventItemDisplayMaster___c_TypeInfo, v21);
    byte_40F8841 = 1;
  }
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&screenFlag,
                                                                                                  isTerminalTop,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_54;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  v25 = screenFlag - 16;
  v26 = screenFlag == 16 && isTerminalTop;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v28;
        p_offset += 4;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v31 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v32 = 0LL;
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v33 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v32;
        v33 += 4;
        if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_17:
      v34 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v35 = (EventItemDisplayEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                        Enumerator,
                                        *(_QWORD *)(v34 + 8));
    v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)v35;
    if ( v35 )
    {
      v36 = EventItemDisplayEntity_TypeInfo;
      v38 = *(&EventItemDisplayEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v35->klass->_2.bitflags2 + 1) < (unsigned int)v38
        || (EventItemDisplayEntity_c *)v35->klass->_2.typeHierarchy[v38 - 1] != EventItemDisplayEntity_TypeInfo )
      {
        sub_B173C8(v35);
LABEL_52:
        sub_B170D4();
      }
    }
    if ( v26 )
    {
      if ( !v35 )
        sub_B170D4();
      goto LABEL_29;
    }
    if ( !v35 )
      goto LABEL_52;
    if ( v35->fields.eventId == eventId )
    {
      if ( v25 > 0x30 || ((1LL << v25) & 0x1000000010001LL) == 0 )
      {
        v39 = v35->fields.screenFlag;
        goto LABEL_30;
      }
LABEL_29:
      v39 = v35->fields.screenFlag;
      if ( (v39 & 2) != 0 )
      {
LABEL_31:
        if ( EventItemDisplayEntity__IsEnable(v35, (const MethodInfo *)v36) )
        {
          if ( !v22 )
            sub_B170D4();
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v22,
            v37,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__);
        }
      }
      else
      {
LABEL_30:
        if ( (v39 & screenFlag) != 0 )
          goto LABEL_31;
      }
    }
  }
  v40 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v41 = 0LL;
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      ++v41;
      v42 += 4;
      if ( v41 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_39:
    v43 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(Enumerator, *(_QWORD *)(v43 + 8));
  v48 = EventItemDisplayMaster___c_TypeInfo;
  if ( (BYTE3(EventItemDisplayMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventItemDisplayMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemDisplayMaster___c_TypeInfo);
    v48 = EventItemDisplayMaster___c_TypeInfo;
  }
  static_fields = v48->static_fields;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      static_fields = EventItemDisplayMaster___c_TypeInfo->static_fields;
    }
    v51 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventItemDisplayEntity__TypeInfo,
                                                                          v44,
                                                                          v45,
                                                                          v46,
                                                                          v47);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v51,
      Method_EventItemDisplayMaster___c__GetListByEventIdAndScreenFlag_b__4_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventItemDisplayEntity___ctor__);
    v52 = EventItemDisplayMaster___c_TypeInfo->static_fields;
    v52->__9__4_0 = (struct System_Comparison_EventItemDisplayEntity__o *)_9__4_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v52->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
  }
  if ( !v22 )
LABEL_54:
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v22,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventItemDisplayEntity__Sort__);
  return (EventItemDisplayEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
                                           (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventItemDisplayEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventItemDisplayMaster__TryGetEntity(
        EventItemDisplayMaster_o *this,
        EventItemDisplayEntity_o **entity,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40F883F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__TryGetEntity__, entity);
    byte_40F883F = 1;
  }
  PK = EventItemDisplayEntity__CreatePK(id, eventId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__TryGetEntity__);
}


void __fastcall EventItemDisplayMaster_EventItemDisplaySort___ctor(
        EventItemDisplayMaster_EventItemDisplaySort_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventItemDisplayMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6FE9 & 1) == 0 )
  {
    sub_B16FFC(&EventItemDisplayMaster___c_TypeInfo, v1);
    byte_40F6FE9 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventItemDisplayMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventItemDisplayMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall EventItemDisplayMaster___c___ctor(EventItemDisplayMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventItemDisplayMaster___c___GetGroupItemLists_b__5_0(
        EventItemDisplayMaster___c_o *this,
        EventItemDisplayMaster_EventItemDisplaySort_o *a,
        EventItemDisplayMaster_EventItemDisplaySort_o *b,
        const MethodInfo *method)
{
  int32_t dispPriority; // w8
  int32_t v5; // w9
  int32_t result; // w0
  int32_t dispEventId; // w8
  int32_t v8; // w9

  if ( !b || !a )
    sub_B170D4();
  dispPriority = b->fields.dispPriority;
  v5 = a->fields.dispPriority;
  result = dispPriority - v5;
  if ( dispPriority == v5 )
  {
    dispEventId = a->fields.dispEventId;
    v8 = b->fields.dispEventId;
    result = dispEventId - v8;
    if ( dispEventId == v8 )
      return a->fields.dispGroupIndex - b->fields.dispGroupIndex;
  }
  return result;
}


int32_t __fastcall EventItemDisplayMaster___c___GetListByEventIdAndScreenFlag_b__4_0(
        EventItemDisplayMaster___c_o *this,
        EventItemDisplayEntity_o *a,
        EventItemDisplayEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}