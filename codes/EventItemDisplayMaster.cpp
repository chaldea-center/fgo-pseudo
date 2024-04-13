void __fastcall EventItemDisplayMaster___ctor(EventItemDisplayMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9AFB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E9AFB = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    163,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventItemDisplayEntity_o *__fastcall EventItemDisplayMaster__GetEntity(
        EventItemDisplayMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E9AF9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__GetEntity__,
      id,
      eventId,
      method);
    byte_42E9AF9 = 1;
  }
  PK = EventItemDisplayEntity__CreatePK(id, eventId, *(const MethodInfo **)&eventId);
  return (EventItemDisplayEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_23FB260 *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_List_EventItemDisplayEntity___o *__fastcall EventItemDisplayMaster__GetGroupItemLists(
        EventItemDisplayMaster_o *this,
        int32_t eventId,
        int32_t screenFlag,
        bool isTerminalTop,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v84; // x19
  const MethodInfo *v85; // x4
  EventItemDisplayEntity_array *ListByEventIdAndScreenFlag; // x23
  void *Instance; // x0
  __int64 v88; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v89; // x21
  __int64 v90; // x8
  int32_t v91; // w19
  __int64 v92; // x20
  unsigned int v93; // w24
  EventItemDisplayEntity_o *v94; // x25
  int32_t v95; // w9
  int32_t groupIndex; // w26
  int32_t v97; // w27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v98; // x28
  EventItemDisplayMaster_EventItemDisplaySort_o *v99; // x28
  const MethodInfo *v100; // x3
  int32_t v101; // w8
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v104; // x23
  struct EventItemDisplayMaster___c_StaticFields *v105; // x0
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  _BOOL8 v112; // x0
  __int64 v113; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v116; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v117; // [xsp+8h] [xbp-88h]
  EventItemDisplayGroupMaster_o *v118; // [xsp+18h] [xbp-78h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v119; // [xsp+20h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_T__o v120; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_42E9AFD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Comparison_EventItemDisplayMaster_EventItemDisplaySort___ctor__,
      eventId,
      screenFlag,
      isTerminalTop);
    sub_B5D5C4(&System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventItemDisplayGroupMaster___, v12, v13, v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___ContainsKey__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity____ctor__, v18, v19, v20);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__,
      v21,
      v22,
      v23);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___set_Item__,
      v24,
      v25,
      v26);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___TypeInfo, v27, v28, v29);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__Dispose__,
      v30,
      v31,
      v32);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__MoveNext__,
      v33,
      v34,
      v35);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__get_Current__,
      v36,
      v37,
      v38);
    sub_B5D5C4(&EventItemDisplayMaster_EventItemDisplaySort_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_EventItemDisplayEntity___Add__, v45, v46, v47);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Add__,
      v48,
      v49,
      v50);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__GetEnumerator__,
      v51,
      v52,
      v53);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Sort__,
      v54,
      v55,
      v56);
    sub_B5D5C4(&Method_System_Collections_Generic_List_List_EventItemDisplayEntity____ctor__, v57, v58, v59);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort___ctor__,
      v60,
      v61,
      v62);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__, v63, v64, v65);
    sub_B5D5C4(&System_Collections_Generic_List_List_EventItemDisplayEntity___TypeInfo, v66, v67, v68);
    sub_B5D5C4(&System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo, v69, v70, v71);
    sub_B5D5C4(&System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo, v72, v73, v74);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v75, v76, v77);
    sub_B5D5C4(&Method_EventItemDisplayMaster___c__GetGroupItemLists_b__5_0__, v78, v79, v80);
    sub_B5D5C4(&EventItemDisplayMaster___c_TypeInfo, v81, v82, v83);
    byte_42E9AFD = 1;
  }
  memset(&v120, 0, sizeof(v120));
  v84 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_List_EventItemDisplayEntity___TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v84,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_List_EventItemDisplayEntity____ctor__);
  ListByEventIdAndScreenFlag = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
                                 this,
                                 eventId,
                                 screenFlag,
                                 isTerminalTop,
                                 v85);
  v119 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v119,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventItemDisplayGroupMaster___);
  if ( !ListByEventIdAndScreenFlag )
    goto LABEL_45;
  if ( !*(_QWORD *)&ListByEventIdAndScreenFlag->max_length )
    return (System_Collections_Generic_List_List_EventItemDisplayEntity___o *)v84;
  v117 = v84;
  v118 = (EventItemDisplayGroupMaster_o *)Instance;
  v89 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v89,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity____ctor__);
  v90 = *(_QWORD *)&ListByEventIdAndScreenFlag->max_length;
  if ( (int)v90 >= 1 )
  {
    v91 = screenFlag;
    v92 = 0LL;
    v93 = v91 - 16;
    while ( 1 )
    {
      if ( (unsigned int)v92 >= (unsigned int)v90 )
      {
        v116 = sub_B5D6C8(Instance);
        sub_B5D668(v116, 0LL);
      }
      v94 = ListByEventIdAndScreenFlag->m_Items[v92];
      if ( !v94 )
        goto LABEL_45;
      if ( v93 > 0x30 || ((1LL << v93) & 0x1000000010001LL) == 0 )
        break;
      v95 = v94->fields.screenFlag;
      if ( (v95 & 2) == 0 )
        goto LABEL_15;
LABEL_16:
      if ( !v89 )
        goto LABEL_45;
      groupIndex = v94->fields.groupIndex;
      v97 = v94->fields.eventId;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v89,
              groupIndex,
              (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___ContainsKey__) )
      {
        v98 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v98,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v89,
          groupIndex,
          (WarBoardAIRoute_RouteData_o *)v98,
          (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___set_Item__);
        v99 = (EventItemDisplayMaster_EventItemDisplaySort_o *)sub_B5D694(EventItemDisplayMaster_EventItemDisplaySort_TypeInfo);
        EventItemDisplayMaster_EventItemDisplaySort___ctor(v99, 0LL);
        Instance = v118;
        if ( !v118 )
          goto LABEL_45;
        Instance = EventItemDisplayGroupMaster__GetEntity(v118, v97, groupIndex, v100);
        if ( !v99 )
          goto LABEL_45;
        v99->fields.dispEventId = v97;
        v99->fields.dispGroupIndex = groupIndex;
        v101 = Instance ? *((_DWORD *)Instance + 7) : 0;
        Instance = v119;
        v99->fields.dispPriority = v101;
        if ( !v119 )
          goto LABEL_45;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v119,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v99,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Add__);
        v93 = v91 - 16;
      }
      Instance = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                   v89,
                   groupIndex,
                   (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__);
      if ( !Instance )
        goto LABEL_45;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v94,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__);
      v90 = *(_QWORD *)&ListByEventIdAndScreenFlag->max_length;
