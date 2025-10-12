void EventTradeAssetManager___ctor(EventTradeAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  struct System_String_array *v4; // x20
  __int64 v5; // x1

  if ( (byte_4C32313 & 1) == 0 )
  {
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_6267/*"EventUI/Prefabs/"*/);
    byte_4C32313 = 1;
  }
  v3 = sub_1C32CC8(string___TypeInfo, 1);
  if ( !v3 )
    sub_1C32E7C(0);
  v4 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C32E84(v3);
  v5 = StringLiteral_6267/*"EventUI/Prefabs/"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_6267/*"EventUI/Prefabs/"*/;
  sub_1C32BC4(v3 + 32, v5);
  this->fields.loadAssetNames = v4;
  sub_1C32BC4(&this->fields.loadAssetNames, v4);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTradeAssetManager__GetAssets(
        EventTradeAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x19
  __int64 v8; // x0
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v10; // x20
  System_String_o *v11; // x0
  System_String_o *v12; // x20
  AssetLoader_LoadEndDataHandler_o *v13; // x21

  if ( (byte_4C32311 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&Method_EventTradeAssetManager___c__DisplayClass37_0__GetAssets_b__0__);
    sub_1C32C20(&EventTradeAssetManager___c__DisplayClass37_0_TypeInfo);
    byte_4C32311 = 1;
  }
  v7 = sub_1C32E6C(EventTradeAssetManager___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1C32BC4(v7 + 16, this),
        *(_DWORD *)(v7 + 24) = eventId,
        *(_QWORD *)(v7 + 32) = finishCallback,
        v8 = sub_1C32BC4(v7 + 32, finishCallback),
        (loadAssetNames = this->fields.loadAssetNames) == 0) )
  {
    sub_1C32E7C(v8);
  }
  if ( !LODWORD(loadAssetNames->max_length) )
    sub_1C32E84(v8);
  v10 = loadAssetNames->m_Items[0];
  v11 = System_Int32__ToString((int)v7 + 24, 0);
  v12 = System_String__Concat_63518544(v10, v11, 0);
  v13 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v13,
    (Il2CppObject *)v7,
    Method_EventTradeAssetManager___c__DisplayClass37_0__GetAssets_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v12, v13, 1, 0);
}


void EventTradeAssetManager__Release(EventTradeAssetManager_o *this, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4C32312 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    byte_4C32312 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_40507476(eventId, 0);
  this->fields._TradeSweetsSelectConfirmDialog_k__BackingField = 0;
  sub_1C32BC4(&this->fields, 0);
  this->fields._TradeSweetsNumConfirmDialog_k__BackingField = 0;
  sub_1C32BC4(&this->fields._TradeSweetsNumConfirmDialog_k__BackingField, 0);
  this->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField = 0;
  sub_1C32BC4(&this->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField, 0);
  this->fields._TradeRewardDialog_k__BackingField = 0;
  sub_1C32BC4(&this->fields._TradeRewardDialog_k__BackingField, 0);
  this->fields._TradePointRewardDialog_k__BackingField = 0;
  sub_1C32BC4(&this->fields._TradePointRewardDialog_k__BackingField, 0);
  this->fields._TradeRankUpDialog_k__BackingField = 0;
  sub_1C32BC4(&this->fields._TradeRankUpDialog_k__BackingField, 0);
  this->fields._TradePopularSweetsNotificationDialog_k__BackingField = 0;
  sub_1C32BC4(&this->fields._TradePopularSweetsNotificationDialog_k__BackingField, 0);
  this->fields._TradeButtonBlinkEffect_k__BackingField = 0;
  sub_1C32BC4(&this->fields._TradeButtonBlinkEffect_k__BackingField, 0);
  this->fields._TradePickupInfoBoard_k__BackingField = 0;
  sub_1C32BC4(&this->fields._TradePickupInfoBoard_k__BackingField, 0);
}


UnityEngine_GameObject_o *EventTradeAssetManager__get_TradeButtonBlinkEffect(
        EventTradeAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._TradeButtonBlinkEffect_k__BackingField;
}


UnityEngine_GameObject_o *EventTradeAssetManager__get_TradePickupInfoBoard(
        EventTradeAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._TradePickupInfoBoard_k__BackingField;
}


