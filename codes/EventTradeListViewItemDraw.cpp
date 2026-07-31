void EventTradeListViewItemDraw___ctor(EventTradeListViewItemDraw_o *this, const MethodInfo *method)
{
  this->fields.countLabelMaxWidth = 30;
  this->fields.NAME_COLOR_DEFAULT = (struct UnityEngine_Color32_o)0xFF6034FFFF496C16LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// attributes: thunk
void EventTradeListViewItemDraw__CheckIsSerializeFieldNotNull(
        EventTradeListViewItemDraw_o *this,
        const MethodInfo *method)
{
  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, method);
}


void EventTradeListViewItemDraw__DestroyAnimObj(EventTradeListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventTradeListViewItemDraw___c_c *v4; // x0
  System_Collections_Generic_IEnumerable_T__o *sweetsAnimSpriteArray; // x19
  struct EventTradeListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__46_0; // x20
  Il2CppObject *v8; // x21
  struct EventTradeListViewItemDraw___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5932C25 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_UISprite__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_UISprite___);
    sub_21FFC50(&Method_EventTradeListViewItemDraw___c__DestroyAnimObj_b__46_0__);
    sub_21FFC50(&EventTradeListViewItemDraw___c_TypeInfo);
    byte_5932C25 = 1;
  }
  v4 = EventTradeListViewItemDraw___c_TypeInfo;
  sweetsAnimSpriteArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.sweetsAnimSpriteArray;
  if ( !*(&EventTradeListViewItemDraw___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemDraw___c_TypeInfo, method, v2);
    v4 = EventTradeListViewItemDraw___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__46_0 = (System_Action_object__o *)static_fields->__9__46_0;
  if ( !_9__46_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = EventTradeListViewItemDraw___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__46_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(_9__46_0, v8, Method_EventTradeListViewItemDraw___c__DestroyAnimObj_b__46_0__, 0);
    v9 = EventTradeListViewItemDraw___c_TypeInfo->static_fields;
    v9->__9__46_0 = (struct System_Action_UISprite__o *)_9__46_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__46_0, (int32_t)_9__46_0, v10, v11, v12, v13, v14, v15);
  }
  BasicHelper__ForEach_object_(
    sweetsAnimSpriteArray,
    (System_Action_T__o *)_9__46_0,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_UISprite___);
}


// local variable allocation has failed, the output may be wrong!
int32_t EventTradeListViewItemDraw__GetDisplayMode(
        int32_t initMode,
        EventTradeListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( initMode == 3 )
  {
    if ( !item )
      sub_21FFECC(*(_QWORD *)&initMode, 0);
    EventTradeListViewItem__UpdateTradeUserInfo(item, (const MethodInfo *)item);
    if ( item->fields._TradeInfo_k__BackingField )
    {
      if ( EventTradeListViewItem__get_NowTradeNum(item, v4) < 1 )
      {
        return 5;
      }
      else if ( item->fields._TradeInfo_k__BackingField )
      {
        return 4;
      }
      else
      {
        return 3;
      }
    }
    else
    {
      return 3;
    }
  }
  else if ( initMode != 2 && initMode != 1 )
  {
    return 0;
  }
  return initMode;
}


