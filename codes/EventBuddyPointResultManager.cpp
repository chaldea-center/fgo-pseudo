void __fastcall EventBuddyPointResultManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct EventBuddyPointResultManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  struct EventBuddyPointResultManager_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct EventBuddyPointResultManager_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  struct EventBuddyPointResultManager_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  struct EventBuddyPointResultManager_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A5F1B1 & 1) == 0 )
  {
    sub_1B885B0(&EventBuddyPointResultManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3348/*"BuddyResultEventUI"*/);
    sub_1B885B0(&StringLiteral_3010/*"BEST_BUDDY_POINT_RESULT"*/);
    sub_1B885B0(&StringLiteral_3011/*"BEST_BUDDY_RESULT_REPLAY_DIALOG"*/);
    sub_1B885B0(&StringLiteral_17632/*"buddy_bg_at"*/);
    sub_1B885B0(&StringLiteral_6227/*"EventUI/Prefabs"*/);
    sub_1B885B0(&StringLiteral_17208/*"bit_buddy_result"*/);
    byte_4A5F1B1 = 1;
  }
  EventBuddyPointResultManager_TypeInfo->static_fields->EVENT_UI_ASSET_PATH = (struct System_String_o *)StringLiteral_6227/*"EventUI/Prefabs"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventBuddyPointResultManager_TypeInfo->static_fields,
    StringLiteral_6227/*"EventUI/Prefabs"*/,
    v1,
    v2);
  v3 = StringLiteral_17208/*"bit_buddy_result"*/;
  static_fields = EventBuddyPointResultManager_TypeInfo->static_fields;
  static_fields->BUDDY_POINT_RESULT_PREFAB = (struct System_String_o *)StringLiteral_17208/*"bit_buddy_result"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->BUDDY_POINT_RESULT_PREFAB, v3, v5, v6);
  v7 = StringLiteral_17632/*"buddy_bg_at"*/;
  v8 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v8->BUDDY_RESULT_ATLAS = (struct System_String_o *)StringLiteral_17632/*"buddy_bg_at"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->BUDDY_RESULT_ATLAS, v7, v9, v10);
  v11 = StringLiteral_3010/*"BEST_BUDDY_POINT_RESULT"*/;
  v12 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v12->SAVEKEY_BEST_BUDDY_POINT_RESULT = (struct System_String_o *)StringLiteral_3010/*"BEST_BUDDY_POINT_RESULT"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->SAVEKEY_BEST_BUDDY_POINT_RESULT, v11, v13, v14);
  v15 = StringLiteral_3011/*"BEST_BUDDY_RESULT_REPLAY_DIALOG"*/;
  v16 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v16->SAVEKEY_BEST_BUDDY_RESULT_REPLAY_DIALOG = (struct System_String_o *)StringLiteral_3011/*"BEST_BUDDY_RESULT_REPLAY_DIALOG"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->SAVEKEY_BEST_BUDDY_RESULT_REPLAY_DIALOG, v15, v17, v18);
  v19 = StringLiteral_3348/*"BuddyResultEventUI"*/;
  v20 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v20->BUDDY_RESULT_UI_PREFAB = (struct System_String_o *)StringLiteral_3348/*"BuddyResultEventUI"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->BUDDY_RESULT_UI_PREFAB, v19, v21, v22);
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
  EventServantPointRankMaster_o *Master_object; // x0
  __int64 v5; // x1
  Il2CppObject *v6; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5F1AC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5F1AC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventServantPointRankMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Master_object )
    goto LABEL_21;
  if ( !EventServantPointRankMaster__IsEnableEvent(Master_object, eventId, 0LL) )
    return 0;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventServantPointRankMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
LABEL_21:
    sub_1B8880C(Master_object, v5);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          eventId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  Master_object = (EventServantPointRankMaster_o *)entity;
  if ( !entity )
    goto LABEL_21;
  if ( !EventEntity__IsExchangePeriod((EventEntity_o *)entity, 0LL, 0LL) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v6 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (EventServantPointRankMaster_o *)NetworkManager__get_UserId(0LL);
  if ( !v6 )
    goto LABEL_21;
  return UserEventServantPointMaster__IsAnyExist(
           (UserEventServantPointMaster_o *)v6,
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
  if ( (byte_4A5F1AE & 1) == 0 )
  {
    this = (EventBuddyPointResultManager_o *)sub_1B885B0(&EventBuddyPointResultManager_TypeInfo);
    byte_4A5F1AE = 1;
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
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5F1AD & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_25098/*"{0}_{1}"*/);
    byte_4A5F1AD = 1;
  }
  v9 = eventId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, *(_QWORD *)&eventId, method, v4);
  return System_String__Format_61721404((System_String_o *)StringLiteral_25098/*"{0}_{1}"*/, (Il2CppObject *)keyBase, v7, 0LL);
}


