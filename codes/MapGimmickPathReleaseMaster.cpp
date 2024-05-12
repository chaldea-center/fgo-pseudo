void __fastcall MapGimmickPathReleaseMaster___ctor(MapGimmickPathReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438E58A & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string___ctor__);
    byte_438E58A = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    474,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickPathReleaseEntity_o *__fastcall MapGimmickPathReleaseMaster__GetEntity(
        MapGimmickPathReleaseMaster_o *this,
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438E58B & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__GetEntity__);
    byte_438E58B = 1;
  }
  PK = MapGimmickPathReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&priority);
  return (MapGimmickPathReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_21FBCE4 *)Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__GetEntity__);
}


MapGimmickPathReleaseEntity_o *__fastcall MapGimmickPathReleaseMaster__GetMapGimmickPathLimitEntity(
        MapGimmickPathReleaseMaster_o *this,
        int32_t mapGimmickId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v10; // x24
  __int64 v11; // x10
  MapGimmickPathReleaseMaster___c_c *v12; // x0
  struct MapGimmickPathReleaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v15; // x21
  struct MapGimmickPathReleaseMaster___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_438E589 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Comparison_MapGimmickPathReleaseEntity___ctor__);
    sub_B775C4(&System_Comparison_MapGimmickPathReleaseEntity__TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_MapGimmickPathReleaseEntity__TypeInfo);
    sub_B775C4(&MapGimmickPathReleaseEntity_TypeInfo);
    sub_B775C4(&Method_MapGimmickPathReleaseMaster___c__GetMapGimmickPathLimitEntity_b__1_0__);
    sub_B775C4(&MapGimmickPathReleaseMaster___c_TypeInfo);
    byte_438E589 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_MapGimmickPathReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
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
      if ( !list )
        break;
      v10 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v11 = *(&MapGimmickPathReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v11
        || (MapGimmickPathReleaseEntity_c *)list->klass->_2.typeHierarchy[v11 - 1] != MapGimmickPathReleaseEntity_TypeInfo )
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
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
        if ( !list )
          break;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CommonReleaseMaster__IsOpen(
                                                                                             (CommonReleaseMaster_o *)list,
                                                                                             v10->fields.targetId,
                                                                                             0LL,
                                                                                             0,
                                                                                             0LL);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            v10,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Add__);
        }
      }
      if ( ++v9 >= v8 )
        goto LABEL_19;
    }
LABEL_33:
    sub_B7769C(list, v6);
  }
LABEL_19:
  if ( !v5 )
    goto LABEL_33;
  if ( v5->fields._size < 1 )
    return 0LL;
  v12 = MapGimmickPathReleaseMaster___c_TypeInfo;
  if ( (BYTE3(MapGimmickPathReleaseMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapGimmickPathReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickPathReleaseMaster___c_TypeInfo);
    v12 = MapGimmickPathReleaseMaster___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = MapGimmickPathReleaseMaster___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_MapGimmickPathReleaseEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v15,
      Method_MapGimmickPathReleaseMaster___c__GetMapGimmickPathLimitEntity_b__1_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_MapGimmickPathReleaseEntity___ctor__);
    v16 = MapGimmickPathReleaseMaster___c_TypeInfo->static_fields;
    v16->__9__1_0 = (struct System_Comparison_MapGimmickPathReleaseEntity__o *)_9__1_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v16->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v5,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Sort__);
  if ( !v5->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  return (MapGimmickPathReleaseEntity_o *)v5->fields._items->m_Items[0];
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

  if ( (byte_438E58C & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__TryGetEntity__);
    byte_438E58C = 1;
  }
  PK = MapGimmickPathReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&mapGimmickId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__TryGetEntity__);
}


void __fastcall MapGimmickPathReleaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct MapGimmickPathReleaseMaster___c_StaticFields *static_fields; // x0

  if ( (byte_43889A2 & 1) == 0 )
  {
    sub_B775C4(&MapGimmickPathReleaseMaster___c_TypeInfo);
    byte_43889A2 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(MapGimmickPathReleaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = MapGimmickPathReleaseMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MapGimmickPathReleaseMaster___c_o *)v1;
  sub_B77560(static_fields);
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
    sub_B7769C(this, a);
  return b->fields.priority - a->fields.priority;
}