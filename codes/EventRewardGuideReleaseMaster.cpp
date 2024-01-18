void __fastcall EventRewardGuideReleaseMaster___ctor(EventRewardGuideReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4184866 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string___ctor__,
      method);
    byte_4184866 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    261,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardGuideReleaseEntity_array *__fastcall EventRewardGuideReleaseMaster__GetEntities(
        EventRewardGuideReleaseMaster_o *this,
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
  int32_t v19; // w22
  __int64 v20; // x10
  struct EventRewardGuideReleaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v23; // x21
  struct EventRewardGuideReleaseMaster___c_StaticFields *v24; // x0

  if ( (byte_4184867 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Comparison_EventRewardGuideReleaseEntity___ctor__, v6);
    sub_B2C35C(&System_Comparison_EventRewardGuideReleaseEntity__TypeInfo, v7);
    sub_B2C35C(&EventRewardGuideReleaseEntity_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Sort__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo, v13);
    sub_B2C35C(&Method_EventRewardGuideReleaseMaster___c__GetEntities_b__3_0__, v14);
    sub_B2C35C(&EventRewardGuideReleaseMaster___c_TypeInfo, v15);
    byte_4184867 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  v19 = 0;
  while ( v19 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_25;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v19,
             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v17 = list;
      v20 = *(&EventRewardGuideReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v20
        && *(EventRewardGuideReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v20 - 8) == EventRewardGuideReleaseEntity_TypeInfo
        && *((_DWORD *)list + 4) == eventId )
      {
        if ( !v16 )
          goto LABEL_25;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v16,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__);
      }
    }
    list = this->fields.list;
    ++v19;
    if ( !list )
      goto LABEL_25;
  }
  list = EventRewardGuideReleaseMaster___c_TypeInfo;
  if ( (BYTE3(EventRewardGuideReleaseMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardGuideReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardGuideReleaseMaster___c_TypeInfo);
    list = EventRewardGuideReleaseMaster___c_TypeInfo;
  }
  static_fields = (struct EventRewardGuideReleaseMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = EventRewardGuideReleaseMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventRewardGuideReleaseEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v23,
      Method_EventRewardGuideReleaseMaster___c__GetEntities_b__3_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventRewardGuideReleaseEntity___ctor__);
    v24 = EventRewardGuideReleaseMaster___c_TypeInfo->static_fields;
    v24->__9__3_0 = (struct System_Comparison_EventRewardGuideReleaseEntity__o *)_9__3_0;
    sub_B2C2F8(&v24->__9__3_0, _9__3_0);
  }
  if ( !v16 )
LABEL_25:
    sub_B2C434(list, v17);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v16,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Sort__);
  return (EventRewardGuideReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardGuideReleaseEntity_array *__fastcall EventRewardGuideReleaseMaster__GetEntities_18989556(
        EventRewardGuideReleaseMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  EventRewardGuideReleaseEntity_array *Entities; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  __int64 v12; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v13; // x1
  int max_length; // w8
  unsigned int v15; // w22
  __int64 v17; // x0

  if ( (byte_4184868 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo, v9);
    byte_4184868 = 1;
  }
  Entities = EventRewardGuideReleaseMaster__GetEntities(this, eventId, *(const MethodInfo **)&slot);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__);
  if ( !Entities )
    goto LABEL_14;
  max_length = Entities->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
      {
        v17 = sub_B2C460(v12);
        sub_B2C400(v17, 0LL);
      }
      v13 = (EventMissionProgressRequest_Argument_ProgressData_o *)Entities->m_Items[v15];
      if ( !v13 )
        break;
      if ( v13->fields.missionConditionDetailId == slot )
      {
        if ( !v11 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v13,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__);
      }
      max_length = Entities->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_12;
    }
LABEL_14:
    sub_B2C434(v12, v13);
  }
LABEL_12:
  if ( !v11 )
    goto LABEL_14;
  return (EventRewardGuideReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardGuideReleaseEntity_o *__fastcall EventRewardGuideReleaseMaster__GetEntity(
        EventRewardGuideReleaseMaster_o *this,
        int32_t eventId,
        int32_t slot,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4184864 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4184864 = 1;
  }
  PK = EventRewardGuideReleaseEntity__CreatePK(
         eventId,
         slot,
         condType,
         condTargetId,
         *(const MethodInfo **)&condTargetId);
  return (EventRewardGuideReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                              (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                              PK,
                                              (const MethodInfo_24E4520 *)Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRewardGuideReleaseMaster__TryGetEntity(
        EventRewardGuideReleaseMaster_o *this,
        EventRewardGuideReleaseEntity_o **entity,
        int32_t eventId,
        int32_t slot,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4184865 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4184865 = 1;
  }
  PK = EventRewardGuideReleaseEntity__CreatePK(eventId, slot, condType, condTargetId, *(const MethodInfo **)&condType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__TryGetEntity__);
}


void __fastcall EventRewardGuideReleaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventRewardGuideReleaseMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4184B6B & 1) == 0 )
  {
    sub_B2C35C(&EventRewardGuideReleaseMaster___c_TypeInfo, v1);
    byte_4184B6B = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventRewardGuideReleaseMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventRewardGuideReleaseMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRewardGuideReleaseMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall EventRewardGuideReleaseMaster___c___ctor(
        EventRewardGuideReleaseMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventRewardGuideReleaseMaster___c___GetEntities_b__3_0(
        EventRewardGuideReleaseMaster___c_o *this,
        EventRewardGuideReleaseEntity_o *a,
        EventRewardGuideReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B2C434(this, a);
  return a->fields.slot - b->fields.slot;
}