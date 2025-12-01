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
  EventTradeListViewItemDraw___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_T__o *sweetsAnimSpriteArray; // x19
  System_Action_object__o *_9__46_0; // x20
  Il2CppObject *v6; // x21
  struct EventTradeListViewItemDraw___c_StaticFields *static_fields; // x0

  if ( (byte_4CC1DA1 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_UISprite__TypeInfo);
    sub_1C713B0(&Method_BasicHelper_ForEach_UISprite___);
    sub_1C713B0(&Method_EventTradeListViewItemDraw___c__DestroyAnimObj_b__46_0__);
    sub_1C713B0(&EventTradeListViewItemDraw___c_TypeInfo);
    byte_4CC1DA1 = 1;
  }
  v3 = EventTradeListViewItemDraw___c_TypeInfo;
  sweetsAnimSpriteArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.sweetsAnimSpriteArray;
  if ( !EventTradeListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemDraw___c_TypeInfo);
    v3 = EventTradeListViewItemDraw___c_TypeInfo;
  }
  _9__46_0 = (System_Action_object__o *)v3->static_fields->__9__46_0;
  if ( !_9__46_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = EventTradeListViewItemDraw___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__46_0 = (System_Action_object__o *)sub_1C715FC(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(_9__46_0, v6, Method_EventTradeListViewItemDraw___c__DestroyAnimObj_b__46_0__, 0);
    static_fields = EventTradeListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__46_0 = (struct System_Action_UISprite__o *)_9__46_0;
    sub_1C71354(&static_fields->__9__46_0, _9__46_0);
  }
  BasicHelper__ForEach_object_(
    sweetsAnimSpriteArray,
    (System_Action_T__o *)_9__46_0,
    (const MethodInfo_3136DF4 *)Method_BasicHelper_ForEach_UISprite___);
}


