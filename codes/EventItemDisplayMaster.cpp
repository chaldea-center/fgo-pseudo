void __fastcall EventItemDisplayMaster___ctor(EventItemDisplayMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188D46 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string___ctor__, method);
    byte_4188D46 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    162,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventItemDisplayEntity_o *__fastcall EventItemDisplayMaster__GetEntity(
        EventItemDisplayMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4188D44 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4188D44 = 1;
  }
  PK = EventItemDisplayEntity__CreatePK(id, eventId, *(const MethodInfo **)&eventId);
  return (EventItemDisplayEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_24E4520 *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__GetEntity__);
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
  void *Instance; // x0
  __int64 v38; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v39; // x21
  __int64 v40; // x8
  int32_t v41; // w19
  __int64 v42; // x20
  unsigned int v43; // w24
  EventItemDisplayEntity_o *v44; // x25
  int32_t v45; // w9
  int32_t groupIndex; // w26
  int32_t v47; // w27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x28
  EventItemDisplayMaster_EventItemDisplaySort_o *v49; // x28
  const MethodInfo *v50; // x3
  int32_t v51; // w8
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v54; // x23
  struct EventItemDisplayMaster___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  _BOOL8 v62; // x0
  __int64 v63; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v66; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v67; // [xsp+8h] [xbp-88h]
  EventItemDisplayGroupMaster_o *v68; // [xsp+18h] [xbp-78h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v69; // [xsp+20h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_T__o v70; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4188D48 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_EventItemDisplayMaster_EventItemDisplaySort___ctor__, *(_QWORD *)&eventId);
    sub_B2C35C(&System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventItemDisplayGroupMaster___, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___ContainsKey__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity____ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___set_Item__, v14);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___TypeInfo, v15);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__Dispose__,
      v16);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__MoveNext__,
      v17);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__get_Current__,
      v18);
    sub_B2C35C(&EventItemDisplayMaster_EventItemDisplaySort_TypeInfo, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_EventItemDisplayEntity___Add__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Add__, v22);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__GetEnumerator__,
      v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Sort__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_EventItemDisplayEntity____ctor__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort___ctor__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__, v27);
    sub_B2C35C(&System_Collections_Generic_List_List_EventItemDisplayEntity___TypeInfo, v28);
    sub_B2C35C(&System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo, v29);
    sub_B2C35C(&System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo, v30);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    sub_B2C35C(&Method_EventItemDisplayMaster___c__GetGroupItemLists_b__5_0__, v32);
    sub_B2C35C(&EventItemDisplayMaster___c_TypeInfo, v33);
    byte_4188D48 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_List_EventItemDisplayEntity___TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_List_EventItemDisplayEntity____ctor__);
  ListByEventIdAndScreenFlag = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
                                 this,
                                 eventId,
                                 screenFlag,
                                 isTerminalTop,
                                 v35);
  v69 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v69,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventItemDisplayGroupMaster___);
  if ( !ListByEventIdAndScreenFlag )
    goto LABEL_45;
  if ( !*(_QWORD *)&ListByEventIdAndScreenFlag->max_length )
    return (System_Collections_Generic_List_List_EventItemDisplayEntity___o *)v34;
  v67 = v34;
  v68 = (EventItemDisplayGroupMaster_o *)Instance;
  v39 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v39,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity____ctor__);
  v40 = *(_QWORD *)&ListByEventIdAndScreenFlag->max_length;
  if ( (int)v40 >= 1 )
  {
    v41 = screenFlag;
    v42 = 0LL;
    v43 = v41 - 16;
    while ( 1 )
    {
      if ( (unsigned int)v42 >= (unsigned int)v40 )
      {
        v66 = sub_B2C460(Instance);
        sub_B2C400(v66, 0LL);
      }
      v44 = ListByEventIdAndScreenFlag->m_Items[v42];
      if ( !v44 )
        goto LABEL_45;
      if ( v43 > 0x30 || ((1LL << v43) & 0x1000000010001LL) == 0 )
        break;
      v45 = v44->fields.screenFlag;
      if ( (v45 & 2) == 0 )
        goto LABEL_15;
LABEL_16:
      if ( !v39 )
        goto LABEL_45;
      groupIndex = v44->fields.groupIndex;
      v47 = v44->fields.eventId;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v39,
              groupIndex,
              (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___ContainsKey__) )
      {
        v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v48,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v39,
          groupIndex,
          (WarBoardAIRoute_RouteData_o *)v48,
          (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___set_Item__);
        v49 = (EventItemDisplayMaster_EventItemDisplaySort_o *)sub_B2C42C(EventItemDisplayMaster_EventItemDisplaySort_TypeInfo);
        EventItemDisplayMaster_EventItemDisplaySort___ctor(v49, 0LL);
        Instance = v68;
        if ( !v68 )
          goto LABEL_45;
        Instance = EventItemDisplayGroupMaster__GetEntity(v68, v47, groupIndex, v50);
        if ( !v49 )
          goto LABEL_45;
        v49->fields.dispEventId = v47;
        v49->fields.dispGroupIndex = groupIndex;
        v51 = Instance ? *((_DWORD *)Instance + 7) : 0;
        Instance = v69;
        v49->fields.dispPriority = v51;
        if ( !v69 )
          goto LABEL_45;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v69,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v49,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Add__);
        v43 = v41 - 16;
      }
      Instance = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                   v39,
                   groupIndex,
                   (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__);
      if ( !Instance )
        goto LABEL_45;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__);
      v40 = *(_QWORD *)&ListByEventIdAndScreenFlag->max_length;
