void EventCraftAssetManager___ctor(EventCraftAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  struct System_String_array *v7; // x20

  if ( (byte_4C21512 & 1) == 0 )
  {
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_6259/*"EventUI/Prefabs/"*/);
    byte_4C21512 = 1;
  }
  v3 = sub_1C2D538(string___TypeInfo, 1);
  if ( !v3 )
    sub_1C2D6EC(0, v4);
  v7 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C2D6F4(v3, v4, v5, v6);
  *(_QWORD *)(v3 + 32) = StringLiteral_6259/*"EventUI/Prefabs/"*/;
  sub_1C2D434(v3 + 32);
  this->fields.loadAssetNames = v7;
  sub_1C2D434(&this->fields.loadAssetNames);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventCraftAssetManager__LoadAssets(
        EventCraftAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v13; // x20
  System_String_o *v14; // x0
  System_String_o *v15; // x20
  AssetLoader_LoadEndDataHandler_o *v16; // x21

  if ( (byte_4C21510 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_EventCraftAssetManager___c__DisplayClass25_0__LoadAssets_b__0__);
    sub_1C2D490(&EventCraftAssetManager___c__DisplayClass25_0_TypeInfo);
    byte_4C21510 = 1;
  }
  v7 = sub_1C2D6DC(EventCraftAssetManager___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1C2D434(v7 + 16),
        *(_DWORD *)(v7 + 24) = eventId,
        *(_QWORD *)(v7 + 32) = finishCallback,
        v8 = sub_1C2D434(v7 + 32),
        (loadAssetNames = this->fields.loadAssetNames) == 0) )
  {
    sub_1C2D6EC(v8, v9);
  }
  if ( !LODWORD(loadAssetNames->max_length) )
    sub_1C2D6F4(v8, v9, v10, v11);
  v13 = loadAssetNames->m_Items[0];
  v14 = System_Int32__ToString((int)v7 + 24, 0);
  v15 = System_String__Concat_63457864(v13, v14, 0);
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v16,
    (Il2CppObject *)v7,
    Method_EventCraftAssetManager___c__DisplayClass25_0__LoadAssets_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v15, v16, 1, 0);
}


void EventCraftAssetManager__Release(EventCraftAssetManager_o *this, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4C21511 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    byte_4C21511 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_40385248(eventId, 0);
  this->fields._CraftItemNumConfirmDialog_k__BackingField = 0;
  sub_1C2D434(&this->fields);
  this->fields._CraftItemWithdrawConfirmDialog_k__BackingField = 0;
  sub_1C2D434(&this->fields._CraftItemWithdrawConfirmDialog_k__BackingField);
  this->fields._CraftRewardDialog_k__BackingField = 0;
  sub_1C2D434(&this->fields._CraftRewardDialog_k__BackingField);
  this->fields._CraftButtonBlinkEffect_k__BackingField = 0;
  sub_1C2D434(&this->fields._CraftButtonBlinkEffect_k__BackingField);
  this->fields._CraftUseSupportToolDialog_k__BackingField = 0;
  sub_1C2D434(&this->fields._CraftUseSupportToolDialog_k__BackingField);
  this->fields._CraftFirstTimeSupportToolDialog_k__BackingField = 0;
  sub_1C2D434(&this->fields._CraftFirstTimeSupportToolDialog_k__BackingField);
}


UnityEngine_GameObject_o *EventCraftAssetManager__get_CraftButtonBlinkEffect(
        EventCraftAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._CraftButtonBlinkEffect_k__BackingField;
}


UnityEngine_GameObject_o *EventCraftAssetManager__get_CraftFirstTimeSupportToolDialog(
        EventCraftAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._CraftFirstTimeSupportToolDialog_k__BackingField;
}


UnityEngine_GameObject_o *EventCraftAssetManager__get_CraftItemNumConfirmDialog(
        EventCraftAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._CraftItemNumConfirmDialog_k__BackingField;
}


UnityEngine_GameObject_o *EventCraftAssetManager__get_CraftItemWithdrawConfirmDialog(
        EventCraftAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._CraftItemWithdrawConfirmDialog_k__BackingField;
}


UnityEngine_GameObject_o *EventCraftAssetManager__get_CraftRewardDialog(
        EventCraftAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._CraftRewardDialog_k__BackingField;
}


UnityEngine_GameObject_o *EventCraftAssetManager__get_CraftUseSupportToolDialog(
        EventCraftAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._CraftUseSupportToolDialog_k__BackingField;
}


void EventCraftAssetManager__set_CraftButtonBlinkEffect(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._CraftButtonBlinkEffect_k__BackingField = value;
  sub_1C2D434(&this->fields._CraftButtonBlinkEffect_k__BackingField);
}


void EventCraftAssetManager__set_CraftFirstTimeSupportToolDialog(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._CraftFirstTimeSupportToolDialog_k__BackingField = value;
  sub_1C2D434(&this->fields._CraftFirstTimeSupportToolDialog_k__BackingField);
}


