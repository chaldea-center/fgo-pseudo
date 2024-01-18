void __fastcall MapButtonMaster___ctor(MapButtonMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186329 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string___ctor__, method);
    byte_4186329 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    197,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string___ctor__);
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

  if ( (byte_418632A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_418632A = 1;
  }
  PK = MapButtonEntity__CreatePK(id, priority, targetMapId, *(const MethodInfo **)&targetMapId);
  return (MapButtonEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_24E4520 *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__GetEntity__);
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
  MapButtonEntity_c *v21; // x1
  const MethodInfo *v22; // x2
  System_Collections_Generic_List_int__o *AvailableButtons; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  int32_t Count; // w0
  int32_t v26; // w22
  int32_t v27; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x24
  __int64 v29; // x9
  struct MapButtonMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__0_0; // x19
  Il2CppObject *v32; // x21
  struct MapButtonMaster___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  MapCondMaster_o *v41; // x0
  int32_t v42; // w1
  int32_t v43; // w2
  int32_t v44; // w3
  const MethodInfo *v45; // x4

  if ( (byte_4186328 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, warInf);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B2C35C(&Method_System_Comparison_MapButtonEntity___ctor__, v7);
    sub_B2C35C(&System_Comparison_MapButtonEntity__TypeInfo, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_MapCondMaster___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapButtonEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Remove__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapButtonEntity__Sort__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapButtonEntity__ToArray__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapButtonEntity___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_MapButtonEntity__TypeInfo, v15);
    sub_B2C35C(&MapButtonEntity_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&Method_MapButtonMaster___c__GetOpenedButtons_b__0_0__, v18);
    sub_B2C35C(&MapButtonMaster___c_TypeInfo, v19);
    byte_4186328 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MapCondMaster___);
  if ( !mapInf )
    goto LABEL_28;
  if ( !Instance )
    goto LABEL_28;
  AvailableButtons = MapCondMaster__GetAvailableButtons((MapCondMaster_o *)Instance, mapInf->fields.mapId, v22);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MapButtonEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MapButtonEntity___ctor__);
  Instance = this->fields.list;
  if ( !Instance )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
      v32 = (Il2CppObject *)static_fields->__9;
      _9__0_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_MapButtonEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__0_0,
        v32,
        Method_MapButtonMaster___c__GetOpenedButtons_b__0_0__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_MapButtonEntity___ctor__);
      v33 = MapButtonMaster___c_TypeInfo->static_fields;
      v33->__9__0_0 = (struct System_Comparison_MapButtonEntity__o *)_9__0_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v33->__9__0_0,
        (System_Int32_array **)_9__0_0,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
    }
    if ( v24 )
    {
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v24,
        (System_Comparison_T__o *)_9__0_0,
        (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_MapButtonEntity__Sort__);
      return (MapButtonEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_MapButtonEntity__ToArray__);
    }
LABEL_28:
    sub_B2C434(Instance, v21);
  }
  v26 = Count;
  v27 = 0;
  while ( 1 )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_28;
    Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 v27,
                 (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_28;
    v21 = MapButtonEntity_TypeInfo;
    v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
    v29 = *(&MapButtonEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v29
      || *(MapButtonEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v29 - 8) != MapButtonEntity_TypeInfo )
    {
      break;
    }
    if ( !AvailableButtons )
      goto LABEL_28;
    Instance = (void *)System_Collections_Generic_List_int___Remove(
                         AvailableButtons,
                         *((_DWORD *)Instance + 4),
                         (const MethodInfo_2F68974 *)Method_System_Collections_Generic_List_int__Remove__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v24 )
        goto LABEL_28;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v24,
        v28,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MapButtonEntity__Add__);
    }
    if ( ++v27 >= v26 )
      goto LABEL_18;
  }
  v41 = (MapCondMaster_o *)sub_B2C728(Instance);
  return (MapButtonEntity_array *)MapCondMaster__GetReleasedMapButtonIdList(v41, v42, v43, v44, v45);
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

  if ( (byte_418632B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__TryGetEntity__, entity);
    byte_418632B = 1;
  }
  PK = MapButtonEntity__CreatePK(id, priority, targetMapId, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__TryGetEntity__);
}


void __fastcall MapButtonMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct MapButtonMaster___c_StaticFields *static_fields; // x0

  if ( (byte_418422C & 1) == 0 )
  {
    sub_B2C35C(&MapButtonMaster___c_TypeInfo, v1);
    byte_418422C = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(MapButtonMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = MapButtonMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MapButtonMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return a->fields.priority - b->fields.priority;
}