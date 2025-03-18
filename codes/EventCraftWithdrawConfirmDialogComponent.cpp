void __fastcall EventCraftWithdrawConfirmDialogComponent___ctor(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4C25F49 & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    sub_1C3B764(&EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___TypeInfo, v3);
    byte_4C25F49 = 1;
  }
  v4 = (struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *)sub_1C3B80C(
                                                                                      EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___TypeInfo,
                                                                                      2LL);
  this->fields.withdrawnItemUiBefore = v4;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.withdrawnItemUiBefore, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_array *)sub_1C3B80C(
                                                                                       EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___TypeInfo,
                                                                                       2LL);
  this->fields.withdrawnItemUiAfter = v11;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.withdrawnItemUiAfter,
    (int64_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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
    sub_1C3B708(p_onDecide, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4C25F47 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_EventCraftWithdrawConfirmDialogComponent_Init__, v3);
    byte_4C25F47 = 1;
  }
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EventCraftWithdrawConfirmDialogComponent_Init__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
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
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.tradeGoodsEntity, 0LL, v3, v4, v5, v6, v7, v8);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventCraftWithdrawConfirmDialogComponent__OnClickCancel(
        EventCraftWithdrawConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C25F46 & 1) == 0 )
  {
    sub_1C3B764(&Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__, method);
    byte_4C25F46 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_EventCraftWithdrawConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
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

  if ( (byte_4C25F45 & 1) == 0 )
  {
    sub_1C3B764(&Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__, method);
    byte_4C25F45 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_EventCraftWithdrawConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
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

  if ( (byte_4C25F42 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, item);
    sub_1C3B764(&Method_EventCraftWithdrawConfirmDialogComponent__Open_b__24_0__, v7);
    byte_4C25F42 = 1;
  }
  if ( !this->fields.state )
  {
    EventCraftWithdrawConfirmDialogComponent__SetUpUi(this, item, callback, method);
    this->fields.state = 1;
    v8 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  EventCraftWithdrawConfirmDialogComponent_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x1
  struct EventTradeGoodsEntity_o **p_tradeGoodsEntity; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  UILabel_o *titleLabel; // x22
  UILabel_o *detailLabel; // x22
  UILabel_o *withdrawnItemUiHeaderLbBefore; // x22
  UILabel_o *withdrawnItemUiHeaderLbAfter; // x22
  UILabel_o *withdrawnItemUiTitleLabel; // x22
  UILabel_o *withdrawnItemNoneLabel; // x22
  UILabel_o *cancelButtonLb; // x22
  UILabel_o *decideButtonLb; // x22
  CommonConsumeEntity_array *SortedEntityList; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  bool v45; // w21
  int32_t NowTradeNum; // w0
  const MethodInfo *v47; // x2
  int32_t v48; // w21

  v10 = this;
  if ( (byte_4C25F43 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_CommonConsumeMaster___, item);
    sub_1C3B764(&DataManager_TypeInfo, v11);
    sub_1C3B764(&LocalizationManager_TypeInfo, v12);
    sub_1C3B764(&StringLiteral_13704/*"The given module {0} cannot be found within the assembly {1}."*/, v13);
    sub_1C3B764(&StringLiteral_4009/*"Cannot add the same member twice to a SerializationInfo object."*/, v14);
    sub_1C3B764(&StringLiteral_13709/*"The global element '{0}' has already been declared."*/, v15);
    sub_1C3B764(&StringLiteral_3798/*"COSTUME_OPEN_WARNING"*/, v16);
    sub_1C3B764(&StringLiteral_13703/*"The given key was not present in the dictionary."*/, v17);
    sub_1C3B764(&StringLiteral_13706/*"The given name '{0}' matches at least two names in the collection object with different namespaces."*/, v18);
    sub_1C3B764(&StringLiteral_4008/*"Cannot add the event handler since no public add method exists for the event."*/, v19);
    this = (EventCraftWithdrawConfirmDialogComponent_o *)sub_1C3B764(&StringLiteral_13708/*"The global attribute '{0}' has already been declared."*/, v20);
    byte_4C25F43 = 1;
  }
  if ( !item )
    goto LABEL_28;
  TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
  v10->fields.tradeGoodsEntity = TradeGoodsEntity_k__BackingField;
  p_tradeGoodsEntity = &v10->fields.tradeGoodsEntity;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v10->fields.tradeGoodsEntity,
    (int64_t)TradeGoodsEntity_k__BackingField,
    (int64_t)decideCallback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v10->fields.onDecide = decideCallback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v10->fields.onDecide,
    (int64_t)decideCallback,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  titleLabel = v10->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_4009/*"Cannot add the same member twice to a SerializationInfo object."*/,
                                                         0LL);
  if ( !titleLabel )
    goto LABEL_28;
  UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
  detailLabel = v10->fields.detailLabel;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_4008/*"Cannot add the event handler since no public add method exists for the event."*/,
                                                         0LL);
  if ( !detailLabel )
    goto LABEL_28;
  UILabel__set_text(detailLabel, (System_String_o *)this, 0LL);
  withdrawnItemUiHeaderLbBefore = v10->fields.withdrawnItemUiHeaderLbBefore;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13704/*"The given module {0} cannot be found within the assembly {1}."*/,
                                                         0LL);
  if ( !withdrawnItemUiHeaderLbBefore )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemUiHeaderLbBefore, (System_String_o *)this, 0LL);
  withdrawnItemUiHeaderLbAfter = v10->fields.withdrawnItemUiHeaderLbAfter;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13703/*"The given key was not present in the dictionary."*/,
                                                         0LL);
  if ( !withdrawnItemUiHeaderLbAfter )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemUiHeaderLbAfter, (System_String_o *)this, 0LL);
  withdrawnItemUiTitleLabel = v10->fields.withdrawnItemUiTitleLabel;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13708/*"The global attribute '{0}' has already been declared."*/,
                                                         0LL);
  if ( !withdrawnItemUiTitleLabel )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemUiTitleLabel, (System_String_o *)this, 0LL);
  withdrawnItemNoneLabel = v10->fields.withdrawnItemNoneLabel;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13709/*"The global element '{0}' has already been declared."*/,
                                                         0LL);
  if ( !withdrawnItemNoneLabel )
    goto LABEL_28;
  UILabel__set_text(withdrawnItemNoneLabel, (System_String_o *)this, 0LL);
  cancelButtonLb = v10->fields.cancelButtonLb;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3798/*"COSTUME_OPEN_WARNING"*/,
                                                         0LL);
  if ( !cancelButtonLb )
    goto LABEL_28;
  UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0LL);
  decideButtonLb = v10->fields.decideButtonLb;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_13706/*"The given name '{0}' matches at least two names in the collection object with different namespaces."*/,
                                                         0LL);
  if ( !decideButtonLb )
    goto LABEL_28;
  UILabel__set_text(decideButtonLb, (System_String_o *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !*p_tradeGoodsEntity )
    goto LABEL_28;
  if ( !this )
    goto LABEL_28;
  SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                       (CommonConsumeMaster_o *)this,
                       (*p_tradeGoodsEntity)->fields.commonConsumeId,
                       0LL);
  v10->fields.consumeItemList = SortedEntityList;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v10->fields.consumeItemList,
    (int64_t)SortedEntityList,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_28;
  v45 = !TradeInfo_k__BackingField->fields.tradeNum && TradeInfo_k__BackingField->fields.getNum == 0;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)v10->fields.withdrawnItemNoneLabel;
  if ( !this )
    goto LABEL_28;
  this = (EventCraftWithdrawConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
  if ( !this )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v45, 0LL);
  this = (EventCraftWithdrawConfirmDialogComponent_o *)v10->fields.withdrawnItemUiParentObject;
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v45, 0LL),
        NowTradeNum = EventCraftListViewItem__get_NowTradeNum(item, 0LL),
        EventCraftWithdrawConfirmDialogComponent__SetWithdrawnItemUi(v10, NowTradeNum, v47),
        this = (EventCraftWithdrawConfirmDialogComponent_o *)EventCraftListViewItemDraw__GetDisplayMode(2, item, 0LL),
        !v10->fields.listViewItemDraw)
    || (v48 = (int)this,
        EventCraftListViewItemDraw__SetItem(v10->fields.listViewItemDraw, item, (int32_t)this, 0LL),
        (this = (EventCraftWithdrawConfirmDialogComponent_o *)v10->fields.listViewItemDraw) == 0LL) )
  {
LABEL_28:
    sub_1C3B9C0(this, item);
  }
  EventCraftListViewItemDraw__UpdateItem((EventCraftListViewItemDraw_o *)this, item, v48, 0LL);
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
  if ( (byte_4C25F44 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, *(_QWORD *)&nowTradeNum);
    sub_1C3B764(&Method_DataManager_GetMaster_UserItemMaster___, v4);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    sub_1C3B764(&LocalizationManager_TypeInfo, v6);
    sub_1C3B764(&NetworkManager_TypeInfo, v7);
    this = (EventCraftWithdrawConfirmDialogComponent_o *)sub_1C3B764(&StringLiteral_3812/*"CP01143"*/, v8);
    byte_4C25F44 = 1;
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
    sub_1C3B9C8(this, *(_QWORD *)&nowTradeNum);
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
  this = (EventCraftWithdrawConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserItemMaster___);
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
    if ( !byte_4C1C955 )
    {
      sub_1C3B764(&NetworkManager_TypeInfo, *(_QWORD *)&nowTradeNum);
      byte_4C1C955 = 1;
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
                                                                 (System_String_o *)StringLiteral_3812/*"CP01143"*/,
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
                                                                 (System_String_o *)StringLiteral_3812/*"CP01143"*/,
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
    sub_1C3B9C0(this, *(_QWORD *)&nowTradeNum);
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

  if ( (byte_4C25F48 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C25F48 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C3B9C0(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo___ctor(
        EventCraftWithdrawConfirmDialogComponent_WithdrawnItemUiInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}