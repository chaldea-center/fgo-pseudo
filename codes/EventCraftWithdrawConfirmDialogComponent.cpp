void EventCraftWithdrawConfirmDialogComponent___ctor(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  __int64 v18; // x2

  if ( (byte_593246D & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    sub_21FFC50(&EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___TypeInfo);
    byte_593246D = 1;
  }
  v3 = (struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *)sub_21FFD10(
                                                                                      EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___TypeInfo,
                                                                                      2);
  this->fields.withdrawnItemUiBefore = v3;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.withdrawnItemUiBefore,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *)sub_21FFD10(
                                                                                       EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___TypeInfo,
                                                                                       2);
  this->fields.withdrawnItemUiAfter = v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.withdrawnItemUiAfter,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v17, v18);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventCraftWithdrawConfirmDialogComponent__CallOnDecide(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_onDecide; // x0
  struct System_Action_bool__o *v9; // x20
  struct System_Action_bool__o *onDecide; // t1

  onDecide = this->fields.onDecide;
  p_onDecide = (MissionNaviTransitionBoardItem_o *)&this->fields.onDecide;
  v9 = onDecide;
  if ( onDecide )
  {
    p_onDecide->klass = 0;
    sub_21FFBF4(p_onDecide, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void EventCraftWithdrawConfirmDialogComponent__Close(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  System_Action_c *v3; // x0
  System_Action_o *v4; // x20

  if ( (byte_593246B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventCraftWithdrawConfirmDialogComponent_Init__);
    byte_593246B = 1;
  }
  v3 = System_Action_TypeInfo;
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_21FFEBC(v3);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EventCraftWithdrawConfirmDialogComponent_Init__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
}


void EventCraftWithdrawConfirmDialogComponent__Init(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  EventCraftListViewManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, method);
  this->fields.state = 0;
  this->fields.tradeGoodsEntity = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.tradeGoodsEntity, 0, v3, v4, v5, v6, v7, v8);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventCraftWithdrawConfirmDialogComponent__OnClickCancel(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_593246A & 1) == 0 )
  {
    sub_21FFC50(&Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__);
    byte_593246A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    EventCraftWithdrawConfirmDialogComponent__Close(this, v5);
  }
}


void EventCraftWithdrawConfirmDialogComponent__OnClickDecide(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5932469 & 1) == 0 )
  {
    sub_21FFC50(&Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__);
    byte_5932469 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    EventCraftWithdrawConfirmDialogComponent__CallOnDecide(this, 1, v5);
  }
}


void EventCraftWithdrawConfirmDialogComponent__Open(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        EventCraftListViewItem_o *item,
        System_Action_bool__o *callback,
        const MethodInfo *method)
{
  System_Action_o *v7; // x20

  if ( (byte_5932466 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventCraftWithdrawConfirmDialogComponent__Open_b__24_0__);
    byte_5932466 = 1;
  }
  if ( !this->fields.state )
  {
    EventCraftWithdrawConfirmDialogComponent__SetUpUi(this, item, callback, method);
    this->fields.state = 1;
    v7 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_EventCraftWithdrawConfirmDialogComponent__Open_b__24_0__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v7, 0, 0, 0);
  }
}


