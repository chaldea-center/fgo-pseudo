void EventCraftWithdrawConfirmDialogComponent___ctor(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *v3; // x0
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *v4; // x0

  if ( (byte_4C50FCC & 1) == 0 )
  {
    sub_1C3E564(&BaseDialog_TypeInfo);
    sub_1C3E564(&EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___TypeInfo);
    byte_4C50FCC = 1;
  }
  v3 = (struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *)sub_1C3E60C(
                                                                                      EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___TypeInfo,
                                                                                      2);
  this->fields.withdrawnItemUiBefore = v3;
  sub_1C3E508(&this->fields.withdrawnItemUiBefore, v3);
  v4 = (struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *)sub_1C3E60C(
                                                                                      EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___TypeInfo,
                                                                                      2);
  this->fields.withdrawnItemUiAfter = v4;
  sub_1C3E508(&this->fields.withdrawnItemUiAfter, v4);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventCraftWithdrawConfirmDialogComponent__CallOnDecide(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  struct System_Action_bool__o **p_onDecide; // x0
  struct System_Action_bool__o *v4; // x20
  struct System_Action_bool__o *onDecide; // t1

  onDecide = this->fields.onDecide;
  p_onDecide = &this->fields.onDecide;
  v4 = onDecide;
  if ( onDecide )
  {
    *p_onDecide = 0;
    sub_1C3E508(p_onDecide, 0);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v4->fields.invoke_impl)(
      v4->fields.method_code,
      result,
      v4->fields.method);
  }
}


void EventCraftWithdrawConfirmDialogComponent__Close(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C50FCA & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_EventCraftWithdrawConfirmDialogComponent_Init__);
    byte_4C50FCA = 1;
  }
  this->fields.state = 4;
  v3 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_EventCraftWithdrawConfirmDialogComponent_Init__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0);
}


