void __fastcall EventItemDisplayMaster___ctor(EventItemDisplayMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42159EE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string___ctor__, method);
    byte_42159EE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    162,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventItemDisplayEntity_o *__fastcall EventItemDisplayMaster__GetEntity(
        EventItemDisplayMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42159EC & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_42159EC = 1;
  }
  PK = EventItemDisplayEntity__CreatePK(id, eventId, *(const MethodInfo **)&eventId);
  return (EventItemDisplayEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_266A024 *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__GetEntity__);
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
  void *Instance; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x8
  int32_t v46; // w19
  __int64 v47; // x20
  unsigned int v48; // w24
  EventItemDisplayEntity_o *v49; // x25
  int32_t v50; // w9
  int32_t groupIndex; // w26
  int32_t v52; // w27
  __int64 v53; // x1
  __int64 v54; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x28
  __int64 v56; // x1
  __int64 v57; // x2
  EventItemDisplayMaster_EventItemDisplaySort_o *v58; // x28
  const MethodInfo *v59; // x3
  int32_t v60; // w8
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v63; // x23
  struct EventItemDisplayMaster___c_StaticFields *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  _BOOL8 v71; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v74; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v75; // [xsp+8h] [xbp-88h]
  EventItemDisplayGroupMaster_o *v76; // [xsp+18h] [xbp-78h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v77; // [xsp+20h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_T__o v78; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_42159F0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_EventItemDisplayMaster_EventItemDisplaySort___ctor__, *(_QWORD *)&eventId);
    sub_B0D8A4(&System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventItemDisplayGroupMaster___, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___ContainsKey__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity____ctor__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___set_Item__, v14);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___TypeInfo, v15);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__Dispose__,
      v16);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__MoveNext__,
      v17);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__get_Current__,
      v18);
    sub_B0D8A4(&EventItemDisplayMaster_EventItemDisplaySort_TypeInfo, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_EventItemDisplayEntity___Add__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Add__, v22);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__GetEnumerator__,
      v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Sort__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_EventItemDisplayEntity____ctor__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort___ctor__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__, v27);
    sub_B0D8A4(&System_Collections_Generic_List_List_EventItemDisplayEntity___TypeInfo, v28);
    sub_B0D8A4(&System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo, v29);
    sub_B0D8A4(&System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo, v30);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    sub_B0D8A4(&Method_EventItemDisplayMaster___c__GetGroupItemLists_b__5_0__, v32);
    sub_B0D8A4(&EventItemDisplayMaster___c_TypeInfo, v33);
    byte_42159F0 = 1;
  }
  memset(&v78, 0, sizeof(v78));
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_List_EventItemDisplayEntity___TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&screenFlag);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_List_EventItemDisplayEntity____ctor__);
  ListByEventIdAndScreenFlag = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
                                 this,
                                 eventId,
                                 screenFlag,
                                 isTerminalTop,
                                 v35);
  v77 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo,
                                                                                                  v37,
                                                                                                  v38);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v77,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventItemDisplayGroupMaster___);
  if ( !ListByEventIdAndScreenFlag )
    goto LABEL_45;
  if ( !*(_QWORD *)&ListByEventIdAndScreenFlag->max_length )
    return (System_Collections_Generic_List_List_EventItemDisplayEntity___o *)v34;
  v75 = v34;
  v76 = (EventItemDisplayGroupMaster_o *)Instance;
  v42 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___TypeInfo,
                                                                                                   v40,
                                                                                                   v41);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v42,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity____ctor__);
  v45 = *(_QWORD *)&ListByEventIdAndScreenFlag->max_length;
  if ( (int)v45 >= 1 )
  {
    v46 = screenFlag;
    v47 = 0LL;
    v48 = v46 - 16;
    while ( 1 )
    {
      if ( (unsigned int)v47 >= (unsigned int)v45 )
      {
        v74 = sub_B0D9A8(Instance);
        sub_B0D948(v74, 0LL);
      }
      v49 = ListByEventIdAndScreenFlag->m_Items[v47];
      if ( !v49 )
        goto LABEL_45;
      if ( v48 > 0x30 || ((1LL << v48) & 0x1000000010001LL) == 0 )
        break;
      v50 = v49->fields.screenFlag;
      if ( (v50 & 2) == 0 )
        goto LABEL_15;
LABEL_16:
      if ( !v42 )
        goto LABEL_45;
      groupIndex = v49->fields.groupIndex;
      v52 = v49->fields.eventId;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v42,
              groupIndex,
              (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___ContainsKey__) )
      {
        v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo, v53, v54);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v55,
          (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v42,
          groupIndex,
          (WarBoardAIRoute_RouteData_o *)v55,
          (const MethodInfo_2E90400 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___set_Item__);
        v58 = (EventItemDisplayMaster_EventItemDisplaySort_o *)sub_B0D974(
                                                                 EventItemDisplayMaster_EventItemDisplaySort_TypeInfo,
                                                                 v56,
                                                                 v57);
        EventItemDisplayMaster_EventItemDisplaySort___ctor(v58, 0LL);
        Instance = v76;
        if ( !v76 )
          goto LABEL_45;
        Instance = EventItemDisplayGroupMaster__GetEntity(v76, v52, groupIndex, v59);
        if ( !v58 )
          goto LABEL_45;
        v58->fields.dispEventId = v52;
        v58->fields.dispGroupIndex = groupIndex;
        v60 = Instance ? *((_DWORD *)Instance + 7) : 0;
        Instance = v77;
        v58->fields.dispPriority = v60;
        if ( !v77 )
          goto LABEL_45;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v77,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v58,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Add__);
        v48 = v46 - 16;
      }
      Instance = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                   v42,
                   groupIndex,
                   (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__);
      if ( !Instance )
        goto LABEL_45;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v49,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__);
      v45 = *(_QWORD *)&ListByEventIdAndScreenFlag->max_length;