void EventCraftAssetManager__set_CraftItemNumConfirmDialog(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._CraftItemNumConfirmDialog_k__BackingField = value;
  sub_1C2D434(&this->fields);
}


void EventCraftAssetManager__set_CraftItemWithdrawConfirmDialog(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._CraftItemWithdrawConfirmDialog_k__BackingField = value;
  sub_1C2D434(&this->fields._CraftItemWithdrawConfirmDialog_k__BackingField);
}


void EventCraftAssetManager__set_CraftRewardDialog(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._CraftRewardDialog_k__BackingField = value;
  sub_1C2D434(&this->fields._CraftRewardDialog_k__BackingField);
}


void EventCraftAssetManager__set_CraftUseSupportToolDialog(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._CraftUseSupportToolDialog_k__BackingField = value;
  sub_1C2D434(&this->fields._CraftUseSupportToolDialog_k__BackingField);
}


void EventCraftAssetManager___c__DisplayClass25_0___ctor(
        EventCraftAssetManager___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventCraftAssetManager___c__DisplayClass25_0___LoadAssets_b__0(
        EventCraftAssetManager___c__DisplayClass25_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  EventCraftAssetManager___c__DisplayClass25_0_o *v4; // x19
  struct EventCraftAssetManager_o *_4__this; // x21
  struct EventCraftAssetManager_o *v6; // x21
  struct EventCraftAssetManager_o *v7; // x21
  struct EventCraftAssetManager_o *v8; // x21
  struct EventCraftAssetManager_o *v9; // x21
  struct EventCraftAssetManager_o *v10; // x21
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20

  v4 = this;
  if ( (byte_4C21513 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_EventCraftAssetManager___c__DisplayClass25_0__LoadAssets_b__1__);
    sub_1C2D490(&StringLiteral_17184/*"bit_craft_blink"*/);
    sub_1C2D490(&StringLiteral_6196/*"EventCraftItemNumConfirmDialog"*/);
    sub_1C2D490(&StringLiteral_6199/*"EventCraftUseSupportToolDialog"*/);
    sub_1C2D490(&StringLiteral_6198/*"EventCraftRewardDialog"*/);
    sub_1C2D490(&StringLiteral_6195/*"EventCraftFirstTimeSupportToolDialog"*/);
    this = (EventCraftAssetManager___c__DisplayClass25_0_o *)sub_1C2D490(&StringLiteral_6197/*"EventCraftItemWithdrawConfirmDialog"*/);
    byte_4C21513 = 1;
  }
  if ( !assetData )
    goto LABEL_15;
  _4__this = v4->fields.__4__this;
  this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__51051712(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6196/*"EventCraftItemNumConfirmDialog"*/,
                                                             (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !_4__this )
    goto LABEL_15;
  _4__this->fields._CraftItemNumConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C2D434(&_4__this->fields);
  v6 = v4->fields.__4__this;
  this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__51051712(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6197/*"EventCraftItemWithdrawConfirmDialog"*/,
                                                             (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !v6 )
    goto LABEL_15;
  v6->fields._CraftItemWithdrawConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C2D434(&v6->fields._CraftItemWithdrawConfirmDialog_k__BackingField);
  v7 = v4->fields.__4__this;
  this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__51051712(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6198/*"EventCraftRewardDialog"*/,
                                                             (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !v7 )
    goto LABEL_15;
  v7->fields._CraftRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C2D434(&v7->fields._CraftRewardDialog_k__BackingField);
  v8 = v4->fields.__4__this;
  this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__51051712(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6199/*"EventCraftUseSupportToolDialog"*/,
                                                             (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !v8 )
    goto LABEL_15;
  v8->fields._CraftUseSupportToolDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C2D434(&v8->fields._CraftUseSupportToolDialog_k__BackingField);
  v9 = v4->fields.__4__this;
  this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__51051712(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6195/*"EventCraftFirstTimeSupportToolDialog"*/,
                                                             (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !v9
    || (v9->fields._CraftFirstTimeSupportToolDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1C2D434(&v9->fields._CraftFirstTimeSupportToolDialog_k__BackingField),
        v10 = v4->fields.__4__this,
        this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__51051712(
                                                                   assetData,
                                                                   (System_String_o *)StringLiteral_17184/*"bit_craft_blink"*/,
                                                                   (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080),
        !v10) )
  {
LABEL_15:
    sub_1C2D6EC(this, assetData);
  }
  v10->fields._CraftButtonBlinkEffect_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C2D434(&v10->fields._CraftButtonBlinkEffect_k__BackingField);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_EventCraftAssetManager___c__DisplayClass25_0__LoadAssets_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C2D434(&v4->fields.__9__1);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_40385076(eventId, _9__1, 1, 0);
}


void EventCraftAssetManager___c__DisplayClass25_0___LoadAssets_b__1(
        EventCraftAssetManager___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *finishCallback; // x0

  finishCallback = this->fields.finishCallback;
  if ( finishCallback )
    ActionExtensions__Call(finishCallback, 0);
}