BuddyResultReplayUIControl_o *__fastcall EventBuddyPointResultManager__InstantiateEventUIPrefab(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  AssetData_o *eventUIAssetData; // x19
  EventBuddyPointResultManager_c *v4; // x0
  Il2CppObject *Object_object__48635516; // x19
  Il2CppObject *v7; // x0
  __int64 v8; // x1

  if ( (byte_4A5F1A3 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&EventBuddyPointResultManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BuddyResultReplayUIControl___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F1A3 = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( !eventUIAssetData )
    return 0LL;
  v4 = EventBuddyPointResultManager_TypeInfo;
  if ( !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v4 = EventBuddyPointResultManager_TypeInfo;
  }
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              eventUIAssetData,
                              v4->static_fields->BUDDY_RESULT_UI_PREFAB,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__48635516, 0LL, 0LL) )
    return 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object_(
         Object_object__48635516,
         (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v7 )
    sub_1B8880C(0LL, v8);
  return (BuddyResultReplayUIControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)v7,
                                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BuddyResultReplayUIControl___);
}


EventBuddyPointResultComponent_o *__fastcall EventBuddyPointResultManager__InstantiateResultPrefab(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  AssetData_o *eventUIAssetData; // x19
  EventBuddyPointResultManager_c *v4; // x0
  Il2CppObject *Object_object__48635516; // x19
  Il2CppObject *v7; // x0
  __int64 v8; // x1

  if ( (byte_4A5F1A7 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&EventBuddyPointResultManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventBuddyPointResultComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F1A7 = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( !eventUIAssetData )
    return 0LL;
  v4 = EventBuddyPointResultManager_TypeInfo;
  if ( !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v4 = EventBuddyPointResultManager_TypeInfo;
  }
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              eventUIAssetData,
                              v4->static_fields->BUDDY_POINT_RESULT_PREFAB,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__48635516, 0LL, 0LL) )
    return 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object_(
         Object_object__48635516,
         (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v7 )
    sub_1B8880C(0LL, v8);
  return (EventBuddyPointResultComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)v7,
                                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventBuddyPointResultComponent___);
}


bool __fastcall EventBuddyPointResultManager__IsFirstTimeDisplayed(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EventBuddyPointResultManager_o *v5; // x0
  System_String_o *SaveKey; // x0

  if ( (byte_4A5F1AB & 1) == 0 )
  {
    sub_1B885B0(&EventBuddyPointResultManager_TypeInfo);
    byte_4A5F1AB = 1;
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


bool __fastcall EventBuddyPointResultManager__LoadAssetData(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  EventBuddyPointResultManager_c *v17; // x0
  Il2CppObject *EVENT_UI_ASSET_PATH; // x20
  Il2CppObject *v19; // x0
  System_String_o *v20; // x19
  AssetLoader_LoadEndDataHandler_o *v21; // x20
  int32_t v23; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A5F1A1 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&EventBuddyPointResultManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_EventBuddyPointResultManager___c__DisplayClass14_0__LoadAssetData_b__0__);
    sub_1B885B0(&EventBuddyPointResultManager___c__DisplayClass14_0_TypeInfo);
    sub_1B885B0(&StringLiteral_25054/*"{0}/{1}"*/);
    byte_4A5F1A1 = 1;
  }
  v7 = sub_1B887FC(EventBuddyPointResultManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)callback, v12, v13);
  v17 = EventBuddyPointResultManager_TypeInfo;
  if ( !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v17 = EventBuddyPointResultManager_TypeInfo;
  }
  EVENT_UI_ASSET_PATH = (Il2CppObject *)v17->static_fields->EVENT_UI_ASSET_PATH;
  v23 = eventId;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v14, v15, v16);
  v20 = System_String__Format_61721404((System_String_o *)StringLiteral_25054/*"{0}/{1}"*/, EVENT_UI_ASSET_PATH, v19, 0LL);
  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v21,
    (Il2CppObject *)v7,
    Method_EventBuddyPointResultManager___c__DisplayClass14_0__LoadAssetData_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__loadAssetStorage(v20, v21, 1, 0LL);
}


