void __fastcall EventBuddyPointResultManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct EventBuddyPointResultManager_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct EventBuddyPointResultManager_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct EventBuddyPointResultManager_StaticFields *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct EventBuddyPointResultManager_StaticFields *v33; // x0
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct EventBuddyPointResultManager_StaticFields *v41; // x0
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_438DD71 & 1) == 0 )
  {
    sub_B775C4(&EventBuddyPointResultManager_TypeInfo);
    sub_B775C4(&StringLiteral_2987/*"BuddyResultEventUI"*/);
    sub_B775C4(&StringLiteral_2653/*"BEST_BUDDY_POINT_RESULT"*/);
    sub_B775C4(&StringLiteral_2654/*"BEST_BUDDY_RESULT_REPLAY_DIALOG"*/);
    sub_B775C4(&StringLiteral_17448/*"buddy_bg_at"*/);
    sub_B775C4(&StringLiteral_6349/*"EventUI/Prefabs"*/);
    sub_B775C4(&StringLiteral_17070/*"bit_buddy_result"*/);
    byte_438DD71 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventBuddyPointResultManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6349/*"EventUI/Prefabs"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6349/*"EventUI/Prefabs"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_17070/*"bit_buddy_result"*/;
  v9->BUDDY_POINT_RESULT_PREFAB = (struct System_String_o *)StringLiteral_17070/*"bit_buddy_result"*/;
  sub_B77560((BattleServantConfConponent_o *)&v9->BUDDY_POINT_RESULT_PREFAB, v10, v11, v12, v13, v14, v15, v16);
  v17 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_17448/*"buddy_bg_at"*/;
  v17->BUDDY_RESULT_ATLAS = (struct System_String_o *)StringLiteral_17448/*"buddy_bg_at"*/;
  sub_B77560((BattleServantConfConponent_o *)&v17->BUDDY_RESULT_ATLAS, v18, v19, v20, v21, v22, v23, v24);
  v25 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_2653/*"BEST_BUDDY_POINT_RESULT"*/;
  v25->SAVEKEY_BEST_BUDDY_POINT_RESULT = (struct System_String_o *)StringLiteral_2653/*"BEST_BUDDY_POINT_RESULT"*/;
  sub_B77560((BattleServantConfConponent_o *)&v25->SAVEKEY_BEST_BUDDY_POINT_RESULT, v26, v27, v28, v29, v30, v31, v32);
  v33 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v34 = (System_Int32_array **)StringLiteral_2654/*"BEST_BUDDY_RESULT_REPLAY_DIALOG"*/;
  v33->SAVEKEY_BEST_BUDDY_RESULT_REPLAY_DIALOG = (struct System_String_o *)StringLiteral_2654/*"BEST_BUDDY_RESULT_REPLAY_DIALOG"*/;
  sub_B77560(
    (BattleServantConfConponent_o *)&v33->SAVEKEY_BEST_BUDDY_RESULT_REPLAY_DIALOG,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v42 = (System_Int32_array **)StringLiteral_2987/*"BuddyResultEventUI"*/;
  v41->BUDDY_RESULT_UI_PREFAB = (struct System_String_o *)StringLiteral_2987/*"BuddyResultEventUI"*/;
  sub_B77560((BattleServantConfConponent_o *)&v41->BUDDY_RESULT_UI_PREFAB, v42, v43, v44, v45, v46, v47, v48);
}


void __fastcall EventBuddyPointResultManager___ctor(EventBuddyPointResultManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall EventBuddyPointResultManager__CheckDisplayCondition(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventServantPointRankMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  UserEventServantPointMaster_o *v7; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438DD6C & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_EventMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438DD6C = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_25;
  if ( !EventServantPointRankMaster__IsEnableEvent(Master_WarQuestSelectionMaster, eventId, 0LL) )
    return 0;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_25:
    sub_B7769C(Master_WarQuestSelectionMaster, v5);
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
          &entity,
          eventId,
          (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  Master_WarQuestSelectionMaster = (EventServantPointRankMaster_o *)entity;
  if ( !entity )
    goto LABEL_25;
  if ( !EventEntity__IsExchangePeriod((EventEntity_o *)entity, 0LL, v6) )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v7 = (UserEventServantPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (EventServantPointRankMaster_o *)NetworkManager__get_UserId(0LL);
  if ( !v7 )
    goto LABEL_25;
  return UserEventServantPointMaster__IsAnyExist(v7, (int64_t)Master_WarQuestSelectionMaster, eventId, 0LL);
}


bool __fastcall EventBuddyPointResultManager__CheckFirstTimeDisplayCondition(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  return EventBuddyPointResultManager__CheckDisplayCondition(this, eventId, method)
      && !EventBuddyPointResultManager__IsFirstTimeDisplayed(this, eventId, v5);
}


bool __fastcall EventBuddyPointResultManager__CheckReplayIntroDialogDisplayCondition(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventBuddyPointResultManager_o *v4; // x20
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x3
  EventBuddyPointResultManager_o *v7; // x0
  System_String_o *SaveKey; // x0

  v4 = this;
  if ( (byte_438DD6E & 1) == 0 )
  {
    this = (EventBuddyPointResultManager_o *)sub_B775C4(&EventBuddyPointResultManager_TypeInfo);
    byte_438DD6E = 1;
  }
  if ( EventBuddyPointResultManager__CheckDisplayCondition(this, eventId, method)
    && EventBuddyPointResultManager__IsFirstTimeDisplayed(v4, eventId, v5) )
  {
    v7 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
    if ( (BYTE3(EventBuddyPointResultManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
      v7 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
    }
    SaveKey = EventBuddyPointResultManager__GetSaveKey(
                v7,
                *(System_String_o **)&v7[2].fields.onReplayStartCallback->fields.method,
                eventId,
                v6);
    return !UnityEngine_PlayerPrefs__HasKey(SaveKey, 0LL);
  }
  else
  {
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventBuddyPointResultManager__GetSaveKey(
        EventBuddyPointResultManager_o *this,
        System_String_o *keyBase,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438DD6D & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&StringLiteral_24131/*"{0}_{1}"*/);
    byte_438DD6D = 1;
  }
  v8 = eventId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, *(_QWORD *)&eventId);
  return System_String__Format_44897472((System_String_o *)StringLiteral_24131/*"{0}_{1}"*/, (Il2CppObject *)keyBase, v6, 0LL);
}


BuddyResultReplayUIControl_o *__fastcall EventBuddyPointResultManager__InstantiateEventUIPrefab(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  AssetData_o *eventBuddyPointStageComponent; // x19
  EventBuddyPointResultManager_c *v4; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x19
  bool v6; // w8
  BuddyResultReplayUIControl_o *result; // x0
  UnityEngine_GameObject_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_438DD63 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&EventBuddyPointResultManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BuddyResultReplayUIControl___);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438DD63 = 1;
  }
  eventBuddyPointStageComponent = (AssetData_o *)this->fields.eventBuddyPointStageComponent;
  if ( !eventBuddyPointStageComponent )
    return 0LL;
  v4 = EventBuddyPointResultManager_TypeInfo;
  if ( (BYTE3(EventBuddyPointResultManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v4 = EventBuddyPointResultManager_TypeInfo;
  }
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             eventBuddyPointStageComponent,
                                                             v4->static_fields->BUDDY_RESULT_UI_PREFAB,
                                                             (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
  result = 0LL;
  if ( !v6 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                       (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v8 )
      sub_B7769C(0LL, v9);
    return (BuddyResultReplayUIControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             v8,
                                             (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BuddyResultReplayUIControl___);
  }
  return result;
}


EventBuddyPointResultComponent_o *__fastcall EventBuddyPointResultManager__InstantiateResultPrefab(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  AssetData_o *eventBuddyPointStageComponent; // x19
  EventBuddyPointResultManager_c *v4; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x19
  bool v6; // w8
  EventBuddyPointResultComponent_o *result; // x0
  UnityEngine_GameObject_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_438DD67 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&EventBuddyPointResultManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_EventBuddyPointResultComponent___);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438DD67 = 1;
  }
  eventBuddyPointStageComponent = (AssetData_o *)this->fields.eventBuddyPointStageComponent;
  if ( !eventBuddyPointStageComponent )
    return 0LL;
  v4 = EventBuddyPointResultManager_TypeInfo;
  if ( (BYTE3(EventBuddyPointResultManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v4 = EventBuddyPointResultManager_TypeInfo;
  }
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             eventBuddyPointStageComponent,
                                                             v4->static_fields->BUDDY_POINT_RESULT_PREFAB,
                                                             (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
  result = 0LL;
  if ( !v6 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                       (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v8 )
      sub_B7769C(0LL, v9);
    return (EventBuddyPointResultComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 v8,
                                                 (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_EventBuddyPointResultComponent___);
  }
  return result;
}


bool __fastcall EventBuddyPointResultManager__IsFirstTimeDisplayed(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EventBuddyPointResultManager_o *v5; // x0
  System_String_o *SaveKey; // x0

  if ( (byte_438DD6B & 1) == 0 )
  {
    sub_B775C4(&EventBuddyPointResultManager_TypeInfo);
    byte_438DD6B = 1;
  }
  v5 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  if ( (BYTE3(EventBuddyPointResultManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v5 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  }
  SaveKey = EventBuddyPointResultManager__GetSaveKey(
              v5,
              (System_String_o *)v5[2].fields.onReplayStartCallback->fields.m_target,
              eventId,
              v3);
  return UnityEngine_PlayerPrefs__HasKey(SaveKey, 0LL);
}


bool __fastcall EventBuddyPointResultManager__LoadAssetData(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x2
  EventBuddyPointResultManager_c *v23; // x0
  Il2CppObject *EVENT_UI_ASSET_PATH; // x21
  Il2CppObject *v25; // x0
  System_String_o *v26; // x19
  AssetLoader_LoadEndDataHandler_o *v27; // x21
  int32_t v29; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438DD61 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&EventBuddyPointResultManager_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&Method_EventBuddyPointResultManager___c__DisplayClass14_0__LoadAssetData_b__0__);
    sub_B775C4(&EventBuddyPointResultManager___c__DisplayClass14_0_TypeInfo);
    sub_B775C4(&StringLiteral_24097/*"{0}/{1}"*/);
    byte_438DD61 = 1;
  }
  v7 = sub_B77694(EventBuddyPointResultManager___c__DisplayClass14_0_TypeInfo);
  EventBuddyPointResultManager___c__DisplayClass14_0___ctor(
    (EventBuddyPointResultManager___c__DisplayClass14_0_o *)v7,
    0LL);
  if ( !v7 )
    sub_B7769C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  v23 = EventBuddyPointResultManager_TypeInfo;
  if ( (BYTE3(EventBuddyPointResultManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v23 = EventBuddyPointResultManager_TypeInfo;
  }
  EVENT_UI_ASSET_PATH = (Il2CppObject *)v23->static_fields->EVENT_UI_ASSET_PATH;
  v29 = eventId;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v22);
  v26 = System_String__Format_44897472((System_String_o *)StringLiteral_24097/*"{0}/{1}"*/, EVENT_UI_ASSET_PATH, v25, 0LL);
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)v7,
    Method_EventBuddyPointResultManager___c__DisplayClass14_0__LoadAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__loadAssetStorage(v26, v27, 1, 0LL);
}


UIAtlas_o *__fastcall EventBuddyPointResultManager__LoadAtlasFromAssetData(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  AssetData_o *eventBuddyPointStageComponent; // x19
  EventBuddyPointResultManager_c *v4; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x19
  __int64 v6; // x1
  bool v7; // w8
  UIAtlas_o *result; // x0

  if ( (byte_438DD66 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&EventBuddyPointResultManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438DD66 = 1;
  }
  eventBuddyPointStageComponent = (AssetData_o *)this->fields.eventBuddyPointStageComponent;
  if ( !eventBuddyPointStageComponent )
    return 0LL;
  v4 = EventBuddyPointResultManager_TypeInfo;
  if ( (BYTE3(EventBuddyPointResultManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v4 = EventBuddyPointResultManager_TypeInfo;
  }
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             eventBuddyPointStageComponent,
                                                             v4->static_fields->BUDDY_RESULT_ATLAS,
                                                             (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
  result = 0LL;
  if ( !v7 )
  {
    if ( !Object_WarBoardWaitTimeSetting )
      sub_B7769C(0LL, v6);
    return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting,
                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  }
  return result;
}


void __fastcall EventBuddyPointResultManager__OnClickReplayButton(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *klass; // x20
  __int64 v4; // x1
  BuddyResultReplayUIControl_o *v5; // x0

  if ( (byte_438DD69 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438DD69 = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v5 = (BuddyResultReplayUIControl_o *)this[1].klass;
    if ( !v5 )
      sub_B7769C(0LL, v4);
    BuddyResultReplayUIControl__OpenSelectDialog(v5, 0LL);
  }
}


void __fastcall EventBuddyPointResultManager__OnCloseReplayDialog(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  EventBuddyPointResultManager_o *v4; // x0
  System_String_o *SaveKey; // x0

  if ( (byte_438DD70 & 1) == 0 )
  {
    sub_B775C4(&EventBuddyPointResultManager_TypeInfo);
    byte_438DD70 = 1;
  }
  v4 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  if ( (BYTE3(EventBuddyPointResultManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v4 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  }
  SaveKey = EventBuddyPointResultManager__GetSaveKey(
              v4,
              *(System_String_o **)&v4[2].fields.onReplayStartCallback->fields.method,
              (int32_t)this->fields.eventUIAssetData,
              v2);
  UnityEngine_PlayerPrefs__SetInt(SaveKey, 1, 0LL);
}


void __fastcall EventBuddyPointResultManager__OnPlayEnd(EventBuddyPointResultManager_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v4; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_438DD65 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_EventBuddyPointResultManager__OnPlayEnd_b__18_0__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438DD65 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EventBuddyPointResultManager__OnPlayEnd_b__18_0__, 0LL);
  if ( !Instance )
    sub_B7769C(v7, v8);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v6, 0LL);
}


void __fastcall EventBuddyPointResultManager__OnSelectPortraitImgCount(
        EventBuddyPointResultManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Action_o *onPlayEndCallback; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_438DD6A & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_EventBuddyPointResultManager___c__DisplayClass23_0__OnSelectPortraitImgCount_b__0__);
    sub_B775C4(&EventBuddyPointResultManager___c__DisplayClass23_0_TypeInfo);
    byte_438DD6A = 1;
  }
  v5 = sub_B77694(EventBuddyPointResultManager___c__DisplayClass23_0_TypeInfo);
  EventBuddyPointResultManager___c__DisplayClass23_0___ctor(
    (EventBuddyPointResultManager___c__DisplayClass23_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = id;
  onPlayEndCallback = this->fields.onPlayEndCallback;
  if ( onPlayEndCallback )
    System_Action__Invoke(onPlayEndCallback, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v16 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
  v18 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_EventBuddyPointResultManager___c__DisplayClass23_0__OnSelectPortraitImgCount_b__0__,
    0LL);
  if ( !Instance )
LABEL_11:
    sub_B7769C(v6, v7);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v18, 0LL);
}


void __fastcall EventBuddyPointResultManager__OpenResultReplayDialog(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *klass; // x20
  BuddyResultReplayUIControl_o *v4; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_438DD6F & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_EventBuddyPointResultManager_OnCloseReplayDialog__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438DD6F = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
  {
    v4 = (BuddyResultReplayUIControl_o *)this[1].klass;
    v5 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_EventBuddyPointResultManager_OnCloseReplayDialog__, 0LL);
    if ( !v4 )
      sub_B7769C(v6, v7);
    BuddyResultReplayUIControl__OpenReplayIntroDialog(v4, v5, 0LL);
  }
}


bool __fastcall EventBuddyPointResultManager__PlayBestBuddyResult(
        EventBuddyPointResultManager_o *this,
        System_Action_o *setupEndCallback,
        System_Action_o *onPlayEndCallback,
        int32_t selectLimitCount,
        const MethodInfo *method)
{
  __int64 v9; // x21
  UnityEngine_GameObject_o *AtlasFromAssetData; // x0
  const MethodInfo *v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x1
  struct System_Action_o *v25; // x0
  struct System_Action_o **p_onReplayStartCallback; // x23
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct System_Action_o *onReplayStartCallback; // x24
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_Object_o *uiControl; // x22
  UIAtlas_o *v42; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Action_o *v44; // x23
  int32_t eventUIAssetData; // w24
  System_Action_o *v46; // x25
  System_Action_o *v47; // x21
  const MethodInfo *v48; // x6

  if ( (byte_438DD64 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_EventBuddyPointResultManager_OnPlayEnd__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_EventBuddyPointResultManager___c__DisplayClass17_0__PlayBestBuddyResult_b__0__);
    sub_B775C4(&EventBuddyPointResultManager___c__DisplayClass17_0_TypeInfo);
    byte_438DD64 = 1;
  }
  v9 = sub_B77694(EventBuddyPointResultManager___c__DisplayClass17_0_TypeInfo);
  EventBuddyPointResultManager___c__DisplayClass17_0___ctor(
    (EventBuddyPointResultManager___c__DisplayClass17_0_o *)v9,
    0LL);
  if ( !v9 )
    goto LABEL_21;
  *(_QWORD *)(v9 + 16) = setupEndCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)(v9 + 16),
    (System_Int32_array **)setupEndCallback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  *(_QWORD *)(v9 + 24) = this;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  if ( !this->fields.eventBuddyPointStageComponent )
    return 0;
  v25 = (struct System_Action_o *)EventBuddyPointResultManager__InstantiateResultPrefab(this, v24);
  p_onReplayStartCallback = &this->fields.onReplayStartCallback;
  this->fields.onReplayStartCallback = v25;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.onReplayStartCallback,
    (System_Int32_array **)v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  onReplayStartCallback = this->fields.onReplayStartCallback;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)onReplayStartCallback, 0LL, 0LL) )
    return 0;
  this->fields.backgroundObj = (struct UnityEngine_GameObject_o *)onPlayEndCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.backgroundObj,
    (System_Int32_array **)onPlayEndCallback,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  uiControl = (UnityEngine_Object_o *)this->fields.uiControl;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(uiControl, 0LL, 0LL) )
  {
    AtlasFromAssetData = (UnityEngine_GameObject_o *)this->fields.uiControl;
    if ( !AtlasFromAssetData )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(AtlasFromAssetData, 0, 0LL);
  }
  AtlasFromAssetData = (UnityEngine_GameObject_o *)EventBuddyPointResultManager__LoadAtlasFromAssetData(this, v11);
  if ( !this->fields.onReplayStartCallback )
    goto LABEL_21;
  v42 = (UIAtlas_o *)AtlasFromAssetData;
  AtlasFromAssetData = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)this->fields.onReplayStartCallback,
                         0LL);
  if ( !AtlasFromAssetData )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(AtlasFromAssetData, 0, 0LL);
  AtlasFromAssetData = (UnityEngine_GameObject_o *)*p_onReplayStartCallback;
  if ( !*p_onReplayStartCallback )
    goto LABEL_21;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)AtlasFromAssetData, 0LL);
  GameObjectExtensions__SafeSetParent(gameObject, (UnityEngine_Component_o *)this, 0LL);
  v44 = this->fields.onReplayStartCallback;
  eventUIAssetData = (int32_t)this->fields.eventUIAssetData;
  v46 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v9,
    Method_EventBuddyPointResultManager___c__DisplayClass17_0__PlayBestBuddyResult_b__0__,
    0LL);
  v47 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v47, (Il2CppObject *)this, Method_EventBuddyPointResultManager_OnPlayEnd__, 0LL);
  if ( !v44 )
LABEL_21:
    sub_B7769C(AtlasFromAssetData, v11);
  EventBuddyPointResultComponent__Setup(
    (EventBuddyPointResultComponent_o *)v44,
    eventUIAssetData,
    v42,
    v46,
    v47,
    selectLimitCount,
    v48);
  return 1;
}


void __fastcall EventBuddyPointResultManager__Setup(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        System_Action_o *setupEndCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_Action_o *v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Action_o **v16; // x23
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Action_o *v23; // x21
  const MethodInfo *v24; // x3

  if ( (byte_438DD60 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_EventBuddyPointResultManager___c__DisplayClass13_0__Setup_b__0__);
    sub_B775C4(&EventBuddyPointResultManager___c__DisplayClass13_0_TypeInfo);
    byte_438DD60 = 1;
  }
  v7 = sub_B77694(EventBuddyPointResultManager___c__DisplayClass13_0_TypeInfo);
  EventBuddyPointResultManager___c__DisplayClass13_0___ctor(
    (EventBuddyPointResultManager___c__DisplayClass13_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_7;
  *(_QWORD *)(v7 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = setupEndCallback;
  v16 = (System_Action_o **)(v7 + 24);
  sub_B77560(
    (BattleServantConfConponent_o *)(v7 + 24),
    (System_Int32_array **)setupEndCallback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  LODWORD(this->fields.eventUIAssetData) = eventId;
  v23 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v7,
    Method_EventBuddyPointResultManager___c__DisplayClass13_0__Setup_b__0__,
    0LL);
  if ( EventBuddyPointResultManager__LoadAssetData(this, eventId, v23, v24) )
    return;
  v8 = *v16;
  if ( !*v16 )
LABEL_7:
    sub_B7769C(v8, v9);
  System_Action__Invoke(v8, 0LL);
}


void __fastcall EventBuddyPointResultManager__SetupEventUI(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventBuddyPointResultManager_o *v4; // x20
  bool v5; // w21
  UnityEngine_Object_o **v6; // x22
  UnityEngine_Object_o *v7; // x23
  const MethodInfo *v8; // x1
  System_Int32_array **v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Object_o *klass; // x23
  __int64 v17; // x1
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v20; // x23
  BuddyResultReplayUIControl_o *v21; // x21
  System_Action_int__o *v22; // x22

  v4 = this;
  if ( (byte_438DD62 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_int___ctor__);
    sub_B775C4(&System_Action_int__TypeInfo);
    sub_B775C4(&Method_EventBuddyPointResultManager_OnSelectPortraitImgCount__);
    this = (EventBuddyPointResultManager_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438DD62 = 1;
  }
  v5 = EventBuddyPointResultManager__CheckDisplayCondition(this, eventId, method);
  v6 = (UnityEngine_Object_o **)&v4[1];
  if ( v5 )
  {
    v7 = *v6;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v7, 0LL, 0LL) )
    {
      v9 = (System_Int32_array **)EventBuddyPointResultManager__InstantiateEventUIPrefab(v4, v8);
      v4[1].klass = (EventBuddyPointResultManager_c *)v9;
      sub_B77560((BattleServantConfConponent_o *)&v4[1], v9, v10, v11, v12, v13, v14, v15);
      klass = (UnityEngine_Object_o *)v4[1].klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
      {
        v18 = (UnityEngine_Component_o *)*v6;
        if ( !*v6 )
          goto LABEL_24;
        gameObject = UnityEngine_Component__get_gameObject(v18, 0LL);
        GameObjectExtensions__SafeSetParent(gameObject, (UnityEngine_Component_o *)v4, 0LL);
      }
    }
  }
  v20 = *v6;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
  {
    v18 = (UnityEngine_Component_o *)*v6;
    if ( !*v6 )
      goto LABEL_24;
    v18 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v18, 0LL);
    if ( !v18 )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v18, v5, 0LL);
    if ( v5 )
    {
      v21 = (BuddyResultReplayUIControl_o *)v4[1].klass;
      v22 = (System_Action_int__o *)sub_B77694(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v22,
        (Il2CppObject *)v4,
        Method_EventBuddyPointResultManager_OnSelectPortraitImgCount__,
        (const MethodInfo_269F2D8 *)Method_System_Action_int___ctor__);
      if ( v21 )
      {
        BuddyResultReplayUIControl__Setup(v21, eventId, v22, 0LL);
        return;
      }
LABEL_24:
      sub_B7769C(v18, v17);
    }
  }
}


void __fastcall EventBuddyPointResultManager__SetupReplayEnv(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        BuddyPointResultReplayButton_o *replayButton,
        System_Action_o *onRePlayStartCallback,
        System_Action_o *onPlayEndCallback,
        const MethodInfo *method)
{
  EventBuddyPointResultManager_o *v10; // x19
  const MethodInfo *v11; // x2
  bool v12; // w24
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  EventDelegate_Callback_o *v15; // x24
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x1

  v10 = this;
  if ( (byte_438DD68 & 1) == 0 )
  {
    sub_B775C4(&EventDelegate_Callback_TypeInfo);
    sub_B775C4(&Method_EventBuddyPointResultManager_OnClickReplayButton__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (EventBuddyPointResultManager_o *)sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438DD68 = 1;
  }
  v12 = EventBuddyPointResultManager__CheckDisplayCondition(this, eventId, (const MethodInfo *)replayButton)
     && EventBuddyPointResultManager__IsFirstTimeDisplayed(v10, eventId, v11);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)replayButton,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !replayButton )
      goto LABEL_18;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)replayButton, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive(gameObject, v12, 0LL);
    if ( v12 )
    {
      v15 = (EventDelegate_Callback_o *)sub_B77694(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v15,
        (Il2CppObject *)v10,
        Method_EventBuddyPointResultManager_OnClickReplayButton__,
        0LL);
      BuddyPointResultReplayButton__Setup(replayButton, v15, 0LL);
      v10->fields.onPlayEndCallback = onRePlayStartCallback;
      sub_B77560(
        (BattleServantConfConponent_o *)&v10->fields.onPlayEndCallback,
        (System_Int32_array **)onRePlayStartCallback,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      v10->fields.backgroundObj = (struct UnityEngine_GameObject_o *)onPlayEndCallback;
      sub_B77560(
        (BattleServantConfConponent_o *)&v10->fields.backgroundObj,
        (System_Int32_array **)onPlayEndCallback,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      if ( EventBuddyPointResultManager__CheckReplayIntroDialogDisplayCondition(v10, eventId, v28) )
      {
        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( gameObject )
        {
          if ( !CommonUI__IsActive_TutorialBigDialog((CommonUI_o *)gameObject, 0LL) )
            EventBuddyPointResultManager__OpenResultReplayDialog(v10, v29);
          return;
        }
LABEL_18:
        sub_B7769C(gameObject, v14);
      }
    }
  }
}


