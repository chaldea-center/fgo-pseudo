void __fastcall CommonConsumeMaster___ctor(CommonConsumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4183E23 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string___ctor__, method);
    byte_4183E23 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    347,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CommonConsumeEntity_o *__fastcall CommonConsumeMaster__GetEntity(
        CommonConsumeMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4183E21 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4183E21 = 1;
  }
  PK = CommonConsumeEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (CommonConsumeEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_24E4520 *)Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
CommonConsumeEntity_array *__fastcall CommonConsumeMaster__GetIdEntityList(
        CommonConsumeMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w22
  int32_t v15; // w23
  __int64 v16; // x10

  if ( (byte_4183E25 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&CommonConsumeEntity_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommonConsumeEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommonConsumeEntity__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommonConsumeEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_CommonConsumeEntity__TypeInfo, v10);
    byte_4183E25 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CommonConsumeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CommonConsumeEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = (int)list;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v15,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v12 = list;
        v16 = *(&CommonConsumeEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (CommonConsumeEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] == CommonConsumeEntity_TypeInfo
          && LODWORD(list->fields.items) == id )
        {
          if ( !v11 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v11,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CommonConsumeEntity__Add__);
        }
      }
      if ( ++v15 >= v14 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B2C434(list, v12);
  }
LABEL_14:
  if ( !v11 )
    goto LABEL_16;
  return (CommonConsumeEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_CommonConsumeEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
CommonConsumeEntity_array *__fastcall CommonConsumeMaster__GetSortedEntityList(
        CommonConsumeMaster_o *this,
        int32_t id,
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
  struct CommonConsumeMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v25; // x21
  struct CommonConsumeMaster___c_StaticFields *v26; // x0

  if ( (byte_4183E24 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&CommonConsumeEntity_TypeInfo, v6);
    sub_B2C35C(&Method_System_Comparison_CommonConsumeEntity___ctor__, v7);
    sub_B2C35C(&System_Comparison_CommonConsumeEntity__TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommonConsumeEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommonConsumeEntity__Sort__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommonConsumeEntity__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommonConsumeEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_CommonConsumeEntity__TypeInfo, v13);
    sub_B2C35C(&Method_CommonConsumeMaster___c__GetSortedEntityList_b__3_0__, v14);
    sub_B2C35C(&CommonConsumeMaster___c_TypeInfo, v15);
    byte_4183E24 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CommonConsumeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CommonConsumeEntity___ctor__);
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
        v22 = *(&CommonConsumeEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v22
          && *(CommonConsumeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v22 - 8) == CommonConsumeEntity_TypeInfo
          && *((_DWORD *)list + 4) == id )
        {
          if ( !v16 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v16,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CommonConsumeEntity__Add__);
        }
      }
      if ( ++v21 >= v20 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B2C434(list, v17);
  }
LABEL_14:
  list = CommonConsumeMaster___c_TypeInfo;
  if ( (BYTE3(CommonConsumeMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonConsumeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonConsumeMaster___c_TypeInfo);
    list = CommonConsumeMaster___c_TypeInfo;
  }
  static_fields = (struct CommonConsumeMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = CommonConsumeMaster___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_CommonConsumeEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v25,
      Method_CommonConsumeMaster___c__GetSortedEntityList_b__3_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_CommonConsumeEntity___ctor__);
    v26 = CommonConsumeMaster___c_TypeInfo->static_fields;
    v26->__9__3_0 = (struct System_Comparison_CommonConsumeEntity__o *)_9__3_0;
    sub_B2C2F8(&v26->__9__3_0, _9__3_0);
  }
  if ( !v16 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v16,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_CommonConsumeEntity__Sort__);
  return (CommonConsumeEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_CommonConsumeEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonConsumeMaster__TryGetEntity(
        CommonConsumeMaster_o *this,
        CommonConsumeEntity_o **entity,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4183E22 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string__TryGetEntity__, entity);
    byte_4183E22 = 1;
  }
  PK = CommonConsumeEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string__TryGetEntity__);
}


void __fastcall CommonConsumeMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct CommonConsumeMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4184F49 & 1) == 0 )
  {
    sub_B2C35C(&CommonConsumeMaster___c_TypeInfo, v1);
    byte_4184F49 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(CommonConsumeMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = CommonConsumeMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CommonConsumeMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall CommonConsumeMaster___c___ctor(CommonConsumeMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CommonConsumeMaster___c___GetSortedEntityList_b__3_0(
        CommonConsumeMaster___c_o *this,
        CommonConsumeEntity_o *x,
        CommonConsumeEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_B2C434(this, x);
  return y->fields.priority - x->fields.priority;
}