LABEL_27:
      if ( (int)++v92 >= (int)v90 )
        goto LABEL_28;
    }
    v95 = v94->fields.screenFlag;
LABEL_15:
    if ( (v95 & v91) == 0 )
      goto LABEL_27;
    goto LABEL_16;
  }
LABEL_28:
  Instance = EventItemDisplayMaster___c_TypeInfo;
  if ( (BYTE3(EventItemDisplayMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventItemDisplayMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemDisplayMaster___c_TypeInfo);
    Instance = EventItemDisplayMaster___c_TypeInfo;
  }
  static_fields = (struct EventItemDisplayMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
  v84 = v117;
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = EventItemDisplayMaster___c_TypeInfo->static_fields;
    }
    v104 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v104,
      Method_EventItemDisplayMaster___c__GetGroupItemLists_b__5_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventItemDisplayMaster_EventItemDisplaySort___ctor__);
    v105 = EventItemDisplayMaster___c_TypeInfo->static_fields;
    v105->__9__5_0 = (struct System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__o *)_9__5_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v105->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v106,
      v107,
      v108,
      v109,
      v110,
      v111);
  }
  if ( !v119 )
LABEL_45:
    sub_B5D69C(Instance, v88);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v119,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Sort__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v120,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v119,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__GetEnumerator__);
  while ( 1 )
  {
    v112 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v120,
             (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__MoveNext__);
    if ( !v112 )
      break;
    if ( !v120.fields.current )
      sub_B5D69C(v112, v113);
    if ( !v89 )
      sub_B5D69C(v112, v113);
    Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                    v89,
                                                                    (int32_t)v120.fields.current[1].monitor,
                                                                    (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__);
    if ( !v117 )
      sub_B5D69C(Item, Item);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v117,
      Item,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_List_EventItemDisplayEntity___Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v120,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__Dispose__);
  return (System_Collections_Generic_List_List_EventItemDisplayEntity___o *)v84;
}


