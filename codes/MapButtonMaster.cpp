void __fastcall MapButtonMaster___ctor(MapButtonMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB583 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string___ctor__, method);
    byte_40FB583 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    197,
    (const MethodInfo_266F73C *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string___ctor__);
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

  if ( (byte_40FB584 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_40FB584 = 1;
  }
  PK = MapButtonEntity__CreatePK(id, priority, targetMapId, *(const MethodInfo **)&targetMapId);
  return (MapButtonEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_266F7D8 *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__GetEntity__);
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
  WebViewManager_o *Instance; // x0
  MapCondMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v22; // x2
  System_Collections_Generic_List_int__o *AvailableButtons; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int32_t v35; // w22
  int32_t v36; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v37; // x0
  int32_t *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v39; // x24
  __int64 v40; // x9
  MapButtonMaster___c_c *v41; // x0
  struct MapButtonMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__0_0; // x19
  Il2CppObject *v44; // x21
  struct MapButtonMaster___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  MapCondMaster_o *v53; // x0
  int32_t v54; // w1
  int32_t v55; // w2
  int32_t v56; // w3
  const MethodInfo *v57; // x4

  if ( (byte_40FB582 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, warInf);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B16FFC(&Method_System_Comparison_MapButtonEntity___ctor__, v7);
    sub_B16FFC(&System_Comparison_MapButtonEntity__TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_MapCondMaster___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapButtonEntity__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Remove__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapButtonEntity__Sort__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapButtonEntity__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapButtonEntity___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_MapButtonEntity__TypeInfo, v15);
    sub_B16FFC(&MapButtonEntity_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&Method_MapButtonMaster___c__GetOpenedButtons_b__0_0__, v18);
    sub_B16FFC(&MapButtonMaster___c_TypeInfo, v19);
    byte_40FB582 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (MapCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MapCondMaster___);
  if ( !mapInf )
    goto LABEL_28;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_28;
  AvailableButtons = MapCondMaster__GetAvailableButtons(MasterData_WarQuestSelectionMaster, mapInf->fields.mapId, v22);
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MapButtonEntity__TypeInfo,
                                                                                                  v24,
                                                                                                  v25,
                                                                                                  v26,
                                                                                                  v27);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MapButtonEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
  {
LABEL_18:
    v41 = MapButtonMaster___c_TypeInfo;
    if ( (BYTE3(MapButtonMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MapButtonMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapButtonMaster___c_TypeInfo);
      v41 = MapButtonMaster___c_TypeInfo;
    }
    static_fields = v41->static_fields;
    _9__0_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__0_0;
    if ( !_9__0_0 )
    {
      if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v41);
        static_fields = MapButtonMaster___c_TypeInfo->static_fields;
      }
      v44 = (Il2CppObject *)static_fields->__9;
      _9__0_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                            System_Comparison_MapButtonEntity__TypeInfo,
                                                                            v31,
                                                                            v32,
                                                                            v33,
                                                                            v34);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__0_0,
        v44,
        Method_MapButtonMaster___c__GetOpenedButtons_b__0_0__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_MapButtonEntity___ctor__);
      v45 = MapButtonMaster___c_TypeInfo->static_fields;
      v45->__9__0_0 = (struct System_Comparison_MapButtonEntity__o *)_9__0_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v45->__9__0_0,
        (System_Int32_array **)_9__0_0,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
    }
    if ( v28 )
    {
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v28,
        (System_Comparison_T__o *)_9__0_0,
        (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_MapButtonEntity__Sort__);
      return (MapButtonEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v28,
                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_MapButtonEntity__ToArray__);
    }
LABEL_28:
    sub_B170D4();
  }
  v35 = Count;
  v36 = 0;
  while ( 1 )
  {
    v37 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v37 )
      goto LABEL_28;
    Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        v37,
                        v36,
                        (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Item )
      goto LABEL_28;
    v39 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
    v40 = *(&MapButtonEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) < (unsigned int)v40
      || *(MapButtonEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v40 - 8) != MapButtonEntity_TypeInfo )
    {
      break;
    }
    if ( !AvailableButtons )
      goto LABEL_28;
    if ( System_Collections_Generic_List_int___Remove(
           AvailableButtons,
           Item[4],
           (const MethodInfo_2F11E6C *)Method_System_Collections_Generic_List_int__Remove__) )
    {
      if ( !v28 )
        goto LABEL_28;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v28,
        v39,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MapButtonEntity__Add__);
    }
    if ( ++v36 >= v35 )
      goto LABEL_18;
  }
  v53 = (MapCondMaster_o *)sub_B173C8(Item);
  return (MapButtonEntity_array *)MapCondMaster__GetReleasedMapButtonIdList(v53, v54, v55, v56, v57);
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

  if ( (byte_40FB585 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__TryGetEntity__, entity);
    byte_40FB585 = 1;
  }
  PK = MapButtonEntity__CreatePK(id, priority, targetMapId, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_MapButtonMaster__MapButtonEntity__string__TryGetEntity__);
}


void __fastcall MapButtonMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6915 & 1) == 0 )
  {
    sub_B16FFC(&MapButtonMaster___c_TypeInfo, v1);
    byte_40F6915 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(MapButtonMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)MapButtonMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return a->fields.priority - b->fields.priority;
}