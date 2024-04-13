void __fastcall EventAddMaster___ctor(EventAddMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB872 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EB872 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    201,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string___ctor__);
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

  if ( (byte_42EB870 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventAddMaster__EventAddEntity__string__GetEntity__,
      eventId,
      overwriteType,
      *(_QWORD *)&priority);
    byte_42EB870 = 1;
  }
  PK = EventAddEntity__CreatePK(eventId, overwriteType, priority, *(const MethodInfo **)&priority);
  return (EventAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                               (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                               PK,
                               (const MethodInfo_23FB260 *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string__GetEntity__);
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

  if ( (byte_42EB871 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventAddMaster__EventAddEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&overwriteType);
    byte_42EB871 = 1;
  }
  PK = EventAddEntity__CreatePK(eventId, overwriteType, priority, *(const MethodInfo **)&overwriteType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string__TryGetEntity__);
}


EventAddEntity_o *__fastcall EventAddMaster__getOverwriteEventAddEntity(
        EventAddMaster_o *this,
        int32_t eventId,
        int32_t overwriteType,
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
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  __int64 v46; // x1
  void *list; // x0
  int32_t v48; // w23
  int32_t v49; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v50; // x25
  __int64 v51; // x10
  int32_t v52; // w26
  int32_t v53; // w27
  EventAddMaster___c_c *v54; // x0
  struct EventAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v57; // x21
  struct EventAddMaster___c_StaticFields *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v66; // [xsp+8h] [xbp-58h]

  if ( (byte_42EB873 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      overwriteType,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Comparison_EventAddEntity___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Comparison_EventAddEntity__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&CondType_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&EventAddEntity_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventAddEntity__Add__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventAddEntity__Sort__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventAddEntity___ctor__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventAddEntity__get_Count__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventAddEntity__get_Item__, v34, v35, v36);
    sub_B5D5C4(&System_Collections_Generic_List_EventAddEntity__TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_EventAddMaster___c__getOverwriteEventAddEntity_b__3_0__, v40, v41, v42);
    sub_B5D5C4(&EventAddMaster___c_TypeInfo, v43, v44, v45);
    byte_42EB873 = 1;
  }
  v66 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventAddEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v66,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventAddEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_33;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v48 = (int)list;
    v49 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v49,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v50 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v51 = *(&EventAddEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v51
        || *(EventAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v51 - 8) != EventAddEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventId && *((_DWORD *)list + 5) == overwriteType )
      {
        v53 = *((_DWORD *)list + 10);
        v52 = *((_DWORD *)list + 11);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        list = (void *)CondType__IsOpen(v53, v52, 0LL, 0, 0LL);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          list = v66;
          if ( !v66 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v66,
            v50,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventAddEntity__Add__);
        }
      }
      if ( ++v49 >= v48 )
        goto LABEL_19;
    }
LABEL_33:
    sub_B5D69C(list, v46);
  }
LABEL_19:
  if ( !v66 )
    goto LABEL_33;
  if ( v66->fields._size < 1 )
    return 0LL;
  v54 = EventAddMaster___c_TypeInfo;
  if ( (BYTE3(EventAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventAddMaster___c_TypeInfo);
    v54 = EventAddMaster___c_TypeInfo;
  }
  static_fields = v54->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v54);
      static_fields = EventAddMaster___c_TypeInfo->static_fields;
    }
    v57 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventAddEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v57,
      Method_EventAddMaster___c__getOverwriteEventAddEntity_b__3_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventAddEntity___ctor__);
    v58 = EventAddMaster___c_TypeInfo->static_fields;
    v58->__9__3_0 = (struct System_Comparison_EventAddEntity__o *)_9__3_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v58->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v66,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventAddEntity__Sort__);
  if ( !v66->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  return (EventAddEntity_o *)v66->fields._items->m_Items[0];
}


void __fastcall EventAddMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventAddMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E64E5 & 1) == 0 )
  {
    sub_B5D5C4(&EventAddMaster___c_TypeInfo, v1, v2, v3);
    byte_42E64E5 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventAddMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventAddMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventAddMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}