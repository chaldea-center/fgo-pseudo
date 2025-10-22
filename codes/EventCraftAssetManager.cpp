void EventCraftAssetManager___ctor(EventCraftAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct System_String_array *v5; // x20
  __int64 v6; // x1

  if ( (byte_4C50F4B & 1) == 0 )
  {
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_6268/*"EventUI/Prefabs/"*/);
    byte_4C50F4B = 1;
  }
  v3 = sub_1C3E60C(string___TypeInfo, 1);
  if ( !v3 )
    sub_1C3E7C0(0, v4);
  v5 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C3E7C8(v3, v4);
  v6 = StringLiteral_6268/*"EventUI/Prefabs/"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_6268/*"EventUI/Prefabs/"*/;
  sub_1C3E508(v3 + 32, v6);
  this->fields.loadAssetNames = v5;
  sub_1C3E508(&this->fields.loadAssetNames, v5);
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
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v11; // x20
  System_String_o *v12; // x0
  System_String_o *v13; // x20
  AssetLoader_LoadEndDataHandler_o *v14; // x21

  if ( (byte_4C50F49 & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C3E564(&Method_EventCraftAssetManager___c__DisplayClass25_0__LoadAssets_b__0__);
    sub_1C3E564(&EventCraftAssetManager___c__DisplayClass25_0_TypeInfo);
    byte_4C50F49 = 1;
  }
  v7 = sub_1C3E7B0(EventCraftAssetManager___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1C3E508(v7 + 16, this),
        *(_DWORD *)(v7 + 24) = eventId,
        *(_QWORD *)(v7 + 32) = finishCallback,
        v8 = sub_1C3E508(v7 + 32, finishCallback),
        (loadAssetNames = this->fields.loadAssetNames) == 0) )
  {
    sub_1C3E7C0(v8, v9);
  }
  if ( !LODWORD(loadAssetNames->max_length) )
    sub_1C3E7C8(v8, v9);
  v11 = loadAssetNames->m_Items[0];
  v12 = System_Int32__ToString((int)v7 + 24, 0);
  v13 = System_String__Concat_63636468(v11, v12, 0);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3E7B0(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v14,
    (Il2CppObject *)v7,
    Method_EventCraftAssetManager___c__DisplayClass25_0__LoadAssets_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v13, v14, 1, 0);
}


void EventCraftAssetManager__Release(EventCraftAssetManager_o *this, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4C50F4A & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    byte_4C50F4A = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_40653120(eventId, 0);
  this->fields._CraftItemNumConfirmDialog_k__BackingField = 0;
  sub_1C3E508(&this->fields, 0);
  this->fields._CraftItemWithdrawConfirmDialog_k__BackingField = 0;
  sub_1C3E508(&this->fields._CraftItemWithdrawConfirmDialog_k__BackingField, 0);
  this->fields._CraftRewardDialog_k__BackingField = 0;
  sub_1C3E508(&this->fields._CraftRewardDialog_k__BackingField, 0);
  this->fields._CraftButtonBlinkEffect_k__BackingField = 0;
  sub_1C3E508(&this->fields._CraftButtonBlinkEffect_k__BackingField, 0);
  this->fields._CraftUseSupportToolDialog_k__BackingField = 0;
  sub_1C3E508(&this->fields._CraftUseSupportToolDialog_k__BackingField, 0);
  this->fields._CraftFirstTimeSupportToolDialog_k__BackingField = 0;
  sub_1C3E508(&this->fields._CraftFirstTimeSupportToolDialog_k__BackingField, 0);
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
  sub_1C3E508(&this->fields._CraftButtonBlinkEffect_k__BackingField, value);
}


void EventCraftAssetManager__set_CraftFirstTimeSupportToolDialog(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._CraftFirstTimeSupportToolDialog_k__BackingField = value;
  sub_1C3E508(&this->fields._CraftFirstTimeSupportToolDialog_k__BackingField, value);
}


void EventCraftAssetManager__set_CraftItemNumConfirmDialog(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._CraftItemNumConfirmDialog_k__BackingField = value;
  sub_1C3E508(&this->fields, value);
}


