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

  if ( (byte_40FC59C & 1) == 0 )
  {
    sub_B16FFC(&EventBuddyPointResultManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_2865/*"BuddyResultEventUI"*/, v8);
    sub_B16FFC(&StringLiteral_2535/*"BEST_BUDDY_POINT_RESULT"*/, v9);
    sub_B16FFC(&StringLiteral_2536/*"BEST_BUDDY_RESULT_REPLAY_DIALOG"*/, v10);
    sub_B16FFC(&StringLiteral_17042/*"buddy_bg_at"*/, v11);
    sub_B16FFC(&StringLiteral_6183/*"EventUI/Prefabs"*/, v12);
    sub_B16FFC(&StringLiteral_16674/*"bit_buddy_result"*/, v13);
    byte_40FC59C = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventBuddyPointResultManager_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_6183/*"EventUI/Prefabs"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6183/*"EventUI/Prefabs"*/;
  sub_B16F98(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_16674/*"bit_buddy_result"*/;
  v16->BUDDY_POINT_RESULT_PREFAB = (struct System_String_o *)StringLiteral_16674/*"bit_buddy_result"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v16->BUDDY_POINT_RESULT_PREFAB, v17, v18, v19, v20, v21, v22, v23);
  v24 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v25 = (System_Int32_array **)StringLiteral_17042/*"buddy_bg_at"*/;
  v24->BUDDY_RESULT_ATLAS = (struct System_String_o *)StringLiteral_17042/*"buddy_bg_at"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v24->BUDDY_RESULT_ATLAS, v25, v26, v27, v28, v29, v30, v31);
  v32 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v33 = (System_Int32_array **)StringLiteral_2535/*"BEST_BUDDY_POINT_RESULT"*/;
  v32->SAVEKEY_BEST_BUDDY_POINT_RESULT = (struct System_String_o *)StringLiteral_2535/*"BEST_BUDDY_POINT_RESULT"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v32->SAVEKEY_BEST_BUDDY_POINT_RESULT, v33, v34, v35, v36, v37, v38, v39);
  v40 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v41 = (System_Int32_array **)StringLiteral_2536/*"BEST_BUDDY_RESULT_REPLAY_DIALOG"*/;
  v40->SAVEKEY_BEST_BUDDY_RESULT_REPLAY_DIALOG = (struct System_String_o *)StringLiteral_2536/*"BEST_BUDDY_RESULT_REPLAY_DIALOG"*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v40->SAVEKEY_BEST_BUDDY_RESULT_REPLAY_DIALOG,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v49 = (System_Int32_array **)StringLiteral_2865/*"BuddyResultEventUI"*/;
  v48->BUDDY_RESULT_UI_PREFAB = (struct System_String_o *)StringLiteral_2865/*"BuddyResultEventUI"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v48->BUDDY_RESULT_UI_PREFAB, v49, v50, v51, v52, v53, v54, v55);
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
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x0
  const MethodInfo *v11; // x2
  UserEventServantPointMaster_o *v12; // x20
  int64_t UserId; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FC597 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    byte_40FC597 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_25;
  if ( !EventServantPointRankMaster__IsEnableEvent(Master_WarQuestSelectionMaster, eventId, 0LL) )
    return 0;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !v10 )
LABEL_25:
    sub_B170D4();
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v10,
          &entity,
          eventId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    goto LABEL_25;
  if ( !EventEntity__IsExchangePeriod((EventEntity_o *)entity, 0LL, v11) )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v12 = (UserEventServantPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v12 )
    goto LABEL_25;
  return UserEventServantPointMaster__IsAnyExist(v12, UserId, eventId, 0LL);
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
  if ( (byte_40FC599 & 1) == 0 )
  {
    this = (EventBuddyPointResultManager_o *)sub_B16FFC(&EventBuddyPointResultManager_TypeInfo, *(_QWORD *)&eventId);
    byte_40FC599 = 1;
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

  if ( (byte_40FC598 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, keyBase);
    sub_B16FFC(&StringLiteral_23549/*"{0}_{1}"*/, v6);
    byte_40FC598 = 1;
  }
  v9 = eventId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  return System_String__Format_43739268((System_String_o *)StringLiteral_23549/*"{0}_{1}"*/, (Il2CppObject *)keyBase, v7, 0LL);
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

  if ( (byte_40FC58E & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, method);
    sub_B16FFC(&EventBuddyPointResultManager_TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BuddyResultReplayUIControl___, v4);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40FC58E = 1;
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
                                                             (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
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
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v12 )
      sub_B170D4();
    return (BuddyResultReplayUIControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             v12,
                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BuddyResultReplayUIControl___);
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

  if ( (byte_40FC592 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, method);
    sub_B16FFC(&EventBuddyPointResultManager_TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventBuddyPointResultComponent___, v4);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40FC592 = 1;
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
                                                             (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
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
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v12 )
      sub_B170D4();
    return (EventBuddyPointResultComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 v12,
                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventBuddyPointResultComponent___);
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

  if ( (byte_40FC596 & 1) == 0 )
  {
    sub_B16FFC(&EventBuddyPointResultManager_TypeInfo, *(_QWORD *)&eventId);
    byte_40FC596 = 1;
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  EventBuddyPointResultManager_c *v27; // x0
  Il2CppObject *EVENT_UI_ASSET_PATH; // x21
  Il2CppObject *v29; // x0
  System_String_o *v30; // x19
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  AssetLoader_LoadEndDataHandler_o *v35; // x21
  int32_t v37; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FC58C & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&EventBuddyPointResultManager_TypeInfo, v8);
    sub_B16FFC(&int_TypeInfo, v9);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v10);
    sub_B16FFC(&Method_EventBuddyPointResultManager___c__DisplayClass14_0__LoadAssetData_b__0__, v11);
    sub_B16FFC(&EventBuddyPointResultManager___c__DisplayClass14_0_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_23516/*"{0}/{1}"*/, v13);
    byte_40FC58C = 1;
  }
  v14 = sub_B170CC(
          EventBuddyPointResultManager___c__DisplayClass14_0_TypeInfo,
          *(_QWORD *)&eventId,
          callback,
          method,
          v4);
  EventBuddyPointResultManager___c__DisplayClass14_0___ctor(
    (EventBuddyPointResultManager___c__DisplayClass14_0_o *)v14,
    0LL);
  if ( !v14 )
    sub_B170D4();
  *(_QWORD *)(v14 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v14 + 24) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)callback, v21, v22, v23, v24, v25, v26);
  v27 = EventBuddyPointResultManager_TypeInfo;
  if ( (BYTE3(EventBuddyPointResultManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v27 = EventBuddyPointResultManager_TypeInfo;
  }
  EVENT_UI_ASSET_PATH = (Il2CppObject *)v27->static_fields->EVENT_UI_ASSET_PATH;
  v37 = eventId;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
  v30 = System_String__Format_43739268((System_String_o *)StringLiteral_23516/*"{0}/{1}"*/, EVENT_UI_ASSET_PATH, v29, 0LL);
  v35 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v31, v32, v33, v34);
  AssetLoader_LoadEndDataHandler___ctor(
    v35,
    (Il2CppObject *)v14,
    Method_EventBuddyPointResultManager___c__DisplayClass14_0__LoadAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__loadAssetStorage(v30, v35, 1, 0LL);
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
  bool v9; // w8
  UIAtlas_o *result; // x0

  if ( (byte_40FC591 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, method);
    sub_B16FFC(&EventBuddyPointResultManager_TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FC591 = 1;
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
                                                             (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
  result = 0LL;
  if ( !v9 )
  {
    if ( !Object_WarBoardWaitTimeSetting )
      sub_B170D4();
    return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting,
                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  }
  return result;
}


void __fastcall EventBuddyPointResultManager__OnClickReplayButton(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *klass; // x20
  BuddyResultReplayUIControl_o *v5; // x0

  if ( (byte_40FC594 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FC594 = 1;
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
      sub_B170D4();
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

  if ( (byte_40FC59B & 1) == 0 )
  {
    sub_B16FFC(&EventBuddyPointResultManager_TypeInfo, method);
    byte_40FC59B = 1;
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v11; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_40FC590 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_EventBuddyPointResultManager__OnPlayEnd_b__18_0__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40FC590 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_EventBuddyPointResultManager__OnPlayEnd_b__18_0__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventBuddyPointResultManager__OnSelectPortraitImgCount(
        EventBuddyPointResultManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Action_o *onPlayEndCallback; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v24; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v26; // x21

  if ( (byte_40FC595 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&id);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&Method_EventBuddyPointResultManager___c__DisplayClass23_0__OnSelectPortraitImgCount_b__0__, v9);
    sub_B16FFC(&EventBuddyPointResultManager___c__DisplayClass23_0_TypeInfo, v10);
    byte_40FC595 = 1;
  }
  v11 = sub_B170CC(EventBuddyPointResultManager___c__DisplayClass23_0_TypeInfo, *(_QWORD *)&id, method, v3, v4);
  EventBuddyPointResultManager___c__DisplayClass23_0___ctor(
    (EventBuddyPointResultManager___c__DisplayClass23_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_11;
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v11 + 24) = id;
  onPlayEndCallback = this->fields.onPlayEndCallback;
  if ( onPlayEndCallback )
    System_Action__Invoke(onPlayEndCallback, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v24 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v24 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v24->static_fields->DEFAULT_FADE_TIME;
  v26 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v19, v20, v21, v22);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v11,
    Method_EventBuddyPointResultManager___c__DisplayClass23_0__OnSelectPortraitImgCount_b__0__,
    0LL);
  if ( !Instance )
LABEL_11:
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v26, 0LL);
}


void __fastcall EventBuddyPointResultManager__OpenResultReplayDialog(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *klass; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  BuddyResultReplayUIControl_o *v10; // x20
  System_Action_o *v11; // x21

  if ( (byte_40FC59A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventBuddyPointResultManager_OnCloseReplayDialog__, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FC59A = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
  {
    v10 = (BuddyResultReplayUIControl_o *)this[1].klass;
    v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_EventBuddyPointResultManager_OnCloseReplayDialog__, 0LL);
    if ( !v10 )
      sub_B170D4();
    BuddyResultReplayUIControl__OpenReplayIntroDialog(v10, v11, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1
  struct System_Action_o *v27; // x0
  UnityEngine_Component_o **p_onReplayStartCallback; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct System_Action_o *onReplayStartCallback; // x24
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UnityEngine_Object_o *uiControl; // x22
  const MethodInfo *v44; // x1
  UnityEngine_GameObject_o *v45; // x0
  UIAtlas_o *AtlasFromAssetData; // x0
  UIAtlas_o *v47; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v49; // x0
  struct System_Action_o *v50; // x23
  int32_t eventUIAssetData; // w24
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  System_Action_o *v56; // x25
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  System_Action_o *v61; // x21

  if ( (byte_40FC58F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, setupEndCallback);
    sub_B16FFC(&Method_EventBuddyPointResultManager_OnPlayEnd__, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_EventBuddyPointResultManager___c__DisplayClass17_0__PlayBestBuddyResult_b__0__, v11);
    sub_B16FFC(&EventBuddyPointResultManager___c__DisplayClass17_0_TypeInfo, v12);
    byte_40FC58F = 1;
  }
  v13 = sub_B170CC(
          EventBuddyPointResultManager___c__DisplayClass17_0_TypeInfo,
          setupEndCallback,
          onPlayEndCallback,
          *(_QWORD *)&selectLimitCount,
          method);
  EventBuddyPointResultManager___c__DisplayClass17_0___ctor(
    (EventBuddyPointResultManager___c__DisplayClass17_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_21;
  *(_QWORD *)(v13 + 16) = setupEndCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v13 + 16),
    (System_Int32_array **)setupEndCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  *(_QWORD *)(v13 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  if ( !this->fields.eventBuddyPointStageComponent )
    return 0;
  v27 = (struct System_Action_o *)EventBuddyPointResultManager__InstantiateResultPrefab(this, v26);
  p_onReplayStartCallback = (UnityEngine_Component_o **)&this->fields.onReplayStartCallback;
  this->fields.onReplayStartCallback = v27;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onReplayStartCallback,
    (System_Int32_array **)v27,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  onReplayStartCallback = this->fields.onReplayStartCallback;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)onReplayStartCallback, 0LL, 0LL) )
    return 0;
  this->fields.backgroundObj = (struct UnityEngine_GameObject_o *)onPlayEndCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.backgroundObj,
    (System_Int32_array **)onPlayEndCallback,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  uiControl = (UnityEngine_Object_o *)this->fields.uiControl;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(uiControl, 0LL, 0LL) )
  {
    v45 = (UnityEngine_GameObject_o *)this->fields.uiControl;
    if ( !v45 )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(v45, 0, 0LL);
  }
  AtlasFromAssetData = EventBuddyPointResultManager__LoadAtlasFromAssetData(this, v44);
  if ( !this->fields.onReplayStartCallback )
    goto LABEL_21;
  v47 = AtlasFromAssetData;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.onReplayStartCallback, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( !*p_onReplayStartCallback )
    goto LABEL_21;
  v49 = UnityEngine_Component__get_gameObject(*p_onReplayStartCallback, 0LL);
  GameObjectExtensions__SafeSetParent(v49, (UnityEngine_Component_o *)this, 0LL);
  v50 = this->fields.onReplayStartCallback;
  eventUIAssetData = (int32_t)this->fields.eventUIAssetData;
  v56 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v52, v53, v54, v55);
  System_Action___ctor(
    v56,
    (Il2CppObject *)v13,
    Method_EventBuddyPointResultManager___c__DisplayClass17_0__PlayBestBuddyResult_b__0__,
    0LL);
  v61 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v57, v58, v59, v60);
  System_Action___ctor(v61, (Il2CppObject *)this, Method_EventBuddyPointResultManager_OnPlayEnd__, 0LL);
  if ( !v50 )
LABEL_21:
    sub_B170D4();
  EventBuddyPointResultComponent__Setup(
    (EventBuddyPointResultComponent_o *)v50,
    eventUIAssetData,
    v47,
    v56,
    v61,
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Action_o **v17; // x23
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Action_o *v28; // x21
  const MethodInfo *v29; // x3

  if ( (byte_40FC58B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_EventBuddyPointResultManager___c__DisplayClass13_0__Setup_b__0__, v8);
    sub_B16FFC(&EventBuddyPointResultManager___c__DisplayClass13_0_TypeInfo, v9);
    byte_40FC58B = 1;
  }
  v10 = sub_B170CC(
          EventBuddyPointResultManager___c__DisplayClass13_0_TypeInfo,
          *(_QWORD *)&eventId,
          setupEndCallback,
          method,
          v4);
  EventBuddyPointResultManager___c__DisplayClass13_0___ctor(
    (EventBuddyPointResultManager___c__DisplayClass13_0_o *)v10,
    0LL);
  if ( !v10 )
    goto LABEL_7;
  *(_QWORD *)(v10 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 24) = setupEndCallback;
  v17 = (System_Action_o **)(v10 + 24);
  sub_B16F98(
    (BattleServantConfConponent_o *)(v10 + 24),
    (System_Int32_array **)setupEndCallback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  LODWORD(this->fields.eventUIAssetData) = eventId;
  v28 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v24, v25, v26, v27);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v10,
    Method_EventBuddyPointResultManager___c__DisplayClass13_0__Setup_b__0__,
    0LL);
  if ( EventBuddyPointResultManager__LoadAssetData(this, eventId, v28, v29) )
    return;
  if ( !*v17 )
LABEL_7:
    sub_B170D4();
  System_Action__Invoke(*v17, 0LL);
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
  UnityEngine_Component_o **v9; // x22
  UnityEngine_Component_o *v10; // x23
  const MethodInfo *v11; // x1
  System_Int32_array **v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Object_o *klass; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v21; // x23
  UnityEngine_GameObject_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  BuddyResultReplayUIControl_o *v27; // x21
  System_Action_int__o *v28; // x22

  v4 = this;
  if ( (byte_40FC58D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, *(_QWORD *)&eventId);
    sub_B16FFC(&System_Action_int__TypeInfo, v5);
    sub_B16FFC(&Method_EventBuddyPointResultManager_OnSelectPortraitImgCount__, v6);
    this = (EventBuddyPointResultManager_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FC58D = 1;
  }
  v8 = EventBuddyPointResultManager__CheckDisplayCondition(this, eventId, method);
  v9 = (UnityEngine_Component_o **)&v4[1];
  if ( v8 )
  {
    v10 = *v9;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, 0LL, 0LL) )
    {
      v12 = (System_Int32_array **)EventBuddyPointResultManager__InstantiateEventUIPrefab(v4, v11);
      v4[1].klass = (EventBuddyPointResultManager_c *)v12;
      sub_B16F98((BattleServantConfConponent_o *)&v4[1], v12, v13, v14, v15, v16, v17, v18);
      klass = (UnityEngine_Object_o *)v4[1].klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
      {
        if ( !*v9 )
          goto LABEL_24;
        gameObject = UnityEngine_Component__get_gameObject(*v9, 0LL);
        GameObjectExtensions__SafeSetParent(gameObject, (UnityEngine_Component_o *)v4, 0LL);
      }
    }
  }
  v21 = *v9;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0LL, 0LL) )
  {
    if ( !*v9 )
      goto LABEL_24;
    v22 = UnityEngine_Component__get_gameObject(*v9, 0LL);
    if ( !v22 )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(v22, v8, 0LL);
    if ( v8 )
    {
      v27 = (BuddyResultReplayUIControl_o *)v4[1].klass;
      v28 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v23, v24, v25, v26);
      System_Action_int____ctor(
        v28,
        (Il2CppObject *)v4,
        Method_EventBuddyPointResultManager_OnSelectPortraitImgCount__,
        (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
      if ( v27 )
      {
        BuddyResultReplayUIControl__Setup(v27, eventId, v28, 0LL);
        return;
      }
LABEL_24:
      sub_B170D4();
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
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  EventDelegate_Callback_o *v21; // x24
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x2
  CommonUI_o *Instance; // x0
  const MethodInfo *v36; // x1

  v10 = this;
  if ( (byte_40FC593 & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_EventBuddyPointResultManager_OnClickReplayButton__, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    this = (EventBuddyPointResultManager_o *)sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    byte_40FC593 = 1;
  }
  v15 = EventBuddyPointResultManager__CheckDisplayCondition(this, eventId, (const MethodInfo *)replayButton)
     && EventBuddyPointResultManager__IsFirstTimeDisplayed(v10, eventId, v14);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)replayButton, 0LL, 0LL) )
  {
    if ( !replayButton )
      goto LABEL_18;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)replayButton, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive(gameObject, v15, 0LL);
    if ( v15 )
    {
      v21 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v17, v18, v19, v20);
      EventDelegate_Callback___ctor(
        v21,
        (Il2CppObject *)v10,
        Method_EventBuddyPointResultManager_OnClickReplayButton__,
        0LL);
      BuddyPointResultReplayButton__Setup(replayButton, v21, 0LL);
      v10->fields.onPlayEndCallback = onRePlayStartCallback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v10->fields.onPlayEndCallback,
        (System_Int32_array **)onRePlayStartCallback,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      v10->fields.backgroundObj = (struct UnityEngine_GameObject_o *)onPlayEndCallback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v10->fields.backgroundObj,
        (System_Int32_array **)onPlayEndCallback,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      if ( EventBuddyPointResultManager__CheckReplayIntroDialogDisplayCondition(v10, eventId, v34) )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( Instance )
        {
          if ( !CommonUI__IsActive_TutorialBigDialog(Instance, 0LL) )
            EventBuddyPointResultManager__OpenResultReplayDialog(v10, v36);
          return;
        }
LABEL_18:
        sub_B170D4();
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
  const MethodInfo *v5; // x3
  UnityEngine_GameObject_o *v6; // x0
  EventBuddyPointResultManager_o *v7; // x0
  System_String_o *SaveKey; // x0
  System_Action_o *backgroundObj; // x0
  struct System_Action_o *onReplayStartCallback; // x20
  struct System_Action_o *v11; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct System_Action_o *v13; // x0
  UnityEngine_Object_o *v14; // x19

  if ( (byte_40FC59D & 1) == 0 )
  {
    sub_B16FFC(&EventBuddyPointResultManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FC59D = 1;
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
    v11 = this->fields.onReplayStartCallback;
    if ( !v11 )
      goto LABEL_29;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    {
      v13 = this->fields.onReplayStartCallback;
      if ( v13 )
      {
        v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34809464(v14, 0LL);
        return;
      }
LABEL_29:
      sub_B170D4();
    }
  }
}


void __fastcall EventBuddyPointResultManager___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F8B95 & 1) == 0 )
  {
    sub_B16FFC(&EventBuddyPointResultManager___c_TypeInfo, v1);
    byte_40F8B95 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventBuddyPointResultManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventBuddyPointResultManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v11; // x8
  EventBuddyPointResultManager___c_c *v12; // x0
  float DEFAULT_FADE_TIME; // s8
  struct EventBuddyPointResultManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__23_2; // x20
  Il2CppObject *v16; // x21
  struct EventBuddyPointResultManager___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_40F8B96 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_2__, v4);
    sub_B16FFC(&EventBuddyPointResultManager___c_TypeInfo, v5);
    byte_40F8B96 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  v12 = EventBuddyPointResultManager___c_TypeInfo;
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(EventBuddyPointResultManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBuddyPointResultManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager___c_TypeInfo);
    v12 = EventBuddyPointResultManager___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__23_2 = static_fields->__9__23_2;
  if ( !_9__23_2 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__23_2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
    System_Action___ctor(
      _9__23_2,
      v16,
      Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_2__,
      0LL);
    v17 = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    v17->__9__23_2 = _9__23_2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v17->__9__23_2,
      (System_Int32_array **)_9__23_2,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !Instance )
    sub_B170D4();
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
  struct EventBuddyPointResultManager_o *_4__this; // x0
  System_Action_o *setupEndCallback; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventBuddyPointResultManager__SetupEventUI(_4__this, (int32_t)_4__this->fields.eventUIAssetData, 0LL),
        (setupEndCallback = this->fields.setupEndCallback) == 0LL) )
  {
    sub_B170D4();
  }
  System_Action__Invoke(setupEndCallback, 0LL);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct EventBuddyPointResultManager_o *_4__this; // x0
  System_Action_o *callback; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.eventBuddyPointStageComponent = (struct EventBuddyPointResultComponent_o *)prefabData,
        sub_B16F98(
          (BattleServantConfConponent_o *)&_4__this->fields.eventBuddyPointStageComponent,
          (System_Int32_array **)prefabData,
          (System_String_array **)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (callback = this->fields.callback) == 0LL) )
  {
    sub_B170D4();
  }
  System_Action__Invoke(callback, 0LL);
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
  UnityEngine_Component_o *onReplayStartCallback; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Action_o *setupEndCallback; // x0

  if ( this->fields.setupEndCallback )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (onReplayStartCallback = (UnityEngine_Component_o *)_4__this->fields.onReplayStartCallback) == 0LL
      || (gameObject = UnityEngine_Component__get_gameObject(onReplayStartCallback, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
          (setupEndCallback = this->fields.setupEndCallback) == 0LL) )
    {
      sub_B170D4();
    }
    System_Action__Invoke(setupEndCallback, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  EventBuddyPointResultManager_o *_4__this; // x20
  EventBuddyPointResultManager___c_c *v9; // x0
  struct EventBuddyPointResultManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__23_1; // x21
  Il2CppObject *v12; // x22
  struct EventBuddyPointResultManager___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct EventBuddyPointResultManager_o *v20; // x8

  if ( (byte_40F8B97 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_1__, v6);
    sub_B16FFC(&EventBuddyPointResultManager___c_TypeInfo, v7);
    byte_40F8B97 = 1;
  }
  _4__this = this->fields.__4__this;
  v9 = EventBuddyPointResultManager___c_TypeInfo;
  if ( (BYTE3(EventBuddyPointResultManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBuddyPointResultManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager___c_TypeInfo);
    v9 = EventBuddyPointResultManager___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__23_1 = static_fields->__9__23_1;
  if ( !_9__23_1 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__23_1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(
      _9__23_1,
      v12,
      Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_1__,
      0LL);
    v13 = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    v13->__9__23_1 = _9__23_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v13->__9__23_1,
      (System_Int32_array **)_9__23_1,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = this->fields.__4__this;
  if ( !v20 || !_4__this )
    sub_B170D4();
  EventBuddyPointResultManager__PlayBestBuddyResult(
    _4__this,
    _9__23_1,
    (System_Action_o *)v20->fields.backgroundObj,
    this->fields.id,
    0LL);
}