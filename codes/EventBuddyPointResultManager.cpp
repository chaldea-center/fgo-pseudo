void __fastcall EventBuddyPointResultManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v15; // x1
  struct EventBuddyPointResultManager_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct EventBuddyPointResultManager_StaticFields *v24; // x0
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct EventBuddyPointResultManager_StaticFields *v32; // x0
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct EventBuddyPointResultManager_StaticFields *v40; // x0
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct EventBuddyPointResultManager_StaticFields *v48; // x0
  System_Int32_array **v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7

  if ( (byte_418A2D3 & 1) == 0 )
  {
    sub_B2C35C(&EventBuddyPointResultManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_2877/*"BuddyResultEventUI"*/, v8);
    sub_B2C35C(&StringLiteral_2545/*"BEST_BUDDY_POINT_RESULT"*/, v9);
    sub_B2C35C(&StringLiteral_2546/*"BEST_BUDDY_RESULT_REPLAY_DIALOG"*/, v10);
    sub_B2C35C(&StringLiteral_17108/*"buddy_bg_at"*/, v11);
    sub_B2C35C(&StringLiteral_6201/*"EventUI/Prefabs"*/, v12);
    sub_B2C35C(&StringLiteral_16738/*"bit_buddy_result"*/, v13);
    byte_418A2D3 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventBuddyPointResultManager_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_6201/*"EventUI/Prefabs"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6201/*"EventUI/Prefabs"*/;
  sub_B2C2F8(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_16738/*"bit_buddy_result"*/;
  v16->BUDDY_POINT_RESULT_PREFAB = (struct System_String_o *)StringLiteral_16738/*"bit_buddy_result"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v16->BUDDY_POINT_RESULT_PREFAB, v17, v18, v19, v20, v21, v22, v23);
  v24 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v25 = (System_Int32_array **)StringLiteral_17108/*"buddy_bg_at"*/;
  v24->BUDDY_RESULT_ATLAS = (struct System_String_o *)StringLiteral_17108/*"buddy_bg_at"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v24->BUDDY_RESULT_ATLAS, v25, v26, v27, v28, v29, v30, v31);
  v32 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v33 = (System_Int32_array **)StringLiteral_2545/*"BEST_BUDDY_POINT_RESULT"*/;
  v32->SAVEKEY_BEST_BUDDY_POINT_RESULT = (struct System_String_o *)StringLiteral_2545/*"BEST_BUDDY_POINT_RESULT"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v32->SAVEKEY_BEST_BUDDY_POINT_RESULT, v33, v34, v35, v36, v37, v38, v39);
  v40 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v41 = (System_Int32_array **)StringLiteral_2546/*"BEST_BUDDY_RESULT_REPLAY_DIALOG"*/;
  v40->SAVEKEY_BEST_BUDDY_RESULT_REPLAY_DIALOG = (struct System_String_o *)StringLiteral_2546/*"BEST_BUDDY_RESULT_REPLAY_DIALOG"*/;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v40->SAVEKEY_BEST_BUDDY_RESULT_REPLAY_DIALOG,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v49 = (System_Int32_array **)StringLiteral_2877/*"BuddyResultEventUI"*/;
  v48->BUDDY_RESULT_UI_PREFAB = (struct System_String_o *)StringLiteral_2877/*"BuddyResultEventUI"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v48->BUDDY_RESULT_UI_PREFAB, v49, v50, v51, v52, v53, v54, v55);
}


void __fastcall EventBuddyPointResultManager___ctor(EventBuddyPointResultManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventBuddyPointResultManager__CheckDisplayCondition(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  EventServantPointRankMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  UserEventServantPointMaster_o *v12; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A2CE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    byte_418A2CE = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_25;
  if ( !EventServantPointRankMaster__IsEnableEvent(Master_WarQuestSelectionMaster, eventId, 0LL) )
    return 0;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_25:
    sub_B2C434(Master_WarQuestSelectionMaster, v10);
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
          &entity,
          eventId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  Master_WarQuestSelectionMaster = (EventServantPointRankMaster_o *)entity;
  if ( !entity )
    goto LABEL_25;
  if ( !EventEntity__IsExchangePeriod((EventEntity_o *)entity, 0LL, v11) )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v12 = (UserEventServantPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (EventServantPointRankMaster_o *)NetworkManager__get_UserId(0LL);
  if ( !v12 )
    goto LABEL_25;
  return UserEventServantPointMaster__IsAnyExist(v12, (int64_t)Master_WarQuestSelectionMaster, eventId, 0LL);
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


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_418A2D0 & 1) == 0 )
  {
    this = (EventBuddyPointResultManager_o *)sub_B2C35C(&EventBuddyPointResultManager_TypeInfo, *(_QWORD *)&eventId);
    byte_418A2D0 = 1;
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


System_String_o *__fastcall EventBuddyPointResultManager__GetSaveKey(
        EventBuddyPointResultManager_o *this,
        System_String_o *keyBase,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418A2CF & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, keyBase);
    sub_B2C35C(&StringLiteral_23643/*"{0}_{1}"*/, v6);
    byte_418A2CF = 1;
  }
  v9 = eventId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  return System_String__Format_44301068((System_String_o *)StringLiteral_23643/*"{0}_{1}"*/, (Il2CppObject *)keyBase, v7, 0LL);
}


