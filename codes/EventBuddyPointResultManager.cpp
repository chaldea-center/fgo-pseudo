void __fastcall EventBuddyPointResultManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t v10; // w1
  struct EventBuddyPointResultManager_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  struct EventBuddyPointResultManager_StaticFields *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  struct EventBuddyPointResultManager_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  struct EventBuddyPointResultManager_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  struct EventBuddyPointResultManager_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3

  if ( (byte_4AB9DEF & 1) == 0 )
  {
    sub_1BAB41C(&EventBuddyPointResultManager_TypeInfo, v1);
    sub_1BAB41C(&StringLiteral_3345/*"BuddyResultEventUI"*/, v4);
    sub_1BAB41C(&StringLiteral_3006/*"BEST_BUDDY_POINT_RESULT"*/, v5);
    sub_1BAB41C(&StringLiteral_3007/*"BEST_BUDDY_RESULT_REPLAY_DIALOG"*/, v6);
    sub_1BAB41C(&StringLiteral_17663/*"buddy_bg_at"*/, v7);
    sub_1BAB41C(&StringLiteral_6231/*"EventUI/Prefabs"*/, v8);
    sub_1BAB41C(&StringLiteral_17241/*"bit_buddy_result"*/, v9);
    byte_4AB9DEF = 1;
  }
  EventBuddyPointResultManager_TypeInfo->static_fields->EVENT_UI_ASSET_PATH = (struct System_String_o *)StringLiteral_6231/*"EventUI/Prefabs"*/;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)EventBuddyPointResultManager_TypeInfo->static_fields,
    StringLiteral_6231/*"EventUI/Prefabs"*/,
    v2,
    v3);
  v10 = StringLiteral_17241/*"bit_buddy_result"*/;
  static_fields = EventBuddyPointResultManager_TypeInfo->static_fields;
  static_fields->BUDDY_POINT_RESULT_PREFAB = (struct System_String_o *)StringLiteral_17241/*"bit_buddy_result"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->BUDDY_POINT_RESULT_PREFAB, v10, v12, v13);
  v14 = StringLiteral_17663/*"buddy_bg_at"*/;
  v15 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v15->BUDDY_RESULT_ATLAS = (struct System_String_o *)StringLiteral_17663/*"buddy_bg_at"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v15->BUDDY_RESULT_ATLAS, v14, v16, v17);
  v18 = StringLiteral_3006/*"BEST_BUDDY_POINT_RESULT"*/;
  v19 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v19->SAVEKEY_BEST_BUDDY_POINT_RESULT = (struct System_String_o *)StringLiteral_3006/*"BEST_BUDDY_POINT_RESULT"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v19->SAVEKEY_BEST_BUDDY_POINT_RESULT, v18, v20, v21);
  v22 = StringLiteral_3007/*"BEST_BUDDY_RESULT_REPLAY_DIALOG"*/;
  v23 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v23->SAVEKEY_BEST_BUDDY_RESULT_REPLAY_DIALOG = (struct System_String_o *)StringLiteral_3007/*"BEST_BUDDY_RESULT_REPLAY_DIALOG"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v23->SAVEKEY_BEST_BUDDY_RESULT_REPLAY_DIALOG, v22, v24, v25);
  v26 = StringLiteral_3345/*"BuddyResultEventUI"*/;
  v27 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v27->BUDDY_RESULT_UI_PREFAB = (struct System_String_o *)StringLiteral_3345/*"BuddyResultEventUI"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v27->BUDDY_RESULT_UI_PREFAB, v26, v28, v29);
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
  EventServantPointRankMaster_o *Master_object; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4AB9DEA & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&eventId);
    sub_1BAB41C(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v4);
    sub_1BAB41C(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v5);
    sub_1BAB41C(&DataManager_TypeInfo, v6);
    sub_1BAB41C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7);
    sub_1BAB41C(&NetworkManager_TypeInfo, v8);
    byte_4AB9DEA = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventServantPointRankMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Master_object )
    goto LABEL_21;
  if ( !EventServantPointRankMaster__IsEnableEvent(Master_object, eventId, 0LL) )
    return 0;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventServantPointRankMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
LABEL_21:
    sub_1BAB678(Master_object, v10);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          eventId,
          (const MethodInfo_3163DE4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  Master_object = (EventServantPointRankMaster_o *)entity;
  if ( !entity )
    goto LABEL_21;
  if ( !EventEntity__IsExchangePeriod((EventEntity_o *)entity, 0LL, 0LL) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v11 = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (EventServantPointRankMaster_o *)NetworkManager__get_UserId(0LL);
  if ( !v11 )
    goto LABEL_21;
  return UserEventServantPointMaster__IsAnyExist(
           (UserEventServantPointMaster_o *)v11,
           (int64_t)Master_object,
           eventId,
           0LL);
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
  if ( (byte_4AB9DEC & 1) == 0 )
  {
    this = (EventBuddyPointResultManager_o *)sub_1BAB41C(&EventBuddyPointResultManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4AB9DEC = 1;
  }
  if ( EventBuddyPointResultManager__CheckDisplayCondition(this, eventId, method)
    && EventBuddyPointResultManager__IsFirstTimeDisplayed(v4, eventId, v5) )
  {
    v7 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
    if ( !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
      v7 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
    }
    SaveKey = EventBuddyPointResultManager__GetSaveKey(v7, *((System_String_o **)v7[2].monitor + 4), eventId, v6);
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
  __int64 v4; // x4
  __int64 v7; // x1
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4AB9DEB & 1) == 0 )
  {
    sub_1BAB41C(&int_TypeInfo, keyBase);
    sub_1BAB41C(&StringLiteral_25141/*"{0}_{1}"*/, v7);
    byte_4AB9DEB = 1;
  }
  v10 = eventId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10, *(_QWORD *)&eventId, method, v4);
  return System_String__Format_62062500((System_String_o *)StringLiteral_25141/*"{0}_{1}"*/, (Il2CppObject *)keyBase, v8, 0LL);
}


