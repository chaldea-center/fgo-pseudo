EventMapManagerInterface_o *__fastcall EventMapManagerFactory__AttachToTerminalMap(
        ScrTerminalMap_o *termialMap,
        MapControl_MapInfo_o *mapInfo,
        MapControl_WarInfo_o *warInfo,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  WarEntity_o *Mine; // x0
  __int64 v20; // x2
  __int64 v21; // x3
  int32_t eventId; // w21
  Il2CppObject *v23; // x19
  Il2CppObject *v25; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v6 = (UnityEngine_Component_o *)termialMap;
  if ( (byte_4B12D7C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventDetailMaster___, mapInfo, warInfo);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventPanelMapMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__TryGetEntity__, v13, v14);
    sub_1BCA7E0(&EventMapManagerIdle_TypeInfo, v15, v16);
    termialMap = (ScrTerminalMap_o *)sub_1BCA7E0(
                                       &Method_UnityEngine_GameObject_AddComponent_SubmarineMapManager___,
                                       v17,
                                       v18);
    byte_4B12D7C = 1;
  }
  v25 = 0LL;
  entity = 0LL;
  if ( !warInfo )
    goto LABEL_22;
  Mine = MapControl_WarInfo__GetMine(warInfo, 0LL);
  if ( !Mine )
    goto LABEL_20;
  eventId = Mine->fields.eventId;
  if ( eventId <= 0 )
    goto LABEL_20;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, mapInfo);
  termialMap = (ScrTerminalMap_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !termialMap )
    goto LABEL_22;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)termialMap,
          &entity,
          eventId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_20;
  termialMap = (ScrTerminalMap_o *)entity;
  if ( !entity )
    goto LABEL_22;
  if ( !EventDetailEntity__IsEventPanel((EventDetailEntity_o *)entity, 0LL) )
  {
LABEL_20:
    v23 = (Il2CppObject *)sub_1BCAA2C(EventMapManagerIdle_TypeInfo, mapInfo, v20, v21);
    System_Object___ctor(v23, 0LL);
    return (EventMapManagerInterface_o *)v23;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, mapInfo);
  termialMap = (ScrTerminalMap_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventPanelMapMaster___);
  if ( !mapInfo || !termialMap )
LABEL_22:
    sub_1BCAA3C(termialMap, mapInfo);
  termialMap = (ScrTerminalMap_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)termialMap,
                                     &v25,
                                     mapInfo->fields.mapId,
                                     (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)termialMap & 1) == 0 )
    goto LABEL_20;
  if ( !v6 )
    goto LABEL_22;
  termialMap = (ScrTerminalMap_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
  if ( !termialMap )
    goto LABEL_22;
  return (EventMapManagerInterface_o *)UnityEngine_GameObject__AddComponent_object_(
                                         (UnityEngine_GameObject_o *)termialMap,
                                         (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_SubmarineMapManager___);
}


void __fastcall EventMapManagerFactory__DetachFromTerminalMap(ScrTerminalMap_o *termialMap, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *v3; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  v3 = (UnityEngine_Component_o *)termialMap;
  if ( (byte_4B12D7D & 1) == 0 )
  {
    termialMap = (ScrTerminalMap_o *)sub_1BCA7E0(
                                       &Method_GameObjectExtensions_RemoveComponents_EventMapManagerBase___,
                                       method,
                                       v2);
    byte_4B12D7D = 1;
  }
  if ( !v3 )
    sub_1BCAA3C(termialMap, method);
  gameObject = UnityEngine_Component__get_gameObject(v3, 0LL);
  GameObjectExtensions__RemoveComponents_object_(
    gameObject,
    (const MethodInfo_2F640F4 *)Method_GameObjectExtensions_RemoveComponents_EventMapManagerBase___);
}