int32_t EventTradeListViewItemDraw__GetDisplayMode(
        int32_t initMode,
        EventTradeListViewItem_o *item,
        const MethodInfo *method)
{
  if ( initMode == 3 )
  {
    if ( !item )
      sub_1C71608(initMode, 0);
    EventTradeListViewItem__UpdateTradeUserInfo(item, 0);
    if ( EventTradeListViewItem__get_IsTradeComplete(item, 0) )
    {
      return 5;
    }
    else if ( EventTradeListViewItem__get_IsTrading(item, 0) )
    {
      return 4;
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
  Il2CppObject *v7; // x22
  int64_t nameTextLabel; // x0
  const MethodInfo *v9; // x1
  EventTradeListViewItem_o **v10; // x21
  int32_t EventId_k__BackingField; // w23
  UISprite_o *tradingBaseSprite; // x24
  UILabel_o *tradeStartLabel; // x23
  UILabel_o *rewardReceivedPossibleLabel; // x23
  UILabel_o *replenishmentLabel; // x23
  UILabel_o *withdrawalLabel; // x23
  System_Collections_Generic_IEnumerable_T__o *sweetsAnimSpriteArray; // x23
  System_Action_object__o *v18; // x24
  const MethodInfo *v19; // x2
  Il2CppClass *klass; // x8
  EventTradeListViewItem_o *v21; // x8
  _BOOL4 IsRelease_k__BackingField; // w24
  int32_t v23; // w23
  UISprite_o *baseSprite; // x22
  EventTradeListViewItem_o *v25; // x8
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x9
  int32_t v27; // w23
  UISprite_o *itemIcon; // x22
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  struct EventTradeGoodsEntity_o *v31; // x8
  System_String_o *name; // x1
  UILabel_o *v33; // x22
  struct EventTradeGoodsEntity_o *v34; // x8
  const MethodInfo *v35; // x2
  int64_t v36; // x23
  void *monitor; // x26
  UILabel_o *restTimeLabel; // x22
  System_String_o *v39; // x23
  void *v40; // x24
  int64_t Time; // x0
  Il2CppObject *RestTime2; // x0
  const MethodInfo *v43; // x2
  unsigned int v44; // w20
  bool v45; // w1
  bool v46; // w1
  UILabel_o *textOnMask; // x20
  int32_t goodsIconId; // [xsp+Ch] [xbp-54h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4CC1D9C & 1) == 0 )
  {
    sub_1C713B0(&System_Action_UISprite__TypeInfo);
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_BasicHelper_ForEach_UISprite___);
    sub_1C713B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&string_TypeInfo);
    sub_1C713B0(&Method_EventTradeListViewItemDraw___c__DisplayClass41_0__SetItem_b__0__);
    sub_1C713B0(&EventTradeListViewItemDraw___c__DisplayClass41_0_TypeInfo);
    sub_1C713B0(&StringLiteral_17560/*"btn_trade_bg_01"*/);
    sub_1C713B0(&StringLiteral_20328/*"icon_{0}"*/);
    sub_1C713B0(&StringLiteral_20500/*"img_item_brank"*/);
    sub_1C713B0(&StringLiteral_20326/*"icon_trade_reward"*/);
    sub_1C713B0(&StringLiteral_13473/*"TRADE_EVENT_BOARD_WITHDRAWALLABEL_BUTTON"*/);
    sub_1C713B0(&StringLiteral_19357/*"event_trade_8048001"*/);
    sub_1C713B0(&StringLiteral_13410/*"TIME_REST2_NONE"*/);
    sub_1C713B0(&StringLiteral_13469/*"TRADE_EVENT_BOARD_RECEIVE_BUTTON"*/);
    sub_1C713B0(&StringLiteral_24291/*"tradegauge_bg"*/);
    sub_1C713B0(&StringLiteral_20291/*"icon_popularitem"*/);
    sub_1C713B0(&StringLiteral_13470/*"TRADE_EVENT_BOARD_REPLENISHMENT_BUTTON"*/);
    sub_1C713B0(&StringLiteral_13499/*"TRADE_EVENT_REST_TIME_LABEL"*/);
    sub_1C713B0(&StringLiteral_19358/*"event_trade_8048002"*/);
    sub_1C713B0(&StringLiteral_13481/*"TRADE_EVENT_END"*/);
    sub_1C713B0(&StringLiteral_24290/*"tradegauge_bar"*/);
    sub_1C713B0(&StringLiteral_17561/*"btn_trade_bg_02"*/);
    sub_1C713B0(&StringLiteral_19359/*"event_trade_8048003"*/);
    sub_1C713B0(&StringLiteral_20323/*"icon_trade_arrow"*/);
    sub_1C713B0(&StringLiteral_13471/*"TRADE_EVENT_BOARD_START_BUTTON"*/);
    sub_1C713B0(&StringLiteral_13472/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/);
    byte_4CC1D9C = 1;
  }
  entity = 0;
  v7 = (Il2CppObject *)sub_1C715FC(EventTradeListViewItemDraw___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_90;
  v7[1].klass = (Il2CppClass *)item;
  v10 = (EventTradeListViewItem_o **)&v7[1];
  sub_1C71354(&v7[1], item);
  if ( mode && *v10 )
  {
    EventId_k__BackingField = (*v10)->fields._EventId_k__BackingField;
    tradingBaseSprite = this->fields.tradingBaseSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    nameTextLabel = AtlasManager__SetEventUI_40880344(
                      EventId_k__BackingField,
                      tradingBaseSprite,
                      (System_String_o *)StringLiteral_19358/*"event_trade_8048002"*/,
                      0);
    if ( !*v10 )
      goto LABEL_90;
    nameTextLabel = AtlasManager__SetEventUI_40880344(
                      (*v10)->fields._EventId_k__BackingField,
                      this->fields.progressGaugeFront,
                      (System_String_o *)StringLiteral_24290/*"tradegauge_bar"*/,
                      0);
    if ( !*v10 )
      goto LABEL_90;
    nameTextLabel = AtlasManager__SetEventUI_40880344(
                      (*v10)->fields._EventId_k__BackingField,
                      this->fields.progressGaugeBack,
                      (System_String_o *)StringLiteral_24291/*"tradegauge_bg"*/,
                      0);
    if ( !*v10 )
      goto LABEL_90;
    AtlasManager__SetEventUI_40880344(
      (*v10)->fields._EventId_k__BackingField,
      this->fields.pickupSprite,
      (System_String_o *)StringLiteral_20291/*"icon_popularitem"*/,
      0);
    tradeStartLabel = this->fields.tradeStartLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13471/*"TRADE_EVENT_BOARD_START_BUTTON"*/, 0);
    if ( !tradeStartLabel )
      goto LABEL_90;
    UILabel__set_text(tradeStartLabel, (System_String_o *)nameTextLabel, 0);
    if ( !*v10 )
      goto LABEL_90;
    AtlasManager__SetEventUI_40880344(
      (*v10)->fields._EventId_k__BackingField,
      this->fields.tradeStartButtonSprite,
      (System_String_o *)StringLiteral_17560/*"btn_trade_bg_01"*/,
      0);
    rewardReceivedPossibleLabel = this->fields.rewardReceivedPossibleLabel;
    nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13469/*"TRADE_EVENT_BOARD_RECEIVE_BUTTON"*/, 0);
    if ( !rewardReceivedPossibleLabel )
      goto LABEL_90;
    UILabel__set_text(rewardReceivedPossibleLabel, (System_String_o *)nameTextLabel, 0);
    if ( !*v10 )
      goto LABEL_90;
    AtlasManager__SetEventUI_40880344(
      (*v10)->fields._EventId_k__BackingField,
      this->fields.rewardReceivedPossibleButtonSprite,
      (System_String_o *)StringLiteral_17561/*"btn_trade_bg_02"*/,
      0);
    replenishmentLabel = this->fields.replenishmentLabel;
    nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13470/*"TRADE_EVENT_BOARD_REPLENISHMENT_BUTTON"*/, 0);
    if ( !replenishmentLabel )
      goto LABEL_90;
    UILabel__set_text(replenishmentLabel, (System_String_o *)nameTextLabel, 0);
    if ( !*v10 )
      goto LABEL_90;
    AtlasManager__SetEventUI_40880344(
      (*v10)->fields._EventId_k__BackingField,
      this->fields.replenishmentButtonSprite,
      (System_String_o *)StringLiteral_17560/*"btn_trade_bg_01"*/,
      0);
    withdrawalLabel = this->fields.withdrawalLabel;
    nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13473/*"TRADE_EVENT_BOARD_WITHDRAWALLABEL_BUTTON"*/, 0);
    if ( !withdrawalLabel )
      goto LABEL_90;
    UILabel__set_text(withdrawalLabel, (System_String_o *)nameTextLabel, 0);
    if ( !*v10 )
      goto LABEL_90;
    nameTextLabel = AtlasManager__SetEventUI_40880344(
                      (*v10)->fields._EventId_k__BackingField,
                      this->fields.withdrawalButtonSprite,
                      (System_String_o *)StringLiteral_17560/*"btn_trade_bg_01"*/,
                      0);
    if ( !*v10 )
      goto LABEL_90;
    nameTextLabel = AtlasManager__SetEventUI_40880344(
                      (*v10)->fields._EventId_k__BackingField,
                      this->fields.tradeRewardIconSprite,
                      (System_String_o *)StringLiteral_20326/*"icon_trade_reward"*/,
                      0);
    if ( !*v10 )
      goto LABEL_90;
    AtlasManager__SetEventUI_40880344(
      (*v10)->fields._EventId_k__BackingField,
      this->fields.tradeArrowIconSprite,
      (System_String_o *)StringLiteral_20323/*"icon_trade_arrow"*/,
      0);
    sweetsAnimSpriteArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.sweetsAnimSpriteArray;
    v18 = (System_Action_object__o *)sub_1C715FC(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(v18, v7, Method_EventTradeListViewItemDraw___c__DisplayClass41_0__SetItem_b__0__, 0);
    BasicHelper__ForEach_object_(
      sweetsAnimSpriteArray,
      (System_Action_T__o *)v18,
      (const MethodInfo_3136DF4 *)Method_BasicHelper_ForEach_UISprite___);
    klass = v7[1].klass;
    if ( !klass )
      goto LABEL_90;
    EventTradeListViewItemDraw__SetReleaseDisplayObject(this, BYTE4(klass->_1.methods), v19);
    v21 = *v10;
    if ( !*v10 )
      goto LABEL_90;
    IsRelease_k__BackingField = v21->fields._IsRelease_k__BackingField;
    v23 = v21->fields._EventId_k__BackingField;
    baseSprite = this->fields.baseSprite;
    if ( AtlasManager_TypeInfo->_2.cctor_finished )
    {
      if ( v21->fields._IsRelease_k__BackingField )
        goto LABEL_27;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( IsRelease_k__BackingField )
      {
LABEL_27:
        nameTextLabel = AtlasManager__SetEventUI_40880344(v23, baseSprite, (System_String_o *)StringLiteral_19357/*"event_trade_8048001"*/, 0);
        v25 = *v10;
        if ( !*v10 )
          goto LABEL_90;
        TradeGoodsEntity_k__BackingField = v25->fields._TradeGoodsEntity_k__BackingField;
        if ( !TradeGoodsEntity_k__BackingField )
          goto LABEL_90;
        v27 = v25->fields._EventId_k__BackingField;
        itemIcon = this->fields.itemIcon;
        goodsIconId = TradeGoodsEntity_k__BackingField->fields.goodsIconId;
        v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &goodsIconId);
        v30 = System_String__Format((System_String_o *)StringLiteral_20328/*"icon_{0}"*/, v29, 0);
        nameTextLabel = AtlasManager__SetEventUI_40880344(v27, itemIcon, v30, 0);
        if ( !*v10 )
          goto LABEL_90;
        v31 = (*v10)->fields._TradeGoodsEntity_k__BackingField;
        if ( !v31 )
          goto LABEL_90;
        nameTextLabel = (int64_t)this->fields.nameTextLabel;
        if ( !nameTextLabel )
          goto LABEL_90;
        name = v31->fields.name;
        goto LABEL_42;
      }
    }
    nameTextLabel = AtlasManager__SetEventUI_40880344(v23, baseSprite, (System_String_o *)StringLiteral_19359/*"event_trade_8048003"*/, 0);
    if ( !*v10 )
      goto LABEL_90;
    AtlasManager__SetEventUI_40880344(
      (*v10)->fields._EventId_k__BackingField,
      this->fields.itemIcon,
      (System_String_o *)StringLiteral_20500/*"img_item_brank"*/,
      0);
    v33 = (UILabel_o *)this->fields.nameTextLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13472/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, 0);
    if ( !v33 )
      goto LABEL_90;
    UILabel__set_text(v33, (System_String_o *)nameTextLabel, 0);
    if ( !*v10 )
      goto LABEL_90;
    v34 = (*v10)->fields._TradeGoodsEntity_k__BackingField;
    if ( !v34 )
      goto LABEL_90;
    nameTextLabel = (int64_t)this->fields.textOnMask;
    if ( !nameTextLabel )
      goto LABEL_90;
    name = v34->fields.closedMessage;
