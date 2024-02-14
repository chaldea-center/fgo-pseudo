void __fastcall EventRewardGuideReleaseMaster___ctor(EventRewardGuideReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4211338 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string___ctor__,
      method);
    byte_4211338 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    261,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string___ctor__);
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
  void *list; // x0
  int32_t v18; // w22
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x10
  struct EventRewardGuideReleaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v24; // x21
  struct EventRewardGuideReleaseMaster___c_StaticFields *v25; // x0

  if ( (byte_4211339 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Comparison_EventRewardGuideReleaseEntity___ctor__, v6);
    sub_B0D8A4(&System_Comparison_EventRewardGuideReleaseEntity__TypeInfo, v7);
    sub_B0D8A4(&EventRewardGuideReleaseEntity_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Sort__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo, v13);
    sub_B0D8A4(&Method_EventRewardGuideReleaseMaster___c__GetEntities_b__3_0__, v14);
    sub_B0D8A4(&EventRewardGuideReleaseMaster___c_TypeInfo, v15);
    byte_4211339 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  v18 = 0;
  while ( v18 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                  (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_25;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v18,
             (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v21 = *(&EventRewardGuideReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v21
        && *(EventRewardGuideReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v21 - 8) == EventRewardGuideReleaseEntity_TypeInfo
        && *((_DWORD *)list + 4) == eventId )
      {
        if ( !v16 )
          goto LABEL_25;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v16,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__);
      }
    }
    list = this->fields.list;
    ++v18;
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
    v24 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_EventRewardGuideReleaseEntity__TypeInfo,
                                                                          v19,
                                                                          v20);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v24,
      Method_EventRewardGuideReleaseMaster___c__GetEntities_b__3_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventRewardGuideReleaseEntity___ctor__);
    v25 = EventRewardGuideReleaseMaster___c_TypeInfo->static_fields;
    v25->__9__3_0 = (struct System_Comparison_EventRewardGuideReleaseEntity__o *)_9__3_0;
    sub_B0D840(&v25->__9__3_0, _9__3_0);
  }
  if ( !v16 )
LABEL_25:
    sub_B0D97C(list);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v16,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Sort__);
  return (EventRewardGuideReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardGuideReleaseEntity_array *__fastcall EventRewardGuideReleaseMaster__GetEntities_18297888(
        EventRewardGuideReleaseMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  EventRewardGuideReleaseEntity_array *Entities; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  __int64 v14; // x0
  int max_length; // w8
  unsigned int v16; // w22
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x1
  __int64 v19; // x0

  if ( (byte_421133A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo, v9);
    byte_421133A = 1;
  }
  Entities = EventRewardGuideReleaseMaster__GetEntities(this, eventId, *(const MethodInfo **)&slot);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo,
                                                                                                  v11,
                                                                                                  v12);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__);
  if ( !Entities )
    goto LABEL_14;
  max_length = Entities->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
      {
        v19 = sub_B0D9A8(v14);
        sub_B0D948(v19, 0LL);
      }
      v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)Entities->m_Items[v16];
      if ( !v17 )
        break;
      if ( v17->fields.missionConditionDetailId == slot )
      {
        if ( !v13 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          v17,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__);
      }
      max_length = Entities->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_12;
    }
LABEL_14:
    sub_B0D97C(v14);
  }
LABEL_12:
  if ( !v13 )
    goto LABEL_14;
  return (EventRewardGuideReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__);
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

  if ( (byte_4211336 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4211336 = 1;
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
                                              (const MethodInfo_266A024 *)Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__GetEntity__);
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

  if ( (byte_4211337 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4211337 = 1;
  }
  PK = EventRewardGuideReleaseEntity__CreatePK(eventId, slot, condType, condTargetId, *(const MethodInfo **)&condType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__TryGetEntity__);
}


void __fastcall EventRewardGuideReleaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventRewardGuideReleaseMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4211BD2 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardGuideReleaseMaster___c_TypeInfo, v1);
    byte_4211BD2 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventRewardGuideReleaseMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventRewardGuideReleaseMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRewardGuideReleaseMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return a->fields.slot - b->fields.slot;
}