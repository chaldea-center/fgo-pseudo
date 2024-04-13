void __fastcall EventBuddyPointResultManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v27; // x1
  struct EventBuddyPointResultManager_StaticFields *v28; // x0
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct EventBuddyPointResultManager_StaticFields *v36; // x0
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct EventBuddyPointResultManager_StaticFields *v44; // x0
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct EventBuddyPointResultManager_StaticFields *v52; // x0
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct EventBuddyPointResultManager_StaticFields *v60; // x0
  System_Int32_array **v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7

  if ( (byte_42EB114 & 1) == 0 )
  {
    sub_B5D5C4(&EventBuddyPointResultManager_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_2932/*"BuddyResultEventUI"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_2599/*"BEST_BUDDY_POINT_RESULT"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_2600/*"BEST_BUDDY_RESULT_REPLAY_DIALOG"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17318/*"buddy_bg_at"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_6280/*"EventUI/Prefabs"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_16944/*"bit_buddy_result"*/, v23, v24, v25);
    byte_42EB114 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventBuddyPointResultManager_TypeInfo->static_fields;
  v27 = (System_Int32_array **)StringLiteral_6280/*"EventUI/Prefabs"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6280/*"EventUI/Prefabs"*/;
  sub_B5D560(static_fields, v27, v2, v3, v4, v5, v6, v7);
  v28 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v29 = (System_Int32_array **)StringLiteral_16944/*"bit_buddy_result"*/;
  v28->BUDDY_POINT_RESULT_PREFAB = (struct System_String_o *)StringLiteral_16944/*"bit_buddy_result"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v28->BUDDY_POINT_RESULT_PREFAB, v29, v30, v31, v32, v33, v34, v35);
  v36 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v37 = (System_Int32_array **)StringLiteral_17318/*"buddy_bg_at"*/;
  v36->BUDDY_RESULT_ATLAS = (struct System_String_o *)StringLiteral_17318/*"buddy_bg_at"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v36->BUDDY_RESULT_ATLAS, v37, v38, v39, v40, v41, v42, v43);
  v44 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v45 = (System_Int32_array **)StringLiteral_2599/*"BEST_BUDDY_POINT_RESULT"*/;
  v44->SAVEKEY_BEST_BUDDY_POINT_RESULT = (struct System_String_o *)StringLiteral_2599/*"BEST_BUDDY_POINT_RESULT"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v44->SAVEKEY_BEST_BUDDY_POINT_RESULT, v45, v46, v47, v48, v49, v50, v51);
  v52 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v53 = (System_Int32_array **)StringLiteral_2600/*"BEST_BUDDY_RESULT_REPLAY_DIALOG"*/;
  v52->SAVEKEY_BEST_BUDDY_RESULT_REPLAY_DIALOG = (struct System_String_o *)StringLiteral_2600/*"BEST_BUDDY_RESULT_REPLAY_DIALOG"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v52->SAVEKEY_BEST_BUDDY_RESULT_REPLAY_DIALOG,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v60 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v61 = (System_Int32_array **)StringLiteral_2932/*"BuddyResultEventUI"*/;
  v60->BUDDY_RESULT_UI_PREFAB = (struct System_String_o *)StringLiteral_2932/*"BuddyResultEventUI"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v60->BUDDY_RESULT_UI_PREFAB, v61, v62, v63, v64, v65, v66, v67);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  EventServantPointRankMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  UserEventServantPointMaster_o *v23; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB10F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v14, v15, v16);
    sub_B5D5C4(&NetworkManager_TypeInfo, v17, v18, v19);
    byte_42EB10F = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_25;
  if ( !EventServantPointRankMaster__IsEnableEvent(Master_WarQuestSelectionMaster, eventId, 0LL) )
    return 0;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventServantPointRankMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_25:
    sub_B5D69C(Master_WarQuestSelectionMaster, v21);
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
          &entity,
          eventId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  Master_WarQuestSelectionMaster = (EventServantPointRankMaster_o *)entity;
  if ( !entity )
    goto LABEL_25;
  if ( !EventEntity__IsExchangePeriod((EventEntity_o *)entity, 0LL, v22) )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v23 = (UserEventServantPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (EventServantPointRankMaster_o *)NetworkManager__get_UserId(0LL);
  if ( !v23 )
    goto LABEL_25;
  return UserEventServantPointMaster__IsAnyExist(v23, (int64_t)Master_WarQuestSelectionMaster, eventId, 0LL);
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
  __int64 v3; // x3
  EventBuddyPointResultManager_o *v5; // x20
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  EventBuddyPointResultManager_o *v8; // x0
  System_String_o *SaveKey; // x0

  v5 = this;
  if ( (byte_42EB111 & 1) == 0 )
  {
    this = (EventBuddyPointResultManager_o *)sub_B5D5C4(
                                               &EventBuddyPointResultManager_TypeInfo,
                                               eventId,
                                               (_DWORD)method,
                                               v3);
    byte_42EB111 = 1;
  }
  if ( EventBuddyPointResultManager__CheckDisplayCondition(this, eventId, method)
    && EventBuddyPointResultManager__IsFirstTimeDisplayed(v5, eventId, v6) )
  {
    v8 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
    if ( (BYTE3(EventBuddyPointResultManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
      v8 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
    }
    SaveKey = EventBuddyPointResultManager__GetSaveKey(
                v8,
                *(System_String_o **)&v8[2].fields.onReplayStartCallback->fields.method,
                eventId,
                v7);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EB110 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)keyBase, eventId, method);
    sub_B5D5C4(&StringLiteral_23955/*"{0}_{1}"*/, v6, v7, v8);
    byte_42EB110 = 1;
  }
  v11 = eventId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return System_String__Format_44573324((System_String_o *)StringLiteral_23955/*"{0}_{1}"*/, (Il2CppObject *)keyBase, v9, 0LL);
}


