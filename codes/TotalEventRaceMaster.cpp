void __fastcall TotalEventRaceMaster___ctor(TotalEventRaceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAC4B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EAC4B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    218,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TotalEventRaceEntity_o *__fastcall TotalEventRaceMaster__GetEntity(
        TotalEventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EAC49 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string__GetEntity__,
      eventId,
      termId,
      *(_QWORD *)&groupId);
    byte_42EAC49 = 1;
  }
  PK = TotalEventRaceEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&groupId);
  return (TotalEventRaceEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_23FB260 *)Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string__GetEntity__);
}


TotalEventRaceEntity_array *__fastcall TotalEventRaceMaster__GetTargetTermRaceEntityList(
        TotalEventRaceMaster_o *this,
        int32_t eventId,
        int32_t term,
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
  struct TotalEventRaceMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v49; // x21
  struct TotalEventRaceMaster___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7

  if ( (byte_42EAC4C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventId, term, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Comparison_TotalEventRaceEntity___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Comparison_TotalEventRaceEntity__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TotalEventRaceEntity__Add__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TotalEventRaceEntity__Sort__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TotalEventRaceEntity__ToArray__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_TotalEventRaceEntity___ctor__, v25, v26, v27);
    sub_B5D5C4(&System_Collections_Generic_List_TotalEventRaceEntity__TypeInfo, v28, v29, v30);
    sub_B5D5C4(&TotalEventRaceEntity_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_TotalEventRaceMaster___c__GetTargetTermRaceEntityList_b__3_0__, v34, v35, v36);
    sub_B5D5C4(&TotalEventRaceMaster___c_TypeInfo, v37, v38, v39);
    byte_42EAC4C = 1;
  }
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_TotalEventRaceEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_TotalEventRaceEntity___ctor__);
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
      v46 = *(&TotalEventRaceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v46
        || *(TotalEventRaceEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v46 - 8) != TotalEventRaceEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == term )
      {
        if ( !v40 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v40,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_TotalEventRaceEntity__Add__);
      }
      if ( ++v45 >= v44 )
        goto LABEL_15;
    }
LABEL_25:
    sub_B5D69C(list, v41);
  }
LABEL_15:
  list = TotalEventRaceMaster___c_TypeInfo;
  if ( (BYTE3(TotalEventRaceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TotalEventRaceMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TotalEventRaceMaster___c_TypeInfo);
    list = TotalEventRaceMaster___c_TypeInfo;
  }
  static_fields = (struct TotalEventRaceMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = TotalEventRaceMaster___c_TypeInfo->static_fields;
    }
    v49 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_TotalEventRaceEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v49,
      Method_TotalEventRaceMaster___c__GetTargetTermRaceEntityList_b__3_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_TotalEventRaceEntity___ctor__);
    v50 = TotalEventRaceMaster___c_TypeInfo->static_fields;
    v50->__9__3_0 = (struct System_Comparison_TotalEventRaceEntity__o *)_9__3_0;
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
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_TotalEventRaceEntity__Sort__);
  return (TotalEventRaceEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v40,
                                         (const MethodInfo_305910C *)Method_System_Collections_Generic_List_TotalEventRaceEntity__ToArray__);
}


int64_t __fastcall TotalEventRaceMaster__GetTotalPoint(
        TotalEventRaceMaster_o *this,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  __int64 v6; // x1
  bool v7; // w8
  int64_t result; // x0
  TotalEventRaceEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  v7 = TotalEventRaceMaster__TryGetEntity(this, &entity, eventId, termId, groupId, v5);
  result = 0LL;
  if ( v7 )
  {
    if ( !entity )
      sub_B5D69C(0LL, v6);
    return entity->fields.totalPoint;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TotalEventRaceMaster__TryGetEntity(
        TotalEventRaceMaster_o *this,
        TotalEventRaceEntity_o **entity,
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EAC4A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&termId);
    byte_42EAC4A = 1;
  }
  PK = TotalEventRaceEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&termId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string__TryGetEntity__);
}


void __fastcall TotalEventRaceMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct TotalEventRaceMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E625E & 1) == 0 )
  {
    sub_B5D5C4(&TotalEventRaceMaster___c_TypeInfo, v1, v2, v3);
    byte_42E625E = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(TotalEventRaceMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = TotalEventRaceMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TotalEventRaceMaster___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall TotalEventRaceMaster___c___ctor(TotalEventRaceMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall TotalEventRaceMaster___c___GetTargetTermRaceEntityList_b__3_0(
        TotalEventRaceMaster___c_o *this,
        TotalEventRaceEntity_o *a,
        TotalEventRaceEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.groupId - b->fields.groupId;
}