BuddyResultReplayUIControl_o *__fastcall EventBuddyPointResultManager__InstantiateEventUIPrefab(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AssetData_o *eventUIAssetData; // x19
  EventBuddyPointResultManager_c *v8; // x0
  Il2CppObject *Object_object__48916712; // x19
  Il2CppObject *v11; // x0
  __int64 v12; // x1

  if ( (byte_4AB9DE1 & 1) == 0 )
  {
    sub_1BAB41C(&Method_AssetData_GetObject_GameObject____76450888, method);
    sub_1BAB41C(&EventBuddyPointResultManager_TypeInfo, v3);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_BuddyResultReplayUIControl___, v4);
    sub_1BAB41C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v6);
    byte_4AB9DE1 = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( !eventUIAssetData )
    return 0LL;
  v8 = EventBuddyPointResultManager_TypeInfo;
  if ( !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v8 = EventBuddyPointResultManager_TypeInfo;
  }
  Object_object__48916712 = AssetData__GetObject_object__48916712(
                              eventUIAssetData,
                              v8->static_fields->BUDDY_RESULT_UI_PREFAB,
                              (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_GameObject____76450888);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__48916712, 0LL, 0LL) )
    return 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__Instantiate_object_(
          Object_object__48916712,
          (const MethodInfo_2F483D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v11 )
    sub_1BAB678(0LL, v12);
  return (BuddyResultReplayUIControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)v11,
                                           (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_BuddyResultReplayUIControl___);
}