void EventCraftWithdrawConfirmDialogComponent__SetUpUi(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        EventCraftListViewItem_o *item,
        System_Action_bool__o *decideCallback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  EventCraftWithdrawConfirmDialogComponent_o *v10; // x20
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x1
  struct EventTradeGoodsEntity_o **p_tradeGoodsEntity; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  __int64 v20; // x2
  UILabel_o *titleLabel; // x22
  UILabel_o *detailLabel; // x22
  UILabel_o *withdrawnItemUiHeaderLbBefore; // x22
  UILabel_o *withdrawnItemUiHeaderLbAfter; // x22
  UILabel_o *withdrawnItemUiTitleLabel; // x22
  UILabel_o *withdrawnItemNoneLabel; // x22
  UILabel_o *cancelButtonLb; // x22
  UILabel_o *decideButtonLb; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  CommonConsumeEntity_array *SortedEntityList; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  bool v39; // w21
  const MethodInfo *v40; // x1
  int32_t NowTradeNum; // w0
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x3
  int32_t v45; // w21
  const MethodInfo *v46; // x3

  v10 = this;
  if ( (byte_5932467 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_14028/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/);
    sub_21FFC50(&StringLiteral_4055/*"CRAFT_EVENT_WITHDRAWAL_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_14033/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_14027/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/);
    sub_21FFC50(&StringLiteral_14030/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/);
    sub_21FFC50(&StringLiteral_4054/*"CRAFT_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/);
    this = (EventCraftWithdrawConfirmDialogComponent_o *)sub_21FFC50(&StringLiteral_14032/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/);
    byte_5932467 = 1;
  }
  if ( !item )
    goto LABEL_28;
  TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
  v10->fields.tradeGoodsEntity = TradeGoodsEntity_k__BackingField;
  p_tradeGoodsEntity = &v10->fields.tradeGoodsEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v10->fields.tradeGoodsEntity,
    (int32_t)TradeGoodsEntity_k__BackingField,
    (System_String_o *)decideCallback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v10->fields.onDecide = decideCallback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v10->fields.onDecide,
    (int32_t)decideCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  titleLabel = v10->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v20);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_4055/*"CRAFT_EVENT_WITHDRAWAL_DIALOG_TITLE"*/,
                                                         0);
  if ( !titleLabel )
    goto LABEL_28;
  UILabel__set_text(titleLabel, (System_String_o *)this, 0);
  detailLabel = v10->fields.detailLabel;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_4054/*"CRAFT_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/,
                                                         0);
  if ( !detailLabel )
    goto LABEL_28;
  UILabel__set_text(detailLabel, (System_String_o *)this, 0);
  withdrawnItemUiHeaderLbBefore = v10->fields.withdrawnItemUiHeaderLbBefore;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_14028/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/,
                                                         0);
  if ( !withdrawnItemUiHeaderLbBefore )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemUiHeaderLbBefore, (System_String_o *)this, 0);
  withdrawnItemUiHeaderLbAfter = v10->fields.withdrawnItemUiHeaderLbAfter;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_14027/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/,
                                                         0);
  if ( !withdrawnItemUiHeaderLbAfter )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemUiHeaderLbAfter, (System_String_o *)this, 0);
  withdrawnItemUiTitleLabel = v10->fields.withdrawnItemUiTitleLabel;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_14032/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/,
                                                         0);
  if ( !withdrawnItemUiTitleLabel )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemUiTitleLabel, (System_String_o *)this, 0);
  withdrawnItemNoneLabel = v10->fields.withdrawnItemNoneLabel;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_14033/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/,
                                                         0);
  if ( !withdrawnItemNoneLabel )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemNoneLabel, (System_String_o *)this, 0);
  cancelButtonLb = v10->fields.cancelButtonLb;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/,
                                                         0);
  if ( !cancelButtonLb )
    goto LABEL_28;
  UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0);
  decideButtonLb = v10->fields.decideButtonLb;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_14030/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/,
                                                         0);
  if ( !decideButtonLb )
    goto LABEL_28;
  UILabel__set_text(decideButtonLb, (System_String_o *)this, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29, v30);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !*p_tradeGoodsEntity )
    goto LABEL_28;
  if ( !this )
    goto LABEL_28;
  SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                       (CommonConsumeMaster_o *)this,
                       (*p_tradeGoodsEntity)->fields.commonConsumeId,
                       0);
  v10->fields.consumeItemList = SortedEntityList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v10->fields.consumeItemList,
    (int32_t)SortedEntityList,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_28;
  v39 = !TradeInfo_k__BackingField->fields.tradeNum && TradeInfo_k__BackingField->fields.getNum == 0;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)v10->fields.withdrawnItemNoneLabel;
  if ( !this )
    goto LABEL_28;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
  if ( !this )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v39, 0);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)v10->fields.withdrawnItemUiParentObject;
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v39, 0),
        NowTradeNum = EventCraftListViewItem__get_NowTradeNum(item, v40),
        EventCraftWithdrawConfirmDialogComponent__SetWithdrawnItemUi(v10, NowTradeNum, v42),
        this = (EventCraftWithdrawConfirmDialogComponent_o *)EventCraftListViewItemDraw__GetDisplayMode(2, item, v43),
        !v10->fields.listViewItemDraw)
    || (v45 = (int)this,
        EventCraftListViewItemDraw__SetItem(v10->fields.listViewItemDraw, item, (int32_t)this, v44),
        (this = (EventCraftWithdrawConfirmDialogComponent_o *)v10->fields.listViewItemDraw) == 0) )
  {
LABEL_28:
    sub_21FFECC(this, item);
  }
  EventCraftListViewItemDraw__UpdateItem((EventCraftListViewItemDraw_o *)this, item, v45, v46);
}


// local variable allocation has failed, the output may be wrong!
void EventCraftWithdrawConfirmDialogComponent__SetWithdrawnItemUi(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        int32_t nowTradeNum,
        const MethodInfo *method)
{
  EventCraftWithdrawConfirmDialogComponent_o *v3; // x19
  struct CommonConsumeEntity_array *consumeItemList; // x8
  __int64 max_length_low; // x11
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *withdrawnItemUiBefore; // x8
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *v7; // x9
  EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_o *v8; // x27
  EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_o **m_Items; // x8
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *withdrawnItemUiAfter; // x9
  EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_o *v11; // x28
  __int64 v12; // x2
  struct CommonConsumeEntity_array *v13; // x8
  UserItemMaster_o *v14; // x21
  unsigned int v15; // w29
  struct CommonConsumeEntity_array *v16; // x8
  CommonConsumeEntity_o *v17; // x8
  struct UISprite_array *itemIcon; // x8
  unsigned int max_length; // w9
  EventCraftWithdrawConfirmDialogComponent_o *v20; // x23
  struct UILabel_array *countOperatorLb; // x10
  struct UILabel_array *countLb; // x10
  struct CommonConsumeEntity_array *v23; // x9
  CommonConsumeEntity_o *v24; // x9
  int32_t objectId; // w25
  UISprite_o *v26; // x24
  __int64 v27; // x2
  struct UILabel_array *v28; // x8
  UILabel_o *v29; // x24
  struct UILabel_array *v30; // x8
  UILabel_o *v31; // x24
  struct UISprite_array *v32; // x8
  unsigned int v33; // w9
  struct UILabel_array *v34; // x10
  struct UILabel_array *v35; // x10
  struct CommonConsumeEntity_array *v36; // x9
  CommonConsumeEntity_o *v37; // x9
  int32_t v38; // w25
  UISprite_o *v39; // x24
  __int64 v40; // x2
  struct UILabel_array *v41; // x8
  UILabel_o *v42; // x24
  struct UILabel_array *v43; // x8
  struct CommonConsumeEntity_array *v44; // x9
  CommonConsumeEntity_o *v45; // x9
  int v46; // w9
  UILabel_o *v47; // x23
  float v48; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v50; // x0
  __int64 v51; // [xsp+8h] [xbp-78h]

  v3 = this;
  if ( (byte_5932468 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    this = (EventCraftWithdrawConfirmDialogComponent_o *)sub_21FFC50(&StringLiteral_3837/*"COMMON_COUNT_OPERATOR_CROSS"*/);
    byte_5932468 = 1;
  }
  consumeItemList = v3->fields.consumeItemList;
  if ( !consumeItemList )
    goto LABEL_80;
  max_length_low = LODWORD(consumeItemList->max_length);
  withdrawnItemUiBefore = v3->fields.withdrawnItemUiBefore;
  v51 = max_length_low;
  if ( max_length_low != 2 )
  {
    if ( !withdrawnItemUiBefore )
      goto LABEL_80;
    if ( (withdrawnItemUiBefore->max_length & 0xFFFFFFFE) != 0 )
    {
      withdrawnItemUiAfter = v3->fields.withdrawnItemUiAfter;
      if ( !withdrawnItemUiAfter )
        goto LABEL_80;
      if ( (withdrawnItemUiAfter->max_length & 0xFFFFFFFE) != 0 )
      {
        v8 = withdrawnItemUiBefore->m_Items[1];
        m_Items = &withdrawnItemUiAfter->m_Items[1];
        goto LABEL_15;
      }
    }
LABEL_89:
    sub_21FFED4(this);
  }
  if ( !withdrawnItemUiBefore )
    goto LABEL_80;
  if ( !LODWORD(withdrawnItemUiBefore->max_length) )
    goto LABEL_89;
  v7 = v3->fields.withdrawnItemUiAfter;
  if ( !v7 )
    goto LABEL_80;
  if ( !LODWORD(v7->max_length) )
    goto LABEL_89;
  v8 = withdrawnItemUiBefore->m_Items[0];
  m_Items = v7->m_Items;
