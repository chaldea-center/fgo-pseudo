void __fastcall MapButtonMaster___ctor(MapButtonMaster_o *this, const MethodInfo *method)
{
  if ( (byte_421300B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string___ctor__, method);
    byte_421300B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    197,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string___ctor__);
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

  if ( (byte_421300C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_421300C = 1;
  }
  PK = MapButtonEntity__CreatePK(id, priority, targetMapId, *(const MethodInfo **)&targetMapId);
  return (MapButtonEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_266A024 *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__GetEntity__);
}


MapButtonEntity_array *__fastcall MapButtonMaster__GetOpenedButtons(
        MapButtonMaster_o *this,
        MapControl_WarInfo_o *warInf,
        MapControl_MapInfo_o *mapInf,
        const MethodInfo *method)
{
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
  __int64 v19; // x1
  void *Instance; // x0
  const MethodInfo *v21; // x2
  System_Collections_Generic_List_int__o *AvailableButtons; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x20
  int32_t Count; // w0
  __int64 v27; // x1
  __int64 v28; // x2
  int32_t v29; // w22
  int32_t v30; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x24
  __int64 v32; // x9
  struct MapButtonMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__0_0; // x19
  Il2CppObject *v35; // x21
  struct MapButtonMaster___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  MapCondMaster_o *v44; // x0
  int32_t v45; // w1
  int32_t v46; // w2
  int32_t v47; // w3
  const MethodInfo *v48; // x4

  if ( (byte_421300A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, warInf);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B0D8A4(&Method_System_Comparison_MapButtonEntity___ctor__, v7);
    sub_B0D8A4(&System_Comparison_MapButtonEntity__TypeInfo, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_MapCondMaster___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapButtonEntity__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Remove__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapButtonEntity__Sort__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapButtonEntity__ToArray__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapButtonEntity___ctor__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_MapButtonEntity__TypeInfo, v15);
    sub_B0D8A4(&MapButtonEntity_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&Method_MapButtonMaster___c__GetOpenedButtons_b__0_0__, v18);
    sub_B0D8A4(&MapButtonMaster___c_TypeInfo, v19);
    byte_421300A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_MapCondMaster___);
  if ( !mapInf )
    goto LABEL_28;
  if ( !Instance )
    goto LABEL_28;
  AvailableButtons = MapCondMaster__GetAvailableButtons((MapCondMaster_o *)Instance, mapInf->fields.mapId, v21);
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_MapButtonEntity__TypeInfo,
                                                                                                  v23,
                                                                                                  v24);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MapButtonEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
      v35 = (Il2CppObject *)static_fields->__9;
      _9__0_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                            System_Comparison_MapButtonEntity__TypeInfo,
                                                                            v27,
                                                                            v28);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__0_0,
        v35,
        Method_MapButtonMaster___c__GetOpenedButtons_b__0_0__,
        (const MethodInfo_2412E90 *)Method_System_Comparison_MapButtonEntity___ctor__);
      v36 = MapButtonMaster___c_TypeInfo->static_fields;
      v36->__9__0_0 = (struct System_Comparison_MapButtonEntity__o *)_9__0_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v36->__9__0_0,
        (System_Int32_array **)_9__0_0,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
    }
    if ( v25 )
    {
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v25,
        (System_Comparison_T__o *)_9__0_0,
        (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_MapButtonEntity__Sort__);
      return (MapButtonEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v25,
                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_MapButtonEntity__ToArray__);
    }
LABEL_28:
    sub_B0D97C(Instance);
  }
  v29 = Count;
  v30 = 0;
  while ( 1 )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_28;
    Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 v30,
                 (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_28;
    v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
    v32 = *(&MapButtonEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v32
      || *(MapButtonEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v32 - 8) != MapButtonEntity_TypeInfo )
    {
      break;
    }
    if ( !AvailableButtons )
      goto LABEL_28;
    Instance = (void *)System_Collections_Generic_List_int___Remove(
                         AvailableButtons,
                         *((_DWORD *)Instance + 4),
                         (const MethodInfo_2FB187C *)Method_System_Collections_Generic_List_int__Remove__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v25 )
        goto LABEL_28;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v25,
        v31,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MapButtonEntity__Add__);
    }
    if ( ++v30 >= v29 )
      goto LABEL_18;
  }
  v44 = (MapCondMaster_o *)sub_B0DC70(Instance);
  return (MapButtonEntity_array *)MapCondMaster__GetReleasedMapButtonIdList(v44, v45, v46, v47, v48);
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

  if ( (byte_421300D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__TryGetEntity__, entity);
    byte_421300D = 1;
  }
  PK = MapButtonEntity__CreatePK(id, priority, targetMapId, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__TryGetEntity__);
}


void __fastcall MapButtonMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct MapButtonMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42126C7 & 1) == 0 )
  {
    sub_B0D8A4(&MapButtonMaster___c_TypeInfo, v1);
    byte_42126C7 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(MapButtonMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = MapButtonMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MapButtonMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return a->fields.priority - b->fields.priority;
}