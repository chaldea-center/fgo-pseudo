void __fastcall EventMissionActionMaster___ctor(EventMissionActionMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9B65 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E9B65 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    136,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string___ctor__);
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

  if ( (byte_42E9B63 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__GetEntity__,
      missionId,
      missionProgressType,
      *(_QWORD *)&id);
    byte_42E9B63 = 1;
  }
  PK = EventMissionActionEntity__CreatePK(missionId, missionProgressType, id, *(const MethodInfo **)&id);
  return (EventMissionActionEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_23FB260 *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__GetEntity__);
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

  if ( (byte_42E9B64 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__TryGetEntity__,
      (_DWORD)entity,
      missionId,
      *(_QWORD *)&missionProgressType);
    byte_42E9B64 = 1;
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
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventMissionActionMaster__EventMissionActionEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventMissionActionEntity_o *__fastcall EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        int32_t actionType,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  EventMissionActionEntity_o *result; // x0
  int32_t v16; // w23
  __int64 v17; // x10

  if ( (byte_42E9B66 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      missionID,
      progressType,
      *(_QWORD *)&actionType);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&EventMissionActionEntity_TypeInfo, v12, v13, v14);
    byte_42E9B66 = 1;
  }
  result = (EventMissionActionEntity_o *)this->fields.list;
  if ( !result )
LABEL_14:
    sub_B5D69C(result, *(_QWORD *)&missionID);
  v16 = 0;
  while ( v16 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    result = (EventMissionActionEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_14;
    result = (EventMissionActionEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                             v16,
                                             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !result )
      goto LABEL_14;
    v17 = *(&EventMissionActionEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v17
      || (EventMissionActionEntity_c *)result->klass->_2.typeHierarchy[v17 - 1] != EventMissionActionEntity_TypeInfo )
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
    ++v16;
    if ( !result )
      goto LABEL_14;
  }
  return 0LL;
}


