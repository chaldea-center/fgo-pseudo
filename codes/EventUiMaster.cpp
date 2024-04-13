void __fastcall EventUiMaster___ctor(EventUiMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E84E8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventUiMaster__EventUiEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E84E8 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    270,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventUiMaster__EventUiEntity__string___ctor__);
}


System_Collections_Generic_List_EventUiEntity__o *__fastcall EventUiMaster__GetDispListByWarId(
        EventUiMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
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
  System_Collections_Generic_List_EventUiEntity__o *ListByWarId; // x20
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v64; // x21
  EventUiReleaseMaster_o *Master_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v66; // x19
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  __int64 v68; // x1
  int size; // w8
  unsigned int v70; // w25
  EventUiEntity_o *v71; // x23
  const MethodInfo *v72; // x2
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v74; // x20
  _BOOL8 v75; // x0
  __int64 v76; // x1
  System_Collections_Generic_List_Enumerator_T__o v78; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_42E84EC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventUiReleaseMaster___, warId, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_EventUiEntity___, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__Dispose__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__MoveNext__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__get_Current__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventUiEntity__Add__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventUiEntity__GetEnumerator__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventUiEntity___ctor___68736888, v51, v52, v53);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventUiEntity__get_Count__, v54, v55, v56);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventUiEntity__get_Item__, v57, v58, v59);
    sub_B5D5C4(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v60, v61, v62);
    byte_42E84EC = 1;
  }
  memset(&v78, 0, sizeof(v78));
  ListByWarId = EventUiMaster__GetListByWarId(this, warId, method);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)ListByWarId,
         (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_EventUiEntity___) )
  {
    v64 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v64,
      (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventUiReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
    v66 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventUiEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v66,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
    if ( !ListByWarId )
      goto LABEL_31;
    size = ListByWarId->fields._size;
    if ( size >= 1 )
    {
      v70 = 0;
      while ( 1 )
      {
        if ( size <= v70 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v71 = ListByWarId->fields._items->m_Items[v70];
        if ( !v71 || !v64 )
          break;
        Item = (WarBoardEvalValueSquare_EvalValueSquare_o *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                                              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v64,
                                                              v71->fields.id,
                                                              (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__);
        if ( ((unsigned __int8)Item & 1) == 0 )
          goto LABEL_17;
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 v64,
                 v71->fields.id,
                 (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__);
        if ( !Item )
          break;
        if ( SHIDWORD(Item->fields.squareData) < v71->fields.priority )
        {
LABEL_17:
          if ( !Master_WarQuestSelectionMaster )
            break;
          Item = (WarBoardEvalValueSquare_EvalValueSquare_o *)EventUiReleaseMaster__IsOpen(
                                                                Master_WarQuestSelectionMaster,
                                                                v71,
                                                                v72);
          if ( ((unsigned __int8)Item & 1) != 0 )
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v64,
              v71->fields.id,
              (WarBoardAIRoute_RouteData_o *)v71,
              (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__);
        }
        size = ListByWarId->fields._size;
        if ( (int)++v70 >= size )
          goto LABEL_21;
      }
LABEL_31:
      sub_B5D69C(Item, v68);
    }
LABEL_21:
    if ( !v64 )
      goto LABEL_31;
    if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
           v64,
           (const MethodInfo_2F31CC0 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__) >= 1 )
    {
      Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                 (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v64,
                 (const MethodInfo_2F31E68 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__);
      v74 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_EventUiEntity__TypeInfo);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v74,
        (System_Collections_Generic_IEnumerable_T__o *)Values,
        (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_EventUiEntity___ctor___68736888);
      if ( !v74 )
        goto LABEL_31;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v78,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v74,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventUiEntity__GetEnumerator__);
      while ( 1 )
      {
        v75 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v78,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventUiEntity__MoveNext__);
        if ( !v75 )
          break;
        if ( !v66 )
          sub_B5D69C(v75, v76);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v66,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v78.fields.current,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventUiEntity__Add__);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v78,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventUiEntity__Dispose__);
    }
    return (System_Collections_Generic_List_EventUiEntity__o *)v66;
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *PK; // x1

  if ( (byte_42E84E6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventUiMaster__EventUiEntity__string__GetEntity__, id, priority, method);
    sub_B5D5C4(&EventUiEntity_TypeInfo, v7, v8, v9);
    byte_42E84E6 = 1;
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
                              (const MethodInfo_23FB260 *)Method_DataMasterBase_EventUiMaster__EventUiEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventUiEntity__o *__fastcall EventUiMaster__GetListByWarId(
        EventUiMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v22; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v24; // w22
  __int64 v25; // x10

  if ( (byte_42E84EA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, warId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&EventUiEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventUiEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v18, v19, v20);
    byte_42E84EA = 1;
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventUiEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B5D69C(list, v22);
  v24 = 0;
  while ( v24 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v24,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v22 = list;
      v25 = *(&EventUiEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v25
        && (EventUiEntity_c *)list->klass->_2.typeHierarchy[v25 - 1] == EventUiEntity_TypeInfo
        && HIDWORD(list->fields._syncRoot) == warId )
      {
        if ( !v21 )
          goto LABEL_14;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v21,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventUiEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v24;
    if ( !list )
      goto LABEL_14;
  }
  return (System_Collections_Generic_List_EventUiEntity__o *)v21;
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
    sub_B5D69C(DispList, v8);
  v10 = *(_QWORD *)&DispList->max_length;
  v11 = DispList;
  if ( !v10 || (int)v10 < 1 )
    return 0;
  v12 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v12 >= (unsigned int)v10 )
    {
      v14 = sub_B5D6C8(DispList);
      sub_B5D668(v14, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *PK; // x2

  if ( (byte_42E84E7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventUiMaster__EventUiEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&priority);
    sub_B5D5C4(&EventUiEntity_TypeInfo, v9, v10, v11);
    byte_42E84E7 = 1;
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
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventUiMaster__EventUiEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventUiEntity_array *__fastcall EventUiMaster__getDispList(
        EventUiMaster_o *this,
        int32_t event_id,
        int32_t war_id,
        int32_t map_id,
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
  EventUiEntity_array *List; // x0
  __int64 v61; // x1
  EventUiEntity_array *v62; // x20
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v63; // x21
  EventUiReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v65; // x19
  int max_length; // w8
  __int64 v67; // x25
  EventUiEntity_o *v68; // x23
  const MethodInfo *v69; // x2
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v71; // x20
  _BOOL8 v72; // x0
  __int64 v73; // x1
  __int64 v75; // x0
  System_Collections_Generic_List_Enumerator_T__o v76; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_42E84EB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventUiReleaseMaster___, event_id, war_id, *(_QWORD *)&map_id);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__Dispose__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__MoveNext__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventUiEntity__get_Current__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventUiEntity__Add__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventUiEntity__GetEnumerator__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventUiEntity__ToArray__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventUiEntity___ctor___68736888, v51, v52, v53);
    sub_B5D5C4(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v54, v55, v56);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v57, v58, v59);
    byte_42E84EB = 1;
  }
  memset(&v76, 0, sizeof(v76));
  List = EventUiMaster__getList(this, event_id, war_id, map_id, method);
  if ( !List )
    goto LABEL_30;
  v62 = List;
  if ( *(_QWORD *)&List->max_length )
  {
    v63 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__EventUiEntity__TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v63,
      (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity___ctor__);
    List = (EventUiEntity_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !List )
      goto LABEL_30;
    MasterData_WarQuestSelectionMaster = (EventUiReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)List,
                                                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventUiReleaseMaster___);
    v65 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventUiEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v65,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
    max_length = v62->max_length;
    if ( max_length >= 1 )
    {
      v67 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v67 >= max_length )
        {
          v75 = sub_B5D6C8(List);
          sub_B5D668(v75, 0LL);
        }
        v68 = v62->m_Items[v67];
        if ( !v68 || !v63 )
          goto LABEL_30;
        List = (EventUiEntity_array *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                        (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v63,
                                        v68->fields.id,
                                        (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__ContainsKey__);
        if ( ((unsigned __int8)List & 1) == 0 )
          goto LABEL_14;
        List = (EventUiEntity_array *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                        v63,
                                        v68->fields.id,
                                        (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Item__);
        if ( !List )
          goto LABEL_30;
        if ( SHIDWORD(List->bounds) < v68->fields.priority )
        {
LABEL_14:
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_30;
          List = (EventUiEntity_array *)EventUiReleaseMaster__IsOpen(MasterData_WarQuestSelectionMaster, v68, v69);
          if ( ((unsigned __int8)List & 1) != 0 )
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v63,
              v68->fields.id,
              (WarBoardAIRoute_RouteData_o *)v68,
              (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__set_Item__);
        }
        max_length = v62->max_length;
        if ( (int)++v67 >= max_length )
          goto LABEL_20;
      }
    }
    if ( !v63 )
      goto LABEL_30;
LABEL_20:
    List = (EventUiEntity_array *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
                                    v63,
                                    (const MethodInfo_2F31CC0 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Count__);
    if ( (int)List > 0 )
    {
      Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                 (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v63,
                 (const MethodInfo_2F31E68 *)Method_System_Collections_Generic_Dictionary_int__EventUiEntity__get_Values__);
      v71 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_EventUiEntity__TypeInfo);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v71,
        (System_Collections_Generic_IEnumerable_T__o *)Values,
        (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_EventUiEntity___ctor___68736888);
      if ( !v71 )
        goto LABEL_30;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v76,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v71,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventUiEntity__GetEnumerator__);
      while ( 1 )
      {
        v72 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v76,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventUiEntity__MoveNext__);
        if ( !v72 )
          break;
        if ( !v65 )
          sub_B5D69C(v72, v73);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v65,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v76.fields.current,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventUiEntity__Add__);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v76,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventUiEntity__Dispose__);
    }
    if ( !v65 )
LABEL_30:
      sub_B5D69C(List, v61);
    return (EventUiEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v65,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventUiEntity__ToArray__);
  }
  return v62;
}


