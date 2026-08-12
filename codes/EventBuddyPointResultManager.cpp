void EventBuddyPointResultManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct EventBuddyPointResultManager_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct EventBuddyPointResultManager_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct EventBuddyPointResultManager_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  struct EventBuddyPointResultManager_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  struct EventBuddyPointResultManager_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7

  if ( (byte_596AA14 & 1) == 0 )
  {
    sub_2213A60(&EventBuddyPointResultManager_TypeInfo);
    sub_2213A60(&StringLiteral_3362/*"BuddyResultEventUI"*/);
    sub_2213A60(&StringLiteral_3024/*"BEST_BUDDY_POINT_RESULT"*/);
    sub_2213A60(&StringLiteral_3025/*"BEST_BUDDY_RESULT_REPLAY_DIALOG"*/);
    sub_2213A60(&StringLiteral_18399/*"buddy_bg_at"*/);
    sub_2213A60(&StringLiteral_6531/*"EventUI/Prefabs"*/);
    sub_2213A60(&StringLiteral_17919/*"bit_buddy_result"*/);
    byte_596AA14 = 1;
  }
  v7 = StringLiteral_6531/*"EventUI/Prefabs"*/;
  EventBuddyPointResultManager_TypeInfo->static_fields->EVENT_UI_ASSET_PATH = (struct System_String_o *)StringLiteral_6531/*"EventUI/Prefabs"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventBuddyPointResultManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_17919/*"bit_buddy_result"*/;
  static_fields = EventBuddyPointResultManager_TypeInfo->static_fields;
  static_fields->BUDDY_POINT_RESULT_PREFAB = (struct System_String_o *)StringLiteral_17919/*"bit_buddy_result"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->BUDDY_POINT_RESULT_PREFAB,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_18399/*"buddy_bg_at"*/;
  v17 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v17->BUDDY_RESULT_ATLAS = (struct System_String_o *)StringLiteral_18399/*"buddy_bg_at"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->BUDDY_RESULT_ATLAS, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_3024/*"BEST_BUDDY_POINT_RESULT"*/;
  v25 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v25->SAVEKEY_BEST_BUDDY_POINT_RESULT = (struct System_String_o *)StringLiteral_3024/*"BEST_BUDDY_POINT_RESULT"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v25->SAVEKEY_BEST_BUDDY_POINT_RESULT,
    v24,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = StringLiteral_3025/*"BEST_BUDDY_RESULT_REPLAY_DIALOG"*/;
  v33 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v33->SAVEKEY_BEST_BUDDY_RESULT_REPLAY_DIALOG = (struct System_String_o *)StringLiteral_3025/*"BEST_BUDDY_RESULT_REPLAY_DIALOG"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v33->SAVEKEY_BEST_BUDDY_RESULT_REPLAY_DIALOG,
    v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = StringLiteral_3362/*"BuddyResultEventUI"*/;
  v41 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v41->BUDDY_RESULT_UI_PREFAB = (struct System_String_o *)StringLiteral_3362/*"BuddyResultEventUI"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v41->BUDDY_RESULT_UI_PREFAB, v40, v42, v43, v44, v45, v46, v47);
}


void EventBuddyPointResultManager___ctor(EventBuddyPointResultManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool EventBuddyPointResultManager__CheckDisplayCondition(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int v4; // w8
  EventServantPointRankMaster_o *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x2
  Il2CppObject *v12; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596AA0F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596AA0F = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&eventId, method);
  Master_object = (EventServantPointRankMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Master_object )
    goto LABEL_25;
  if ( !EventServantPointRankMaster__IsEnableEvent(Master_object, eventId, 0) )
    return 0;
  entity = 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
  Master_object = (EventServantPointRankMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
LABEL_25:
    sub_2213CDC(Master_object, v6);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          eventId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  Master_object = (EventServantPointRankMaster_o *)entity;
  if ( !entity )
    goto LABEL_25;
  if ( !EventEntity__IsExchangePeriod((EventEntity_o *)entity, 0, 0) )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v10);
  v12 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v11);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Master_object = (EventServantPointRankMaster_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v11);
    Master_object = (EventServantPointRankMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v12 )
    goto LABEL_25;
  return UserEventServantPointMaster__IsAnyExist(
           (UserEventServantPointMaster_o *)v12,
           (int64_t)Master_object[2].fields.list[1].monitor,
           eventId,
           0);
}


bool EventBuddyPointResultManager__CheckFirstTimeDisplayCondition(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  return EventBuddyPointResultManager__CheckDisplayCondition(this, eventId, method)
      && !EventBuddyPointResultManager__IsFirstTimeDisplayed(this, eventId, v5);
}


bool EventBuddyPointResultManager__CheckReplayIntroDialogDisplayCondition(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventBuddyPointResultManager_o *v4; // x20
  const MethodInfo *v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  EventBuddyPointResultManager_o *v9; // x0
  System_String_o *SaveKey; // x0

  v4 = this;
  if ( (byte_596AA11 & 1) == 0 )
  {
    this = (EventBuddyPointResultManager_o *)sub_2213A60(&EventBuddyPointResultManager_TypeInfo);
    byte_596AA11 = 1;
  }
  if ( EventBuddyPointResultManager__CheckDisplayCondition(this, eventId, method)
    && EventBuddyPointResultManager__IsFirstTimeDisplayed(v4, eventId, v5) )
  {
    v9 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
    if ( !*(&EventBuddyPointResultManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo, v6, v7);
      v9 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
    }
    SaveKey = EventBuddyPointResultManager__GetSaveKey(v9, *((System_String_o **)v9[2].monitor + 4), eventId, v8);
    return !UnityEngine_PlayerPrefs__HasKey(SaveKey, 0);
  }
  else
  {
    return 0;
  }
}


System_String_o *EventBuddyPointResultManager__GetSaveKey(
        EventBuddyPointResultManager_o *this,
        System_String_o *keyBase,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596AA10 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26596/*"{0}_{1}"*/);
    byte_596AA10 = 1;
  }
  v8 = eventId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v8);
  return System_String__Format_75697880((System_String_o *)StringLiteral_26596/*"{0}_{1}"*/, (Il2CppObject *)keyBase, v6, 0);
}


