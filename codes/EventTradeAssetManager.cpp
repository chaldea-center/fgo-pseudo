void __fastcall EventTradeAssetManager___ctor(EventTradeAssetManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_String_array *v8; // x20
  __int64 v9; // x1

  if ( (byte_4B11277 & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6348/*"EventUI/Prefabs/"*/, v4, v5);
    byte_4B11277 = 1;
  }
  v6 = sub_1BCA888(string___TypeInfo, 1LL);
  if ( !v6 )
    sub_1BCAA3C(0LL, v7);
  v8 = (struct System_String_array *)v6;
  if ( !*(_DWORD *)(v6 + 24) )
    sub_1BCAA44(v6, v7);
  v9 = StringLiteral_6348/*"EventUI/Prefabs/"*/;
  *(_QWORD *)(v6 + 32) = StringLiteral_6348/*"EventUI/Prefabs/"*/;
  sub_1BCA784(v6 + 32, v9);
  this->fields.loadAssetNames = v8;
  sub_1BCA784(&this->fields.loadAssetNames, v8);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v17; // x20
  System_String_o *v18; // x0
  System_String_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  AssetLoader_LoadEndDataHandler_o *v23; // x21
  __int64 v24; // x1

  if ( (byte_4B11275 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&eventId, finishCallback);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_EventTradeAssetManager___c__DisplayClass37_0__GetAssets_b__0__, v9, v10);
    sub_1BCA7E0(&EventTradeAssetManager___c__DisplayClass37_0_TypeInfo, v11, v12);
    byte_4B11275 = 1;
  }
  v13 = sub_1BCAA2C(EventTradeAssetManager___c__DisplayClass37_0_TypeInfo, *(_QWORD *)&eventId, finishCallback, method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13
    || (*(_QWORD *)(v13 + 16) = this,
        sub_1BCA784(v13 + 16, this),
        *(_DWORD *)(v13 + 24) = eventId,
        *(_QWORD *)(v13 + 32) = finishCallback,
        v14 = sub_1BCA784(v13 + 32, finishCallback),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_1BCAA3C(v14, v15);
  }
  if ( !loadAssetNames->max_length )
    sub_1BCAA44(v14, v15);
  v17 = loadAssetNames->m_Items[0];
  v18 = System_Int32__ToString((int)v13 + 24, 0LL);
  v19 = System_String__Concat_62401220(v17, v18, 0LL);
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v20, v21, v22);
  AssetLoader_LoadEndDataHandler___ctor(
    v23,
    (Il2CppObject *)v13,
    Method_EventTradeAssetManager___c__DisplayClass37_0__GetAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v24);
  AssetManager__loadAssetStorage(v19, v23, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeAssetManager__Release(
        EventTradeAssetManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  if ( (byte_4B11276 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&eventId, method);
    byte_4B11276 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&eventId);
  AtlasManager__ReleaseEventUI_38574456(eventId, 0LL);
  this->fields._TradeSweetsSelectConfirmDialog_k__BackingField = 0LL;
  sub_1BCA784(&this->fields, 0LL);
  this->fields._TradeSweetsNumConfirmDialog_k__BackingField = 0LL;
  sub_1BCA784(&this->fields._TradeSweetsNumConfirmDialog_k__BackingField, 0LL);
  this->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField = 0LL;
  sub_1BCA784(&this->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField, 0LL);
  this->fields._TradeRewardDialog_k__BackingField = 0LL;
  sub_1BCA784(&this->fields._TradeRewardDialog_k__BackingField, 0LL);
  this->fields._TradePointRewardDialog_k__BackingField = 0LL;
  sub_1BCA784(&this->fields._TradePointRewardDialog_k__BackingField, 0LL);
  this->fields._TradeRankUpDialog_k__BackingField = 0LL;
  sub_1BCA784(&this->fields._TradeRankUpDialog_k__BackingField, 0LL);
  this->fields._TradePopularSweetsNotificationDialog_k__BackingField = 0LL;
  sub_1BCA784(&this->fields._TradePopularSweetsNotificationDialog_k__BackingField, 0LL);
  this->fields._TradeButtonBlinkEffect_k__BackingField = 0LL;
  sub_1BCA784(&this->fields._TradeButtonBlinkEffect_k__BackingField, 0LL);
  this->fields._TradePickupInfoBoard_k__BackingField = 0LL;
  sub_1BCA784(&this->fields._TradePickupInfoBoard_k__BackingField, 0LL);
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
  sub_1BCA784(&this->fields._TradeButtonBlinkEffect_k__BackingField, value);
}


void __fastcall EventTradeAssetManager__set_TradePickupInfoBoard(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._TradePickupInfoBoard_k__BackingField = value;
  sub_1BCA784(&this->fields._TradePickupInfoBoard_k__BackingField, value);
}


void __fastcall EventTradeAssetManager__set_TradePointRewardDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._TradePointRewardDialog_k__BackingField = value;
  sub_1BCA784(&this->fields._TradePointRewardDialog_k__BackingField, value);
}


void __fastcall EventTradeAssetManager__set_TradePopularSweetsNotificationDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._TradePopularSweetsNotificationDialog_k__BackingField = value;
  sub_1BCA784(&this->fields._TradePopularSweetsNotificationDialog_k__BackingField, value);
}


