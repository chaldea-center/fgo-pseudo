void __fastcall MapButtonMaster___ctor(MapButtonMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E72D9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E72D9 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    198,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string___ctor__);
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

  if ( (byte_42E72DA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__GetEntity__,
      id,
      priority,
      *(_QWORD *)&targetMapId);
    byte_42E72DA = 1;
  }
  PK = MapButtonEntity__CreatePK(id, priority, targetMapId, *(const MethodInfo **)&targetMapId);
  return (MapButtonEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                PK,
                                (const MethodInfo_23FB260 *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__GetEntity__);
}


MapButtonEntity_array *__fastcall MapButtonMaster__GetOpenedButtons(
        MapButtonMaster_o *this,
        MapControl_WarInfo_o *warInf,
        MapControl_MapInfo_o *mapInf,
        const MethodInfo *method)
{
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
  void *Instance; // x0
  MapButtonEntity_c *v49; // x1
  const MethodInfo *v50; // x2
  System_Collections_Generic_List_int__o *AvailableButtons; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x20
  int32_t Count; // w0
  int32_t v54; // w22
  int32_t v55; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v56; // x24
  __int64 v57; // x9
  struct MapButtonMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__0_0; // x19
  Il2CppObject *v60; // x21
  struct MapButtonMaster___c_StaticFields *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  MapCondMaster_o *v69; // x0
  int32_t v70; // w1
  int32_t v71; // w2
  int32_t v72; // w3
  const MethodInfo *v73; // x4

  if ( (byte_42E72D8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)warInf,
      (_DWORD)mapInf,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_MapButtonEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_MapButtonEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_MapCondMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapButtonEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Remove__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapButtonEntity__Sort__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapButtonEntity__ToArray__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapButtonEntity___ctor__, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_MapButtonEntity__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&MapButtonEntity_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40, v41);
    sub_B5D5C4(&Method_MapButtonMaster___c__GetOpenedButtons_b__0_0__, v42, v43, v44);
    sub_B5D5C4(&MapButtonMaster___c_TypeInfo, v45, v46, v47);
    byte_42E72D8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_MapCondMaster___);
  if ( !mapInf )
    goto LABEL_28;
  if ( !Instance )
    goto LABEL_28;
  AvailableButtons = MapCondMaster__GetAvailableButtons((MapCondMaster_o *)Instance, mapInf->fields.mapId, v50);
  v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MapButtonEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v52,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MapButtonEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
      v60 = (Il2CppObject *)static_fields->__9;
      _9__0_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_MapButtonEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__0_0,
        v60,
        Method_MapButtonMaster___c__GetOpenedButtons_b__0_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_MapButtonEntity___ctor__);
      v61 = MapButtonMaster___c_TypeInfo->static_fields;
      v61->__9__0_0 = (struct System_Comparison_MapButtonEntity__o *)_9__0_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v61->__9__0_0,
        (System_Int32_array **)_9__0_0,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67);
    }
    if ( v52 )
    {
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v52,
        (System_Comparison_T__o *)_9__0_0,
        (const MethodInfo_305909C *)Method_System_Collections_Generic_List_MapButtonEntity__Sort__);
      return (MapButtonEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v52,
                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_MapButtonEntity__ToArray__);
    }
LABEL_28:
    sub_B5D69C(Instance, v49);
  }
  v54 = Count;
  v55 = 0;
  while ( 1 )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_28;
    Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 v55,
                 (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_28;
    v49 = MapButtonEntity_TypeInfo;
    v56 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
    v57 = *(&MapButtonEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v57
      || *(MapButtonEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v57 - 8) != MapButtonEntity_TypeInfo )
    {
      break;
    }
    if ( !AvailableButtons )
      goto LABEL_28;
    Instance = (void *)System_Collections_Generic_List_int___Remove(
                         AvailableButtons,
                         *((_DWORD *)Instance + 4),
                         (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v52 )
        goto LABEL_28;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v52,
        v56,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MapButtonEntity__Add__);
    }
    if ( ++v55 >= v54 )
      goto LABEL_18;
  }
  v69 = (MapCondMaster_o *)sub_B5D990(Instance);
  return (MapButtonEntity_array *)MapCondMaster__GetReleasedMapButtonIdList(v69, v70, v71, v72, v73);
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

  if ( (byte_42E72DB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&priority);
    byte_42E72DB = 1;
  }
  PK = MapButtonEntity__CreatePK(id, priority, targetMapId, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__TryGetEntity__);
}


void __fastcall MapButtonMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct MapButtonMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5EE9 & 1) == 0 )
  {
    sub_B5D5C4(&MapButtonMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5EE9 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(MapButtonMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = MapButtonMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MapButtonMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
  return a->fields.priority - b->fields.priority;
}