BuddyResultReplayUIControl_o *EventBuddyPointResultManager__InstantiateEventUIPrefab(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  AssetData_o *eventUIAssetData; // x19
  EventBuddyPointResultManager_c *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Object_object__58532980; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *v12; // x0
  __int64 v13; // x1

  if ( (byte_596AA06 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&EventBuddyPointResultManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BuddyResultReplayUIControl___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AA06 = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( !eventUIAssetData )
    return 0;
  v5 = EventBuddyPointResultManager_TypeInfo;
  if ( !*(&EventBuddyPointResultManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo, method, v2);
    v5 = EventBuddyPointResultManager_TypeInfo;
  }
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              eventUIAssetData,
                              v5->static_fields->BUDDY_RESULT_UI_PREFAB,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58532980, 0, 0) )
    return 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  v12 = UnityEngine_Object__Instantiate_object_(
          Object_object__58532980,
          (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v12 )
    sub_2213CDC(0, v13);
  return (BuddyResultReplayUIControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)v12,
                                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BuddyResultReplayUIControl___);
}


EventBuddyPointResultComponent_o *EventBuddyPointResultManager__InstantiateResultPrefab(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  AssetData_o *eventUIAssetData; // x19
  EventBuddyPointResultManager_c *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Object_object__58532980; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *v12; // x0
  __int64 v13; // x1

  if ( (byte_596AA0A & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&EventBuddyPointResultManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventBuddyPointResultComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AA0A = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( !eventUIAssetData )
    return 0;
  v5 = EventBuddyPointResultManager_TypeInfo;
  if ( !*(&EventBuddyPointResultManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo, method, v2);
    v5 = EventBuddyPointResultManager_TypeInfo;
  }
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              eventUIAssetData,
                              v5->static_fields->BUDDY_POINT_RESULT_PREFAB,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58532980, 0, 0) )
    return 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  v12 = UnityEngine_Object__Instantiate_object_(
          Object_object__58532980,
          (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v12 )
    sub_2213CDC(0, v13);
  return (EventBuddyPointResultComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)v12,
                                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventBuddyPointResultComponent___);
}