void EventTradeListViewItemDraw__SetItem(
        EventTradeListViewItemDraw_o *this,
        EventTradeListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 nameTextLabel; // x0
  const MethodInfo *v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  EventTradeListViewItem_o **v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t EventId_k__BackingField; // w23
  UISprite_o *tradingBaseSprite; // x24
  __int64 v21; // x1
  __int64 v22; // x2
  UILabel_o *tradeStartLabel; // x23
  UILabel_o *rewardReceivedPossibleLabel; // x23
  UILabel_o *replenishmentLabel; // x23
  UILabel_o *withdrawalLabel; // x23
  System_Collections_Generic_IEnumerable_T__o *sweetsAnimSpriteArray; // x23
  System_Action_object__o *v28; // x24
  const MethodInfo *v29; // x2
  __int64 v30; // x8
  __int64 v31; // x2
  EventTradeListViewItem_o *v32; // x8
  _BOOL4 IsRelease_k__BackingField; // w9
  int32_t v34; // w23
  UISprite_o *baseSprite; // x22
  int v36; // w8
  EventTradeListViewItem_o *v37; // x8
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x9
  UISprite_o *itemIcon; // x22
  int32_t v40; // w23
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  struct EventTradeGoodsEntity_o *v43; // x8
  System_String_o *name; // x1
  __int64 v45; // x1
  __int64 v46; // x2
  UILabel_o *v47; // x22
  struct EventTradeGoodsEntity_o *v48; // x8
  const MethodInfo *v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  UILabel_o *restTimeLabel; // x22
  int v53; // w9
  __int64 v54; // x2
  System_String_o *v55; // x23
  void *monitor; // x24
  int64_t Time; // x0
  Il2CppObject *RestTime2; // x0
  const MethodInfo *v59; // x2
  unsigned int v60; // w20
  bool v61; // w1
  bool v62; // w1
  __int64 v63; // x1
  __int64 v64; // x2
  UILabel_o *textOnMask; // x20
  int32_t goodsIconId; // [xsp+Ch] [xbp-54h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5932C20 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_UISprite__TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_UISprite___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_EventTradeListViewItemDraw___c__DisplayClass41_0__SetItem_b__0__);
    sub_21FFC50(&EventTradeListViewItemDraw___c__DisplayClass41_0_TypeInfo);
    sub_21FFC50(&StringLiteral_18270/*"btn_trade_bg_01"*/);
    sub_21FFC50(&StringLiteral_21189/*"icon_{0}"*/);
    sub_21FFC50(&StringLiteral_21363/*"img_item_brank"*/);
    sub_21FFC50(&StringLiteral_21187/*"icon_trade_reward"*/);
    sub_21FFC50(&StringLiteral_13991/*"TRADE_EVENT_BOARD_WITHDRAWALLABEL_BUTTON"*/);
    sub_21FFC50(&StringLiteral_20147/*"event_trade_8048001"*/);
    sub_21FFC50(&StringLiteral_13927/*"TIME_REST2_NONE"*/);
    sub_21FFC50(&StringLiteral_13987/*"TRADE_EVENT_BOARD_RECEIVE_BUTTON"*/);
    sub_21FFC50(&StringLiteral_25425/*"tradegauge_bg"*/);
    sub_21FFC50(&StringLiteral_21150/*"icon_popularitem"*/);
    sub_21FFC50(&StringLiteral_13988/*"TRADE_EVENT_BOARD_REPLENISHMENT_BUTTON"*/);
    sub_21FFC50(&StringLiteral_14017/*"TRADE_EVENT_REST_TIME_LABEL"*/);
    sub_21FFC50(&StringLiteral_20148/*"event_trade_8048002"*/);
    sub_21FFC50(&StringLiteral_13999/*"TRADE_EVENT_END"*/);
    sub_21FFC50(&StringLiteral_25424/*"tradegauge_bar"*/);
    sub_21FFC50(&StringLiteral_18271/*"btn_trade_bg_02"*/);
    sub_21FFC50(&StringLiteral_20149/*"event_trade_8048003"*/);
    sub_21FFC50(&StringLiteral_21184/*"icon_trade_arrow"*/);
    sub_21FFC50(&StringLiteral_13989/*"TRADE_EVENT_BOARD_START_BUTTON"*/);
    sub_21FFC50(&StringLiteral_13990/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/);
    byte_5932C20 = 1;
  }
  entity = 0;
  v7 = sub_21FFEBC(EventTradeListViewItemDraw___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_94;
  *(_QWORD *)(v7 + 16) = item;
  v16 = (EventTradeListViewItem_o **)(v7 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)item, v10, v11, v12, v13, v14, v15);
  if ( mode && *v16 )
  {
    EventId_k__BackingField = (*v16)->fields._EventId_k__BackingField;
    tradingBaseSprite = this->fields.tradingBaseSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v17, v18);
    nameTextLabel = AtlasManager__SetEventUI_47538316(
                      EventId_k__BackingField,
                      tradingBaseSprite,
                      (System_String_o *)StringLiteral_20148/*"event_trade_8048002"*/,
                      0);
    if ( !*v16 )
      goto LABEL_94;
    nameTextLabel = AtlasManager__SetEventUI_47538316(
                      (*v16)->fields._EventId_k__BackingField,
                      this->fields.progressGaugeFront,
                      (System_String_o *)StringLiteral_25424/*"tradegauge_bar"*/,
                      0);
    if ( !*v16 )
      goto LABEL_94;
    nameTextLabel = AtlasManager__SetEventUI_47538316(
                      (*v16)->fields._EventId_k__BackingField,
                      this->fields.progressGaugeBack,
                      (System_String_o *)StringLiteral_25425/*"tradegauge_bg"*/,
                      0);
    if ( !*v16 )
      goto LABEL_94;
    AtlasManager__SetEventUI_47538316(
      (*v16)->fields._EventId_k__BackingField,
      this->fields.pickupSprite,
      (System_String_o *)StringLiteral_21150/*"icon_popularitem"*/,
      0);
    tradeStartLabel = this->fields.tradeStartLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
    nameTextLabel = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13989/*"TRADE_EVENT_BOARD_START_BUTTON"*/, 0);
    if ( !tradeStartLabel )
      goto LABEL_94;
    UILabel__set_text(tradeStartLabel, (System_String_o *)nameTextLabel, 0);
    if ( !*v16 )
      goto LABEL_94;
    AtlasManager__SetEventUI_47538316(
      (*v16)->fields._EventId_k__BackingField,
      this->fields.tradeStartButtonSprite,
      (System_String_o *)StringLiteral_18270/*"btn_trade_bg_01"*/,
      0);
    rewardReceivedPossibleLabel = this->fields.rewardReceivedPossibleLabel;
    nameTextLabel = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13987/*"TRADE_EVENT_BOARD_RECEIVE_BUTTON"*/, 0);
    if ( !rewardReceivedPossibleLabel )
      goto LABEL_94;
    UILabel__set_text(rewardReceivedPossibleLabel, (System_String_o *)nameTextLabel, 0);
    if ( !*v16 )
      goto LABEL_94;
    AtlasManager__SetEventUI_47538316(
      (*v16)->fields._EventId_k__BackingField,
      this->fields.rewardReceivedPossibleButtonSprite,
      (System_String_o *)StringLiteral_18271/*"btn_trade_bg_02"*/,
      0);
    replenishmentLabel = this->fields.replenishmentLabel;
    nameTextLabel = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13988/*"TRADE_EVENT_BOARD_REPLENISHMENT_BUTTON"*/, 0);
    if ( !replenishmentLabel )
      goto LABEL_94;
    UILabel__set_text(replenishmentLabel, (System_String_o *)nameTextLabel, 0);
    if ( !*v16 )
      goto LABEL_94;
    AtlasManager__SetEventUI_47538316(
      (*v16)->fields._EventId_k__BackingField,
      this->fields.replenishmentButtonSprite,
      (System_String_o *)StringLiteral_18270/*"btn_trade_bg_01"*/,
      0);
    withdrawalLabel = this->fields.withdrawalLabel;
    nameTextLabel = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13991/*"TRADE_EVENT_BOARD_WITHDRAWALLABEL_BUTTON"*/, 0);
    if ( !withdrawalLabel )
      goto LABEL_94;
    UILabel__set_text(withdrawalLabel, (System_String_o *)nameTextLabel, 0);
    if ( !*v16 )
      goto LABEL_94;
    nameTextLabel = AtlasManager__SetEventUI_47538316(
                      (*v16)->fields._EventId_k__BackingField,
                      this->fields.withdrawalButtonSprite,
                      (System_String_o *)StringLiteral_18270/*"btn_trade_bg_01"*/,
                      0);
    if ( !*v16 )
      goto LABEL_94;
    nameTextLabel = AtlasManager__SetEventUI_47538316(
                      (*v16)->fields._EventId_k__BackingField,
                      this->fields.tradeRewardIconSprite,
                      (System_String_o *)StringLiteral_21187/*"icon_trade_reward"*/,
                      0);
    if ( !*v16 )
      goto LABEL_94;
    AtlasManager__SetEventUI_47538316(
      (*v16)->fields._EventId_k__BackingField,
      this->fields.tradeArrowIconSprite,
      (System_String_o *)StringLiteral_21184/*"icon_trade_arrow"*/,
      0);
    sweetsAnimSpriteArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.sweetsAnimSpriteArray;
    v28 = (System_Action_object__o *)sub_21FFEBC(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(
      v28,
      (Il2CppObject *)v7,
      Method_EventTradeListViewItemDraw___c__DisplayClass41_0__SetItem_b__0__,
      0);
    BasicHelper__ForEach_object_(
      sweetsAnimSpriteArray,
      (System_Action_T__o *)v28,
      (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_UISprite___);
    v30 = *(_QWORD *)(v7 + 16);
    if ( !v30 )
      goto LABEL_94;
    EventTradeListViewItemDraw__SetReleaseDisplayObject(this, *(_BYTE *)(v30 + 156), v29);
    v32 = *v16;
    if ( !*v16 )
      goto LABEL_94;
    IsRelease_k__BackingField = v32->fields._IsRelease_k__BackingField;
    v34 = v32->fields._EventId_k__BackingField;
    baseSprite = this->fields.baseSprite;
    v36 = *(&AtlasManager_TypeInfo->_2.cctor_finished + 1);
    if ( IsRelease_k__BackingField )
    {
      if ( !v36 )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9, v31);
      nameTextLabel = AtlasManager__SetEventUI_47538316(v34, baseSprite, (System_String_o *)StringLiteral_20147/*"event_trade_8048001"*/, 0);
      v37 = *v16;
      if ( !*v16 )
        goto LABEL_94;
      TradeGoodsEntity_k__BackingField = v37->fields._TradeGoodsEntity_k__BackingField;
      if ( !TradeGoodsEntity_k__BackingField )
        goto LABEL_94;
      itemIcon = this->fields.itemIcon;
      v40 = v37->fields._EventId_k__BackingField;
      goodsIconId = TradeGoodsEntity_k__BackingField->fields.goodsIconId;
      v41 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &goodsIconId);
      v42 = System_String__Format((System_String_o *)StringLiteral_21189/*"icon_{0}"*/, v41, 0);
      nameTextLabel = AtlasManager__SetEventUI_47538316(v40, itemIcon, v42, 0);
      if ( !*v16 )
        goto LABEL_94;
      v43 = (*v16)->fields._TradeGoodsEntity_k__BackingField;
      if ( !v43 )
        goto LABEL_94;
      nameTextLabel = (__int64)this->fields.nameTextLabel;
      if ( !nameTextLabel )
        goto LABEL_94;
      name = v43->fields.name;
    }
    else
    {
      if ( !v36 )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9, v31);
      nameTextLabel = AtlasManager__SetEventUI_47538316(v34, baseSprite, (System_String_o *)StringLiteral_20149/*"event_trade_8048003"*/, 0);
      if ( !*v16 )
        goto LABEL_94;
      AtlasManager__SetEventUI_47538316(
        (*v16)->fields._EventId_k__BackingField,
        this->fields.itemIcon,
        (System_String_o *)StringLiteral_21363/*"img_item_brank"*/,
        0);
      v47 = (UILabel_o *)this->fields.nameTextLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45, v46);
      nameTextLabel = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13990/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, 0);
      if ( !v47 )
        goto LABEL_94;
      UILabel__set_text(v47, (System_String_o *)nameTextLabel, 0);
      if ( !*v16 )
        goto LABEL_94;
      v48 = (*v16)->fields._TradeGoodsEntity_k__BackingField;
      if ( !v48 )
        goto LABEL_94;
      nameTextLabel = (__int64)this->fields.textOnMask;
      if ( !nameTextLabel )
        goto LABEL_94;
      name = v48->fields.closedMessage;
    }
    UILabel__set_text((UILabel_o *)nameTextLabel, name, 0);
    if ( !*v16 )
      goto LABEL_94;
    if ( (*v16)->fields._EventId_k__BackingField >= 1 )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v49);
      nameTextLabel = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !*v16 || !nameTextLabel )
        goto LABEL_94;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)nameTextLabel,
             &entity,
             (*v16)->fields._EventId_k__BackingField,
             (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v50, v49);
        nameTextLabel = NetworkManager__getTime(0);
        if ( !entity )
          goto LABEL_94;
        restTimeLabel = this->fields.restTimeLabel;
        v53 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
        if ( nameTextLabel >= (__int64)entity[6].monitor )
        {
          if ( !v53 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v51);
          nameTextLabel = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13927/*"TIME_REST2_NONE"*/, 0);
        }
        else
        {
          if ( !v53 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v51);
          nameTextLabel = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14017/*"TRADE_EVENT_REST_TIME_LABEL"*/, 0);
          if ( !entity )
            goto LABEL_94;
          v55 = (System_String_o *)nameTextLabel;
          monitor = entity[6].monitor;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v54);
          Time = NetworkManager__getTime(0);
          RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2((int64_t)monitor, Time, 0);
          nameTextLabel = (__int64)System_String__Format(v55, RestTime2, 0);
        }
        v9 = (const MethodInfo *)nameTextLabel;
        if ( !restTimeLabel )
          goto LABEL_94;
        UILabel__set_text(restTimeLabel, (System_String_o *)nameTextLabel, 0);
      }
    }
    EventTradeListViewItemDraw__SetPriceIconText(this, *v16, v49);
    EventTradeListViewItemDraw__SetRewardIconText(this, *v16, v59);
    v60 = mode & 0xFFFFFFFE;
    if ( v60 == 4 )
    {
      nameTextLabel = (__int64)this->fields.tradingBaseSprite;
      if ( !nameTextLabel )
        goto LABEL_94;
      nameTextLabel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameTextLabel, 0);
      if ( !nameTextLabel )
        goto LABEL_94;
      v61 = 1;
    }
    else
    {
      if ( v60 != 2 )
        goto LABEL_75;
      nameTextLabel = (__int64)this->fields.tradingBaseSprite;
      if ( !nameTextLabel )
        goto LABEL_94;
      nameTextLabel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameTextLabel, 0);
      if ( !nameTextLabel )
        goto LABEL_94;
      v61 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameTextLabel, v61, 0);
