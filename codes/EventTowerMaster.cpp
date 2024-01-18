void __fastcall EventTowerMaster___ctor(EventTowerMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188252 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string___ctor__, method);
    byte_4188252 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    232,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventTowerEntity_array *__fastcall EventTowerMaster__GetDatas(
        EventTowerMaster_o *this,
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
  struct EventTowerMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v25; // x21
  struct EventTowerMaster___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_4188253 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Comparison_EventTowerEntity___ctor__, v6);
    sub_B2C35C(&System_Comparison_EventTowerEntity__TypeInfo, v7);
    sub_B2C35C(&EventTowerEntity_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTowerEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTowerEntity__Sort__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTowerEntity__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTowerEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_EventTowerEntity__TypeInfo, v13);
    sub_B2C35C(&Method_EventTowerMaster___c__GetDatas_b__3_0__, v14);
    sub_B2C35C(&EventTowerMaster___c_TypeInfo, v15);
    byte_4188253 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventTowerEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventTowerEntity___ctor__);
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
      if ( list )
      {
        v17 = list;
        v22 = *(&EventTowerEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v22
          && *(EventTowerEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v22 - 8) == EventTowerEntity_TypeInfo
          && *((_DWORD *)list + 4) == eventId )
        {
          if ( !v16 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v16,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventTowerEntity__Add__);
        }
      }
      if ( ++v21 >= v20 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B2C434(list, v17);
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
    v25 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventTowerEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v25,
      Method_EventTowerMaster___c__GetDatas_b__3_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventTowerEntity___ctor__);
    v26 = EventTowerMaster___c_TypeInfo->static_fields;
    v26->__9__3_0 = (struct System_Comparison_EventTowerEntity__o *)_9__3_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v26->__9__3_0,
      (System_Int32_array **)_9__3_0,
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
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventTowerEntity__Sort__);
  return (EventTowerEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                     (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventTowerEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventTowerEntity_o *__fastcall EventTowerMaster__GetEntity(
        EventTowerMaster_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4188250 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_4188250 = 1;
  }
  PK = EventTowerEntity__CreatePK(eventId, towerId, *(const MethodInfo **)&towerId);
  return (EventTowerEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                 (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_24E4520 *)Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string__GetEntity__);
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

  if ( (byte_4188251 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string__TryGetEntity__, entity);
    byte_4188251 = 1;
  }
  PK = EventTowerEntity__CreatePK(eventId, towerId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventTowerMaster__EventTowerEntity__string__TryGetEntity__);
}


void __fastcall EventTowerMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventTowerMaster___c_StaticFields *static_fields; // x0

  if ( (byte_418419F & 1) == 0 )
  {
    sub_B2C35C(&EventTowerMaster___c_TypeInfo, v1);
    byte_418419F = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventTowerMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventTowerMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventTowerMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return a->fields.towerId - b->fields.towerId;
}