// local variable allocation has failed, the output may be wrong!
bool EventBuddyPointResultManager__IsFirstTimeDisplayed(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EventBuddyPointResultManager_o *v5; // x0
  System_String_o *SaveKey; // x0

  if ( (byte_596AA0E & 1) == 0 )
  {
    sub_2213A60(&EventBuddyPointResultManager_TypeInfo);
    byte_596AA0E = 1;
  }
  v5 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  if ( !*(&EventBuddyPointResultManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo, *(_QWORD *)&eventId, method);
    v5 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  }
  SaveKey = EventBuddyPointResultManager__GetSaveKey(v5, *((System_String_o **)v5[2].monitor + 3), eventId, v3);
  return UnityEngine_PlayerPrefs__HasKey(SaveKey, 0);
}


bool EventBuddyPointResultManager__LoadAssetData(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  __int64 v23; // x2
  EventBuddyPointResultManager_c *v24; // x0
  Il2CppObject **static_fields; // x8
  Il2CppObject *v26; // x21
  Il2CppObject *v27; // x0
  System_String_o *v28; // x19
  AssetLoader_LoadEndDataHandler_o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  int32_t v33; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_596AA04 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&EventBuddyPointResultManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_EventBuddyPointResultManager___c__DisplayClass14_0__LoadAssetData_b__0__);
    sub_2213A60(&EventBuddyPointResultManager___c__DisplayClass14_0_TypeInfo);
    sub_2213A60(&StringLiteral_26548/*"{0}/{1}"*/);
    byte_596AA04 = 1;
  }
  v7 = sub_2213CCC(EventBuddyPointResultManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  v24 = EventBuddyPointResultManager_TypeInfo;
  if ( !*(&EventBuddyPointResultManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo, v22, v23);
    v24 = EventBuddyPointResultManager_TypeInfo;
  }
  static_fields = (Il2CppObject **)v24->static_fields;
  v33 = eventId;
  v26 = *static_fields;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v33);
  v28 = System_String__Format_75697880((System_String_o *)StringLiteral_26548/*"{0}/{1}"*/, v26, v27, 0);
  v29 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v29,
    (Il2CppObject *)v7,
    Method_EventBuddyPointResultManager___c__DisplayClass14_0__LoadAssetData_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v30, v31);
  return AssetManager__loadAssetStorage(v28, v29, 1, 0, 0);
}


UIAtlas_o *EventBuddyPointResultManager__LoadAtlasFromAssetData(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  AssetData_o *eventUIAssetData; // x19
  EventBuddyPointResultManager_c *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Object_object__58532980; // x19
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_596AA09 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&EventBuddyPointResultManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AA09 = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( !eventUIAssetData )
    return 0;
  v5 = EventBuddyPointResultManager_TypeInfo;
  if ( !*(&EventBuddyPointResultManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo, method, v2);
    v5 = EventBuddyPointResultManager_TypeInfo;
  }
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              eventUIAssetData,
                              v5->static_fields->BUDDY_RESULT_ATLAS,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58532980, 0, 0);
  if ( v9 )
    return 0;
  if ( !Object_object__58532980 )
    sub_2213CDC(v9, v10);
  return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Object_object__58532980,
                        (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
}


void EventBuddyPointResultManager__OnClickReplayButton(EventBuddyPointResultManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *uiControl; // x20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  BuddyResultReplayUIControl_o *v8; // x0

  if ( (byte_596AA0C & 1) == 0 )
  {
    sub_2213A60(&Method_EventBuddyPointResultManager_OnClickReplayButton__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AA0C = 1;
  }
  uiControl = (UnityEngine_Object_o *)this->fields.uiControl;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(uiControl, 0, 0) )
  {
    v5 = Method_EventBuddyPointResultManager_OnClickReplayButton__;
    if ( (*((_BYTE *)Method_EventBuddyPointResultManager_OnClickReplayButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_EventBuddyPointResultManager_OnClickReplayButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    v8 = this->fields.uiControl;
    if ( !v8 )
      sub_2213CDC(0, v7);
    BuddyResultReplayUIControl__OpenSelectDialog(v8, 0);
  }
}


void EventBuddyPointResultManager__OnCloseReplayDialog(EventBuddyPointResultManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  EventBuddyPointResultManager_o *v5; // x0
  System_String_o *SaveKey; // x0

  if ( (byte_596AA13 & 1) == 0 )
  {
    sub_2213A60(&EventBuddyPointResultManager_TypeInfo);
    byte_596AA13 = 1;
  }
  v5 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  if ( !*(&EventBuddyPointResultManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo, method, v2);
    v5 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  }
  SaveKey = EventBuddyPointResultManager__GetSaveKey(
              v5,
              *((System_String_o **)v5[2].monitor + 4),
              this->fields.currentEventId,
              v3);
  UnityEngine_PlayerPrefs__SetInt(SaveKey, 1, 0);
}


void EventBuddyPointResultManager__OnPlayEnd(EventBuddyPointResultManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_596AA08 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_EventBuddyPointResultManager__OnPlayEnd_b__18_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AA08 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  v7 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4, v5);
    v6 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_EventBuddyPointResultManager__OnPlayEnd_b__18_0__, 0);
  if ( !v7 )
    sub_2213CDC(v10, v11);
  CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, v9, 0);
}