LABEL_75:
    nameTextLabel = (__int64)*v16;
    if ( *v16 )
    {
      if ( !EventTradeListViewItem__get_IsEventEnd((EventTradeListViewItem_o *)nameTextLabel, v9) )
        return;
      if ( v60 == 4 )
      {
        nameTextLabel = (__int64)this->fields.textOnMask;
        if ( nameTextLabel )
        {
          UILabel__set_text((UILabel_o *)nameTextLabel, **(System_String_o ***)(qword_594C0B8 + 184), 0);
          nameTextLabel = (__int64)this->fields.maskSprite;
          if ( nameTextLabel )
          {
            nameTextLabel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameTextLabel, 0);
            if ( nameTextLabel )
            {
              v62 = 0;
LABEL_92:
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameTextLabel, v62, 0);
              return;
            }
          }
        }
      }
      else
      {
        EventTradeListViewItemDraw__DestroyAnimObj(this, v9);
        nameTextLabel = (__int64)this->fields.progressBar;
        if ( nameTextLabel )
        {
          nameTextLabel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameTextLabel, 0);
          if ( nameTextLabel )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameTextLabel, 0, 0);
            textOnMask = this->fields.textOnMask;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v63, v64);
            nameTextLabel = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13999/*"TRADE_EVENT_END"*/, 0);
            if ( textOnMask )
            {
              UILabel__set_text(textOnMask, (System_String_o *)nameTextLabel, 0);
              nameTextLabel = (__int64)this->fields.textOnMask;
              if ( nameTextLabel )
              {
                nameTextLabel = (__int64)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)nameTextLabel,
                                           0);
                if ( nameTextLabel )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameTextLabel, 1, 0);
                  nameTextLabel = (__int64)this->fields.maskSprite;
                  if ( nameTextLabel )
                  {
                    nameTextLabel = (__int64)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)nameTextLabel,
                                               0);
                    if ( nameTextLabel )
                    {
                      v62 = 1;
                      goto LABEL_92;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_94:
    sub_21FFECC(nameTextLabel, v9);
  }
}


