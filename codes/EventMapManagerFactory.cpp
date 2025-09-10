EventMapManagerInterface_o *EventMapManagerFactory__AttachToTerminalMap(
        ScrTerminalMap_o *termialMap,
        MapControl_MapInfo_o *mapInfo,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v6; // x19
  WarEntity_o *Mine; // x0
  int32_t eventId; // w21
  Il2CppObject *v9; // x19
  Il2CppObject *v11; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v6 = (UnityEngine_Component_o *)termialMap;
  if ( (byte_4C23C21 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventPanelMapMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__TryGetEntity__);
    sub_1C2D490(&EventMapManagerIdle_TypeInfo);
    termialMap = (ScrTerminalMap_o *)sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_SubmarineMapManager___);
    byte_4C23C21 = 1;
  }
  v11 = 0;
  entity = 0;
  if ( !warInfo )
    goto LABEL_22;
  Mine = MapControl_WarInfo__GetMine(warInfo, 0);
  if ( !Mine )
    goto LABEL_20;
  eventId = Mine->fields.eventId;
  if ( eventId <= 0 )
    goto LABEL_20;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  termialMap = (ScrTerminalMap_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !termialMap )
    goto LABEL_22;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)termialMap,
          &entity,
          eventId,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_20;
  termialMap = (ScrTerminalMap_o *)entity;
  if ( !entity )
    goto LABEL_22;
  if ( !EventDetailEntity__IsEventPanel((EventDetailEntity_o *)entity, 0) )
  {
LABEL_20:
    v9 = (Il2CppObject *)sub_1C2D6DC(EventMapManagerIdle_TypeInfo);
    System_Object___ctor(v9, 0);
    return (EventMapManagerInterface_o *)v9;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  termialMap = (ScrTerminalMap_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventPanelMapMaster___);
  if ( !mapInfo || !termialMap )
LABEL_22:
    sub_1C2D6EC(termialMap, mapInfo);
  termialMap = (ScrTerminalMap_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)termialMap,
                                     &v11,
                                     mapInfo->fields.mapId,
                                     (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)termialMap & 1) == 0 )
    goto LABEL_20;
  if ( !v6 )
    goto LABEL_22;
  termialMap = (ScrTerminalMap_o *)UnityEngine_Component__get_gameObject(v6, 0);
  if ( !termialMap )
    goto LABEL_22;
  return (EventMapManagerInterface_o *)UnityEngine_GameObject__AddComponent_object_(
                                         (UnityEngine_GameObject_o *)termialMap,
                                         (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_SubmarineMapManager___);
}


void EventMapManagerFactory__DetachFromTerminalMap(ScrTerminalMap_o *termialMap, const MethodInfo *method)
{
  UnityEngine_Component_o *v2; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  v2 = (UnityEngine_Component_o *)termialMap;
  if ( (byte_4C23C22 & 1) == 0 )
  {
    termialMap = (ScrTerminalMap_o *)sub_1C2D490(&Method_GameObjectExtensions_RemoveComponents_EventMapManagerBase___);
    byte_4C23C22 = 1;
  }
  if ( !v2 )
    sub_1C2D6EC(termialMap, method);
  gameObject = UnityEngine_Component__get_gameObject(v2, 0);
  GameObjectExtensions__RemoveComponents_object_(
    gameObject,
    (const MethodInfo_31278F4 *)Method_GameObjectExtensions_RemoveComponents_EventMapManagerBase___);
}