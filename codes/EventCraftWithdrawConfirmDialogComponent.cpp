void __fastcall EventCraftWithdrawConfirmDialogComponent___ctor(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *v6; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1

  if ( (byte_4B1A02B & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___TypeInfo, v4, v5);
    byte_4B1A02B = 1;
  }
  v6 = (struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *)sub_1BCA888(
                                                                                      EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___TypeInfo,
                                                                                      2LL);
  this->fields.withdrawnItemUiBefore = v6;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.withdrawnItemUiBefore, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  v13 = (struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *)sub_1BCA888(
                                                                                       EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___TypeInfo,
                                                                                       2LL);
  this->fields.withdrawnItemUiAfter = v13;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.withdrawnItemUiAfter,
    (int64_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v20);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventCraftWithdrawConfirmDialogComponent__CallOnDecide(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_onDecide; // x0
  struct System_Action_bool__o *v9; // x20
  struct System_Action_bool__o *onDecide; // t1

  onDecide = this->fields.onDecide;
  p_onDecide = (PartyOrganizationUtility_o *)&this->fields.onDecide;
  v9 = onDecide;
  if ( onDecide )
  {
    p_onDecide->klass = 0LL;
    sub_1BCA784(p_onDecide, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      result,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall EventCraftWithdrawConfirmDialogComponent__Close(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B1A029 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventCraftWithdrawConfirmDialogComponent_Init__, v5, v6);
    byte_4B1A029 = 1;
  }
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EventCraftWithdrawConfirmDialogComponent_Init__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall EventCraftWithdrawConfirmDialogComponent__Init(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  EventCraftListViewManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0LL);
  this->fields.state = 0;
  this->fields.tradeGoodsEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tradeGoodsEntity, 0LL, v3, v4, v5, v6, v7, v8);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventCraftWithdrawConfirmDialogComponent__OnClickCancel(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B1A028 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__, method, v2);
    byte_4B1A028 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    EventCraftWithdrawConfirmDialogComponent__Close(this, v6);
  }
}


void __fastcall EventCraftWithdrawConfirmDialogComponent__OnClickDecide(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B1A027 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__, method, v2);
    byte_4B1A027 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    EventCraftWithdrawConfirmDialogComponent__CallOnDecide(this, 1, v6);
  }
}


void __fastcall EventCraftWithdrawConfirmDialogComponent__Open(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        EventCraftListViewItem_o *item,
        System_Action_bool__o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x20

  if ( (byte_4B1A024 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, item, callback);
    sub_1BCA7E0(&Method_EventCraftWithdrawConfirmDialogComponent__Open_b__24_0__, v7, v8);
    byte_4B1A024 = 1;
  }
  if ( !this->fields.state )
  {
    EventCraftWithdrawConfirmDialogComponent__SetUpUi(this, item, callback, method);
    this->fields.state = 1;
    v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      v12,
      (Il2CppObject *)this,
      Method_EventCraftWithdrawConfirmDialogComponent__Open_b__24_0__,
      0LL);
    BaseDialog__Open((BaseDialog_o *)this, v12, 0, 0LL);
  }
}