void EventTradeListViewItemDraw__SetPriceIconText(
        EventTradeListViewItemDraw_o *this,
        EventTradeListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Component_o *priceInfoSingle; // x0
  struct EventTradePriceInfo_o **p_priceInfoSingle; // x21
  struct EventTradePriceInfo_o **p_priceInfoDouble; // x22
  struct EventTradePriceInfo_o **p_priceInfoTriple; // x20
  struct EventTradePriceInfo_o *priceInfoTriple; // t1
  __int64 v10; // x2
  struct CommonConsumeEntity_array *CommonConsumeEntityArray_k__BackingField; // x9
  int max_length; // w9
  UnityEngine_Object_o *v13; // x20

  if ( (byte_5932C21 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932C21 = 1;
  }
  p_priceInfoSingle = &this->fields.priceInfoSingle;
  priceInfoSingle = (UnityEngine_Component_o *)this->fields.priceInfoSingle;
  if ( !priceInfoSingle )
    goto LABEL_24;
  priceInfoSingle = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(priceInfoSingle, 0);
  if ( !priceInfoSingle )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfoSingle, 0, 0);
  p_priceInfoDouble = &this->fields.priceInfoDouble;
  priceInfoSingle = (UnityEngine_Component_o *)this->fields.priceInfoDouble;
  if ( !priceInfoSingle )
    goto LABEL_24;
  priceInfoSingle = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(priceInfoSingle, 0);
  if ( !priceInfoSingle )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfoSingle, 0, 0);
  priceInfoTriple = this->fields.priceInfoTriple;
  p_priceInfoTriple = &this->fields.priceInfoTriple;
  priceInfoSingle = (UnityEngine_Component_o *)priceInfoTriple;
  if ( !priceInfoTriple )
    goto LABEL_24;
  priceInfoSingle = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(priceInfoSingle, 0);
  if ( !priceInfoSingle )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfoSingle, 0, 0);
  if ( !item )
    goto LABEL_24;
  CommonConsumeEntityArray_k__BackingField = item->fields._CommonConsumeEntityArray_k__BackingField;
  if ( !CommonConsumeEntityArray_k__BackingField )
    goto LABEL_14;
  max_length = CommonConsumeEntityArray_k__BackingField->max_length;
  switch ( max_length )
  {
    case 1:
      p_priceInfoDouble = p_priceInfoSingle;
      break;
    case 3:
      p_priceInfoDouble = p_priceInfoTriple;
      break;
    case 2:
      break;
    default:
LABEL_14:
      v13 = 0;
      goto LABEL_18;
  }
  v13 = (UnityEngine_Object_o *)*p_priceInfoDouble;
LABEL_18:
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v10);
  priceInfoSingle = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(v13, 0, 0);
  if ( ((unsigned __int8)priceInfoSingle & 1) == 0 )
  {
    if ( v13 )
    {
      priceInfoSingle = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v13,
                                                     0);
      if ( priceInfoSingle )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfoSingle, 1, 0);
        EventTradePriceInfo__SetPriceInfo(
          (EventTradePriceInfo_o *)v13,
          item->fields._CommonConsumeEntityArray_k__BackingField,
          1,
          0);
        return;
      }
    }
LABEL_24:
    sub_21FFECC(priceInfoSingle, item);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventTradeListViewItemDraw__SetReleaseDisplayObject(
        EventTradeListViewItemDraw_o *this,
        bool isRelease,
        const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0

  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_28;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, !isRelease, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.textOnMask;
  if ( !maskSprite )
    goto LABEL_28;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, !isRelease, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.tradingStateSprite;
  if ( !maskSprite )
    goto LABEL_28;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.nameTextLabel;
  if ( !maskSprite )
    goto LABEL_28;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.tradeCompleteLabel;
  if ( !maskSprite )
    goto LABEL_28;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.pickupSprite;
  if ( !maskSprite )
    goto LABEL_28;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.rewardItemIcon;
  if ( !maskSprite )
    goto LABEL_28;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.tradingBaseSprite;
  if ( !maskSprite )
    goto LABEL_28;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_28;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_28;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.tradeStartButtonSprite;
  if ( !maskSprite )
    goto LABEL_28;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0);
  if ( !maskSprite
    || (maskSprite = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)maskSprite,
                                                  0)) == 0
    || (maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0),
        (maskSprite = (UnityEngine_Component_o *)this->fields.restTimeLabel) == 0)
    || (maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0)) == 0
    || (maskSprite = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)maskSprite,
                                                  0)) == 0
    || (maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0)) == 0 )
  {
LABEL_28:
    sub_21FFECC(maskSprite, isRelease);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0);
}


void EventTradeListViewItemDraw__SetRewardIconText(
        EventTradeListViewItemDraw_o *this,
        EventTradeListViewItem_o *item,
        const MethodInfo *method)
{
  int v5; // w8
  GiftMaster_o *Master_object; // x0
  __int64 v7; // x1
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x8
  GiftEntity_array *GiftListById; // x20
  __int64 v10; // x2
  Il2CppObject *v11; // x21
  GiftEntity_o *v12; // x8
  UILabel_o *rewardNumTextLabel; // x21
  GiftEntity_o *v14; // x8
  __int64 v15; // x1
  __int64 v16; // x2
  UILabel_o *rewardNumTitleLabel; // x19
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5932C22 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_GiftMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_422/*"#,0"*/);
    sub_21FFC50(&StringLiteral_14001/*"TRADE_EVENT_HAVE_NUM"*/);
    sub_21FFC50(&StringLiteral_1198/*"0"*/);
    byte_5932C22 = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, method);
  Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !item )
    goto LABEL_32;
  TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
  if ( !TradeGoodsEntity_k__BackingField || !Master_object )
    goto LABEL_32;
  GiftListById = GiftMaster__GetGiftListById(Master_object, TradeGoodsEntity_k__BackingField->fields.giftId, 0);
  v11 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v10);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Master_object = (GiftMaster_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v10);
    Master_object = (GiftMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !GiftListById )
    goto LABEL_32;
  if ( !LODWORD(GiftListById->max_length) )
    goto LABEL_33;
  v12 = GiftListById->m_Items[0];
  if ( !v12 || !v11 )
    goto LABEL_32;
  Master_object = (GiftMaster_o *)UserItemMaster__TryGetEntity(
                                    (UserItemMaster_o *)v11,
                                    &entity,
                                    *(_QWORD *)&Master_object[2].fields._MasterName_k__BackingField[2].fields,
                                    v12->fields.objectId,
                                    0);
  rewardNumTextLabel = this->fields.rewardNumTextLabel;
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_32;
    Master_object = (GiftMaster_o *)System_Int32__ToString_76925352(
                                      (int)entity + 28,
                                      (System_String_o *)StringLiteral_422/*"#,0"*/,
                                      0);
    if ( !rewardNumTextLabel )
      goto LABEL_32;
    UILabel__set_text(rewardNumTextLabel, (System_String_o *)Master_object, 0);
    Master_object = (GiftMaster_o *)this->fields.rewardNumTextLabel;
    if ( !Master_object )
      goto LABEL_32;
    UILabel__SetCondensedScale((UILabel_o *)Master_object, this->fields.countLabelMaxWidth, 0, 0);
  }
  else
  {
    if ( !rewardNumTextLabel )
      goto LABEL_32;
    UILabel__set_text(this->fields.rewardNumTextLabel, (System_String_o *)StringLiteral_1198/*"0"*/, 0);
  }
  if ( !LODWORD(GiftListById->max_length) )
LABEL_33:
    sub_21FFED4(Master_object);
  v14 = GiftListById->m_Items[0];
  if ( !v14 )
    goto LABEL_32;
  Master_object = (GiftMaster_o *)this->fields.rewardItemIcon;
  if ( !Master_object )
    goto LABEL_32;
  ItemIconComponent__SetItem((ItemIconComponent_o *)Master_object, v14->fields.objectId, -1, 1, 0);
  rewardNumTitleLabel = this->fields.rewardNumTitleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
  Master_object = (GiftMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14001/*"TRADE_EVENT_HAVE_NUM"*/, 0);
  if ( !rewardNumTitleLabel )
