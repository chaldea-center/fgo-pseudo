void __fastcall TotalEventRaceMaster___ctor(TotalEventRaceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418994C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string___ctor__, method);
    byte_418994C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    217,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string___ctor__);
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

  if ( (byte_418994A & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_418994A = 1;
  }
  PK = TotalEventRaceEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&groupId);
  return (TotalEventRaceEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                     (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_24E4520 *)Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
TotalEventRaceEntity_array *__fastcall TotalEventRaceMaster__GetTargetTermRaceEntityList(
        TotalEventRaceMaster_o *this,
        int32_t eventId,
        int32_t term,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  void *v19; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v22; // w23
  int32_t v23; // w24
  __int64 v24; // x10
  struct TotalEventRaceMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v27; // x21
  struct TotalEventRaceMaster___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_418994D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Comparison_TotalEventRaceEntity___ctor__, v8);
    sub_B2C35C(&System_Comparison_TotalEventRaceEntity__TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_TotalEventRaceEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_TotalEventRaceEntity__Sort__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_TotalEventRaceEntity__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_TotalEventRaceEntity___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_TotalEventRaceEntity__TypeInfo, v14);
    sub_B2C35C(&TotalEventRaceEntity_TypeInfo, v15);
    sub_B2C35C(&Method_TotalEventRaceMaster___c__GetTargetTermRaceEntityList_b__3_0__, v16);
    sub_B2C35C(&TotalEventRaceMaster___c_TypeInfo, v17);
    byte_418994D = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_TotalEventRaceEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_TotalEventRaceEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v22 = Count;
    v23 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v23,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v19 = list;
      v24 = *(&TotalEventRaceEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v24
        || *(TotalEventRaceEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v24 - 8) != TotalEventRaceEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == term )
      {
        if ( !v18 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v18,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_TotalEventRaceEntity__Add__);
      }
      if ( ++v23 >= v22 )
        goto LABEL_15;
    }
LABEL_25:
    sub_B2C434(list, v19);
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
    v27 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_TotalEventRaceEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v27,
      Method_TotalEventRaceMaster___c__GetTargetTermRaceEntityList_b__3_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_TotalEventRaceEntity___ctor__);
    v28 = TotalEventRaceMaster___c_TypeInfo->static_fields;
    v28->__9__3_0 = (struct System_Comparison_TotalEventRaceEntity__o *)_9__3_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v28->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  if ( !v18 )
    goto LABEL_25;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_TotalEventRaceEntity__Sort__);
  return (TotalEventRaceEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                         (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                         (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_TotalEventRaceEntity__ToArray__);
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
      sub_B2C434(0LL, v6);
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

  if ( (byte_418994B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string__TryGetEntity__, entity);
    byte_418994B = 1;
  }
  PK = TotalEventRaceEntity__CreatePK(eventId, termId, groupId, *(const MethodInfo **)&termId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_TotalEventRaceMaster__TotalEventRaceEntity__string__TryGetEntity__);
}


void __fastcall TotalEventRaceMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct TotalEventRaceMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4185356 & 1) == 0 )
  {
    sub_B2C35C(&TotalEventRaceMaster___c_TypeInfo, v1);
    byte_4185356 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(TotalEventRaceMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = TotalEventRaceMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TotalEventRaceMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return a->fields.groupId - b->fields.groupId;
}