// local variable allocation has failed, the output may be wrong!
EventItemDisplayEntity_array *__fastcall EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
        EventItemDisplayMaster_o *this,
        int32_t eventId,
        int32_t screenFlag,
        bool isTerminalTop,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x19
  __int64 v49; // x1
  void *list; // x0
  __int64 v51; // x1
  __int64 v52; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  unsigned int v54; // w24
  bool v55; // w28
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v57; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v60; // x3
  System_Collections_Generic_IEnumerator_T__c *v61; // x8
  unsigned __int64 v62; // x10
  int32_t *v63; // x11
  __int64 v64; // x0
  EventItemDisplayEntity_o *v65; // x0
  EventItemDisplayEntity_c *v66; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v67; // x23
  __int64 v68; // x9
  int32_t v69; // w8
  _BOOL8 IsEnable; // x0
  __int64 v71; // x1
  System_Collections_Generic_IEnumerator_T__c *v72; // x8
  unsigned __int64 v73; // x10
  int32_t *v74; // x11
  __int64 v75; // x0
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v78; // x21
  struct EventItemDisplayMaster___c_StaticFields *v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7

  if ( (byte_42E9AFC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      eventId,
      screenFlag,
      isTerminalTop);
    sub_B5D5C4(&Method_System_Comparison_EventItemDisplayEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_EventItemDisplayEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&EventItemDisplayEntity_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Sort__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventItemDisplayEntity__ToArray__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__, v36, v37, v38);
    sub_B5D5C4(&System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_EventItemDisplayMaster___c__GetListByEventIdAndScreenFlag_b__4_0__, v42, v43, v44);
    sub_B5D5C4(&EventItemDisplayMaster___c_TypeInfo, v45, v46, v47);
    byte_42E9AFC = 1;
  }
  v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v48,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_54;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v51);
  v54 = screenFlag - 16;
  v55 = screenFlag == 16 && isTerminalTop;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v57 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v57;
        p_offset += 4;
        if ( v57 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v52);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v61 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v62 = 0LL;
      v63 = &v61->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v63 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v62;
        v63 += 4;
        if ( v62 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v64 = (__int64)&v61->vtable[*v63].method;
    }
    else
    {
LABEL_17:
      v64 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v60);
    }
    v65 = (EventItemDisplayEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v64)(
                                        Enumerator,
                                        *(_QWORD *)(v64 + 8));
    v67 = (EventMissionProgressRequest_Argument_ProgressData_o *)v65;
    if ( v65 )
    {
      v66 = EventItemDisplayEntity_TypeInfo;
      v68 = *(&EventItemDisplayEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v65->klass->_2.bitflags2 + 1) < (unsigned int)v68
        || (EventItemDisplayEntity_c *)v65->klass->_2.typeHierarchy[v68 - 1] != EventItemDisplayEntity_TypeInfo )
      {
        v65 = (EventItemDisplayEntity_o *)sub_B5D990(v65);
LABEL_52:
        sub_B5D69C(v65, v66);
      }
    }
    if ( v55 )
    {
      if ( !v65 )
        sub_B5D69C(0LL, v66);
      goto LABEL_29;
    }
    if ( !v65 )
      goto LABEL_52;
    if ( v65->fields.eventId == eventId )
    {
      if ( v54 > 0x30 || ((1LL << v54) & 0x1000000010001LL) == 0 )
      {
        v69 = v65->fields.screenFlag;
        goto LABEL_30;
      }
LABEL_29:
      v69 = v65->fields.screenFlag;
      if ( (v69 & 2) != 0 )
      {
LABEL_31:
        IsEnable = EventItemDisplayEntity__IsEnable(v65, (const MethodInfo *)v66);
        if ( IsEnable )
        {
          if ( !v48 )
            sub_B5D69C(IsEnable, v71);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v48,
            v67,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__);
        }
      }
      else
      {
LABEL_30:
        if ( (v69 & screenFlag) != 0 )
          goto LABEL_31;
      }
    }
  }
  v72 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v73 = 0LL;
    v74 = &v72->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v74 - 1) != System_IDisposable_TypeInfo )
    {
      ++v73;
      v74 += 4;
      if ( v73 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v75 = (__int64)&v72->vtable[*v74].method;
  }
  else
  {
LABEL_39:
    v75 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v60);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v75)(Enumerator, *(_QWORD *)(v75 + 8));
  list = EventItemDisplayMaster___c_TypeInfo;
  if ( (BYTE3(EventItemDisplayMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventItemDisplayMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventItemDisplayMaster___c_TypeInfo);
    list = EventItemDisplayMaster___c_TypeInfo;
  }
  static_fields = (struct EventItemDisplayMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = EventItemDisplayMaster___c_TypeInfo->static_fields;
    }
    v78 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventItemDisplayEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v78,
      Method_EventItemDisplayMaster___c__GetListByEventIdAndScreenFlag_b__4_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventItemDisplayEntity___ctor__);
    v79 = EventItemDisplayMaster___c_TypeInfo->static_fields;
    v79->__9__4_0 = (struct System_Comparison_EventItemDisplayEntity__o *)_9__4_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v79->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
  }
  if ( !v48 )
LABEL_54:
    sub_B5D69C(list, v49);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v48,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventItemDisplayEntity__Sort__);
  return (EventItemDisplayEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v48,
                                           (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventItemDisplayEntity__ToArray__);
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

  if ( (byte_42E9AFA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&eventId);
    byte_42E9AFA = 1;
  }
  PK = EventItemDisplayEntity__CreatePK(id, eventId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__TryGetEntity__);
}


void __fastcall EventItemDisplayMaster_EventItemDisplaySort___ctor(
        EventItemDisplayMaster_EventItemDisplaySort_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventItemDisplayMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E6557 & 1) == 0 )
  {
    sub_B5D5C4(&EventItemDisplayMaster___c_TypeInfo, v1, v2, v3);
    byte_42E6557 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventItemDisplayMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventItemDisplayMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventItemDisplayMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
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
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}