void __fastcall EventTradeAssetManager__set_TradeRankUpDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._TradeRankUpDialog_k__BackingField = value;
  sub_1BCA784(&this->fields._TradeRankUpDialog_k__BackingField, value);
}


void __fastcall EventTradeAssetManager__set_TradeRewardDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._TradeRewardDialog_k__BackingField = value;
  sub_1BCA784(&this->fields._TradeRewardDialog_k__BackingField, value);
}


void __fastcall EventTradeAssetManager__set_TradeSweetsNumConfirmDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._TradeSweetsNumConfirmDialog_k__BackingField = value;
  sub_1BCA784(&this->fields._TradeSweetsNumConfirmDialog_k__BackingField, value);
}


void __fastcall EventTradeAssetManager__set_TradeSweetsSelectConfirmDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._TradeSweetsSelectConfirmDialog_k__BackingField = value;
  sub_1BCA784(&this->fields, value);
}


void __fastcall EventTradeAssetManager__set_TradeSweetsWithdrawalConfirmDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  this->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField = value;
  sub_1BCA784(&this->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField, value);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  struct EventTradeAssetManager_o *_4__this; // x21
  struct EventTradeAssetManager_o *v30; // x21
  struct EventTradeAssetManager_o *v31; // x21
  struct EventTradeAssetManager_o *v32; // x21
  struct EventTradeAssetManager_o *v33; // x21
  struct EventTradeAssetManager_o *v34; // x21
  struct EventTradeAssetManager_o *v35; // x21
  struct EventTradeAssetManager_o *v36; // x21
  struct EventTradeAssetManager_o *v37; // x21
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20

  v4 = this;
  if ( (byte_4B11278 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, assetData, method);
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, v5, v6);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_EventTradeAssetManager___c__DisplayClass37_0__GetAssets_b__1__, v9, v10);
    sub_1BCA7E0(&StringLiteral_6339/*"EventTradePointRewardDialog"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17485/*"bit_trade_blink"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_6343/*"EventTradeSweetsNumConfirmDialog"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_6341/*"EventTradeRankUpDialog"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_6342/*"EventTradeRewardDialog"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_6344/*"EventTradeSweetsSelectConfirmDialog"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_6340/*"EventTradePopularSweetsNotificationDialog"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_6338/*"EventTradePickupInfoBoard"*/, v25, v26);
    this = (EventTradeAssetManager___c__DisplayClass37_0_o *)sub_1BCA7E0(&StringLiteral_6345/*"EventTradeSweetsWithdrawalConfirmDialog"*/, v27, v28);
    byte_4B11278 = 1;
  }
  if ( !assetData )
    goto LABEL_18;
  _4__this = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__49237568(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6344/*"EventTradeSweetsSelectConfirmDialog"*/,
                                                             (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !_4__this )
    goto LABEL_18;
  _4__this->fields._TradeSweetsSelectConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCA784(&_4__this->fields, this);
  v30 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__49237568(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6343/*"EventTradeSweetsNumConfirmDialog"*/,
                                                             (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !v30 )
    goto LABEL_18;
  v30->fields._TradeSweetsNumConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCA784(&v30->fields._TradeSweetsNumConfirmDialog_k__BackingField, this);
  v31 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__49237568(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6345/*"EventTradeSweetsWithdrawalConfirmDialog"*/,
                                                             (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !v31 )
    goto LABEL_18;
  v31->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCA784(&v31->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField, this);
  v32 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__49237568(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6342/*"EventTradeRewardDialog"*/,
                                                             (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !v32 )
    goto LABEL_18;
  v32->fields._TradeRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCA784(&v32->fields._TradeRewardDialog_k__BackingField, this);
  v33 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__49237568(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6339/*"EventTradePointRewardDialog"*/,
                                                             (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !v33 )
    goto LABEL_18;
  v33->fields._TradePointRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCA784(&v33->fields._TradePointRewardDialog_k__BackingField, this);
  v34 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__49237568(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6341/*"EventTradeRankUpDialog"*/,
                                                             (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !v34 )
    goto LABEL_18;
  v34->fields._TradeRankUpDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCA784(&v34->fields._TradeRankUpDialog_k__BackingField, this);
  v35 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__49237568(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6340/*"EventTradePopularSweetsNotificationDialog"*/,
                                                             (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !v35 )
    goto LABEL_18;
  v35->fields._TradePopularSweetsNotificationDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCA784(&v35->fields._TradePopularSweetsNotificationDialog_k__BackingField, this);
  v36 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__49237568(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17485/*"bit_trade_blink"*/,
                                                             (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !v36
    || (v36->fields._TradeButtonBlinkEffect_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1BCA784(&v36->fields._TradeButtonBlinkEffect_k__BackingField, this),
        v37 = v4->fields.__4__this,
        this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__49237568(
                                                                   assetData,
                                                                   (System_String_o *)StringLiteral_6338/*"EventTradePickupInfoBoard"*/,
                                                                   (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696),
        !v37) )
  {
LABEL_18:
    sub_1BCAA3C(this, assetData);
  }
  v37->fields._TradePickupInfoBoard_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1BCA784(&v37->fields._TradePickupInfoBoard_k__BackingField, this);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v38, v39, v40);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_EventTradeAssetManager___c__DisplayClass37_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1BCA784(&v4->fields.__9__1, _9__1);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v38);
  AtlasManager__LoadEventUI_38574292(eventId, _9__1, 1, 0LL);
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