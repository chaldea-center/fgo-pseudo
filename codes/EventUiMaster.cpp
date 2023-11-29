void __fastcall EventUiMaster___ctor(EventUiMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F9C27 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventUiMaster__EventUiEntity__string___ctor__, method);
    byte_40F9C27 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    269,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventUiMaster__EventUiEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventUiEntity__o *__fastcall EventUiMaster__GetDispListByWarId(
        EventUiMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
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
  System_Collections_Generic_List_EventUiEntity__o *ListByWarId; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v29; // x21
  EventUiReleaseMaster_o *Master_WarQuestSelectionMaster; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x19
  int size; // w8
  unsigned int v37; // w25
  EventUiEntity_o *v38; // x23
  const MethodInfo *v39; // x2
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v46; // x20
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_40F9C2B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventUiReleaseMaster___, *(_QWORD *)&warId);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_EventUiEntity___, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__Dispose__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__MoveNext__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__get_Current__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventUiEntity__Add__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventUiEntity__GetEnumerator__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventUiEntity___ctor___66733896, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventUiEntity__get_Count__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventUiEntity__get_Item__, v22);
    sub_B16FFC(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v23);
    byte_40F9C2B = 1;
  }
  memset(&v48, 0, sizeof(v48));
  ListByWarId = EventUiMaster__GetListByWarId(this, warId, method);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)ListByWarId,
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_EventUiEntity___) )
  {
    v29 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                     System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo,
                                                                                                     v25,
                                                                                                     v26,
                                                                                                     v27,
                                                                                                     v28);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v29,
      (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventUiReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
    v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_EventUiEntity__TypeInfo,
                                                                                                    v31,
                                                                                                    v32,
                                                                                                    v33,
                                                                                                    v34);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v35,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
    if ( !ListByWarId )
      goto LABEL_31;
    size = ListByWarId->fields._size;
    if ( size >= 1 )
    {
      v37 = 0;
      while ( 1 )
      {
        if ( size <= v37 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v38 = ListByWarId->fields._items->m_Items[v37];
        if ( !v38 || !v29 )
          break;
        if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v29,
                v38->fields.id,
                (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__) )
          goto LABEL_17;
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 v29,
                 v38->fields.id,
                 (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__);
        if ( !Item )
          break;
        if ( SHIDWORD(Item->fields.squareData) < v38->fields.priority )
        {
LABEL_17:
          if ( !Master_WarQuestSelectionMaster )
            break;
          if ( EventUiReleaseMaster__IsOpen(Master_WarQuestSelectionMaster, v38, v39) )
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v29,
              v38->fields.id,
              (WarBoardAIRoute_RouteData_o *)v38,
              (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__);
        }
        size = ListByWarId->fields._size;
        if ( (int)++v37 >= size )
          goto LABEL_21;
      }
LABEL_31:
      sub_B170D4();
    }
LABEL_21:
    if ( !v29 )
      goto LABEL_31;
    if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
           v29,
           (const MethodInfo_2DE8FB8 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__) >= 1 )
    {
      Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                 (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v29,
                 (const MethodInfo_2DE9160 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__);
      v46 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                              System_Collections_Generic_List_EventUiEntity__TypeInfo,
                                                                              v42,
                                                                              v43,
                                                                              v44,
                                                                              v45);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v46,
        (System_Collections_Generic_IEnumerable_T__o *)Values,
        (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_EventUiEntity___ctor___66733896);
      if ( !v46 )
        goto LABEL_31;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v48,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v46,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventUiEntity__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v48,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventUiEntity__MoveNext__) )
      {
        if ( !v35 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v35,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v48.fields.current,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventUiEntity__Add__);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v48,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventUiEntity__Dispose__);
    }
    return (System_Collections_Generic_List_EventUiEntity__o *)v35;
  }
  return ListByWarId;
}