void EventBuddyPointResultManager__OnSelectPortraitImgCount(
        EventBuddyPointResultManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct System_Action_o *onReplayStartCallback; // x8
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  AvalonSceneManager_c *v18; // x8
  CommonUI_o *v19; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21

  if ( (byte_596AA0D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_EventBuddyPointResultManager___c__DisplayClass23_0__OnSelectPortraitImgCount_b__0__);
    sub_2213A60(&EventBuddyPointResultManager___c__DisplayClass23_0_TypeInfo);
    byte_596AA0D = 1;
  }
  v5 = sub_2213CCC(EventBuddyPointResultManager___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  onReplayStartCallback = this->fields.onReplayStartCallback;
  *(_DWORD *)(v5 + 24) = id;
  if ( onReplayStartCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))onReplayStartCallback->fields.invoke_impl)(
      onReplayStartCallback->fields.method_code,
      onReplayStartCallback->fields.method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = AvalonSceneManager_TypeInfo;
  v19 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v16, v17);
    v18 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
  v21 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_EventBuddyPointResultManager___c__DisplayClass23_0__OnSelectPortraitImgCount_b__0__,
    0);
  if ( !v19 )
LABEL_10:
    sub_2213CDC(v6, v7);
  CommonUI__maskFadeout(v19, 1, DEFAULT_FADE_TIME, v21, 0);
}


void EventBuddyPointResultManager__OpenResultReplayDialog(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *uiControl; // x20
  BuddyResultReplayUIControl_o *v5; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_596AA12 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventBuddyPointResultManager_OnCloseReplayDialog__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AA12 = 1;
  }
  uiControl = (UnityEngine_Object_o *)this->fields.uiControl;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(uiControl, 0, 0) )
  {
    v5 = this->fields.uiControl;
    v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_EventBuddyPointResultManager_OnCloseReplayDialog__, 0);
    if ( !v5 )
      sub_2213CDC(v7, v8);
    BuddyResultReplayUIControl__OpenReplayIntroDialog(v5, v6, 0);
  }
}


