void __fastcall EventTradeAssetManager___ctor(EventTradeAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  struct System_String_array *v7; // x20
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5F47A & 1) == 0 )
  {
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_6228/*"EventUI/Prefabs/"*/);
    byte_4A5F47A = 1;
  }
  v3 = sub_1B88658(string___TypeInfo, 1LL);
  if ( !v3 )
    sub_1B8880C(0LL, v4);
  v7 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1B88814(v3, v4);
  v8 = StringLiteral_6228/*"EventUI/Prefabs/"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_6228/*"EventUI/Prefabs/"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), v8, v5, v6);
  this->fields.loadAssetNames = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.loadAssetNames, (int32_t)v7, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTradeAssetManager__GetAssets(
        EventTradeAssetManager_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v15; // x20
  System_String_o *v16; // x0
  System_String_o *v17; // x20
  AssetLoader_LoadEndDataHandler_o *v18; // x21

  if ( (byte_4A5F478 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_EventTradeAssetManager___c__DisplayClass37_0__GetAssets_b__0__);
    sub_1B885B0(&EventTradeAssetManager___c__DisplayClass37_0_TypeInfo);
    byte_4A5F478 = 1;
  }
  v7 = sub_1B887FC(EventTradeAssetManager___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11),
        *(_DWORD *)(v7 + 24) = eventId,
        *(_QWORD *)(v7 + 32) = finishCallback,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)finishCallback, v12, v13),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_1B8880C(v8, v9);
  }
  if ( !loadAssetNames->max_length )
    sub_1B88814(v8, v9);
  v15 = loadAssetNames->m_Items[0];
  v16 = System_Int32__ToString((int)v7 + 24, 0LL);
  v17 = System_String__Concat_61707032(v15, v16, 0LL);
  v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v18,
    (Il2CppObject *)v7,
    Method_EventTradeAssetManager___c__DisplayClass37_0__GetAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v17, v18, 1, 0LL);
}


void __fastcall EventTradeAssetManager__Release(
        EventTradeAssetManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A5F479 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    byte_4A5F479 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_37859248(eventId, 0LL);
  this->fields._TradeSweetsSelectConfirmDialog_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, 0, v5, v6);
  this->fields._TradeSweetsNumConfirmDialog_k__BackingField = 0LL;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._TradeSweetsNumConfirmDialog_k__BackingField,
    0,
    v7,
    v8);
  this->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField = 0LL;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField,
    0,
    v9,
    v10);
  this->fields._TradeRewardDialog_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._TradeRewardDialog_k__BackingField, 0, v11, v12);
  this->fields._TradePointRewardDialog_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._TradePointRewardDialog_k__BackingField, 0, v13, v14);
  this->fields._TradeRankUpDialog_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._TradeRankUpDialog_k__BackingField, 0, v15, v16);
  this->fields._TradePopularSweetsNotificationDialog_k__BackingField = 0LL;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._TradePopularSweetsNotificationDialog_k__BackingField,
    0,
    v17,
    v18);
  this->fields._TradeButtonBlinkEffect_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._TradeButtonBlinkEffect_k__BackingField, 0, v19, v20);
  this->fields._TradePickupInfoBoard_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._TradePickupInfoBoard_k__BackingField, 0, v21, v22);
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
  int32_t v3; // w3

  this->fields._TradeButtonBlinkEffect_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._TradeButtonBlinkEffect_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall EventTradeAssetManager__set_TradePickupInfoBoard(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._TradePickupInfoBoard_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._TradePickupInfoBoard_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall EventTradeAssetManager__set_TradePointRewardDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._TradePointRewardDialog_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._TradePointRewardDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall EventTradeAssetManager__set_TradePopularSweetsNotificationDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._TradePopularSweetsNotificationDialog_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._TradePopularSweetsNotificationDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall EventTradeAssetManager__set_TradeRankUpDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._TradeRankUpDialog_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._TradeRankUpDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall EventTradeAssetManager__set_TradeRewardDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._TradeRewardDialog_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._TradeRewardDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall EventTradeAssetManager__set_TradeSweetsNumConfirmDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._TradeSweetsNumConfirmDialog_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._TradeSweetsNumConfirmDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall EventTradeAssetManager__set_TradeSweetsSelectConfirmDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._TradeSweetsSelectConfirmDialog_k__BackingField = value;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall EventTradeAssetManager__set_TradeSweetsWithdrawalConfirmDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  struct EventTradeAssetManager_o *_4__this; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  struct EventTradeAssetManager_o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  struct EventTradeAssetManager_o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  struct EventTradeAssetManager_o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  struct EventTradeAssetManager_o *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  struct EventTradeAssetManager_o *v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  struct EventTradeAssetManager_o *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  struct EventTradeAssetManager_o *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  struct EventTradeAssetManager_o *v29; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20
  int32_t v34; // w2
  int32_t v35; // w3

  v4 = this;
  if ( (byte_4A5F47B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_EventTradeAssetManager___c__DisplayClass37_0__GetAssets_b__1__);
    sub_1B885B0(&StringLiteral_6219/*"EventTradePointRewardDialog"*/);
    sub_1B885B0(&StringLiteral_17314/*"bit_trade_blink"*/);
    sub_1B885B0(&StringLiteral_6223/*"EventTradeSweetsNumConfirmDialog"*/);
    sub_1B885B0(&StringLiteral_6221/*"EventTradeRankUpDialog"*/);
    sub_1B885B0(&StringLiteral_6222/*"EventTradeRewardDialog"*/);
    sub_1B885B0(&StringLiteral_6224/*"EventTradeSweetsSelectConfirmDialog"*/);
    sub_1B885B0(&StringLiteral_6220/*"EventTradePopularSweetsNotificationDialog"*/);
    sub_1B885B0(&StringLiteral_6218/*"EventTradePickupInfoBoard"*/);
    this = (EventTradeAssetManager___c__DisplayClass37_0_o *)sub_1B885B0(&StringLiteral_6225/*"EventTradeSweetsWithdrawalConfirmDialog"*/);
    byte_4A5F47B = 1;
  }
  if ( !assetData )
    goto LABEL_18;
  _4__this = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6224/*"EventTradeSweetsSelectConfirmDialog"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !_4__this )
    goto LABEL_18;
  _4__this->fields._TradeSweetsSelectConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields, (int32_t)this, v6, v7);
  v8 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6223/*"EventTradeSweetsNumConfirmDialog"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v8 )
    goto LABEL_18;
  v8->fields._TradeSweetsNumConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v8->fields._TradeSweetsNumConfirmDialog_k__BackingField,
    (int32_t)this,
    v9,
    v10);
  v11 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6225/*"EventTradeSweetsWithdrawalConfirmDialog"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v11 )
    goto LABEL_18;
  v11->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v11->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField,
    (int32_t)this,
    v12,
    v13);
  v14 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6222/*"EventTradeRewardDialog"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v14 )
    goto LABEL_18;
  v14->fields._TradeRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v14->fields._TradeRewardDialog_k__BackingField,
    (int32_t)this,
    v15,
    v16);
  v17 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6219/*"EventTradePointRewardDialog"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v17 )
    goto LABEL_18;
  v17->fields._TradePointRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v17->fields._TradePointRewardDialog_k__BackingField,
    (int32_t)this,
    v18,
    v19);
  v20 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6221/*"EventTradeRankUpDialog"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v20 )
    goto LABEL_18;
  v20->fields._TradeRankUpDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v20->fields._TradeRankUpDialog_k__BackingField,
    (int32_t)this,
    v21,
    v22);
  v23 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6220/*"EventTradePopularSweetsNotificationDialog"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v23 )
    goto LABEL_18;
  v23->fields._TradePopularSweetsNotificationDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v23->fields._TradePopularSweetsNotificationDialog_k__BackingField,
    (int32_t)this,
    v24,
    v25);
  v26 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__48635516(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17314/*"bit_trade_blink"*/,
                                                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !v26
    || (v26->fields._TradeButtonBlinkEffect_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&v26->fields._TradeButtonBlinkEffect_k__BackingField,
          (int32_t)this,
          v27,
          v28),
        v29 = v4->fields.__4__this,
        this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__48635516(
                                                                   assetData,
                                                                   (System_String_o *)StringLiteral_6218/*"EventTradePickupInfoBoard"*/,
                                                                   (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352),
        !v29) )
  {
LABEL_18:
    sub_1B8880C(this, assetData);
  }
  v29->fields._TradePickupInfoBoard_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v29->fields._TradePickupInfoBoard_k__BackingField,
    (int32_t)this,
    v30,
    v31);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_EventTradeAssetManager___c__DisplayClass37_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v34, v35);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_37859084(eventId, _9__1, 1, 0LL);
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