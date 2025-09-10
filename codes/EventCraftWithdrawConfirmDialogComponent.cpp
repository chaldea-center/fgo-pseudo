void EventCraftWithdrawConfirmDialogComponent___ctor(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C21593 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    sub_1C2D490(&EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___TypeInfo);
    byte_4C21593 = 1;
  }
  this->fields.withdrawnItemUiBefore = (struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *)sub_1C2D538(EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___TypeInfo, 2);
  sub_1C2D434(&this->fields.withdrawnItemUiBefore);
  this->fields.withdrawnItemUiAfter = (struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *)sub_1C2D538(EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___TypeInfo, 2);
  sub_1C2D434(&this->fields.withdrawnItemUiAfter);
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
    sub_1C2D434(p_onDecide);
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

  if ( (byte_4C21591 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EventCraftWithdrawConfirmDialogComponent_Init__);
    byte_4C21591 = 1;
  }
  this->fields.state = 4;
  v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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
  sub_1C2D434(&this->fields.tradeGoodsEntity);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventCraftWithdrawConfirmDialogComponent__OnClickCancel(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C21590 & 1) == 0 )
  {
    sub_1C2D490(&Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__);
    byte_4C21590 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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

  if ( (byte_4C2158F & 1) == 0 )
  {
    sub_1C2D490(&Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__);
    byte_4C2158F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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

  if ( (byte_4C2158C & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EventCraftWithdrawConfirmDialogComponent__Open_b__24_0__);
    byte_4C2158C = 1;
  }
  if ( !this->fields.state )
  {
    EventCraftWithdrawConfirmDialogComponent__SetUpUi(this, item, callback, method);
    this->fields.state = 1;
    v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_EventCraftWithdrawConfirmDialogComponent__Open_b__24_0__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v7, 0, 0);
  }
}


