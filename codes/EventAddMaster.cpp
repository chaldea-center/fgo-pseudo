void __fastcall EventAddMaster___ctor(EventAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B2653 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string___ctor__);
    byte_42B2653 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    201,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string___ctor__);
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

  if ( (byte_42B2651 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string__GetEntity__);
    byte_42B2651 = 1;
  }
  PK = EventAddEntity__CreatePK(eventId, overwriteType, priority, *(const MethodInfo **)&priority);
  return (EventAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                               (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                               PK,
                               (const MethodInfo_23E2728 *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string__GetEntity__);
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

  if ( (byte_42B2652 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string__TryGetEntity__);
    byte_42B2652 = 1;
  }
  PK = EventAddEntity__CreatePK(eventId, overwriteType, priority, *(const MethodInfo **)&overwriteType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string__TryGetEntity__);
}


EventAddEntity_o *__fastcall EventAddMaster__getOverwriteEventAddEntity(
        EventAddMaster_o *this,
        int32_t eventId,
        int32_t overwriteType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  void *list; // x0
  int32_t v9; // w23
  int32_t v10; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x25
  __int64 v12; // x10
  int32_t v13; // w26
  int32_t v14; // w27
  EventAddMaster___c_c *v15; // x0
  struct EventAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v18; // x21
  struct EventAddMaster___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // [xsp+8h] [xbp-58h]

  if ( (byte_42B2654 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_EventAddEntity___ctor__);
    sub_B52984(&System_Comparison_EventAddEntity__TypeInfo);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&EventAddEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventAddEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventAddEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_EventAddEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventAddEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_EventAddEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_EventAddEntity__TypeInfo);
    sub_B52984(&Method_EventAddMaster___c__getOverwriteEventAddEntity_b__3_0__);
    sub_B52984(&EventAddMaster___c_TypeInfo);
    byte_42B2654 = 1;
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventAddEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventAddEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_33;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v9 = (int)list;
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v10,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v12 = *(&EventAddEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v12
        || *(EventAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v12 - 8) != EventAddEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == overwriteType )
      {
        v14 = *((_DWORD *)list + 10);
        v13 = *((_DWORD *)list + 11);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        list = (void *)CondType__IsOpen(v14, v13, 0LL, 0, 0LL);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          list = v27;
          if ( !v27 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v27,
            v11,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventAddEntity__Add__);
        }
      }
      if ( ++v10 >= v9 )
        goto LABEL_19;
    }
LABEL_33:
    sub_B52A5C(list, v7);
  }
LABEL_19:
  if ( !v27 )
    goto LABEL_33;
  if ( v27->fields._size < 1 )
    return 0LL;
  v15 = EventAddMaster___c_TypeInfo;
  if ( (BYTE3(EventAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventAddMaster___c_TypeInfo);
    v15 = EventAddMaster___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = EventAddMaster___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v18,
      Method_EventAddMaster___c__getOverwriteEventAddEntity_b__3_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_EventAddEntity___ctor__);
    v19 = EventAddMaster___c_TypeInfo->static_fields;
    v19->__9__3_0 = (struct System_Comparison_EventAddEntity__o *)_9__3_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v19->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v27,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_EventAddEntity__Sort__);
  if ( !v27->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  return (EventAddEntity_o *)v27->fields._items->m_Items[0];
}


void __fastcall EventAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventAddMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD8A7 & 1) == 0 )
  {
    sub_B52984(&EventAddMaster___c_TypeInfo);
    byte_42AD8A7 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(EventAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventAddMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventAddMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
  return b->fields.priority - a->fields.priority;
}