LABEL_32:
    sub_21FFECC(Master_object, v7);
  UILabel__set_text(rewardNumTitleLabel, (System_String_o *)Master_object, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventTradeListViewItemDraw__UpdateItem(
        EventTradeListViewItemDraw_o *this,
        EventTradeListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 pickupSprite; // x0
  UnityEngine_GameObject_o *v8; // x22
  __int64 v9; // x2
  int32_t v10; // w23
  unsigned int v11; // w8
  const MethodInfo *v12; // x1
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  int v14; // w21
  int maxTradeNum; // s8
  const MethodInfo *v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  UILabel_o *progressLabel; // x21
  System_String_o *v20; // x22
  const MethodInfo *v21; // x1
  struct EventTradeInfo_o *v22; // x8
  Il2CppObject *v23; // x23
  Il2CppObject *v24; // x0
  struct EventTradeInfo_o *v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  UILabel_o *rewardAvailableNumTextLabel; // x21
  System_String_o *v29; // x22
  const MethodInfo *v30; // x1
  Il2CppObject *v31; // x0
  __int64 v32; // x2
  unsigned int rgba; // w8
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x2
  struct EventTradeGoodsEntity_o *v37; // x8
  EventTradePickupMaster_o *v38; // x21
  int32_t id; // w22
  int32_t eventId; // w23
  __int64 v41; // x2
  int32_t *p_tradeTimeRate; // x8
  struct EventTradeGoodsEntity_o *v43; // x9
  EventTradePickupMaster_c *v44; // x0
  int32_t v45; // w21
  int32_t tradeTime; // w22
  int DEFAULT_EVENT_TRADE_TIME_RATE; // w23
  double v48; // d8
  __int64 v49; // x1
  __int64 v50; // x2
  int64_t v51; // x22
  UILabel_o *timeRequiredTrade; // x21
  const MethodInfo *v53; // x1
  const MethodInfo *v54; // x1
  _BOOL4 v55; // w8
  bool v56; // w1
  const MethodInfo *v57; // x1
  _BOOL4 v58; // w8
  struct EventTradeInfo_o *v59; // x8
  int64_t startedAt; // x21
  EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x22
  int32_t tradeNum; // w23
  __int64 v63; // x1
  __int64 v64; // x2
  int64_t TradeFinishTime; // x22
  int64_t v66; // x21
  const MethodInfo *v67; // x1
  __int64 v68; // x2
  UILabel_o *tradeCompleteLabel; // x22
  __int64 v70; // x1
  __int64 v71; // x2
  UILabel_o *v72; // x22
  __int64 v73; // x1
  __int64 v74; // x2
  int32_t EventId_k__BackingField; // w20
  UISprite_o *tradingStateSprite; // x22
  __int64 *v77; // x8
  UILabel_o *timeLeftLabel; // x22
  __int64 v79; // x1
  __int64 v80; // x2
  float v81; // s1 OVERLAPPED
  float v82; // s2
  float v83; // s3
  float v84; // s0
  int32_t v85; // [xsp+8h] [xbp-58h] BYREF
  int32_t NowTradeNum; // [xsp+Ch] [xbp-54h] BYREF
  EventTradePickupEntity_o *pickupEntity; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Color_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5932C23 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventTradePickupMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&EventTradePickupMaster_TypeInfo);
    sub_21FFC50(&EventTradeTimeCalculation_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_21186/*"icon_trade_intrade"*/);
    sub_21FFC50(&StringLiteral_26521/*"{0}:{1:D2}:{2:D2}"*/);
    sub_21FFC50(&StringLiteral_21185/*"icon_trade_compleate"*/);
    sub_21FFC50(&StringLiteral_14018/*"TRADE_EVENT_REWARD_AVAILABLE_NUM_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_14012/*"TRADE_EVENT_PROGRESS_NUM"*/);
    sub_21FFC50(&StringLiteral_14026/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/);
    sub_21FFC50(&StringLiteral_14025/*"TRADE_EVENT_TRADE_COMPLETE"*/);
    byte_5932C23 = 1;
  }
  pickupEntity = 0;
  if ( item && mode && item->fields._TradeGoodsEntity_k__BackingField && item->fields._IsRelease_k__BackingField )
  {
    pickupSprite = (__int64)this->fields.pickupSprite;
    if ( pickupSprite )
    {
      pickupSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pickupSprite, 0);
      if ( item->fields._TradeGoodsEntity_k__BackingField )
      {
        v8 = (UnityEngine_GameObject_o *)pickupSprite;
        pickupSprite = EventTradeGoodsEntity__GetPickUpRateNow(item->fields._TradeGoodsEntity_k__BackingField, 0);
        v10 = pickupSprite;
        if ( !*(&EventTradePickupMaster_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo, item, v9);
        if ( v8 )
        {
          UnityEngine_GameObject__SetActive(
            v8,
            v10 < EventTradePickupMaster_TypeInfo->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE,
            0);
          if ( (mode & 0xFFFFFFFE) == 4 )
          {
            if ( !item->fields._TradeInfo_k__BackingField )
            {
              EventTradeListViewItemDraw__DestroyAnimObj(this, (const MethodInfo *)item);
              return;
            }
            pickupSprite = (__int64)this->fields.tradingBaseSprite;
            if ( pickupSprite )
            {
              pickupSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pickupSprite, 0);
              if ( pickupSprite )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 1, 0);
                pickupSprite = (__int64)this->fields.nameTextLabel;
                if ( pickupSprite )
                {
                  v11 = *(_DWORD *)&this->fields.NAME_COLOR_DEFAULT.fields.r;
                  v88.fields.a = (float)HIBYTE(v11) / 255.0;
                  v88.fields.b = (float)BYTE2(v11) / 255.0;
                  v88.fields.g = (float)BYTE1(v11) / 255.0;
                  v88.fields.r = (float)(unsigned __int8)v11 / 255.0;
                  UILabel__set_effectColor((UILabel_o *)pickupSprite, v88, 0);
                  pickupSprite = EventTradeListViewItem__get_NowTradeNum(item, v12);
                  TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
                  if ( TradeInfo_k__BackingField )
                  {
                    v14 = pickupSprite;
                    pickupSprite = (__int64)this->fields.progressBar;
                    if ( pickupSprite )
                    {
                      maxTradeNum = TradeInfo_k__BackingField->fields.maxTradeNum;
                      pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)pickupSprite,
                                                0);
                      if ( pickupSprite )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 1, 0);
                        pickupSprite = (__int64)this->fields.progressBar;
                        if ( pickupSprite )
                        {
                          UIProgressBar__set_value((UIProgressBar_o *)pickupSprite, (float)v14 / (float)maxTradeNum, 0);
                          EventTradeListViewItemDraw__UpdateSweetsAnim(this, item, v16);
                          progressLabel = this->fields.progressLabel;
                          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v18);
                          v20 = LocalizationManager__Get((System_String_o *)StringLiteral_14012/*"TRADE_EVENT_PROGRESS_NUM"*/, 0);
                          NowTradeNum = EventTradeListViewItem__get_NowTradeNum(item, v21);
                          pickupSprite = j_il2cpp_value_box_0(qword_594C070, &NowTradeNum);
                          v22 = item->fields._TradeInfo_k__BackingField;
                          if ( v22 )
                          {
                            v23 = (Il2CppObject *)pickupSprite;
                            v85 = v22->fields.maxTradeNum;
                            v24 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v85);
                            pickupSprite = (__int64)System_String__Format_75484576(v20, v23, v24, 0);
                            if ( progressLabel )
                            {
                              UILabel__set_text(progressLabel, (System_String_o *)pickupSprite, 0);
                              pickupSprite = (__int64)this->fields.tradeStartButtonSprite;
                              if ( pickupSprite )
                              {
                                pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)pickupSprite,
                                                          0);
                                if ( pickupSprite )
                                {
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 0, 0);
                                  v25 = item->fields._TradeInfo_k__BackingField;
                                  if ( v25
                                    && (v25->fields.getNum >= 1
                                     || EventTradeListViewItem__get_NowCompleteNum(item, (const MethodInfo *)item) >= 1) )
                                  {
                                    ActionExtensions__Call(item->fields._UpdateReceiveAllButtonState_k__BackingField, 0);
                                    pickupSprite = (__int64)this->fields.rewardReceivedPossibleButtonSprite;
                                    if ( !pickupSprite )
                                      goto LABEL_127;
                                    pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)pickupSprite,
                                                              0);
                                    if ( !pickupSprite )
                                      goto LABEL_127;
                                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 1, 0);
                                    pickupSprite = (__int64)this->fields.replenishmentButtonSprite;
                                    if ( !pickupSprite )
                                      goto LABEL_127;
                                    pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)pickupSprite,
                                                              0);
                                    if ( !pickupSprite )
                                      goto LABEL_127;
                                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 0, 0);
                                    pickupSprite = (__int64)this->fields.withdrawalButtonSprite;
                                    if ( !pickupSprite )
                                      goto LABEL_127;
                                    pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)pickupSprite,
                                                              0);
                                    if ( !pickupSprite )
                                      goto LABEL_127;
                                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 0, 0);
                                    rewardAvailableNumTextLabel = this->fields.rewardAvailableNumTextLabel;
                                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26, v27);
                                    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_14018/*"TRADE_EVENT_REWARD_AVAILABLE_NUM_MESSAGE"*/, 0);
                                    NowTradeNum = EventTradeListViewItem__get_NowCompleteNum(item, v30);
                                    v31 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &NowTradeNum);
                                    pickupSprite = (__int64)System_String__Format(v29, v31, 0);
                                    if ( !rewardAvailableNumTextLabel )
                                      goto LABEL_127;
                                    UILabel__set_text(rewardAvailableNumTextLabel, (System_String_o *)pickupSprite, 0);
                                  }
                                  else
                                  {
                                    pickupSprite = (__int64)this->fields.rewardReceivedPossibleButtonSprite;
                                    if ( !pickupSprite )
                                      goto LABEL_127;
                                    pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)pickupSprite,
                                                              0);
                                    if ( !pickupSprite )
                                      goto LABEL_127;
                                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 0, 0);
                                    pickupSprite = (__int64)this->fields.replenishmentButtonSprite;
                                    if ( !pickupSprite )
                                      goto LABEL_127;
                                    pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)pickupSprite,
                                                              0);
                                    if ( !pickupSprite )
                                      goto LABEL_127;
                                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 1, 0);
                                    pickupSprite = (__int64)this->fields.withdrawalButtonSprite;
                                    if ( !pickupSprite )
                                      goto LABEL_127;
                                    pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)pickupSprite,
                                                              0);
                                    if ( !pickupSprite )
                                      goto LABEL_127;
                                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 1, 0);
                                    pickupSprite = (__int64)this->fields.rewardAvailableNumTextLabel;
                                    if ( !pickupSprite )
                                      goto LABEL_127;
                                    UILabel__set_text(
                                      (UILabel_o *)pickupSprite,
                                      **(System_String_o ***)(qword_594C0B8 + 184),
                                      0);
                                    if ( EventTradeListViewItem__get_IsRefillable(item, v57) )
                                      v58 = !EventTradeListViewItem__get_IsEventEnd(item, (const MethodInfo *)item);
                                    else
                                      LOBYTE(v58) = 0;
                                    pickupSprite = (__int64)this->fields.replenishmentButton;
                                    if ( !pickupSprite )
                                      goto LABEL_127;
                                    pickupSprite = (*(__int64 (__fastcall **)(__int64, _BOOL4, _QWORD))(*(_QWORD *)pickupSprite + 392LL))(
                                                     pickupSprite,
                                                     v58,
                                                     *(_QWORD *)(*(_QWORD *)pickupSprite + 400LL));
                                  }
                                  v59 = item->fields._TradeInfo_k__BackingField;
                                  if ( !v59 )
                                    goto LABEL_127;
                                  startedAt = v59->fields.startedAt;
                                  TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
                                  tradeNum = v59->fields.tradeNum;
                                  if ( !*(&EventTradeTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
                                    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, item, v32);
                                  TradeFinishTime = EventTradeTimeCalculation__GetTradeFinishTime(
                                                      TradeGoodsEntity_k__BackingField,
                                                      tradeNum,
                                                      startedAt,
                                                      0);
                                  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v63, v64);
                                  v66 = TradeFinishTime + startedAt - NetworkManager__getTime(0);
                                  pickupSprite = EventTradeListViewItem__get_NowTradeNum(item, v67);
                                  tradeCompleteLabel = (UILabel_o *)this->fields.tradeCompleteLabel;
                                  if ( (int)pickupSprite <= 0 )
                                  {
                                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v68);
                                    pickupSprite = (__int64)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_14025/*"TRADE_EVENT_TRADE_COMPLETE"*/,
                                                              0);
                                    if ( !tradeCompleteLabel )
                                      goto LABEL_127;
                                    UILabel__set_text(tradeCompleteLabel, (System_String_o *)pickupSprite, 0);
                                    timeLeftLabel = this->fields.timeLeftLabel;
                                    pickupSprite = (__int64)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_14026/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/,
                                                              0);
                                    if ( !timeLeftLabel )
                                      goto LABEL_127;
                                    UILabel__set_text(timeLeftLabel, (System_String_o *)pickupSprite, 0);
                                    EventId_k__BackingField = item->fields._EventId_k__BackingField;
                                    tradingStateSprite = this->fields.tradingStateSprite;
                                    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v79, v80);
                                    v77 = &StringLiteral_21185/*"icon_trade_compleate"*/;
                                  }
                                  else
                                  {
                                    if ( !tradeCompleteLabel )
                                      goto LABEL_127;
                                    UILabel__set_text(
                                      (UILabel_o *)this->fields.tradeCompleteLabel,
                                      **(System_String_o ***)(qword_594C0B8 + 184),
                                      0);
                                    v72 = this->fields.timeLeftLabel;
                                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v70, v71);
                                    pickupSprite = (__int64)LocalizationManager__GetRestTimeInFormat(
                                                              v66,
                                                              0,
                                                              (System_String_o *)StringLiteral_26521/*"{0}:{1:D2}:{2:D2}"*/,
                                                              0);
                                    if ( !v72 )
                                      goto LABEL_127;
                                    UILabel__set_text(v72, (System_String_o *)pickupSprite, 0);
                                    EventId_k__BackingField = item->fields._EventId_k__BackingField;
                                    tradingStateSprite = this->fields.tradingStateSprite;
                                    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v73, v74);
                                    v77 = &StringLiteral_21186/*"icon_trade_intrade"*/;
                                  }
                                  AtlasManager__SetEventUI_47538316(
                                    EventId_k__BackingField,
                                    tradingStateSprite,
                                    (System_String_o *)*v77,
                                    0);
                                  pickupSprite = (__int64)this->fields.timeLeftLabel;
                                  if ( pickupSprite )
                                  {
                                    v81 = 0.92157;
                                    v82 = 0.015686;
                                    v83 = 1.0;
                                    if ( v66 < 3600 )
                                    {
                                      v81 = 0.0;
                                      v82 = 0.0;
                                    }
                                    v84 = 1.0;
                                    UIWidget__set_color(
                                      (UIWidget_o *)pickupSprite,
                                      *(UnityEngine_Color_o *)(&v81 - 1),
                                      0);
                                    pickupSprite = (__int64)this->fields.tradingStateSprite;
                                    if ( pickupSprite )
                                    {
                                      pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)pickupSprite,
                                                                0);
                                      if ( pickupSprite )
                                      {
                                        v56 = 1;
                                        goto LABEL_125;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            pickupSprite = (__int64)this->fields.timeLeftLabel;
            if ( pickupSprite )
            {
              UILabel__set_text((UILabel_o *)pickupSprite, **(System_String_o ***)(qword_594C0B8 + 184), 0);
              pickupSprite = (__int64)this->fields.tradeCompleteLabel;
              if ( pickupSprite )
              {
                UILabel__set_text((UILabel_o *)pickupSprite, **(System_String_o ***)(qword_594C0B8 + 184), 0);
                pickupSprite = (__int64)this->fields.rewardAvailableNumTextLabel;
                if ( pickupSprite )
                {
                  UILabel__set_text((UILabel_o *)pickupSprite, **(System_String_o ***)(qword_594C0B8 + 184), 0);
                  pickupSprite = (__int64)this->fields.tradingBaseSprite;
                  if ( pickupSprite )
                  {
                    pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)pickupSprite,
                                              0);
                    if ( pickupSprite )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 0, 0);
                      pickupSprite = (__int64)this->fields.nameTextLabel;
                      if ( pickupSprite )
                      {
                        rgba = this->fields.NAME_COLOR_DEFAULT.fields.rgba;
                        v89.fields.a = (float)HIBYTE(rgba) / 255.0;
                        v89.fields.b = (float)BYTE2(rgba) / 255.0;
                        v89.fields.g = (float)BYTE1(rgba) / 255.0;
                        v89.fields.r = (float)(unsigned __int8)rgba / 255.0;
                        UILabel__set_effectColor((UILabel_o *)pickupSprite, v89, 0);
                        pickupSprite = (__int64)this->fields.tradeStartButtonSprite;
                        if ( pickupSprite )
                        {
                          pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)pickupSprite,
                                                    0);
                          if ( pickupSprite )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 1, 0);
                            pickupSprite = (__int64)this->fields.rewardReceivedPossibleButtonSprite;
                            if ( pickupSprite )
                            {
                              pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)pickupSprite,
                                                        0);
                              if ( pickupSprite )
                              {
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 0, 0);
                                pickupSprite = (__int64)this->fields.replenishmentButtonSprite;
                                if ( pickupSprite )
                                {
                                  pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)pickupSprite,
                                                            0);
                                  if ( pickupSprite )
                                  {
                                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 0, 0);
                                    pickupSprite = (__int64)this->fields.withdrawalButtonSprite;
                                    if ( pickupSprite )
                                    {
                                      pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)pickupSprite,
                                                                0);
                                      if ( pickupSprite )
                                      {
                                        UnityEngine_GameObject__SetActive(
                                          (UnityEngine_GameObject_o *)pickupSprite,
                                          0,
                                          0);
                                        pickupSprite = (__int64)this->fields.progressBar;
                                        if ( pickupSprite )
                                        {
                                          pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)pickupSprite,
                                                                    0);
                                          if ( pickupSprite )
                                          {
                                            UnityEngine_GameObject__SetActive(
                                              (UnityEngine_GameObject_o *)pickupSprite,
                                              0,
                                              0);
                                            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                                              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v34, v35);
                                            pickupSprite = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventTradePickupMaster___);
                                            v37 = item->fields._TradeGoodsEntity_k__BackingField;
                                            if ( v37 )
                                            {
                                              v38 = (EventTradePickupMaster_o *)pickupSprite;
                                              id = v37->fields.id;
                                              eventId = v37->fields.eventId;
                                              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, item, v36);
                                              pickupSprite = NetworkManager__getTime(0);
                                              if ( v38 )
                                              {
                                                pickupSprite = EventTradePickupMaster__TryGetEntityTargetTime(
                                                                 v38,
                                                                 &pickupEntity,
                                                                 id,
                                                                 eventId,
                                                                 pickupSprite,
                                                                 0);
                                                if ( (pickupSprite & 1) != 0 )
                                                {
                                                  if ( !pickupEntity )
                                                    goto LABEL_127;
                                                  p_tradeTimeRate = &pickupEntity->fields.tradeTimeRate;
                                                }
                                                else
                                                {
                                                  pickupSprite = (__int64)EventTradePickupMaster_TypeInfo;
                                                  if ( !*(&EventTradePickupMaster_TypeInfo->_2.cctor_finished + 1) )
                                                  {
                                                    j_il2cpp_runtime_class_init_0(
                                                      EventTradePickupMaster_TypeInfo,
                                                      item,
                                                      v41);
                                                    pickupSprite = (__int64)EventTradePickupMaster_TypeInfo;
                                                  }
                                                  p_tradeTimeRate = *(int32_t **)(pickupSprite + 184);
                                                }
                                                v43 = item->fields._TradeGoodsEntity_k__BackingField;
                                                if ( v43 )
                                                {
                                                  v44 = EventTradePickupMaster_TypeInfo;
                                                  v45 = *p_tradeTimeRate;
                                                  tradeTime = v43->fields.tradeTime;
                                                  if ( !*(&EventTradePickupMaster_TypeInfo->_2.cctor_finished + 1) )
                                                  {
                                                    j_il2cpp_runtime_class_init_0(
                                                      EventTradePickupMaster_TypeInfo,
                                                      item,
                                                      v41);
                                                    v44 = EventTradePickupMaster_TypeInfo;
                                                  }
                                                  DEFAULT_EVENT_TRADE_TIME_RATE = v44->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
                                                  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
                                                    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, item, v41);
                                                  v48 = ceil(
                                                          (double)(tradeTime * v45)
                                                        / (double)DEFAULT_EVENT_TRADE_TIME_RATE);
                                                  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
                                                    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, item, v41);
                                                  v51 = System_Convert__ToInt64_76475764(v48, 0);
                                                  timeRequiredTrade = this->fields.timeRequiredTrade;
                                                  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                                    j_il2cpp_runtime_class_init_0(
                                                      LocalizationManager_TypeInfo,
                                                      v49,
                                                      v50);
                                                  pickupSprite = (__int64)LocalizationManager__GetRestTimeInFormat(
                                                                            v51,
                                                                            0,
                                                                            (System_String_o *)StringLiteral_26521/*"{0}:{1:D2}:{2:D2}"*/,
                                                                            0);
                                                  if ( timeRequiredTrade )
                                                  {
                                                    UILabel__set_text(
                                                      timeRequiredTrade,
                                                      (System_String_o *)pickupSprite,
                                                      0);
                                                    EventTradeListViewItemDraw__DestroyAnimObj(this, v53);
                                                    if ( EventTradeListViewItem__get_IsBuyAble(item, v54) )
                                                    {
                                                      LOBYTE(v55) = item->fields._IsRelease_k__BackingField;
                                                      if ( v55 )
                                                        v55 = !EventTradeListViewItem__get_IsEventEnd(
                                                                 item,
                                                                 (const MethodInfo *)item);
                                                    }
                                                    else
                                                    {
                                                      LOBYTE(v55) = 0;
                                                    }
                                                    pickupSprite = (__int64)this->fields.tradeStartButton;
                                                    if ( pickupSprite )
                                                    {
                                                      (*(void (__fastcall **)(__int64, _BOOL4, _QWORD))(*(_QWORD *)pickupSprite + 392LL))(
                                                        pickupSprite,
                                                        v55,
                                                        *(_QWORD *)(*(_QWORD *)pickupSprite + 400LL));
                                                      pickupSprite = (__int64)this->fields.tradingStateSprite;
                                                      if ( pickupSprite )
                                                      {
                                                        pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                                                  (UnityEngine_Component_o *)pickupSprite,
                                                                                  0);
                                                        if ( pickupSprite )
                                                        {
                                                          v56 = 0;
LABEL_125:
                                                          UnityEngine_GameObject__SetActive(
                                                            (UnityEngine_GameObject_o *)pickupSprite,
                                                            v56,
                                                            0);
                                                          return;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_127:
    sub_21FFECC(pickupSprite, item);
  }
}


void EventTradeListViewItemDraw__UpdateSweetsAnim(
        EventTradeListViewItemDraw_o *this,
        EventTradeListViewItem_o *item,
        const MethodInfo *method)
{
  EventTradeListViewItemDraw___c_c *v5; // x0
  System_Collections_Generic_IEnumerable_T__o *sweetsAnimSpriteArray; // x21
  struct EventTradeListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__45_0; // x22
  Il2CppObject *v9; // x23
  struct EventTradeListViewItemDraw___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  UnityEngine_GameObject_o *NowTradeNum; // x0
  const MethodInfo *v18; // x1
  __int64 v19; // x21
  struct UISprite_array *v20; // x8
  const MethodInfo *v21; // x1

  if ( (byte_5932C24 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_UISprite__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_UISprite___);
    sub_21FFC50(&Method_EventTradeListViewItemDraw___c__UpdateSweetsAnim_b__45_0__);
    sub_21FFC50(&EventTradeListViewItemDraw___c_TypeInfo);
    byte_5932C24 = 1;
  }
  v5 = EventTradeListViewItemDraw___c_TypeInfo;
  sweetsAnimSpriteArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.sweetsAnimSpriteArray;
  if ( !*(&EventTradeListViewItemDraw___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemDraw___c_TypeInfo, item, method);
    v5 = EventTradeListViewItemDraw___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__45_0 = (System_Action_object__o *)static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, item, method);
      static_fields = EventTradeListViewItemDraw___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__45_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(_9__45_0, v9, Method_EventTradeListViewItemDraw___c__UpdateSweetsAnim_b__45_0__, 0);
    v10 = EventTradeListViewItemDraw___c_TypeInfo->static_fields;
    v10->__9__45_0 = (struct System_Action_UISprite__o *)_9__45_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->__9__45_0, (int32_t)_9__45_0, v11, v12, v13, v14, v15, v16);
  }
  BasicHelper__ForEach_object_(
    sweetsAnimSpriteArray,
    (System_Action_T__o *)_9__45_0,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_UISprite___);
  if ( !item )
    goto LABEL_18;
  NowTradeNum = (UnityEngine_GameObject_o *)EventTradeListViewItem__get_NowTradeNum(item, v18);
  if ( (int)NowTradeNum >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      v20 = this->fields.sweetsAnimSpriteArray;
      if ( !v20 )
        break;
      if ( (unsigned int)v19 >= LODWORD(v20->max_length) )
        sub_21FFED4(NowTradeNum);
      NowTradeNum = (UnityEngine_GameObject_o *)v20->m_Items[v19];
      if ( !NowTradeNum )
        break;
      NowTradeNum = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NowTradeNum, 0);
      if ( !NowTradeNum )
        break;
      UnityEngine_GameObject__SetActive(NowTradeNum, 1, 0);
      NowTradeNum = (UnityEngine_GameObject_o *)EventTradeListViewItem__get_NowTradeNum(item, v21);
      if ( (int)++v19 >= (int)NowTradeNum )
        return;
    }