bool EventBuddyPointResultManager__PlayBestBuddyResult(
        EventBuddyPointResultManager_o *this,
        System_Action_o *setupEndCallback,
        System_Action_o *onPlayEndCallback,
        int32_t selectLimitCount,
        const MethodInfo *method)
{
  __int64 v9; // x21
  UnityEngine_GameObject_o *AtlasFromAssetData; // x0
  const MethodInfo *v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x1
  struct EventBuddyPointResultComponent_o *v25; // x0
  struct EventBuddyPointResultComponent_o **p_eventBuddyPointStageComponent; // x23
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x1
  __int64 v34; // x2
  UnityEngine_Object_o *eventBuddyPointStageComponent; // x24
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  __int64 v43; // x1
  __int64 v44; // x2
  UnityEngine_Object_o *backgroundObj; // x22
  UIAtlas_o *v46; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  EventBuddyPointResultComponent_o *v48; // x23
  int32_t currentEventId; // w24
  System_Action_o *v50; // x25
  System_Action_o *v51; // x21

  if ( (byte_596AA07 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventBuddyPointResultManager_OnPlayEnd__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_EventBuddyPointResultManager___c__DisplayClass17_0__PlayBestBuddyResult_b__0__);
    sub_2213A60(&EventBuddyPointResultManager___c__DisplayClass17_0_TypeInfo);
    byte_596AA07 = 1;
  }
  v9 = sub_2213CCC(EventBuddyPointResultManager___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_19;
  *(_QWORD *)(v9 + 16) = setupEndCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)setupEndCallback, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)this, v18, v19, v20, v21, v22, v23);
  if ( !this->fields.eventUIAssetData )
    return 0;
  v25 = EventBuddyPointResultManager__InstantiateResultPrefab(this, v24);
  this->fields.eventBuddyPointStageComponent = v25;
  p_eventBuddyPointStageComponent = &this->fields.eventBuddyPointStageComponent;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventBuddyPointStageComponent,
    (int32_t)v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  eventBuddyPointStageComponent = (UnityEngine_Object_o *)this->fields.eventBuddyPointStageComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33, v34);
  if ( UnityEngine_Object__op_Equality(eventBuddyPointStageComponent, 0, 0) )
    return 0;
  this->fields.onPlayEndCallback = onPlayEndCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onPlayEndCallback,
    (int32_t)onPlayEndCallback,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  backgroundObj = (UnityEngine_Object_o *)this->fields.backgroundObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43, v44);
  if ( UnityEngine_Object__op_Inequality(backgroundObj, 0, 0) )
  {
    AtlasFromAssetData = this->fields.backgroundObj;
    if ( !AtlasFromAssetData )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(AtlasFromAssetData, 0, 0);
  }
  AtlasFromAssetData = (UnityEngine_GameObject_o *)EventBuddyPointResultManager__LoadAtlasFromAssetData(this, v11);
  if ( !this->fields.eventBuddyPointStageComponent )
    goto LABEL_19;
  v46 = (UIAtlas_o *)AtlasFromAssetData;
  AtlasFromAssetData = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)this->fields.eventBuddyPointStageComponent,
                         0);
  if ( !AtlasFromAssetData )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(AtlasFromAssetData, 0, 0);
  AtlasFromAssetData = (UnityEngine_GameObject_o *)*p_eventBuddyPointStageComponent;
  if ( !*p_eventBuddyPointStageComponent )
    goto LABEL_19;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)AtlasFromAssetData, 0);
  GameObjectExtensions__SafeSetParent(gameObject, (UnityEngine_Component_o *)this, 0);
  v48 = this->fields.eventBuddyPointStageComponent;
  currentEventId = this->fields.currentEventId;
  v50 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v50,
    (Il2CppObject *)v9,
    Method_EventBuddyPointResultManager___c__DisplayClass17_0__PlayBestBuddyResult_b__0__,
    0);
  v51 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v51, (Il2CppObject *)this, Method_EventBuddyPointResultManager_OnPlayEnd__, 0);
  if ( !v48 )
LABEL_19:
    sub_2213CDC(AtlasFromAssetData, v11);
  EventBuddyPointResultComponent__Setup(v48, currentEventId, v46, v50, v51, selectLimitCount, 0);
  return 1;
}


void EventBuddyPointResultManager__Setup(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        System_Action_o *setupEndCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  _BOOL8 AssetData; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Action_c *v23; // x0
  System_Action_o *v24; // x21
  const MethodInfo *v25; // x3

  if ( (byte_596AA03 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventBuddyPointResultManager___c__DisplayClass13_0__Setup_b__0__);
    sub_2213A60(&EventBuddyPointResultManager___c__DisplayClass13_0_TypeInfo);
    byte_596AA03 = 1;
  }
  v7 = sub_2213CCC(EventBuddyPointResultManager___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_7;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = setupEndCallback;
  v16 = v7 + 24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)setupEndCallback, v17, v18, v19, v20, v21, v22);
  v23 = System_Action_TypeInfo;
  this->fields.currentEventId = eventId;
  v24 = (System_Action_o *)sub_2213CCC(v23);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v7,
    Method_EventBuddyPointResultManager___c__DisplayClass13_0__Setup_b__0__,
    0);
  AssetData = EventBuddyPointResultManager__LoadAssetData(this, eventId, v24, v25);
  if ( AssetData )
    return;
  if ( !*(_QWORD *)v16 )
LABEL_7:
    sub_2213CDC(AssetData, v9);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v16 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v16 + 64LL),
    *(_QWORD *)(*(_QWORD *)v16 + 40LL));
}


