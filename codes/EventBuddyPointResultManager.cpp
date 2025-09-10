void EventBuddyPointResultManager___cctor(const MethodInfo *method)
{
  struct EventBuddyPointResultManager_StaticFields *static_fields; // x0
  struct EventBuddyPointResultManager_StaticFields *v2; // x0
  struct EventBuddyPointResultManager_StaticFields *v3; // x0
  struct EventBuddyPointResultManager_StaticFields *v4; // x0
  struct EventBuddyPointResultManager_StaticFields *v5; // x0

  if ( (byte_4C21957 & 1) == 0 )
  {
    sub_1C2D490(&EventBuddyPointResultManager_TypeInfo);
    sub_1C2D490(&StringLiteral_3230/*"BuddyResultEventUI"*/);
    sub_1C2D490(&StringLiteral_2904/*"BEST_BUDDY_POINT_RESULT"*/);
    sub_1C2D490(&StringLiteral_2905/*"BEST_BUDDY_RESULT_REPLAY_DIALOG"*/);
    sub_1C2D490(&StringLiteral_17619/*"buddy_bg_at"*/);
    sub_1C2D490(&StringLiteral_6258/*"EventUI/Prefabs"*/);
    sub_1C2D490(&StringLiteral_17174/*"bit_buddy_result"*/);
    byte_4C21957 = 1;
  }
  EventBuddyPointResultManager_TypeInfo->static_fields->EVENT_UI_ASSET_PATH = (struct System_String_o *)StringLiteral_6258/*"EventUI/Prefabs"*/;
  sub_1C2D434(EventBuddyPointResultManager_TypeInfo->static_fields);
  static_fields = EventBuddyPointResultManager_TypeInfo->static_fields;
  static_fields->BUDDY_POINT_RESULT_PREFAB = (struct System_String_o *)StringLiteral_17174/*"bit_buddy_result"*/;
  sub_1C2D434(&static_fields->BUDDY_POINT_RESULT_PREFAB);
  v2 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v2->BUDDY_RESULT_ATLAS = (struct System_String_o *)StringLiteral_17619/*"buddy_bg_at"*/;
  sub_1C2D434(&v2->BUDDY_RESULT_ATLAS);
  v3 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v3->SAVEKEY_BEST_BUDDY_POINT_RESULT = (struct System_String_o *)StringLiteral_2904/*"BEST_BUDDY_POINT_RESULT"*/;
  sub_1C2D434(&v3->SAVEKEY_BEST_BUDDY_POINT_RESULT);
  v4 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v4->SAVEKEY_BEST_BUDDY_RESULT_REPLAY_DIALOG = (struct System_String_o *)StringLiteral_2905/*"BEST_BUDDY_RESULT_REPLAY_DIALOG"*/;
  sub_1C2D434(&v4->SAVEKEY_BEST_BUDDY_RESULT_REPLAY_DIALOG);
  v5 = EventBuddyPointResultManager_TypeInfo->static_fields;
  v5->BUDDY_RESULT_UI_PREFAB = (struct System_String_o *)StringLiteral_3230/*"BuddyResultEventUI"*/;
  sub_1C2D434(&v5->BUDDY_RESULT_UI_PREFAB);
}