UnityEngine_GameObject_o *EventTradeAssetManager__get_TradePointRewardDialog(
        EventTradeAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._TradePointRewardDialog_k__BackingField;
}


UnityEngine_GameObject_o *EventTradeAssetManager__get_TradePopularSweetsNotificationDialog(
        EventTradeAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._TradePopularSweetsNotificationDialog_k__BackingField;
}


UnityEngine_GameObject_o *EventTradeAssetManager__get_TradeRankUpDialog(
        EventTradeAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._TradeRankUpDialog_k__BackingField;
}


UnityEngine_GameObject_o *EventTradeAssetManager__get_TradeRewardDialog(
        EventTradeAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._TradeRewardDialog_k__BackingField;
}


UnityEngine_GameObject_o *EventTradeAssetManager__get_TradeSweetsNumConfirmDialog(
        EventTradeAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._TradeSweetsNumConfirmDialog_k__BackingField;
}


UnityEngine_GameObject_o *EventTradeAssetManager__get_TradeSweetsSelectConfirmDialog(
        EventTradeAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._TradeSweetsSelectConfirmDialog_k__BackingField;
}


UnityEngine_GameObject_o *EventTradeAssetManager__get_TradeSweetsWithdrawalConfirmDialog(
        EventTradeAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField;
}


void EventTradeAssetManager__set_TradeButtonBlinkEffect(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._TradeButtonBlinkEffect_k__BackingField = value;
  sub_1C32BC4(&this->fields._TradeButtonBlinkEffect_k__BackingField, value);
}


void EventTradeAssetManager__set_TradePickupInfoBoard(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._TradePickupInfoBoard_k__BackingField = value;
  sub_1C32BC4(&this->fields._TradePickupInfoBoard_k__BackingField, value);
}


void EventTradeAssetManager__set_TradePointRewardDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._TradePointRewardDialog_k__BackingField = value;
  sub_1C32BC4(&this->fields._TradePointRewardDialog_k__BackingField, value);
}


void EventTradeAssetManager__set_TradePopularSweetsNotificationDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._TradePopularSweetsNotificationDialog_k__BackingField = value;
  sub_1C32BC4(&this->fields._TradePopularSweetsNotificationDialog_k__BackingField, value);
}


void EventTradeAssetManager__set_TradeRankUpDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._TradeRankUpDialog_k__BackingField = value;
  sub_1C32BC4(&this->fields._TradeRankUpDialog_k__BackingField, value);
}


void EventTradeAssetManager__set_TradeRewardDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._TradeRewardDialog_k__BackingField = value;
  sub_1C32BC4(&this->fields._TradeRewardDialog_k__BackingField, value);
}


void EventTradeAssetManager__set_TradeSweetsNumConfirmDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._TradeSweetsNumConfirmDialog_k__BackingField = value;
  sub_1C32BC4(&this->fields._TradeSweetsNumConfirmDialog_k__BackingField, value);
}


void EventTradeAssetManager__set_TradeSweetsSelectConfirmDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._TradeSweetsSelectConfirmDialog_k__BackingField = value;
  sub_1C32BC4(&this->fields, value);
}


void EventTradeAssetManager__set_TradeSweetsWithdrawalConfirmDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField = value;
  sub_1C32BC4(&this->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField, value);
}