void __fastcall EventCraftWithdrawConfirmDialogComponent__SetUpUi(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        EventCraftListViewItem_o *item,
        System_Action_bool__o *decideCallback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  EventCraftWithdrawConfirmDialogComponent_o *v10; // x20
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
  __int64 v29; // x1
  __int64 v30; // x2
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x1
  struct EventTradeGoodsEntity_o **p_tradeGoodsEntity; // x21
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x1
  UILabel_o *titleLabel; // x22
  UILabel_o *detailLabel; // x22
  UILabel_o *withdrawnItemUiHeaderLbBefore; // x22
  UILabel_o *withdrawnItemUiHeaderLbAfter; // x22
  UILabel_o *withdrawnItemUiTitleLabel; // x22
  UILabel_o *withdrawnItemNoneLabel; // x22
  UILabel_o *cancelButtonLb; // x22
  UILabel_o *decideButtonLb; // x22
  __int64 v48; // x1
  CommonConsumeEntity_array *SortedEntityList; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  bool v57; // w21
  int32_t NowTradeNum; // w0
  const MethodInfo *v59; // x2
  int32_t v60; // w21

  v10 = this;
  if ( (byte_4B1A025 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonConsumeMaster___, item, decideCallback);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_13573/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_3995/*"CRAFT_EVENT_WITHDRAWAL_DIALOG_TITLE"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_13578/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_13572/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_13575/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_3994/*"CRAFT_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/, v27, v28);
    this = (EventCraftWithdrawConfirmDialogComponent_o *)sub_1BCA7E0(&StringLiteral_13577/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/, v29, v30);
    byte_4B1A025 = 1;
  }
  if ( !item )
    goto LABEL_28;
  TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
  v10->fields.tradeGoodsEntity = TradeGoodsEntity_k__BackingField;
  p_tradeGoodsEntity = &v10->fields.tradeGoodsEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v10->fields.tradeGoodsEntity,
    (int64_t)TradeGoodsEntity_k__BackingField,
    (int64_t)decideCallback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v10->fields.onDecide = decideCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v10->fields.onDecide,
    (int64_t)decideCallback,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  titleLabel = v10->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3995/*"CRAFT_EVENT_WITHDRAWAL_DIALOG_TITLE"*/,
                                                         0LL);
  if ( !titleLabel )
    goto LABEL_28;
  UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
  detailLabel = v10->fields.detailLabel;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3994/*"CRAFT_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/,
                                                         0LL);
  if ( !detailLabel )
    goto LABEL_28;
  UILabel__set_text(detailLabel, (System_String_o *)this, 0LL);
  withdrawnItemUiHeaderLbBefore = v10->fields.withdrawnItemUiHeaderLbBefore;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13573/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/,
                                                         0LL);
  if ( !withdrawnItemUiHeaderLbBefore )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemUiHeaderLbBefore, (System_String_o *)this, 0LL);
  withdrawnItemUiHeaderLbAfter = v10->fields.withdrawnItemUiHeaderLbAfter;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13572/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/,
                                                         0LL);
  if ( !withdrawnItemUiHeaderLbAfter )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemUiHeaderLbAfter, (System_String_o *)this, 0LL);
  withdrawnItemUiTitleLabel = v10->fields.withdrawnItemUiTitleLabel;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13577/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/,
                                                         0LL);
  if ( !withdrawnItemUiTitleLabel )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemUiTitleLabel, (System_String_o *)this, 0LL);
  withdrawnItemNoneLabel = v10->fields.withdrawnItemNoneLabel;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13578/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/,
                                                         0LL);
  if ( !withdrawnItemNoneLabel )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemNoneLabel, (System_String_o *)this, 0LL);
  cancelButtonLb = v10->fields.cancelButtonLb;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/,
                                                         0LL);
  if ( !cancelButtonLb )
    goto LABEL_28;
  UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0LL);
  decideButtonLb = v10->fields.decideButtonLb;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13575/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/,
                                                         0LL);
  if ( !decideButtonLb )
    goto LABEL_28;
  UILabel__set_text(decideButtonLb, (System_String_o *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v48);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !*p_tradeGoodsEntity )
    goto LABEL_28;
  if ( !this )
    goto LABEL_28;
  SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                       (CommonConsumeMaster_o *)this,
                       (*p_tradeGoodsEntity)->fields.commonConsumeId,
                       0LL);
  v10->fields.consumeItemList = SortedEntityList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v10->fields.consumeItemList,
    (int64_t)SortedEntityList,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_28;
  v57 = !TradeInfo_k__BackingField->fields.tradeNum && TradeInfo_k__BackingField->fields.getNum == 0;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)v10->fields.withdrawnItemNoneLabel;
  if ( !this )
    goto LABEL_28;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
  if ( !this )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v57, 0LL);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)v10->fields.withdrawnItemUiParentObject;
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v57, 0LL),
        NowTradeNum = EventCraftListViewItem__get_NowTradeNum(item, 0LL),
        EventCraftWithdrawConfirmDialogComponent__SetWithdrawnItemUi(v10, NowTradeNum, v59),
        this = (EventCraftWithdrawConfirmDialogComponent_o *)EventCraftListViewItemDraw__GetDisplayMode(2, item, 0LL),
        !v10->fields.listViewItemDraw)
    || (v60 = (int)this,
        EventCraftListViewItemDraw__SetItem(v10->fields.listViewItemDraw, item, (int32_t)this, 0LL),
        (this = (EventCraftWithdrawConfirmDialogComponent_o *)v10->fields.listViewItemDraw) == 0LL) )
  {
LABEL_28:
    sub_1BCAA3C(this, item);
  }
  EventCraftListViewItemDraw__UpdateItem((EventCraftListViewItemDraw_o *)this, item, v60, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftWithdrawConfirmDialogComponent__SetWithdrawnItemUi(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        int32_t nowTradeNum,
        const MethodInfo *method)
{
  EventCraftWithdrawConfirmDialogComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct CommonConsumeEntity_array *consumeItemList; // x9
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *withdrawnItemUiBefore; // x8
  il2cpp_array_size_t max_length; // w11
  unsigned int v17; // w9
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *v18; // x9
  EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_o *v19; // x26
  EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_o **m_Items; // x8
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *withdrawnItemUiAfter; // x9
  EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_o *v22; // x27
  struct CommonConsumeEntity_array *v23; // x8
  UserItemMaster_o *v24; // x21
  __int64 v25; // x29
  il2cpp_array_size_t v26; // w25
  struct CommonConsumeEntity_array *v27; // x8
  __int64 v28; // x8
  struct UISprite_array *itemIcon; // x8
  il2cpp_array_size_t v30; // w9
  EventCraftWithdrawConfirmDialogComponent_o *v31; // x22
  struct UILabel_array *countOperatorLb; // x10
  struct UILabel_array *countLb; // x10
  struct CommonConsumeEntity_array *v34; // x9
  __int64 v35; // x9
  UISprite_o *v36; // x23
  int32_t v37; // w24
  struct UILabel_array *v38; // x8
  UILabel_o *v39; // x23
  struct UILabel_array *v40; // x8
  UILabel_o *v41; // x23
  struct UISprite_array *v42; // x8
  il2cpp_array_size_t v43; // w9
  struct UILabel_array *v44; // x10
  struct UILabel_array *v45; // x10
  struct CommonConsumeEntity_array *v46; // x9
  __int64 v47; // x9
  UISprite_o *v48; // x23
  int32_t v49; // w24
  struct UILabel_array *v50; // x8
  UILabel_o *v51; // x23
  struct UILabel_array *v52; // x8
  struct CommonConsumeEntity_array *v53; // x9
  __int64 v54; // x9
  int m_CancellationTokenSource_high; // w10
  UILabel_o *v56; // x22
  float v57; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v59; // x0
  il2cpp_array_size_t v60; // [xsp+8h] [xbp-68h]

  v3 = this;
  if ( (byte_4B1A026 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&nowTradeNum, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v10, v11);
    this = (EventCraftWithdrawConfirmDialogComponent_o *)sub_1BCA7E0(&StringLiteral_3800/*"COMMON_COUNT_OPERATOR_CROSS"*/, v12, v13);
    byte_4B1A026 = 1;
  }
  consumeItemList = v3->fields.consumeItemList;
  if ( !consumeItemList )
    goto LABEL_84;
  withdrawnItemUiBefore = v3->fields.withdrawnItemUiBefore;
  if ( !withdrawnItemUiBefore )
    goto LABEL_84;
  max_length = consumeItemList->max_length;
  v17 = withdrawnItemUiBefore->max_length;
  v60 = max_length;
  if ( max_length != 2 )
  {
    if ( v17 > 1 )
    {
      withdrawnItemUiAfter = v3->fields.withdrawnItemUiAfter;
      if ( !withdrawnItemUiAfter )
        goto LABEL_84;
      if ( withdrawnItemUiAfter->max_length > 1 )
      {
        v19 = withdrawnItemUiBefore->m_Items[1];
        m_Items = &withdrawnItemUiAfter->m_Items[1];
        goto LABEL_14;
      }
    }
LABEL_85:
    sub_1BCAA44(this, *(_QWORD *)&nowTradeNum);
  }
  if ( !v17 )
    goto LABEL_85;
  v18 = v3->fields.withdrawnItemUiAfter;
  if ( !v18 )
    goto LABEL_84;
  if ( !v18->max_length )
    goto LABEL_85;
  v19 = withdrawnItemUiBefore->m_Items[0];
  m_Items = v18->m_Items;