void EventBuddyPointResultManager___ctor(EventBuddyPointResultManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool EventBuddyPointResultManager__CheckDisplayCondition(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventServantPointRankMaster_o *Master_object; // x0
  __int64 v5; // x1
  Il2CppObject *v6; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C21952 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C21952 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventServantPointRankMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Master_object )
    goto LABEL_25;
  if ( !EventServantPointRankMaster__IsEnableEvent(Master_object, eventId, 0) )
    return 0;
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventServantPointRankMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
LABEL_25:
    sub_1C2D6EC(Master_object, v5);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          eventId,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  Master_object = (EventServantPointRankMaster_o *)entity;
  if ( !entity )
    goto LABEL_25;
  if ( !EventEntity__IsExchangePeriod((EventEntity_o *)entity, 0, 0) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v6 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Master_object = (EventServantPointRankMaster_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (EventServantPointRankMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !v6 )
    goto LABEL_25;
  return UserEventServantPointMaster__IsAnyExist(
           (UserEventServantPointMaster_o *)v6,
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
  const MethodInfo *v6; // x3
  EventBuddyPointResultManager_o *v7; // x0
  System_String_o *SaveKey; // x0

  v4 = this;
  if ( (byte_4C21954 & 1) == 0 )
  {
    this = (EventBuddyPointResultManager_o *)sub_1C2D490(&EventBuddyPointResultManager_TypeInfo);
    byte_4C21954 = 1;
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
    return !UnityEngine_PlayerPrefs__HasKey(SaveKey, 0);
  }
  else
  {
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *EventBuddyPointResultManager__GetSaveKey(
        EventBuddyPointResultManager_o *this,
        System_String_o *keyBase,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C21953 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_25174/*"{0}_{1}"*/);
    byte_4C21953 = 1;
  }
  v9 = eventId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, *(_QWORD *)&eventId, method, v4);
  return System_String__Format_63499156((System_String_o *)StringLiteral_25174/*"{0}_{1}"*/, (Il2CppObject *)keyBase, v7, 0);
}


BuddyResultReplayUIControl_o *EventBuddyPointResultManager__InstantiateEventUIPrefab(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  AssetData_o *eventUIAssetData; // x19
  EventBuddyPointResultManager_c *v4; // x0
  Il2CppObject *Object_object__51051712; // x19
  Il2CppObject *v7; // x0
  __int64 v8; // x1

  if ( (byte_4C21949 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&EventBuddyPointResultManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BuddyResultReplayUIControl___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21949 = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( !eventUIAssetData )
    return 0;
  v4 = EventBuddyPointResultManager_TypeInfo;
  if ( !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v4 = EventBuddyPointResultManager_TypeInfo;
  }
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              eventUIAssetData,
                              v4->static_fields->BUDDY_RESULT_UI_PREFAB,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51051712, 0, 0) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object_(
         Object_object__51051712,
         (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v7 )
    sub_1C2D6EC(0, v8);
  return (BuddyResultReplayUIControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                           (UnityEngine_GameObject_o *)v7,
                                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BuddyResultReplayUIControl___);
}


EventBuddyPointResultComponent_o *EventBuddyPointResultManager__InstantiateResultPrefab(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  AssetData_o *eventUIAssetData; // x19
  EventBuddyPointResultManager_c *v4; // x0
  Il2CppObject *Object_object__51051712; // x19
  Il2CppObject *v7; // x0
  __int64 v8; // x1

  if ( (byte_4C2194D & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&EventBuddyPointResultManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EventBuddyPointResultComponent___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2194D = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( !eventUIAssetData )
    return 0;
  v4 = EventBuddyPointResultManager_TypeInfo;
  if ( !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v4 = EventBuddyPointResultManager_TypeInfo;
  }
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              eventUIAssetData,
                              v4->static_fields->BUDDY_POINT_RESULT_PREFAB,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51051712, 0, 0) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object_(
         Object_object__51051712,
         (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v7 )
    sub_1C2D6EC(0, v8);
  return (EventBuddyPointResultComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)v7,
                                               (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventBuddyPointResultComponent___);
}


bool EventBuddyPointResultManager__IsFirstTimeDisplayed(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EventBuddyPointResultManager_o *v5; // x0
  System_String_o *SaveKey; // x0

  if ( (byte_4C21951 & 1) == 0 )
  {
    sub_1C2D490(&EventBuddyPointResultManager_TypeInfo);
    byte_4C21951 = 1;
  }
  v5 = (EventBuddyPointResultManager_o *)EventBuddyPointResultManager_TypeInfo;
  if ( !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
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
  Il2CppObject *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  EventBuddyPointResultManager_c *v13; // x0
  Il2CppObject *EVENT_UI_ASSET_PATH; // x20
  Il2CppObject *v15; // x0
  System_String_o *v16; // x19
  AssetLoader_LoadEndDataHandler_o *v17; // x20
  int32_t v19; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C21947 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&EventBuddyPointResultManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_EventBuddyPointResultManager___c__DisplayClass14_0__LoadAssetData_b__0__);
    sub_1C2D490(&EventBuddyPointResultManager___c__DisplayClass14_0_TypeInfo);
    sub_1C2D490(&StringLiteral_25133/*"{0}/{1}"*/);
    byte_4C21947 = 1;
  }
  v7 = (Il2CppObject *)sub_1C2D6DC(EventBuddyPointResultManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor(v7, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  v7[1].klass = (Il2CppClass *)this;
  sub_1C2D434(&v7[1]);
  v7[1].monitor = callback;
  sub_1C2D434(&v7[1].monitor);
  v13 = EventBuddyPointResultManager_TypeInfo;
  if ( !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v13 = EventBuddyPointResultManager_TypeInfo;
  }
  EVENT_UI_ASSET_PATH = (Il2CppObject *)v13->static_fields->EVENT_UI_ASSET_PATH;
  v19 = eventId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v10, v11, v12);
  v16 = System_String__Format_63499156((System_String_o *)StringLiteral_25133/*"{0}/{1}"*/, EVENT_UI_ASSET_PATH, v15, 0);
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v17,
    v7,
    Method_EventBuddyPointResultManager___c__DisplayClass14_0__LoadAssetData_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__loadAssetStorage(v16, v17, 1, 0);
}


UIAtlas_o *EventBuddyPointResultManager__LoadAtlasFromAssetData(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  AssetData_o *eventUIAssetData; // x19
  EventBuddyPointResultManager_c *v4; // x0
  Il2CppObject *Object_object__51051712; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C2194C & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&EventBuddyPointResultManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2194C = 1;
  }
  eventUIAssetData = this->fields.eventUIAssetData;
  if ( !eventUIAssetData )
    return 0;
  v4 = EventBuddyPointResultManager_TypeInfo;
  if ( !EventBuddyPointResultManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventBuddyPointResultManager_TypeInfo);
    v4 = EventBuddyPointResultManager_TypeInfo;
  }
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              eventUIAssetData,
                              v4->static_fields->BUDDY_RESULT_ATLAS,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51051712, 0, 0);
  if ( v6 )
    return 0;
  if ( !Object_object__51051712 )
    sub_1C2D6EC(v6, v7);
  return (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                        (UnityEngine_GameObject_o *)Object_object__51051712,
                        (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
}


void EventBuddyPointResultManager__OnClickReplayButton(EventBuddyPointResultManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *uiControl; // x20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  BuddyResultReplayUIControl_o *v7; // x0

  if ( (byte_4C2194F & 1) == 0 )
  {
    sub_1C2D490(&Method_EventBuddyPointResultManager_OnClickReplayButton__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2194F = 1;
  }
  uiControl = (UnityEngine_Object_o *)this->fields.uiControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(uiControl, 0, 0) )
  {
    v4 = Method_EventBuddyPointResultManager_OnClickReplayButton__;
    if ( (*((_BYTE *)Method_EventBuddyPointResultManager_OnClickReplayButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C2D4A8(Method_EventBuddyPointResultManager_OnClickReplayButton__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    v7 = this->fields.uiControl;
    if ( !v7 )
      sub_1C2D6EC(0, v6);
    BuddyResultReplayUIControl__OpenSelectDialog(v7, v6);
  }
}


void EventBuddyPointResultManager__OnCloseReplayDialog(EventBuddyPointResultManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  EventBuddyPointResultManager_o *v4; // x0
  System_String_o *SaveKey; // x0

  if ( (byte_4C21956 & 1) == 0 )
  {
    sub_1C2D490(&EventBuddyPointResultManager_TypeInfo);
    byte_4C21956 = 1;
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
  UnityEngine_PlayerPrefs__SetInt(SaveKey, 1, 0);
}


void EventBuddyPointResultManager__OnPlayEnd(EventBuddyPointResultManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4C2194B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_EventBuddyPointResultManager__OnPlayEnd_b__18_0__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2194B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EventBuddyPointResultManager__OnPlayEnd_b__18_0__, 0);
  if ( !v5 )
    sub_1C2D6EC(v8, v9);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0);
}


void EventBuddyPointResultManager__OnSelectPortraitImgCount(
        EventBuddyPointResultManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Action_o *onReplayStartCallback; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_4C21950 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_EventBuddyPointResultManager___c__DisplayClass23_0__OnSelectPortraitImgCount_b__0__);
    sub_1C2D490(&EventBuddyPointResultManager___c__DisplayClass23_0_TypeInfo);
    byte_4C21950 = 1;
  }
  v5 = sub_1C2D6DC(EventBuddyPointResultManager___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434(v5 + 16);
  *(_DWORD *)(v5 + 24) = id;
  onReplayStartCallback = this->fields.onReplayStartCallback;
  if ( onReplayStartCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))onReplayStartCallback->fields.invoke_impl)(
      onReplayStartCallback->fields.method_code,
      onReplayStartCallback->fields.method);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)v5,
    Method_EventBuddyPointResultManager___c__DisplayClass23_0__OnSelectPortraitImgCount_b__0__,
    0);
  if ( !v11 )
LABEL_10:
    sub_1C2D6EC(v6, v7);
  CommonUI__maskFadeout(v11, 1, DEFAULT_FADE_TIME, v13, 0);
}


void EventBuddyPointResultManager__OpenResultReplayDialog(
        EventBuddyPointResultManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *uiControl; // x20
  BuddyResultReplayUIControl_o *v4; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4C21955 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EventBuddyPointResultManager_OnCloseReplayDialog__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21955 = 1;
  }
  uiControl = (UnityEngine_Object_o *)this->fields.uiControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(uiControl, 0, 0) )
  {
    v4 = this->fields.uiControl;
    v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_EventBuddyPointResultManager_OnCloseReplayDialog__, 0);
    if ( !v4 )
      sub_1C2D6EC(v6, v7);
    BuddyResultReplayUIControl__OpenReplayIntroDialog(v4, v5, v8);
  }
}


