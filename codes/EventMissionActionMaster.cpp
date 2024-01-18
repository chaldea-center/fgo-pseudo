void __fastcall EventMissionActionMaster___ctor(EventMissionActionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188DAF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string___ctor__, method);
    byte_4188DAF = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    135,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionActionEntity_o *__fastcall EventMissionActionMaster__GetEntity(
        EventMissionActionMaster_o *this,
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4188DAD & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__GetEntity__,
      *(_QWORD *)&missionId);
    byte_4188DAD = 1;
  }
  PK = EventMissionActionEntity__CreatePK(missionId, missionProgressType, id, *(const MethodInfo **)&id);
  return (EventMissionActionEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_24E4520 *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventMissionActionMaster__TryGetEntity(
        EventMissionActionMaster_o *this,
        EventMissionActionEntity_o **entity,
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4188DAE & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__TryGetEntity__,
      entity);
    byte_4188DAE = 1;
  }
  PK = EventMissionActionEntity__CreatePK(
         missionId,
         missionProgressType,
         id,
         *(const MethodInfo **)&missionProgressType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionActionEntity_o *__fastcall EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        int32_t actionType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  EventMissionActionEntity_o *result; // x0
  int32_t v12; // w23
  __int64 v13; // x10

  if ( (byte_4188DB0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B2C35C(&EventMissionActionEntity_TypeInfo, v10);
    byte_4188DB0 = 1;
  }
  result = (EventMissionActionEntity_o *)this->fields.list;
  if ( !result )
LABEL_14:
    sub_B2C434(result, *(_QWORD *)&missionID);
  v12 = 0;
  while ( v12 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (EventMissionActionEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_14;
    result = (EventMissionActionEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                             v12,
                                             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !result )
      goto LABEL_14;
    v13 = *(&EventMissionActionEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v13
      || (EventMissionActionEntity_c *)result->klass->_2.typeHierarchy[v13 - 1] != EventMissionActionEntity_TypeInfo )
    {
      goto LABEL_14;
    }
    if ( result->fields.missionId == missionID
      && result->fields.missionProgressType == progressType
      && result->fields.missionActionType == actionType )
    {
      return result;
    }
    result = (EventMissionActionEntity_o *)this->fields.list;
    ++v12;
    if ( !result )
      goto LABEL_14;
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionActionEntity__o *__fastcall EventMissionActionMaster__getEntityListFromIDnType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x19
  void *v18; // x1
  void *list; // x0
  int32_t v20; // w23
  __int64 v21; // x10
  struct EventMissionActionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v24; // x21
  struct EventMissionActionMaster___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_4188DB2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Comparison_EventMissionActionEntity___ctor__, v8);
    sub_B2C35C(&System_Comparison_EventMissionActionEntity__TypeInfo, v9);
    sub_B2C35C(&EventMissionActionEntity_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo, v14);
    sub_B2C35C(&Method_EventMissionActionMaster___c__getEntityListFromIDnType_b__5_0__, v15);
    sub_B2C35C(&EventMissionActionMaster___c_TypeInfo, v16);
    byte_4188DB2 = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  v20 = 0;
  while ( v20 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( list )
    {
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v20,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v18 = list;
        v21 = *(&EventMissionActionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v21
          && *(EventMissionActionEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v21 - 8) == EventMissionActionEntity_TypeInfo )
        {
          if ( *((_DWORD *)list + 4) == missionID && *((_DWORD *)list + 5) == progressType )
          {
            if ( !v17 )
              goto LABEL_26;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v17,
              (EventMissionProgressRequest_Argument_ProgressData_o *)list,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Add__);
          }
          list = this->fields.list;
          ++v20;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_26;
  }
  list = EventMissionActionMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionActionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionActionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionMaster___c_TypeInfo);
    list = EventMissionActionMaster___c_TypeInfo;
  }
  static_fields = (struct EventMissionActionMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = EventMissionActionMaster___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventMissionActionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v24,
      Method_EventMissionActionMaster___c__getEntityListFromIDnType_b__5_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventMissionActionEntity___ctor__);
    v25 = EventMissionActionMaster___c_TypeInfo->static_fields;
    v25->__9__5_0 = (struct System_Comparison_EventMissionActionEntity__o *)_9__5_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v25->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  if ( !v17 )
LABEL_26:
    sub_B2C434(list, v18);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v17,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v17;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionActionEntity__o *__fastcall EventMissionActionMaster__getEntityListFromIdProgressTypeAndActionType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        int32_t actionType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v15; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v17; // w24
  __int64 v18; // x10

  if ( (byte_4188DB1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B2C35C(&EventMissionActionEntity_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo, v13);
    byte_4188DB1 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_B2C434(list, v15);
  v17 = 0;
  while ( v17 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v17,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v15 = list;
        v18 = *(&EventMissionActionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (EventMissionActionEntity_c *)list->klass->_2.typeHierarchy[v18 - 1] == EventMissionActionEntity_TypeInfo )
        {
          if ( LODWORD(list->fields.items) == missionID
            && HIDWORD(list->fields.items) == progressType
            && HIDWORD(list->fields._syncRoot) == actionType )
          {
            if ( !v14 )
              goto LABEL_16;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v14,
              (EventMissionProgressRequest_Argument_ProgressData_o *)list,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Add__);
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v17;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_16;
  }
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v14;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionActionEntity__o *__fastcall EventMissionActionMaster__getSafeActionListFromIDnType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x19
  void *v18; // x1
  void *list; // x0
  int32_t v20; // w23
  __int64 v21; // x10
  struct EventMissionActionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x20
  Il2CppObject *v24; // x21
  struct EventMissionActionMaster___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_4188DB3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionID);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Comparison_EventMissionActionEntity___ctor__, v8);
    sub_B2C35C(&System_Comparison_EventMissionActionEntity__TypeInfo, v9);
    sub_B2C35C(&EventMissionActionEntity_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo, v14);
    sub_B2C35C(&Method_EventMissionActionMaster___c__getSafeActionListFromIDnType_b__6_0__, v15);
    sub_B2C35C(&EventMissionActionMaster___c_TypeInfo, v16);
    byte_4188DB3 = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_27;
  v20 = 0;
  while ( v20 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( list )
    {
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v20,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v18 = list;
        v21 = *(&EventMissionActionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v21
          && *(EventMissionActionEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v21 - 8) == EventMissionActionEntity_TypeInfo )
        {
          if ( *((_DWORD *)list + 4) == missionID && *((_DWORD *)list + 5) == progressType && *((_DWORD *)list + 7) == 7 )
          {
            if ( !v17 )
              goto LABEL_27;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v17,
              (EventMissionProgressRequest_Argument_ProgressData_o *)list,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Add__);
          }
          list = this->fields.list;
          ++v20;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_27;
  }
  list = EventMissionActionMaster___c_TypeInfo;
  if ( (BYTE3(EventMissionActionMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionActionMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionActionMaster___c_TypeInfo);
    list = EventMissionActionMaster___c_TypeInfo;
  }
  static_fields = (struct EventMissionActionMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = EventMissionActionMaster___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventMissionActionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__6_0,
      v24,
      Method_EventMissionActionMaster___c__getSafeActionListFromIDnType_b__6_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventMissionActionEntity___ctor__);
    v25 = EventMissionActionMaster___c_TypeInfo->static_fields;
    v25->__9__6_0 = (struct System_Comparison_EventMissionActionEntity__o *)_9__6_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v25->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  if ( !v17 )
LABEL_27:
    sub_B2C434(list, v18);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v17,
    (System_Comparison_T__o *)_9__6_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v17;
}


void __fastcall EventMissionActionMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventMissionActionMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4184B21 & 1) == 0 )
  {
    sub_B2C35C(&EventMissionActionMaster___c_TypeInfo, v1);
    byte_4184B21 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventMissionActionMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventMissionActionMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMissionActionMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall EventMissionActionMaster___c___ctor(EventMissionActionMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventMissionActionMaster___c___getEntityListFromIDnType_b__5_0(
        EventMissionActionMaster___c_o *this,
        EventMissionActionEntity_o *a,
        EventMissionActionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B2C434(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionActionMaster___c___getSafeActionListFromIDnType_b__6_0(
        EventMissionActionMaster___c_o *this,
        EventMissionActionEntity_o *a,
        EventMissionActionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B2C434(this, a);
  return a->fields.id - b->fields.id;
}