LABEL_42:
    UILabel__set_text((UILabel_o *)nameTextLabel, name, 0);
    if ( !*v10 )
      goto LABEL_90;
    if ( (*v10)->fields._EventId_k__BackingField >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      nameTextLabel = (int64_t)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !*v10 || !nameTextLabel )
        goto LABEL_90;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)nameTextLabel,
             &entity,
             (*v10)->fields._EventId_k__BackingField,
             (const MethodInfo_3408ECC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        nameTextLabel = NetworkManager__getTime(0);
        if ( !entity )
          goto LABEL_90;
        v36 = nameTextLabel;
        monitor = entity[6].monitor;
        restTimeLabel = this->fields.restTimeLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v36 >= (__int64)monitor )
        {
          nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13410/*"TIME_REST2_NONE"*/, 0);
        }
        else
        {
          nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13499/*"TRADE_EVENT_REST_TIME_LABEL"*/, 0);
          if ( !entity )
            goto LABEL_90;
          v39 = (System_String_o *)nameTextLabel;
          v40 = entity[6].monitor;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Time = NetworkManager__getTime(0);
          RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2((int64_t)v40, Time, 0);
          nameTextLabel = (int64_t)System_String__Format(v39, RestTime2, 0);
        }
        v9 = (const MethodInfo *)nameTextLabel;
        if ( !restTimeLabel )
LABEL_90:
          sub_1C71608(nameTextLabel, v9);
        UILabel__set_text(restTimeLabel, (System_String_o *)nameTextLabel, 0);
      }
    }
    EventTradeListViewItemDraw__SetPriceIconText(this, *v10, v35);
    EventTradeListViewItemDraw__SetRewardIconText(this, *v10, v43);
    v44 = mode & 0xFFFFFFFE;
    if ( v44 == 4 )
    {
      nameTextLabel = (int64_t)this->fields.tradingBaseSprite;
      if ( !nameTextLabel )
        goto LABEL_90;
      nameTextLabel = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameTextLabel, 0);
      if ( !nameTextLabel )
        goto LABEL_90;
      v45 = 1;
    }
    else
    {
      if ( v44 != 2 )
        goto LABEL_71;
      nameTextLabel = (int64_t)this->fields.tradingBaseSprite;
      if ( !nameTextLabel )
        goto LABEL_90;
      nameTextLabel = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameTextLabel, 0);
      if ( !nameTextLabel )
        goto LABEL_90;
      v45 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameTextLabel, v45, 0);