BuddyResultReplayUIControl_o *__fastcall EventBuddyPointResultManager__InstantiateEventUIPrefab(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AssetData_o *eventBuddyPointStageComponent; // x19
  EventBuddyPointResultManager_c *v8; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x19
  bool v10; // w8
  BuddyResultReplayUIControl_o *result; // x0
  UnityEngine_GameObject_o *v12; // x0
  __int64 v13; // x1

  if ( (byte_418A2C5 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, method);
    sub_B2C35C(&EventBuddyPointResultManager_TypeInfo, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BuddyResultReplayUIControl___, v4);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_418A2C5 = 1;
  }
  eventBuddyPointStageComponent = (AssetData_o *)this->fields.eventBuddyPointStageComponent;
  if ( !eventBuddyPointStageComponent )
    return 0LL;
  v8 = EventBuddyPointResultManager_TypeInfo;
  if ( (BYTE3(EventBuddyPointResultManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v8 = EventBuddyPointResultManager_TypeInfo;
  }
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             eventBuddyPointStageComponent,
                                                             v8->static_fields->BUDDY_RESULT_UI_PREFAB,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
  result = 0LL;
  if ( !v10 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v12 )
      sub_B2C434(0LL, v13);
    return (BuddyResultReplayUIControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             v12,
                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BuddyResultReplayUIControl___);
  }
  return result;
}


EventBuddyPointResultComponent_o *__fastcall EventBuddyPointResultManager__InstantiateResultPrefab(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AssetData_o *eventBuddyPointStageComponent; // x19
  EventBuddyPointResultManager_c *v8; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x19
  bool v10; // w8
  EventBuddyPointResultComponent_o *result; // x0
  UnityEngine_GameObject_o *v12; // x0
  __int64 v13; // x1

  if ( (byte_418A2C9 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, method);
    sub_B2C35C(&EventBuddyPointResultManager_TypeInfo, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventBuddyPointResultComponent___, v4);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_418A2C9 = 1;
  }
  eventBuddyPointStageComponent = (AssetData_o *)this->fields.eventBuddyPointStageComponent;
  if ( !eventBuddyPointStageComponent )
    return 0LL;
  v8 = EventBuddyPointResultManager_TypeInfo;
  if ( (BYTE3(EventBuddyPointResultManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v8 = EventBuddyPointResultManager_TypeInfo;
  }
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             eventBuddyPointStageComponent,
                                                             v8->static_fields->BUDDY_POINT_RESULT_PREFAB,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
  result = 0LL;
  if ( !v10 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v12 )
      sub_B2C434(0LL, v13);
    return (EventBuddyPointResultComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 v12,
                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventBuddyPointResultComponent___);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventBuddyPointResultManager__IsFirstTimeDisplayed(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EventBuddyPointResultManager_o *v5; // x0
  System_String_o *SaveKey; // x0

  if ( (byte_418A2CD & 1) == 0 )
  {
    sub_B2C35C(&EventBuddyPointResultManager_TypeInfo, *(_QWORD *)&eventId);
    byte_418A2CD = 1;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventBuddyPointResultManager__LoadAssetData(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
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
  EventBuddyPointResultManager_c *v28; // x0
  Il2CppObject *EVENT_UI_ASSET_PATH; // x21
  Il2CppObject *v30; // x0
  System_String_o *v31; // x19
  AssetLoader_LoadEndDataHandler_o *v32; // x21
  int32_t v34; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418A2C3 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&EventBuddyPointResultManager_TypeInfo, v7);
    sub_B2C35C(&int_TypeInfo, v8);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_B2C35C(&Method_EventBuddyPointResultManager___c__DisplayClass14_0__LoadAssetData_b__0__, v10);
    sub_B2C35C(&EventBuddyPointResultManager___c__DisplayClass14_0_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_23610/*"{0}/{1}"*/, v12);
    byte_418A2C3 = 1;
  }
  v13 = sub_B2C42C(EventBuddyPointResultManager___c__DisplayClass14_0_TypeInfo);
  EventBuddyPointResultManager___c__DisplayClass14_0___ctor(
    (EventBuddyPointResultManager___c__DisplayClass14_0_o *)v13,
    0LL);
  if ( !v13 )
    sub_B2C434(v14, v15);
  *(_QWORD *)(v13 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)callback, v22, v23, v24, v25, v26, v27);
  v28 = EventBuddyPointResultManager_TypeInfo;
  if ( (BYTE3(EventBuddyPointResultManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v28 = EventBuddyPointResultManager_TypeInfo;
  }
  EVENT_UI_ASSET_PATH = (Il2CppObject *)v28->static_fields->EVENT_UI_ASSET_PATH;
  v34 = eventId;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
  v31 = System_String__Format_44301068((System_String_o *)StringLiteral_23610/*"{0}/{1}"*/, EVENT_UI_ASSET_PATH, v30, 0LL);
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v32,
    (Il2CppObject *)v13,
    Method_EventBuddyPointResultManager___c__DisplayClass14_0__LoadAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__loadAssetStorage(v31, v32, 1, 0LL);
}


UIAtlas_o *__fastcall EventBuddyPointResultManager__LoadAtlasFromAssetData(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  AssetData_o *eventBuddyPointStageComponent; // x19
  EventBuddyPointResultManager_c *v7; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x19
  __int64 v9; // x1
  bool v10; // w8
  UIAtlas_o *result; // x0

  if ( (byte_418A2C8 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, method);
    sub_B2C35C(&EventBuddyPointResultManager_TypeInfo, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418A2C8 = 1;
  }
  eventBuddyPointStageComponent = (AssetData_o *)this->fields.eventBuddyPointStageComponent;
  if ( !eventBuddyPointStageComponent )
    return 0LL;
  v7 = EventBuddyPointResultManager_TypeInfo;
  if ( (BYTE3(EventBuddyPointResultManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v7 = EventBuddyPointResultManager_TypeInfo;
  }
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             eventBuddyPointStageComponent,
                                                             v7->static_fields->BUDDY_RESULT_ATLAS,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
  result = 0LL;
  if ( !v10 )
  {
    if ( !Object_WarBoardWaitTimeSetting )
      sub_B2C434(0LL, v9);
    return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting,
                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  }
  return result;
}


void __fastcall EventBuddyPointResultManager__OnClickReplayButton(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *klass; // x20
  __int64 v5; // x1
  BuddyResultReplayUIControl_o *v6; // x0

  if ( (byte_418A2CB & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_418A2CB = 1;
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
    v6 = (BuddyResultReplayUIControl_o *)this[1].klass;
    if ( !v6 )
      sub_B2C434(0LL, v5);
    BuddyResultReplayUIControl__OpenSelectDialog(v6, 0LL);
  }
}


void __fastcall EventBuddyPointResultManager__OnCloseReplayDialog(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  EventBuddyPointResultManager_o *v4; // x0
  System_String_o *SaveKey; // x0

  if ( (byte_418A2D2 & 1) == 0 )
  {
    sub_B2C35C(&EventBuddyPointResultManager_TypeInfo, method);
    byte_418A2D2 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v7; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418A2C7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_EventBuddyPointResultManager__OnPlayEnd_b__18_0__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_418A2C7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_EventBuddyPointResultManager__OnPlayEnd_b__18_0__, 0LL);
  if ( !Instance )
    sub_B2C434(v10, v11);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBuddyPointResultManager__OnSelectPortraitImgCount(
        EventBuddyPointResultManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Action_o *onPlayEndCallback; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v20; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x21

  if ( (byte_418A2CC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&id);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_EventBuddyPointResultManager___c__DisplayClass23_0__OnSelectPortraitImgCount_b__0__, v7);
    sub_B2C35C(&EventBuddyPointResultManager___c__DisplayClass23_0_TypeInfo, v8);
    byte_418A2CC = 1;
  }
  v9 = sub_B2C42C(EventBuddyPointResultManager___c__DisplayClass23_0_TypeInfo);
  EventBuddyPointResultManager___c__DisplayClass23_0___ctor(
    (EventBuddyPointResultManager___c__DisplayClass23_0_o *)v9,
    0LL);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 24) = id;
  onPlayEndCallback = this->fields.onPlayEndCallback;
  if ( onPlayEndCallback )
    System_Action__Invoke(onPlayEndCallback, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v20 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
  v22 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v9,
    Method_EventBuddyPointResultManager___c__DisplayClass23_0__OnSelectPortraitImgCount_b__0__,
    0LL);
  if ( !Instance )
LABEL_11:
    sub_B2C434(v10, v11);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v22, 0LL);
}


void __fastcall EventBuddyPointResultManager__OpenResultReplayDialog(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *klass; // x20
  BuddyResultReplayUIControl_o *v6; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_418A2D1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_EventBuddyPointResultManager_OnCloseReplayDialog__, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_418A2D1 = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
  {
    v6 = (BuddyResultReplayUIControl_o *)this[1].klass;
    v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_EventBuddyPointResultManager_OnCloseReplayDialog__, 0LL);
    if ( !v6 )
      sub_B2C434(v8, v9);
    BuddyResultReplayUIControl__OpenReplayIntroDialog(v6, v7, 0LL);
  }
}


bool __fastcall EventBuddyPointResultManager__PlayBestBuddyResult(
        EventBuddyPointResultManager_o *this,
        System_Action_o *setupEndCallback,
        System_Action_o *onPlayEndCallback,
        int32_t selectLimitCount,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  UnityEngine_GameObject_o *AtlasFromAssetData; // x0
  const MethodInfo *v15; // x1
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
  const MethodInfo *v28; // x1
  struct System_Action_o *v29; // x0
  struct System_Action_o **p_onReplayStartCallback; // x23
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct System_Action_o *onReplayStartCallback; // x24
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UnityEngine_Object_o *uiControl; // x22
  UIAtlas_o *v46; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Action_o *v48; // x23
  int32_t eventUIAssetData; // w24
  System_Action_o *v50; // x25
  System_Action_o *v51; // x21

  if ( (byte_418A2C6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, setupEndCallback);
    sub_B2C35C(&Method_EventBuddyPointResultManager_OnPlayEnd__, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&Method_EventBuddyPointResultManager___c__DisplayClass17_0__PlayBestBuddyResult_b__0__, v11);
    sub_B2C35C(&EventBuddyPointResultManager___c__DisplayClass17_0_TypeInfo, v12);
    byte_418A2C6 = 1;
  }
  v13 = sub_B2C42C(EventBuddyPointResultManager___c__DisplayClass17_0_TypeInfo);
  EventBuddyPointResultManager___c__DisplayClass17_0___ctor(
    (EventBuddyPointResultManager___c__DisplayClass17_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_21;
  *(_QWORD *)(v13 + 16) = setupEndCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v13 + 16),
    (System_Int32_array **)setupEndCallback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  *(_QWORD *)(v13 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  if ( !this->fields.eventBuddyPointStageComponent )
    return 0;
  v29 = (struct System_Action_o *)EventBuddyPointResultManager__InstantiateResultPrefab(this, v28);
  p_onReplayStartCallback = &this->fields.onReplayStartCallback;
  this->fields.onReplayStartCallback = v29;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onReplayStartCallback,
    (System_Int32_array **)v29,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  onReplayStartCallback = this->fields.onReplayStartCallback;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)onReplayStartCallback, 0LL, 0LL) )
    return 0;
  this->fields.backgroundObj = (struct UnityEngine_GameObject_o *)onPlayEndCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.backgroundObj,
    (System_Int32_array **)onPlayEndCallback,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
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
  AtlasFromAssetData = (UnityEngine_GameObject_o *)EventBuddyPointResultManager__LoadAtlasFromAssetData(this, v15);
  if ( !this->fields.onReplayStartCallback )
    goto LABEL_21;
  v46 = (UIAtlas_o *)AtlasFromAssetData;
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
  v48 = this->fields.onReplayStartCallback;
  eventUIAssetData = (int32_t)this->fields.eventUIAssetData;
  v50 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v50,
    (Il2CppObject *)v13,
    Method_EventBuddyPointResultManager___c__DisplayClass17_0__PlayBestBuddyResult_b__0__,
    0LL);
  v51 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v51, (Il2CppObject *)this, Method_EventBuddyPointResultManager_OnPlayEnd__, 0LL);
  if ( !v48 )
LABEL_21:
    sub_B2C434(AtlasFromAssetData, v15);
  EventBuddyPointResultComponent__Setup(
    (EventBuddyPointResultComponent_o *)v48,
    eventUIAssetData,
    v46,
    v50,
    v51,
    selectLimitCount,
    0LL);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBuddyPointResultManager__Setup(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        System_Action_o *setupEndCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x22
  System_Action_o *v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Action_o **v18; // x23
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Action_o *v25; // x21
  const MethodInfo *v26; // x3

  if ( (byte_418A2C2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_EventBuddyPointResultManager___c__DisplayClass13_0__Setup_b__0__, v7);
    sub_B2C35C(&EventBuddyPointResultManager___c__DisplayClass13_0_TypeInfo, v8);
    byte_418A2C2 = 1;
  }
  v9 = sub_B2C42C(EventBuddyPointResultManager___c__DisplayClass13_0_TypeInfo);
  EventBuddyPointResultManager___c__DisplayClass13_0___ctor(
    (EventBuddyPointResultManager___c__DisplayClass13_0_o *)v9,
    0LL);
  if ( !v9 )
    goto LABEL_7;
  *(_QWORD *)(v9 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = setupEndCallback;
  v18 = (System_Action_o **)(v9 + 24);
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v9 + 24),
    (System_Int32_array **)setupEndCallback,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  LODWORD(this->fields.eventUIAssetData) = eventId;
  v25 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v9,
    Method_EventBuddyPointResultManager___c__DisplayClass13_0__Setup_b__0__,
    0LL);
  if ( EventBuddyPointResultManager__LoadAssetData(this, eventId, v25, v26) )
    return;
  v10 = *v18;
  if ( !*v18 )
LABEL_7:
    sub_B2C434(v10, v11);
  System_Action__Invoke(v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBuddyPointResultManager__SetupEventUI(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventBuddyPointResultManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  bool v8; // w21
  UnityEngine_Object_o **v9; // x22
  UnityEngine_Object_o *v10; // x23
  const MethodInfo *v11; // x1
  System_Int32_array **v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Object_o *klass; // x23
  __int64 v20; // x1
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v23; // x23
  BuddyResultReplayUIControl_o *v24; // x21
  System_Action_int__o *v25; // x22

  v4 = this;
  if ( (byte_418A2C4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, *(_QWORD *)&eventId);
    sub_B2C35C(&System_Action_int__TypeInfo, v5);
    sub_B2C35C(&Method_EventBuddyPointResultManager_OnSelectPortraitImgCount__, v6);
    this = (EventBuddyPointResultManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_418A2C4 = 1;
  }
  v8 = EventBuddyPointResultManager__CheckDisplayCondition(this, eventId, method);
  v9 = (UnityEngine_Object_o **)&v4[1];
  if ( v8 )
  {
    v10 = *v9;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v10, 0LL, 0LL) )
    {
      v12 = (System_Int32_array **)EventBuddyPointResultManager__InstantiateEventUIPrefab(v4, v11);
      v4[1].klass = (EventBuddyPointResultManager_c *)v12;
      sub_B2C2F8((BattleServantConfConponent_o *)&v4[1], v12, v13, v14, v15, v16, v17, v18);
      klass = (UnityEngine_Object_o *)v4[1].klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
      {
        v21 = (UnityEngine_Component_o *)*v9;
        if ( !*v9 )
          goto LABEL_24;
        gameObject = UnityEngine_Component__get_gameObject(v21, 0LL);
        GameObjectExtensions__SafeSetParent(gameObject, (UnityEngine_Component_o *)v4, 0LL);
      }
    }
  }
  v23 = *v9;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
  {
    v21 = (UnityEngine_Component_o *)*v9;
    if ( !*v9 )
      goto LABEL_24;
    v21 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v21, 0LL);
    if ( !v21 )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v21, v8, 0LL);
    if ( v8 )
    {
      v24 = (BuddyResultReplayUIControl_o *)v4[1].klass;
      v25 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v25,
        (Il2CppObject *)v4,
        Method_EventBuddyPointResultManager_OnSelectPortraitImgCount__,
        (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
      if ( v24 )
      {
        BuddyResultReplayUIControl__Setup(v24, eventId, v25, 0LL);
        return;
      }
LABEL_24:
      sub_B2C434(v21, v20);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBuddyPointResultManager__SetupReplayEnv(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        BuddyPointResultReplayButton_o *replayButton,
        System_Action_o *onRePlayStartCallback,
        System_Action_o *onPlayEndCallback,
        const MethodInfo *method)
{
  EventBuddyPointResultManager_o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  bool v15; // w24
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  EventDelegate_Callback_o *v18; // x24
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x1

  v10 = this;
  if ( (byte_418A2CA & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_Callback_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_EventBuddyPointResultManager_OnClickReplayButton__, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    this = (EventBuddyPointResultManager_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    byte_418A2CA = 1;
  }
  v15 = EventBuddyPointResultManager__CheckDisplayCondition(this, eventId, (const MethodInfo *)replayButton)
     && EventBuddyPointResultManager__IsFirstTimeDisplayed(v10, eventId, v14);
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
    UnityEngine_GameObject__SetActive(gameObject, v15, 0LL);
    if ( v15 )
    {
      v18 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v18,
        (Il2CppObject *)v10,
        Method_EventBuddyPointResultManager_OnClickReplayButton__,
        0LL);
      BuddyPointResultReplayButton__Setup(replayButton, v18, 0LL);
      v10->fields.onPlayEndCallback = onRePlayStartCallback;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v10->fields.onPlayEndCallback,
        (System_Int32_array **)onRePlayStartCallback,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      v10->fields.backgroundObj = (struct UnityEngine_GameObject_o *)onPlayEndCallback;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v10->fields.backgroundObj,
        (System_Int32_array **)onPlayEndCallback,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      if ( EventBuddyPointResultManager__CheckReplayIntroDialogDisplayCondition(v10, eventId, v31) )
      {
        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( gameObject )
        {
          if ( !CommonUI__IsActive_TutorialBigDialog((CommonUI_o *)gameObject, 0LL) )
            EventBuddyPointResultManager__OpenResultReplayDialog(v10, v32);
          return;
        }
LABEL_18:
        sub_B2C434(gameObject, v17);
      }
    }
  }
}


void __fastcall EventBuddyPointResultManager___OnPlayEnd_b__18_0(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *uiControl; // x20
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  UnityEngine_GameObject_o *v7; // x0
  EventBuddyPointResultManager_o *v8; // x0
  System_String_o *SaveKey; // x0
  System_Action_o *backgroundObj; // x0
  struct System_Action_o *onReplayStartCallback; // x20
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v13; // x19

  if ( (byte_418A2D4 & 1) == 0 )
  {
    sub_B2C35C(&EventBuddyPointResultManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418A2D4 = 1;
  }
  uiControl = (UnityEngine_Object_o *)this->fields.uiControl;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(uiControl, 0LL, 0LL) )
  {
    v7 = (UnityEngine_GameObject_o *)this->fields.uiControl;
    if ( !v7 )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(v7, 1, 0LL);
  }
  v8 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  if ( (BYTE3(EventBuddyPointResultManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v8 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  }
  SaveKey = EventBuddyPointResultManager__GetSaveKey(
              v8,
              (System_String_o *)v8[2].fields.onReplayStartCallback->fields.m_target,
              (int32_t)this->fields.eventUIAssetData,
              v6);
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
    v7 = (UnityEngine_GameObject_o *)this->fields.onReplayStartCallback;
    if ( !v7 )
      goto LABEL_29;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    {
      v7 = (UnityEngine_GameObject_o *)this->fields.onReplayStartCallback;
      if ( v7 )
      {
        v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35314896(v13, 0LL);
        return;
      }
LABEL_29:
      sub_B2C434(v7, v5);
    }
  }
}


void __fastcall EventBuddyPointResultManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventBuddyPointResultManager___c_StaticFields *static_fields; // x0

  if ( (byte_4184ABA & 1) == 0 )
  {
    sub_B2C35C(&EventBuddyPointResultManager___c_TypeInfo, v1);
    byte_4184ABA = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventBuddyPointResultManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventBuddyPointResultManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventBuddyPointResultManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v8; // x8
  EventBuddyPointResultManager___c_c *v9; // x0
  float DEFAULT_FADE_TIME; // s8
  struct EventBuddyPointResultManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__23_2; // x20
  Il2CppObject *v13; // x21
  struct EventBuddyPointResultManager___c_StaticFields *v14; // x0

  if ( (byte_4184ABB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_2__, v4);
    sub_B2C35C(&EventBuddyPointResultManager___c_TypeInfo, v5);
    byte_4184ABB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  v9 = EventBuddyPointResultManager___c_TypeInfo;
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(EventBuddyPointResultManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBuddyPointResultManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager___c_TypeInfo);
    v9 = EventBuddyPointResultManager___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__23_2 = static_fields->__9__23_2;
  if ( !_9__23_2 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__23_2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__23_2,
      v13,
      Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_2__,
      0LL);
    v14 = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    v14->__9__23_2 = _9__23_2;
    sub_B2C2F8(&v14->__9__23_2, _9__23_2);
  }
  if ( !Instance )
    sub_B2C434(v9, v6);
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
    sub_B2C434(_4__this, method);
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
        sub_B2C2F8(&_4__this->fields.method, prefabData),
        (_4__this = this->fields.callback) == 0LL) )
  {
    sub_B2C434(_4__this, prefabData);
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
      sub_B2C434(this, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  EventBuddyPointResultManager_o *_4__this; // x20
  EventBuddyPointResultManager___c_c *v6; // x0
  struct EventBuddyPointResultManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__23_1; // x21
  Il2CppObject *v9; // x22
  struct EventBuddyPointResultManager___c_StaticFields *v10; // x0
  struct EventBuddyPointResultManager_o *v11; // x8

  if ( (byte_4184ABC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_1__, v3);
    sub_B2C35C(&EventBuddyPointResultManager___c_TypeInfo, v4);
    byte_4184ABC = 1;
  }
  _4__this = this->fields.__4__this;
  v6 = EventBuddyPointResultManager___c_TypeInfo;
  if ( (BYTE3(EventBuddyPointResultManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBuddyPointResultManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager___c_TypeInfo);
    v6 = EventBuddyPointResultManager___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__23_1 = static_fields->__9__23_1;
  if ( !_9__23_1 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__23_1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__23_1, v9, Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_1__, 0LL);
    v10 = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    v10->__9__23_1 = _9__23_1;
    sub_B2C2F8(&v10->__9__23_1, _9__23_1);
  }
  v11 = this->fields.__4__this;
  if ( !v11 || !_4__this )
    sub_B2C434(v6, method);
  EventBuddyPointResultManager__PlayBestBuddyResult(
    _4__this,
    _9__23_1,
    (System_Action_o *)v11->fields.backgroundObj,
    this->fields.id,
    0LL);
}