void __fastcall EventTradeAssetManager___ctor(EventTradeAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_String_array *v8; // x20
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A32221 & 1) == 0 )
  {
    sub_1B761C0(&string___TypeInfo, method);
    sub_1B761C0(&StringLiteral_6227/*"EventUI/Prefabs/"*/, v3);
    byte_4A32221 = 1;
  }
  v4 = sub_1B76268(string___TypeInfo, 1LL);
  if ( !v4 )
    sub_1B7641C(0LL, v5);
  v8 = (struct System_String_array *)v4;
  if ( !*(_DWORD *)(v4 + 24) )
    sub_1B76424(v4, v5);
  v9 = StringLiteral_6227/*"EventUI/Prefabs/"*/;
  *(_QWORD *)(v4 + 32) = StringLiteral_6227/*"EventUI/Prefabs/"*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v4 + 32), v9, v6, v7);
  this->fields.loadAssetNames = v8;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.loadAssetNames, (int32_t)v8, v10, v11);
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v18; // x20
  System_String_o *v19; // x0
  System_String_o *v20; // x20
  AssetLoader_LoadEndDataHandler_o *v21; // x21

  if ( (byte_4A3221F & 1) == 0 )
  {
    sub_1B761C0(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1B761C0(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1B761C0(&Method_EventTradeAssetManager___c__DisplayClass37_0__GetAssets_b__0__, v8);
    sub_1B761C0(&EventTradeAssetManager___c__DisplayClass37_0_TypeInfo, v9);
    byte_4A3221F = 1;
  }
  v10 = sub_1B7640C(EventTradeAssetManager___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v13, v14),
        *(_DWORD *)(v10 + 24) = eventId,
        *(_QWORD *)(v10 + 32) = finishCallback,
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)finishCallback, v15, v16),
        (loadAssetNames = this->fields.loadAssetNames) == 0LL) )
  {
    sub_1B7641C(v11, v12);
  }
  if ( !loadAssetNames->max_length )
    sub_1B76424(v11, v12);
  v18 = loadAssetNames->m_Items[0];
  v19 = System_Int32__ToString((int)v10 + 24, 0LL);
  v20 = System_String__Concat_61535060(v18, v19, 0LL);
  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_1B7640C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v21,
    (Il2CppObject *)v10,
    Method_EventTradeAssetManager___c__DisplayClass37_0__GetAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v20, v21, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4A32220 & 1) == 0 )
  {
    sub_1B761C0(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4A32220 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseEventUI_37679364(eventId, 0LL);
  this->fields._TradeSweetsSelectConfirmDialog_k__BackingField = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields, 0, v5, v6);
  this->fields._TradeSweetsNumConfirmDialog_k__BackingField = 0LL;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields._TradeSweetsNumConfirmDialog_k__BackingField,
    0,
    v7,
    v8);
  this->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField = 0LL;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField,
    0,
    v9,
    v10);
  this->fields._TradeRewardDialog_k__BackingField = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields._TradeRewardDialog_k__BackingField, 0, v11, v12);
  this->fields._TradePointRewardDialog_k__BackingField = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields._TradePointRewardDialog_k__BackingField, 0, v13, v14);
  this->fields._TradeRankUpDialog_k__BackingField = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields._TradeRankUpDialog_k__BackingField, 0, v15, v16);
  this->fields._TradePopularSweetsNotificationDialog_k__BackingField = 0LL;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields._TradePopularSweetsNotificationDialog_k__BackingField,
    0,
    v17,
    v18);
  this->fields._TradeButtonBlinkEffect_k__BackingField = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields._TradeButtonBlinkEffect_k__BackingField, 0, v19, v20);
  this->fields._TradePickupInfoBoard_k__BackingField = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields._TradePickupInfoBoard_k__BackingField, 0, v21, v22);
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
  sub_1B76164(
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
  sub_1B76164(
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
  sub_1B76164(
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
  sub_1B76164(
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
  sub_1B76164(
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
  sub_1B76164(
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
  sub_1B76164(
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
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall EventTradeAssetManager__set_TradeSweetsWithdrawalConfirmDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField = value;
  sub_1B76164(
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
  struct EventTradeAssetManager_o *v32; // x21
  int32_t v33; // w2
  int32_t v34; // w3
  struct EventTradeAssetManager_o *v35; // x21
  int32_t v36; // w2
  int32_t v37; // w3
  struct EventTradeAssetManager_o *v38; // x21
  int32_t v39; // w2
  int32_t v40; // w3
  struct EventTradeAssetManager_o *v41; // x21
  int32_t v42; // w2
  int32_t v43; // w3
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20
  int32_t v46; // w2
  int32_t v47; // w3

  v4 = this;
  if ( (byte_4A32222 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, assetData);
    sub_1B761C0(&Method_AssetData_GetObject_GameObject____75903216, v5);
    sub_1B761C0(&AtlasManager_TypeInfo, v6);
    sub_1B761C0(&Method_EventTradeAssetManager___c__DisplayClass37_0__GetAssets_b__1__, v7);
    sub_1B761C0(&StringLiteral_6218/*"EventTradePointRewardDialog"*/, v8);
    sub_1B761C0(&StringLiteral_17308/*"bit_trade_blink"*/, v9);
    sub_1B761C0(&StringLiteral_6222/*"EventTradeSweetsNumConfirmDialog"*/, v10);
    sub_1B761C0(&StringLiteral_6220/*"EventTradeRankUpDialog"*/, v11);
    sub_1B761C0(&StringLiteral_6221/*"EventTradeRewardDialog"*/, v12);
    sub_1B761C0(&StringLiteral_6223/*"EventTradeSweetsSelectConfirmDialog"*/, v13);
    sub_1B761C0(&StringLiteral_6219/*"EventTradePopularSweetsNotificationDialog"*/, v14);
    sub_1B761C0(&StringLiteral_6217/*"EventTradePickupInfoBoard"*/, v15);
    this = (EventTradeAssetManager___c__DisplayClass37_0_o *)sub_1B761C0(&StringLiteral_6224/*"EventTradeSweetsWithdrawalConfirmDialog"*/, v16);
    byte_4A32222 = 1;
  }
  if ( !assetData )
    goto LABEL_18;
  _4__this = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__48515452(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6223/*"EventTradeSweetsSelectConfirmDialog"*/,
                                                             (const MethodInfo_2E4497C *)Method_AssetData_GetObject_GameObject____75903216);
  if ( !_4__this )
    goto LABEL_18;
  _4__this->fields._TradeSweetsSelectConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&_4__this->fields, (int32_t)this, v18, v19);
  v20 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__48515452(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6222/*"EventTradeSweetsNumConfirmDialog"*/,
                                                             (const MethodInfo_2E4497C *)Method_AssetData_GetObject_GameObject____75903216);
  if ( !v20 )
    goto LABEL_18;
  v20->fields._TradeSweetsNumConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&v20->fields._TradeSweetsNumConfirmDialog_k__BackingField,
    (int32_t)this,
    v21,
    v22);
  v23 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__48515452(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6224/*"EventTradeSweetsWithdrawalConfirmDialog"*/,
                                                             (const MethodInfo_2E4497C *)Method_AssetData_GetObject_GameObject____75903216);
  if ( !v23 )
    goto LABEL_18;
  v23->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&v23->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField,
    (int32_t)this,
    v24,
    v25);
  v26 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__48515452(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6221/*"EventTradeRewardDialog"*/,
                                                             (const MethodInfo_2E4497C *)Method_AssetData_GetObject_GameObject____75903216);
  if ( !v26 )
    goto LABEL_18;
  v26->fields._TradeRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&v26->fields._TradeRewardDialog_k__BackingField,
    (int32_t)this,
    v27,
    v28);
  v29 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__48515452(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6218/*"EventTradePointRewardDialog"*/,
                                                             (const MethodInfo_2E4497C *)Method_AssetData_GetObject_GameObject____75903216);
  if ( !v29 )
    goto LABEL_18;
  v29->fields._TradePointRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&v29->fields._TradePointRewardDialog_k__BackingField,
    (int32_t)this,
    v30,
    v31);
  v32 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__48515452(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6220/*"EventTradeRankUpDialog"*/,
                                                             (const MethodInfo_2E4497C *)Method_AssetData_GetObject_GameObject____75903216);
  if ( !v32 )
    goto LABEL_18;
  v32->fields._TradeRankUpDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&v32->fields._TradeRankUpDialog_k__BackingField,
    (int32_t)this,
    v33,
    v34);
  v35 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__48515452(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6219/*"EventTradePopularSweetsNotificationDialog"*/,
                                                             (const MethodInfo_2E4497C *)Method_AssetData_GetObject_GameObject____75903216);
  if ( !v35 )
    goto LABEL_18;
  v35->fields._TradePopularSweetsNotificationDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&v35->fields._TradePopularSweetsNotificationDialog_k__BackingField,
    (int32_t)this,
    v36,
    v37);
  v38 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__48515452(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17308/*"bit_trade_blink"*/,
                                                             (const MethodInfo_2E4497C *)Method_AssetData_GetObject_GameObject____75903216);
  if ( !v38
    || (v38->fields._TradeButtonBlinkEffect_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_1B76164(
          (ServantStatusBattleListViewItem_o *)&v38->fields._TradeButtonBlinkEffect_k__BackingField,
          (int32_t)this,
          v39,
          v40),
        v41 = v4->fields.__4__this,
        this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__48515452(
                                                                   assetData,
                                                                   (System_String_o *)StringLiteral_6217/*"EventTradePickupInfoBoard"*/,
                                                                   (const MethodInfo_2E4497C *)Method_AssetData_GetObject_GameObject____75903216),
        !v41) )
  {
LABEL_18:
    sub_1B7641C(this, assetData);
  }
  v41->fields._TradePickupInfoBoard_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&v41->fields._TradePickupInfoBoard_k__BackingField,
    (int32_t)this,
    v42,
    v43);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_EventTradeAssetManager___c__DisplayClass37_0__GetAssets_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v46, v47);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_37679192(eventId, _9__1, 1, 0LL);
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