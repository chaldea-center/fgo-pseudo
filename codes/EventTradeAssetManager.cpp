void __fastcall EventTradeAssetManager___ctor(EventTradeAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  struct System_String_array *v6; // x20

  if ( (byte_49B5C7E & 1) == 0 )
  {
    sub_1B4CF90(&string___TypeInfo, method);
    sub_1B4CF90(&StringLiteral_6157/*"EventUI/Prefabs/"*/, v3);
    byte_49B5C7E = 1;
  }
  v4 = sub_1B4D038(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1B4D1EC(0LL, v5);
  v6 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1B4D1F4(v4, v5);
  *(_QWORD *)(v4 + 32) = StringLiteral_6157/*"EventUI/Prefabs/"*/;
  sub_1B4CF34(v4 + 32);
  this->fields.loadAssetNames = v6;
  sub_1B4CF34(&this->fields.loadAssetNames);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeAssetManager__GetAssets(
        EventTradeAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v14; // x20
  System_String_o *v15; // x0
  System_String_o *v16; // x20
  AssetLoader_LoadEndDataHandler_o *v17; // x21

  if ( (byte_49B5C7C & 1) == 0 )
  {
    sub_1B4CF90(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1B4CF90(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1B4CF90(&Method_EventTradeAssetManager___c__DisplayClass37_0__GetAssets_b__0__, v8);
    sub_1B4CF90(&EventTradeAssetManager___c__DisplayClass37_0_TypeInfo, v9);
    byte_49B5C7C = 1;
  }
  v10 = sub_1B4D1DC(EventTradeAssetManager___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_1B4CF34(v10 + 16),
        *(_DWORD *)(v10 + 24) = eventId,
        *(_QWORD *)(v10 + 32) = finishCallback,
        v11 = sub_1B4CF34(v10 + 32),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_1B4D1EC(v11, v12);
  }
  if ( !loadAssetNames->max_length )
    sub_1B4D1F4(v11, v12);
  v14 = loadAssetNames->m_Items[0];
  v15 = System_Int32__ToString((int)v10 + 24, 0LL);
  v16 = System_String__Concat_61093468(v14, v15, 0LL);
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1B4D1DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v17,
    (Il2CppObject *)v10,
    Method_EventTradeAssetManager___c__DisplayClass37_0__GetAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v16, v17, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeAssetManager__Release(
        EventTradeAssetManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  if ( (byte_49B5C7D & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_49B5C7D = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_38398928(eventId, 0LL);
  this->fields._TradeSweetsSelectConfirmDialog_k__BackingField = 0LL;
  sub_1B4CF34(&this->fields);
  this->fields._TradeSweetsNumConfirmDialog_k__BackingField = 0LL;
  sub_1B4CF34(&this->fields._TradeSweetsNumConfirmDialog_k__BackingField);
  this->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField = 0LL;
  sub_1B4CF34(&this->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField);
  this->fields._TradeRewardDialog_k__BackingField = 0LL;
  sub_1B4CF34(&this->fields._TradeRewardDialog_k__BackingField);
  this->fields._TradePointRewardDialog_k__BackingField = 0LL;
  sub_1B4CF34(&this->fields._TradePointRewardDialog_k__BackingField);
  this->fields._TradeRankUpDialog_k__BackingField = 0LL;
  sub_1B4CF34(&this->fields._TradeRankUpDialog_k__BackingField);
  this->fields._TradePopularSweetsNotificationDialog_k__BackingField = 0LL;
  sub_1B4CF34(&this->fields._TradePopularSweetsNotificationDialog_k__BackingField);
  this->fields._TradeButtonBlinkEffect_k__BackingField = 0LL;
  sub_1B4CF34(&this->fields._TradeButtonBlinkEffect_k__BackingField);
  this->fields._TradePickupInfoBoard_k__BackingField = 0LL;
  sub_1B4CF34(&this->fields._TradePickupInfoBoard_k__BackingField);
}


UnityEngine_GameObject_o *__fastcall EventTradeAssetManager__get_TradeButtonBlinkEffect(
        EventTradeAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._TradeButtonBlinkEffect_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall EventTradeAssetManager__get_TradePickupInfoBoard(
        EventTradeAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._TradePickupInfoBoard_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall EventTradeAssetManager__get_TradePointRewardDialog(
        EventTradeAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._TradePointRewardDialog_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall EventTradeAssetManager__get_TradePopularSweetsNotificationDialog(
        EventTradeAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._TradePopularSweetsNotificationDialog_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall EventTradeAssetManager__get_TradeRankUpDialog(
        EventTradeAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._TradeRankUpDialog_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall EventTradeAssetManager__get_TradeRewardDialog(
        EventTradeAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._TradeRewardDialog_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall EventTradeAssetManager__get_TradeSweetsNumConfirmDialog(
        EventTradeAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._TradeSweetsNumConfirmDialog_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall EventTradeAssetManager__get_TradeSweetsSelectConfirmDialog(
        EventTradeAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._TradeSweetsSelectConfirmDialog_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall EventTradeAssetManager__get_TradeSweetsWithdrawalConfirmDialog(
        EventTradeAssetManager_o *this,
        const MethodInfo *method)
{
  return this->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField;
}


void __fastcall EventTradeAssetManager__set_TradeButtonBlinkEffect(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._TradeButtonBlinkEffect_k__BackingField = value;
  sub_1B4CF34(&this->fields._TradeButtonBlinkEffect_k__BackingField);
}


void __fastcall EventTradeAssetManager__set_TradePickupInfoBoard(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._TradePickupInfoBoard_k__BackingField = value;
  sub_1B4CF34(&this->fields._TradePickupInfoBoard_k__BackingField);
}


void __fastcall EventTradeAssetManager__set_TradePointRewardDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._TradePointRewardDialog_k__BackingField = value;
  sub_1B4CF34(&this->fields._TradePointRewardDialog_k__BackingField);
}


void __fastcall EventTradeAssetManager__set_TradePopularSweetsNotificationDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._TradePopularSweetsNotificationDialog_k__BackingField = value;
  sub_1B4CF34(&this->fields._TradePopularSweetsNotificationDialog_k__BackingField);
}


void __fastcall EventTradeAssetManager__set_TradeRankUpDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._TradeRankUpDialog_k__BackingField = value;
  sub_1B4CF34(&this->fields._TradeRankUpDialog_k__BackingField);
}


void __fastcall EventTradeAssetManager__set_TradeRewardDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._TradeRewardDialog_k__BackingField = value;
  sub_1B4CF34(&this->fields._TradeRewardDialog_k__BackingField);
}


void __fastcall EventTradeAssetManager__set_TradeSweetsNumConfirmDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._TradeSweetsNumConfirmDialog_k__BackingField = value;
  sub_1B4CF34(&this->fields._TradeSweetsNumConfirmDialog_k__BackingField);
}


void __fastcall EventTradeAssetManager__set_TradeSweetsSelectConfirmDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._TradeSweetsSelectConfirmDialog_k__BackingField = value;
  sub_1B4CF34(&this->fields);
}


void __fastcall EventTradeAssetManager__set_TradeSweetsWithdrawalConfirmDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField = value;
  sub_1B4CF34(&this->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField);
}


void __fastcall EventTradeAssetManager___c__DisplayClass37_0___ctor(
        EventTradeAssetManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTradeAssetManager___c__DisplayClass37_0___GetAssets_b__0(
        EventTradeAssetManager___c__DisplayClass37_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  EventTradeAssetManager___c__DisplayClass37_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct EventTradeAssetManager_o *_4__this; // x21
  struct EventTradeAssetManager_o *v18; // x21
  struct EventTradeAssetManager_o *v19; // x21
  struct EventTradeAssetManager_o *v20; // x21
  struct EventTradeAssetManager_o *v21; // x21
  struct EventTradeAssetManager_o *v22; // x21
  struct EventTradeAssetManager_o *v23; // x21
  struct EventTradeAssetManager_o *v24; // x21
  struct EventTradeAssetManager_o *v25; // x21
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20

  v4 = this;
  if ( (byte_49B5C7F & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, assetData);
    sub_1B4CF90(&Method_AssetData_GetObject_GameObject____75492000, v5);
    sub_1B4CF90(&AtlasManager_TypeInfo, v6);
    sub_1B4CF90(&Method_EventTradeAssetManager___c__DisplayClass37_0__GetAssets_b__1__, v7);
    sub_1B4CF90(&StringLiteral_6148/*"EventTradePointRewardDialog"*/, v8);
    sub_1B4CF90(&StringLiteral_16996/*"bit_trade_blink"*/, v9);
    sub_1B4CF90(&StringLiteral_6152/*"EventTradeSweetsNumConfirmDialog"*/, v10);
    sub_1B4CF90(&StringLiteral_6150/*"EventTradeRankUpDialog"*/, v11);
    sub_1B4CF90(&StringLiteral_6151/*"EventTradeRewardDialog"*/, v12);
    sub_1B4CF90(&StringLiteral_6153/*"EventTradeSweetsSelectConfirmDialog"*/, v13);
    sub_1B4CF90(&StringLiteral_6149/*"EventTradePopularSweetsNotificationDialog"*/, v14);
    sub_1B4CF90(&StringLiteral_6147/*"EventTradePickupInfoBoard"*/, v15);
    this = (EventTradeAssetManager___c__DisplayClass37_0_o *)sub_1B4CF90(&StringLiteral_6154/*"EventTradeSweetsWithdrawalConfirmDialog"*/, v16);
    byte_49B5C7F = 1;
  }
  if ( !assetData )
    goto LABEL_18;
  _4__this = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__49169892(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6153/*"EventTradeSweetsSelectConfirmDialog"*/,
                                                             (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
  if ( !_4__this )
    goto LABEL_18;
  _4__this->fields._TradeSweetsSelectConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B4CF34(&_4__this->fields);
  v18 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__49169892(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6152/*"EventTradeSweetsNumConfirmDialog"*/,
                                                             (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
  if ( !v18 )
    goto LABEL_18;
  v18->fields._TradeSweetsNumConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B4CF34(&v18->fields._TradeSweetsNumConfirmDialog_k__BackingField);
  v19 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__49169892(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6154/*"EventTradeSweetsWithdrawalConfirmDialog"*/,
                                                             (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
  if ( !v19 )
    goto LABEL_18;
  v19->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B4CF34(&v19->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField);
  v20 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__49169892(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6151/*"EventTradeRewardDialog"*/,
                                                             (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
  if ( !v20 )
    goto LABEL_18;
  v20->fields._TradeRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B4CF34(&v20->fields._TradeRewardDialog_k__BackingField);
  v21 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__49169892(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6148/*"EventTradePointRewardDialog"*/,
                                                             (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
  if ( !v21 )
    goto LABEL_18;
  v21->fields._TradePointRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B4CF34(&v21->fields._TradePointRewardDialog_k__BackingField);
  v22 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__49169892(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6150/*"EventTradeRankUpDialog"*/,
                                                             (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
  if ( !v22 )
    goto LABEL_18;
  v22->fields._TradeRankUpDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B4CF34(&v22->fields._TradeRankUpDialog_k__BackingField);
  v23 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__49169892(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6149/*"EventTradePopularSweetsNotificationDialog"*/,
                                                             (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
  if ( !v23 )
    goto LABEL_18;
  v23->fields._TradePopularSweetsNotificationDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B4CF34(&v23->fields._TradePopularSweetsNotificationDialog_k__BackingField);
  v24 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__49169892(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_16996/*"bit_trade_blink"*/,
                                                             (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000);
  if ( !v24
    || (v24->fields._TradeButtonBlinkEffect_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1B4CF34(&v24->fields._TradeButtonBlinkEffect_k__BackingField),
        v25 = v4->fields.__4__this,
        this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__49169892(
                                                                   assetData,
                                                                   (System_String_o *)StringLiteral_6147/*"EventTradePickupInfoBoard"*/,
                                                                   (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000),
        !v25) )
  {
LABEL_18:
    sub_1B4D1EC(this, assetData);
  }
  v25->fields._TradePickupInfoBoard_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B4CF34(&v25->fields._TradePickupInfoBoard_k__BackingField);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_EventTradeAssetManager___c__DisplayClass37_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B4CF34(&v4->fields.__9__1);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_38398764(eventId, _9__1, 1, 0LL);
}


void __fastcall EventTradeAssetManager___c__DisplayClass37_0___GetAssets_b__1(
        EventTradeAssetManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *finishCallback; // x0

  finishCallback = this->fields.finishCallback;
  if ( finishCallback )
    ActionExtensions__Call(finishCallback, 0LL);
}