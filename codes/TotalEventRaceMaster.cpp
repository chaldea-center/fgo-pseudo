void __fastcall TotalEventRaceMaster___ctor(TotalEventRaceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B22EA & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string___ctor__);
    byte_42B22EA = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    218,
    (const MethodInfo_23E268C *)Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string___ctor__);
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

  if ( (byte_42B22E8 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string__GetEntity__);
    byte_42B22E8 = 1;
  }
  PK = TotalEventRaceEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&groupId);
  return (TotalEventRaceEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_23E2728 *)Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string__GetEntity__);
}


TotalEventRaceEntity_array *__fastcall TotalEventRaceMaster__GetTargetTermRaceEntityList(
        TotalEventRaceMaster_o *this,
        int32_t eventId,
        int32_t term,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  void *v8; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  __int64 v13; // x10
  struct TotalEventRaceMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v16; // x21
  struct TotalEventRaceMaster___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42B22EB & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_TotalEventRaceEntity___ctor__);
    sub_B52984(&System_Comparison_TotalEventRaceEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_TotalEventRaceEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_TotalEventRaceEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_TotalEventRaceEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_TotalEventRaceEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_TotalEventRaceEntity__TypeInfo);
    sub_B52984(&TotalEventRaceEntity_TypeInfo);
    sub_B52984(&Method_TotalEventRaceMaster___c__GetTargetTermRaceEntityList_b__3_0__);
    sub_B52984(&TotalEventRaceMaster___c_TypeInfo);
    byte_42B22EB = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_TotalEventRaceEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_TotalEventRaceEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v12,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v8 = list;
      v13 = *(&TotalEventRaceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v13
        || *(TotalEventRaceEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v13 - 8) != TotalEventRaceEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == term )
      {
        if ( !v7 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_TotalEventRaceEntity__Add__);
      }
      if ( ++v12 >= v11 )
        goto LABEL_15;
    }
LABEL_25:
    sub_B52A5C(list, v8);
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
    v16 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_TotalEventRaceEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v16,
      Method_TotalEventRaceMaster___c__GetTargetTermRaceEntityList_b__3_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_TotalEventRaceEntity___ctor__);
    v17 = TotalEventRaceMaster___c_TypeInfo->static_fields;
    v17->__9__3_0 = (struct System_Comparison_TotalEventRaceEntity__o *)_9__3_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v17->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !v7 )
    goto LABEL_25;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v7,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_TotalEventRaceEntity__Sort__);
  return (TotalEventRaceEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                         (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_TotalEventRaceEntity__ToArray__);
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
      sub_B52A5C(0LL, v6);
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

  if ( (byte_42B22E9 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string__TryGetEntity__);
    byte_42B22E9 = 1;
  }
  PK = TotalEventRaceEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&termId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string__TryGetEntity__);
}


void __fastcall TotalEventRaceMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct TotalEventRaceMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD9FC & 1) == 0 )
  {
    sub_B52984(&TotalEventRaceMaster___c_TypeInfo);
    byte_42AD9FC = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(TotalEventRaceMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = TotalEventRaceMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TotalEventRaceMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
  return a->fields.groupId - b->fields.groupId;
}