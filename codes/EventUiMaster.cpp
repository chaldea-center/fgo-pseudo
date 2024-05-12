void __fastcall EventUiMaster___ctor(EventUiMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438A6EA & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventUiMaster__EventUiEntity__string___ctor__);
    byte_438A6EA = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    270,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_EventUiMaster__EventUiEntity__string___ctor__);
}


System_Collections_Generic_List_EventUiEntity__o *__fastcall EventUiMaster__GetDispListByWarId(
        EventUiMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventUiEntity__o *ListByWarId; // x20
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v6; // x21
  EventUiReleaseMaster_o *Master_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x19
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  __int64 v10; // x1
  int size; // w8
  unsigned int v12; // w25
  EventUiEntity_o *v13; // x23
  const MethodInfo *v14; // x2
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v16; // x20
  _BOOL8 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_438A6EE & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_EventUiReleaseMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Any_EventUiEntity___);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventUiEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventUiEntity__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventUiEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventUiEntity___ctor___69393992);
    sub_B775C4(&Method_System_Collections_Generic_List_EventUiEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventUiEntity__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_EventUiEntity__TypeInfo);
    byte_438A6EE = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ListByWarId = EventUiMaster__GetListByWarId(this, warId, method);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)ListByWarId,
         (const MethodInfo_1D1D960 *)Method_System_Linq_Enumerable_Any_EventUiEntity___) )
  {
    v6 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v6,
      (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventUiReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
    v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventUiEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v8,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
    if ( !ListByWarId )
      goto LABEL_31;
    size = ListByWarId->fields._size;
    if ( size >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( size <= v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v13 = ListByWarId->fields._items->m_Items[v12];
        if ( !v13 || !v6 )
          break;
        Item = (WarBoardEvalValueSquare_EvalValueSquare_o *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                                              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v6,
                                                              v13->fields.id,
                                                              (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__);
        if ( ((unsigned __int8)Item & 1) == 0 )
          goto LABEL_17;
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 v6,
                 v13->fields.id,
                 (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__);
        if ( !Item )
          break;
        if ( SHIDWORD(Item->fields.squareData) < v13->fields.priority )
        {
LABEL_17:
          if ( !Master_WarQuestSelectionMaster )
            break;
          Item = (WarBoardEvalValueSquare_EvalValueSquare_o *)EventUiReleaseMaster__IsOpen(
                                                                Master_WarQuestSelectionMaster,
                                                                v13,
                                                                v14);
          if ( ((unsigned __int8)Item & 1) != 0 )
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v6,
              v13->fields.id,
              (WarBoardAIRoute_RouteData_o *)v13,
              (const MethodInfo_2FF4150 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__);
        }
        size = ListByWarId->fields._size;
        if ( (int)++v12 >= size )
          goto LABEL_21;
      }
LABEL_31:
      sub_B7769C(Item, v10);
    }
LABEL_21:
    if ( !v6 )
      goto LABEL_31;
    if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
           v6,
           (const MethodInfo_2FF3D74 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__) >= 1 )
    {
      Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                 (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v6,
                 (const MethodInfo_2FF3F1C *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__);
      v16 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_List_EventUiEntity__TypeInfo);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v16,
        (System_Collections_Generic_IEnumerable_T__o *)Values,
        (const MethodInfo_30527CC *)Method_System_Collections_Generic_List_EventUiEntity___ctor___69393992);
      if ( !v16 )
        goto LABEL_31;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v20,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v16,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventUiEntity__GetEnumerator__);
      while ( 1 )
      {
        v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v20,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventUiEntity__MoveNext__);
        if ( !v17 )
          break;
        if ( !v8 )
          sub_B7769C(v17, v18);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v8,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v20.fields.current,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventUiEntity__Add__);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v20,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventUiEntity__Dispose__);
    }
    return (System_Collections_Generic_List_EventUiEntity__o *)v8;
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
  System_String_o *PK; // x1

  if ( (byte_438A6E8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventUiMaster__EventUiEntity__string__GetEntity__);
    sub_B775C4(&EventUiEntity_TypeInfo);
    byte_438A6E8 = 1;
  }
  if ( (BYTE3(EventUiEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventUiEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo);
  }
  PK = EventUiEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (EventUiEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                              (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                              PK,
                              (const MethodInfo_21FBCE4 *)Method_DataMasterBase_EventUiMaster__EventUiEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventUiEntity__o *__fastcall EventUiMaster__GetListByWarId(
        EventUiMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  __int64 v9; // x10

  if ( (byte_438A6EC & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&EventUiEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventUiEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventUiEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventUiEntity__TypeInfo);
    byte_438A6EC = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventUiEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B7769C(list, v6);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 list,
                 (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v8,
                                                                                         (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v6 = list;
      v9 = *(&EventUiEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (EventUiEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == EventUiEntity_TypeInfo
        && HIDWORD(list->fields._syncRoot) == warId )
      {
        if ( !v5 )
          goto LABEL_14;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventUiEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_14;
  }
  return (System_Collections_Generic_List_EventUiEntity__o *)v5;
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
  __int64 v14; // x0

  DispList = EventUiMaster__getDispList(this, event_id, war_id, map_id, *(const MethodInfo **)&spotId);
  if ( !DispList )
LABEL_11:
    sub_B7769C(DispList, v8);
  v10 = *(_QWORD *)&DispList->max_length;
  v11 = DispList;
  if ( !v10 || (int)v10 < 1 )
    return 0;
  v12 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v12 >= (unsigned int)v10 )
    {
      v14 = sub_B776C8(DispList);
      sub_B77668(v14, 0LL);
    }
    DispList = (EventUiEntity_array *)v11->m_Items[v12];
    if ( !DispList )
      goto LABEL_11;
    DispList = (EventUiEntity_array *)EventUiEntity__IsDispEventUIForSpot((EventUiEntity_o *)DispList, spotId, v9);
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
  System_String_o *PK; // x2

  if ( (byte_438A6E9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventUiMaster__EventUiEntity__string__TryGetEntity__);
    sub_B775C4(&EventUiEntity_TypeInfo);
    byte_438A6E9 = 1;
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
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_EventUiMaster__EventUiEntity__string__TryGetEntity__);
}


EventUiEntity_array *__fastcall EventUiMaster__getDispList(
        EventUiMaster_o *this,
        int32_t event_id,
        int32_t war_id,
        int32_t map_id,
        const MethodInfo *method)
{
  EventUiEntity_array *List; // x0
  __int64 v10; // x1
  EventUiEntity_array *v11; // x20
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v12; // x21
  EventUiReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  int max_length; // w8
  __int64 v16; // x25
  EventUiEntity_o *v17; // x23
  const MethodInfo *v18; // x2
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v20; // x20
  _BOOL8 v21; // x0
  __int64 v22; // x1
  __int64 v24; // x0
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_438A6ED & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventUiReleaseMaster___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventUiEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventUiEntity__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventUiEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventUiEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventUiEntity___ctor___69393992);
    sub_B775C4(&System_Collections_Generic_List_EventUiEntity__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438A6ED = 1;
  }
  memset(&v25, 0, sizeof(v25));
  List = EventUiMaster__getList(this, event_id, war_id, map_id, method);
  if ( !List )
    goto LABEL_30;
  v11 = List;
  if ( *(_QWORD *)&List->max_length )
  {
    v12 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v12,
      (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__);
    List = (EventUiEntity_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !List )
      goto LABEL_30;
    MasterData_WarQuestSelectionMaster = (EventUiReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)List,
                                                                     (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventUiReleaseMaster___);
    v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventUiEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v14,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
    max_length = v11->max_length;
    if ( max_length >= 1 )
    {
      v16 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v16 >= max_length )
        {
          v24 = sub_B776C8(List);
          sub_B77668(v24, 0LL);
        }
        v17 = v11->m_Items[v16];
        if ( !v17 || !v12 )
          goto LABEL_30;
        List = (EventUiEntity_array *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                        (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v12,
                                        v17->fields.id,
                                        (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__);
        if ( ((unsigned __int8)List & 1) == 0 )
          goto LABEL_14;
        List = (EventUiEntity_array *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                        v12,
                                        v17->fields.id,
                                        (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__);
        if ( !List )
          goto LABEL_30;
        if ( SHIDWORD(List->bounds) < v17->fields.priority )
        {
LABEL_14:
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_30;
          List = (EventUiEntity_array *)EventUiReleaseMaster__IsOpen(MasterData_WarQuestSelectionMaster, v17, v18);
          if ( ((unsigned __int8)List & 1) != 0 )
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v12,
              v17->fields.id,
              (WarBoardAIRoute_RouteData_o *)v17,
              (const MethodInfo_2FF4150 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__);
        }
        max_length = v11->max_length;
        if ( (int)++v16 >= max_length )
          goto LABEL_20;
      }
    }
    if ( !v12 )
      goto LABEL_30;
LABEL_20:
    List = (EventUiEntity_array *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
                                    v12,
                                    (const MethodInfo_2FF3D74 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__);
    if ( (int)List > 0 )
    {
      Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                 (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v12,
                 (const MethodInfo_2FF3F1C *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__);
      v20 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_List_EventUiEntity__TypeInfo);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v20,
        (System_Collections_Generic_IEnumerable_T__o *)Values,
        (const MethodInfo_30527CC *)Method_System_Collections_Generic_List_EventUiEntity___ctor___69393992);
      if ( !v20 )
        goto LABEL_30;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v25,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v20,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventUiEntity__GetEnumerator__);
      while ( 1 )
      {
        v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v25,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventUiEntity__MoveNext__);
        if ( !v21 )
          break;
        if ( !v14 )
          sub_B7769C(v21, v22);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v25.fields.current,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventUiEntity__Add__);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v25,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventUiEntity__Dispose__);
    }
    if ( !v14 )
LABEL_30:
      sub_B7769C(List, v10);
    return (EventUiEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                    (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_EventUiEntity__ToArray__);
  }
  return v11;
}


// local variable allocation has failed, the output may be wrong!
EventUiEntity_o *__fastcall EventUiMaster__getEntity(
        EventUiMaster_o *this,
        int32_t eventId,
        int32_t priority,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  EventUiEntity_o *result; // x0
  __int64 v10; // x10

  if ( (byte_438A6EF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&EventUiEntity_TypeInfo);
    byte_438A6EF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_B7769C(list, *(_QWORD *)&eventId);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 list,
                 (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    result = (EventUiEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                  list,
                                  v8,
                                  (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( result )
    {
      v10 = *(&EventUiEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v10
        && (EventUiEntity_c *)result->klass->_2.typeHierarchy[v10 - 1] == EventUiEntity_TypeInfo
        && result->fields.eventId == eventId
        && result->fields.priority == priority )
      {
        return result;
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_13;
  }
  return 0LL;
}


EventUiEntity_array *__fastcall EventUiMaster__getList(
        EventUiMaster_o *this,
        int32_t event_id,
        int32_t war_id,
        int32_t map_id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v12; // w24
  __int64 v13; // x10

  if ( (byte_438A6EB & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&EventUiEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventUiEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventUiEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventUiEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventUiEntity__TypeInfo);
    byte_438A6EB = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventUiEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v12 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v12 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v12,
                                                                                         (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v10 = list;
      v13 = *(&EventUiEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v13
        && (EventUiEntity_c *)list->klass->_2.typeHierarchy[v13 - 1] == EventUiEntity_TypeInfo
        && LODWORD(list->fields._syncRoot) == event_id
        && (SHIDWORD(list[2].klass) > 1 || HIDWORD(list->fields._syncRoot) == war_id && LODWORD(list[1].klass) == map_id) )
      {
        if ( !v9 )
          goto LABEL_20;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventUiEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v12;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v9 )
LABEL_20:
    sub_B7769C(list, v10);
  return (EventUiEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                  (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_EventUiEntity__ToArray__);
}