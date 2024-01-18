void __fastcall MapGimmickPathReleaseMaster___ctor(MapGimmickPathReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41858B2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string___ctor__, method);
    byte_41858B2 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    472,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickPathReleaseEntity_o *__fastcall MapGimmickPathReleaseMaster__GetEntity(
        MapGimmickPathReleaseMaster_o *this,
        int32_t mapGimmickId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_41858B3 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__GetEntity__,
      *(_QWORD *)&mapGimmickId);
    byte_41858B3 = 1;
  }
  PK = MapGimmickPathReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&priority);
  return (MapGimmickPathReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                            (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_24E4520 *)Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
MapGimmickPathReleaseEntity_o *__fastcall MapGimmickPathReleaseMaster__GetMapGimmickPathLimitEntity(
        MapGimmickPathReleaseMaster_o *this,
        int32_t mapGimmickId,
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x19
  __int64 v20; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v22; // w22
  int32_t v23; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x24
  __int64 v25; // x10
  MapGimmickPathReleaseMaster___c_c *v26; // x0
  struct MapGimmickPathReleaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_0; // x20
  Il2CppObject *v29; // x21
  struct MapGimmickPathReleaseMaster___c_StaticFields *v30; // x0

  if ( (byte_41858B1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&mapGimmickId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Comparison_MapGimmickPathReleaseEntity___ctor__, v6);
    sub_B2C35C(&System_Comparison_MapGimmickPathReleaseEntity__TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_CommonReleaseMaster___, v8);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Sort__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity___ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__get_Count__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__get_Item__, v14);
    sub_B2C35C(&System_Collections_Generic_List_MapGimmickPathReleaseEntity__TypeInfo, v15);
    sub_B2C35C(&MapGimmickPathReleaseEntity_TypeInfo, v16);
    sub_B2C35C(&Method_MapGimmickPathReleaseMaster___c__GetMapGimmickPathLimitEntity_b__1_0__, v17);
    sub_B2C35C(&MapGimmickPathReleaseMaster___c_TypeInfo, v18);
    byte_41858B1 = 1;
  }
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MapGimmickPathReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_33;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v22 = (int)list;
    v23 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v23,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v24 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
      v25 = *(&MapGimmickPathReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v25
        || (MapGimmickPathReleaseEntity_c *)list->klass->_2.typeHierarchy[v25 - 1] != MapGimmickPathReleaseEntity_TypeInfo )
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
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
        if ( !list )
          break;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CommonReleaseMaster__IsOpen(
                                                                                             (CommonReleaseMaster_o *)list,
                                                                                             v24->fields.targetId,
                                                                                             0LL,
                                                                                             0,
                                                                                             0LL);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v19 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v19,
            v24,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Add__);
        }
      }
      if ( ++v23 >= v22 )
        goto LABEL_19;
    }
LABEL_33:
    sub_B2C434(list, v20);
  }
LABEL_19:
  if ( !v19 )
    goto LABEL_33;
  if ( v19->fields._size < 1 )
    return 0LL;
  v26 = MapGimmickPathReleaseMaster___c_TypeInfo;
  if ( (BYTE3(MapGimmickPathReleaseMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapGimmickPathReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapGimmickPathReleaseMaster___c_TypeInfo);
    v26 = MapGimmickPathReleaseMaster___c_TypeInfo;
  }
  static_fields = v26->static_fields;
  _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      static_fields = MapGimmickPathReleaseMaster___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_MapGimmickPathReleaseEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_0,
      v29,
      Method_MapGimmickPathReleaseMaster___c__GetMapGimmickPathLimitEntity_b__1_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_MapGimmickPathReleaseEntity___ctor__);
    v30 = MapGimmickPathReleaseMaster___c_TypeInfo->static_fields;
    v30->__9__1_0 = (struct System_Comparison_MapGimmickPathReleaseEntity__o *)_9__1_0;
    sub_B2C2F8(&v30->__9__1_0, _9__1_0);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v19,
    (System_Comparison_T__o *)_9__1_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_MapGimmickPathReleaseEntity__Sort__);
  if ( !v19->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  return (MapGimmickPathReleaseEntity_o *)v19->fields._items->m_Items[0];
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

  if ( (byte_41858B4 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__TryGetEntity__,
      entity);
    byte_41858B4 = 1;
  }
  PK = MapGimmickPathReleaseEntity__CreatePK(mapGimmickId, priority, *(const MethodInfo **)&mapGimmickId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_MapGimmickPathReleaseMaster__MapGimmickPathReleaseEntity__string__TryGetEntity__);
}


void __fastcall MapGimmickPathReleaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4185CFF & 1) == 0 )
  {
    sub_B2C35C(&MapGimmickPathReleaseMaster___c_TypeInfo, v1);
    byte_4185CFF = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(MapGimmickPathReleaseMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)MapGimmickPathReleaseMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(this, a);
  return b->fields.priority - a->fields.priority;
}