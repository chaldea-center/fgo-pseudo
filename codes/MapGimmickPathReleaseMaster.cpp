void __fastcall MapGimmickPathReleaseMaster___ctor(MapGimmickPathReleaseMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBB14 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EBB14 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    474,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickPathReleaseEntity_o *__fastcall MapGimmickPathReleaseMaster__GetEntity(
        MapGimmickPathReleaseMaster_o *this,
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EBB15 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__GetEntity__,
      mapGimmickId,
      priority,
      method);
    byte_42EBB15 = 1;
  }
  PK = MapGimmickPathReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&priority);
  return (MapGimmickPathReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_23FB260 *)Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__GetEntity__);
}


MapGimmickPathReleaseEntity_o *__fastcall MapGimmickPathReleaseMaster__GetMapGimmickPathLimitEntity(
        MapGimmickPathReleaseMaster_o *this,
        int32_t mapGimmickId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x19
  __int64 v49; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v51; // w22
  int32_t v52; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v53; // x24
  __int64 v54; // x10
  MapGimmickPathReleaseMaster___c_c *v55; // x0
  struct MapGimmickPathReleaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v58; // x21
  struct MapGimmickPathReleaseMaster___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7

  if ( (byte_42EBB13 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      mapGimmickId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_MapGimmickPathReleaseEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_MapGimmickPathReleaseEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMaster_CommonReleaseMaster___, v15, v16, v17);
    sub_B5D5C4(&DataManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Sort__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity___ctor__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__get_Count__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__get_Item__, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_MapGimmickPathReleaseEntity__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&MapGimmickPathReleaseEntity_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_MapGimmickPathReleaseMaster___c__GetMapGimmickPathLimitEntity_b__1_0__, v42, v43, v44);
    sub_B5D5C4(&MapGimmickPathReleaseMaster___c_TypeInfo, v45, v46, v47);
    byte_42EBB13 = 1;
  }
  v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MapGimmickPathReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v48,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v51 = (int)list;
    v52 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v52,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v53 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v54 = *(&MapGimmickPathReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v54
        || (MapGimmickPathReleaseEntity_c *)list->klass->_2.typeHierarchy[v54 - 1] != MapGimmickPathReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == mapGimmickId )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
        if ( !list )
          break;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CommonReleaseMaster__IsOpen(
                                                                                             (CommonReleaseMaster_o *)list,
                                                                                             v53->fields.targetId,
                                                                                             0LL,
                                                                                             0,
                                                                                             0LL);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v48 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v48,
            v53,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Add__);
        }
      }
      if ( ++v52 >= v51 )
        goto LABEL_19;
    }
LABEL_33:
    sub_B5D69C(list, v49);
  }
LABEL_19:
  if ( !v48 )
    goto LABEL_33;
  if ( v48->fields._size < 1 )
    return 0LL;
  v55 = MapGimmickPathReleaseMaster___c_TypeInfo;
  if ( (BYTE3(MapGimmickPathReleaseMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapGimmickPathReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickPathReleaseMaster___c_TypeInfo);
    v55 = MapGimmickPathReleaseMaster___c_TypeInfo;
  }
  static_fields = v55->static_fields;
  _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      static_fields = MapGimmickPathReleaseMaster___c_TypeInfo->static_fields;
    }
    v58 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_MapGimmickPathReleaseEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v58,
      Method_MapGimmickPathReleaseMaster___c__GetMapGimmickPathLimitEntity_b__1_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_MapGimmickPathReleaseEntity___ctor__);
    v59 = MapGimmickPathReleaseMaster___c_TypeInfo->static_fields;
    v59->__9__1_0 = (struct System_Comparison_MapGimmickPathReleaseEntity__o *)_9__1_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v59->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v48,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Sort__);
  if ( !v48->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  return (MapGimmickPathReleaseEntity_o *)v48->fields._items->m_Items[0];
}


float __fastcall MapGimmickPathReleaseMaster__LimitMapGimmickPathRate(
        MapGimmickPathReleaseMaster_o *this,
        int32_t mapGimmickId,
        float currentRate,
        const MethodInfo *method)
{
  MapGimmickPathReleaseEntity_o *MapGimmickPathLimitEntity; // x0

  MapGimmickPathLimitEntity = MapGimmickPathReleaseMaster__GetMapGimmickPathLimitEntity(this, mapGimmickId, method);
  if ( MapGimmickPathLimitEntity )
    return UnityEngine_Mathf__Min(currentRate, (float)MapGimmickPathLimitEntity->fields.limitRate / 1000.0, 0LL);
  else
    return currentRate;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MapGimmickPathReleaseMaster__TryGetEntity(
        MapGimmickPathReleaseMaster_o *this,
        MapGimmickPathReleaseEntity_o **entity,
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EBB16 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__TryGetEntity__,
      (_DWORD)entity,
      mapGimmickId,
      *(_QWORD *)&priority);
    byte_42EBB16 = 1;
  }
  PK = MapGimmickPathReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&mapGimmickId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__TryGetEntity__);
}


void __fastcall MapGimmickPathReleaseMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct MapGimmickPathReleaseMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5F23 & 1) == 0 )
  {
    sub_B5D5C4(&MapGimmickPathReleaseMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5F23 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(MapGimmickPathReleaseMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = MapGimmickPathReleaseMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MapGimmickPathReleaseMaster___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall MapGimmickPathReleaseMaster___c___ctor(
        MapGimmickPathReleaseMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall MapGimmickPathReleaseMaster___c___GetMapGimmickPathLimitEntity_b__1_0(
        MapGimmickPathReleaseMaster___c_o *this,
        MapGimmickPathReleaseEntity_o *a,
        MapGimmickPathReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B5D69C(this, a);
  return b->fields.priority - a->fields.priority;
}