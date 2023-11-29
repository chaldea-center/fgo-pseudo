void __fastcall EventAddMaster___ctor(EventAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FC516 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string___ctor__, method);
    byte_40FC516 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    200,
    (const MethodInfo_266F73C *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string___ctor__);
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

  if ( (byte_40FC514 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_40FC514 = 1;
  }
  PK = EventAddEntity__CreatePK(eventId, overwriteType, priority, *(const MethodInfo **)&priority);
  return (EventAddEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                               (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                               PK,
                               (const MethodInfo_266F7D8 *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string__GetEntity__);
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

  if ( (byte_40FC515 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_EventAddMaster__EventAddEntity__string__TryGetEntity__, entity);
    byte_40FC515 = 1;
  }
  PK = EventAddEntity__CreatePK(eventId, overwriteType, priority, *(const MethodInfo **)&overwriteType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_EventAddMaster__EventAddEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventAddEntity_o *__fastcall EventAddMaster__getOverwriteEventAddEntity(
        EventAddMaster_o *this,
        int32_t eventId,
        int32_t overwriteType,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v20; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int32_t v27; // w23
  int32_t v28; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v29; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x25
  __int64 v32; // x10
  int32_t monitor_high; // w26
  int32_t monitor; // w27
  EventAddMaster___c_c *v35; // x0
  struct EventAddMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v38; // x21
  struct EventAddMaster___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // [xsp+8h] [xbp-58h]

  if ( (byte_40FC517 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&Method_System_Comparison_EventAddEntity___ctor__, v9);
    sub_B16FFC(&System_Comparison_EventAddEntity__TypeInfo, v10);
    sub_B16FFC(&CondType_TypeInfo, v11);
    sub_B16FFC(&EventAddEntity_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventAddEntity__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventAddEntity__Sort__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventAddEntity___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventAddEntity__get_Count__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventAddEntity__get_Item__, v17);
    sub_B16FFC(&System_Collections_Generic_List_EventAddEntity__TypeInfo, v18);
    sub_B16FFC(&Method_EventAddMaster___c__getOverwriteEventAddEntity_b__3_0__, v19);
    sub_B16FFC(&EventAddMaster___c_TypeInfo, v20);
    byte_40FC517 = 1;
  }
  v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventAddEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&overwriteType,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v47,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v27 = Count;
    v28 = 0;
    while ( 1 )
    {
      v29 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v29 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v29,
               v28,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
      v32 = *(&EventAddEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v32
        || (EventAddEntity_c *)Item->klass->_2.typeHierarchy[v32 - 1] != EventAddEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(Item[1].klass) == eventId && HIDWORD(Item[1].klass) == overwriteType )
      {
        monitor = (int32_t)Item[2].monitor;
        monitor_high = HIDWORD(Item[2].monitor);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsOpen(monitor, monitor_high, 0LL, 0, 0LL) )
        {
          if ( !v47 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v47,
            v31,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventAddEntity__Add__);
        }
      }
      if ( ++v28 >= v27 )
        goto LABEL_19;
    }
LABEL_33:
    sub_B170D4();
  }
LABEL_19:
  if ( !v47 )
    goto LABEL_33;
  if ( v47->fields._size < 1 )
    return 0LL;
  v35 = EventAddMaster___c_TypeInfo;
  if ( (BYTE3(EventAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventAddMaster___c_TypeInfo);
    v35 = EventAddMaster___c_TypeInfo;
  }
  static_fields = v35->static_fields;
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      static_fields = EventAddMaster___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventAddEntity__TypeInfo,
                                                                          v23,
                                                                          v24,
                                                                          v25,
                                                                          v26);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v38,
      Method_EventAddMaster___c__getOverwriteEventAddEntity_b__3_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventAddEntity___ctor__);
    v39 = EventAddMaster___c_TypeInfo->static_fields;
    v39->__9__3_0 = (struct System_Comparison_EventAddEntity__o *)_9__3_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v39->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v47,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventAddEntity__Sort__);
  if ( !v47->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  return (EventAddEntity_o *)v47->fields._items->m_Items[0];
}


void __fastcall EventAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8B8D & 1) == 0 )
  {
    sub_B16FFC(&EventAddMaster___c_TypeInfo, v1);
    byte_40F8B8D = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventAddMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventAddMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}