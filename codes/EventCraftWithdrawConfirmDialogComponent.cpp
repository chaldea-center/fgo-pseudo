void __fastcall EventCraftWithdrawConfirmDialogComponent___ctor(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4B16895 & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    sub_1BCAFF8(&EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___TypeInfo, v3);
    byte_4B16895 = 1;
  }
  this->fields.withdrawnItemUiBefore = (struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *)sub_1BCB0A0(EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___TypeInfo, 2LL);
  sub_1BCAF9C(&this->fields.withdrawnItemUiBefore);
  this->fields.withdrawnItemUiAfter = (struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *)sub_1BCB0A0(EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___TypeInfo, 2LL);
  sub_1BCAF9C(&this->fields.withdrawnItemUiAfter);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventCraftWithdrawConfirmDialogComponent__CallOnDecide(
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
    *p_onDecide = 0LL;
    sub_1BCAF9C(p_onDecide);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall EventCraftWithdrawConfirmDialogComponent__Close(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4B16893 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_EventCraftWithdrawConfirmDialogComponent_Init__, v3);
    byte_4B16893 = 1;
  }
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EventCraftWithdrawConfirmDialogComponent_Init__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall EventCraftWithdrawConfirmDialogComponent__Init(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  EventCraftListViewManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0LL);
  this->fields.state = 0;
  this->fields.tradeGoodsEntity = 0LL;
  sub_1BCAF9C(&this->fields.tradeGoodsEntity);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventCraftWithdrawConfirmDialogComponent__OnClickCancel(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B16892 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__, method);
    byte_4B16892 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
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

  if ( (byte_4B16891 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__, method);
    byte_4B16891 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
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

  if ( (byte_4B1688E & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, item);
    sub_1BCAFF8(&Method_EventCraftWithdrawConfirmDialogComponent__Open_b__24_0__, v7);
    byte_4B1688E = 1;
  }
  if ( !this->fields.state )
  {
    EventCraftWithdrawConfirmDialogComponent__SetUpUi(this, item, callback, method);
    this->fields.state = 1;
    v8 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
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
  bool v27; // w21
  int32_t NowTradeNum; // w0
  const MethodInfo *v29; // x2
  int32_t v30; // w21

  v6 = this;
  if ( (byte_4B1688F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_CommonConsumeMaster___, item);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_13385/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/, v9);
    sub_1BCAFF8(&StringLiteral_3879/*"CRAFT_EVENT_WITHDRAWAL_DIALOG_TITLE"*/, v10);
    sub_1BCAFF8(&StringLiteral_13390/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/, v11);
    sub_1BCAFF8(&StringLiteral_3649/*"COMMON_CONFIRM_CANCEL"*/, v12);
    sub_1BCAFF8(&StringLiteral_13384/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/, v13);
    sub_1BCAFF8(&StringLiteral_13387/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/, v14);
    sub_1BCAFF8(&StringLiteral_3878/*"CRAFT_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/, v15);
    this = (EventCraftWithdrawConfirmDialogComponent_o *)sub_1BCAFF8(&StringLiteral_13389/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/, v16);
    byte_4B1688F = 1;
  }
  if ( !item )
    goto LABEL_28;
  v6->fields.tradeGoodsEntity = item->fields._TradeGoodsEntity_k__BackingField;
  p_tradeGoodsEntity = &v6->fields.tradeGoodsEntity;
  sub_1BCAF9C(&v6->fields.tradeGoodsEntity);
  v6->fields.onDecide = decideCallback;
  sub_1BCAF9C(&v6->fields.onDecide);
  titleLabel = v6->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3879/*"CRAFT_EVENT_WITHDRAWAL_DIALOG_TITLE"*/,
                                                         0LL);
  if ( !titleLabel )
    goto LABEL_28;
  UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
  detailLabel = v6->fields.detailLabel;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3878/*"CRAFT_EVENT_WITHDRAWAL_DIALOG_MESSAGE"*/,
                                                         0LL);
  if ( !detailLabel )
    goto LABEL_28;
  UILabel__set_text(detailLabel, (System_String_o *)this, 0LL);
  withdrawnItemUiHeaderLbBefore = v6->fields.withdrawnItemUiHeaderLbBefore;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13385/*"TRADE_EVENT_WITHDRAWAL_DIALOG_BEFORE_LABEL"*/,
                                                         0LL);
  if ( !withdrawnItemUiHeaderLbBefore )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemUiHeaderLbBefore, (System_String_o *)this, 0LL);
  withdrawnItemUiHeaderLbAfter = v6->fields.withdrawnItemUiHeaderLbAfter;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13384/*"TRADE_EVENT_WITHDRAWAL_DIALOG_AFTER_LABEL"*/,
                                                         0LL);
  if ( !withdrawnItemUiHeaderLbAfter )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemUiHeaderLbAfter, (System_String_o *)this, 0LL);
  withdrawnItemUiTitleLabel = v6->fields.withdrawnItemUiTitleLabel;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13389/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS"*/,
                                                         0LL);
  if ( !withdrawnItemUiTitleLabel )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemUiTitleLabel, (System_String_o *)this, 0LL);
  withdrawnItemNoneLabel = v6->fields.withdrawnItemNoneLabel;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13390/*"TRADE_EVENT_WITHDRAWAL_DIALOG_RETURN_ITEMS_NONE"*/,
                                                         0LL);
  if ( !withdrawnItemNoneLabel )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemNoneLabel, (System_String_o *)this, 0LL);
  cancelButtonLb = v6->fields.cancelButtonLb;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_CANCEL"*/,
                                                         0LL);
  if ( !cancelButtonLb )
    goto LABEL_28;
  UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0LL);
  decideButtonLb = v6->fields.decideButtonLb;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13387/*"TRADE_EVENT_WITHDRAWAL_DIALOG_EXECUTE"*/,
                                                         0LL);
  if ( !decideButtonLb )
    goto LABEL_28;
  UILabel__set_text(decideButtonLb, (System_String_o *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !*p_tradeGoodsEntity )
    goto LABEL_28;
  if ( !this )
    goto LABEL_28;
  v6->fields.consumeItemList = CommonConsumeMaster__GetSortedEntityList(
                                 (CommonConsumeMaster_o *)this,
                                 (*p_tradeGoodsEntity)->fields.commonConsumeId,
                                 0LL);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)sub_1BCAF9C(&v6->fields.consumeItemList);
  TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_28;
  v27 = !TradeInfo_k__BackingField->fields.tradeNum && TradeInfo_k__BackingField->fields.getNum == 0;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)v6->fields.withdrawnItemNoneLabel;
  if ( !this )
    goto LABEL_28;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
  if ( !this )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v27, 0LL);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)v6->fields.withdrawnItemUiParentObject;
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v27, 0LL),
        NowTradeNum = EventCraftListViewItem__get_NowTradeNum(item, 0LL),
        EventCraftWithdrawConfirmDialogComponent__SetWithdrawnItemUi(v6, NowTradeNum, v29),
        this = (EventCraftWithdrawConfirmDialogComponent_o *)EventCraftListViewItemDraw__GetDisplayMode(2, item, 0LL),
        !v6->fields.listViewItemDraw)
    || (v30 = (int)this,
        EventCraftListViewItemDraw__SetItem(v6->fields.listViewItemDraw, item, (int32_t)this, 0LL),
        (this = (EventCraftWithdrawConfirmDialogComponent_o *)v6->fields.listViewItemDraw) == 0LL) )
  {
LABEL_28:
    sub_1BCB254(this, item);
  }
  EventCraftListViewItemDraw__UpdateItem((EventCraftListViewItemDraw_o *)this, item, v30, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftWithdrawConfirmDialogComponent__SetWithdrawnItemUi(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        int32_t nowTradeNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventCraftWithdrawConfirmDialogComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct CommonConsumeEntity_array *consumeItemList; // x9
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *withdrawnItemUiBefore; // x8
  il2cpp_array_size_t max_length; // w11
  unsigned int v13; // w9
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *v14; // x9
  EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_o *v15; // x27
  EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_o **m_Items; // x8
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *withdrawnItemUiAfter; // x9
  EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_o *v18; // x28
  struct CommonConsumeEntity_array *v19; // x8
  UserItemMaster_o *v20; // x21
  __int64 v21; // x29
  il2cpp_array_size_t v22; // w20
  struct CommonConsumeEntity_array *v23; // x8
  __int64 v24; // x8
  struct UISprite_array *itemIcon; // x8
  il2cpp_array_size_t v26; // w9
  EventCraftWithdrawConfirmDialogComponent_o *v27; // x23
  struct UILabel_array *countOperatorLb; // x10
  struct UILabel_array *countLb; // x10
  struct CommonConsumeEntity_array *v30; // x9
  __int64 v31; // x9
  UISprite_o *v32; // x24
  int32_t v33; // w25
  struct UILabel_array *v34; // x8
  UILabel_o *v35; // x24
  struct UILabel_array *v36; // x8
  UILabel_o *v37; // x24
  struct UISprite_array *v38; // x8
  il2cpp_array_size_t v39; // w9
  struct UILabel_array *v40; // x10
  struct UILabel_array *v41; // x10
  struct CommonConsumeEntity_array *v42; // x9
  __int64 v43; // x9
  UISprite_o *v44; // x24
  int32_t v45; // w25
  struct UILabel_array *v46; // x8
  UILabel_o *v47; // x24
  struct UILabel_array *v48; // x8
  struct CommonConsumeEntity_array *v49; // x9
  __int64 v50; // x9
  int m_CancellationTokenSource_high; // w10
  UILabel_o *v52; // x23
  float v53; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v55; // x0
  il2cpp_array_size_t v56; // [xsp+8h] [xbp-68h]

  v4 = this;
  if ( (byte_4B16890 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, *(_QWORD *)&nowTradeNum);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserItemMaster___, v5);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v7);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    this = (EventCraftWithdrawConfirmDialogComponent_o *)sub_1BCAFF8(&StringLiteral_3664/*"COMMON_COUNT_OPERATOR_CROSS"*/, v9);
    byte_4B16890 = 1;
  }
  consumeItemList = v4->fields.consumeItemList;
  if ( !consumeItemList )
    goto LABEL_88;
  withdrawnItemUiBefore = v4->fields.withdrawnItemUiBefore;
  if ( !withdrawnItemUiBefore )
    goto LABEL_88;
  max_length = consumeItemList->max_length;
  v13 = withdrawnItemUiBefore->max_length;
  v56 = max_length;
  if ( max_length != 2 )
  {
    if ( v13 > 1 )
    {
      withdrawnItemUiAfter = v4->fields.withdrawnItemUiAfter;
      if ( !withdrawnItemUiAfter )
        goto LABEL_88;
      if ( withdrawnItemUiAfter->max_length > 1 )
      {
        v15 = withdrawnItemUiBefore->m_Items[1];
        m_Items = &withdrawnItemUiAfter->m_Items[1];
        goto LABEL_14;
      }
    }
LABEL_89:
    sub_1BCB25C(this, *(_QWORD *)&nowTradeNum, method, v3);
  }
  if ( !v13 )
    goto LABEL_89;
  v14 = v4->fields.withdrawnItemUiAfter;
  if ( !v14 )
    goto LABEL_88;
  if ( !v14->max_length )
    goto LABEL_89;
  v15 = withdrawnItemUiBefore->m_Items[0];
  m_Items = v14->m_Items;
