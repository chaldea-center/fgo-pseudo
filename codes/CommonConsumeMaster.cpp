void __fastcall CommonConsumeMaster___ctor(CommonConsumeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4387511 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string___ctor__);
    byte_4387511 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    348,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CommonConsumeEntity_o *__fastcall CommonConsumeMaster__GetEntity(
        CommonConsumeMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438750F & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string__GetEntity__);
    byte_438750F = 1;
  }
  PK = CommonConsumeEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (CommonConsumeEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_21FBCE4 *)Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string__GetEntity__);
}


CommonConsumeEntity_array *__fastcall CommonConsumeMaster__GetIdEntityList(
        CommonConsumeMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w23
  __int64 v10; // x10

  if ( (byte_4387513 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&CommonConsumeEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_CommonConsumeEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_CommonConsumeEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_CommonConsumeEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_CommonConsumeEntity__TypeInfo);
    byte_4387513 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_CommonConsumeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_CommonConsumeEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v9,
                                                                                           (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        v10 = *(&CommonConsumeEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v10
          && (CommonConsumeEntity_c *)list->klass->_2.typeHierarchy[v10 - 1] == CommonConsumeEntity_TypeInfo
          && LODWORD(list->fields.items) == id )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_CommonConsumeEntity__Add__);
        }
      }
      if ( ++v9 >= v8 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B7769C(list, v6);
  }
LABEL_14:
  if ( !v5 )
    goto LABEL_16;
  return (CommonConsumeEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                        (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_CommonConsumeEntity__ToArray__);
}


CommonConsumeEntity_array *__fastcall CommonConsumeMaster__GetSortedEntityList(
        CommonConsumeMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  void *v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  __int64 v11; // x10
  struct CommonConsumeMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__3_0; // x20
  Il2CppObject *v14; // x21
  struct CommonConsumeMaster___c_StaticFields *v15; // x0

  if ( (byte_4387512 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&CommonConsumeEntity_TypeInfo);
    sub_B775C4(&Method_System_Comparison_CommonConsumeEntity___ctor__);
    sub_B775C4(&System_Comparison_CommonConsumeEntity__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_CommonConsumeEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_CommonConsumeEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_CommonConsumeEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_CommonConsumeEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_CommonConsumeEntity__TypeInfo);
    sub_B775C4(&Method_CommonConsumeMaster___c__GetSortedEntityList_b__3_0__);
    sub_B775C4(&CommonConsumeMaster___c_TypeInfo);
    byte_4387512 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_CommonConsumeEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_CommonConsumeEntity___ctor__);
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
        v11 = *(&CommonConsumeEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v11
          && *(CommonConsumeEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v11 - 8) == CommonConsumeEntity_TypeInfo
          && *((_DWORD *)list + 4) == id )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_CommonConsumeEntity__Add__);
        }
      }
      if ( ++v10 >= v9 )
        goto LABEL_14;
    }
LABEL_24:
    sub_B7769C(list, v6);
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
    v14 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_CommonConsumeEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__3_0,
      v14,
      Method_CommonConsumeMaster___c__GetSortedEntityList_b__3_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_CommonConsumeEntity___ctor__);
    v15 = CommonConsumeMaster___c_TypeInfo->static_fields;
    v15->__9__3_0 = (struct System_Comparison_CommonConsumeEntity__o *)_9__3_0;
    list = (void *)sub_B77560(&v15->__9__3_0);
  }
  if ( !v5 )
    goto LABEL_24;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
    (System_Comparison_T__o *)_9__3_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_CommonConsumeEntity__Sort__);
  return (CommonConsumeEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                        (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_CommonConsumeEntity__ToArray__);
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

  if ( (byte_4387510 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string__TryGetEntity__);
    byte_4387510 = 1;
  }
  PK = CommonConsumeEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_CommonConsumeMaster__CommonConsumeEntity__string__TryGetEntity__);
}


void __fastcall CommonConsumeMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_43890A4 & 1) == 0 )
  {
    sub_B775C4(&CommonConsumeMaster___c_TypeInfo);
    byte_43890A4 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(CommonConsumeMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)CommonConsumeMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7769C(this, x);
  return y->fields.priority - x->fields.priority;
}