UIAtlas_o *__fastcall EventBuddyPointResultManager__LoadAtlasFromAssetData(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  AssetData_o *eventUIAssetData; // x19
  EventBuddyPointResultManager_c *v4; // x0
  Il2CppObject *Object_object__48635516; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A5F1A6 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&EventBuddyPointResultManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F1A6 = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( !eventUIAssetData )
    return 0LL;
  v4 = EventBuddyPointResultManager_TypeInfo;
  if ( !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v4 = EventBuddyPointResultManager_TypeInfo;
  }
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              eventUIAssetData,
                              v4->static_fields->BUDDY_RESULT_ATLAS,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__48635516, 0LL, 0LL);
  if ( v6 )
    return 0LL;
  if ( !Object_object__48635516 )
    sub_1B8880C(v6, v7);
  return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Object_object__48635516,
                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
}


void __fastcall EventBuddyPointResultManager__OnClickReplayButton(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *uiControl; // x20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  BuddyResultReplayUIControl_o *v7; // x0

  if ( (byte_4A5F1A9 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventBuddyPointResultManager_OnClickReplayButton__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F1A9 = 1;
  }
  uiControl = (UnityEngine_Object_o *)this->fields.uiControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(uiControl, 0LL, 0LL) )
  {
    v4 = Method_EventBuddyPointResultManager_OnClickReplayButton__;
    if ( (*((_BYTE *)Method_EventBuddyPointResultManager_OnClickReplayButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_EventBuddyPointResultManager_OnClickReplayButton__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    v7 = this->fields.uiControl;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
    BuddyResultReplayUIControl__OpenSelectDialog(v7, v6);
  }
}


void __fastcall EventBuddyPointResultManager__OnCloseReplayDialog(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  EventBuddyPointResultManager_o *v4; // x0
  System_String_o *SaveKey; // x0

  if ( (byte_4A5F1B0 & 1) == 0 )
  {
    sub_1B885B0(&EventBuddyPointResultManager_TypeInfo);
    byte_4A5F1B0 = 1;
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
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A5F1A5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_EventBuddyPointResultManager__OnPlayEnd_b__18_0__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5F1A5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EventBuddyPointResultManager__OnPlayEnd_b__18_0__, 0LL);
  if ( !v5 )
    sub_1B8880C(v8, v9);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0LL);
}


void __fastcall EventBuddyPointResultManager__OnSelectPortraitImgCount(
        EventBuddyPointResultManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Action_o *onReplayStartCallback; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v12; // x8
  CommonUI_o *v13; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v15; // x21

  if ( (byte_4A5F1AA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventBuddyPointResultManager___c__DisplayClass23_0__OnSelectPortraitImgCount_b__0__);
    sub_1B885B0(&EventBuddyPointResultManager___c__DisplayClass23_0_TypeInfo);
    byte_4A5F1AA = 1;
  }
  v5 = sub_1B887FC(EventBuddyPointResultManager___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 24) = id;
  onReplayStartCallback = this->fields.onReplayStartCallback;
  if ( onReplayStartCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onReplayStartCallback->fields.m_target)(
      onReplayStartCallback->fields.original_method_info,
      *(_QWORD *)&onReplayStartCallback->fields.extra_arg);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = AvalonSceneManager_TypeInfo;
  v13 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v12 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
  v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_EventBuddyPointResultManager___c__DisplayClass23_0__OnSelectPortraitImgCount_b__0__,
    0LL);
  if ( !v13 )
LABEL_10:
    sub_1B8880C(v6, v7);
  CommonUI__maskFadeout(v13, 1, DEFAULT_FADE_TIME, v15, 0LL);
}


void __fastcall EventBuddyPointResultManager__OpenResultReplayDialog(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *uiControl; // x20
  BuddyResultReplayUIControl_o *v4; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4A5F1AF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventBuddyPointResultManager_OnCloseReplayDialog__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F1AF = 1;
  }
  uiControl = (UnityEngine_Object_o *)this->fields.uiControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(uiControl, 0LL, 0LL) )
  {
    v4 = this->fields.uiControl;
    v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_EventBuddyPointResultManager_OnCloseReplayDialog__, 0LL);
    if ( !v4 )
      sub_1B8880C(v6, v7);
    BuddyResultReplayUIControl__OpenReplayIntroDialog(v4, v5, v8);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x1
  struct EventBuddyPointResultComponent_o *v17; // x0
  struct EventBuddyPointResultComponent_o **p_eventBuddyPointStageComponent; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  UnityEngine_Object_o *eventBuddyPointStageComponent; // x24
  int32_t v22; // w2
  int32_t v23; // w3
  UnityEngine_Object_o *backgroundObj; // x22
  UIAtlas_o *v26; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  EventBuddyPointResultComponent_o *v28; // x23
  int32_t currentEventId; // w24
  System_Action_o *v30; // x25
  System_Action_o *v31; // x21
  const MethodInfo *v32; // x6

  if ( (byte_4A5F1A4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventBuddyPointResultManager_OnPlayEnd__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_EventBuddyPointResultManager___c__DisplayClass17_0__PlayBestBuddyResult_b__0__);
    sub_1B885B0(&EventBuddyPointResultManager___c__DisplayClass17_0_TypeInfo);
    byte_4A5F1A4 = 1;
  }
  v9 = sub_1B887FC(EventBuddyPointResultManager___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_19;
  *(_QWORD *)(v9 + 16) = setupEndCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)setupEndCallback, v12, v13);
  *(_QWORD *)(v9 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v14, v15);
  if ( !this->fields.eventUIAssetData )
    return 0;
  v17 = EventBuddyPointResultManager__InstantiateResultPrefab(this, v16);
  this->fields.eventBuddyPointStageComponent = v17;
  p_eventBuddyPointStageComponent = &this->fields.eventBuddyPointStageComponent;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventBuddyPointStageComponent, (int32_t)v17, v19, v20);
  eventBuddyPointStageComponent = (UnityEngine_Object_o *)this->fields.eventBuddyPointStageComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(eventBuddyPointStageComponent, 0LL, 0LL) )
    return 0;
  this->fields.onPlayEndCallback = onPlayEndCallback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.onPlayEndCallback,
    (int32_t)onPlayEndCallback,
    v22,
    v23);
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
  AtlasFromAssetData = (UnityEngine_GameObject_o *)EventBuddyPointResultManager__LoadAtlasFromAssetData(this, v11);
  if ( !this->fields.eventBuddyPointStageComponent )
    goto LABEL_19;
  v26 = (UIAtlas_o *)AtlasFromAssetData;
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
  v28 = this->fields.eventBuddyPointStageComponent;
  currentEventId = this->fields.currentEventId;
  v30 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v9,
    Method_EventBuddyPointResultManager___c__DisplayClass17_0__PlayBestBuddyResult_b__0__,
    0LL);
  v31 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_EventBuddyPointResultManager_OnPlayEnd__, 0LL);
  if ( !v28 )