EventBuddyPointResultComponent_o *__fastcall EventBuddyPointResultManager__InstantiateResultPrefab(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AssetData_o *eventUIAssetData; // x19
  EventBuddyPointResultManager_c *v8; // x0
  Il2CppObject *Object_object__48916712; // x19
  Il2CppObject *v11; // x0
  __int64 v12; // x1

  if ( (byte_4AB9DE5 & 1) == 0 )
  {
    sub_1BAB41C(&Method_AssetData_GetObject_GameObject____76450888, method);
    sub_1BAB41C(&EventBuddyPointResultManager_TypeInfo, v3);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_EventBuddyPointResultComponent___, v4);
    sub_1BAB41C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v6);
    byte_4AB9DE5 = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( !eventUIAssetData )
    return 0LL;
  v8 = EventBuddyPointResultManager_TypeInfo;
  if ( !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v8 = EventBuddyPointResultManager_TypeInfo;
  }
  Object_object__48916712 = AssetData__GetObject_object__48916712(
                              eventUIAssetData,
                              v8->static_fields->BUDDY_POINT_RESULT_PREFAB,
                              (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_GameObject____76450888);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__48916712, 0LL, 0LL) )
    return 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__Instantiate_object_(
          Object_object__48916712,
          (const MethodInfo_2F483D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v11 )
    sub_1BAB678(0LL, v12);
  return (EventBuddyPointResultComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)v11,
                                               (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_EventBuddyPointResultComponent___);
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

  if ( (byte_4AB9DE9 & 1) == 0 )
  {
    sub_1BAB41C(&EventBuddyPointResultManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4AB9DE9 = 1;
  }
  v5 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  if ( !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v5 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  }
  SaveKey = EventBuddyPointResultManager__GetSaveKey(v5, *((System_String_o **)v5[2].monitor + 3), eventId, v3);
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
  __int64 v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  EventBuddyPointResultManager_c *v23; // x0
  Il2CppObject *EVENT_UI_ASSET_PATH; // x20
  Il2CppObject *v25; // x0
  System_String_o *v26; // x19
  AssetLoader_LoadEndDataHandler_o *v27; // x20
  int32_t v29; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4AB9DDF & 1) == 0 )
  {
    sub_1BAB41C(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1BAB41C(&EventBuddyPointResultManager_TypeInfo, v7);
    sub_1BAB41C(&int_TypeInfo, v8);
    sub_1BAB41C(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_1BAB41C(&Method_EventBuddyPointResultManager___c__DisplayClass14_0__LoadAssetData_b__0__, v10);
    sub_1BAB41C(&EventBuddyPointResultManager___c__DisplayClass14_0_TypeInfo, v11);
    sub_1BAB41C(&StringLiteral_25097/*"{0}/{1}"*/, v12);
    byte_4AB9DDF = 1;
  }
  v13 = sub_1BAB668(EventBuddyPointResultManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BAB678(v14, v15);
  *(_QWORD *)(v13 + 16) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 24) = callback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)callback, v18, v19);
  v23 = EventBuddyPointResultManager_TypeInfo;
  if ( !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v23 = EventBuddyPointResultManager_TypeInfo;
  }
  EVENT_UI_ASSET_PATH = (Il2CppObject *)v23->static_fields->EVENT_UI_ASSET_PATH;
  v29 = eventId;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v20, v21, v22);
  v26 = System_String__Format_62062500((System_String_o *)StringLiteral_25097/*"{0}/{1}"*/, EVENT_UI_ASSET_PATH, v25, 0LL);
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1BAB668(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)v13,
    Method_EventBuddyPointResultManager___c__DisplayClass14_0__LoadAssetData_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__loadAssetStorage(v26, v27, 1, 0LL);
}


UIAtlas_o *__fastcall EventBuddyPointResultManager__LoadAtlasFromAssetData(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  AssetData_o *eventUIAssetData; // x19
  EventBuddyPointResultManager_c *v7; // x0
  Il2CppObject *Object_object__48916712; // x19
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_4AB9DE4 & 1) == 0 )
  {
    sub_1BAB41C(&Method_AssetData_GetObject_GameObject____76450888, method);
    sub_1BAB41C(&EventBuddyPointResultManager_TypeInfo, v3);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v4);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v5);
    byte_4AB9DE4 = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( !eventUIAssetData )
    return 0LL;
  v7 = EventBuddyPointResultManager_TypeInfo;
  if ( !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v7 = EventBuddyPointResultManager_TypeInfo;
  }
  Object_object__48916712 = AssetData__GetObject_object__48916712(
                              eventUIAssetData,
                              v7->static_fields->BUDDY_RESULT_ATLAS,
                              (const MethodInfo_2EA68E8 *)Method_AssetData_GetObject_GameObject____76450888);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__48916712, 0LL, 0LL);
  if ( v9 )
    return 0LL;
  if ( !Object_object__48916712 )
    sub_1BAB678(v9, v10);
  return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Object_object__48916712,
                        (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
}


