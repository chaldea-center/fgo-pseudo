void __fastcall EventTowerMaster___ctor(EventTowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438A699 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string___ctor__);
    byte_438A699 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    233,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string___ctor__);
}


EventTowerEntity_array *__fastcall EventTowerMaster__GetDatas(
        EventTowerMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  void *v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  __int64 v11; // x10
  struct EventTowerMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v14; // x21
  struct EventTowerMaster___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_438A69A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Comparison_EventTowerEntity___ctor__);
    sub_B775C4(&System_Comparison_EventTowerEntity__TypeInfo);
    sub_B775C4(&EventTowerEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventTowerEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventTowerEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventTowerEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventTowerEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventTowerEntity__TypeInfo);
    sub_B775C4(&Method_EventTowerMaster___c__GetDatas_b__3_0__);
    sub_B775C4(&EventTowerMaster___c_TypeInfo);
    byte_438A69A = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventTowerEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventTowerEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v10,
               (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        v11 = *(&EventTowerEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v11
          && *(EventTowerEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v11 - 8) == EventTowerEntity_TypeInfo
          && *((_DWORD *)list + 4) == eventId )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventTowerEntity__Add__);
        }
      }
      if ( ++v10 >= v9 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B7769C(list, v6);
  }
LABEL_14:
  list = EventTowerMaster___c_TypeInfo;
  if ( (BYTE3(EventTowerMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventTowerMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTowerMaster___c_TypeInfo);
    list = EventTowerMaster___c_TypeInfo;
  }
  static_fields = (struct EventTowerMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = EventTowerMaster___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_EventTowerEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v14,
      Method_EventTowerMaster___c__GetDatas_b__3_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_EventTowerEntity___ctor__);
    v15 = EventTowerMaster___c_TypeInfo->static_fields;
    v15->__9__3_0 = (struct System_Comparison_EventTowerEntity__o *)_9__3_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v15->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !v5 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_EventTowerEntity__Sort__);
  return (EventTowerEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                     (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_EventTowerEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventTowerEntity_o *__fastcall EventTowerMaster__GetEntity(
        EventTowerMaster_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438A697 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string__GetEntity__);
    byte_438A697 = 1;
  }
  PK = EventTowerEntity__CreatePK(eventId, towerId, *(const MethodInfo **)&towerId);
  return (EventTowerEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_21FBCE4 *)Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTowerMaster__TryGetEntity(
        EventTowerMaster_o *this,
        EventTowerEntity_o **entity,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438A698 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string__TryGetEntity__);
    byte_438A698 = 1;
  }
  PK = EventTowerEntity__CreatePK(eventId, towerId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string__TryGetEntity__);
}


void __fastcall EventTowerMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventTowerMaster___c_StaticFields *static_fields; // x0

  if ( (byte_438804F & 1) == 0 )
  {
    sub_B775C4(&EventTowerMaster___c_TypeInfo);
    byte_438804F = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(EventTowerMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventTowerMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventTowerMaster___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall EventTowerMaster___c___ctor(EventTowerMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventTowerMaster___c___GetDatas_b__3_0(
        EventTowerMaster___c_o *this,
        EventTowerEntity_o *a,
        EventTowerEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B7769C(this, a);
  return a->fields.towerId - b->fields.towerId;
}