void EventBuddyPointResultManager__SetupEventUI(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventBuddyPointResultManager_o *v4; // x20
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  bool v7; // w21
  UnityEngine_Component_o **p_uiControl; // x22
  UnityEngine_Object_o *uiControl; // x23
  BuddyResultReplayUIControl_o *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Object_o *v19; // x23
  UnityEngine_Component_o *v20; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v22; // x22
  BuddyResultReplayUIControl_o *v23; // x21
  System_Action_int__o *v24; // x22

  v4 = this;
  if ( (byte_596AA05 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_EventBuddyPointResultManager_OnSelectPortraitImgCount__);
    this = (EventBuddyPointResultManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AA05 = 1;
  }
  v7 = EventBuddyPointResultManager__CheckDisplayCondition(this, eventId, method);
  if ( v7 )
  {
    p_uiControl = (UnityEngine_Component_o **)&v4->fields.uiControl;
    uiControl = (UnityEngine_Object_o *)v4->fields.uiControl;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( UnityEngine_Object__op_Equality(uiControl, 0, 0) )
    {
      v10 = EventBuddyPointResultManager__InstantiateEventUIPrefab(v4, v5);
      v4->fields.uiControl = v10;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.uiControl, (int32_t)v10, v11, v12, v13, v14, v15, v16);
      v19 = (UnityEngine_Object_o *)v4->fields.uiControl;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
      if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
      {
        v20 = *p_uiControl;
        if ( !*p_uiControl )
          goto LABEL_21;
        gameObject = UnityEngine_Component__get_gameObject(v20, 0);
        GameObjectExtensions__SafeSetParent(gameObject, (UnityEngine_Component_o *)v4, 0);
      }
    }
  }
  v22 = (UnityEngine_Object_o *)v4->fields.uiControl;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(v22, 0, 0) )
  {
    v20 = (UnityEngine_Component_o *)v4->fields.uiControl;
    if ( !v20 )
      goto LABEL_21;
    v20 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v20, 0);
    if ( !v20 )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v20, v7, 0);
    if ( v7 )
    {
      v23 = v4->fields.uiControl;
      v24 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v24,
        (Il2CppObject *)v4,
        Method_EventBuddyPointResultManager_OnSelectPortraitImgCount__,
        0);
      if ( v23 )
      {
        BuddyResultReplayUIControl__Setup(v23, eventId, v24, 0);
        return;
      }
LABEL_21:
      sub_2213CDC(v20, v5);
    }
  }
}


void EventBuddyPointResultManager__SetupReplayEnv(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        BuddyPointResultReplayButton_o *replayButton,
        System_Action_o *onRePlayStartCallback,
        System_Action_o *onPlayEndCallback,
        const MethodInfo *method)
{
  EventBuddyPointResultManager_o *v10; // x19
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  bool v13; // w24
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  EventDelegate_Callback_o *v16; // x24
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x1

  v10 = this;
  if ( (byte_596AA0B & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_EventBuddyPointResultManager_OnClickReplayButton__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (EventBuddyPointResultManager_o *)sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AA0B = 1;
  }
  v13 = EventBuddyPointResultManager__CheckDisplayCondition(this, eventId, (const MethodInfo *)replayButton)
     && EventBuddyPointResultManager__IsFirstTimeDisplayed(v10, eventId, v12);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)replayButton, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !replayButton )
      goto LABEL_17;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)replayButton, 0);
    if ( !gameObject )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(gameObject, v13, 0);
    if ( v13 )
    {
      v16 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v16,
        (Il2CppObject *)v10,
        (intptr_t)Method_EventBuddyPointResultManager_OnClickReplayButton__,
        0);
      BuddyPointResultReplayButton__Setup(replayButton, v16, 0);
      v10->fields.onReplayStartCallback = onRePlayStartCallback;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v10->fields.onReplayStartCallback,
        (int32_t)onRePlayStartCallback,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      v10->fields.onPlayEndCallback = onPlayEndCallback;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v10->fields.onPlayEndCallback,
        (int32_t)onPlayEndCallback,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      if ( EventBuddyPointResultManager__CheckReplayIntroDialogDisplayCondition(v10, eventId, v29) )
      {
        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( gameObject )
        {
          if ( !CommonUI__IsActive_TutorialBigDialog((CommonUI_o *)gameObject, 0) )
            EventBuddyPointResultManager__OpenResultReplayDialog(v10, v30);
          return;
        }
LABEL_17:
        sub_2213CDC(gameObject, v15);
      }
    }
  }
}