LABEL_15:
  v11 = *m_Items;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&nowTradeNum, method);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserItemMaster___);
  v13 = v3->fields.consumeItemList;
  if ( !v13 )
    goto LABEL_80;
  v14 = (UserItemMaster_o *)this;
  v15 = 0;
  while ( (signed int)v15 < SLODWORD(v13->max_length) )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&nowTradeNum, v12);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    this = (EventCraftWithdrawConfirmDialogComponent_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&nowTradeNum, v12);
      this = (EventCraftWithdrawConfirmDialogComponent_o *)NetworkManager_TypeInfo;
    }
    v16 = v3->fields.consumeItemList;
    if ( !v16 )
      goto LABEL_80;
    if ( v15 >= LODWORD(v16->max_length) )
      goto LABEL_89;
    v17 = v16->m_Items[v15];
    if ( !v17 )
      goto LABEL_80;
    if ( !v14 )
      goto LABEL_80;
    this = (EventCraftWithdrawConfirmDialogComponent_o *)UserItemMaster__GetEntityDefinitely(
                                                           v14,
                                                           this->fields.withdrawnItemUiParentObject[2].fields.m_CachedPtr,
                                                           v17->fields.objectId,
                                                           0);
    if ( !v8 )
      goto LABEL_80;
    itemIcon = v8->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_80;
    max_length = itemIcon->max_length;
    v20 = this;
    if ( (int)v15 < (int)max_length )
    {
      countOperatorLb = v8->fields.countOperatorLb;
      if ( !countOperatorLb )
        goto LABEL_80;
      if ( (signed int)v15 < SLODWORD(countOperatorLb->max_length) )
      {
        countLb = v8->fields.countLb;
        if ( !countLb )
          goto LABEL_80;
        if ( (signed int)v15 < SLODWORD(countLb->max_length) )
        {
          if ( v15 >= max_length )
            goto LABEL_89;
          v23 = v3->fields.consumeItemList;
          if ( !v23 )
            goto LABEL_80;
          if ( v15 >= LODWORD(v23->max_length) )
            goto LABEL_89;
          v24 = v23->m_Items[v15];
          if ( !v24 )
            goto LABEL_80;
          objectId = v24->fields.objectId;
          v26 = itemIcon->m_Items[v15];
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&nowTradeNum, v12);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)AtlasManager__SetItem(v26, objectId, 0);
          v28 = v8->fields.countOperatorLb;
          if ( !v28 )
            goto LABEL_80;
          if ( v15 >= LODWORD(v28->max_length) )
            goto LABEL_89;
          v29 = v28->m_Items[v15];
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&nowTradeNum, v27);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_3837/*"COMMON_COUNT_OPERATOR_CROSS"*/,
                                                                 0);
          if ( !v29 )
            goto LABEL_80;
          UILabel__set_text(v29, (System_String_o *)this, 0);
          v30 = v8->fields.countLb;
          if ( !v30 )
            goto LABEL_80;
          if ( v15 >= LODWORD(v30->max_length) )
            goto LABEL_89;
          if ( !v20 )
            goto LABEL_80;
          v31 = v30->m_Items[v15];
          this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__GetNumberFormatLong(
                                                                 SHIDWORD(v20->fields.m_CancellationTokenSource),
                                                                 0);
          if ( !v31 )
            goto LABEL_80;
          UILabel__set_text(v31, (System_String_o *)this, 0);
        }
      }
    }
    if ( !v11 )
      goto LABEL_80;
    v32 = v11->fields.itemIcon;
    if ( !v32 )
      goto LABEL_80;
    v33 = v32->max_length;
    if ( (int)v15 < (int)v33 )
    {
      v34 = v11->fields.countOperatorLb;
      if ( !v34 )
        goto LABEL_80;
      if ( (signed int)v15 < SLODWORD(v34->max_length) )
      {
        v35 = v11->fields.countLb;
        if ( !v35 )
          goto LABEL_80;
        if ( (signed int)v15 < SLODWORD(v35->max_length) )
        {
          if ( v15 >= v33 )
            goto LABEL_89;
          v36 = v3->fields.consumeItemList;
          if ( !v36 )
            goto LABEL_80;
          if ( v15 >= LODWORD(v36->max_length) )
            goto LABEL_89;
          v37 = v36->m_Items[v15];
          if ( !v37 )
            goto LABEL_80;
          v38 = v37->fields.objectId;
          v39 = v32->m_Items[v15];
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&nowTradeNum, v12);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)AtlasManager__SetItem(v39, v38, 0);
          v41 = v11->fields.countOperatorLb;
          if ( !v41 )
            goto LABEL_80;
          if ( v15 >= LODWORD(v41->max_length) )
            goto LABEL_89;
          v42 = v41->m_Items[v15];
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&nowTradeNum, v40);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_3837/*"COMMON_COUNT_OPERATOR_CROSS"*/,
                                                                 0);
          if ( !v42 )
            goto LABEL_80;
          UILabel__set_text(v42, (System_String_o *)this, 0);
          v43 = v11->fields.countLb;
          if ( !v43 )
            goto LABEL_80;
          if ( v15 >= LODWORD(v43->max_length) )
            goto LABEL_89;
          if ( !v20 )
            goto LABEL_80;
          v44 = v3->fields.consumeItemList;
          if ( !v44 )
            goto LABEL_80;
          if ( v15 >= LODWORD(v44->max_length) )
            goto LABEL_89;
          v45 = v44->m_Items[v15];
          if ( !v45 )
            goto LABEL_80;
          v46 = HIDWORD(v20->fields.m_CancellationTokenSource) + v45->fields.num * nowTradeNum;
          v47 = v43->m_Items[v15];
          this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__GetNumberFormatLong(v46, 0);
          if ( !v47 )
            goto LABEL_80;
          UILabel__set_text(v47, (System_String_o *)this, 0);
        }
      }
    }
    v13 = v3->fields.consumeItemList;
    ++v15;
    if ( !v13 )
      goto LABEL_80;
  }
  this = (EventCraftWithdrawConfirmDialogComponent_o *)v3->fields.withdrawnItemUiHeaderLbBefore;
  v48 = v51 == 2 ? -60.0 : -130.0;
  if ( !this )
    goto LABEL_80;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(gameObject, v48, 0);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)v3->fields.withdrawnItemUiHeaderLbAfter;
  if ( !this
    || (v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        GameObjectExtensions__SetLocalPositionX(v50, v48, 0),
        (this = (EventCraftWithdrawConfirmDialogComponent_o *)v3->fields.withdrawnItemUiParentObject2) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v51 == 2, 0),
        (this = (EventCraftWithdrawConfirmDialogComponent_o *)v3->fields.withdrawnItemUiParentObject3) == 0) )
  {
LABEL_80:
    sub_21FFECC(this, *(_QWORD *)&nowTradeNum);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v51 != 2, 0);
}


void EventCraftWithdrawConfirmDialogComponent___Open_b__24_0(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *EventCraftWithdrawConfirmDialogComponent__get_closeBtnObject(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_593246C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593246C = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_21FFECC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}


void EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___ctor(
        EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}