void EventCraftWithdrawConfirmDialogComponent__SetUpUi(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        EventCraftListViewItem_o *item,
        System_Action_bool__o *decideCallback,
        const MethodInfo *method)
{
  EventCraftWithdrawConfirmDialogComponent_o *v6; // x20
  struct EventTradeGoodsEntity_o **p_tradeGoodsEntity; // x21
  UILabel_o *titleLabel; // x22
  UILabel_o *detailLabel; // x22
  UILabel_o *withdrawnItemUiHeaderLbBefore; // x22
  UILabel_o *withdrawnItemUiHeaderLbAfter; // x22
  UILabel_o *withdrawnItemUiTitleLabel; // x22
  UILabel_o *withdrawnItemNoneLabel; // x22
  UILabel_o *cancelButtonLb; // x22
  UILabel_o *decideButtonLb; // x22
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  bool v17; // w21
  int32_t NowTradeNum; // w0
  const MethodInfo *v19; // x2
  int32_t v20; // w21

  v6 = this;
  if ( (byte_4C2158D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_13497/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/);
    sub_1C2D490(&StringLiteral_3909/*"CRAFT_EVENT_WITHDRAWAL_DIALOG_TITLE"*/);
    sub_1C2D490(&StringLiteral_13502/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/);
    sub_1C2D490(&StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_13496/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/);
    sub_1C2D490(&StringLiteral_13499/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/);
    sub_1C2D490(&StringLiteral_3908/*"CRAFT_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/);
    this = (EventCraftWithdrawConfirmDialogComponent_o *)sub_1C2D490(&StringLiteral_13501/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/);
    byte_4C2158D = 1;
  }
  if ( !item )
    goto LABEL_28;
  v6->fields.tradeGoodsEntity = item->fields._TradeGoodsEntity_k__BackingField;
  p_tradeGoodsEntity = &v6->fields.tradeGoodsEntity;
  sub_1C2D434(&v6->fields.tradeGoodsEntity);
  v6->fields.onDecide = decideCallback;
  sub_1C2D434(&v6->fields.onDecide);
  titleLabel = v6->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3909/*"CRAFT_EVENT_WITHDRAWAL_DIALOG_TITLE"*/,
                                                         0);
  if ( !titleLabel )
    goto LABEL_28;
  UILabel__set_text(titleLabel, (System_String_o *)this, 0);
  detailLabel = v6->fields.detailLabel;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3908/*"CRAFT_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/,
                                                         0);
  if ( !detailLabel )
    goto LABEL_28;
  UILabel__set_text(detailLabel, (System_String_o *)this, 0);
  withdrawnItemUiHeaderLbBefore = v6->fields.withdrawnItemUiHeaderLbBefore;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13497/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/,
                                                         0);
  if ( !withdrawnItemUiHeaderLbBefore )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemUiHeaderLbBefore, (System_String_o *)this, 0);
  withdrawnItemUiHeaderLbAfter = v6->fields.withdrawnItemUiHeaderLbAfter;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13496/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/,
                                                         0);
  if ( !withdrawnItemUiHeaderLbAfter )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemUiHeaderLbAfter, (System_String_o *)this, 0);
  withdrawnItemUiTitleLabel = v6->fields.withdrawnItemUiTitleLabel;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13501/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/,
                                                         0);
  if ( !withdrawnItemUiTitleLabel )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemUiTitleLabel, (System_String_o *)this, 0);
  withdrawnItemNoneLabel = v6->fields.withdrawnItemNoneLabel;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13502/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/,
                                                         0);
  if ( !withdrawnItemNoneLabel )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemNoneLabel, (System_String_o *)this, 0);
  cancelButtonLb = v6->fields.cancelButtonLb;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/,
                                                         0);
  if ( !cancelButtonLb )
    goto LABEL_28;
  UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0);
  decideButtonLb = v6->fields.decideButtonLb;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13499/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/,
                                                         0);
  if ( !decideButtonLb )
    goto LABEL_28;
  UILabel__set_text(decideButtonLb, (System_String_o *)this, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !*p_tradeGoodsEntity )
    goto LABEL_28;
  if ( !this )
    goto LABEL_28;
  v6->fields.consumeItemList = CommonConsumeMaster__GetSortedEntityList(
                                 (CommonConsumeMaster_o *)this,
                                 (*p_tradeGoodsEntity)->fields.commonConsumeId,
                                 0);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)sub_1C2D434(&v6->fields.consumeItemList);
  TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_28;
  v17 = !TradeInfo_k__BackingField->fields.tradeNum && TradeInfo_k__BackingField->fields.getNum == 0;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)v6->fields.withdrawnItemNoneLabel;
  if ( !this )
    goto LABEL_28;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
  if ( !this )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v17, 0);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)v6->fields.withdrawnItemUiParentObject;
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v17, 0),
        NowTradeNum = EventCraftListViewItem__get_NowTradeNum(item, 0),
        EventCraftWithdrawConfirmDialogComponent__SetWithdrawnItemUi(v6, NowTradeNum, v19),
        this = (EventCraftWithdrawConfirmDialogComponent_o *)EventCraftListViewItemDraw__GetDisplayMode(2, item, 0),
        !v6->fields.listViewItemDraw)
    || (v20 = (int)this,
        EventCraftListViewItemDraw__SetItem(v6->fields.listViewItemDraw, item, (int32_t)this, 0),
        (this = (EventCraftWithdrawConfirmDialogComponent_o *)v6->fields.listViewItemDraw) == 0) )
  {
LABEL_28:
    sub_1C2D6EC(this, item);
  }
  EventCraftListViewItemDraw__UpdateItem((EventCraftListViewItemDraw_o *)this, item, v20, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventCraftWithdrawConfirmDialogComponent__SetWithdrawnItemUi(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        int32_t nowTradeNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventCraftWithdrawConfirmDialogComponent_o *v4; // x19
  struct CommonConsumeEntity_array *consumeItemList; // x9
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *withdrawnItemUiBefore; // x8
  int max_length; // w11
  unsigned int v8; // w9
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *v9; // x9
  EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_o *v10; // x27
  EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_o **m_Items; // x8
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *withdrawnItemUiAfter; // x9
  EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_o *v13; // x28
  struct CommonConsumeEntity_array *v14; // x8
  UserItemMaster_o *v15; // x21
  __int64 v16; // x29
  unsigned int v17; // w20
  struct CommonConsumeEntity_array *v18; // x8
  __int64 v19; // x8
  struct UISprite_array *itemIcon; // x8
  unsigned int v21; // w9
  EventCraftWithdrawConfirmDialogComponent_o *v22; // x23
  struct UILabel_array *countOperatorLb; // x10
  struct UILabel_array *countLb; // x10
  struct CommonConsumeEntity_array *v25; // x9
  __int64 v26; // x9
  UISprite_o *v27; // x24
  int32_t v28; // w25
  struct UILabel_array *v29; // x8
  UILabel_o *v30; // x24
  struct UILabel_array *v31; // x8
  UILabel_o *v32; // x24
  struct UISprite_array *v33; // x8
  unsigned int v34; // w9
  struct UILabel_array *v35; // x10
  struct UILabel_array *v36; // x10
  struct CommonConsumeEntity_array *v37; // x9
  __int64 v38; // x9
  UISprite_o *v39; // x24
  int32_t v40; // w25
  struct UILabel_array *v41; // x8
  UILabel_o *v42; // x24
  struct UILabel_array *v43; // x8
  struct CommonConsumeEntity_array *v44; // x9
  __int64 v45; // x9
  int m_CancellationTokenSource_high; // w10
  UILabel_o *v47; // x23
  float v48; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v50; // x0
  int v51; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_4C2158E & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    this = (EventCraftWithdrawConfirmDialogComponent_o *)sub_1C2D490(&StringLiteral_3692/*"COMMON_COUNT_OPERATOR_CROSS"*/);
    byte_4C2158E = 1;
  }
  consumeItemList = v4->fields.consumeItemList;
  if ( !consumeItemList )
    goto LABEL_88;
  withdrawnItemUiBefore = v4->fields.withdrawnItemUiBefore;
  if ( !withdrawnItemUiBefore )
    goto LABEL_88;
  max_length = consumeItemList->max_length;
  v8 = withdrawnItemUiBefore->max_length;
  v51 = max_length;
  if ( max_length != 2 )
  {
    if ( v8 > 1 )
    {
      withdrawnItemUiAfter = v4->fields.withdrawnItemUiAfter;
      if ( !withdrawnItemUiAfter )
        goto LABEL_88;
      if ( LODWORD(withdrawnItemUiAfter->max_length) > 1 )
      {
        v10 = withdrawnItemUiBefore->m_Items[1];
        m_Items = &withdrawnItemUiAfter->m_Items[1];
        goto LABEL_14;
      }
    }
LABEL_89:
    sub_1C2D6F4(this, *(_QWORD *)&nowTradeNum, method, v3);
  }
  if ( !v8 )
    goto LABEL_89;
  v9 = v4->fields.withdrawnItemUiAfter;
  if ( !v9 )
    goto LABEL_88;
  if ( !LODWORD(v9->max_length) )
    goto LABEL_89;
  v10 = withdrawnItemUiBefore->m_Items[0];
  m_Items = v9->m_Items;
