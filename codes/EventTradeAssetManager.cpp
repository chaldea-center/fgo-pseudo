void EventTradeAssetManager___ctor(EventTradeAssetManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct System_String_array *v11; // x20
  int32_t v12; // w1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5932C19 & 1) == 0 )
  {
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_6520/*"EventUI/Prefabs/"*/);
    byte_5932C19 = 1;
  }
  v3 = sub_21FFD10(string___TypeInfo, 1);
  if ( !v3 )
    sub_21FFECC(0, v4);
  v11 = (struct System_String_array *)v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_21FFED4(v3);
  v12 = StringLiteral_6520/*"EventUI/Prefabs/"*/;
  *(_QWORD *)(v3 + 32) = StringLiteral_6520/*"EventUI/Prefabs/"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), v12, v5, v6, v7, v8, v9, v10);
  this->fields.loadAssetNames = v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.loadAssetNames,
    (int32_t)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_String_array *loadAssetNames; // x8
  System_String_o *v23; // x20
  System_String_o *v24; // x0
  System_String_o *v25; // x20
  AssetLoader_LoadEndDataHandler_o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2

  if ( (byte_5932C17 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_EventTradeAssetManager___c__DisplayClass37_0__GetAssets_b__0__);
    sub_21FFC50(&EventTradeAssetManager___c__DisplayClass37_0_TypeInfo);
    byte_5932C17 = 1;
  }
  v7 = sub_21FFEBC(EventTradeAssetManager___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15),
        *(_DWORD *)(v7 + 24) = eventId,
        *(_QWORD *)(v7 + 32) = finishCallback,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)(v7 + 32),
          (int32_t)finishCallback,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        (loadAssetNames = this->fields.loadAssetNames) == 0) )
  {
    sub_21FFECC(v8, v9);
  }
  if ( !LODWORD(loadAssetNames->max_length) )
    sub_21FFED4(v8);
  v23 = loadAssetNames->m_Items[0];
  v24 = System_Int32__ToString((int)v7 + 24, 0);
  v25 = System_String__Concat_75438412(v23, v24, 0);
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v26,
    (Il2CppObject *)v7,
    Method_EventTradeAssetManager___c__DisplayClass37_0__GetAssets_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v27, v28);
  AssetManager__loadAssetStorage(v25, v26, 1, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventTradeAssetManager__Release(EventTradeAssetManager_o *this, int32_t eventId, const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7

  if ( (byte_5932C18 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    byte_5932C18 = 1;
  }
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&eventId, method);
  AtlasManager__ReleaseEventUI_47538200(eventId, 0);
  this->fields._TradeSweetsSelectConfirmDialog_k__BackingField = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v5, v6, v7, v8, v9, v10);
  this->fields._TradeSweetsNumConfirmDialog_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TradeSweetsNumConfirmDialog_k__BackingField,
    0,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField,
    0,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._TradeRewardDialog_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TradeRewardDialog_k__BackingField,
    0,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields._TradePointRewardDialog_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TradePointRewardDialog_k__BackingField,
    0,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields._TradeRankUpDialog_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TradeRankUpDialog_k__BackingField,
    0,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields._TradePopularSweetsNotificationDialog_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TradePopularSweetsNotificationDialog_k__BackingField,
    0,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields._TradeButtonBlinkEffect_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TradeButtonBlinkEffect_k__BackingField,
    0,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields._TradePickupInfoBoard_k__BackingField = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TradePickupInfoBoard_k__BackingField,
    0,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._TradeButtonBlinkEffect_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TradeButtonBlinkEffect_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventTradeAssetManager__set_TradePickupInfoBoard(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._TradePickupInfoBoard_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TradePickupInfoBoard_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventTradeAssetManager__set_TradePointRewardDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._TradePointRewardDialog_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TradePointRewardDialog_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventTradeAssetManager__set_TradePopularSweetsNotificationDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._TradePopularSweetsNotificationDialog_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TradePopularSweetsNotificationDialog_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventTradeAssetManager__set_TradeRankUpDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._TradeRankUpDialog_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TradeRankUpDialog_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventTradeAssetManager__set_TradeRewardDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._TradeRewardDialog_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TradeRewardDialog_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventTradeAssetManager__set_TradeSweetsNumConfirmDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._TradeSweetsNumConfirmDialog_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TradeSweetsNumConfirmDialog_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventTradeAssetManager__set_TradeSweetsSelectConfirmDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._TradeSweetsSelectConfirmDialog_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventTradeAssetManager__set_TradeSweetsWithdrawalConfirmDialog(
        EventTradeAssetManager_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct EventTradeAssetManager_o *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct EventTradeAssetManager_o *v19; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct EventTradeAssetManager_o *v26; // x21
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct EventTradeAssetManager_o *v33; // x21
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct EventTradeAssetManager_o *v40; // x21
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  struct EventTradeAssetManager_o *v47; // x21
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  struct EventTradeAssetManager_o *v54; // x21
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  struct EventTradeAssetManager_o *v61; // x21
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  __int64 v68; // x1
  __int64 v69; // x2
  System_Action_o *_9__1; // x21
  int32_t eventId; // w20
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7

  v4 = this;
  if ( (byte_5932C1A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_EventTradeAssetManager___c__DisplayClass37_0__GetAssets_b__1__);
    sub_21FFC50(&StringLiteral_6511/*"EventTradePointRewardDialog"*/);
    sub_21FFC50(&StringLiteral_17984/*"bit_trade_blink"*/);
    sub_21FFC50(&StringLiteral_6515/*"EventTradeSweetsNumConfirmDialog"*/);
    sub_21FFC50(&StringLiteral_6513/*"EventTradeRankUpDialog"*/);
    sub_21FFC50(&StringLiteral_6514/*"EventTradeRewardDialog"*/);
    sub_21FFC50(&StringLiteral_6516/*"EventTradeSweetsSelectConfirmDialog"*/);
    sub_21FFC50(&StringLiteral_6512/*"EventTradePopularSweetsNotificationDialog"*/);
    sub_21FFC50(&StringLiteral_6510/*"EventTradePickupInfoBoard"*/);
    this = (EventTradeAssetManager___c__DisplayClass37_0_o *)sub_21FFC50(&StringLiteral_6517/*"EventTradeSweetsWithdrawalConfirmDialog"*/);
    byte_5932C1A = 1;
  }
  if ( !assetData )
    goto LABEL_18;
  _4__this = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__58323140(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6516/*"EventTradeSweetsSelectConfirmDialog"*/,
                                                             (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !_4__this )
    goto LABEL_18;
  _4__this->fields._TradeSweetsSelectConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&_4__this->fields, (int32_t)this, v6, v7, v8, v9, v10, v11);
  v12 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__58323140(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6515/*"EventTradeSweetsNumConfirmDialog"*/,
                                                             (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !v12 )
    goto LABEL_18;
  v12->fields._TradeSweetsNumConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v12->fields._TradeSweetsNumConfirmDialog_k__BackingField,
    (int32_t)this,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__58323140(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6517/*"EventTradeSweetsWithdrawalConfirmDialog"*/,
                                                             (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !v19 )
    goto LABEL_18;
  v19->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v19->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField,
    (int32_t)this,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__58323140(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6514/*"EventTradeRewardDialog"*/,
                                                             (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !v26 )
    goto LABEL_18;
  v26->fields._TradeRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v26->fields._TradeRewardDialog_k__BackingField,
    (int32_t)this,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__58323140(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6511/*"EventTradePointRewardDialog"*/,
                                                             (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !v33 )
    goto LABEL_18;
  v33->fields._TradePointRewardDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v33->fields._TradePointRewardDialog_k__BackingField,
    (int32_t)this,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__58323140(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6513/*"EventTradeRankUpDialog"*/,
                                                             (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !v40 )
    goto LABEL_18;
  v40->fields._TradeRankUpDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v40->fields._TradeRankUpDialog_k__BackingField,
    (int32_t)this,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__58323140(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_6512/*"EventTradePopularSweetsNotificationDialog"*/,
                                                             (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !v47 )
    goto LABEL_18;
  v47->fields._TradePopularSweetsNotificationDialog_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v47->fields._TradePopularSweetsNotificationDialog_k__BackingField,
    (int32_t)this,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v54 = v4->fields.__4__this;
  this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__58323140(
                                                             assetData,
                                                             (System_String_o *)StringLiteral_17984/*"bit_trade_blink"*/,
                                                             (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !v54
    || (v54->fields._TradeButtonBlinkEffect_k__BackingField = (struct UnityEngine_GameObject_o *)this,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v54->fields._TradeButtonBlinkEffect_k__BackingField,
          (int32_t)this,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60),
        v61 = v4->fields.__4__this,
        this = (EventTradeAssetManager___c__DisplayClass37_0_o *)AssetData__GetObject_object__58323140(
                                                                   assetData,
                                                                   (System_String_o *)StringLiteral_6510/*"EventTradePickupInfoBoard"*/,
                                                                   (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112),
        !v61) )
  {
LABEL_18:
    sub_21FFECC(this, assetData);
  }
  v61->fields._TradePickupInfoBoard_k__BackingField = (struct UnityEngine_GameObject_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v61->fields._TradePickupInfoBoard_k__BackingField,
    (int32_t)this,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  _9__1 = v4->fields.__9__1;
  eventId = v4->fields.eventId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_EventTradeAssetManager___c__DisplayClass37_0__GetAssets_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v72, v73, v74, v75, v76, v77);
  }
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v68, v69);
  AtlasManager__LoadEventUI_47538036(eventId, _9__1, 1, 0);
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