void EventBuddyPointResultManager___OnPlayEnd_b__18_0(EventBuddyPointResultManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *backgroundObj; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  UnityEngine_GameObject_o *v8; // x0
  EventBuddyPointResultManager_o *v9; // x0
  System_String_o *SaveKey; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Action_o *onPlayEndCallback; // x8
  UnityEngine_Object_o *eventBuddyPointStageComponent; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *gameObject; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *v20; // x19

  if ( (byte_596AA15 & 1) == 0 )
  {
    sub_2213A60(&EventBuddyPointResultManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AA15 = 1;
  }
  backgroundObj = (UnityEngine_Object_o *)this->fields.backgroundObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(backgroundObj, 0, 0) )
  {
    v8 = this->fields.backgroundObj;
    if ( !v8 )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(v8, 1, 0);
  }
  v9 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  if ( !*(&EventBuddyPointResultManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo, v5, v6);
    v9 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  }
  SaveKey = EventBuddyPointResultManager__GetSaveKey(
              v9,
              *((System_String_o **)v9[2].monitor + 3),
              this->fields.currentEventId,
              v7);
  UnityEngine_PlayerPrefs__SetInt(SaveKey, 1, 0);
  onPlayEndCallback = this->fields.onPlayEndCallback;
  if ( onPlayEndCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))onPlayEndCallback->fields.invoke_impl)(
      onPlayEndCallback->fields.method_code,
      onPlayEndCallback->fields.method);
  eventBuddyPointStageComponent = (UnityEngine_Object_o *)this->fields.eventBuddyPointStageComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  if ( UnityEngine_Object__op_Inequality(eventBuddyPointStageComponent, 0, 0) )
  {
    v8 = (UnityEngine_GameObject_o *)this->fields.eventBuddyPointStageComponent;
    if ( !v8 )
      goto LABEL_24;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
    {
      v8 = (UnityEngine_GameObject_o *)this->fields.eventBuddyPointStageComponent;
      if ( v8 )
      {
        v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
        UnityEngine_Object__Destroy_83459800(v20, 0);
        return;
      }
LABEL_24:
      sub_2213CDC(v8, v5);
    }
  }
}


void EventBuddyPointResultManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596AA16 & 1) == 0 )
  {
    sub_2213A60(&EventBuddyPointResultManager___c_TypeInfo);
    byte_596AA16 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventBuddyPointResultManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventBuddyPointResultManager___c_TypeInfo->static_fields->__9 = (struct EventBuddyPointResultManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventBuddyPointResultManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventBuddyPointResultManager___c___ctor(EventBuddyPointResultManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventBuddyPointResultManager___c___OnSelectPortraitImgCount_b__23_1(
        EventBuddyPointResultManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x19
  EventBuddyPointResultManager___c_c *v7; // x0
  float DEFAULT_FADE_TIME; // s8
  struct EventBuddyPointResultManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__23_2; // x20
  Il2CppObject *v11; // x21
  struct EventBuddyPointResultManager___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_596AA17 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_2__);
    sub_2213A60(&EventBuddyPointResultManager___c_TypeInfo);
    byte_596AA17 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v3, v4);
    v5 = AvalonSceneManager_TypeInfo;
  }
  v7 = EventBuddyPointResultManager___c_TypeInfo;
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  if ( !*(&EventBuddyPointResultManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager___c_TypeInfo, v3, v4);
    v7 = EventBuddyPointResultManager___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__23_2 = static_fields->__9__23_2;
  if ( !_9__23_2 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v3, v4);
      static_fields = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__23_2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__23_2, v11, Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_2__, 0);
    v12 = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    v12->__9__23_2 = _9__23_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__23_2, (int32_t)_9__23_2, v13, v14, v15, v16, v17, v18);
  }
  if ( !v6 )
    sub_2213CDC(v7, v3);
  CommonUI__maskFadein(v6, DEFAULT_FADE_TIME, _9__23_2, 0);
}