bool EventBuddyPointResultManager__PlayBestBuddyResult(
        EventBuddyPointResultManager_o *this,
        System_Action_o *setupEndCallback,
        System_Action_o *onPlayEndCallback,
        int32_t selectLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x21
  UnityEngine_GameObject_o *AtlasFromAssetData; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  struct EventBuddyPointResultComponent_o **p_eventBuddyPointStageComponent; // x23
  UnityEngine_Object_o *eventBuddyPointStageComponent; // x24
  UnityEngine_Object_o *backgroundObj; // x22
  UIAtlas_o *v17; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  EventBuddyPointResultComponent_o *v19; // x23
  int32_t currentEventId; // w24
  System_Action_o *v21; // x25
  System_Action_o *v22; // x21
  const MethodInfo *v23; // x6

  if ( (byte_4C2194A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EventBuddyPointResultManager_OnPlayEnd__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_EventBuddyPointResultManager___c__DisplayClass17_0__PlayBestBuddyResult_b__0__);
    sub_1C2D490(&EventBuddyPointResultManager___c__DisplayClass17_0_TypeInfo);
    byte_4C2194A = 1;
  }
  v9 = (Il2CppObject *)sub_1C2D6DC(EventBuddyPointResultManager___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_19;
  v9[1].klass = (Il2CppClass *)setupEndCallback;
  sub_1C2D434(&v9[1]);
  v9[1].monitor = this;
  sub_1C2D434(&v9[1].monitor);
  if ( !this->fields.eventUIAssetData )
    return 0;
  this->fields.eventBuddyPointStageComponent = EventBuddyPointResultManager__InstantiateResultPrefab(this, v12);
  p_eventBuddyPointStageComponent = &this->fields.eventBuddyPointStageComponent;
  sub_1C2D434(&this->fields.eventBuddyPointStageComponent);
  eventBuddyPointStageComponent = (UnityEngine_Object_o *)this->fields.eventBuddyPointStageComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(eventBuddyPointStageComponent, 0, 0) )
    return 0;
  this->fields.onPlayEndCallback = onPlayEndCallback;
  sub_1C2D434(&this->fields.onPlayEndCallback);
  backgroundObj = (UnityEngine_Object_o *)this->fields.backgroundObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  v17 = (UIAtlas_o *)AtlasFromAssetData;
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
  v19 = this->fields.eventBuddyPointStageComponent;
  currentEventId = this->fields.currentEventId;
  v21 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    v9,
    Method_EventBuddyPointResultManager___c__DisplayClass17_0__PlayBestBuddyResult_b__0__,
    0);
  v22 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_EventBuddyPointResultManager_OnPlayEnd__, 0);
  if ( !v19 )
