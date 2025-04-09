void __fastcall EventCraftWithdrawConfirmDialogComponent___ctor(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_49BEE90 & 1) == 0 )
  {
    sub_1B4CF90(&BaseDialog_TypeInfo, method);
    sub_1B4CF90(&EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___TypeInfo, v3);
    byte_49BEE90 = 1;
  }
  v4 = (struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *)sub_1B4D038(
                                                                                      EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___TypeInfo,
                                                                                      2LL);
  this->fields.withdrawnItemUiBefore = v4;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.withdrawnItemUiBefore, (int32_t)v4, v5, v6);
  v7 = (struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *)sub_1B4D038(
                                                                                      EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___TypeInfo,
                                                                                      2LL);
  this->fields.withdrawnItemUiAfter = v7;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.withdrawnItemUiAfter, (int32_t)v7, v8, v9);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventCraftWithdrawConfirmDialogComponent__CallOnDecide(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_onDecide; // x0
  struct System_Action_bool__o *v5; // x20
  struct System_Action_bool__o *onDecide; // t1

  onDecide = this->fields.onDecide;
  p_onDecide = (CGThumbnailListItem_o *)&this->fields.onDecide;
  v5 = onDecide;
  if ( onDecide )
  {
    p_onDecide->klass = 0LL;
    sub_1B4CF34(p_onDecide, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall EventCraftWithdrawConfirmDialogComponent__Close(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_49BEE8E & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_EventCraftWithdrawConfirmDialogComponent_Init__, v3);
    byte_49BEE8E = 1;
  }
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EventCraftWithdrawConfirmDialogComponent_Init__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall EventCraftWithdrawConfirmDialogComponent__Init(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  EventCraftListViewManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0LL);
  this->fields.state = 0;
  this->fields.tradeGoodsEntity = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.tradeGoodsEntity, 0, v3, v4);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventCraftWithdrawConfirmDialogComponent__OnClickCancel(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49BEE8D & 1) == 0 )
  {
    sub_1B4CF90(&Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__, method);
    byte_49BEE8D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B4CFA8(Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    EventCraftWithdrawConfirmDialogComponent__Close(this, v5);
  }
}


void __fastcall EventCraftWithdrawConfirmDialogComponent__OnClickDecide(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_49BEE8C & 1) == 0 )
  {
    sub_1B4CF90(&Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__, method);
    byte_49BEE8C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B4CFA8(Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    EventCraftWithdrawConfirmDialogComponent__CallOnDecide(this, 1, v5);
  }
}


void __fastcall EventCraftWithdrawConfirmDialogComponent__Open(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        EventCraftListViewItem_o *item,
        System_Action_bool__o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Action_o *v8; // x20

  if ( (byte_49BEE89 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, item);
    sub_1B4CF90(&Method_EventCraftWithdrawConfirmDialogComponent__Open_b__24_0__, v7);
    byte_49BEE89 = 1;
  }
  if ( !this->fields.state )
  {
    EventCraftWithdrawConfirmDialogComponent__SetUpUi(this, item, callback, method);
    this->fields.state = 1;
    v8 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_EventCraftWithdrawConfirmDialogComponent__Open_b__24_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v8, 0, 0LL);
  }
}