void EventBuddyPointResultManager___c___OnSelectPortraitImgCount_b__23_2(
        EventBuddyPointResultManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void EventBuddyPointResultManager___c__DisplayClass13_0___ctor(
        EventBuddyPointResultManager___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventBuddyPointResultManager___c__DisplayClass13_0___Setup_b__0(
        EventBuddyPointResultManager___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventBuddyPointResultManager_o *_4__this; // x0
  struct System_Action_o *setupEndCallback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventBuddyPointResultManager__SetupEventUI(_4__this, _4__this->fields.currentEventId, v2),
        (setupEndCallback = this->fields.setupEndCallback) == 0) )
  {
    sub_2213CDC(_4__this, method);
  }
  ((void (__fastcall *)(intptr_t, intptr_t))setupEndCallback->fields.invoke_impl)(
    setupEndCallback->fields.method_code,
    setupEndCallback->fields.method);
}


void EventBuddyPointResultManager___c__DisplayClass14_0___ctor(
        EventBuddyPointResultManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventBuddyPointResultManager___c__DisplayClass14_0___LoadAssetData_b__0(
        EventBuddyPointResultManager___c__DisplayClass14_0_o *this,
        AssetData_o *prefabData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct EventBuddyPointResultManager_o *_4__this; // x0
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.eventUIAssetData = prefabData,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&_4__this->fields.eventUIAssetData,
          (int32_t)prefabData,
          (System_String_o *)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (callback = this->fields.callback) == 0) )
  {
    sub_2213CDC(_4__this, prefabData);
  }
  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
    callback->fields.method_code,
    callback->fields.method);
}


void EventBuddyPointResultManager___c__DisplayClass17_0___ctor(
        EventBuddyPointResultManager___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventBuddyPointResultManager___c__DisplayClass17_0___PlayBestBuddyResult_b__0(
        EventBuddyPointResultManager___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  struct EventBuddyPointResultManager_o *_4__this; // x8
  EventBuddyPointResultManager___c__DisplayClass17_0_o *v3; // x19
  struct System_Action_o *setupEndCallback; // x8

  if ( this->fields.setupEndCallback )
  {
    _4__this = this->fields.__4__this;
    v3 = this;
    if ( !_4__this
      || (this = (EventBuddyPointResultManager___c__DisplayClass17_0_o *)_4__this->fields.eventBuddyPointStageComponent) == 0
      || (this = (EventBuddyPointResultManager___c__DisplayClass17_0_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0),
          (setupEndCallback = v3->fields.setupEndCallback) == 0) )
    {
      sub_2213CDC(this, method);
    }
    ((void (__fastcall *)(intptr_t, intptr_t))setupEndCallback->fields.invoke_impl)(
      setupEndCallback->fields.method_code,
      setupEndCallback->fields.method);
  }
}


void EventBuddyPointResultManager___c__DisplayClass23_0___ctor(
        EventBuddyPointResultManager___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventBuddyPointResultManager___c__DisplayClass23_0___OnSelectPortraitImgCount_b__0(
        EventBuddyPointResultManager___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x4
  EventBuddyPointResultManager___c_c *v5; // x0
  EventBuddyPointResultManager_o *_4__this; // x20
  struct EventBuddyPointResultManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__23_1; // x21
  Il2CppObject *v9; // x22
  struct EventBuddyPointResultManager___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct EventBuddyPointResultManager_o *v17; // x8

  if ( (byte_596AA18 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_1__);
    sub_2213A60(&EventBuddyPointResultManager___c_TypeInfo);
    byte_596AA18 = 1;
  }
  v5 = EventBuddyPointResultManager___c_TypeInfo;
  _4__this = this->fields.__4__this;
  if ( !*(&EventBuddyPointResultManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager___c_TypeInfo, method, v2);
    v5 = EventBuddyPointResultManager___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__23_1 = static_fields->__9__23_1;
  if ( !_9__23_1 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, method, v2);
      static_fields = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__23_1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__23_1, v9, Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_1__, 0);
    v10 = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    v10->__9__23_1 = _9__23_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__23_1, (int32_t)_9__23_1, v11, v12, v13, v14, v15, v16);
  }
  v17 = this->fields.__4__this;
  if ( !v17 || !_4__this )
    sub_2213CDC(v5, method);
  EventBuddyPointResultManager__PlayBestBuddyResult(
    _4__this,
    _9__23_1,
    v17->fields.onPlayEndCallback,
    this->fields.id,
    v3);
}