LABEL_19:
    sub_1B8880C(AtlasFromAssetData, v11);
  EventBuddyPointResultComponent__Setup(v28, currentEventId, v26, v30, v31, selectLimitCount, v32);
  return 1;
}


void __fastcall EventBuddyPointResultManager__Setup(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        System_Action_o *setupEndCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  _BOOL8 AssetData; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x3

  if ( (byte_4A5F1A0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventBuddyPointResultManager___c__DisplayClass13_0__Setup_b__0__);
    sub_1B885B0(&EventBuddyPointResultManager___c__DisplayClass13_0_TypeInfo);
    byte_4A5F1A0 = 1;
  }
  v7 = sub_1B887FC(EventBuddyPointResultManager___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_7;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = setupEndCallback;
  v12 = v7 + 24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)setupEndCallback, v13, v14);
  this->fields.currentEventId = eventId;
  v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v7,
    Method_EventBuddyPointResultManager___c__DisplayClass13_0__Setup_b__0__,
    0LL);
  AssetData = EventBuddyPointResultManager__LoadAssetData(this, eventId, v15, v16);
  if ( AssetData )
    return;
  if ( !*(_QWORD *)v12 )
LABEL_7:
    sub_1B8880C(AssetData, v9);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v12 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v12 + 64LL),
    *(_QWORD *)(*(_QWORD *)v12 + 40LL));
}