System_Collections_Generic_List_EventMissionActionEntity__o *__fastcall EventMissionActionMaster__getEntityListFromIDnType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x19
  void *v38; // x1
  void *list; // x0
  int32_t v40; // w23
  __int64 v41; // x10
  struct EventMissionActionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x20
  Il2CppObject *v44; // x21
  struct EventMissionActionMaster___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7

  if ( (byte_42E9B68 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      missionID,
      progressType,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Comparison_EventMissionActionEntity___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Comparison_EventMissionActionEntity__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&EventMissionActionEntity_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__, v25, v26, v27);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_EventMissionActionMaster___c__getEntityListFromIDnType_b__5_0__, v31, v32, v33);
    sub_B5D5C4(&EventMissionActionMaster___c_TypeInfo, v34, v35, v36);
    byte_42E9B68 = 1;
  }
  v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v37,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  v40 = 0;
  while ( v40 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( list )
    {
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v40,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v38 = list;
        v41 = *(&EventMissionActionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v41
          && *(EventMissionActionEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v41 - 8) == EventMissionActionEntity_TypeInfo )
        {
          if ( *((_DWORD *)list + 4) == missionID && *((_DWORD *)list + 5) == progressType )
          {
            if ( !v37 )
              goto LABEL_26;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v37,
              (EventMissionProgressRequest_Argument_ProgressData_o *)list,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Add__);
          }
          list = this->fields.list;
          ++v40;
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
    v44 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventMissionActionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v44,
      Method_EventMissionActionMaster___c__getEntityListFromIDnType_b__5_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventMissionActionEntity___ctor__);
    v45 = EventMissionActionMaster___c_TypeInfo->static_fields;
    v45->__9__5_0 = (struct System_Comparison_EventMissionActionEntity__o *)_9__5_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v45->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  if ( !v37 )
LABEL_26:
    sub_B5D69C(list, v38);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v37,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v37;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionActionEntity__o *__fastcall EventMissionActionMaster__getEntityListFromIdProgressTypeAndActionType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
        int32_t actionType,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v25; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v27; // w24
  __int64 v28; // x10

  if ( (byte_42E9B67 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      missionID,
      progressType,
      *(_QWORD *)&actionType);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&EventMissionActionEntity_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo, v21, v22, v23);
    byte_42E9B67 = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_B5D69C(list, v25);
  v27 = 0;
  while ( v27 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v27,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v25 = list;
        v28 = *(&EventMissionActionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v28
          && (EventMissionActionEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] == EventMissionActionEntity_TypeInfo )
        {
          if ( LODWORD(list->fields.items) == missionID
            && HIDWORD(list->fields.items) == progressType
            && HIDWORD(list->fields._syncRoot) == actionType )
          {
            if ( !v24 )
              goto LABEL_16;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v24,
              (EventMissionProgressRequest_Argument_ProgressData_o *)list,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Add__);
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v27;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_16;
  }
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v24;
}


System_Collections_Generic_List_EventMissionActionEntity__o *__fastcall EventMissionActionMaster__getSafeActionListFromIDnType(
        EventMissionActionMaster_o *this,
        int32_t missionID,
        int32_t progressType,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x19
  void *v38; // x1
  void *list; // x0
  int32_t v40; // w23
  __int64 v41; // x10
  struct EventMissionActionMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x20
  Il2CppObject *v44; // x21
  struct EventMissionActionMaster___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7

  if ( (byte_42E9B69 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      missionID,
      progressType,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Comparison_EventMissionActionEntity___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Comparison_EventMissionActionEntity__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&EventMissionActionEntity_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionEntity__Add__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__, v25, v26, v27);
    sub_B5D5C4(&System_Collections_Generic_List_EventMissionActionEntity__TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_EventMissionActionMaster___c__getSafeActionListFromIDnType_b__6_0__, v31, v32, v33);
    sub_B5D5C4(&EventMissionActionMaster___c_TypeInfo, v34, v35, v36);
    byte_42E9B69 = 1;
  }
  v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionActionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v37,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionActionEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_27;
  v40 = 0;
  while ( v40 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = this->fields.list;
    if ( list )
    {
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v40,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v38 = list;
        v41 = *(&EventMissionActionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v41
          && *(EventMissionActionEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v41 - 8) == EventMissionActionEntity_TypeInfo )
        {
          if ( *((_DWORD *)list + 4) == missionID && *((_DWORD *)list + 5) == progressType && *((_DWORD *)list + 7) == 7 )
          {
            if ( !v37 )
              goto LABEL_27;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v37,
              (EventMissionProgressRequest_Argument_ProgressData_o *)list,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionActionEntity__Add__);
          }
          list = this->fields.list;
          ++v40;
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
    v44 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventMissionActionEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__6_0,
      v44,
      Method_EventMissionActionMaster___c__getSafeActionListFromIDnType_b__6_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventMissionActionEntity___ctor__);
    v45 = EventMissionActionMaster___c_TypeInfo->static_fields;
    v45->__9__6_0 = (struct System_Comparison_EventMissionActionEntity__o *)_9__6_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v45->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  if ( !v37 )
LABEL_27:
    sub_B5D69C(list, v38);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v37,
    (System_Comparison_T__o *)_9__6_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventMissionActionEntity__Sort__);
  return (System_Collections_Generic_List_EventMissionActionEntity__o *)v37;
}


void __fastcall EventMissionActionMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventMissionActionMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E655C & 1) == 0 )
  {
    sub_B5D5C4(&EventMissionActionMaster___c_TypeInfo, v1, v2, v3);
    byte_42E655C = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventMissionActionMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventMissionActionMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMissionActionMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall EventMissionActionMaster___c___getSafeActionListFromIDnType_b__6_0(
        EventMissionActionMaster___c_o *this,
        EventMissionActionEntity_o *a,
        EventMissionActionEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.id - b->fields.id;
}