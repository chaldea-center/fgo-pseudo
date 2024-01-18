void __fastcall EventTowerRewardMaster___ctor(EventTowerRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188258 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string___ctor__, method);
    byte_4188258 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    233,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string___ctor__);
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

  if ( (byte_4188256 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4188256 = 1;
  }
  PK = EventTowerRewardEntity__CreatePK(eventId, towerId, floor, *(const MethodInfo **)&floor);
  return (EventTowerRewardEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_24E4520 *)Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventTowerRewardEntity_array *__fastcall EventTowerRewardMaster__GetTowerRewardAllEntityList(
        EventTowerRewardMaster_o *this,
        int32_t eventId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  void *v17; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v20; // w22
  int32_t v21; // w23
  __int64 v22; // x10
  struct EventTowerRewardMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v25; // x21
  struct EventTowerRewardMaster___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_418825A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Comparison_EventTowerRewardEntity___ctor__, v6);
    sub_B2C35C(&System_Comparison_EventTowerRewardEntity__TypeInfo, v7);
    sub_B2C35C(&EventTowerRewardEntity_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo, v13);
    sub_B2C35C(&Method_EventTowerRewardMaster___c__GetTowerRewardAllEntityList_b__4_0__, v14);
    sub_B2C35C(&EventTowerRewardMaster___c_TypeInfo, v15);
    byte_418825A = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v21,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v17 = list;
      v22 = *(&EventTowerRewardEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v22
        || *(EventTowerRewardEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v22 - 8) != EventTowerRewardEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventId )
      {
        if ( !v16 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v16,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__);
      }
      if ( ++v21 >= v20 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B2C434(list, v17);
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
    v25 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventTowerRewardEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v25,
      Method_EventTowerRewardMaster___c__GetTowerRewardAllEntityList_b__4_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventTowerRewardEntity___ctor__);
    v26 = EventTowerRewardMaster___c_TypeInfo->static_fields;
    v26->__9__4_0 = (struct System_Comparison_EventTowerRewardEntity__o *)_9__4_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v26->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  if ( !v16 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v16,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__);
  return (EventTowerRewardEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                           (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventTowerRewardEntity_array *__fastcall EventTowerRewardMaster__GetTowerRewardEntityList(
        EventTowerRewardMaster_o *this,
        int32_t eventId,
        int32_t towerId,
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
  struct EventTowerRewardMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v27; // x21
  struct EventTowerRewardMaster___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_4188259 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Comparison_EventTowerRewardEntity___ctor__, v8);
    sub_B2C35C(&System_Comparison_EventTowerRewardEntity__TypeInfo, v9);
    sub_B2C35C(&EventTowerRewardEntity_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo, v15);
    sub_B2C35C(&Method_EventTowerRewardMaster___c__GetTowerRewardEntityList_b__3_0__, v16);
    sub_B2C35C(&EventTowerRewardMaster___c_TypeInfo, v17);
    byte_4188259 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventTowerRewardEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventTowerRewardEntity___ctor__);
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
      v24 = *(&EventTowerRewardEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v24
        || *(EventTowerRewardEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v24 - 8) != EventTowerRewardEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == towerId )
      {
        if ( !v18 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v18,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventTowerRewardEntity__Add__);
      }
      if ( ++v23 >= v22 )
        goto LABEL_15;
    }
LABEL_25:
    sub_B2C434(list, v19);
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
    v27 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventTowerRewardEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v27,
      Method_EventTowerRewardMaster___c__GetTowerRewardEntityList_b__3_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventTowerRewardEntity___ctor__);
    v28 = EventTowerRewardMaster___c_TypeInfo->static_fields;
    v28->__9__3_0 = (struct System_Comparison_EventTowerRewardEntity__o *)_9__3_0;
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
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventTowerRewardEntity__Sort__);
  return (EventTowerRewardEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                           (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventTowerRewardEntity__ToArray__);
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

  if ( (byte_4188257 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__TryGetEntity__, entity);
    byte_4188257 = 1;
  }
  PK = EventTowerRewardEntity__CreatePK(eventId, towerId, floor, *(const MethodInfo **)&towerId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventTowerRewardMaster__EventTowerRewardEntity__string__TryGetEntity__);
}


void __fastcall EventTowerRewardMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventTowerRewardMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41841A0 & 1) == 0 )
  {
    sub_B2C35C(&EventTowerRewardMaster___c_TypeInfo, v1);
    byte_41841A0 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventTowerRewardMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventTowerRewardMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventTowerRewardMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return a->fields.floor - b->fields.floor;
}


int32_t __fastcall EventTowerRewardMaster___c___GetTowerRewardEntityList_b__3_0(
        EventTowerRewardMaster___c_o *this,
        EventTowerRewardEntity_o *a,
        EventTowerRewardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B2C434(this, a);
  return a->fields.floor - b->fields.floor;
}