// local variable allocation has failed, the output may be wrong!
EventUiEntity_o *__fastcall EventUiMaster__getEntity(
        EventUiMaster_o *this,
        int32_t eventId,
        int32_t priority,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w22
  EventUiEntity_o *result; // x0
  __int64 v16; // x10

  if ( (byte_42E84ED & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventId, priority, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&EventUiEntity_TypeInfo, v10, v11, v12);
    byte_42E84ED = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_B5D69C(list, *(_QWORD *)&eventId);
  v14 = 0;
  while ( v14 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    result = (EventUiEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                  list,
                                  v14,
                                  (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( result )
    {
      v16 = *(&EventUiEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v16
        && (EventUiEntity_c *)result->klass->_2.typeHierarchy[v16 - 1] == EventUiEntity_TypeInfo
        && result->fields.eventId == eventId
        && result->fields.priority == priority )
      {
        return result;
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v14;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v28; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v30; // w24
  __int64 v31; // x10

  if ( (byte_42E84E9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      event_id,
      war_id,
      *(_QWORD *)&map_id);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&EventUiEntity_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventUiEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventUiEntity__ToArray__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventUiEntity___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_EventUiEntity__TypeInfo, v24, v25, v26);
    byte_42E84E9 = 1;
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventUiEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventUiEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v30 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v30 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v30,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v28 = list;
      v31 = *(&EventUiEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v31
        && (EventUiEntity_c *)list->klass->_2.typeHierarchy[v31 - 1] == EventUiEntity_TypeInfo
        && LODWORD(list->fields._syncRoot) == event_id
        && (SHIDWORD(list[2].klass) > 1 || HIDWORD(list->fields._syncRoot) == war_id && LODWORD(list[1].klass) == map_id) )
      {
        if ( !v27 )
          goto LABEL_20;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v27,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventUiEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v30;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v27 )
LABEL_20:
    sub_B5D69C(list, v28);
  return (EventUiEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventUiEntity__ToArray__);
}