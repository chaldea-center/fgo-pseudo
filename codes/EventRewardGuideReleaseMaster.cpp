void __fastcall EventRewardGuideReleaseMaster___ctor(EventRewardGuideReleaseMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E553F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E553F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    262,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string___ctor__);
}


EventRewardGuideReleaseEntity_array *__fastcall EventRewardGuideReleaseMaster__GetEntities(
        EventRewardGuideReleaseMaster_o *this,
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
  int32_t v42; // w22
  __int64 v43; // x10
  struct EventRewardGuideReleaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v46; // x21
  struct EventRewardGuideReleaseMaster___c_StaticFields *v47; // x0

  if ( (byte_42E5540 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_EventRewardGuideReleaseEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_EventRewardGuideReleaseEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&EventRewardGuideReleaseEntity_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Sort__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_EventRewardGuideReleaseMaster___c__GetEntities_b__3_0__, v33, v34, v35);
    sub_B5D5C4(&EventRewardGuideReleaseMaster___c_TypeInfo, v36, v37, v38);
    byte_42E5540 = 1;
  }
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  v42 = 0;
  while ( v42 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_25;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v42,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v40 = list;
      v43 = *(&EventRewardGuideReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v43
        && *(EventRewardGuideReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v43 - 8) == EventRewardGuideReleaseEntity_TypeInfo
        && *((_DWORD *)list + 4) == eventId )
      {
        if ( !v39 )
          goto LABEL_25;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v39,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__);
      }
    }
    list = this->fields.list;
    ++v42;
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
    v46 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventRewardGuideReleaseEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v46,
      Method_EventRewardGuideReleaseMaster___c__GetEntities_b__3_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventRewardGuideReleaseEntity___ctor__);
    v47 = EventRewardGuideReleaseMaster___c_TypeInfo->static_fields;
    v47->__9__3_0 = (struct System_Comparison_EventRewardGuideReleaseEntity__o *)_9__3_0;
    sub_B5D560(&v47->__9__3_0);
  }
  if ( !v39 )
LABEL_25:
    sub_B5D69C(list, v40);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v39,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Sort__);
  return (EventRewardGuideReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v39,
                                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardGuideReleaseEntity_array *__fastcall EventRewardGuideReleaseMaster__GetEntities_19088580(
        EventRewardGuideReleaseMaster_o *this,
        int32_t eventId,
        int32_t slot,
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
  EventRewardGuideReleaseEntity_array *Entities; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x21
  __int64 v18; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x1
  int max_length; // w8
  unsigned int v21; // w22
  __int64 v23; // x0

  if ( (byte_42E5541 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__, eventId, slot, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo, v13, v14, v15);
    byte_42E5541 = 1;
  }
  Entities = EventRewardGuideReleaseMaster__GetEntities(this, eventId, *(const MethodInfo **)&slot);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventRewardGuideReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity___ctor__);
  if ( !Entities )
    goto LABEL_14;
  max_length = Entities->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
      {
        v23 = sub_B5D6C8(v18);
        sub_B5D668(v23, 0LL);
      }
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Entities->m_Items[v21];
      if ( !v19 )
        break;
      if ( v19->fields.missionConditionDetailId == slot )
      {
        if ( !v17 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v17,
          v19,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__Add__);
      }
      max_length = Entities->max_length;
      if ( (int)++v21 >= max_length )
        goto LABEL_12;
    }
LABEL_14:
    sub_B5D69C(v18, v19);
  }
LABEL_12:
  if ( !v17 )
    goto LABEL_14;
  return (EventRewardGuideReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventRewardGuideReleaseEntity__ToArray__);
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

  if ( (byte_42E553D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__GetEntity__,
      eventId,
      slot,
      *(_QWORD *)&condType);
    byte_42E553D = 1;
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
                                              (const MethodInfo_23FB260 *)Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__GetEntity__);
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

  if ( (byte_42E553E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&slot);
    byte_42E553E = 1;
  }
  PK = EventRewardGuideReleaseEntity__CreatePK(eventId, slot, condType, condTargetId, *(const MethodInfo **)&condType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventRewardGuideReleaseMaster__EventRewardGuideReleaseEntity__string__TryGetEntity__);
}


void __fastcall EventRewardGuideReleaseMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventRewardGuideReleaseMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E565B & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardGuideReleaseMaster___c_TypeInfo, v1, v2, v3);
    byte_42E565B = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventRewardGuideReleaseMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventRewardGuideReleaseMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventRewardGuideReleaseMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return a->fields.slot - b->fields.slot;
}