void __fastcall EventBuddyPointResultManager___OnPlayEnd_b__18_0(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *uiControl; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  UnityEngine_GameObject_o *v6; // x0
  EventBuddyPointResultManager_o *v7; // x0
  System_String_o *SaveKey; // x0
  System_Action_o *backgroundObj; // x0
  struct System_Action_o *onReplayStartCallback; // x20
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v12; // x19

  if ( (byte_438DD72 & 1) == 0 )
  {
    sub_B775C4(&EventBuddyPointResultManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438DD72 = 1;
  }
  uiControl = (UnityEngine_Object_o *)this->fields.uiControl;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(uiControl, 0LL, 0LL) )
  {
    v6 = (UnityEngine_GameObject_o *)this->fields.uiControl;
    if ( !v6 )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(v6, 1, 0LL);
  }
  v7 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  if ( (BYTE3(EventBuddyPointResultManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v7 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  }
  SaveKey = EventBuddyPointResultManager__GetSaveKey(
              v7,
              (System_String_o *)v7[2].fields.onReplayStartCallback->fields.m_target,
              (int32_t)this->fields.eventUIAssetData,
              v5);
  UnityEngine_PlayerPrefs__SetInt(SaveKey, 1, 0LL);
  backgroundObj = (System_Action_o *)this->fields.backgroundObj;
  if ( backgroundObj )
    System_Action__Invoke(backgroundObj, 0LL);
  onReplayStartCallback = this->fields.onReplayStartCallback;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)onReplayStartCallback, 0LL, 0LL) )
  {
    v6 = (UnityEngine_GameObject_o *)this->fields.onReplayStartCallback;
    if ( !v6 )
      goto LABEL_29;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    {
      v6 = (UnityEngine_GameObject_o *)this->fields.onReplayStartCallback;
      if ( v6 )
      {
        v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_36309980(v12, 0LL);
        return;
      }
LABEL_29:
      sub_B7769C(v6, v4);
    }
  }
}


