void __fastcall EventUiMaster___ctor(EventUiMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41882A2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventUiMaster__EventUiEntity__string___ctor__, method);
    byte_41882A2 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    269,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventUiMaster__EventUiEntity__string___ctor__);
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v25; // x21
  EventUiReleaseMaster_o *Master_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x19
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  __int64 v29; // x1
  int size; // w8
  unsigned int v31; // w25
  EventUiEntity_o *v32; // x23
  const MethodInfo *v33; // x2
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v35; // x20
  _BOOL8 v36; // x0
  __int64 v37; // x1
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_41882A6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventUiReleaseMaster___, *(_QWORD *)&warId);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo, v12);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_EventUiEntity___, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__Dispose__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__MoveNext__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__get_Current__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventUiEntity__Add__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventUiEntity__GetEnumerator__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventUiEntity___ctor___67308080, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventUiEntity__get_Count__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventUiEntity__get_Item__, v22);
    sub_B2C35C(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v23);
    byte_41882A6 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  ListByWarId = EventUiMaster__GetListByWarId(this, warId, method);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)ListByWarId,
         (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_EventUiEntity___) )
  {
    v25 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v25,
      (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventUiReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
    v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventUiEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v27,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
    if ( !ListByWarId )
      goto LABEL_31;
    size = ListByWarId->fields._size;
    if ( size >= 1 )
    {
      v31 = 0;
      while ( 1 )
      {
        if ( size <= v31 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v32 = ListByWarId->fields._items->m_Items[v31];
        if ( !v32 || !v25 )
          break;
        Item = (WarBoardEvalValueSquare_EvalValueSquare_o *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                                              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v25,
                                                              v32->fields.id,
                                                              (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__);
        if ( ((unsigned __int8)Item & 1) == 0 )
          goto LABEL_17;
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 v25,
                 v32->fields.id,
                 (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__);
        if ( !Item )
          break;
        if ( SHIDWORD(Item->fields.squareData) < v32->fields.priority )
        {
LABEL_17:
          if ( !Master_WarQuestSelectionMaster )
            break;
          Item = (WarBoardEvalValueSquare_EvalValueSquare_o *)EventUiReleaseMaster__IsOpen(
                                                                Master_WarQuestSelectionMaster,
                                                                v32,
                                                                v33);
          if ( ((unsigned __int8)Item & 1) != 0 )
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v25,
              v32->fields.id,
              (WarBoardAIRoute_RouteData_o *)v32,
              (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__);
        }
        size = ListByWarId->fields._size;
        if ( (int)++v31 >= size )
          goto LABEL_21;
      }
LABEL_31:
      sub_B2C434(Item, v29);
    }
LABEL_21:
    if ( !v25 )
      goto LABEL_31;
    if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
           v25,
           (const MethodInfo_2E64348 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__) >= 1 )
    {
      Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                 (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v25,
                 (const MethodInfo_2E644F0 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__);
      v35 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_EventUiEntity__TypeInfo);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v35,
        (System_Collections_Generic_IEnumerable_T__o *)Values,
        (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_EventUiEntity___ctor___67308080);
      if ( !v35 )
        goto LABEL_31;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v39,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v35,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventUiEntity__GetEnumerator__);
      while ( 1 )
      {
        v36 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v39,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventUiEntity__MoveNext__);
        if ( !v36 )
          break;
        if ( !v27 )
          sub_B2C434(v36, v37);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v27,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v39.fields.current,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventUiEntity__Add__);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v39,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventUiEntity__Dispose__);
    }
    return (System_Collections_Generic_List_EventUiEntity__o *)v27;
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

  if ( (byte_41882A0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventUiMaster__EventUiEntity__string__GetEntity__, *(_QWORD *)&id);
    sub_B2C35C(&EventUiEntity_TypeInfo, v7);
    byte_41882A0 = 1;
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
                              (const MethodInfo_24E4520 *)Method_DataMasterBase_EventUiMaster__EventUiEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventUiEntity__o *__fastcall EventUiMaster__GetListByWarId(
        EventUiMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v11; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v13; // w22
  __int64 v14; // x10

  if ( (byte_41882A4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&warId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&EventUiEntity_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventUiEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v9);
    byte_41882A4 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventUiEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B2C434(list, v11);
  v13 = 0;
  while ( v13 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v13,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v11 = list;
      v14 = *(&EventUiEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v14
        && (EventUiEntity_c *)list->klass->_2.typeHierarchy[v14 - 1] == EventUiEntity_TypeInfo
        && HIDWORD(list->fields._syncRoot) == warId )
      {
        if ( !v10 )
          goto LABEL_14;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v10,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventUiEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_14;
  }
  return (System_Collections_Generic_List_EventUiEntity__o *)v10;
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
    sub_B2C434(DispList, v8);
  v10 = *(_QWORD *)&DispList->max_length;
  v11 = DispList;
  if ( !v10 || (int)v10 < 1 )
    return 0;
  v12 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v12 >= (unsigned int)v10 )
    {
      v14 = sub_B2C460(DispList);
      sub_B2C400(v14, 0LL);
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
  __int64 v9; // x1
  System_String_o *PK; // x2

  if ( (byte_41882A1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventUiMaster__EventUiEntity__string__TryGetEntity__, entity);
    sub_B2C35C(&EventUiEntity_TypeInfo, v9);
    byte_41882A1 = 1;
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
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventUiMaster__EventUiEntity__string__TryGetEntity__);
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
  EventUiEntity_array *v28; // x20
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v29; // x21
  EventUiReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x19
  int max_length; // w8
  __int64 v33; // x25
  EventUiEntity_o *v34; // x23
  const MethodInfo *v35; // x2
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v37; // x20
  _BOOL8 v38; // x0
  __int64 v39; // x1
  __int64 v41; // x0
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_41882A5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventUiReleaseMaster___, *(_QWORD *)&event_id);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__, v14);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__Dispose__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__MoveNext__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__get_Current__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventUiEntity__Add__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventUiEntity__GetEnumerator__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventUiEntity__ToArray__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventUiEntity___ctor___67308080, v23);
    sub_B2C35C(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v24);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    byte_41882A5 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  List = EventUiMaster__getList(this, event_id, war_id, map_id, method);
  if ( !List )
    goto LABEL_30;
  v28 = List;
  if ( *(_QWORD *)&List->max_length )
  {
    v29 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v29,
      (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__);
    List = (EventUiEntity_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !List )
      goto LABEL_30;
    MasterData_WarQuestSelectionMaster = (EventUiReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)List,
                                                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventUiReleaseMaster___);
    v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventUiEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v31,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
    max_length = v28->max_length;
    if ( max_length >= 1 )
    {
      v33 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v33 >= max_length )
        {
          v41 = sub_B2C460(List);
          sub_B2C400(v41, 0LL);
        }
        v34 = v28->m_Items[v33];
        if ( !v34 || !v29 )
          goto LABEL_30;
        List = (EventUiEntity_array *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                        (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v29,
                                        v34->fields.id,
                                        (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__);
        if ( ((unsigned __int8)List & 1) == 0 )
          goto LABEL_14;
        List = (EventUiEntity_array *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                        v29,
                                        v34->fields.id,
                                        (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__);
        if ( !List )
          goto LABEL_30;
        if ( SHIDWORD(List->bounds) < v34->fields.priority )
        {
LABEL_14:
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_30;
          List = (EventUiEntity_array *)EventUiReleaseMaster__IsOpen(MasterData_WarQuestSelectionMaster, v34, v35);
          if ( ((unsigned __int8)List & 1) != 0 )
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v29,
              v34->fields.id,
              (WarBoardAIRoute_RouteData_o *)v34,
              (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__);
        }
        max_length = v28->max_length;
        if ( (int)++v33 >= max_length )
          goto LABEL_20;
      }
    }
    if ( !v29 )
      goto LABEL_30;
LABEL_20:
    List = (EventUiEntity_array *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
                                    v29,
                                    (const MethodInfo_2E64348 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__);
    if ( (int)List > 0 )
    {
      Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                 (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v29,
                 (const MethodInfo_2E644F0 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__);
      v37 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_EventUiEntity__TypeInfo);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v37,
        (System_Collections_Generic_IEnumerable_T__o *)Values,
        (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_EventUiEntity___ctor___67308080);
      if ( !v37 )
        goto LABEL_30;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v42,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v37,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventUiEntity__GetEnumerator__);
      while ( 1 )
      {
        v38 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v42,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventUiEntity__MoveNext__);
        if ( !v38 )
          break;
        if ( !v31 )
          sub_B2C434(v38, v39);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v31,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v42.fields.current,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventUiEntity__Add__);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v42,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventUiEntity__Dispose__);
    }
    if ( !v31 )