LABEL_19:
    sub_1C2D6EC(AtlasFromAssetData, v11);
  EventBuddyPointResultComponent__Setup(v19, currentEventId, v17, v21, v22, selectLimitCount, v23);
  return 1;
}


void EventBuddyPointResultManager__Setup(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        System_Action_o *setupEndCallback,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x22
  _BOOL8 AssetData; // x0
  __int64 v9; // x1
  void **p_monitor; // x23
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x3

  if ( (byte_4C21946 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EventBuddyPointResultManager___c__DisplayClass13_0__Setup_b__0__);
    sub_1C2D490(&EventBuddyPointResultManager___c__DisplayClass13_0_TypeInfo);
    byte_4C21946 = 1;
  }
  v7 = (Il2CppObject *)sub_1C2D6DC(EventBuddyPointResultManager___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_7;
  v7[1].klass = (Il2CppClass *)this;
  sub_1C2D434(&v7[1]);
  v7[1].monitor = setupEndCallback;
  p_monitor = &v7[1].monitor;
  sub_1C2D434(&v7[1].monitor);
  this->fields.currentEventId = eventId;
  v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v11, v7, Method_EventBuddyPointResultManager___c__DisplayClass13_0__Setup_b__0__, 0);
  AssetData = EventBuddyPointResultManager__LoadAssetData(this, eventId, v11, v12);
  if ( AssetData )
    return;
  if ( !*p_monitor )
LABEL_7:
    sub_1C2D6EC(AssetData, v9);
  (*((void (__fastcall **)(_QWORD, _QWORD))*p_monitor + 3))(*((_QWORD *)*p_monitor + 8), *((_QWORD *)*p_monitor + 5));
}