void __fastcall EventBuddyPointResultManager__OnClickReplayButton(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *uiControl; // x20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  BuddyResultReplayUIControl_o *v8; // x0

  if ( (byte_4AB9DE7 & 1) == 0 )
  {
    sub_1BAB41C(&Method_EventBuddyPointResultManager_OnClickReplayButton__, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    byte_4AB9DE7 = 1;
  }
  uiControl = (UnityEngine_Object_o *)this->fields.uiControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(uiControl, 0LL, 0LL) )
  {
    v5 = Method_EventBuddyPointResultManager_OnClickReplayButton__;
    if ( (*((_BYTE *)Method_EventBuddyPointResultManager_OnClickReplayButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BAB434(Method_EventBuddyPointResultManager_OnClickReplayButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BAB400(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v8 = this->fields.uiControl;
    if ( !v8 )
      sub_1BAB678(0LL, v7);
    BuddyResultReplayUIControl__OpenSelectDialog(v8, v7);
  }
}


void __fastcall EventBuddyPointResultManager__OnCloseReplayDialog(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  EventBuddyPointResultManager_o *v4; // x0
  System_String_o *SaveKey; // x0

  if ( (byte_4AB9DEE & 1) == 0 )
  {
    sub_1BAB41C(&EventBuddyPointResultManager_TypeInfo, method);
    byte_4AB9DEE = 1;
  }
  v4 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  if ( !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v4 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  }
  SaveKey = EventBuddyPointResultManager__GetSaveKey(
              v4,
              *((System_String_o **)v4[2].monitor + 4),
              this->fields.currentEventId,
              v2);
  UnityEngine_PlayerPrefs__SetInt(SaveKey, 1, 0LL);
}


void __fastcall EventBuddyPointResultManager__OnPlayEnd(EventBuddyPointResultManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4AB9DE3 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&AvalonSceneManager_TypeInfo, v3);
    sub_1BAB41C(&Method_EventBuddyPointResultManager__OnPlayEnd_b__18_0__, v4);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4AB9DE3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_EventBuddyPointResultManager__OnPlayEnd_b__18_0__, 0LL);
  if ( !v8 )
    sub_1BAB678(v11, v12);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, v10, 0LL);
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
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Action_o *onReplayStartCallback; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v16; // x8
  CommonUI_o *v17; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x21

  if ( (byte_4AB9DE8 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, *(_QWORD *)&id);
    sub_1BAB41C(&AvalonSceneManager_TypeInfo, v5);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BAB41C(&Method_EventBuddyPointResultManager___c__DisplayClass23_0__OnSelectPortraitImgCount_b__0__, v7);
    sub_1BAB41C(&EventBuddyPointResultManager___c__DisplayClass23_0_TypeInfo, v8);
    byte_4AB9DE8 = 1;
  }
  v9 = sub_1BAB668(EventBuddyPointResultManager___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 16) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_DWORD *)(v9 + 24) = id;
  onReplayStartCallback = this->fields.onReplayStartCallback;
  if ( onReplayStartCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onReplayStartCallback->fields.m_target)(
      onReplayStartCallback->fields.original_method_info,
      *(_QWORD *)&onReplayStartCallback->fields.extra_arg);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = AvalonSceneManager_TypeInfo;
  v17 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v16 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
  v19 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v9,
    Method_EventBuddyPointResultManager___c__DisplayClass23_0__OnSelectPortraitImgCount_b__0__,
    0LL);
  if ( !v17 )
LABEL_10:
    sub_1BAB678(v10, v11);
  CommonUI__maskFadeout(v17, 1, DEFAULT_FADE_TIME, v19, 0LL);
}


