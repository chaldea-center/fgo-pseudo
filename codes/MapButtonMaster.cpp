void __fastcall MapButtonMaster___ctor(MapButtonMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AE6B6 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string___ctor__);
    byte_42AE6B6 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    198,
    (const MethodInfo_23E268C *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MapButtonEntity_o *__fastcall MapButtonMaster__GetEntity(
        MapButtonMaster_o *this,
        int32_t id,
        int32_t priority,
        int32_t targetMapId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42AE6B7 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__GetEntity__);
    byte_42AE6B7 = 1;
  }
  PK = MapButtonEntity__CreatePK(id, priority, targetMapId, *(const MethodInfo **)&targetMapId);
  return (MapButtonEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                PK,
                                (const MethodInfo_23E2728 *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__GetEntity__);
}


MapButtonEntity_array *__fastcall MapButtonMaster__GetOpenedButtons(
        MapButtonMaster_o *this,
        MapControl_WarInfo_o *warInf,
        MapControl_MapInfo_o *mapInf,
        const MethodInfo *method)
{
  void *Instance; // x0
  MapButtonEntity_c *v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_int__o *AvailableButtons; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  int32_t Count; // w0
  int32_t v12; // w22
  int32_t v13; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v14; // x24
  __int64 v15; // x9
  struct MapButtonMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__0_0; // x19
  Il2CppObject *v18; // x21
  struct MapButtonMaster___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  MapCondMaster_o *v27; // x0
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  const MethodInfo *v31; // x4

  if ( (byte_42AE6B5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_MapButtonEntity___ctor__);
    sub_B52984(&System_Comparison_MapButtonEntity__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_MapCondMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_MapButtonEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Remove__);
    sub_B52984(&Method_System_Collections_Generic_List_MapButtonEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_MapButtonEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_MapButtonEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_MapButtonEntity__TypeInfo);
    sub_B52984(&MapButtonEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_MapButtonMaster___c__GetOpenedButtons_b__0_0__);
    sub_B52984(&MapButtonMaster___c_TypeInfo);
    byte_42AE6B5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_MapCondMaster___);
  if ( !mapInf )
    goto LABEL_28;
  if ( !Instance )
    goto LABEL_28;
  AvailableButtons = MapCondMaster__GetAvailableButtons((MapCondMaster_o *)Instance, mapInf->fields.mapId, v8);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_MapButtonEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_MapButtonEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
  {
LABEL_18:
    Instance = MapButtonMaster___c_TypeInfo;
    if ( (BYTE3(MapButtonMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MapButtonMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapButtonMaster___c_TypeInfo);
      Instance = MapButtonMaster___c_TypeInfo;
    }
    static_fields = (struct MapButtonMaster___c_StaticFields *)*((_QWORD *)Instance + 23);
    _9__0_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__0_0;
    if ( !_9__0_0 )
    {
      if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        static_fields = MapButtonMaster___c_TypeInfo->static_fields;
      }
      v18 = (Il2CppObject *)static_fields->__9;
      _9__0_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_MapButtonEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__0_0,
        v18,
        Method_MapButtonMaster___c__GetOpenedButtons_b__0_0__,
        (const MethodInfo_2483370 *)Method_System_Comparison_MapButtonEntity___ctor__);
      v19 = MapButtonMaster___c_TypeInfo->static_fields;
      v19->__9__0_0 = (struct System_Comparison_MapButtonEntity__o *)_9__0_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v19->__9__0_0,
        (System_Int32_array **)_9__0_0,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    if ( v10 )
    {
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v10,
        (System_Comparison_T__o *)_9__0_0,
        (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_MapButtonEntity__Sort__);
      return (MapButtonEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                        (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_MapButtonEntity__ToArray__);
    }
LABEL_28:
    sub_B52A5C(Instance, v7);
  }
  v12 = Count;
  v13 = 0;
  while ( 1 )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_28;
    Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 v13,
                 (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_28;
    v7 = MapButtonEntity_TypeInfo;
    v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
    v15 = *(&MapButtonEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v15
      || *(MapButtonEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v15 - 8) != MapButtonEntity_TypeInfo )
    {
      break;
    }
    if ( !AvailableButtons )
      goto LABEL_28;
    Instance = (void *)System_Collections_Generic_List_int___Remove(
                         AvailableButtons,
                         *((_DWORD *)Instance + 4),
                         (const MethodInfo_305892C *)Method_System_Collections_Generic_List_int__Remove__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v10 )
        goto LABEL_28;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v10,
        v14,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MapButtonEntity__Add__);
    }
    if ( ++v13 >= v12 )
      goto LABEL_18;
  }
  v27 = (MapCondMaster_o *)sub_B52D50(Instance);
  return (MapButtonEntity_array *)MapCondMaster__GetReleasedMapButtonIdList(v27, v28, v29, v30, v31);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MapButtonMaster__TryGetEntity(
        MapButtonMaster_o *this,
        MapButtonEntity_o **entity,
        int32_t id,
        int32_t priority,
        int32_t targetMapId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42AE6B8 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__TryGetEntity__);
    byte_42AE6B8 = 1;
  }
  PK = MapButtonEntity__CreatePK(id, priority, targetMapId, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__TryGetEntity__);
}


void __fastcall MapButtonMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct MapButtonMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42ADC62 & 1) == 0 )
  {
    sub_B52984(&MapButtonMaster___c_TypeInfo);
    byte_42ADC62 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(MapButtonMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = MapButtonMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MapButtonMaster___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall MapButtonMaster___c___ctor(MapButtonMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall MapButtonMaster___c___GetOpenedButtons_b__0_0(
        MapButtonMaster___c_o *this,
        MapButtonEntity_o *a,
        MapButtonEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
  return a->fields.priority - b->fields.priority;
}