void EventCraftAssetManager__set_CraftItemWithdrawConfirmDialog(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._CraftItemWithdrawConfirmDialog_k__BackingField = value;
  sub_1C3E508(&this->fields._CraftItemWithdrawConfirmDialog_k__BackingField, value);
}


void EventCraftAssetManager__set_CraftRewardDialog(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._CraftRewardDialog_k__BackingField = value;
  sub_1C3E508(&this->fields._CraftRewardDialog_k__BackingField, value);
}


void EventCraftAssetManager__set_CraftUseSupportToolDialog(
        EventCraftAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._CraftUseSupportToolDialog_k__BackingField = value;
  sub_1C3E508(&this->fields._CraftUseSupportToolDialog_k__BackingField, value);
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
  if ( (byte_4C50F4C & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_AssetData_GetObject_GameObject____78185152);
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_EventCraftAssetManager___c__DisplayClass25_0__LoadAssets_b__1__);
    sub_1C3E564(&StringLiteral_17206/*"bit_craft_blink"*/);
    sub_1C3E564(&StringLiteral_6205/*"EventCraftItemNumConfirmDialog"*/);
    sub_1C3E564(&StringLiteral_6208/*"EventCraftUseSupportToolDialog"*/);
    sub_1C3E564(&StringLiteral_6207/*"EventCraftRewardDialog"*/);
    sub_1C3E564(&StringLiteral_6204/*"EventCraftFirstTimeSupportToolDialog"*/);
    this = (EventCraftAssetManager___c__DisplayClass25_0_o *)sub_1C3E564(&StringLiteral_6206/*"EventCraftItemWithdrawConfirmDialog"*/);
    byte_4C50F4C = 1;
  }
  if ( !assetData )
    goto LABEL_15;
  _4__this = v4->fields.__4__this;
  this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__51228128(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6205/*"EventCraftItemNumConfirmDialog"*/,
                                                             (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152);
  if ( !_4__this )
    goto LABEL_15;
  _4__this->fields._CraftItemNumConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C3E508(&_4__this->fields, this);
  v6 = v4->fields.__4__this;
  this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__51228128(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6206/*"EventCraftItemWithdrawConfirmDialog"*/,
                                                             (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152);
  if ( !v6 )
    goto LABEL_15;
  v6->fields._CraftItemWithdrawConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C3E508(&v6->fields._CraftItemWithdrawConfirmDialog_k__BackingField, this);
  v7 = v4->fields.__4__this;
  this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__51228128(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6207/*"EventCraftRewardDialog"*/,
                                                             (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152);
  if ( !v7 )
    goto LABEL_15;
  v7->fields._CraftRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C3E508(&v7->fields._CraftRewardDialog_k__BackingField, this);
  v8 = v4->fields.__4__this;
  this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__51228128(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6208/*"EventCraftUseSupportToolDialog"*/,
                                                             (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152);
  if ( !v8 )
    goto LABEL_15;
  v8->fields._CraftUseSupportToolDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C3E508(&v8->fields._CraftUseSupportToolDialog_k__BackingField, this);
  v9 = v4->fields.__4__this;
  this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__51228128(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6204/*"EventCraftFirstTimeSupportToolDialog"*/,
                                                             (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152);
  if ( !v9
    || (v9->fields._CraftFirstTimeSupportToolDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1C3E508(&v9->fields._CraftFirstTimeSupportToolDialog_k__BackingField, this),
        v10 = v4->fields.__4__this,
        this = (EventCraftAssetManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__51228128(
                                                                   assetData,
                                                                   (System_String_o *)StringLiteral_17206/*"bit_craft_blink"*/,
                                                                   (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152),
        !v10) )
  {
LABEL_15:
    sub_1C3E7C0(this, assetData);
  }
  v10->fields._CraftButtonBlinkEffect_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C3E508(&v10->fields._CraftButtonBlinkEffect_k__BackingField, this);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_EventCraftAssetManager___c__DisplayClass25_0__LoadAssets_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C3E508(&v4->fields.__9__1, _9__1);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_40652948(eventId, _9__1, 1, 0);
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