void EventBuddyPointResultManager__SetupEventUI(
        EventBuddyPointResultManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventBuddyPointResultManager_o *v4; // x20
  bool v5; // w21
  UnityEngine_Component_o **p_uiControl; // x22
  UnityEngine_Object_o *uiControl; // x23
  const MethodInfo *v8; // x1
  UnityEngine_Object_o *v9; // x23
  __int64 v10; // x1
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v13; // x22
  BuddyResultReplayUIControl_o *v14; // x21
  System_Action_int__o *v15; // x22
  const MethodInfo *v16; // x3

  v4 = this;
  if ( (byte_4C21948 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_int__TypeInfo);
    sub_1C2D490(&Method_EventBuddyPointResultManager_OnSelectPortraitImgCount__);
    this = (EventBuddyPointResultManager_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21948 = 1;
  }
  v5 = EventBuddyPointResultManager__CheckDisplayCondition(this, eventId, method);
  if ( v5 )
  {
    p_uiControl = (UnityEngine_Component_o **)&v4->fields.uiControl;
    uiControl = (UnityEngine_Object_o *)v4->fields.uiControl;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(uiControl, 0, 0) )
    {
      v4->fields.uiControl = EventBuddyPointResultManager__InstantiateEventUIPrefab(v4, v8);
      sub_1C2D434(&v4->fields.uiControl);
      v9 = (UnityEngine_Object_o *)v4->fields.uiControl;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v9, 0, 0) )
      {
        v11 = *p_uiControl;
        if ( !*p_uiControl )
          goto LABEL_21;
        gameObject = UnityEngine_Component__get_gameObject(v11, 0);
        GameObjectExtensions__SafeSetParent(gameObject, (UnityEngine_Component_o *)v4, 0);
      }
    }
  }
  v13 = (UnityEngine_Object_o *)v4->fields.uiControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v13, 0, 0) )
  {
    v11 = (UnityEngine_Component_o *)v4->fields.uiControl;
    if ( !v11 )
      goto LABEL_21;
    v11 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v11, 0);
    if ( !v11 )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v11, v5, 0);
    if ( v5 )
    {
      v14 = v4->fields.uiControl;
      v15 = (System_Action_int__o *)sub_1C2D6DC(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v15,
        (Il2CppObject *)v4,
        Method_EventBuddyPointResultManager_OnSelectPortraitImgCount__,
        0);
      if ( v14 )
      {
        BuddyResultReplayUIControl__Setup(v14, eventId, v15, v16);
        return;
      }
LABEL_21:
      sub_1C2D6EC(v11, v10);
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
  const MethodInfo *v11; // x2
  bool v12; // w24
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  EventDelegate_Callback_o *v15; // x24
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1

  v10 = this;
  if ( (byte_4C2194E & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_Callback_TypeInfo);
    sub_1C2D490(&Method_EventBuddyPointResultManager_OnClickReplayButton__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (EventBuddyPointResultManager_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2194E = 1;
  }
  v12 = EventBuddyPointResultManager__CheckDisplayCondition(this, eventId, (const MethodInfo *)replayButton)
     && EventBuddyPointResultManager__IsFirstTimeDisplayed(v10, eventId, v11);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)replayButton, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !replayButton )
      goto LABEL_17;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)replayButton, 0);
    if ( !gameObject )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(gameObject, v12, 0);
    if ( v12 )
    {
      v15 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v15,
        (Il2CppObject *)v10,
        (intptr_t)Method_EventBuddyPointResultManager_OnClickReplayButton__,
        0);
      BuddyPointResultReplayButton__Setup(replayButton, v15, v16);
      v10->fields.onReplayStartCallback = onRePlayStartCallback;
      sub_1C2D434(&v10->fields.onReplayStartCallback);
      v10->fields.onPlayEndCallback = onPlayEndCallback;
      sub_1C2D434(&v10->fields.onPlayEndCallback);
      if ( EventBuddyPointResultManager__CheckReplayIntroDialogDisplayCondition(v10, eventId, v17) )
      {
        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( gameObject )
        {
          if ( !CommonUI__IsActive_TutorialBigDialog((CommonUI_o *)gameObject, 0) )
            EventBuddyPointResultManager__OpenResultReplayDialog(v10, v18);
          return;
        }
LABEL_17:
        sub_1C2D6EC(gameObject, v14);
      }
    }
  }
}