LABEL_27:
      if ( (int)++v47 >= (int)v45 )
        goto LABEL_28;
    }
    v50 = v49->fields.screenFlag;
LABEL_15:
    if ( (v50 & v46) == 0 )
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
  v34 = v75;
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = EventItemDisplayMaster___c_TypeInfo->static_fields;
    }
    v63 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__TypeInfo,
                                                                          v43,
                                                                          v44);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v63,
      Method_EventItemDisplayMaster___c__GetGroupItemLists_b__5_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventItemDisplayMaster_EventItemDisplaySort___ctor__);
    v64 = EventItemDisplayMaster___c_TypeInfo->static_fields;
    v64->__9__5_0 = (struct System_Comparison_EventItemDisplayMaster_EventItemDisplaySort__o *)_9__5_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v64->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
  }
  if ( !v77 )
LABEL_45:
    sub_B0D97C(Instance);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v77,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__Sort__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v78,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v77,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventItemDisplayMaster_EventItemDisplaySort__GetEnumerator__);
  while ( 1 )
  {
    v71 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v78,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__MoveNext__);
    if ( !v71 )
      break;
    if ( !v78.fields.current )
      sub_B0D97C(v71);
    if ( !v42 )
      sub_B0D97C(v71);
    Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                    v42,
                                                                    (int32_t)v78.fields.current[1].monitor,
                                                                    (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__List_EventItemDisplayEntity___get_Item__);
    if ( !v75 )
      sub_B0D97C(Item);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v75,
      Item,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_List_EventItemDisplayEntity___Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v78,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventItemDisplayMaster_EventItemDisplaySort__Dispose__);
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
  void *list; // x0
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
  _BOOL8 IsEnable; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v49; // x21
  struct EventItemDisplayMaster___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7

  if ( (byte_42159EF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Comparison_EventItemDisplayEntity___ctor__, v9);
    sub_B0D8A4(&System_Comparison_EventItemDisplayEntity__TypeInfo, v10);
    sub_B0D8A4(&EventItemDisplayEntity_TypeInfo, v11);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v12);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventItemDisplayEntity__Sort__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventItemDisplayEntity__ToArray__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__, v18);
    sub_B0D8A4(&System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo, v19);
    sub_B0D8A4(&Method_EventItemDisplayMaster___c__GetListByEventIdAndScreenFlag_b__4_0__, v20);
    sub_B0D8A4(&EventItemDisplayMaster___c_TypeInfo, v21);
    byte_42159EF = 1;
  }
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventItemDisplayEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&screenFlag);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventItemDisplayEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_54;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
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
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v34 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
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
        v35 = (EventItemDisplayEntity_o *)sub_B0DC70(v35);
LABEL_52:
        sub_B0D97C(v35);
      }
    }
    if ( v26 )
    {
      if ( !v35 )
        sub_B0D97C(0LL);
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
        IsEnable = EventItemDisplayEntity__IsEnable(v35, (const MethodInfo *)v36);
        if ( IsEnable )
        {
          if ( !v22 )
            sub_B0D97C(IsEnable);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v22,
            v37,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventItemDisplayEntity__Add__);
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
  v41 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v42 = 0LL;
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      ++v42;
      v43 += 4;
      if ( v42 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v44 = (__int64)&v41->vtable[*v43].method;
  }
  else
  {
LABEL_39:
    v44 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(Enumerator, *(_QWORD *)(v44 + 8));
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
    v49 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_EventItemDisplayEntity__TypeInfo,
                                                                          v45,
                                                                          v46);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v49,
      Method_EventItemDisplayMaster___c__GetListByEventIdAndScreenFlag_b__4_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventItemDisplayEntity___ctor__);
    v50 = EventItemDisplayMaster___c_TypeInfo->static_fields;
    v50->__9__4_0 = (struct System_Comparison_EventItemDisplayEntity__o *)_9__4_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v50->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  if ( !v22 )
LABEL_54:
    sub_B0D97C(list);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v22,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventItemDisplayEntity__Sort__);
  return (EventItemDisplayEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
                                           (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventItemDisplayEntity__ToArray__);
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

  if ( (byte_42159ED & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__TryGetEntity__, entity);
    byte_42159ED = 1;
  }
  PK = EventItemDisplayEntity__CreatePK(id, eventId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_EventItemDisplayMaster__EventItemDisplayEntity__string__TryGetEntity__);
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
  Il2CppObject *v3; // x19
  struct EventItemDisplayMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4211B82 & 1) == 0 )
  {
    sub_B0D8A4(&EventItemDisplayMaster___c_TypeInfo, v1);
    byte_4211B82 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventItemDisplayMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventItemDisplayMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventItemDisplayMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return b->fields.priority - a->fields.priority;
}