void __fastcall EventBuddyPointResultManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventBuddyPointResultManager___c_StaticFields *static_fields; // x0

  if ( (byte_4388619 & 1) == 0 )
  {
    sub_B775C4(&EventBuddyPointResultManager___c_TypeInfo);
    byte_4388619 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(EventBuddyPointResultManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventBuddyPointResultManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventBuddyPointResultManager___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall EventBuddyPointResultManager___c___ctor(
        EventBuddyPointResultManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventBuddyPointResultManager___c___OnSelectPortraitImgCount_b__23_1(
        EventBuddyPointResultManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v4; // x8
  EventBuddyPointResultManager___c_c *v5; // x0
  float DEFAULT_FADE_TIME; // s8
  struct EventBuddyPointResultManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__23_2; // x20
  Il2CppObject *v9; // x21
  struct EventBuddyPointResultManager___c_StaticFields *v10; // x0

  if ( (byte_438861A & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_2__);
    sub_B775C4(&EventBuddyPointResultManager___c_TypeInfo);
    byte_438861A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  v5 = EventBuddyPointResultManager___c_TypeInfo;
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(EventBuddyPointResultManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBuddyPointResultManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager___c_TypeInfo);
    v5 = EventBuddyPointResultManager___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__23_2 = static_fields->__9__23_2;
  if ( !_9__23_2 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__23_2 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(_9__23_2, v9, Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_2__, 0LL);
    v10 = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    v10->__9__23_2 = _9__23_2;
    sub_B77560(&v10->__9__23_2);
  }
  if ( !Instance )
    sub_B7769C(v5, v2);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, _9__23_2, 0LL);
}


void __fastcall EventBuddyPointResultManager___c___OnSelectPortraitImgCount_b__23_2(
        EventBuddyPointResultManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventBuddyPointResultManager___c__DisplayClass13_0___ctor(
        EventBuddyPointResultManager___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventBuddyPointResultManager___c__DisplayClass13_0___Setup_b__0(
        EventBuddyPointResultManager___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  void *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventBuddyPointResultManager__SetupEventUI(
          (EventBuddyPointResultManager_o *)_4__this,
          *((_DWORD *)_4__this + 6),
          0LL),
        (_4__this = this->fields.setupEndCallback) == 0LL) )
  {
    sub_B7769C(_4__this, method);
  }
  System_Action__Invoke((System_Action_o *)_4__this, 0LL);
}


void __fastcall EventBuddyPointResultManager___c__DisplayClass14_0___ctor(
        EventBuddyPointResultManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventBuddyPointResultManager___c__DisplayClass14_0___LoadAssetData_b__0(
        EventBuddyPointResultManager___c__DisplayClass14_0_o *this,
        AssetData_o *prefabData,
        const MethodInfo *method)
{
  System_Action_o *_4__this; // x0

  _4__this = (System_Action_o *)this->fields.__4__this;
  if ( !_4__this
    || (*(_QWORD *)&_4__this->fields.method = prefabData,
        sub_B77560(&_4__this->fields.method),
        (_4__this = this->fields.callback) == 0LL) )
  {
    sub_B7769C(_4__this, prefabData);
  }
  System_Action__Invoke(_4__this, 0LL);
}


void __fastcall EventBuddyPointResultManager___c__DisplayClass17_0___ctor(
        EventBuddyPointResultManager___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventBuddyPointResultManager___c__DisplayClass17_0___PlayBestBuddyResult_b__0(
        EventBuddyPointResultManager___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  struct EventBuddyPointResultManager_o *_4__this; // x8
  EventBuddyPointResultManager___c__DisplayClass17_0_o *v3; // x19

  if ( this->fields.setupEndCallback )
  {
    _4__this = this->fields.__4__this;
    v3 = this;
    if ( !_4__this
      || (this = (EventBuddyPointResultManager___c__DisplayClass17_0_o *)_4__this->fields.onReplayStartCallback) == 0LL
      || (this = (EventBuddyPointResultManager___c__DisplayClass17_0_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
          (this = (EventBuddyPointResultManager___c__DisplayClass17_0_o *)v3->fields.setupEndCallback) == 0LL) )
    {
      sub_B7769C(this, method);
    }
    System_Action__Invoke((System_Action_o *)this, 0LL);
  }
}


void __fastcall EventBuddyPointResultManager___c__DisplayClass23_0___ctor(
        EventBuddyPointResultManager___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventBuddyPointResultManager___c__DisplayClass23_0___OnSelectPortraitImgCount_b__0(
        EventBuddyPointResultManager___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  EventBuddyPointResultManager_o *_4__this; // x20
  EventBuddyPointResultManager___c_c *v4; // x0
  struct EventBuddyPointResultManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__23_1; // x21
  Il2CppObject *v7; // x22
  struct EventBuddyPointResultManager___c_StaticFields *v8; // x0
  struct EventBuddyPointResultManager_o *v9; // x8

  if ( (byte_438861B & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_1__);
    sub_B775C4(&EventBuddyPointResultManager___c_TypeInfo);
    byte_438861B = 1;
  }
  _4__this = this->fields.__4__this;
  v4 = EventBuddyPointResultManager___c_TypeInfo;
  if ( (BYTE3(EventBuddyPointResultManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBuddyPointResultManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager___c_TypeInfo);
    v4 = EventBuddyPointResultManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__23_1 = static_fields->__9__23_1;
  if ( !_9__23_1 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__23_1 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(_9__23_1, v7, Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_1__, 0LL);
    v8 = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    v8->__9__23_1 = _9__23_1;
    sub_B77560(&v8->__9__23_1);
  }
  v9 = this->fields.__4__this;
  if ( !v9 || !_4__this )
    sub_B7769C(v4, method);
  EventBuddyPointResultManager__PlayBestBuddyResult(
    _4__this,
    _9__23_1,
    (System_Action_o *)v9->fields.backgroundObj,
    this->fields.id,
    0LL);
}