LABEL_14:
  v13 = *m_Items;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserItemMaster___);
  v14 = v4->fields.consumeItemList;
  if ( !v14 )
    goto LABEL_88;
  v15 = (UserItemMaster_o *)this;
  v16 = 4;
  while ( 1 )
  {
    v17 = v16 - 4;
    if ( (int)v16 - 4 >= SLODWORD(v14->max_length) )
      break;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
    }
    this = (EventCraftWithdrawConfirmDialogComponent_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (EventCraftWithdrawConfirmDialogComponent_o *)NetworkManager_TypeInfo;
    }
    v18 = v4->fields.consumeItemList;
    if ( !v18 )
      goto LABEL_88;
    if ( v17 >= LODWORD(v18->max_length) )
      goto LABEL_89;
    v19 = *((_QWORD *)&v18->obj.klass + v16);
    if ( !v19 )
      goto LABEL_88;
    if ( !v15 )
      goto LABEL_88;
    this = (EventCraftWithdrawConfirmDialogComponent_o *)UserItemMaster__GetEntityDefinitely(
                                                           v15,
                                                           this->fields.withdrawnItemUiParentObject[2].fields.m_CachedPtr,
                                                           *(_DWORD *)(v19 + 28),
                                                           0);
    if ( !v10 )
      goto LABEL_88;
    itemIcon = v10->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_88;
    v21 = itemIcon->max_length;
    v22 = this;
    if ( (int)v17 < (int)v21 )
    {
      countOperatorLb = v10->fields.countOperatorLb;
      if ( !countOperatorLb )
        goto LABEL_88;
      if ( (signed int)v17 < SLODWORD(countOperatorLb->max_length) )
      {
        countLb = v10->fields.countLb;
        if ( !countLb )
          goto LABEL_88;
        if ( (signed int)v17 < SLODWORD(countLb->max_length) )
        {
          if ( v17 >= v21 )
            goto LABEL_89;
          v25 = v4->fields.consumeItemList;
          if ( !v25 )
            goto LABEL_88;
          if ( v17 >= LODWORD(v25->max_length) )
            goto LABEL_89;
          v26 = *((_QWORD *)&v25->obj.klass + v16);
          if ( !v26 )
            goto LABEL_88;
          v27 = (UISprite_o *)*((_QWORD *)&itemIcon->obj.klass + v16);
          v28 = *(_DWORD *)(v26 + 28);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)AtlasManager__SetItem(v27, v28, 0);
          v29 = v10->fields.countOperatorLb;
          if ( !v29 )
            goto LABEL_88;
          if ( v17 >= LODWORD(v29->max_length) )
            goto LABEL_89;
          v30 = (UILabel_o *)*((_QWORD *)&v29->obj.klass + v16);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_3692/*"COMMON_COUNT_OPERATOR_CROSS"*/,
                                                                 0);
          if ( !v30 )
            goto LABEL_88;
          UILabel__set_text(v30, (System_String_o *)this, 0);
          v31 = v10->fields.countLb;
          if ( !v31 )
            goto LABEL_88;
          if ( v17 >= LODWORD(v31->max_length) )
            goto LABEL_89;
          if ( !v22 )
            goto LABEL_88;
          v32 = (UILabel_o *)*((_QWORD *)&v31->obj.klass + v16);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__GetNumberFormatLong(
                                                                 SHIDWORD(v22->fields.m_CancellationTokenSource),
                                                                 0);
          if ( !v32 )
            goto LABEL_88;
          UILabel__set_text(v32, (System_String_o *)this, 0);
        }
      }
    }
    if ( !v13 )
      goto LABEL_88;
    v33 = v13->fields.itemIcon;
    if ( !v33 )
      goto LABEL_88;
    v34 = v33->max_length;
    if ( (int)v17 < (int)v34 )
    {
      v35 = v13->fields.countOperatorLb;
      if ( !v35 )
        goto LABEL_88;
      if ( (signed int)v17 < SLODWORD(v35->max_length) )
      {
        v36 = v13->fields.countLb;
        if ( !v36 )
          goto LABEL_88;
        if ( (signed int)v17 < SLODWORD(v36->max_length) )
        {
          if ( v17 >= v34 )
            goto LABEL_89;
          v37 = v4->fields.consumeItemList;
          if ( !v37 )
            goto LABEL_88;
          if ( v17 >= LODWORD(v37->max_length) )
            goto LABEL_89;
          v38 = *((_QWORD *)&v37->obj.klass + v16);
          if ( !v38 )
            goto LABEL_88;
          v39 = (UISprite_o *)*((_QWORD *)&v33->obj.klass + v16);
          v40 = *(_DWORD *)(v38 + 28);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)AtlasManager__SetItem(v39, v40, 0);
          v41 = v13->fields.countOperatorLb;
          if ( !v41 )
            goto LABEL_88;
          if ( v17 >= LODWORD(v41->max_length) )
            goto LABEL_89;
          v42 = (UILabel_o *)*((_QWORD *)&v41->obj.klass + v16);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_3692/*"COMMON_COUNT_OPERATOR_CROSS"*/,
                                                                 0);
          if ( !v42 )
            goto LABEL_88;
          UILabel__set_text(v42, (System_String_o *)this, 0);
          v43 = v13->fields.countLb;
          if ( !v43 )
            goto LABEL_88;
          if ( v17 >= LODWORD(v43->max_length) )
            goto LABEL_89;
          if ( !v22 )
            goto LABEL_88;
          v44 = v4->fields.consumeItemList;
          if ( !v44 )
            goto LABEL_88;
          if ( v17 >= LODWORD(v44->max_length) )
            goto LABEL_89;
          v45 = *((_QWORD *)&v44->obj.klass + v16);
          if ( !v45 )
            goto LABEL_88;
          m_CancellationTokenSource_high = HIDWORD(v22->fields.m_CancellationTokenSource);
          v47 = (UILabel_o *)*((_QWORD *)&v43->obj.klass + v16);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__GetNumberFormatLong(
                                                                 m_CancellationTokenSource_high
                                                               + *(_DWORD *)(v45 + 32) * nowTradeNum,
                                                                 0);
          if ( !v47 )
            goto LABEL_88;
          UILabel__set_text(v47, (System_String_o *)this, 0);
        }
      }
    }
    v14 = v4->fields.consumeItemList;
    ++v16;
    if ( !v14 )
      goto LABEL_88;
  }
  this = (EventCraftWithdrawConfirmDialogComponent_o *)v4->fields.withdrawnItemUiHeaderLbBefore;
  v48 = v51 == 2 ? -60.0 : -130.0;
  if ( !this )
    goto LABEL_88;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(gameObject, v48, 0);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)v4->fields.withdrawnItemUiHeaderLbAfter;
  if ( !this
    || (v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        GameObjectExtensions__SetLocalPositionX(v50, v48, 0),
        (this = (EventCraftWithdrawConfirmDialogComponent_o *)v4->fields.withdrawnItemUiParentObject2) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v51 == 2, 0),
        (this = (EventCraftWithdrawConfirmDialogComponent_o *)v4->fields.withdrawnItemUiParentObject3) == 0) )
  {
LABEL_88:
    sub_1C2D6EC(this, *(_QWORD *)&nowTradeNum);
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
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4C21592 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21592 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C2D6EC(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___ctor(
        EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}