LABEL_71:
    nameTextLabel = (int64_t)*v10;
    if ( *v10 )
    {
      if ( !EventTradeListViewItem__get_IsEventEnd((EventTradeListViewItem_o *)nameTextLabel, 0) )
        return;
      if ( v44 == 4 )
      {
        nameTextLabel = (int64_t)this->fields.textOnMask;
        if ( nameTextLabel )
        {
          UILabel__set_text((UILabel_o *)nameTextLabel, string_TypeInfo->static_fields->Empty, 0);
          nameTextLabel = (int64_t)this->fields.maskSprite;
          if ( nameTextLabel )
          {
            nameTextLabel = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameTextLabel, 0);
            if ( nameTextLabel )
            {
              v46 = 0;
LABEL_88:
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameTextLabel, v46, 0);
              return;
            }
          }
        }
      }
      else
      {
        EventTradeListViewItemDraw__DestroyAnimObj(this, v9);
        nameTextLabel = (int64_t)this->fields.progressBar;
        if ( nameTextLabel )
        {
          nameTextLabel = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameTextLabel, 0);
          if ( nameTextLabel )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameTextLabel, 0, 0);
            textOnMask = this->fields.textOnMask;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13481/*"TRADE_EVENT_END"*/, 0);
            if ( textOnMask )
            {
              UILabel__set_text(textOnMask, (System_String_o *)nameTextLabel, 0);
              nameTextLabel = (int64_t)this->fields.textOnMask;
              if ( nameTextLabel )
              {
                nameTextLabel = (int64_t)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)nameTextLabel,
                                           0);
                if ( nameTextLabel )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameTextLabel, 1, 0);
                  nameTextLabel = (int64_t)this->fields.maskSprite;
                  if ( nameTextLabel )
                  {
                    nameTextLabel = (int64_t)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)nameTextLabel,
                                               0);
                    if ( nameTextLabel )
                    {
                      v46 = 1;
                      goto LABEL_88;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_90;
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
  int32_t ItemCount; // w0
  UnityEngine_Object_o *v11; // x20
  const MethodInfo *v12; // x3

  if ( (byte_4CC1D9D & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC1D9D = 1;
  }
  p_priceInfoSingle = &this->fields.priceInfoSingle;
  priceInfoSingle = (UnityEngine_Component_o *)this->fields.priceInfoSingle;
  if ( !priceInfoSingle )
    goto LABEL_23;
  priceInfoSingle = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(priceInfoSingle, 0);
  if ( !priceInfoSingle )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfoSingle, 0, 0);
  p_priceInfoDouble = &this->fields.priceInfoDouble;
  priceInfoSingle = (UnityEngine_Component_o *)this->fields.priceInfoDouble;
  if ( !priceInfoSingle )
    goto LABEL_23;
  priceInfoSingle = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(priceInfoSingle, 0);
  if ( !priceInfoSingle )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfoSingle, 0, 0);
  priceInfoTriple = this->fields.priceInfoTriple;
  p_priceInfoTriple = &this->fields.priceInfoTriple;
  priceInfoSingle = (UnityEngine_Component_o *)priceInfoTriple;
  if ( !priceInfoTriple )
    goto LABEL_23;
  priceInfoSingle = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(priceInfoSingle, 0);
  if ( !priceInfoSingle )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfoSingle, 0, 0);
  if ( !item )
    goto LABEL_23;
  ItemCount = EventTradeListViewItem__get_ItemCount(item, 0);
  if ( ItemCount == 1 )
  {
    p_priceInfoDouble = p_priceInfoSingle;
    goto LABEL_16;
  }
  if ( ItemCount == 3 )
  {
    p_priceInfoDouble = p_priceInfoTriple;
    goto LABEL_16;
  }
  v11 = 0;
  if ( ItemCount == 2 )
LABEL_16:
    v11 = (UnityEngine_Object_o *)*p_priceInfoDouble;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  priceInfoSingle = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(v11, 0, 0);
  if ( ((unsigned __int8)priceInfoSingle & 1) == 0 )
  {
    if ( v11 )
    {
      priceInfoSingle = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v11,
                                                     0);
      if ( priceInfoSingle )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfoSingle, 1, 0);
        EventTradePriceInfo__SetPriceInfo(
          (EventTradePriceInfo_o *)v11,
          item->fields._CommonConsumeEntityArray_k__BackingField,
          1,
          v12);
        return;
      }
    }
LABEL_23:
    sub_1C71608(priceInfoSingle, item);
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
    sub_1C71608(maskSprite, isRelease);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0);
}


