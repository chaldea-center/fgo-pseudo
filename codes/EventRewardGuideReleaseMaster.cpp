void __fastcall EventRewardGuideReleaseMaster___ctor(EventRewardGuideReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4387ED0 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string___ctor__);
    byte_4387ED0 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    262,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string___ctor__);
}


EventRewardGuideReleaseEntity_array *__fastcall EventRewardGuideReleaseMaster__GetEntities(
        EventRewardGuideReleaseMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  void *v6; // x1
  void *list; // x0
  int32_t v8; // w22
  __int64 v9; // x10
  struct EventRewardGuideReleaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v12; // x21
  struct EventRewardGuideReleaseMaster___c_StaticFields *v13; // x0

  if ( (byte_4387ED1 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Comparison_EventRewardGuideReleaseEntity___ctor__);
    sub_B775C4(&System_Comparison_EventRewardGuideReleaseEntity__TypeInfo);
    sub_B775C4(&EventRewardGuideReleaseEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo);
    sub_B775C4(&Method_EventRewardGuideReleaseMaster___c__GetEntities_b__3_0__);
    sub_B775C4(&EventRewardGuideReleaseMaster___c_TypeInfo);
    byte_4387ED1 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_25;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v8,
             (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v6 = list;
      v9 = *(&EventRewardGuideReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v9
        && *(EventRewardGuideReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v9 - 8) == EventRewardGuideReleaseEntity_TypeInfo
        && *((_DWORD *)list + 4) == eventId )
      {
        if ( !v5 )
          goto LABEL_25;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__);
      }
    }
    list = this->fields.list;
    ++v8;
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
    v12 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_EventRewardGuideReleaseEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v12,
      Method_EventRewardGuideReleaseMaster___c__GetEntities_b__3_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_EventRewardGuideReleaseEntity___ctor__);
    v13 = EventRewardGuideReleaseMaster___c_TypeInfo->static_fields;
    v13->__9__3_0 = (struct System_Comparison_EventRewardGuideReleaseEntity__o *)_9__3_0;
    sub_B77560(&v13->__9__3_0);
  }
  if ( !v5 )
LABEL_25:
    sub_B7769C(list, v6);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Sort__);
  return (EventRewardGuideReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                                  (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardGuideReleaseEntity_array *__fastcall EventRewardGuideReleaseMaster__GetEntities_19283572(
        EventRewardGuideReleaseMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  EventRewardGuideReleaseEntity_array *Entities; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x21
  __int64 v9; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v10; // x1
  int max_length; // w8
  unsigned int v12; // w22
  __int64 v14; // x0

  if ( (byte_4387ED2 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo);
    byte_4387ED2 = 1;
  }
  Entities = EventRewardGuideReleaseMaster__GetEntities(this, eventId, *(const MethodInfo **)&slot);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__);
  if ( !Entities )
    goto LABEL_14;
  max_length = Entities->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
      {
        v14 = sub_B776C8(v9);
        sub_B77668(v14, 0LL);
      }
      v10 = (EventMissionProgressRequest_Argument_ProgressData_o *)Entities->m_Items[v12];
      if ( !v10 )
        break;
      if ( v10->fields.missionConditionDetailId == slot )
      {
        if ( !v8 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v8,
          v10,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__);
      }
      max_length = Entities->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_12;
    }
LABEL_14:
    sub_B7769C(v9, v10);
  }
LABEL_12:
  if ( !v8 )
    goto LABEL_14;
  return (EventRewardGuideReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                                  (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__);
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

  if ( (byte_4387ECE & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__GetEntity__);
    byte_4387ECE = 1;
  }
  PK = EventRewardGuideReleaseEntity__CreatePK(
         eventId,
         slot,
         condType,
         condTargetId,
         *(const MethodInfo **)&condTargetId);
  return (EventRewardGuideReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                              (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                              PK,
                                              (const MethodInfo_21FBCE4 *)Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__GetEntity__);
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

  if ( (byte_4387ECF & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__TryGetEntity__);
    byte_4387ECF = 1;
  }
  PK = EventRewardGuideReleaseEntity__CreatePK(eventId, slot, condType, condTargetId, *(const MethodInfo **)&condType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__TryGetEntity__);
}


void __fastcall EventRewardGuideReleaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventRewardGuideReleaseMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4388010 & 1) == 0 )
  {
    sub_B775C4(&EventRewardGuideReleaseMaster___c_TypeInfo);
    byte_4388010 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(EventRewardGuideReleaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventRewardGuideReleaseMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRewardGuideReleaseMaster___c_o *)v1;
  sub_B77560(static_fields);
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
    sub_B7769C(this, a);
  return a->fields.slot - b->fields.slot;
}