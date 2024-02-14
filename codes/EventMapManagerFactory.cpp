EventMapManagerInterface_o *__fastcall EventMapManagerFactory__AttachToTerminalMap(
        ScrTerminalMap_o *termialMap,
        MapControl_MapInfo_o *mapInfo,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  WarEntity_o *Mine; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  int32_t eventId; // w21
  Il2CppObject *v17; // x19
  WarEntity_o *v19; // [xsp+0h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v6 = (UnityEngine_Component_o *)termialMap;
  if ( (byte_4215A1D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventDetailMaster___, mapInfo);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventPanelMapMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v9);
    sub_B0D8A4(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__TryGetEntity__, v10);
    sub_B0D8A4(&EventMapManagerIdle_TypeInfo, v11);
    termialMap = (ScrTerminalMap_o *)sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_SubmarineMapManager___, v12);
    byte_4215A1D = 1;
  }
  v19 = 0LL;
  entity = 0LL;
  if ( !warInfo )
    goto LABEL_24;
  Mine = MapControl_WarInfo__GetMine(warInfo, 0LL);
  if ( !Mine )
    goto LABEL_22;
  eventId = Mine->fields.eventId;
  if ( eventId <= 0 )
    goto LABEL_22;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  termialMap = (ScrTerminalMap_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !termialMap )
    goto LABEL_24;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)termialMap,
          &entity,
          eventId,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_22;
  termialMap = (ScrTerminalMap_o *)entity;
  if ( !entity )
    goto LABEL_24;
  if ( !EventDetailEntity__IsEventPanel((EventDetailEntity_o *)entity, 0LL) )
  {
LABEL_22:
    v17 = (Il2CppObject *)sub_B0D974(EventMapManagerIdle_TypeInfo, v14, v15);
    System_Object___ctor(v17, 0LL);
    return (EventMapManagerInterface_o *)v17;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  termialMap = (ScrTerminalMap_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventPanelMapMaster___);
  if ( !mapInfo || !termialMap )
LABEL_24:
    sub_B0D97C(termialMap);
  termialMap = (ScrTerminalMap_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)termialMap,
                                     &v19,
                                     mapInfo->fields.mapId,
                                     (const MethodInfo_2669C30 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)termialMap & 1) == 0 )
    goto LABEL_22;
  if ( !v6 )
    goto LABEL_24;
  termialMap = (ScrTerminalMap_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
  if ( !termialMap )
    goto LABEL_24;
  return (EventMapManagerInterface_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                         (UnityEngine_GameObject_o *)termialMap,
                                         (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_SubmarineMapManager___);
}


void __fastcall EventMapManagerFactory__DetachFromTerminalMap(ScrTerminalMap_o *termialMap, const MethodInfo *method)
{
  UnityEngine_Component_o *v2; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  v2 = (UnityEngine_Component_o *)termialMap;
  if ( (byte_4215A1E & 1) == 0 )
  {
    termialMap = (ScrTerminalMap_o *)sub_B0D8A4(
                                       &Method_GameObjectExtensions_RemoveComponents_EventMapManagerBase___,
                                       method);
    byte_4215A1E = 1;
  }
  if ( !v2 )
    sub_B0D97C(termialMap);
  gameObject = UnityEngine_Component__get_gameObject(v2, 0LL);
  GameObjectExtensions__RemoveComponents_object_(
    gameObject,
    (const MethodInfo_1B6384C *)Method_GameObjectExtensions_RemoveComponents_EventMapManagerBase___);
}