void EventTradeListViewItemDraw__SetRewardIconText(
        EventTradeListViewItemDraw_o *this,
        EventTradeListViewItem_o *item,
        const MethodInfo *method)
{
  GiftMaster_o *Master_object; // x0
  __int64 v6; // x1
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x8
  GiftEntity_array *GiftListById; // x20
  Il2CppObject *v9; // x21
  GiftEntity_o *v10; // x8
  UILabel_o *rewardNumTextLabel; // x21
  GiftEntity_o *v12; // x8
  UILabel_o *rewardNumTitleLabel; // x19
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CC1D9E & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_396/*"#,0"*/);
    sub_1C713B0(&StringLiteral_13483/*"TRADE_EVENT_HAVE_NUM"*/);
    sub_1C713B0(&StringLiteral_1115/*"0"*/);
    byte_4CC1D9E = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !item )
    goto LABEL_32;
  TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
  if ( !TradeGoodsEntity_k__BackingField || !Master_object )
    goto LABEL_32;
  GiftListById = GiftMaster__GetGiftListById(Master_object, TradeGoodsEntity_k__BackingField->fields.giftId, 0);
  v9 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  Master_object = (GiftMaster_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (GiftMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !GiftListById )
    goto LABEL_32;
  if ( !LODWORD(GiftListById->max_length) )
    goto LABEL_33;
  v10 = GiftListById->m_Items[0];
  if ( !v10 || !v9 )
    goto LABEL_32;
  Master_object = (GiftMaster_o *)UserItemMaster__TryGetEntity(
                                    (UserItemMaster_o *)v9,
                                    &entity,
                                    *(_QWORD *)&Master_object[2].fields._MasterName_k__BackingField[2].fields,
                                    v10->fields.objectId,
                                    0);
  rewardNumTextLabel = this->fields.rewardNumTextLabel;
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_32;
    Master_object = (GiftMaster_o *)System_Int32__ToString_65540220(
                                      (int)entity + 28,
                                      (System_String_o *)StringLiteral_396/*"#,0"*/,
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
    UILabel__set_text(this->fields.rewardNumTextLabel, (System_String_o *)StringLiteral_1115/*"0"*/, 0);
  }
  if ( !LODWORD(GiftListById->max_length) )
LABEL_33:
    sub_1C71610(Master_object);
  v12 = GiftListById->m_Items[0];
  if ( !v12 )
    goto LABEL_32;
  Master_object = (GiftMaster_o *)this->fields.rewardItemIcon;
  if ( !Master_object )
    goto LABEL_32;
  ItemIconComponent__SetItem((ItemIconComponent_o *)Master_object, v12->fields.objectId, -1, 1, 0);
  rewardNumTitleLabel = this->fields.rewardNumTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (GiftMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13483/*"TRADE_EVENT_HAVE_NUM"*/, 0);
  if ( !rewardNumTitleLabel )
LABEL_32:
    sub_1C71608(Master_object, v6);
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
  int32_t v9; // w23
  unsigned int v10; // w8
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  int v12; // w21
  int maxTradeNum; // s8
  const MethodInfo *v14; // x2
  UILabel_o *progressLabel; // x21
  System_String_o *v16; // x22
  struct EventTradeInfo_o *v17; // x8
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x0
  UILabel_o *rewardAvailableNumTextLabel; // x21
  System_String_o *v21; // x22
  Il2CppObject *v22; // x0
  const MethodInfo *v23; // x3
  unsigned int rgba; // w8
  struct EventTradeGoodsEntity_o *v25; // x8
  EventTradePickupMaster_o *v26; // x21
  int32_t eventId; // w22
  int32_t id; // w23
  int32_t *p_tradeTimeRate; // x8
  struct EventTradeGoodsEntity_o *v30; // x9
  EventTradePickupMaster_c *v31; // x0
  int32_t v32; // w21
  int32_t tradeTime; // w22
  int DEFAULT_EVENT_TRADE_TIME_RATE; // w23
  double v35; // d8
  int64_t v36; // x0
  UILabel_o *timeRequiredTrade; // x21
  int64_t v38; // x22
  const MethodInfo *v39; // x1
  _BOOL4 v40; // w8
  bool v41; // w1
  _BOOL4 v42; // w8
  struct EventTradeInfo_o *v43; // x8
  int64_t startedAt; // x21
  EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x22
  int32_t tradeNum; // w23
  int64_t TradeFinishTime; // x22
  int64_t v48; // x21
  UILabel_o *tradeCompleteLabel; // x22
  UILabel_o *v50; // x22
  int32_t EventId_k__BackingField; // w20
  UISprite_o *tradingStateSprite; // x22
  __int64 *v53; // x8
  UILabel_o *timeLeftLabel; // x22
  float v55; // s1 OVERLAPPED
  float v56; // s2
  float v57; // s0
  float v58; // s3
  int32_t v59; // [xsp+8h] [xbp-58h] BYREF
  int32_t NowTradeNum; // [xsp+Ch] [xbp-54h] BYREF
  EventTradePickupEntity_o *pickupEntity; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CC1D9F & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&System_Convert_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_EventTradePickupMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&EventTradePickupMaster_TypeInfo);
    sub_1C713B0(&EventTradeTimeCalculation_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&System_Math_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&string_TypeInfo);
    sub_1C713B0(&StringLiteral_20325/*"icon_trade_intrade"*/);
    sub_1C713B0(&StringLiteral_25306/*"{0}:{1:D2}:{2:D2}"*/);
    sub_1C713B0(&StringLiteral_20324/*"icon_trade_compleate"*/);
    sub_1C713B0(&StringLiteral_13500/*"TRADE_EVENT_REWARD_AVAILABLE_NUM_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_13494/*"TRADE_EVENT_PROGRESS_NUM"*/);
    sub_1C713B0(&StringLiteral_13508/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/);
    sub_1C713B0(&StringLiteral_13507/*"TRADE_EVENT_TRADE_COMPLETE"*/);
    byte_4CC1D9F = 1;
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
        v9 = pickupSprite;
        if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
        if ( v8 )
        {
          UnityEngine_GameObject__SetActive(
            v8,
            v9 < EventTradePickupMaster_TypeInfo->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE,
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
                  v10 = *(_DWORD *)&this->fields.NAME_COLOR_DEFAULT.fields.r;
                  v62.fields.a = (float)HIBYTE(v10) / 255.0;
                  v62.fields.b = (float)BYTE2(v10) / 255.0;
                  v62.fields.g = (float)BYTE1(v10) / 255.0;
                  v62.fields.r = (float)(unsigned __int8)v10 / 255.0;
                  UILabel__set_effectColor((UILabel_o *)pickupSprite, v62, 0);
                  pickupSprite = EventTradeListViewItem__get_NowTradeNum(item, 0);
                  TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
                  if ( TradeInfo_k__BackingField )
                  {
                    v12 = pickupSprite;
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
                          UIProgressBar__set_value((UIProgressBar_o *)pickupSprite, (float)v12 / (float)maxTradeNum, 0);
                          EventTradeListViewItemDraw__UpdateSweetsAnim(this, item, v14);
                          progressLabel = this->fields.progressLabel;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v16 = LocalizationManager__Get((System_String_o *)StringLiteral_13494/*"TRADE_EVENT_PROGRESS_NUM"*/, 0);
                          NowTradeNum = EventTradeListViewItem__get_NowTradeNum(item, 0);
                          pickupSprite = j_il2cpp_value_box_0(int_TypeInfo, &NowTradeNum);
                          v17 = item->fields._TradeInfo_k__BackingField;
                          if ( v17 )
                          {
                            v18 = (Il2CppObject *)pickupSprite;
                            v59 = v17->fields.maxTradeNum;
                            v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59);
                            pickupSprite = (__int64)System_String__Format_64073032(v16, v18, v19, 0);
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
                                  if ( EventTradeListViewItem__get_IsAbleReceiveRewards(item, 0) )
                                  {
                                    ActionExtensions__Call(item->fields._UpdateReceiveAllButtonState_k__BackingField, 0);
                                    pickupSprite = (__int64)this->fields.rewardReceivedPossibleButtonSprite;
                                    if ( !pickupSprite )
                                      goto LABEL_128;
                                    pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)pickupSprite,
                                                              0);
                                    if ( !pickupSprite )
                                      goto LABEL_128;
                                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 1, 0);
                                    pickupSprite = (__int64)this->fields.replenishmentButtonSprite;
                                    if ( !pickupSprite )
                                      goto LABEL_128;
                                    pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)pickupSprite,
                                                              0);
                                    if ( !pickupSprite )
                                      goto LABEL_128;
                                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 0, 0);
                                    pickupSprite = (__int64)this->fields.withdrawalButtonSprite;
                                    if ( !pickupSprite )
                                      goto LABEL_128;
                                    pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)pickupSprite,
                                                              0);
                                    if ( !pickupSprite )
                                      goto LABEL_128;
                                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 0, 0);
                                    rewardAvailableNumTextLabel = this->fields.rewardAvailableNumTextLabel;
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13500/*"TRADE_EVENT_REWARD_AVAILABLE_NUM_MESSAGE"*/, 0);
                                    NowTradeNum = EventTradeListViewItem__get_NowCompleteNum(item, 0);
                                    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &NowTradeNum);
                                    pickupSprite = (__int64)System_String__Format(v21, v22, 0);
                                    if ( !rewardAvailableNumTextLabel )
                                      goto LABEL_128;
                                    UILabel__set_text(rewardAvailableNumTextLabel, (System_String_o *)pickupSprite, 0);
                                  }
                                  else
                                  {
                                    pickupSprite = (__int64)this->fields.rewardReceivedPossibleButtonSprite;
                                    if ( !pickupSprite )
                                      goto LABEL_128;
                                    pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)pickupSprite,
                                                              0);
                                    if ( !pickupSprite )
                                      goto LABEL_128;
                                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 0, 0);
                                    pickupSprite = (__int64)this->fields.replenishmentButtonSprite;
                                    if ( !pickupSprite )
                                      goto LABEL_128;
                                    pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)pickupSprite,
                                                              0);
                                    if ( !pickupSprite )
                                      goto LABEL_128;
                                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 1, 0);
                                    pickupSprite = (__int64)this->fields.withdrawalButtonSprite;
                                    if ( !pickupSprite )
                                      goto LABEL_128;
                                    pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)pickupSprite,
                                                              0);
                                    if ( !pickupSprite )
                                      goto LABEL_128;
                                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 1, 0);
                                    pickupSprite = (__int64)this->fields.rewardAvailableNumTextLabel;
                                    if ( !pickupSprite )
                                      goto LABEL_128;
                                    UILabel__set_text(
                                      (UILabel_o *)pickupSprite,
                                      string_TypeInfo->static_fields->Empty,
                                      0);
                                    if ( EventTradeListViewItem__get_IsRefillable(item, 0) )
                                      v42 = !EventTradeListViewItem__get_IsEventEnd(item, 0);
                                    else
                                      LOBYTE(v42) = 0;
                                    pickupSprite = (__int64)this->fields.replenishmentButton;
                                    if ( !pickupSprite )
                                      goto LABEL_128;
                                    pickupSprite = (*(__int64 (__fastcall **)(__int64, _BOOL4, _QWORD))(*(_QWORD *)pickupSprite + 392LL))(
                                                     pickupSprite,
                                                     v42,
                                                     *(_QWORD *)(*(_QWORD *)pickupSprite + 400LL));
                                  }
                                  v43 = item->fields._TradeInfo_k__BackingField;
                                  if ( !v43 )
                                    goto LABEL_128;
                                  startedAt = v43->fields.startedAt;
                                  TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
                                  tradeNum = v43->fields.tradeNum;
                                  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
                                  TradeFinishTime = EventTradeTimeCalculation__GetTradeFinishTime(
                                                      TradeGoodsEntity_k__BackingField,
                                                      tradeNum,
                                                      startedAt,
                                                      v23);
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                  v48 = TradeFinishTime + startedAt - NetworkManager__getTime(0);
                                  pickupSprite = EventTradeListViewItem__get_NowTradeNum(item, 0);
                                  tradeCompleteLabel = (UILabel_o *)this->fields.tradeCompleteLabel;
                                  if ( (int)pickupSprite <= 0 )
                                  {
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    pickupSprite = (__int64)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_13507/*"TRADE_EVENT_TRADE_COMPLETE"*/,
                                                              0);
                                    if ( !tradeCompleteLabel )
                                      goto LABEL_128;
                                    UILabel__set_text(tradeCompleteLabel, (System_String_o *)pickupSprite, 0);
                                    timeLeftLabel = this->fields.timeLeftLabel;
                                    pickupSprite = (__int64)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_13508/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/,
                                                              0);
                                    if ( !timeLeftLabel )
                                      goto LABEL_128;
                                    UILabel__set_text(timeLeftLabel, (System_String_o *)pickupSprite, 0);
                                    EventId_k__BackingField = item->fields._EventId_k__BackingField;
                                    tradingStateSprite = this->fields.tradingStateSprite;
                                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                    v53 = &StringLiteral_20324/*"icon_trade_compleate"*/;
                                  }
                                  else
                                  {
                                    if ( !tradeCompleteLabel )
                                      goto LABEL_128;
                                    UILabel__set_text(
                                      (UILabel_o *)this->fields.tradeCompleteLabel,
                                      string_TypeInfo->static_fields->Empty,
                                      0);
                                    v50 = this->fields.timeLeftLabel;
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    pickupSprite = (__int64)LocalizationManager__GetRestTimeInFormat(
                                                              v48,
                                                              0,
                                                              (System_String_o *)StringLiteral_25306/*"{0}:{1:D2}:{2:D2}"*/,
                                                              0);
                                    if ( !v50 )
                                      goto LABEL_128;
                                    UILabel__set_text(v50, (System_String_o *)pickupSprite, 0);
                                    EventId_k__BackingField = item->fields._EventId_k__BackingField;
                                    tradingStateSprite = this->fields.tradingStateSprite;
                                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                    v53 = &StringLiteral_20325/*"icon_trade_intrade"*/;
                                  }
                                  AtlasManager__SetEventUI_40880344(
                                    EventId_k__BackingField,
                                    tradingStateSprite,
                                    (System_String_o *)*v53,
                                    0);
                                  v55 = 0.92157;
                                  pickupSprite = (__int64)this->fields.timeLeftLabel;
                                  if ( v48 >= 3600 )
                                    v56 = 0.015686;
                                  else
                                    v56 = 0.0;
                                  if ( v48 < 3600 )
                                    v55 = 0.0;
                                  if ( pickupSprite )
                                  {
                                    v57 = 1.0;
                                    v58 = 1.0;
                                    UIWidget__set_color(
                                      (UIWidget_o *)pickupSprite,
                                      *(UnityEngine_Color_o *)(&v55 - 1),
                                      0);
                                    pickupSprite = (__int64)this->fields.tradingStateSprite;
                                    if ( pickupSprite )
                                    {
                                      pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)pickupSprite,
                                                                0);
                                      if ( pickupSprite )
                                      {
                                        v41 = 1;
                                        goto LABEL_126;
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
              UILabel__set_text((UILabel_o *)pickupSprite, string_TypeInfo->static_fields->Empty, 0);
              pickupSprite = (__int64)this->fields.tradeCompleteLabel;
              if ( pickupSprite )
              {
                UILabel__set_text((UILabel_o *)pickupSprite, string_TypeInfo->static_fields->Empty, 0);
                pickupSprite = (__int64)this->fields.rewardAvailableNumTextLabel;
                if ( pickupSprite )
                {
                  UILabel__set_text((UILabel_o *)pickupSprite, string_TypeInfo->static_fields->Empty, 0);
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
                        v63.fields.a = (float)HIBYTE(rgba) / 255.0;
                        v63.fields.b = (float)BYTE2(rgba) / 255.0;
                        v63.fields.g = (float)BYTE1(rgba) / 255.0;
                        v63.fields.r = (float)(unsigned __int8)rgba / 255.0;
                        UILabel__set_effectColor((UILabel_o *)pickupSprite, v63, 0);
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
                                            if ( !DataManager_TypeInfo->_2.cctor_finished )
                                              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                            pickupSprite = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventTradePickupMaster___);
                                            v25 = item->fields._TradeGoodsEntity_k__BackingField;
                                            if ( v25 )
                                            {
                                              v26 = (EventTradePickupMaster_o *)pickupSprite;
                                              id = v25->fields.id;
                                              eventId = v25->fields.eventId;
                                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                              pickupSprite = NetworkManager__getTime(0);
                                              if ( v26 )
                                              {
                                                pickupSprite = EventTradePickupMaster__TryGetEntityTargetTime(
                                                                 v26,
                                                                 &pickupEntity,
                                                                 id,
                                                                 eventId,
                                                                 pickupSprite,
                                                                 0);
                                                if ( (pickupSprite & 1) != 0 )
                                                {
                                                  if ( !pickupEntity )
                                                    goto LABEL_128;
                                                  p_tradeTimeRate = &pickupEntity->fields.tradeTimeRate;
                                                }
                                                else
                                                {
                                                  pickupSprite = (__int64)EventTradePickupMaster_TypeInfo;
                                                  if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
                                                  {
                                                    j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
                                                    pickupSprite = (__int64)EventTradePickupMaster_TypeInfo;
                                                  }
                                                  p_tradeTimeRate = *(int32_t **)(pickupSprite + 184);
                                                }
                                                v30 = item->fields._TradeGoodsEntity_k__BackingField;
                                                if ( v30 )
                                                {
                                                  v31 = EventTradePickupMaster_TypeInfo;
                                                  v32 = *p_tradeTimeRate;
                                                  tradeTime = v30->fields.tradeTime;
                                                  if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
                                                  {
                                                    j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
                                                    v31 = EventTradePickupMaster_TypeInfo;
                                                  }
                                                  DEFAULT_EVENT_TRADE_TIME_RATE = v31->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
                                                  if ( !System_Math_TypeInfo->_2.cctor_finished )
                                                    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                                                  v35 = ceil(
                                                          (double)(tradeTime * v32)
                                                        / (double)DEFAULT_EVENT_TRADE_TIME_RATE);
                                                  if ( !System_Convert_TypeInfo->_2.cctor_finished )
                                                    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
                                                  v36 = System_Convert__ToInt64_65119584(v35, 0);
                                                  timeRequiredTrade = this->fields.timeRequiredTrade;
                                                  v38 = v36;
                                                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                  pickupSprite = (__int64)LocalizationManager__GetRestTimeInFormat(
                                                                            v38,
                                                                            0,
                                                                            (System_String_o *)StringLiteral_25306/*"{0}:{1:D2}:{2:D2}"*/,
                                                                            0);
                                                  if ( timeRequiredTrade )
                                                  {
                                                    UILabel__set_text(
                                                      timeRequiredTrade,
                                                      (System_String_o *)pickupSprite,
                                                      0);
                                                    EventTradeListViewItemDraw__DestroyAnimObj(this, v39);
                                                    if ( EventTradeListViewItem__get_IsBuyAble(item, 0) )
                                                    {
                                                      LOBYTE(v40) = item->fields._IsRelease_k__BackingField;
                                                      if ( v40 )
                                                        v40 = !EventTradeListViewItem__get_IsEventEnd(item, 0);
                                                    }
                                                    else
                                                    {
                                                      LOBYTE(v40) = 0;
                                                    }
                                                    pickupSprite = (__int64)this->fields.tradeStartButton;
                                                    if ( pickupSprite )
                                                    {
                                                      (*(void (__fastcall **)(__int64, _BOOL4, _QWORD))(*(_QWORD *)pickupSprite + 392LL))(
                                                        pickupSprite,
                                                        v40,
                                                        *(_QWORD *)(*(_QWORD *)pickupSprite + 400LL));
                                                      pickupSprite = (__int64)this->fields.tradingStateSprite;
                                                      if ( pickupSprite )
                                                      {
                                                        pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                                                  (UnityEngine_Component_o *)pickupSprite,
                                                                                  0);
                                                        if ( pickupSprite )
                                                        {
                                                          v41 = 0;
LABEL_126:
                                                          UnityEngine_GameObject__SetActive(
                                                            (UnityEngine_GameObject_o *)pickupSprite,
                                                            v41,
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
LABEL_128:
    sub_1C71608(pickupSprite, item);
  }
}


void EventTradeListViewItemDraw__UpdateSweetsAnim(
        EventTradeListViewItemDraw_o *this,
        EventTradeListViewItem_o *item,
        const MethodInfo *method)
{
  EventTradeListViewItemDraw___c_c *v5; // x0
  System_Collections_Generic_IEnumerable_T__o *sweetsAnimSpriteArray; // x21
  System_Action_object__o *_9__45_0; // x22
  Il2CppObject *v8; // x23
  struct EventTradeListViewItemDraw___c_StaticFields *static_fields; // x0
  UnityEngine_GameObject_o *NowTradeNum; // x0
  __int64 v11; // x1
  int v12; // w21
  struct UISprite_array *v13; // x8

  if ( (byte_4CC1DA0 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_UISprite__TypeInfo);
    sub_1C713B0(&Method_BasicHelper_ForEach_UISprite___);
    sub_1C713B0(&Method_EventTradeListViewItemDraw___c__UpdateSweetsAnim_b__45_0__);
    sub_1C713B0(&EventTradeListViewItemDraw___c_TypeInfo);
    byte_4CC1DA0 = 1;
  }
  v5 = EventTradeListViewItemDraw___c_TypeInfo;
  sweetsAnimSpriteArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.sweetsAnimSpriteArray;
  if ( !EventTradeListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemDraw___c_TypeInfo);
    v5 = EventTradeListViewItemDraw___c_TypeInfo;
  }
  _9__45_0 = (System_Action_object__o *)v5->static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = EventTradeListViewItemDraw___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__45_0 = (System_Action_object__o *)sub_1C715FC(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(_9__45_0, v8, Method_EventTradeListViewItemDraw___c__UpdateSweetsAnim_b__45_0__, 0);
    static_fields = EventTradeListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__45_0 = (struct System_Action_UISprite__o *)_9__45_0;
    sub_1C71354(&static_fields->__9__45_0, _9__45_0);
  }
  BasicHelper__ForEach_object_(
    sweetsAnimSpriteArray,
    (System_Action_T__o *)_9__45_0,
    (const MethodInfo_3136DF4 *)Method_BasicHelper_ForEach_UISprite___);
  if ( !item )
    goto LABEL_18;
  NowTradeNum = (UnityEngine_GameObject_o *)EventTradeListViewItem__get_NowTradeNum(item, 0);
  if ( (int)NowTradeNum >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = this->fields.sweetsAnimSpriteArray;
      if ( !v13 )
        break;
      if ( (unsigned int)v12 >= LODWORD(v13->max_length) )
        sub_1C71610(NowTradeNum);
      NowTradeNum = (UnityEngine_GameObject_o *)v13->m_Items[v12];
      if ( !NowTradeNum )
        break;
      NowTradeNum = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NowTradeNum, 0);
      if ( !NowTradeNum )
        break;
      UnityEngine_GameObject__SetActive(NowTradeNum, 1, 0);
      ++v12;
      NowTradeNum = (UnityEngine_GameObject_o *)EventTradeListViewItem__get_NowTradeNum(item, 0);
      if ( v12 >= (int)NowTradeNum )
        return;
    }
LABEL_18:
    sub_1C71608(NowTradeNum, v11);
  }
}


void EventTradeListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4CC1DA2 & 1) == 0 )
  {
    sub_1C713B0(&EventTradeListViewItemDraw___c_TypeInfo);
    byte_4CC1DA2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(EventTradeListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTradeListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct EventTradeListViewItemDraw___c_o *)v1;
  sub_1C71354(EventTradeListViewItemDraw___c_TypeInfo->static_fields, v1);
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
    sub_1C71608(this, sprite);
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
    sub_1C71608(this, sprite);
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
  System_String_o *v9; // x21
  int32_t goodsIconId; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4CC1DA3 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    this = (EventTradeListViewItemDraw___c__DisplayClass41_0_o *)sub_1C713B0(&StringLiteral_20328/*"icon_{0}"*/);
    byte_4CC1DA3 = 1;
  }
  item = v4->fields.item;
  if ( !item || (TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField) == 0 )
    sub_1C71608(this, sprite);
  EventId_k__BackingField = item->fields._EventId_k__BackingField;
  goodsIconId = TradeGoodsEntity_k__BackingField->fields.goodsIconId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &goodsIconId);
  v9 = System_String__Format((System_String_o *)StringLiteral_20328/*"icon_{0}"*/, v8, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_40880344(EventId_k__BackingField, sprite, v9, 0);
}