LABEL_30:
      sub_B2C434(List, v27);
    return (EventUiEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v31,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventUiEntity__ToArray__);
  }
  return v28;
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
  EventUiEntity_o *result; // x0
  __int64 v12; // x10

  if ( (byte_41882A7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&EventUiEntity_TypeInfo, v8);
    byte_41882A7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_B2C434(list, *(_QWORD *)&eventId);
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    result = (EventUiEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                  list,
                                  v10,
                                  (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( result )
    {
      v12 = *(&EventUiEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v12
        && (EventUiEntity_c *)result->klass->_2.typeHierarchy[v12 - 1] == EventUiEntity_TypeInfo
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v16; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v18; // w24
  __int64 v19; // x10

  if ( (byte_41882A3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&event_id);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B2C35C(&EventUiEntity_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventUiEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventUiEntity__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v14);
    byte_41882A3 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventUiEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v18 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v18 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v18,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v16 = list;
      v19 = *(&EventUiEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v19
        && (EventUiEntity_c *)list->klass->_2.typeHierarchy[v19 - 1] == EventUiEntity_TypeInfo
        && LODWORD(list->fields._syncRoot) == event_id
        && (SHIDWORD(list[2].klass) > 1 || HIDWORD(list->fields._syncRoot) == war_id && LODWORD(list[1].klass) == map_id) )
      {
        if ( !v15 )
          goto LABEL_20;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v15,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventUiEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v18;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v15 )
LABEL_20:
    sub_B2C434(list, v16);
  return (EventUiEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventUiEntity__ToArray__);
}