void EventCraftWithdrawConfirmDialogComponent__Init(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  EventCraftListViewManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0);
  this->fields.state = 0;
  this->fields.tradeGoodsEntity = 0;
  sub_1C3E508(&this->fields.tradeGoodsEntity, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventCraftWithdrawConfirmDialogComponent__OnClickCancel(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C50FC9 & 1) == 0 )
  {
    sub_1C3E564(&Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__);
    byte_4C50FC9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
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

  if ( (byte_4C50FC8 & 1) == 0 )
  {
    sub_1C3E564(&Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__);
    byte_4C50FC8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
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

  if ( (byte_4C50FC5 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_EventCraftWithdrawConfirmDialogComponent__Open_b__24_0__);
    byte_4C50FC5 = 1;
  }
  if ( !this->fields.state )
  {
    EventCraftWithdrawConfirmDialogComponent__SetUpUi(this, item, callback, method);
    this->fields.state = 1;
    v7 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
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
  EventCraftWithdrawConfirmDialogComponent_o *v6; // x20
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x1
  struct EventTradeGoodsEntity_o **p_tradeGoodsEntity; // x21
  UILabel_o *titleLabel; // x22
  UILabel_o *detailLabel; // x22
  UILabel_o *withdrawnItemUiHeaderLbBefore; // x22
  UILabel_o *withdrawnItemUiHeaderLbAfter; // x22
  UILabel_o *withdrawnItemUiTitleLabel; // x22
  UILabel_o *withdrawnItemNoneLabel; // x22
  UILabel_o *cancelButtonLb; // x22
  UILabel_o *decideButtonLb; // x22
  CommonConsumeEntity_array *SortedEntityList; // x0
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  bool v19; // w21
  int32_t NowTradeNum; // w0
  const MethodInfo *v21; // x2
  int32_t v22; // w21

  v6 = this;
  if ( (byte_4C50FC6 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_13511/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/);
    sub_1C3E564(&StringLiteral_3916/*"CRAFT_EVENT_WITHDRAWAL_DIALOG_TITLE"*/);
    sub_1C3E564(&StringLiteral_13516/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/);
    sub_1C3E564(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C3E564(&StringLiteral_13510/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/);
    sub_1C3E564(&StringLiteral_13513/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/);
    sub_1C3E564(&StringLiteral_3915/*"CRAFT_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/);
    this = (EventCraftWithdrawConfirmDialogComponent_o *)sub_1C3E564(&StringLiteral_13515/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/);
    byte_4C50FC6 = 1;
  }
  if ( !item )
    goto LABEL_28;
  TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
  v6->fields.tradeGoodsEntity = TradeGoodsEntity_k__BackingField;
  p_tradeGoodsEntity = &v6->fields.tradeGoodsEntity;
  sub_1C3E508(&v6->fields.tradeGoodsEntity, TradeGoodsEntity_k__BackingField);
  v6->fields.onDecide = decideCallback;
  sub_1C3E508(&v6->fields.onDecide, decideCallback);
  titleLabel = v6->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3916/*"CRAFT_EVENT_WITHDRAWAL_DIALOG_TITLE"*/,
                                                         0);
  if ( !titleLabel )
    goto LABEL_28;
  UILabel__set_text(titleLabel, (System_String_o *)this, 0);
  detailLabel = v6->fields.detailLabel;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3915/*"CRAFT_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/,
                                                         0);
  if ( !detailLabel )
    goto LABEL_28;
  UILabel__set_text(detailLabel, (System_String_o *)this, 0);
  withdrawnItemUiHeaderLbBefore = v6->fields.withdrawnItemUiHeaderLbBefore;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13511/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/,
                                                         0);
  if ( !withdrawnItemUiHeaderLbBefore )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemUiHeaderLbBefore, (System_String_o *)this, 0);
  withdrawnItemUiHeaderLbAfter = v6->fields.withdrawnItemUiHeaderLbAfter;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13510/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/,
                                                         0);
  if ( !withdrawnItemUiHeaderLbAfter )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemUiHeaderLbAfter, (System_String_o *)this, 0);
  withdrawnItemUiTitleLabel = v6->fields.withdrawnItemUiTitleLabel;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13515/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/,
                                                         0);
  if ( !withdrawnItemUiTitleLabel )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemUiTitleLabel, (System_String_o *)this, 0);
  withdrawnItemNoneLabel = v6->fields.withdrawnItemNoneLabel;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13516/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/,
                                                         0);
  if ( !withdrawnItemNoneLabel )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemNoneLabel, (System_String_o *)this, 0);
  cancelButtonLb = v6->fields.cancelButtonLb;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/,
                                                         0);
  if ( !cancelButtonLb )
    goto LABEL_28;
  UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0);
  decideButtonLb = v6->fields.decideButtonLb;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13513/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/,
                                                         0);
  if ( !decideButtonLb )
    goto LABEL_28;
  UILabel__set_text(decideButtonLb, (System_String_o *)this, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !*p_tradeGoodsEntity )
    goto LABEL_28;
  if ( !this )
    goto LABEL_28;
  SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                       (CommonConsumeMaster_o *)this,
                       (*p_tradeGoodsEntity)->fields.commonConsumeId,
                       0);
  v6->fields.consumeItemList = SortedEntityList;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)sub_1C3E508(&v6->fields.consumeItemList, SortedEntityList);
  TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_28;
  v19 = !TradeInfo_k__BackingField->fields.tradeNum && TradeInfo_k__BackingField->fields.getNum == 0;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)v6->fields.withdrawnItemNoneLabel;
  if ( !this )
    goto LABEL_28;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
  if ( !this )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v19, 0);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)v6->fields.withdrawnItemUiParentObject;
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v19, 0),
        NowTradeNum = EventCraftListViewItem__get_NowTradeNum(item, 0),
        EventCraftWithdrawConfirmDialogComponent__SetWithdrawnItemUi(v6, NowTradeNum, v21),
        this = (EventCraftWithdrawConfirmDialogComponent_o *)EventCraftListViewItemDraw__GetDisplayMode(2, item, 0),
        !v6->fields.listViewItemDraw)
    || (v22 = (int)this,
        EventCraftListViewItemDraw__SetItem(v6->fields.listViewItemDraw, item, (int32_t)this, 0),
        (this = (EventCraftWithdrawConfirmDialogComponent_o *)v6->fields.listViewItemDraw) == 0) )
  {
LABEL_28:
    sub_1C3E7C0(this, item);
  }
  EventCraftListViewItemDraw__UpdateItem((EventCraftListViewItemDraw_o *)this, item, v22, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventCraftWithdrawConfirmDialogComponent__SetWithdrawnItemUi(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        int32_t nowTradeNum,
        const MethodInfo *method)
{
  EventCraftWithdrawConfirmDialogComponent_o *v3; // x19
  struct CommonConsumeEntity_array *consumeItemList; // x9
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *withdrawnItemUiBefore; // x8
  int max_length; // w11
  unsigned int v7; // w9
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *v8; // x9
  EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_o *v9; // x27
  EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_o **m_Items; // x8
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *withdrawnItemUiAfter; // x9
  EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_o *v12; // x28
  struct CommonConsumeEntity_array *v13; // x8
  UserItemMaster_o *v14; // x21
  __int64 v15; // x29
  unsigned int v16; // w20
  struct CommonConsumeEntity_array *v17; // x8
  __int64 v18; // x8
  struct UISprite_array *itemIcon; // x8
  unsigned int v20; // w9
  EventCraftWithdrawConfirmDialogComponent_o *v21; // x23
  struct UILabel_array *countOperatorLb; // x10
  struct UILabel_array *countLb; // x10
  struct CommonConsumeEntity_array *v24; // x9
  __int64 v25; // x9
  UISprite_o *v26; // x24
  int32_t v27; // w25
  struct UILabel_array *v28; // x8
  UILabel_o *v29; // x24
  struct UILabel_array *v30; // x8
  UILabel_o *v31; // x24
  struct UISprite_array *v32; // x8
  unsigned int v33; // w9
  struct UILabel_array *v34; // x10
  struct UILabel_array *v35; // x10
  struct CommonConsumeEntity_array *v36; // x9
  __int64 v37; // x9
  UISprite_o *v38; // x24
  int32_t v39; // w25
  struct UILabel_array *v40; // x8
  UILabel_o *v41; // x24
  struct UILabel_array *v42; // x8
  struct CommonConsumeEntity_array *v43; // x9
  __int64 v44; // x9
  int m_CancellationTokenSource_high; // w10
  UILabel_o *v46; // x23
  float v47; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v49; // x0
  int v50; // [xsp+8h] [xbp-68h]

  v3 = this;
  if ( (byte_4C50FC7 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    this = (EventCraftWithdrawConfirmDialogComponent_o *)sub_1C3E564(&StringLiteral_3699/*"COMMON_COUNT_OPERATOR_CROSS"*/);
    byte_4C50FC7 = 1;
  }
  consumeItemList = v3->fields.consumeItemList;
  if ( !consumeItemList )
    goto LABEL_88;
  withdrawnItemUiBefore = v3->fields.withdrawnItemUiBefore;
  if ( !withdrawnItemUiBefore )
    goto LABEL_88;
  max_length = consumeItemList->max_length;
  v7 = withdrawnItemUiBefore->max_length;
  v50 = max_length;
  if ( max_length != 2 )
  {
    if ( v7 > 1 )
    {
      withdrawnItemUiAfter = v3->fields.withdrawnItemUiAfter;
      if ( !withdrawnItemUiAfter )
        goto LABEL_88;
      if ( LODWORD(withdrawnItemUiAfter->max_length) > 1 )
      {
        v9 = withdrawnItemUiBefore->m_Items[1];
        m_Items = &withdrawnItemUiAfter->m_Items[1];
        goto LABEL_14;
      }
    }
LABEL_89:
    sub_1C3E7C8(this, *(_QWORD *)&nowTradeNum);
  }
  if ( !v7 )
    goto LABEL_89;
  v8 = v3->fields.withdrawnItemUiAfter;
  if ( !v8 )
    goto LABEL_88;
  if ( !LODWORD(v8->max_length) )
    goto LABEL_89;
  v9 = withdrawnItemUiBefore->m_Items[0];
  m_Items = v8->m_Items;
LABEL_14:
  v12 = *m_Items;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserItemMaster___);
  v13 = v3->fields.consumeItemList;
  if ( !v13 )
    goto LABEL_88;
  v14 = (UserItemMaster_o *)this;
  v15 = 4;
  while ( 1 )
  {
    v16 = v15 - 4;
    if ( (int)v15 - 4 >= SLODWORD(v13->max_length) )
      break;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C50AE2 )
    {
      sub_1C3E564(&NetworkManager_TypeInfo);
      byte_4C50AE2 = 1;
    }
    this = (EventCraftWithdrawConfirmDialogComponent_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (EventCraftWithdrawConfirmDialogComponent_o *)NetworkManager_TypeInfo;
    }
    v17 = v3->fields.consumeItemList;
    if ( !v17 )
      goto LABEL_88;
    if ( v16 >= LODWORD(v17->max_length) )
      goto LABEL_89;
    v18 = *((_QWORD *)&v17->obj.klass + v15);
    if ( !v18 )
      goto LABEL_88;
    if ( !v14 )
      goto LABEL_88;
    this = (EventCraftWithdrawConfirmDialogComponent_o *)UserItemMaster__GetEntityDefinitely(
                                                           v14,
                                                           this->fields.withdrawnItemUiParentObject[2].fields.m_CachedPtr,
                                                           *(_DWORD *)(v18 + 28),
                                                           0);
    if ( !v9 )
      goto LABEL_88;
    itemIcon = v9->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_88;
    v20 = itemIcon->max_length;
    v21 = this;
    if ( (int)v16 < (int)v20 )
    {
      countOperatorLb = v9->fields.countOperatorLb;
      if ( !countOperatorLb )
        goto LABEL_88;
      if ( (signed int)v16 < SLODWORD(countOperatorLb->max_length) )
      {
        countLb = v9->fields.countLb;
        if ( !countLb )
          goto LABEL_88;
        if ( (signed int)v16 < SLODWORD(countLb->max_length) )
        {
          if ( v16 >= v20 )
            goto LABEL_89;
          v24 = v3->fields.consumeItemList;
          if ( !v24 )
            goto LABEL_88;
          if ( v16 >= LODWORD(v24->max_length) )
            goto LABEL_89;
          v25 = *((_QWORD *)&v24->obj.klass + v15);
          if ( !v25 )
            goto LABEL_88;
          v26 = (UISprite_o *)*((_QWORD *)&itemIcon->obj.klass + v15);
          v27 = *(_DWORD *)(v25 + 28);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)AtlasManager__SetItem(v26, v27, 0);
          v28 = v9->fields.countOperatorLb;
          if ( !v28 )
            goto LABEL_88;
          if ( v16 >= LODWORD(v28->max_length) )
            goto LABEL_89;
          v29 = (UILabel_o *)*((_QWORD *)&v28->obj.klass + v15);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_3699/*"COMMON_COUNT_OPERATOR_CROSS"*/,
                                                                 0);
          if ( !v29 )
            goto LABEL_88;
          UILabel__set_text(v29, (System_String_o *)this, 0);
          v30 = v9->fields.countLb;
          if ( !v30 )
            goto LABEL_88;
          if ( v16 >= LODWORD(v30->max_length) )
            goto LABEL_89;
          if ( !v21 )
            goto LABEL_88;
          v31 = (UILabel_o *)*((_QWORD *)&v30->obj.klass + v15);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__GetNumberFormatLong(
                                                                 SHIDWORD(v21->fields.m_CancellationTokenSource),
                                                                 0);
          if ( !v31 )
            goto LABEL_88;
          UILabel__set_text(v31, (System_String_o *)this, 0);
        }
      }
    }
    if ( !v12 )
      goto LABEL_88;
    v32 = v12->fields.itemIcon;
    if ( !v32 )
      goto LABEL_88;
    v33 = v32->max_length;
    if ( (int)v16 < (int)v33 )
    {
      v34 = v12->fields.countOperatorLb;
      if ( !v34 )
        goto LABEL_88;
      if ( (signed int)v16 < SLODWORD(v34->max_length) )
      {
        v35 = v12->fields.countLb;
        if ( !v35 )
          goto LABEL_88;
        if ( (signed int)v16 < SLODWORD(v35->max_length) )
        {
          if ( v16 >= v33 )
            goto LABEL_89;
          v36 = v3->fields.consumeItemList;
          if ( !v36 )
            goto LABEL_88;
          if ( v16 >= LODWORD(v36->max_length) )
            goto LABEL_89;
          v37 = *((_QWORD *)&v36->obj.klass + v15);
          if ( !v37 )
            goto LABEL_88;
          v38 = (UISprite_o *)*((_QWORD *)&v32->obj.klass + v15);
          v39 = *(_DWORD *)(v37 + 28);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)AtlasManager__SetItem(v38, v39, 0);
          v40 = v12->fields.countOperatorLb;
          if ( !v40 )
            goto LABEL_88;
          if ( v16 >= LODWORD(v40->max_length) )
            goto LABEL_89;
          v41 = (UILabel_o *)*((_QWORD *)&v40->obj.klass + v15);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_3699/*"COMMON_COUNT_OPERATOR_CROSS"*/,
                                                                 0);
          if ( !v41 )
            goto LABEL_88;
          UILabel__set_text(v41, (System_String_o *)this, 0);
          v42 = v12->fields.countLb;
          if ( !v42 )
            goto LABEL_88;
          if ( v16 >= LODWORD(v42->max_length) )
            goto LABEL_89;
          if ( !v21 )
            goto LABEL_88;
          v43 = v3->fields.consumeItemList;
          if ( !v43 )
            goto LABEL_88;
          if ( v16 >= LODWORD(v43->max_length) )
            goto LABEL_89;
          v44 = *((_QWORD *)&v43->obj.klass + v15);
          if ( !v44 )
            goto LABEL_88;
          m_CancellationTokenSource_high = HIDWORD(v21->fields.m_CancellationTokenSource);
          v46 = (UILabel_o *)*((_QWORD *)&v42->obj.klass + v15);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__GetNumberFormatLong(
                                                                 m_CancellationTokenSource_high
                                                               + *(_DWORD *)(v44 + 32) * nowTradeNum,
                                                                 0);
          if ( !v46 )
            goto LABEL_88;
          UILabel__set_text(v46, (System_String_o *)this, 0);
        }
      }
    }
    v13 = v3->fields.consumeItemList;
    ++v15;
    if ( !v13 )
      goto LABEL_88;
  }
  this = (EventCraftWithdrawConfirmDialogComponent_o *)v3->fields.withdrawnItemUiHeaderLbBefore;
  v47 = v50 == 2 ? -60.0 : -130.0;
  if ( !this )
    goto LABEL_88;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(gameObject, v47, 0);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)v3->fields.withdrawnItemUiHeaderLbAfter;
  if ( !this
    || (v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        GameObjectExtensions__SetLocalPositionX(v49, v47, 0),
        (this = (EventCraftWithdrawConfirmDialogComponent_o *)v3->fields.withdrawnItemUiParentObject2) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v50 == 2, 0),
        (this = (EventCraftWithdrawConfirmDialogComponent_o *)v3->fields.withdrawnItemUiParentObject3) == 0) )
  {
LABEL_88:
    sub_1C3E7C0(this, *(_QWORD *)&nowTradeNum);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v50 != 2, 0);
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
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4C50FCB & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C50FCB = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C3E7C0(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___ctor(
        EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}