LABEL_18:
    sub_21FFECC(NowTradeNum, v18);
  }
}


void EventTradeListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5932C26 & 1) == 0 )
  {
    sub_21FFC50(&EventTradeListViewItemDraw___c_TypeInfo);
    byte_5932C26 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventTradeListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTradeListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct EventTradeListViewItemDraw___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventTradeListViewItemDraw___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventTradeListViewItemDraw___c___ctor(EventTradeListViewItemDraw___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTradeListViewItemDraw___c___DestroyAnimObj_b__46_0(
        EventTradeListViewItemDraw___c_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  if ( !sprite
    || (this = (EventTradeListViewItemDraw___c_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)sprite,
                                                     0)) == 0 )
  {
    sub_21FFECC(this, sprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void EventTradeListViewItemDraw___c___UpdateSweetsAnim_b__45_0(
        EventTradeListViewItemDraw___c_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  if ( !sprite
    || (this = (EventTradeListViewItemDraw___c_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)sprite,
                                                     0)) == 0 )
  {
    sub_21FFECC(this, sprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void EventTradeListViewItemDraw___c__DisplayClass41_0___ctor(
        EventTradeListViewItemDraw___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTradeListViewItemDraw___c__DisplayClass41_0___SetItem_b__0(
        EventTradeListViewItemDraw___c__DisplayClass41_0_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  EventTradeListViewItemDraw___c__DisplayClass41_0_o *v4; // x20
  struct EventTradeListViewItem_o *item; // x8
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x9
  int32_t EventId_k__BackingField; // w20
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x21
  int32_t goodsIconId; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_5932C27 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    this = (EventTradeListViewItemDraw___c__DisplayClass41_0_o *)sub_21FFC50(&StringLiteral_21189/*"icon_{0}"*/);
    byte_5932C27 = 1;
  }
  item = v4->fields.item;
  if ( !item || (TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField) == 0 )
    sub_21FFECC(this, sprite);
  EventId_k__BackingField = item->fields._EventId_k__BackingField;
  goodsIconId = TradeGoodsEntity_k__BackingField->fields.goodsIconId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &goodsIconId);
  v11 = System_String__Format((System_String_o *)StringLiteral_21189/*"icon_{0}"*/, v8, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9, v10);
  AtlasManager__SetEventUI_47538316(EventId_k__BackingField, sprite, v11, 0);
}