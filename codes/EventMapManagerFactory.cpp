EventMapManagerInterface_o *__fastcall EventMapManagerFactory__AttachToTerminalMap(
        ScrTerminalMap_o *termialMap,
        MapControl_MapInfo_o *mapInfo,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  WarEntity_o *Mine; // x0
  int32_t eventId; // w21
  Il2CppObject *v27; // x19
  WarEntity_o *v29; // [xsp+0h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v6 = (UnityEngine_Component_o *)termialMap;
  if ( (byte_42E9B2A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventDetailMaster___, (_DWORD)mapInfo, (_DWORD)warInfo, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventPanelMapMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__TryGetEntity__, v16, v17, v18);
    sub_B5D5C4(&EventMapManagerIdle_TypeInfo, v19, v20, v21);
    termialMap = (ScrTerminalMap_o *)sub_B5D5C4(
                                       &Method_UnityEngine_GameObject_AddComponent_SubmarineMapManager___,
                                       v22,
                                       v23,
                                       v24);
    byte_42E9B2A = 1;
  }
  v29 = 0LL;
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
  termialMap = (ScrTerminalMap_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !termialMap )
    goto LABEL_24;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)termialMap,
          &entity,
          eventId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_22;
  termialMap = (ScrTerminalMap_o *)entity;
  if ( !entity )
    goto LABEL_24;
  if ( !EventDetailEntity__IsEventPanel((EventDetailEntity_o *)entity, 0LL) )
  {
LABEL_22:
    v27 = (Il2CppObject *)sub_B5D694(EventMapManagerIdle_TypeInfo);
    System_Object___ctor(v27, 0LL);
    return (EventMapManagerInterface_o *)v27;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  termialMap = (ScrTerminalMap_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventPanelMapMaster___);
  if ( !mapInfo || !termialMap )
LABEL_24:
    sub_B5D69C(termialMap, mapInfo);
  termialMap = (ScrTerminalMap_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)termialMap,
                                     &v29,
                                     mapInfo->fields.mapId,
                                     (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)termialMap & 1) == 0 )
    goto LABEL_22;
  if ( !v6 )
    goto LABEL_24;
  termialMap = (ScrTerminalMap_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
  if ( !termialMap )
    goto LABEL_24;
  return (EventMapManagerInterface_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                         (UnityEngine_GameObject_o *)termialMap,
                                         (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_SubmarineMapManager___);
}


void __fastcall EventMapManagerFactory__DetachFromTerminalMap(ScrTerminalMap_o *termialMap, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *v4; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  v4 = (UnityEngine_Component_o *)termialMap;
  if ( (byte_42E9B2B & 1) == 0 )
  {
    termialMap = (ScrTerminalMap_o *)sub_B5D5C4(
                                       &Method_GameObjectExtensions_RemoveComponents_EventMapManagerBase___,
                                       (_DWORD)method,
                                       v2,
                                       v3);
    byte_42E9B2B = 1;
  }
  if ( !v4 )
    sub_B5D69C(termialMap, method);
  gameObject = UnityEngine_Component__get_gameObject(v4, 0LL);
  GameObjectExtensions__RemoveComponents_object_(
    gameObject,
    (const MethodInfo_1CC5040 *)Method_GameObjectExtensions_RemoveComponents_EventMapManagerBase___);
}