void __fastcall EventBuddyPointResultManager__OpenResultReplayDialog(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *uiControl; // x20
  BuddyResultReplayUIControl_o *v6; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4AB9DED & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_EventBuddyPointResultManager_OnCloseReplayDialog__, v3);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v4);
    byte_4AB9DED = 1;
  }
  uiControl = (UnityEngine_Object_o *)this->fields.uiControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(uiControl, 0LL, 0LL) )
  {
    v6 = this->fields.uiControl;
    v7 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_EventBuddyPointResultManager_OnCloseReplayDialog__, 0LL);
    if ( !v6 )
      sub_1BAB678(v8, v9);
    BuddyResultReplayUIControl__OpenReplayIntroDialog(v6, v7, v10);
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
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x1
  struct EventBuddyPointResultComponent_o *v21; // x0
  struct EventBuddyPointResultComponent_o **p_eventBuddyPointStageComponent; // x23
  int32_t v23; // w2
  int32_t v24; // w3
  UnityEngine_Object_o *eventBuddyPointStageComponent; // x24
  int32_t v26; // w2
  int32_t v27; // w3
  UnityEngine_Object_o *backgroundObj; // x22
  UIAtlas_o *v30; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  EventBuddyPointResultComponent_o *v32; // x23
  int32_t currentEventId; // w24
  System_Action_o *v34; // x25
  System_Action_o *v35; // x21
  const MethodInfo *v36; // x6

  if ( (byte_4AB9DE2 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, setupEndCallback);
    sub_1BAB41C(&Method_EventBuddyPointResultManager_OnPlayEnd__, v9);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v10);
    sub_1BAB41C(&Method_EventBuddyPointResultManager___c__DisplayClass17_0__PlayBestBuddyResult_b__0__, v11);
    sub_1BAB41C(&EventBuddyPointResultManager___c__DisplayClass17_0_TypeInfo, v12);
    byte_4AB9DE2 = 1;
  }
  v13 = sub_1BAB668(EventBuddyPointResultManager___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_19;
  *(_QWORD *)(v13 + 16) = setupEndCallback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)setupEndCallback, v16, v17);
  *(_QWORD *)(v13 + 24) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)this, v18, v19);
  if ( !this->fields.eventUIAssetData )
    return 0;
  v21 = EventBuddyPointResultManager__InstantiateResultPrefab(this, v20);
  this->fields.eventBuddyPointStageComponent = v21;
  p_eventBuddyPointStageComponent = &this->fields.eventBuddyPointStageComponent;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.eventBuddyPointStageComponent, (int32_t)v21, v23, v24);
  eventBuddyPointStageComponent = (UnityEngine_Object_o *)this->fields.eventBuddyPointStageComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(eventBuddyPointStageComponent, 0LL, 0LL) )
    return 0;
  this->fields.onPlayEndCallback = onPlayEndCallback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.onPlayEndCallback,
    (int32_t)onPlayEndCallback,
    v26,
    v27);
  backgroundObj = (UnityEngine_Object_o *)this->fields.backgroundObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backgroundObj, 0LL, 0LL) )
  {
    AtlasFromAssetData = this->fields.backgroundObj;
    if ( !AtlasFromAssetData )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(AtlasFromAssetData, 0, 0LL);
  }
  AtlasFromAssetData = (UnityEngine_GameObject_o *)EventBuddyPointResultManager__LoadAtlasFromAssetData(this, v15);
  if ( !this->fields.eventBuddyPointStageComponent )
    goto LABEL_19;
  v30 = (UIAtlas_o *)AtlasFromAssetData;
  AtlasFromAssetData = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)this->fields.eventBuddyPointStageComponent,
                         0LL);
  if ( !AtlasFromAssetData )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(AtlasFromAssetData, 0, 0LL);
  AtlasFromAssetData = (UnityEngine_GameObject_o *)*p_eventBuddyPointStageComponent;
  if ( !*p_eventBuddyPointStageComponent )
    goto LABEL_19;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)AtlasFromAssetData, 0LL);
  GameObjectExtensions__SafeSetParent(gameObject, (UnityEngine_Component_o *)this, 0LL);
  v32 = this->fields.eventBuddyPointStageComponent;
  currentEventId = this->fields.currentEventId;
  v34 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v13,
    Method_EventBuddyPointResultManager___c__DisplayClass17_0__PlayBestBuddyResult_b__0__,
    0LL);
  v35 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)this, Method_EventBuddyPointResultManager_OnPlayEnd__, 0LL);
  if ( !v32 )
LABEL_19:
    sub_1BAB678(AtlasFromAssetData, v15);
  EventBuddyPointResultComponent__Setup(v32, currentEventId, v30, v34, v35, selectLimitCount, v36);
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
  _BOOL8 AssetData; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x23
  int32_t v15; // w2
  int32_t v16; // w3
  System_Action_o *v17; // x21
  const MethodInfo *v18; // x3

  if ( (byte_4AB9DDE & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1BAB41C(&Method_EventBuddyPointResultManager___c__DisplayClass13_0__Setup_b__0__, v7);
    sub_1BAB41C(&EventBuddyPointResultManager___c__DisplayClass13_0_TypeInfo, v8);
    byte_4AB9DDE = 1;
  }
  v9 = sub_1BAB668(EventBuddyPointResultManager___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_7;
  *(_QWORD *)(v9 + 16) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = setupEndCallback;
  v14 = v9 + 24;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)setupEndCallback, v15, v16);
  this->fields.currentEventId = eventId;
  v17 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v9,
    Method_EventBuddyPointResultManager___c__DisplayClass13_0__Setup_b__0__,
    0LL);
  AssetData = EventBuddyPointResultManager__LoadAssetData(this, eventId, v17, v18);
  if ( AssetData )
    return;
  if ( !*(_QWORD *)v14 )