void __fastcall EventBuddyPointResultManager__SetupEventUI(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventBuddyPointResultManager_o *v4; // x20
  bool v5; // w21
  UnityEngine_Component_o **p_uiControl; // x22
  UnityEngine_Object_o *uiControl; // x23
  const MethodInfo *v8; // x1
  BuddyResultReplayUIControl_o *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_Object_o *v12; // x23
  __int64 v13; // x1
  UnityEngine_Component_o *v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v16; // x22
  BuddyResultReplayUIControl_o *v17; // x21
  System_Action_int__o *v18; // x22
  const MethodInfo *v19; // x3

  v4 = this;
  if ( (byte_4A5F1A2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&Method_EventBuddyPointResultManager_OnSelectPortraitImgCount__);
    this = (EventBuddyPointResultManager_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F1A2 = 1;
  }
  v5 = EventBuddyPointResultManager__CheckDisplayCondition(this, eventId, method);
  if ( v5 )
  {
    p_uiControl = (UnityEngine_Component_o **)&v4->fields.uiControl;
    uiControl = (UnityEngine_Object_o *)v4->fields.uiControl;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(uiControl, 0LL, 0LL) )
    {
      v9 = EventBuddyPointResultManager__InstantiateEventUIPrefab(v4, v8);
      v4->fields.uiControl = v9;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.uiControl, (int32_t)v9, v10, v11);
      v12 = (UnityEngine_Object_o *)v4->fields.uiControl;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
      {
        v14 = *p_uiControl;
        if ( !*p_uiControl )
          goto LABEL_21;
        gameObject = UnityEngine_Component__get_gameObject(v14, 0LL);
        GameObjectExtensions__SafeSetParent(gameObject, (UnityEngine_Component_o *)v4, 0LL);
      }
    }
  }
  v16 = (UnityEngine_Object_o *)v4->fields.uiControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
  {
    v14 = (UnityEngine_Component_o *)v4->fields.uiControl;
    if ( !v14 )
      goto LABEL_21;
    v14 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( !v14 )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v14, v5, 0LL);
    if ( v5 )
    {
      v17 = v4->fields.uiControl;
      v18 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v18,
        (Il2CppObject *)v4,
        Method_EventBuddyPointResultManager_OnSelectPortraitImgCount__,
        0LL);
      if ( v17 )
      {
        BuddyResultReplayUIControl__Setup(v17, eventId, v18, v19);
        return;
      }
LABEL_21:
      sub_1B8880C(v14, v13);
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
  const MethodInfo *v16; // x2
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1

  v10 = this;
  if ( (byte_4A5F1A8 & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&Method_EventBuddyPointResultManager_OnClickReplayButton__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (EventBuddyPointResultManager_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5F1A8 = 1;
  }
  v12 = EventBuddyPointResultManager__CheckDisplayCondition(this, eventId, (const MethodInfo *)replayButton)
     && EventBuddyPointResultManager__IsFirstTimeDisplayed(v10, eventId, v11);
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
    UnityEngine_GameObject__SetActive(gameObject, v12, 0LL);
    if ( v12 )
    {
      v15 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v15,
        (Il2CppObject *)v10,
        (intptr_t)Method_EventBuddyPointResultManager_OnClickReplayButton__,
        0LL);
      BuddyPointResultReplayButton__Setup(replayButton, v15, v16);
      v10->fields.onReplayStartCallback = onRePlayStartCallback;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&v10->fields.onReplayStartCallback,
        (int32_t)onRePlayStartCallback,
        v17,
        v18);
      v10->fields.onPlayEndCallback = onPlayEndCallback;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&v10->fields.onPlayEndCallback,
        (int32_t)onPlayEndCallback,
        v19,
        v20);
      if ( EventBuddyPointResultManager__CheckReplayIntroDialogDisplayCondition(v10, eventId, v21) )
      {
        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( gameObject )
        {
          if ( !CommonUI__IsActive_TutorialBigDialog((CommonUI_o *)gameObject, 0LL) )
            EventBuddyPointResultManager__OpenResultReplayDialog(v10, v22);
          return;
        }
LABEL_17:
        sub_1B8880C(gameObject, v14);
      }
    }
  }
}