LABEL_14:
  v18 = *m_Items;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserItemMaster___);
  v19 = v4->fields.consumeItemList;
  if ( !v19 )
    goto LABEL_88;
  v20 = (UserItemMaster_o *)this;
  v21 = 4LL;
  while ( 1 )
  {
    v22 = v21 - 4;
    if ( (int)v21 - 4 >= (signed int)v19->max_length )
      break;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B165D1 )
    {
      sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&nowTradeNum);
      byte_4B165D1 = 1;
    }
    this = (EventCraftWithdrawConfirmDialogComponent_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (EventCraftWithdrawConfirmDialogComponent_o *)NetworkManager_TypeInfo;
    }
    v23 = v4->fields.consumeItemList;
    if ( !v23 )
      goto LABEL_88;
    if ( v22 >= v23->max_length )
      goto LABEL_89;
    v24 = *((_QWORD *)&v23->obj.klass + v21);
    if ( !v24 )
      goto LABEL_88;
    if ( !v20 )
      goto LABEL_88;
    this = (EventCraftWithdrawConfirmDialogComponent_o *)UserItemMaster__GetEntityDefinitely(
                                                           v20,
                                                           *(_QWORD *)&this->fields.withdrawnItemUiParentObject[2].fields.m_CachedPtr,
                                                           *(_DWORD *)(v24 + 28),
                                                           0LL);
    if ( !v15 )
      goto LABEL_88;
    itemIcon = v15->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_88;
    v26 = itemIcon->max_length;
    v27 = this;
    if ( (int)v22 < (int)v26 )
    {
      countOperatorLb = v15->fields.countOperatorLb;
      if ( !countOperatorLb )
        goto LABEL_88;
      if ( (signed int)v22 < (signed int)countOperatorLb->max_length )
      {
        countLb = v15->fields.countLb;
        if ( !countLb )
          goto LABEL_88;
        if ( (signed int)v22 < (signed int)countLb->max_length )
        {
          if ( v22 >= v26 )
            goto LABEL_89;
          v30 = v4->fields.consumeItemList;
          if ( !v30 )
            goto LABEL_88;
          if ( v22 >= v30->max_length )
            goto LABEL_89;
          v31 = *((_QWORD *)&v30->obj.klass + v21);
          if ( !v31 )
            goto LABEL_88;
          v32 = (UISprite_o *)*((_QWORD *)&itemIcon->obj.klass + v21);
          v33 = *(_DWORD *)(v31 + 28);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)AtlasManager__SetItem(v32, v33, 0LL);
          v34 = v15->fields.countOperatorLb;
          if ( !v34 )
            goto LABEL_88;
          if ( v22 >= v34->max_length )
            goto LABEL_89;
          v35 = (UILabel_o *)*((_QWORD *)&v34->obj.klass + v21);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_3664/*"COMMON_COUNT_OPERATOR_CROSS"*/,
                                                                 0LL);
          if ( !v35 )
            goto LABEL_88;
          UILabel__set_text(v35, (System_String_o *)this, 0LL);
          v36 = v15->fields.countLb;
          if ( !v36 )
            goto LABEL_88;
          if ( v22 >= v36->max_length )
            goto LABEL_89;
          if ( !v27 )
            goto LABEL_88;
          v37 = (UILabel_o *)*((_QWORD *)&v36->obj.klass + v21);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__GetNumberFormatLong(
                                                                 SHIDWORD(v27->fields.m_CancellationTokenSource),
                                                                 0LL);
          if ( !v37 )
            goto LABEL_88;
          UILabel__set_text(v37, (System_String_o *)this, 0LL);
        }
      }
    }
    if ( !v18 )
      goto LABEL_88;
    v38 = v18->fields.itemIcon;
    if ( !v38 )
      goto LABEL_88;
    v39 = v38->max_length;
    if ( (int)v22 < (int)v39 )
    {
      v40 = v18->fields.countOperatorLb;
      if ( !v40 )
        goto LABEL_88;
      if ( (signed int)v22 < (signed int)v40->max_length )
      {
        v41 = v18->fields.countLb;
        if ( !v41 )
          goto LABEL_88;
        if ( (signed int)v22 < (signed int)v41->max_length )
        {
          if ( v22 >= v39 )
            goto LABEL_89;
          v42 = v4->fields.consumeItemList;
          if ( !v42 )
            goto LABEL_88;
          if ( v22 >= v42->max_length )
            goto LABEL_89;
          v43 = *((_QWORD *)&v42->obj.klass + v21);
          if ( !v43 )
            goto LABEL_88;
          v44 = (UISprite_o *)*((_QWORD *)&v38->obj.klass + v21);
          v45 = *(_DWORD *)(v43 + 28);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)AtlasManager__SetItem(v44, v45, 0LL);
          v46 = v18->fields.countOperatorLb;
          if ( !v46 )
            goto LABEL_88;
          if ( v22 >= v46->max_length )
            goto LABEL_89;
          v47 = (UILabel_o *)*((_QWORD *)&v46->obj.klass + v21);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_3664/*"COMMON_COUNT_OPERATOR_CROSS"*/,
                                                                 0LL);
          if ( !v47 )
            goto LABEL_88;
          UILabel__set_text(v47, (System_String_o *)this, 0LL);
          v48 = v18->fields.countLb;
          if ( !v48 )
            goto LABEL_88;
          if ( v22 >= v48->max_length )
            goto LABEL_89;
          if ( !v27 )
            goto LABEL_88;
          v49 = v4->fields.consumeItemList;
          if ( !v49 )
            goto LABEL_88;
          if ( v22 >= v49->max_length )
            goto LABEL_89;
          v50 = *((_QWORD *)&v49->obj.klass + v21);
          if ( !v50 )
            goto LABEL_88;
          m_CancellationTokenSource_high = HIDWORD(v27->fields.m_CancellationTokenSource);
          v52 = (UILabel_o *)*((_QWORD *)&v48->obj.klass + v21);
          this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__GetNumberFormatLong(
                                                                 m_CancellationTokenSource_high
                                                               + *(_DWORD *)(v50 + 32) * nowTradeNum,
                                                                 0LL);
          if ( !v52 )
            goto LABEL_88;
          UILabel__set_text(v52, (System_String_o *)this, 0LL);
        }
      }
    }
    v19 = v4->fields.consumeItemList;
    ++v21;
    if ( !v19 )
      goto LABEL_88;
  }
  this = (EventCraftWithdrawConfirmDialogComponent_o *)v4->fields.withdrawnItemUiHeaderLbBefore;
  v53 = v56 == 2 ? -60.0 : -130.0;
  if ( !this )
    goto LABEL_88;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, v53, 0LL);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)v4->fields.withdrawnItemUiHeaderLbAfter;
  if ( !this
    || (v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        GameObjectExtensions__SetLocalPositionX(v55, v53, 0LL),
        (this = (EventCraftWithdrawConfirmDialogComponent_o *)v4->fields.withdrawnItemUiParentObject2) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v56 == 2, 0LL),
        (this = (EventCraftWithdrawConfirmDialogComponent_o *)v4->fields.withdrawnItemUiParentObject3) == 0LL) )
  {
LABEL_88:
    sub_1BCB254(this, *(_QWORD *)&nowTradeNum);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v56 != 2, 0LL);
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

  if ( (byte_4B16894 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B16894 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1BCB254(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___ctor(
        EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}