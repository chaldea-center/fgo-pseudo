EventMapManagerInterface_o *__fastcall EventMapManagerFactory__AttachToTerminalMap(
        ScrTerminalMap_o *termialMap,
        MapControl_MapInfo_o *mapInfo,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  WarEntity_o *Mine; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  int32_t eventId; // w21
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v22; // x19
  WarEntity_o *v24; // [xsp+0h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F8867 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventDetailMaster___, mapInfo);
    sub_B16FFC(&Method_DataManager_GetMaster_EventPanelMapMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v9);
    sub_B16FFC(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__TryGetEntity__, v10);
    sub_B16FFC(&EventMapManagerIdle_TypeInfo, v11);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_SubmarineMapManager___, v12);
    byte_40F8867 = 1;
  }
  v24 = 0LL;
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
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_24;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          eventId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_22;
  if ( !entity )
    goto LABEL_24;
  if ( !EventDetailEntity__IsEventPanel((EventDetailEntity_o *)entity, 0LL) )
  {
LABEL_22:
    v22 = (Il2CppObject *)sub_B170CC(EventMapManagerIdle_TypeInfo, v14, v15, v16, v17);
    System_Object___ctor(v22, 0LL);
    return (EventMapManagerInterface_o *)v22;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventPanelMapMaster___);
  if ( !mapInfo || !v20 )
LABEL_24:
    sub_B170D4();
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v20,
          &v24,
          mapInfo->fields.mapId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__TryGetEntity__) )
    goto LABEL_22;
  if ( !termialMap )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)termialMap, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  return (EventMapManagerInterface_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                         gameObject,
                                         (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_SubmarineMapManager___);
}


void __fastcall EventMapManagerFactory__DetachFromTerminalMap(ScrTerminalMap_o *termialMap, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F8868 & 1) == 0 )
  {
    sub_B16FFC(&Method_GameObjectExtensions_RemoveComponents_EventMapManagerBase___, method);
    byte_40F8868 = 1;
  }
  if ( !termialMap )
    sub_B170D4();
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)termialMap, 0LL);
  GameObjectExtensions__RemoveComponents_object_(
    gameObject,
    (const MethodInfo_19D2184 *)Method_GameObjectExtensions_RemoveComponents_EventMapManagerBase___);
}