void __fastcall EventBuddyPointResultManager___OnPlayEnd_b__18_0(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *backgroundObj; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  UnityEngine_GameObject_o *v6; // x0
  EventBuddyPointResultManager_o *v7; // x0
  System_String_o *SaveKey; // x0
  struct System_Action_o *onPlayEndCallback; // x8
  UnityEngine_Object_o *eventBuddyPointStageComponent; // x20
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v12; // x19

  if ( (byte_4A5F1B2 & 1) == 0 )
  {
    sub_1B885B0(&EventBuddyPointResultManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F1B2 = 1;
  }
  backgroundObj = (UnityEngine_Object_o *)this->fields.backgroundObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backgroundObj, 0LL, 0LL) )
  {
    v6 = this->fields.backgroundObj;
    if ( !v6 )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(v6, 1, 0LL);
  }
  v7 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  if ( !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v7 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  }
  SaveKey = EventBuddyPointResultManager__GetSaveKey(
              v7,
              *((System_String_o **)v7[2].monitor + 3),
              this->fields.currentEventId,
              v5);
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
    v6 = (UnityEngine_GameObject_o *)this->fields.eventBuddyPointStageComponent;
    if ( !v6 )
      goto LABEL_24;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
    {
      v6 = (UnityEngine_GameObject_o *)this->fields.eventBuddyPointStageComponent;
      if ( v6 )
      {
        v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69459380(v12, 0LL);
        return;
      }
LABEL_24:
      sub_1B8880C(v6, v4);
    }
  }
}


void __fastcall EventBuddyPointResultManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5F1B3 & 1) == 0 )
  {
    sub_1B885B0(&EventBuddyPointResultManager___c_TypeInfo);
    byte_4A5F1B3 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventBuddyPointResultManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventBuddyPointResultManager___c_TypeInfo->static_fields->__9 = (struct EventBuddyPointResultManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventBuddyPointResultManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x19
  EventBuddyPointResultManager___c_c *v6; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__23_2; // x20
  Il2CppObject *v9; // x21
  struct EventBuddyPointResultManager___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5F1B4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_2__);
    sub_1B885B0(&EventBuddyPointResultManager___c_TypeInfo);
    byte_4A5F1B4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  v6 = EventBuddyPointResultManager___c_TypeInfo;
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  if ( !EventBuddyPointResultManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager___c_TypeInfo);
    v6 = EventBuddyPointResultManager___c_TypeInfo;
  }
  _9__23_2 = v6->static_fields->__9__23_2;
  if ( !_9__23_2 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = EventBuddyPointResultManager___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__23_2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(_9__23_2, v9, Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_2__, 0LL);
    static_fields = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    static_fields->__9__23_2 = _9__23_2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__23_2, (int32_t)_9__23_2, v11, v12);
  }
  if ( !v5 )
    sub_1B8880C(v6, v3);
  CommonUI__maskFadein(v5, DEFAULT_FADE_TIME, _9__23_2, 0LL);
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
    sub_1B8880C(_4__this, method);
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
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&_4__this->fields.eventUIAssetData,
          (int32_t)prefabData,
          (int32_t)method,
          v3),
        (callback = this->fields.callback) == 0LL) )
  {
    sub_1B8880C(_4__this, prefabData);
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
      sub_1B8880C(this, method);
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
  EventBuddyPointResultManager___c_c *v4; // x0
  EventBuddyPointResultManager_o *_4__this; // x20
  System_Action_o *_9__23_1; // x21
  Il2CppObject *v7; // x22
  struct EventBuddyPointResultManager___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  struct EventBuddyPointResultManager_o *v11; // x8

  if ( (byte_4A5F1B5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_1__);
    sub_1B885B0(&EventBuddyPointResultManager___c_TypeInfo);
    byte_4A5F1B5 = 1;
  }
  v4 = EventBuddyPointResultManager___c_TypeInfo;
  _4__this = this->fields.__4__this;
  if ( !EventBuddyPointResultManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager___c_TypeInfo);
    v4 = EventBuddyPointResultManager___c_TypeInfo;
  }
  _9__23_1 = v4->static_fields->__9__23_1;
  if ( !_9__23_1 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = EventBuddyPointResultManager___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__23_1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(_9__23_1, v7, Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_1__, 0LL);
    static_fields = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    static_fields->__9__23_1 = _9__23_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__23_1, (int32_t)_9__23_1, v9, v10);
  }
  v11 = this->fields.__4__this;
  if ( !v11 || !_4__this )
    sub_1B8880C(v4, method);
  EventBuddyPointResultManager__PlayBestBuddyResult(
    _4__this,
    _9__23_1,
    v11->fields.onPlayEndCallback,
    this->fields.id,
    v2);
}