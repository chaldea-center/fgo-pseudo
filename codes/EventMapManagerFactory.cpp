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
  Il2CppObject *v19; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v6 = (UnityEngine_Component_o *)termialMap;
  if ( (byte_49F909B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventDetailMaster___, mapInfo);
    sub_1B640C8(&Method_DataManager_GetMaster_EventPanelMapMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v9);
    sub_1B640C8(&Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__TryGetEntity__, v10);
    sub_1B640C8(&EventMapManagerIdle_TypeInfo, v11);
    termialMap = (ScrTerminalMap_o *)sub_1B640C8(
                                       &Method_UnityEngine_GameObject_AddComponent_SubmarineMapManager___,
                                       v12);
    byte_49F909B = 1;
  }
  v19 = 0LL;
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
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  termialMap = (ScrTerminalMap_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !termialMap )
    goto LABEL_22;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)termialMap,
          &entity,
          eventId,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_20;
  termialMap = (ScrTerminalMap_o *)entity;
  if ( !entity )
    goto LABEL_22;
  if ( !EventDetailEntity__IsEventPanel((EventDetailEntity_o *)entity, 0LL) )
  {
LABEL_20:
    v17 = (Il2CppObject *)sub_1B64314(EventMapManagerIdle_TypeInfo, v14, v15);
    System_Object___ctor(v17, 0LL);
    return (EventMapManagerInterface_o *)v17;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  termialMap = (ScrTerminalMap_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventPanelMapMaster___);
  if ( !mapInfo || !termialMap )
LABEL_22:
    sub_1B64324(termialMap);
  termialMap = (ScrTerminalMap_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)termialMap,
                                     &v19,
                                     mapInfo->fields.mapId,
                                     (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventPanelMapMaster__EventPanelMapEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)termialMap & 1) == 0 )
    goto LABEL_20;
  if ( !v6 )
    goto LABEL_22;
  termialMap = (ScrTerminalMap_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
  if ( !termialMap )
    goto LABEL_22;
  return (EventMapManagerInterface_o *)UnityEngine_GameObject__AddComponent_object_(
                                         (UnityEngine_GameObject_o *)termialMap,
                                         (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_SubmarineMapManager___);
}


void __fastcall EventMapManagerFactory__DetachFromTerminalMap(ScrTerminalMap_o *termialMap, const MethodInfo *method)
{
  UnityEngine_Component_o *v2; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  v2 = (UnityEngine_Component_o *)termialMap;
  if ( (byte_49F909C & 1) == 0 )
  {
    termialMap = (ScrTerminalMap_o *)sub_1B640C8(
                                       &Method_GameObjectExtensions_RemoveComponents_EventMapManagerBase___,
                                       method);
    byte_49F909C = 1;
  }
  if ( !v2 )
    sub_1B64324(termialMap);
  gameObject = UnityEngine_Component__get_gameObject(v2, 0LL);
  GameObjectExtensions__RemoveComponents_object_(
    gameObject,
    (const MethodInfo_2E898FC *)Method_GameObjectExtensions_RemoveComponents_EventMapManagerBase___);
}