LABEL_7:
    sub_1BAB678(AssetData, v11);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v14 + 64LL),
    *(_QWORD *)(*(_QWORD *)v14 + 40LL));
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
  bool v7; // w21
  UnityEngine_Component_o **p_uiControl; // x22
  UnityEngine_Object_o *uiControl; // x23
  const MethodInfo *v10; // x1
  BuddyResultReplayUIControl_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_Object_o *v14; // x23
  __int64 v15; // x1
  UnityEngine_Component_o *v16; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v18; // x22
  BuddyResultReplayUIControl_o *v19; // x21
  System_Action_int__o *v20; // x22
  const MethodInfo *v21; // x3

  v4 = this;
  if ( (byte_4AB9DE0 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_int__TypeInfo, *(_QWORD *)&eventId);
    sub_1BAB41C(&Method_EventBuddyPointResultManager_OnSelectPortraitImgCount__, v5);
    this = (EventBuddyPointResultManager_o *)sub_1BAB41C(&UnityEngine_Object_TypeInfo, v6);
    byte_4AB9DE0 = 1;
  }
  v7 = EventBuddyPointResultManager__CheckDisplayCondition(this, eventId, method);
  if ( v7 )
  {
    p_uiControl = (UnityEngine_Component_o **)&v4->fields.uiControl;
    uiControl = (UnityEngine_Object_o *)v4->fields.uiControl;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(uiControl, 0LL, 0LL) )
    {
      v11 = EventBuddyPointResultManager__InstantiateEventUIPrefab(v4, v10);
      v4->fields.uiControl = v11;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v4->fields.uiControl, (int32_t)v11, v12, v13);
      v14 = (UnityEngine_Object_o *)v4->fields.uiControl;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
      {
        v16 = *p_uiControl;
        if ( !*p_uiControl )
          goto LABEL_21;
        gameObject = UnityEngine_Component__get_gameObject(v16, 0LL);
        GameObjectExtensions__SafeSetParent(gameObject, (UnityEngine_Component_o *)v4, 0LL);
      }
    }
  }
  v18 = (UnityEngine_Object_o *)v4->fields.uiControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
  {
    v16 = (UnityEngine_Component_o *)v4->fields.uiControl;
    if ( !v16 )
      goto LABEL_21;
    v16 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( !v16 )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16, v7, 0LL);
    if ( v7 )
    {
      v19 = v4->fields.uiControl;
      v20 = (System_Action_int__o *)sub_1BAB668(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v20,
        (Il2CppObject *)v4,
        Method_EventBuddyPointResultManager_OnSelectPortraitImgCount__,
        0LL);
      if ( v19 )
      {
        BuddyResultReplayUIControl__Setup(v19, eventId, v20, v21);
        return;
      }
LABEL_21:
      sub_1BAB678(v16, v15);
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
  const MethodInfo *v19; // x2
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x1

  v10 = this;
  if ( (byte_4AB9DE6 & 1) == 0 )
  {
    sub_1BAB41C(&EventDelegate_Callback_TypeInfo, *(_QWORD *)&eventId);
    sub_1BAB41C(&Method_EventBuddyPointResultManager_OnClickReplayButton__, v11);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v12);
    this = (EventBuddyPointResultManager_o *)sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    byte_4AB9DE6 = 1;
  }
  v15 = EventBuddyPointResultManager__CheckDisplayCondition(this, eventId, (const MethodInfo *)replayButton)
     && EventBuddyPointResultManager__IsFirstTimeDisplayed(v10, eventId, v14);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)replayButton,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !replayButton )
      goto LABEL_17;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)replayButton, 0LL);
    if ( !gameObject )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(gameObject, v15, 0LL);
    if ( v15 )
    {
      v18 = (EventDelegate_Callback_o *)sub_1BAB668(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v18,
        (Il2CppObject *)v10,
        (intptr_t)Method_EventBuddyPointResultManager_OnClickReplayButton__,
        0LL);
      BuddyPointResultReplayButton__Setup(replayButton, v18, v19);
      v10->fields.onReplayStartCallback = onRePlayStartCallback;
      sub_1BAB3C0(
        (ServantStatusBattleListViewItem_o *)&v10->fields.onReplayStartCallback,
        (int32_t)onRePlayStartCallback,
        v20,
        v21);
      v10->fields.onPlayEndCallback = onPlayEndCallback;
      sub_1BAB3C0(
        (ServantStatusBattleListViewItem_o *)&v10->fields.onPlayEndCallback,
        (int32_t)onPlayEndCallback,
        v22,
        v23);
      if ( EventBuddyPointResultManager__CheckReplayIntroDialogDisplayCondition(v10, eventId, v24) )
      {
        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( gameObject )
        {
          if ( !CommonUI__IsActive_TutorialBigDialog((CommonUI_o *)gameObject, 0LL) )
            EventBuddyPointResultManager__OpenResultReplayDialog(v10, v25);
          return;
        }
LABEL_17:
        sub_1BAB678(gameObject, v17);
      }
    }
  }
}


