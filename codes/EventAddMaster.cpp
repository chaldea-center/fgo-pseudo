void __fastcall EventAddMaster___ctor(EventAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4216E2B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string___ctor__, method);
    byte_4216E2B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    200,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventAddEntity_o *__fastcall EventAddMaster__GetEntity(
        EventAddMaster_o *this,
        int32_t eventId,
        int32_t overwriteType,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4216E29 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_4216E29 = 1;
  }
  PK = EventAddEntity__CreatePK(eventId, overwriteType, priority, *(const MethodInfo **)&priority);
  return (EventAddEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                               (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                               PK,
                               (const MethodInfo_266A024 *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventAddMaster__TryGetEntity(
        EventAddMaster_o *this,
        EventAddEntity_o **entity,
        int32_t eventId,
        int32_t overwriteType,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4216E2A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string__TryGetEntity__, entity);
    byte_4216E2A = 1;
  }
  PK = EventAddEntity__CreatePK(eventId, overwriteType, priority, *(const MethodInfo **)&overwriteType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventAddEntity_o *__fastcall EventAddMaster__getOverwriteEventAddEntity(
        EventAddMaster_o *this,
        int32_t eventId,
        int32_t overwriteType,
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
  __int64 v18; // x1
  __int64 v19; // x1
  void *list; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t v23; // w23
  int32_t v24; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x25
  __int64 v26; // x10
  int32_t v27; // w26
  int32_t v28; // w27
  EventAddMaster___c_c *v29; // x0
  struct EventAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v32; // x21
  struct EventAddMaster___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // [xsp+8h] [xbp-58h]

  if ( (byte_4216E2C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&Method_System_Comparison_EventAddEntity___ctor__, v8);
    sub_B0D8A4(&System_Comparison_EventAddEntity__TypeInfo, v9);
    sub_B0D8A4(&CondType_TypeInfo, v10);
    sub_B0D8A4(&EventAddEntity_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventAddEntity__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventAddEntity__Sort__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventAddEntity___ctor__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventAddEntity__get_Count__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventAddEntity__get_Item__, v16);
    sub_B0D8A4(&System_Collections_Generic_List_EventAddEntity__TypeInfo, v17);
    sub_B0D8A4(&Method_EventAddMaster___c__getOverwriteEventAddEntity_b__3_0__, v18);
    sub_B0D8A4(&EventAddMaster___c_TypeInfo, v19);
    byte_4216E2C = 1;
  }
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventAddEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&overwriteType);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventAddEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_33;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v23 = (int)list;
    v24 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v24,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v26 = *(&EventAddEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v26
        || *(EventAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v26 - 8) != EventAddEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == overwriteType )
      {
        v28 = *((_DWORD *)list + 10);
        v27 = *((_DWORD *)list + 11);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        list = (void *)CondType__IsOpen(v28, v27, 0LL, 0, 0LL);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          list = v41;
          if ( !v41 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v41,
            v25,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventAddEntity__Add__);
        }
      }
      if ( ++v24 >= v23 )
        goto LABEL_19;
    }
LABEL_33:
    sub_B0D97C(list);
  }
LABEL_19:
  if ( !v41 )
    goto LABEL_33;
  if ( v41->fields._size < 1 )
    return 0LL;
  v29 = EventAddMaster___c_TypeInfo;
  if ( (BYTE3(EventAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventAddMaster___c_TypeInfo);
    v29 = EventAddMaster___c_TypeInfo;
  }
  static_fields = v29->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      static_fields = EventAddMaster___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_EventAddEntity__TypeInfo,
                                                                          v21,
                                                                          v22);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v32,
      Method_EventAddMaster___c__getOverwriteEventAddEntity_b__3_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventAddEntity___ctor__);
    v33 = EventAddMaster___c_TypeInfo->static_fields;
    v33->__9__3_0 = (struct System_Comparison_EventAddEntity__o *)_9__3_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v33->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v41,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventAddEntity__Sort__);
  if ( !v41->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  return (EventAddEntity_o *)v41->fields._items->m_Items[0];
}


void __fastcall EventAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventAddMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4211B11 & 1) == 0 )
  {
    sub_B0D8A4(&EventAddMaster___c_TypeInfo, v1);
    byte_4211B11 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventAddMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventAddMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventAddMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall EventAddMaster___c___ctor(EventAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventAddMaster___c___getOverwriteEventAddEntity_b__3_0(
        EventAddMaster___c_o *this,
        EventAddEntity_o *a,
        EventAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B0D97C(this);
  return b->fields.priority - a->fields.priority;
}