void __fastcall EventCraftWithdrawConfirmDialogComponent__SetUpUi(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        EventCraftListViewItem_o *item,
        System_Action_bool__o *decideCallback,
        const MethodInfo *method)
{
  EventCraftWithdrawConfirmDialogComponent_o *v6; // x20
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
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x1
  struct EventTradeGoodsEntity_o **p_tradeGoodsEntity; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UILabel_o *titleLabel; // x22
  UILabel_o *detailLabel; // x22
  UILabel_o *withdrawnItemUiHeaderLbBefore; // x22
  UILabel_o *withdrawnItemUiHeaderLbAfter; // x22
  UILabel_o *withdrawnItemUiTitleLabel; // x22
  UILabel_o *withdrawnItemNoneLabel; // x22
  UILabel_o *cancelButtonLb; // x22
  UILabel_o *decideButtonLb; // x22
  CommonConsumeEntity_array *SortedEntityList; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  bool v33; // w21
  int32_t NowTradeNum; // w0
  const MethodInfo *v35; // x2
  int32_t v36; // w21

  v6 = this;
  if ( (byte_49BEE8A & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_CommonConsumeMaster___, item);
    sub_1B4CF90(&DataManager_TypeInfo, v7);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v8);
    sub_1B4CF90(&StringLiteral_13205/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/, v9);
    sub_1B4CF90(&StringLiteral_3868/*"CRAFT_EVENT_WITHDRAWAL_DIALOG_TITLE"*/, v10);
    sub_1B4CF90(&StringLiteral_13210/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/, v11);
    sub_1B4CF90(&StringLiteral_3656/*"COMMON_CONFIRM_CANCEL"*/, v12);
    sub_1B4CF90(&StringLiteral_13204/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/, v13);
    sub_1B4CF90(&StringLiteral_13207/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/, v14);
    sub_1B4CF90(&StringLiteral_3867/*"CRAFT_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/, v15);
    this = (EventCraftWithdrawConfirmDialogComponent_o *)sub_1B4CF90(&StringLiteral_13209/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/, v16);
    byte_49BEE8A = 1;
  }
  if ( !item )
    goto LABEL_28;
  TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
  v6->fields.tradeGoodsEntity = TradeGoodsEntity_k__BackingField;
  p_tradeGoodsEntity = &v6->fields.tradeGoodsEntity;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&v6->fields.tradeGoodsEntity,
    (int32_t)TradeGoodsEntity_k__BackingField,
    (int32_t)decideCallback,
    method);
  v6->fields.onDecide = decideCallback;
  sub_1B4CF34((CGThumbnailListItem_o *)&v6->fields.onDecide, (int32_t)decideCallback, v19, v20);
  titleLabel = v6->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3868/*"CRAFT_EVENT_WITHDRAWAL_DIALOG_TITLE"*/,
                                                         0LL);
  if ( !titleLabel )
    goto LABEL_28;
  UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
  detailLabel = v6->fields.detailLabel;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3867/*"CRAFT_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/,
                                                         0LL);
  if ( !detailLabel )
    goto LABEL_28;
  UILabel__set_text(detailLabel, (System_String_o *)this, 0LL);
  withdrawnItemUiHeaderLbBefore = v6->fields.withdrawnItemUiHeaderLbBefore;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13205/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/,
                                                         0LL);
  if ( !withdrawnItemUiHeaderLbBefore )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemUiHeaderLbBefore, (System_String_o *)this, 0LL);
  withdrawnItemUiHeaderLbAfter = v6->fields.withdrawnItemUiHeaderLbAfter;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13204/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/,
                                                         0LL);
  if ( !withdrawnItemUiHeaderLbAfter )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemUiHeaderLbAfter, (System_String_o *)this, 0LL);
  withdrawnItemUiTitleLabel = v6->fields.withdrawnItemUiTitleLabel;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13209/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/,
                                                         0LL);
  if ( !withdrawnItemUiTitleLabel )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemUiTitleLabel, (System_String_o *)this, 0LL);
  withdrawnItemNoneLabel = v6->fields.withdrawnItemNoneLabel;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13210/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/,
                                                         0LL);
  if ( !withdrawnItemNoneLabel )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemNoneLabel, (System_String_o *)this, 0LL);
  cancelButtonLb = v6->fields.cancelButtonLb;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3656/*"COMMON_CONFIRM_CANCEL"*/,
                                                         0LL);
  if ( !cancelButtonLb )
    goto LABEL_28;
  UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0LL);
  decideButtonLb = v6->fields.decideButtonLb;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13207/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/,
                                                         0LL);
  if ( !decideButtonLb )
    goto LABEL_28;
  UILabel__set_text(decideButtonLb, (System_String_o *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !*p_tradeGoodsEntity )
    goto LABEL_28;
  if ( !this )
    goto LABEL_28;
  SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                       (CommonConsumeMaster_o *)this,
                       (*p_tradeGoodsEntity)->fields.commonConsumeId,
                       0LL);
  v6->fields.consumeItemList = SortedEntityList;
  sub_1B4CF34((CGThumbnailListItem_o *)&v6->fields.consumeItemList, (int32_t)SortedEntityList, v30, v31);
  TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_28;
  v33 = !TradeInfo_k__BackingField->fields.tradeNum && TradeInfo_k__BackingField->fields.getNum == 0;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)v6->fields.withdrawnItemNoneLabel;
  if ( !this )
    goto LABEL_28;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
  if ( !this )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v33, 0LL);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)v6->fields.withdrawnItemUiParentObject;
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v33, 0LL),
        NowTradeNum = EventCraftListViewItem__get_NowTradeNum(item, 0LL),
        EventCraftWithdrawConfirmDialogComponent__SetWithdrawnItemUi(v6, NowTradeNum, v35),
        this = (EventCraftWithdrawConfirmDialogComponent_o *)EventCraftListViewItemDraw__GetDisplayMode(2, item, 0LL),
        !v6->fields.listViewItemDraw)
    || (v36 = (int)this,
        EventCraftListViewItemDraw__SetItem(v6->fields.listViewItemDraw, item, (int32_t)this, 0LL),
        (this = (EventCraftWithdrawConfirmDialogComponent_o *)v6->fields.listViewItemDraw) == 0LL) )
  {
LABEL_28:
    sub_1B4D1EC(this, item);
  }
  EventCraftListViewItemDraw__UpdateItem((EventCraftListViewItemDraw_o *)this, item, v36, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftWithdrawConfirmDialogComponent__SetWithdrawnItemUi(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        int32_t nowTradeNum,
        const MethodInfo *method)
{
  EventCraftWithdrawConfirmDialogComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct CommonConsumeEntity_array *consumeItemList; // x9
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *withdrawnItemUiBefore; // x8
  il2cpp_array_size_t max_length; // w11
  unsigned int v12; // w9
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *v13; // x9
  EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_o *v14; // x27
  EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_o **m_Items; // x8
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *withdrawnItemUiAfter; // x9
  EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_o *v17; // x28
  struct CommonConsumeEntity_array *v18; // x8
  UserItemMaster_o *v19; // x21
  __int64 v20; // x29
  il2cpp_array_size_t v21; // w20
  struct CommonConsumeEntity_array *v22; // x8
  __int64 v23; // x8
  struct UISprite_array *itemIcon; // x8
  il2cpp_array_size_t v25; // w9
  EventCraftWithdrawConfirmDialogComponent_o *v26; // x23
  struct UILabel_array *countOperatorLb; // x10
  struct UILabel_array *countLb; // x10
  struct CommonConsumeEntity_array *v29; // x9
  __int64 v30; // x9
  UISprite_o *v31; // x24
  int32_t v32; // w25
  struct UILabel_array *v33; // x8
  UILabel_o *v34; // x24
  struct UILabel_array *v35; // x8
  UILabel_o *v36; // x24
  struct UISprite_array *v37; // x8
  il2cpp_array_size_t v38; // w9
  struct UILabel_array *v39; // x10
  struct UILabel_array *v40; // x10
  struct CommonConsumeEntity_array *v41; // x9
  __int64 v42; // x9
  UISprite_o *v43; // x24
  int32_t v44; // w25
  struct UILabel_array *v45; // x8
  UILabel_o *v46; // x24
  struct UILabel_array *v47; // x8
  struct CommonConsumeEntity_array *v48; // x9
  __int64 v49; // x9
  int m_CancellationTokenSource_high; // w10
  UILabel_o *v51; // x23
  float v52; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v54; // x0
  il2cpp_array_size_t v55; // [xsp+8h] [xbp-68h]

  v3 = this;
  if ( (byte_49BEE8B & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, *(_QWORD *)&nowTradeNum);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserItemMaster___, v4);
    sub_1B4CF90(&DataManager_TypeInfo, v5);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v6);
    sub_1B4CF90(&NetworkManager_TypeInfo, v7);
    this = (EventCraftWithdrawConfirmDialogComponent_o *)sub_1B4CF90(&StringLiteral_3670/*"COMMON_COUNT_OPERATOR_CROSS"*/, v8);
    byte_49BEE8B = 1;
  }
  consumeItemList = v3->fields.consumeItemList;
  if ( !consumeItemList )
    goto LABEL_88;
  withdrawnItemUiBefore = v3->fields.withdrawnItemUiBefore;
  if ( !withdrawnItemUiBefore )
    goto LABEL_88;
  max_length = consumeItemList->max_length;
  v12 = withdrawnItemUiBefore->max_length;
  v55 = max_length;
  if ( max_length != 2 )
  {
    if ( v12 > 1 )
    {
      withdrawnItemUiAfter = v3->fields.withdrawnItemUiAfter;
      if ( !withdrawnItemUiAfter )
        goto LABEL_88;
      if ( withdrawnItemUiAfter->max_length > 1 )
      {
        v14 = withdrawnItemUiBefore->m_Items[1];
        m_Items = &withdrawnItemUiAfter->m_Items[1];
        goto LABEL_14;
      }
    }
LABEL_89:
    sub_1B4D1F4(this, *(_QWORD *)&nowTradeNum);
  }
  if ( !v12 )
    goto LABEL_89;
  v13 = v3->fields.withdrawnItemUiAfter;
  if ( !v13 )
    goto LABEL_88;
  if ( !v13->max_length )
    goto LABEL_89;
  v14 = withdrawnItemUiBefore->m_Items[0];
  m_Items = v13->m_Items;