// local variable allocation has failed, the output may be wrong!
EventUiEntity_o *__fastcall EventUiMaster__GetEntity(
        EventUiMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *PK; // x1

  if ( (byte_40F9C25 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventUiMaster__EventUiEntity__string__GetEntity__, *(_QWORD *)&id);
    sub_B16FFC(&EventUiEntity_TypeInfo, v7);
    byte_40F9C25 = 1;
  }
  if ( (BYTE3(EventUiEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventUiEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo);
  }
  PK = EventUiEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (EventUiEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                              (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                              PK,
                              (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventUiMaster__EventUiEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventUiEntity__o *__fastcall EventUiMaster__GetListByWarId(
        EventUiMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v17; // x10

  if ( (byte_40F9C29 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&warId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&EventUiEntity_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventUiEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v11);
    byte_40F9C29 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventUiEntity__TypeInfo,
                                                                                                  *(_QWORD *)&warId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B170D4();
  v14 = 0;
  while ( v14 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v15 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v15 )
      goto LABEL_14;
    Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                    v15,
                                                                    v14,
                                                                    (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v17 = *(&EventUiEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v17
        && (EventUiEntity_c *)Item->klass->_2.typeHierarchy[v17 - 1] == EventUiEntity_TypeInfo
        && Item->fields.eventId == warId )
      {
        if ( !v12 )
          goto LABEL_14;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventUiEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_14;
  }
  return (System_Collections_Generic_List_EventUiEntity__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventUiMaster__IsDispEventUIForSpot(
        EventUiMaster_o *this,
        int32_t event_id,
        int32_t war_id,
        int32_t map_id,
        int32_t spotId,
        const MethodInfo *method)
{
  EventUiEntity_array *DispList; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  __int64 v10; // x8
  EventUiEntity_array *v11; // x20
  __int64 v12; // x21
  EventUiEntity_o *v13; // x0

  DispList = EventUiMaster__getDispList(this, event_id, war_id, map_id, *(const MethodInfo **)&spotId);
  if ( !DispList )
LABEL_11:
    sub_B170D4();
  v10 = *(_QWORD *)&DispList->max_length;
  v11 = DispList;
  if ( !v10 || (int)v10 < 1 )
    return 0;
  v12 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v12 >= (unsigned int)v10 )
    {
      sub_B17100(DispList, v8, v9);
      sub_B170A0();
    }
    v13 = v11->m_Items[v12];
    if ( !v13 )
      goto LABEL_11;
    DispList = (EventUiEntity_array *)EventUiEntity__IsDispEventUIForSpot(v13, spotId, v9);
    if ( ((unsigned __int8)DispList & 1) != 0 )
      return 1;
    LODWORD(v10) = v11->max_length;
    if ( (int)++v12 >= (int)v10 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventUiMaster__TryGetEntity(
        EventUiMaster_o *this,
        EventUiEntity_o **entity,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_String_o *PK; // x2

  if ( (byte_40F9C26 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventUiMaster__EventUiEntity__string__TryGetEntity__, entity);
    sub_B16FFC(&EventUiEntity_TypeInfo, v9);
    byte_40F9C26 = 1;
  }
  if ( (BYTE3(EventUiEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventUiEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo);
  }
  PK = EventUiEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventUiMaster__EventUiEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventUiEntity_array *__fastcall EventUiMaster__getDispList(
        EventUiMaster_o *this,
        int32_t event_id,
        int32_t war_id,
        int32_t map_id,
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
  EventUiEntity_array *List; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  EventUiEntity_array *v31; // x20
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v32; // x21
  WebViewManager_o *Instance; // x0
  EventUiReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x19
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  __int64 v41; // x1
  const MethodInfo *v42; // x2
  int max_length; // w8
  __int64 v44; // x25
  EventUiEntity_o *v45; // x23
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v51; // x20
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_40F9C2A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventUiReleaseMaster___, *(_QWORD *)&event_id);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__, v14);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__Dispose__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__MoveNext__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__get_Current__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventUiEntity__Add__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventUiEntity__GetEnumerator__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventUiEntity__ToArray__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventUiEntity___ctor___66733896, v23);
    sub_B16FFC(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    byte_40F9C2A = 1;
  }
  memset(&v53, 0, sizeof(v53));
  List = EventUiMaster__getList(this, event_id, war_id, map_id, method);
  if ( !List )
    goto LABEL_30;
  v31 = List;
  if ( *(_QWORD *)&List->max_length )
  {
    v32 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                     System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo,
                                                                                                     v27,
                                                                                                     v28,
                                                                                                     v29,
                                                                                                     v30);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v32,
      (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    MasterData_WarQuestSelectionMaster = (EventUiReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventUiReleaseMaster___);
    v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_EventUiEntity__TypeInfo,
                                                                                                    v35,
                                                                                                    v36,
                                                                                                    v37,
                                                                                                    v38);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v39,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
    max_length = v31->max_length;
    if ( max_length >= 1 )
    {
      v44 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v44 >= max_length )
        {
          sub_B17100(Item, v41, v42);
          sub_B170A0();
        }
        v45 = v31->m_Items[v44];
        if ( !v45 || !v32 )
          goto LABEL_30;
        if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v32,
                v45->fields.id,
                (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__) )
          goto LABEL_14;
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 v32,
                 v45->fields.id,
                 (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__);
        if ( !Item )
          goto LABEL_30;
        if ( SHIDWORD(Item->fields.squareData) < v45->fields.priority )
        {
LABEL_14:
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_30;
          Item = (WarBoardEvalValueSquare_EvalValueSquare_o *)EventUiReleaseMaster__IsOpen(
                                                                MasterData_WarQuestSelectionMaster,
                                                                v45,
                                                                v42);
          if ( ((unsigned __int8)Item & 1) != 0 )
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v32,
              v45->fields.id,
              (WarBoardAIRoute_RouteData_o *)v45,
              (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__);
        }
        max_length = v31->max_length;
        if ( (int)++v44 >= max_length )
          goto LABEL_20;
      }
    }
    if ( !v32 )
      goto LABEL_30;
LABEL_20:
    if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
           v32,
           (const MethodInfo_2DE8FB8 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__) > 0 )
    {
      Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                 (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v32,
                 (const MethodInfo_2DE9160 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__);
      v51 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                              System_Collections_Generic_List_EventUiEntity__TypeInfo,
                                                                              v47,
                                                                              v48,
                                                                              v49,
                                                                              v50);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v51,
        (System_Collections_Generic_IEnumerable_T__o *)Values,
        (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_EventUiEntity___ctor___66733896);
      if ( !v51 )
        goto LABEL_30;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v53,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v51,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventUiEntity__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v53,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventUiEntity__MoveNext__) )
      {
        if ( !v39 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v39,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v53.fields.current,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventUiEntity__Add__);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v53,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventUiEntity__Dispose__);
    }
    if ( !v39 )
LABEL_30:
      sub_B170D4();
    return (EventUiEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v39,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventUiEntity__ToArray__);
  }
  return v31;
}


// local variable allocation has failed, the output may be wrong!
EventUiEntity_o *__fastcall EventUiMaster__getEntity(
        EventUiMaster_o *this,
        int32_t eventId,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v10; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v11; // x0
  EventUiEntity_o *result; // x0
  __int64 v13; // x10

  if ( (byte_40F9C2C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&EventUiEntity_TypeInfo, v8);
    byte_40F9C2C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_B170D4();
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v11 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v11 )
      goto LABEL_13;
    result = (EventUiEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                  v11,
                                  v10,
                                  (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( result )
    {
      v13 = *(&EventUiEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v13
        && (EventUiEntity_c *)result->klass->_2.typeHierarchy[v13 - 1] == EventUiEntity_TypeInfo
        && result->fields.eventId == eventId
        && result->fields.priority == priority )
      {
        return result;
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_13;
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
EventUiEntity_array *__fastcall EventUiMaster__getList(
        EventUiMaster_o *this,
        int32_t event_id,
        int32_t war_id,
        int32_t map_id,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v17; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v18; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v20; // x10

  if ( (byte_40F9C28 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&event_id);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B16FFC(&EventUiEntity_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventUiEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventUiEntity__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v14);
    byte_40F9C28 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventUiEntity__TypeInfo,
                                                                                                  *(_QWORD *)&event_id,
                                                                                                  *(_QWORD *)&war_id,
                                                                                                  *(_QWORD *)&map_id,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v17 = 0;
  while ( v17 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v18 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v18 )
      goto LABEL_20;
    Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                    v18,
                                                                    v17,
                                                                    (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v20 = *(&EventUiEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v20
        && (EventUiEntity_c *)Item->klass->_2.typeHierarchy[v20 - 1] == EventUiEntity_TypeInfo
        && Item->fields.targetId == event_id
        && (Item[1].fields.eventId > 1 || Item->fields.eventId == war_id && Item->fields.addCount == map_id) )
      {
        if ( !v15 )
          goto LABEL_20;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v15,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventUiEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v17;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v15 )
LABEL_20:
    sub_B170D4();
  return (EventUiEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventUiEntity__ToArray__);
}