void EventTradeAssetManager___c__DisplayClass37_0___ctor(
        EventTradeAssetManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTradeAssetManager___c__DisplayClass37_0___GetAssets_b__0(
        EventTradeAssetManager___c__DisplayClass37_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  EventTradeAssetManager___c__DisplayClass37_0_o *v4; // x19
  struct EventTradeAssetManager_o *_4__this; // x21
  struct EventTradeAssetManager_o *v6; // x21
  struct EventTradeAssetManager_o *v7; // x21
  struct EventTradeAssetManager_o *v8; // x21
  struct EventTradeAssetManager_o *v9; // x21
  struct EventTradeAssetManager_o *v10; // x21
  struct EventTradeAssetManager_o *v11; // x21
  struct EventTradeAssetManager_o *v12; // x21
  struct EventTradeAssetManager_o *v13; // x21
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20

  v4 = this;
  if ( (byte_4C32314 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_EventTradeAssetManager___c__DisplayClass37_0__GetAssets_b__1__);
    sub_1C32C20(&StringLiteral_6258/*"EventTradePointRewardDialog"*/);
    sub_1C32C20(&StringLiteral_17281/*"bit_trade_blink"*/);
    sub_1C32C20(&StringLiteral_6262/*"EventTradeSweetsNumConfirmDialog"*/);
    sub_1C32C20(&StringLiteral_6260/*"EventTradeRankUpDialog"*/);
    sub_1C32C20(&StringLiteral_6261/*"EventTradeRewardDialog"*/);
    sub_1C32C20(&StringLiteral_6263/*"EventTradeSweetsSelectConfirmDialog"*/);
    sub_1C32C20(&StringLiteral_6259/*"EventTradePopularSweetsNotificationDialog"*/);
    sub_1C32C20(&StringLiteral_6257/*"EventTradePickupInfoBoard"*/);
    this = (EventTradeAssetManager___c__DisplayClass37_0_o *)sub_1C32C20(&StringLiteral_6264/*"EventTradeSweetsWithdrawalConfirmDialog"*/);
    byte_4C32314 = 1;
  }
  if ( !assetData )
    goto LABEL_18;
  _4__this = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__51111776(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6263/*"EventTradeSweetsSelectConfirmDialog"*/,
                                                             (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  if ( !_4__this )
    goto LABEL_18;
  _4__this->fields._TradeSweetsSelectConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C32BC4(&_4__this->fields, this);
  v6 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__51111776(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6262/*"EventTradeSweetsNumConfirmDialog"*/,
                                                             (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  if ( !v6 )
    goto LABEL_18;
  v6->fields._TradeSweetsNumConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C32BC4(&v6->fields._TradeSweetsNumConfirmDialog_k__BackingField, this);
  v7 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__51111776(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6264/*"EventTradeSweetsWithdrawalConfirmDialog"*/,
                                                             (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  if ( !v7 )
    goto LABEL_18;
  v7->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C32BC4(&v7->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField, this);
  v8 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__51111776(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6261/*"EventTradeRewardDialog"*/,
                                                             (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  if ( !v8 )
    goto LABEL_18;
  v8->fields._TradeRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C32BC4(&v8->fields._TradeRewardDialog_k__BackingField, this);
  v9 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__51111776(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6258/*"EventTradePointRewardDialog"*/,
                                                             (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  if ( !v9 )
    goto LABEL_18;
  v9->fields._TradePointRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C32BC4(&v9->fields._TradePointRewardDialog_k__BackingField, this);
  v10 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__51111776(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6260/*"EventTradeRankUpDialog"*/,
                                                             (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  if ( !v10 )
    goto LABEL_18;
  v10->fields._TradeRankUpDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C32BC4(&v10->fields._TradeRankUpDialog_k__BackingField, this);
  v11 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__51111776(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6259/*"EventTradePopularSweetsNotificationDialog"*/,
                                                             (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  if ( !v11 )
    goto LABEL_18;
  v11->fields._TradePopularSweetsNotificationDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C32BC4(&v11->fields._TradePopularSweetsNotificationDialog_k__BackingField, this);
  v12 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__51111776(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17281/*"bit_trade_blink"*/,
                                                             (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  if ( !v12
    || (v12->fields._TradeButtonBlinkEffect_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1C32BC4(&v12->fields._TradeButtonBlinkEffect_k__BackingField, this),
        v13 = v4->fields.__4__this,
        this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__51111776(
                                                                   assetData,
                                                                   (System_String_o *)StringLiteral_6257/*"EventTradePickupInfoBoard"*/,
                                                                   (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392),
        !v13) )
  {
LABEL_18:
    sub_1C32E7C(this);
  }
  v13->fields._TradePickupInfoBoard_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1C32BC4(&v13->fields._TradePickupInfoBoard_k__BackingField, this);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_EventTradeAssetManager___c__DisplayClass37_0__GetAssets_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C32BC4(&v4->fields.__9__1, _9__1);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_40507304(eventId, _9__1, 1, 0);
}


void EventTradeAssetManager___c__DisplayClass37_0___GetAssets_b__1(
        EventTradeAssetManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *finishCallback; // x0

  finishCallback = this->fields.finishCallback;
  if ( finishCallback )
    ActionExtensions__Call(finishCallback, 0);
}