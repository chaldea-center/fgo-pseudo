void __fastcall EventItemDisplayMaster___ctor(EventItemDisplayMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B1131 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string___ctor__);
    byte_42B1131 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    163,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventItemDisplayEntity_o *__fastcall EventItemDisplayMaster__GetEntity(
        EventItemDisplayMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B112F & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__GetEntity__);
    byte_42B112F = 1;
  }
  PK = EventItemDisplayEntity__CreatePK(id, eventId, *(const MethodInfo **)&eventId);
  return (EventItemDisplayEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_23E2728 *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__GetEntity__);
}


System_Collections_Generic_List_List_EventItemDisplayEntity___o *__fastcall EventItemDisplayMaster__GetGroupItemLists(
        EventItemDisplayMaster_o *this,
        int32_t eventId,
        int32_t screenFlag,
        bool isTerminalTop,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  const MethodInfo *v10; // x4
  EventItemDisplayEntity_array *ListByEventIdAndScreenFlag; // x23
  void *Instance; // x0
  __int64 v13; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v14; // x21
  __int64 v15; // x8
  int32_t v16; // w19
  __int64 v17; // x20
  unsigned int v18; // w24
  EventItemDisplayEntity_o *v19; // x25
  int32_t v20; // w9
  int32_t groupIndex; // w26
  int32_t v22; // w27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x28
  EventItemDisplayMaster_EventItemDisplaySort_o *v24; // x28
  const MethodInfo *v25; // x3
  int32_t v26; // w8
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v29; // x23
  struct EventItemDisplayMaster___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  _BOOL8 v37; // x0
  __int64 v38; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v41; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // [xsp+8h] [xbp-88h]
  EventItemDisplayGroupMaster_o *v43; // [xsp+18h] [xbp-78h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // [xsp+20h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_42B1133 & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_EventItemDisplayMaster_EventItemDisplaySort___ctor__);
    sub_B52984(&System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventItemDisplayGroupMaster___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity____ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___set_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__get_Current__);
    sub_B52984(&EventItemDisplayMaster_EventItemDisplaySort_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_List_EventItemDisplayEntity___Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_List_EventItemDisplayEntity____ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_List_EventItemDisplayEntity___TypeInfo);
    sub_B52984(&System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_EventItemDisplayMaster___c__GetGroupItemLists_b__5_0__);
    sub_B52984(&EventItemDisplayMaster___c_TypeInfo);
    byte_42B1133 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_List_EventItemDisplayEntity___TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_List_EventItemDisplayEntity____ctor__);
  ListByEventIdAndScreenFlag = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
                                 this,
                                 eventId,
                                 screenFlag,
                                 isTerminalTop,
                                 v10);
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventItemDisplayGroupMaster___);
  if ( !ListByEventIdAndScreenFlag )
    goto LABEL_45;
  if ( !*(_QWORD *)&ListByEventIdAndScreenFlag->max_length )
    return (System_Collections_Generic_List_List_EventItemDisplayEntity___o *)v9;
  v42 = v9;
  v43 = (EventItemDisplayGroupMaster_o *)Instance;
  v14 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v14,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity____ctor__);
  v15 = *(_QWORD *)&ListByEventIdAndScreenFlag->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = screenFlag;
    v17 = 0LL;
    v18 = v16 - 16;
    while ( 1 )
    {
      if ( (unsigned int)v17 >= (unsigned int)v15 )
      {
        v41 = sub_B52A88(Instance);
        sub_B52A28(v41, 0LL);
      }
      v19 = ListByEventIdAndScreenFlag->m_Items[v17];
      if ( !v19 )
        goto LABEL_45;
      if ( v18 > 0x30 || ((1LL << v18) & 0x1000000010001LL) == 0 )
        break;
      v20 = v19->fields.screenFlag;
      if ( (v20 & 2) == 0 )
        goto LABEL_15;
LABEL_16:
      if ( !v14 )
        goto LABEL_45;
      groupIndex = v19->fields.groupIndex;
      v22 = v19->fields.eventId;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v14,
              groupIndex,
              (const MethodInfo_2F27F7C *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___ContainsKey__) )
      {
        v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v23,
          (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v14,
          groupIndex,
          (WarBoardAIRoute_RouteData_o *)v23,
          (const MethodInfo_2F27CE0 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___set_Item__);
        v24 = (EventItemDisplayMaster_EventItemDisplaySort_o *)sub_B52A54(EventItemDisplayMaster_EventItemDisplaySort_TypeInfo);
        EventItemDisplayMaster_EventItemDisplaySort___ctor(v24, 0LL);
        Instance = v43;
        if ( !v43 )
          goto LABEL_45;
        Instance = EventItemDisplayGroupMaster__GetEntity(v43, v22, groupIndex, v25);
        if ( !v24 )
          goto LABEL_45;
        v24->fields.dispEventId = v22;
        v24->fields.dispGroupIndex = groupIndex;
        v26 = Instance ? *((_DWORD *)Instance + 7) : 0;
        Instance = v44;
        v24->fields.dispPriority = v26;
        if ( !v44 )
          goto LABEL_45;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v44,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Add__);
        v18 = v16 - 16;
      }
      Instance = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                   v14,
                   groupIndex,
                   (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__);
      if ( !Instance )
        goto LABEL_45;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__);
      v15 = *(_QWORD *)&ListByEventIdAndScreenFlag->max_length;
LABEL_27:
      if ( (int)++v17 >= (int)v15 )
        goto LABEL_28;
    }
    v20 = v19->fields.screenFlag;