void __fastcall EventBuddyPointResultManager___OnPlayEnd_b__18_0(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *backgroundObj; // x20
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  UnityEngine_GameObject_o *v7; // x0
  EventBuddyPointResultManager_o *v8; // x0
  System_String_o *SaveKey; // x0
  struct System_Action_o *onPlayEndCallback; // x8
  UnityEngine_Object_o *eventBuddyPointStageComponent; // x20
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v13; // x19

  if ( (byte_4AB9DF0 & 1) == 0 )
  {
    sub_1BAB41C(&EventBuddyPointResultManager_TypeInfo, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    byte_4AB9DF0 = 1;
  }
  backgroundObj = (UnityEngine_Object_o *)this->fields.backgroundObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backgroundObj, 0LL, 0LL) )
  {
    v7 = this->fields.backgroundObj;
    if ( !v7 )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(v7, 1, 0LL);
  }
  v8 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  if ( !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v8 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  }
  SaveKey = EventBuddyPointResultManager__GetSaveKey(
              v8,
              *((System_String_o **)v8[2].monitor + 3),
              this->fields.currentEventId,
              v6);
  UnityEngine_PlayerPrefs__SetInt(SaveKey, 1, 0LL);
  onPlayEndCallback = this->fields.onPlayEndCallback;
  if ( onPlayEndCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onPlayEndCallback->fields.m_target)(
      onPlayEndCallback->fields.original_method_info,
      *(_QWORD *)&onPlayEndCallback->fields.extra_arg);
  eventBuddyPointStageComponent = (UnityEngine_Object_o *)this->fields.eventBuddyPointStageComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventBuddyPointStageComponent, 0LL, 0LL) )
  {
    v7 = (UnityEngine_GameObject_o *)this->fields.eventBuddyPointStageComponent;
    if ( !v7 )
      goto LABEL_24;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    {
      v7 = (UnityEngine_GameObject_o *)this->fields.eventBuddyPointStageComponent;
      if ( v7 )
      {
        v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69800620(v13, 0LL);
        return;
      }
LABEL_24:
      sub_1BAB678(v7, v5);
    }
  }
}