LABEL_14:
  v22 = *m_Items;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&nowTradeNum);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  v23 = v3->fields.consumeItemList;
  if ( !v23 )
    goto LABEL_84;
  v24 = (UserItemMaster_o *)this;
  v25 = 4LL;
  while ( 1 )
  {
    v26 = v25 - 4;
    if ( (int)v25 - 4 >= (signed int)v23->max_length )
      break;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&nowTradeNum);
    this = (EventCraftWithdrawConfirmDialogComponent_o *)NetworkManager__get_UserId(0LL);
    v27 = v3->fields.consumeItemList;
    if ( !v27 )
      goto LABEL_84;
    if ( v26 >= v27->max_length )
      goto LABEL_85;
    v28 = *((_QWORD *)&v27->obj.klass + v25);
    if ( !v28 )
      goto LABEL_84;
    if ( !v24 )
      goto LABEL_84;
    this = (EventCraftWithdrawConfirmDialogComponent_o *)UserItemMaster__GetEntityDefinitely(
                                                           v24,
                                                           (int64_t)this,
                                                           *(_DWORD *)(v28 + 28),
                                                           0LL);
    if ( !v19 )
      goto LABEL_84;
    itemIcon = v19->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_84;
    v30 = itemIcon->max_length;
    v31 = this;
    if ( (int)v26 < (int)v30 )
    {
      countOperatorLb = v19->fields.countOperatorLb;
      if ( !countOperatorLb )
        goto LABEL_84;
      if ( (signed int)v26 < (signed int)countOperatorLb->max_length )
      {
        countLb = v19->fields.countLb;
        if ( !countLb )
          goto LABEL_84;
        if ( (signed int)v26 < (signed int)countLb->max_length )
        {
          if ( v26 >= v30 )
            goto LABEL_85;
          v34 = v3->fields.consumeItemList;
          if ( !v34 )
            goto LABEL_84;
          if ( v26 >= v34->max_length )
            goto LABEL_85;
          v35 = *((_QWORD *)&v34->obj.klass + v25);
          if ( !v35 )
            goto LABEL_84;
          v36 = (UISprite_o *)*((_QWORD *)&itemIcon->obj.klass + v25);
          v37 = *(_DWORD *)(v35 + 28);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&nowTradeNum);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)AtlasManager__SetItem(v36, v37, 0LL);
          v38 = v19->fields.countOperatorLb;
          if ( !v38 )
            goto LABEL_84;
          if ( v26 >= v38->max_length )
            goto LABEL_85;
          v39 = (UILabel_o *)*((_QWORD *)&v38->obj.klass + v25);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&nowTradeNum);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_3800/*"COMMON_COUNT_OPERATOR_CROSS"*/,
                                                                 0LL);
          if ( !v39 )
            goto LABEL_84;
          UILabel__set_text(v39, (System_String_o *)this, 0LL);
          v40 = v19->fields.countLb;
          if ( !v40 )
            goto LABEL_84;
          if ( v26 >= v40->max_length )
            goto LABEL_85;
          if ( !v31 )
            goto LABEL_84;
          v41 = (UILabel_o *)*((_QWORD *)&v40->obj.klass + v25);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__GetNumberFormatLong(
                                                                 SHIDWORD(v31->fields.m_CancellationTokenSource),
                                                                 0LL);
          if ( !v41 )
            goto LABEL_84;
          UILabel__set_text(v41, (System_String_o *)this, 0LL);
        }
      }
    }
    if ( !v22 )
      goto LABEL_84;
    v42 = v22->fields.itemIcon;
    if ( !v42 )
      goto LABEL_84;
    v43 = v42->max_length;
    if ( (int)v26 < (int)v43 )
    {
      v44 = v22->fields.countOperatorLb;
      if ( !v44 )
        goto LABEL_84;
      if ( (signed int)v26 < (signed int)v44->max_length )
      {
        v45 = v22->fields.countLb;
        if ( !v45 )
          goto LABEL_84;
        if ( (signed int)v26 < (signed int)v45->max_length )
        {
          if ( v26 >= v43 )
            goto LABEL_85;
          v46 = v3->fields.consumeItemList;
          if ( !v46 )
            goto LABEL_84;
          if ( v26 >= v46->max_length )
            goto LABEL_85;
          v47 = *((_QWORD *)&v46->obj.klass + v25);
          if ( !v47 )
            goto LABEL_84;
          v48 = (UISprite_o *)*((_QWORD *)&v42->obj.klass + v25);
          v49 = *(_DWORD *)(v47 + 28);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&nowTradeNum);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)AtlasManager__SetItem(v48, v49, 0LL);
          v50 = v22->fields.countOperatorLb;
          if ( !v50 )
            goto LABEL_84;
          if ( v26 >= v50->max_length )
            goto LABEL_85;
          v51 = (UILabel_o *)*((_QWORD *)&v50->obj.klass + v25);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&nowTradeNum);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_3800/*"COMMON_COUNT_OPERATOR_CROSS"*/,
                                                                 0LL);
          if ( !v51 )
            goto LABEL_84;
          UILabel__set_text(v51, (System_String_o *)this, 0LL);
          v52 = v22->fields.countLb;
          if ( !v52 )
            goto LABEL_84;
          if ( v26 >= v52->max_length )
            goto LABEL_85;
          if ( !v31 )
            goto LABEL_84;
          v53 = v3->fields.consumeItemList;
          if ( !v53 )
            goto LABEL_84;
          if ( v26 >= v53->max_length )
            goto LABEL_85;
          v54 = *((_QWORD *)&v53->obj.klass + v25);
          if ( !v54 )
            goto LABEL_84;
          m_CancellationTokenSource_high = HIDWORD(v31->fields.m_CancellationTokenSource);
          v56 = (UILabel_o *)*((_QWORD *)&v52->obj.klass + v25);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__GetNumberFormatLong(
                                                                 m_CancellationTokenSource_high
                                                               + *(_DWORD *)(v54 + 32) * nowTradeNum,
                                                                 0LL);
          if ( !v56 )
            goto LABEL_84;
          UILabel__set_text(v56, (System_String_o *)this, 0LL);
        }
      }
    }
    v23 = v3->fields.consumeItemList;
    ++v25;
    if ( !v23 )
      goto LABEL_84;
  }
  this = (EventCraftWithdrawConfirmDialogComponent_o *)v3->fields.withdrawnItemUiHeaderLbBefore;
  v57 = v60 == 2 ? -60.0 : -130.0;
  if ( !this )
    goto LABEL_84;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, v57, 0LL);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)v3->fields.withdrawnItemUiHeaderLbAfter;
  if ( !this
    || (v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        GameObjectExtensions__SetLocalPositionX(v59, v57, 0LL),
        (this = (EventCraftWithdrawConfirmDialogComponent_o *)v3->fields.withdrawnItemUiParentObject2) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v60 == 2, 0LL),
        (this = (EventCraftWithdrawConfirmDialogComponent_o *)v3->fields.withdrawnItemUiParentObject3) == 0LL) )
  {
LABEL_84:
    sub_1BCAA3C(this, *(_QWORD *)&nowTradeNum);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v60 != 2, 0LL);
}


void __fastcall EventCraftWithdrawConfirmDialogComponent___Open_b__24_0(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall EventCraftWithdrawConfirmDialogComponent__get_closeBtnObject(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B1A02A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A02A = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}


void __fastcall EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___ctor(
        EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}