LABEL_14:
  v17 = *m_Items;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserItemMaster___);
  v18 = v3->fields.consumeItemList;
  if ( !v18 )
    goto LABEL_88;
  v19 = (UserItemMaster_o *)this;
  v20 = 4LL;
  while ( 1 )
  {
    v21 = v20 - 4;
    if ( (int)v20 - 4 >= (signed int)v18->max_length )
      break;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_49B57A5 )
    {
      sub_1B4CF90(&NetworkManager_TypeInfo, *(_QWORD *)&nowTradeNum);
      byte_49B57A5 = 1;
    }
    this = (EventCraftWithdrawConfirmDialogComponent_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (EventCraftWithdrawConfirmDialogComponent_o *)NetworkManager_TypeInfo;
    }
    v22 = v3->fields.consumeItemList;
    if ( !v22 )
      goto LABEL_88;
    if ( v21 >= v22->max_length )
      goto LABEL_89;
    v23 = *((_QWORD *)&v22->obj.klass + v20);
    if ( !v23 )
      goto LABEL_88;
    if ( !v19 )
      goto LABEL_88;
    this = (EventCraftWithdrawConfirmDialogComponent_o *)UserItemMaster__GetEntityDefinitely(
                                                           v19,
                                                           *(_QWORD *)&this->fields.withdrawnItemUiParentObject[2].fields.m_CachedPtr,
                                                           *(_DWORD *)(v23 + 28),
                                                           0LL);
    if ( !v14 )
      goto LABEL_88;
    itemIcon = v14->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_88;
    v25 = itemIcon->max_length;
    v26 = this;
    if ( (int)v21 < (int)v25 )
    {
      countOperatorLb = v14->fields.countOperatorLb;
      if ( !countOperatorLb )
        goto LABEL_88;
      if ( (signed int)v21 < (signed int)countOperatorLb->max_length )
      {
        countLb = v14->fields.countLb;
        if ( !countLb )
          goto LABEL_88;
        if ( (signed int)v21 < (signed int)countLb->max_length )
        {
          if ( v21 >= v25 )
            goto LABEL_89;
          v29 = v3->fields.consumeItemList;
          if ( !v29 )
            goto LABEL_88;
          if ( v21 >= v29->max_length )
            goto LABEL_89;
          v30 = *((_QWORD *)&v29->obj.klass + v20);
          if ( !v30 )
            goto LABEL_88;
          v31 = (UISprite_o *)*((_QWORD *)&itemIcon->obj.klass + v20);
          v32 = *(_DWORD *)(v30 + 28);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)AtlasManager__SetItem(v31, v32, 0LL);
          v33 = v14->fields.countOperatorLb;
          if ( !v33 )
            goto LABEL_88;
          if ( v21 >= v33->max_length )
            goto LABEL_89;
          v34 = (UILabel_o *)*((_QWORD *)&v33->obj.klass + v20);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_3670/*"COMMON_COUNT_OPERATOR_CROSS"*/,
                                                                 0LL);
          if ( !v34 )
            goto LABEL_88;
          UILabel__set_text(v34, (System_String_o *)this, 0LL);
          v35 = v14->fields.countLb;
          if ( !v35 )
            goto LABEL_88;
          if ( v21 >= v35->max_length )
            goto LABEL_89;
          if ( !v26 )
            goto LABEL_88;
          v36 = (UILabel_o *)*((_QWORD *)&v35->obj.klass + v20);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__GetNumberFormatLong(
                                                                 SHIDWORD(v26->fields.m_CancellationTokenSource),
                                                                 0LL);
          if ( !v36 )
            goto LABEL_88;
          UILabel__set_text(v36, (System_String_o *)this, 0LL);
        }
      }
    }
    if ( !v17 )
      goto LABEL_88;
    v37 = v17->fields.itemIcon;
    if ( !v37 )
      goto LABEL_88;
    v38 = v37->max_length;
    if ( (int)v21 < (int)v38 )
    {
      v39 = v17->fields.countOperatorLb;
      if ( !v39 )
        goto LABEL_88;
      if ( (signed int)v21 < (signed int)v39->max_length )
      {
        v40 = v17->fields.countLb;
        if ( !v40 )
          goto LABEL_88;
        if ( (signed int)v21 < (signed int)v40->max_length )
        {
          if ( v21 >= v38 )
            goto LABEL_89;
          v41 = v3->fields.consumeItemList;
          if ( !v41 )
            goto LABEL_88;
          if ( v21 >= v41->max_length )
            goto LABEL_89;
          v42 = *((_QWORD *)&v41->obj.klass + v20);
          if ( !v42 )
            goto LABEL_88;
          v43 = (UISprite_o *)*((_QWORD *)&v37->obj.klass + v20);
          v44 = *(_DWORD *)(v42 + 28);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)AtlasManager__SetItem(v43, v44, 0LL);
          v45 = v17->fields.countOperatorLb;
          if ( !v45 )
            goto LABEL_88;
          if ( v21 >= v45->max_length )
            goto LABEL_89;
          v46 = (UILabel_o *)*((_QWORD *)&v45->obj.klass + v20);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_3670/*"COMMON_COUNT_OPERATOR_CROSS"*/,
                                                                 0LL);
          if ( !v46 )
            goto LABEL_88;
          UILabel__set_text(v46, (System_String_o *)this, 0LL);
          v47 = v17->fields.countLb;
          if ( !v47 )
            goto LABEL_88;
          if ( v21 >= v47->max_length )
            goto LABEL_89;
          if ( !v26 )
            goto LABEL_88;
          v48 = v3->fields.consumeItemList;
          if ( !v48 )
            goto LABEL_88;
          if ( v21 >= v48->max_length )
            goto LABEL_89;
          v49 = *((_QWORD *)&v48->obj.klass + v20);
          if ( !v49 )
            goto LABEL_88;
          m_CancellationTokenSource_high = HIDWORD(v26->fields.m_CancellationTokenSource);
          v51 = (UILabel_o *)*((_QWORD *)&v47->obj.klass + v20);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__GetNumberFormatLong(
                                                                 m_CancellationTokenSource_high
                                                               + *(_DWORD *)(v49 + 32) * nowTradeNum,
                                                                 0LL);
          if ( !v51 )
            goto LABEL_88;
          UILabel__set_text(v51, (System_String_o *)this, 0LL);
        }
      }
    }
    v18 = v3->fields.consumeItemList;
    ++v20;
    if ( !v18 )
      goto LABEL_88;
  }
  this = (EventCraftWithdrawConfirmDialogComponent_o *)v3->fields.withdrawnItemUiHeaderLbBefore;
  v52 = v55 == 2 ? -60.0 : -130.0;
  if ( !this )
    goto LABEL_88;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, v52, 0LL);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)v3->fields.withdrawnItemUiHeaderLbAfter;
  if ( !this
    || (v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        GameObjectExtensions__SetLocalPositionX(v54, v52, 0LL),
        (this = (EventCraftWithdrawConfirmDialogComponent_o *)v3->fields.withdrawnItemUiParentObject2) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v55 == 2, 0LL),
        (this = (EventCraftWithdrawConfirmDialogComponent_o *)v3->fields.withdrawnItemUiParentObject3) == 0LL) )
  {
LABEL_88:
    sub_1B4D1EC(this, *(_QWORD *)&nowTradeNum);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v55 != 2, 0LL);
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
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_49BEE8F & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49BEE8F = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B4D1EC(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___ctor(
        EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}