void __fastcall EventBuddyPointResultManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4AB9DF1 & 1) == 0 )
  {
    sub_1BAB41C(&EventBuddyPointResultManager___c_TypeInfo, v1);
    byte_4AB9DF1 = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(EventBuddyPointResultManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventBuddyPointResultManager___c_TypeInfo->static_fields->__9 = (struct EventBuddyPointResultManager___c_o *)v2;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)EventBuddyPointResultManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  AvalonSceneManager_c *v8; // x8
  CommonUI_o *v9; // x19
  EventBuddyPointResultManager___c_c *v10; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__23_2; // x20
  Il2CppObject *v13; // x21
  struct EventBuddyPointResultManager___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4AB9DF2 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&AvalonSceneManager_TypeInfo, v2);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BAB41C(&Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_2__, v4);
    sub_1BAB41C(&EventBuddyPointResultManager___c_TypeInfo, v5);
    byte_4AB9DF2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  v10 = EventBuddyPointResultManager___c_TypeInfo;
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  if ( !EventBuddyPointResultManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager___c_TypeInfo);
    v10 = EventBuddyPointResultManager___c_TypeInfo;
  }
  _9__23_2 = v10->static_fields->__9__23_2;
  if ( !_9__23_2 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = EventBuddyPointResultManager___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__23_2 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(
      _9__23_2,
      v13,
      Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_2__,
      0LL);
    static_fields = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    static_fields->__9__23_2 = _9__23_2;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__23_2, (int32_t)_9__23_2, v15, v16);
  }
  if ( !v9 )
    sub_1BAB678(v10, v7);
  CommonUI__maskFadein(v9, DEFAULT_FADE_TIME, _9__23_2, 0LL);
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
  const MethodInfo *v2; // x2
  struct EventBuddyPointResultManager_o *_4__this; // x0
  struct System_Action_o *setupEndCallback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventBuddyPointResultManager__SetupEventUI(_4__this, _4__this->fields.currentEventId, v2),
        (setupEndCallback = this->fields.setupEndCallback) == 0LL) )
  {
    sub_1BAB678(_4__this, method);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))setupEndCallback->fields.m_target)(
    setupEndCallback->fields.original_method_info,
    *(_QWORD *)&setupEndCallback->fields.extra_arg);
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
  int32_t v3; // w3
  struct EventBuddyPointResultManager_o *_4__this; // x0
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.eventUIAssetData = prefabData,
        sub_1BAB3C0(
          (ServantStatusBattleListViewItem_o *)&_4__this->fields.eventUIAssetData,
          (int32_t)prefabData,
          (int32_t)method,
          v3),
        (callback = this->fields.callback) == 0LL) )
  {
    sub_1BAB678(_4__this, prefabData);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
    callback->fields.original_method_info,
    *(_QWORD *)&callback->fields.extra_arg);
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
  struct System_Action_o *setupEndCallback; // x8

  if ( this->fields.setupEndCallback )
  {
    _4__this = this->fields.__4__this;
    v3 = this;
    if ( !_4__this
      || (this = (EventBuddyPointResultManager___c__DisplayClass17_0_o *)_4__this->fields.eventBuddyPointStageComponent) == 0LL
      || (this = (EventBuddyPointResultManager___c__DisplayClass17_0_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL),
          (setupEndCallback = v3->fields.setupEndCallback) == 0LL) )
    {
      sub_1BAB678(this, method);
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))setupEndCallback->fields.m_target)(
      setupEndCallback->fields.original_method_info,
      *(_QWORD *)&setupEndCallback->fields.extra_arg);
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
  const MethodInfo *v2; // x4
  __int64 v4; // x1
  __int64 v5; // x1
  EventBuddyPointResultManager___c_c *v6; // x0
  EventBuddyPointResultManager_o *_4__this; // x20
  System_Action_o *_9__23_1; // x21
  Il2CppObject *v9; // x22
  struct EventBuddyPointResultManager___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct EventBuddyPointResultManager_o *v13; // x8

  if ( (byte_4AB9DF3 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_1__, v4);
    sub_1BAB41C(&EventBuddyPointResultManager___c_TypeInfo, v5);
    byte_4AB9DF3 = 1;
  }
  v6 = EventBuddyPointResultManager___c_TypeInfo;
  _4__this = this->fields.__4__this;
  if ( !EventBuddyPointResultManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager___c_TypeInfo);
    v6 = EventBuddyPointResultManager___c_TypeInfo;
  }
  _9__23_1 = v6->static_fields->__9__23_1;
  if ( !_9__23_1 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = EventBuddyPointResultManager___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__23_1 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(_9__23_1, v9, Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_1__, 0LL);
    static_fields = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    static_fields->__9__23_1 = _9__23_1;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__23_1, (int32_t)_9__23_1, v11, v12);
  }
  v13 = this->fields.__4__this;
  if ( !v13 || !_4__this )
    sub_1BAB678(v6, method);
  EventBuddyPointResultManager__PlayBestBuddyResult(
    _4__this,
    _9__23_1,
    v13->fields.onPlayEndCallback,
    this->fields.id,
    v2);
}