BuddyResultReplayUIControl_o *__fastcall EventBuddyPointResultManager__InstantiateEventUIPrefab(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  AssetData_o *eventBuddyPointStageComponent; // x19
  EventBuddyPointResultManager_c *v18; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x19
  bool v20; // w8
  BuddyResultReplayUIControl_o *result; // x0
  UnityEngine_GameObject_o *v22; // x0
  __int64 v23; // x1

  if ( (byte_42EB106 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventBuddyPointResultManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BuddyResultReplayUIControl___, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    byte_42EB106 = 1;
  }
  eventBuddyPointStageComponent = (AssetData_o *)this->fields.eventBuddyPointStageComponent;
  if ( !eventBuddyPointStageComponent )
    return 0LL;
  v18 = EventBuddyPointResultManager_TypeInfo;
  if ( (BYTE3(EventBuddyPointResultManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v18 = EventBuddyPointResultManager_TypeInfo;
  }
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             eventBuddyPointStageComponent,
                                                             v18->static_fields->BUDDY_RESULT_UI_PREFAB,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v20 = UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
  result = 0LL;
  if ( !v20 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v22 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v22 )
      sub_B5D69C(0LL, v23);
    return (BuddyResultReplayUIControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             v22,
                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BuddyResultReplayUIControl___);
  }
  return result;
}


EventBuddyPointResultComponent_o *__fastcall EventBuddyPointResultManager__InstantiateResultPrefab(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  AssetData_o *eventBuddyPointStageComponent; // x19
  EventBuddyPointResultManager_c *v18; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x19
  bool v20; // w8
  EventBuddyPointResultComponent_o *result; // x0
  UnityEngine_GameObject_o *v22; // x0
  __int64 v23; // x1

  if ( (byte_42EB10A & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventBuddyPointResultManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventBuddyPointResultComponent___, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    byte_42EB10A = 1;
  }
  eventBuddyPointStageComponent = (AssetData_o *)this->fields.eventBuddyPointStageComponent;
  if ( !eventBuddyPointStageComponent )
    return 0LL;
  v18 = EventBuddyPointResultManager_TypeInfo;
  if ( (BYTE3(EventBuddyPointResultManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v18 = EventBuddyPointResultManager_TypeInfo;
  }
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             eventBuddyPointStageComponent,
                                                             v18->static_fields->BUDDY_POINT_RESULT_PREFAB,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v20 = UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
  result = 0LL;
  if ( !v20 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v22 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v22 )
      sub_B5D69C(0LL, v23);
    return (EventBuddyPointResultComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 v22,
                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventBuddyPointResultComponent___);
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

  if ( (byte_42EB10E & 1) == 0 )
  {
    sub_B5D5C4(&EventBuddyPointResultManager_TypeInfo, eventId, (_DWORD)method, v3);
    byte_42EB10E = 1;
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
  __int64 v25; // x20
  __int64 v26; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  EventBuddyPointResultManager_c *v40; // x0
  Il2CppObject *EVENT_UI_ASSET_PATH; // x21
  Il2CppObject *v42; // x0
  System_String_o *v43; // x19
  AssetLoader_LoadEndDataHandler_o *v44; // x21
  int32_t v46; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EB104 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, eventId, (_DWORD)callback, method);
    sub_B5D5C4(&EventBuddyPointResultManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&int_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_EventBuddyPointResultManager___c__DisplayClass14_0__LoadAssetData_b__0__, v16, v17, v18);
    sub_B5D5C4(&EventBuddyPointResultManager___c__DisplayClass14_0_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_23922/*"{0}/{1}"*/, v22, v23, v24);
    byte_42EB104 = 1;
  }
  v25 = sub_B5D694(EventBuddyPointResultManager___c__DisplayClass14_0_TypeInfo);
  EventBuddyPointResultManager___c__DisplayClass14_0___ctor(
    (EventBuddyPointResultManager___c__DisplayClass14_0_o *)v25,
    0LL);
  if ( !v25 )
    sub_B5D69C(v26, v27);
  *(_QWORD *)(v25 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 16), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v25 + 24) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 24), (System_Int32_array **)callback, v34, v35, v36, v37, v38, v39);
  v40 = EventBuddyPointResultManager_TypeInfo;
  if ( (BYTE3(EventBuddyPointResultManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v40 = EventBuddyPointResultManager_TypeInfo;
  }
  EVENT_UI_ASSET_PATH = (Il2CppObject *)v40->static_fields->EVENT_UI_ASSET_PATH;
  v46 = eventId;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
  v43 = System_String__Format_44573324((System_String_o *)StringLiteral_23922/*"{0}/{1}"*/, EVENT_UI_ASSET_PATH, v42, 0LL);
  v44 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v44,
    (Il2CppObject *)v25,
    Method_EventBuddyPointResultManager___c__DisplayClass14_0__LoadAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__loadAssetStorage(v43, v44, 1, 0LL);
}


UIAtlas_o *__fastcall EventBuddyPointResultManager__LoadAtlasFromAssetData(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  AssetData_o *eventBuddyPointStageComponent; // x19
  EventBuddyPointResultManager_c *v15; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x19
  __int64 v17; // x1
  bool v18; // w8
  UIAtlas_o *result; // x0

  if ( (byte_42EB109 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventBuddyPointResultManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42EB109 = 1;
  }
  eventBuddyPointStageComponent = (AssetData_o *)this->fields.eventBuddyPointStageComponent;
  if ( !eventBuddyPointStageComponent )
    return 0LL;
  v15 = EventBuddyPointResultManager_TypeInfo;
  if ( (BYTE3(EventBuddyPointResultManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v15 = EventBuddyPointResultManager_TypeInfo;
  }
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             eventBuddyPointStageComponent,
                                                             v15->static_fields->BUDDY_RESULT_ATLAS,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v18 = UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
  result = 0LL;
  if ( !v18 )
  {
    if ( !Object_WarBoardWaitTimeSetting )
      sub_B5D69C(0LL, v17);
    return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting,
                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  }
  return result;
}


void __fastcall EventBuddyPointResultManager__OnClickReplayButton(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *klass; // x20
  __int64 v9; // x1
  BuddyResultReplayUIControl_o *v10; // x0

  if ( (byte_42EB10C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EB10C = 1;
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
    v10 = (BuddyResultReplayUIControl_o *)this[1].klass;
    if ( !v10 )
      sub_B5D69C(0LL, v9);
    BuddyResultReplayUIControl__OpenSelectDialog(v10, 0LL);
  }
}


void __fastcall EventBuddyPointResultManager__OnCloseReplayDialog(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  EventBuddyPointResultManager_o *v5; // x0
  System_String_o *SaveKey; // x0

  if ( (byte_42EB113 & 1) == 0 )
  {
    sub_B5D5C4(&EventBuddyPointResultManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB113 = 1;
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
              *(System_String_o **)&v5[2].fields.onReplayStartCallback->fields.method,
              (int32_t)this->fields.eventUIAssetData,
              v3);
  UnityEngine_PlayerPrefs__SetInt(SaveKey, 1, 0LL);
}


void __fastcall EventBuddyPointResultManager__OnPlayEnd(EventBuddyPointResultManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42EB108 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_EventBuddyPointResultManager__OnPlayEnd_b__18_0__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    byte_42EB108 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_EventBuddyPointResultManager__OnPlayEnd_b__18_0__, 0LL);
  if ( !Instance )
    sub_B5D69C(v18, v19);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


void __fastcall EventBuddyPointResultManager__OnSelectPortraitImgCount(
        EventBuddyPointResultManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x19
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Action_o *onPlayEndCallback; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v29; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v31; // x21

  if ( (byte_42EB10D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, id, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(
      &Method_EventBuddyPointResultManager___c__DisplayClass23_0__OnSelectPortraitImgCount_b__0__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&EventBuddyPointResultManager___c__DisplayClass23_0_TypeInfo, v15, v16, v17);
    byte_42EB10D = 1;
  }
  v18 = sub_B5D694(EventBuddyPointResultManager___c__DisplayClass23_0_TypeInfo);
  EventBuddyPointResultManager___c__DisplayClass23_0___ctor(
    (EventBuddyPointResultManager___c__DisplayClass23_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_11;
  *(_QWORD *)(v18 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_DWORD *)(v18 + 24) = id;
  onPlayEndCallback = this->fields.onPlayEndCallback;
  if ( onPlayEndCallback )
    System_Action__Invoke(onPlayEndCallback, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v29 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v29 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v29->static_fields->DEFAULT_FADE_TIME;
  v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v18,
    Method_EventBuddyPointResultManager___c__DisplayClass23_0__OnSelectPortraitImgCount_b__0__,
    0LL);
  if ( !Instance )
LABEL_11:
    sub_B5D69C(v19, v20);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v31, 0LL);
}


void __fastcall EventBuddyPointResultManager__OpenResultReplayDialog(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *klass; // x20
  BuddyResultReplayUIControl_o *v12; // x20
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_42EB112 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventBuddyPointResultManager_OnCloseReplayDialog__, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42EB112 = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
  {
    v12 = (BuddyResultReplayUIControl_o *)this[1].klass;
    v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_EventBuddyPointResultManager_OnCloseReplayDialog__, 0LL);
    if ( !v12 )
      sub_B5D69C(v14, v15);
    BuddyResultReplayUIControl__OpenReplayIntroDialog(v12, v13, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x21
  UnityEngine_GameObject_o *AtlasFromAssetData; // x0
  const MethodInfo *v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x1
  struct System_Action_o *v37; // x0
  struct System_Action_o **p_onReplayStartCallback; // x23
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct System_Action_o *onReplayStartCallback; // x24
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  UnityEngine_Object_o *uiControl; // x22
  UIAtlas_o *v54; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Action_o *v56; // x23
  int32_t eventUIAssetData; // w24
  System_Action_o *v58; // x25
  System_Action_o *v59; // x21
  const MethodInfo *v60; // x6

  if ( (byte_42EB107 & 1) == 0 )
  {
    sub_B5D5C4(
      &System_Action_TypeInfo,
      (_DWORD)setupEndCallback,
      (_DWORD)onPlayEndCallback,
      *(_QWORD *)&selectLimitCount);
    sub_B5D5C4(&Method_EventBuddyPointResultManager_OnPlayEnd__, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_EventBuddyPointResultManager___c__DisplayClass17_0__PlayBestBuddyResult_b__0__, v15, v16, v17);
    sub_B5D5C4(&EventBuddyPointResultManager___c__DisplayClass17_0_TypeInfo, v18, v19, v20);
    byte_42EB107 = 1;
  }
  v21 = sub_B5D694(EventBuddyPointResultManager___c__DisplayClass17_0_TypeInfo);
  EventBuddyPointResultManager___c__DisplayClass17_0___ctor(
    (EventBuddyPointResultManager___c__DisplayClass17_0_o *)v21,
    0LL);
  if ( !v21 )
    goto LABEL_21;
  *(_QWORD *)(v21 + 16) = setupEndCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v21 + 16),
    (System_Int32_array **)setupEndCallback,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  *(_QWORD *)(v21 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 24), (System_Int32_array **)this, v30, v31, v32, v33, v34, v35);
  if ( !this->fields.eventBuddyPointStageComponent )
    return 0;
  v37 = (struct System_Action_o *)EventBuddyPointResultManager__InstantiateResultPrefab(this, v36);
  p_onReplayStartCallback = &this->fields.onReplayStartCallback;
  this->fields.onReplayStartCallback = v37;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onReplayStartCallback,
    (System_Int32_array **)v37,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  onReplayStartCallback = this->fields.onReplayStartCallback;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)onReplayStartCallback, 0LL, 0LL) )
    return 0;
  this->fields.backgroundObj = (struct UnityEngine_GameObject_o *)onPlayEndCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.backgroundObj,
    (System_Int32_array **)onPlayEndCallback,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
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
  AtlasFromAssetData = (UnityEngine_GameObject_o *)EventBuddyPointResultManager__LoadAtlasFromAssetData(this, v23);
  if ( !this->fields.onReplayStartCallback )
    goto LABEL_21;
  v54 = (UIAtlas_o *)AtlasFromAssetData;
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
  v56 = this->fields.onReplayStartCallback;
  eventUIAssetData = (int32_t)this->fields.eventUIAssetData;
  v58 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v58,
    (Il2CppObject *)v21,
    Method_EventBuddyPointResultManager___c__DisplayClass17_0__PlayBestBuddyResult_b__0__,
    0LL);
  v59 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v59, (Il2CppObject *)this, Method_EventBuddyPointResultManager_OnPlayEnd__, 0LL);
  if ( !v56 )
LABEL_21:
    sub_B5D69C(AtlasFromAssetData, v23);
  EventBuddyPointResultComponent__Setup(
    (EventBuddyPointResultComponent_o *)v56,
    eventUIAssetData,
    v54,
    v58,
    v59,
    selectLimitCount,
    v60);
  return 1;
}


void __fastcall EventBuddyPointResultManager__Setup(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        System_Action_o *setupEndCallback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v13; // x22
  System_Action_o *v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Action_o **v22; // x23
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Action_o *v29; // x21
  const MethodInfo *v30; // x3

  if ( (byte_42EB103 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, eventId, (_DWORD)setupEndCallback, method);
    sub_B5D5C4(&Method_EventBuddyPointResultManager___c__DisplayClass13_0__Setup_b__0__, v7, v8, v9);
    sub_B5D5C4(&EventBuddyPointResultManager___c__DisplayClass13_0_TypeInfo, v10, v11, v12);
    byte_42EB103 = 1;
  }
  v13 = sub_B5D694(EventBuddyPointResultManager___c__DisplayClass13_0_TypeInfo);
  EventBuddyPointResultManager___c__DisplayClass13_0___ctor(
    (EventBuddyPointResultManager___c__DisplayClass13_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_7;
  *(_QWORD *)(v13 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = setupEndCallback;
  v22 = (System_Action_o **)(v13 + 24);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v13 + 24),
    (System_Int32_array **)setupEndCallback,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  LODWORD(this->fields.eventUIAssetData) = eventId;
  v29 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v13,
    Method_EventBuddyPointResultManager___c__DisplayClass13_0__Setup_b__0__,
    0LL);
  if ( EventBuddyPointResultManager__LoadAssetData(this, eventId, v29, v30) )
    return;
  v14 = *v22;
  if ( !*v22 )
LABEL_7:
    sub_B5D69C(v14, v15);
  System_Action__Invoke(v14, 0LL);
}


void __fastcall EventBuddyPointResultManager__SetupEventUI(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventBuddyPointResultManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  bool v15; // w21
  UnityEngine_Object_o **v16; // x22
  UnityEngine_Object_o *v17; // x23
  const MethodInfo *v18; // x1
  System_Int32_array **v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Object_o *klass; // x23
  __int64 v27; // x1
  UnityEngine_Component_o *v28; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v30; // x23
  BuddyResultReplayUIControl_o *v31; // x21
  System_Action_int__o *v32; // x22

  v5 = this;
  if ( (byte_42EB105 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_EventBuddyPointResultManager_OnSelectPortraitImgCount__, v9, v10, v11);
    this = (EventBuddyPointResultManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    byte_42EB105 = 1;
  }
  v15 = EventBuddyPointResultManager__CheckDisplayCondition(this, eventId, method);
  v16 = (UnityEngine_Object_o **)&v5[1];
  if ( v15 )
  {
    v17 = *v16;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v17, 0LL, 0LL) )
    {
      v19 = (System_Int32_array **)EventBuddyPointResultManager__InstantiateEventUIPrefab(v5, v18);
      v5[1].klass = (EventBuddyPointResultManager_c *)v19;
      sub_B5D560((BattleServantConfConponent_o *)&v5[1], v19, v20, v21, v22, v23, v24, v25);
      klass = (UnityEngine_Object_o *)v5[1].klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
      {
        v28 = (UnityEngine_Component_o *)*v16;
        if ( !*v16 )
          goto LABEL_24;
        gameObject = UnityEngine_Component__get_gameObject(v28, 0LL);
        GameObjectExtensions__SafeSetParent(gameObject, (UnityEngine_Component_o *)v5, 0LL);
      }
    }
  }
  v30 = *v16;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
  {
    v28 = (UnityEngine_Component_o *)*v16;
    if ( !*v16 )
      goto LABEL_24;
    v28 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v28, 0LL);
    if ( !v28 )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v28, v15, 0LL);
    if ( v15 )
    {
      v31 = (BuddyResultReplayUIControl_o *)v5[1].klass;
      v32 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v32,
        (Il2CppObject *)v5,
        Method_EventBuddyPointResultManager_OnSelectPortraitImgCount__,
        (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
      if ( v31 )
      {
        BuddyResultReplayUIControl__Setup(v31, eventId, v32, 0LL);
        return;
      }
LABEL_24:
      sub_B5D69C(v28, v27);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  const MethodInfo *v20; // x2
  bool v21; // w24
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  EventDelegate_Callback_o *v24; // x24
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x1

  v10 = this;
  if ( (byte_42EB10B & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, eventId, (_DWORD)replayButton, onRePlayStartCallback);
    sub_B5D5C4(&Method_EventBuddyPointResultManager_OnClickReplayButton__, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    this = (EventBuddyPointResultManager_o *)sub_B5D5C4(
                                               &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                               v17,
                                               v18,
                                               v19);
    byte_42EB10B = 1;
  }
  v21 = EventBuddyPointResultManager__CheckDisplayCondition(this, eventId, (const MethodInfo *)replayButton)
     && EventBuddyPointResultManager__IsFirstTimeDisplayed(v10, eventId, v20);
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
    UnityEngine_GameObject__SetActive(gameObject, v21, 0LL);
    if ( v21 )
    {
      v24 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v24,
        (Il2CppObject *)v10,
        Method_EventBuddyPointResultManager_OnClickReplayButton__,
        0LL);
      BuddyPointResultReplayButton__Setup(replayButton, v24, 0LL);
      v10->fields.onPlayEndCallback = onRePlayStartCallback;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v10->fields.onPlayEndCallback,
        (System_Int32_array **)onRePlayStartCallback,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      v10->fields.backgroundObj = (struct UnityEngine_GameObject_o *)onPlayEndCallback;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v10->fields.backgroundObj,
        (System_Int32_array **)onPlayEndCallback,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      if ( EventBuddyPointResultManager__CheckReplayIntroDialogDisplayCondition(v10, eventId, v37) )
      {
        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( gameObject )
        {
          if ( !CommonUI__IsActive_TutorialBigDialog((CommonUI_o *)gameObject, 0LL) )
            EventBuddyPointResultManager__OpenResultReplayDialog(v10, v38);
          return;
        }
LABEL_18:
        sub_B5D69C(gameObject, v23);
      }
    }
  }
}


void __fastcall EventBuddyPointResultManager___OnPlayEnd_b__18_0(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *uiControl; // x20
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  UnityEngine_GameObject_o *v11; // x0
  EventBuddyPointResultManager_o *v12; // x0
  System_String_o *SaveKey; // x0
  System_Action_o *backgroundObj; // x0
  struct System_Action_o *onReplayStartCallback; // x20
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v17; // x19

  if ( (byte_42EB115 & 1) == 0 )
  {
    sub_B5D5C4(&EventBuddyPointResultManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EB115 = 1;
  }
  uiControl = (UnityEngine_Object_o *)this->fields.uiControl;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(uiControl, 0LL, 0LL) )
  {
    v11 = (UnityEngine_GameObject_o *)this->fields.uiControl;
    if ( !v11 )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(v11, 1, 0LL);
  }
  v12 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  if ( (BYTE3(EventBuddyPointResultManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v12 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  }
  SaveKey = EventBuddyPointResultManager__GetSaveKey(
              v12,
              (System_String_o *)v12[2].fields.onReplayStartCallback->fields.m_target,
              (int32_t)this->fields.eventUIAssetData,
              v10);
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
    v11 = (UnityEngine_GameObject_o *)this->fields.onReplayStartCallback;
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
      v11 = (UnityEngine_GameObject_o *)this->fields.onReplayStartCallback;
      if ( v11 )
      {
        v17 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35620236(v17, 0LL);
        return;
      }
LABEL_29:
      sub_B5D69C(v11, v9);
    }
  }
}


void __fastcall EventBuddyPointResultManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventBuddyPointResultManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E64ED & 1) == 0 )
  {
    sub_B5D5C4(&EventBuddyPointResultManager___c_TypeInfo, v1, v2, v3);
    byte_42E64ED = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventBuddyPointResultManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventBuddyPointResultManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventBuddyPointResultManager___c_o *)v4;
  sub_B5D560(static_fields);
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  __int64 v16; // x1
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v18; // x8
  EventBuddyPointResultManager___c_c *v19; // x0
  float DEFAULT_FADE_TIME; // s8
  struct EventBuddyPointResultManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__23_2; // x20
  Il2CppObject *v23; // x21
  struct EventBuddyPointResultManager___c_StaticFields *v24; // x0

  if ( (byte_42E64EE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_2__, v10, v11, v12);
    sub_B5D5C4(&EventBuddyPointResultManager___c_TypeInfo, v13, v14, v15);
    byte_42E64EE = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v18 = AvalonSceneManager_TypeInfo;
  }
  v19 = EventBuddyPointResultManager___c_TypeInfo;
  DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(EventBuddyPointResultManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBuddyPointResultManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager___c_TypeInfo);
    v19 = EventBuddyPointResultManager___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__23_2 = static_fields->__9__23_2;
  if ( !_9__23_2 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__23_2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__23_2,
      v23,
      Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_2__,
      0LL);
    v24 = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    v24->__9__23_2 = _9__23_2;
    sub_B5D560(&v24->__9__23_2);
  }
  if ( !Instance )
    sub_B5D69C(v19, v16);
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
    sub_B5D69C(_4__this, method);
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
        sub_B5D560(&_4__this->fields.method),
        (_4__this = this->fields.callback) == 0LL) )
  {
    sub_B5D69C(_4__this, prefabData);
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
      sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  EventBuddyPointResultManager_o *_4__this; // x20
  EventBuddyPointResultManager___c_c *v12; // x0
  struct EventBuddyPointResultManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__23_1; // x21
  Il2CppObject *v15; // x22
  struct EventBuddyPointResultManager___c_StaticFields *v16; // x0
  struct EventBuddyPointResultManager_o *v17; // x8

  if ( (byte_42E64EF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_1__, v5, v6, v7);
    sub_B5D5C4(&EventBuddyPointResultManager___c_TypeInfo, v8, v9, v10);
    byte_42E64EF = 1;
  }
  _4__this = this->fields.__4__this;
  v12 = EventBuddyPointResultManager___c_TypeInfo;
  if ( (BYTE3(EventBuddyPointResultManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventBuddyPointResultManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager___c_TypeInfo);
    v12 = EventBuddyPointResultManager___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__23_1 = static_fields->__9__23_1;
  if ( !_9__23_1 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__23_1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__23_1,
      v15,
      Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_1__,
      0LL);
    v16 = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    v16->__9__23_1 = _9__23_1;
    sub_B5D560(&v16->__9__23_1);
  }
  v17 = this->fields.__4__this;
  if ( !v17 || !_4__this )
    sub_B5D69C(v12, method);
  EventBuddyPointResultManager__PlayBestBuddyResult(
    _4__this,
    _9__23_1,
    (System_Action_o *)v17->fields.backgroundObj,
    this->fields.id,
    0LL);
}