LABEL_15:
    if ( (v20 & v16) == 0 )
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
  v9 = v42;
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = EventItemDisplayMaster___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v29,
      Method_EventItemDisplayMaster___c__GetGroupItemLists_b__5_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_EventItemDisplayMaster_EventItemDisplaySort___ctor__);
    v30 = EventItemDisplayMaster___c_TypeInfo->static_fields;
    v30->__9__5_0 = (struct System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__o *)_9__5_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v30->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  if ( !v44 )
LABEL_45:
    sub_B52A5C(Instance, v13);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v44,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Sort__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v45,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v44,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__GetEnumerator__);
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v45,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__MoveNext__);
    if ( !v37 )
      break;
    if ( !v45.fields.current )
      sub_B52A5C(v37, v38);
    if ( !v14 )
      sub_B52A5C(v37, v38);
    Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                    v14,
                                                                    (int32_t)v45.fields.current[1].monitor,
                                                                    (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__);
    if ( !v42 )
      sub_B52A5C(Item, Item);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v42,
      Item,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_List_EventItemDisplayEntity___Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v45,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__Dispose__);
  return (System_Collections_Generic_List_List_EventItemDisplayEntity___o *)v9;
}


EventItemDisplayEntity_array *__fastcall EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
        EventItemDisplayMaster_o *this,
        int32_t eventId,
        int32_t screenFlag,
        bool isTerminalTop,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  __int64 v10; // x1
  void *list; // x0
  __int64 v12; // x1
  __int64 v13; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  unsigned int v15; // w24
  bool v16; // w28
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v21; // x3
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  EventItemDisplayEntity_o *v26; // x0
  EventItemDisplayEntity_c *v27; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x23
  __int64 v29; // x9
  int32_t v30; // w8
  _BOOL8 IsEnable; // x0
  __int64 v32; // x1
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v39; // x21
  struct EventItemDisplayMaster___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_42B1132 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Comparison_EventItemDisplayEntity___ctor__);
    sub_B52984(&System_Comparison_EventItemDisplayEntity__TypeInfo);
    sub_B52984(&EventItemDisplayEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_EventItemDisplayEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
    sub_B52984(&Method_EventItemDisplayMaster___c__GetListByEventIdAndScreenFlag_b__4_0__);
    sub_B52984(&EventItemDisplayMaster___c_TypeInfo);
    byte_42B1132 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_54;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v12);
  v15 = screenFlag - 16;
  v16 = screenFlag == 16 && isTerminalTop;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v13);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_17:
      v25 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v21);
    }
    v26 = (EventItemDisplayEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                        Enumerator,
                                        *(_QWORD *)(v25 + 8));
    v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)v26;
    if ( v26 )
    {
      v27 = EventItemDisplayEntity_TypeInfo;
      v29 = *(&EventItemDisplayEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v29
        || (EventItemDisplayEntity_c *)v26->klass->_2.typeHierarchy[v29 - 1] != EventItemDisplayEntity_TypeInfo )
      {
        v26 = (EventItemDisplayEntity_o *)sub_B52D50(v26);
LABEL_52:
        sub_B52A5C(v26, v27);
      }
    }
    if ( v16 )
    {
      if ( !v26 )
        sub_B52A5C(0LL, v27);
      goto LABEL_29;
    }
    if ( !v26 )
      goto LABEL_52;
    if ( v26->fields.eventId == eventId )
    {
      if ( v15 > 0x30 || ((1LL << v15) & 0x1000000010001LL) == 0 )
      {
        v30 = v26->fields.screenFlag;
        goto LABEL_30;
      }
LABEL_29:
      v30 = v26->fields.screenFlag;
      if ( (v30 & 2) != 0 )
      {
LABEL_31:
        IsEnable = EventItemDisplayEntity__IsEnable(v26, (const MethodInfo *)v27);
        if ( IsEnable )
        {
          if ( !v9 )
            sub_B52A5C(IsEnable, v32);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v9,
            v28,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__);
        }
      }
      else
      {
LABEL_30:
        if ( (v30 & screenFlag) != 0 )
          goto LABEL_31;
      }
    }
  }
  v33 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      ++v34;
      v35 += 4;
      if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_39:
    v36 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v21);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
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
    v39 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventItemDisplayEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v39,
      Method_EventItemDisplayMaster___c__GetListByEventIdAndScreenFlag_b__4_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_EventItemDisplayEntity___ctor__);
    v40 = EventItemDisplayMaster___c_TypeInfo->static_fields;
    v40->__9__4_0 = (struct System_Comparison_EventItemDisplayEntity__o *)_9__4_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v40->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  if ( !v9 )
LABEL_54:
    sub_B52A5C(list, v10);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v9,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_EventItemDisplayEntity__Sort__);
  return (EventItemDisplayEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                           (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventItemDisplayEntity__ToArray__);
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

  if ( (byte_42B1130 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__TryGetEntity__);
    byte_42B1130 = 1;
  }
  PK = EventItemDisplayEntity__CreatePK(id, eventId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__TryGetEntity__);
}


void __fastcall EventItemDisplayMaster_EventItemDisplaySort___ctor(
        EventItemDisplayMaster_EventItemDisplaySort_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventItemDisplayMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD919 & 1) == 0 )
  {
    sub_B52984(&EventItemDisplayMaster___c_TypeInfo);
    byte_42AD919 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(EventItemDisplayMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventItemDisplayMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventItemDisplayMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
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
    sub_B52A5C(this, a);
  return b->fields.priority - a->fields.priority;
}