LABEL_27:
      if ( (int)++v42 >= (int)v40 )
        goto LABEL_28;
    }
    v45 = v44->fields.screenFlag;
LABEL_15:
    if ( (v45 & v41) == 0 )
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
  v34 = v67;
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = EventItemDisplayMaster___c_TypeInfo->static_fields;
    }
    v54 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v54,
      Method_EventItemDisplayMaster___c__GetGroupItemLists_b__5_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventItemDisplayMaster_EventItemDisplaySort___ctor__);
    v55 = EventItemDisplayMaster___c_TypeInfo->static_fields;
    v55->__9__5_0 = (struct System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__o *)_9__5_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v55->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
  }
  if ( !v69 )
LABEL_45:
    sub_B2C434(Instance, v38);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v69,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Sort__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v70,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v69,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__GetEnumerator__);
  while ( 1 )
  {
    v62 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v70,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__MoveNext__);
    if ( !v62 )
      break;
    if ( !v70.fields.current )
      sub_B2C434(v62, v63);
    if ( !v39 )
      sub_B2C434(v62, v63);
    Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                    v39,
                                                                    (int32_t)v70.fields.current[1].monitor,
                                                                    (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__);
    if ( !v67 )
      sub_B2C434(Item, Item);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v67,
      Item,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_List_EventItemDisplayEntity___Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v70,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__Dispose__);
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
  __int64 v23; // x1
  void *list; // x0
  __int64 v25; // x1
  __int64 v26; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  unsigned int v28; // w24
  bool v29; // w28
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v34; // x3
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  EventItemDisplayEntity_o *v39; // x0
  EventItemDisplayEntity_c *v40; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v41; // x23
  __int64 v42; // x9
  int32_t v43; // w8
  _BOOL8 IsEnable; // x0
  __int64 v45; // x1
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  unsigned __int64 v47; // x10
  int32_t *v48; // x11
  __int64 v49; // x0
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v52; // x21
  struct EventItemDisplayMaster___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7

  if ( (byte_4188D47 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Comparison_EventItemDisplayEntity___ctor__, v9);
    sub_B2C35C(&System_Comparison_EventItemDisplayEntity__TypeInfo, v10);
    sub_B2C35C(&EventItemDisplayEntity_TypeInfo, v11);
    sub_B2C35C(&System_IDisposable_TypeInfo, v12);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Sort__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventItemDisplayEntity__ToArray__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__, v18);
    sub_B2C35C(&System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo, v19);
    sub_B2C35C(&Method_EventItemDisplayMaster___c__GetListByEventIdAndScreenFlag_b__4_0__, v20);
    sub_B2C35C(&EventItemDisplayMaster___c_TypeInfo, v21);
    byte_4188D47 = 1;
  }
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_54;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v25);
  v28 = screenFlag - 16;
  v29 = screenFlag == 16 && isTerminalTop;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v31;
        p_offset += 4;
        if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v26);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v35 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v37 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v36;
        v37 += 4;
        if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v38 = (__int64)&v35->vtable[*v37].method;
    }
    else
    {
LABEL_17:
      v38 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v34);
    }
    v39 = (EventItemDisplayEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
                                        Enumerator,
                                        *(_QWORD *)(v38 + 8));
    v41 = (EventMissionProgressRequest_Argument_ProgressData_o *)v39;
    if ( v39 )
    {
      v40 = EventItemDisplayEntity_TypeInfo;
      v42 = *(&EventItemDisplayEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v39->klass->_2.bitflags2 + 1) < (unsigned int)v42
        || (EventItemDisplayEntity_c *)v39->klass->_2.typeHierarchy[v42 - 1] != EventItemDisplayEntity_TypeInfo )
      {
        v39 = (EventItemDisplayEntity_o *)sub_B2C728(v39);
LABEL_52:
        sub_B2C434(v39, v40);
      }
    }
    if ( v29 )
    {
      if ( !v39 )
        sub_B2C434(0LL, v40);
      goto LABEL_29;
    }
    if ( !v39 )
      goto LABEL_52;
    if ( v39->fields.eventId == eventId )
    {
      if ( v28 > 0x30 || ((1LL << v28) & 0x1000000010001LL) == 0 )
      {
        v43 = v39->fields.screenFlag;
        goto LABEL_30;
      }
LABEL_29:
      v43 = v39->fields.screenFlag;
      if ( (v43 & 2) != 0 )
      {
LABEL_31:
        IsEnable = EventItemDisplayEntity__IsEnable(v39, (const MethodInfo *)v40);
        if ( IsEnable )
        {
          if ( !v22 )
            sub_B2C434(IsEnable, v45);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v22,
            v41,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__);
        }
      }
      else
      {
LABEL_30:
        if ( (v43 & screenFlag) != 0 )
          goto LABEL_31;
      }
    }
  }
  v46 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v47 = 0LL;
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      ++v47;
      v48 += 4;
      if ( v47 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_39:
    v49 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v34);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(Enumerator, *(_QWORD *)(v49 + 8));
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
    v52 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventItemDisplayEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v52,
      Method_EventItemDisplayMaster___c__GetListByEventIdAndScreenFlag_b__4_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventItemDisplayEntity___ctor__);
    v53 = EventItemDisplayMaster___c_TypeInfo->static_fields;
    v53->__9__4_0 = (struct System_Comparison_EventItemDisplayEntity__o *)_9__4_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v53->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  if ( !v22 )
LABEL_54:
    sub_B2C434(list, v23);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v22,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventItemDisplayEntity__Sort__);
  return (EventItemDisplayEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
                                           (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventItemDisplayEntity__ToArray__);
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

  if ( (byte_4188D45 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__TryGetEntity__, entity);
    byte_4188D45 = 1;
  }
  PK = EventItemDisplayEntity__CreatePK(id, eventId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__TryGetEntity__);
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
  Il2CppObject *v2; // x19
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4184B1C & 1) == 0 )
  {
    sub_B2C35C(&EventItemDisplayMaster___c_TypeInfo, v1);
    byte_4184B1C = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventItemDisplayMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventItemDisplayMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventItemDisplayMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
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
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}