void EventBuddyPointResultManager___OnPlayEnd_b__18_0(EventBuddyPointResultManager_o *this, const MethodInfo *method)
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

  if ( (byte_4C21958 & 1) == 0 )
  {
    sub_1C2D490(&EventBuddyPointResultManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21958 = 1;
  }
  backgroundObj = (UnityEngine_Object_o *)this->fields.backgroundObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backgroundObj, 0, 0) )
  {
    v6 = this->fields.backgroundObj;
    if ( !v6 )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(v6, 1, 0);
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
  UnityEngine_PlayerPrefs__SetInt(SaveKey, 1, 0);
  onPlayEndCallback = this->fields.onPlayEndCallback;
  if ( onPlayEndCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))onPlayEndCallback->fields.invoke_impl)(
      onPlayEndCallback->fields.method_code,
      onPlayEndCallback->fields.method);
  eventBuddyPointStageComponent = (UnityEngine_Object_o *)this->fields.eventBuddyPointStageComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventBuddyPointStageComponent, 0, 0) )
  {
    v6 = (UnityEngine_GameObject_o *)this->fields.eventBuddyPointStageComponent;
    if ( !v6 )
      goto LABEL_24;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
    {
      v6 = (UnityEngine_GameObject_o *)this->fields.eventBuddyPointStageComponent;
      if ( v6 )
      {
        v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71163704(v12, 0);
        return;
      }
LABEL_24:
      sub_1C2D6EC(v6, v4);
    }
  }
}


void EventBuddyPointResultManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C21959 & 1) == 0 )
  {
    sub_1C2D490(&EventBuddyPointResultManager___c_TypeInfo);
    byte_4C21959 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(EventBuddyPointResultManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventBuddyPointResultManager___c_TypeInfo->static_fields->__9 = (struct EventBuddyPointResultManager___c_o *)v1;
  sub_1C2D434(EventBuddyPointResultManager___c_TypeInfo->static_fields);
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
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x19
  EventBuddyPointResultManager___c_c *v6; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__23_2; // x20
  Il2CppObject *v9; // x21
  struct EventBuddyPointResultManager___c_StaticFields *static_fields; // x0

  if ( (byte_4C2195A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_2__);
    sub_1C2D490(&EventBuddyPointResultManager___c_TypeInfo);
    byte_4C2195A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__23_2 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(_9__23_2, v9, Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_2__, 0);
    static_fields = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    static_fields->__9__23_2 = _9__23_2;
    v6 = (EventBuddyPointResultManager___c_c *)sub_1C2D434(&static_fields->__9__23_2);
  }
  if ( !v5 )
    sub_1C2D6EC(v6, v3);
  CommonUI__maskFadein(v5, DEFAULT_FADE_TIME, _9__23_2, 0);
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
    sub_1C2D6EC(_4__this, method);
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
  struct EventBuddyPointResultManager_o *_4__this; // x0
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.eventUIAssetData = prefabData,
        _4__this = (struct EventBuddyPointResultManager_o *)sub_1C2D434(&_4__this->fields.eventUIAssetData),
        (callback = this->fields.callback) == 0) )
  {
    sub_1C2D6EC(_4__this, prefabData);
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
      sub_1C2D6EC(this, method);
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
  const MethodInfo *v2; // x4
  EventBuddyPointResultManager___c_c *v4; // x0
  EventBuddyPointResultManager_o *_4__this; // x20
  System_Action_o *_9__23_1; // x21
  Il2CppObject *v7; // x22
  struct EventBuddyPointResultManager___c_StaticFields *static_fields; // x0
  struct EventBuddyPointResultManager_o *v9; // x8

  if ( (byte_4C2195B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_1__);
    sub_1C2D490(&EventBuddyPointResultManager___c_TypeInfo);
    byte_4C2195B = 1;
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
    _9__23_1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(_9__23_1, v7, Method_EventBuddyPointResultManager___c__OnSelectPortraitImgCount_b__23_1__, 0);
    static_fields = EventBuddyPointResultManager___c_TypeInfo->static_fields;
    static_fields->__9__23_1 = _9__23_1;
    v4 = (EventBuddyPointResultManager___c_c *)sub_1C2D434(&static_fields->__9__23_1);
  }
  v9 = this->fields.__4__this;
  if ( !v9 || !_4__this )
    sub_1C2D6EC(v4, method);
  EventBuddyPointResultManager__PlayBestBuddyResult(
    _4__this,
    _9__23_1,
    v9->fields.onPlayEndCallback,
    this->fields.id,
    v2);
}