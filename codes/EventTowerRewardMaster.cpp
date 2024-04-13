void __fastcall EventTowerRewardMaster___ctor(EventTowerRewardMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E849D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E849D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    234,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventTowerRewardEntity_o *__fastcall EventTowerRewardMaster__GetEntity(
        EventTowerRewardMaster_o *this,
        int32_t eventId,
        int32_t towerId,
        int32_t floor,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E849B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__GetEntity__,
      eventId,
      towerId,
      *(_QWORD *)&floor);
    byte_42E849B = 1;
  }
  PK = EventTowerRewardEntity__CreatePK(eventId, towerId, floor, *(const MethodInfo **)&floor);
  return (EventTowerRewardEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_23FB260 *)Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__GetEntity__);
}


EventTowerRewardEntity_array *__fastcall EventTowerRewardMaster__GetTowerRewardAllEntityList(
        EventTowerRewardMaster_o *this,
        int32_t eventId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x19
  void *v40; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v43; // w22
  int32_t v44; // w23
  __int64 v45; // x10
  struct EventTowerRewardMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v48; // x21
  struct EventTowerRewardMaster___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7

  if ( (byte_42E849F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_EventTowerRewardEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_EventTowerRewardEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&EventTowerRewardEntity_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_EventTowerRewardMaster___c__GetTowerRewardAllEntityList_b__4_0__, v33, v34, v35);
    sub_B5D5C4(&EventTowerRewardMaster___c_TypeInfo, v36, v37, v38);
    byte_42E849F = 1;
  }
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v43 = Count;
    v44 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v44,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v40 = list;
      v45 = *(&EventTowerRewardEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v45
        || *(EventTowerRewardEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v45 - 8) != EventTowerRewardEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventId )
      {
        if ( !v39 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v39,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__);
      }
      if ( ++v44 >= v43 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B5D69C(list, v40);
  }
LABEL_14:
  list = EventTowerRewardMaster___c_TypeInfo;
  if ( (BYTE3(EventTowerRewardMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventTowerRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTowerRewardMaster___c_TypeInfo);
    list = EventTowerRewardMaster___c_TypeInfo;
  }
  static_fields = (struct EventTowerRewardMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = EventTowerRewardMaster___c_TypeInfo->static_fields;
    }
    v48 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventTowerRewardEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v48,
      Method_EventTowerRewardMaster___c__GetTowerRewardAllEntityList_b__4_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventTowerRewardEntity___ctor__);
    v49 = EventTowerRewardMaster___c_TypeInfo->static_fields;
    v49->__9__4_0 = (struct System_Comparison_EventTowerRewardEntity__o *)_9__4_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v49->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  if ( !v39 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v39,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__);
  return (EventTowerRewardEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v39,
                                           (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__);
}


EventTowerRewardEntity_array *__fastcall EventTowerRewardMaster__GetTowerRewardEntityList(
        EventTowerRewardMaster_o *this,
        int32_t eventId,
        int32_t towerId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x19
  void *v41; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v44; // w23
  int32_t v45; // w24
  __int64 v46; // x10
  struct EventTowerRewardMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v49; // x21
  struct EventTowerRewardMaster___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7

  if ( (byte_42E849E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventId, towerId, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Comparison_EventTowerRewardEntity___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Comparison_EventTowerRewardEntity__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&EventTowerRewardEntity_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__, v28, v29, v30);
    sub_B5D5C4(&System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_EventTowerRewardMaster___c__GetTowerRewardEntityList_b__3_0__, v34, v35, v36);
    sub_B5D5C4(&EventTowerRewardMaster___c_TypeInfo, v37, v38, v39);
    byte_42E849E = 1;
  }
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v44 = Count;
    v45 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v45,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v41 = list;
      v46 = *(&EventTowerRewardEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v46
        || *(EventTowerRewardEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v46 - 8) != EventTowerRewardEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == towerId )
      {
        if ( !v40 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v40,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__);
      }
      if ( ++v45 >= v44 )
        goto LABEL_15;
    }
LABEL_25:
    sub_B5D69C(list, v41);
  }
LABEL_15:
  list = EventTowerRewardMaster___c_TypeInfo;
  if ( (BYTE3(EventTowerRewardMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventTowerRewardMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTowerRewardMaster___c_TypeInfo);
    list = EventTowerRewardMaster___c_TypeInfo;
  }
  static_fields = (struct EventTowerRewardMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = EventTowerRewardMaster___c_TypeInfo->static_fields;
    }
    v49 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventTowerRewardEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v49,
      Method_EventTowerRewardMaster___c__GetTowerRewardEntityList_b__3_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventTowerRewardEntity___ctor__);
    v50 = EventTowerRewardMaster___c_TypeInfo->static_fields;
    v50->__9__3_0 = (struct System_Comparison_EventTowerRewardEntity__o *)_9__3_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v50->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  if ( !v40 )
    goto LABEL_25;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v40,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__);
  return (EventTowerRewardEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v40,
                                           (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTowerRewardMaster__TryGetEntity(
        EventTowerRewardMaster_o *this,
        EventTowerRewardEntity_o **entity,
        int32_t eventId,
        int32_t towerId,
        int32_t floor,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E849C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&towerId);
    byte_42E849C = 1;
  }
  PK = EventTowerRewardEntity__CreatePK(eventId, towerId, floor, *(const MethodInfo **)&towerId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__TryGetEntity__);
}


void __fastcall EventTowerRewardMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventTowerRewardMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E569A & 1) == 0 )
  {
    sub_B5D5C4(&EventTowerRewardMaster___c_TypeInfo, v1, v2, v3);
    byte_42E569A = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventTowerRewardMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventTowerRewardMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventTowerRewardMaster___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall EventTowerRewardMaster___c___ctor(EventTowerRewardMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventTowerRewardMaster___c___GetTowerRewardAllEntityList_b__4_0(
        EventTowerRewardMaster___c_o *this,
        EventTowerRewardEntity_o *a,
        EventTowerRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.floor - b->fields.floor;
}


int32_t __fastcall EventTowerRewardMaster___c___GetTowerRewardEntityList_b__3_0(
        EventTowerRewardMaster___c_o *this,
        EventTowerRewardEntity_o *a,
        EventTowerRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.floor - b->fields.floor;
}