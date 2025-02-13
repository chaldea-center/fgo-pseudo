void __fastcall EventTradeListViewItemDraw___ctor(EventTradeListViewItemDraw_o *this, const MethodInfo *method)
{
  this->fields.countLabelMaxWidth = 30;
  this->fields.NAME_COLOR_DEFAULT = (struct UnityEngine_Color32_o)0xFF6034FFFF496C16LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// attributes: thunk
void __fastcall EventTradeListViewItemDraw__CheckIsSerializeFieldNotNull(
        EventTradeListViewItemDraw_o *this,
        const MethodInfo *method)
{
  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, method);
}


void __fastcall EventTradeListViewItemDraw__DestroyAnimObj(
        EventTradeListViewItemDraw_o *this,
        const MethodInfo *method)
{
  EventTradeListViewItemDraw___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_T__o *sweetsAnimSpriteArray; // x19
  System_Action_object__o *_9__46_0; // x20
  Il2CppObject *v6; // x21
  struct EventTradeListViewItemDraw___c_StaticFields *static_fields; // x0

  if ( (byte_4BD74C1 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_UISprite__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_UISprite___);
    sub_1C21E38(&Method_EventTradeListViewItemDraw___c__DestroyAnimObj_b__46_0__);
    sub_1C21E38(&EventTradeListViewItemDraw___c_TypeInfo);
    byte_4BD74C1 = 1;
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
    _9__46_0 = (System_Action_object__o *)sub_1C22084(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(_9__46_0, v6, Method_EventTradeListViewItemDraw___c__DestroyAnimObj_b__46_0__, 0LL);
    static_fields = EventTradeListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__46_0 = (struct System_Action_UISprite__o *)_9__46_0;
    sub_1C21DDC(&static_fields->__9__46_0, _9__46_0);
  }
  BasicHelper__ForEach_object_(
    sweetsAnimSpriteArray,
    (System_Action_T__o *)_9__46_0,
    (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_UISprite___);
}


int32_t __fastcall EventTradeListViewItemDraw__GetDisplayMode(
        int32_t initMode,
        EventTradeListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( initMode == 3 )
  {
    if ( !item )
      sub_1C22094(initMode, 0LL);
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


void __fastcall EventTradeListViewItemDraw__SetItem(
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
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  EventTradeListViewItem_o *v28; // x8
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x9
  int32_t v30; // w23
  UISprite_o *itemIcon; // x22
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  struct EventTradeGoodsEntity_o *v34; // x8
  System_String_o *name; // x1
  UILabel_o *v36; // x22
  struct EventTradeGoodsEntity_o *v37; // x8
  const MethodInfo *v38; // x2
  int64_t v39; // x23
  void *monitor; // x26
  UILabel_o *restTimeLabel; // x22
  System_String_o *v42; // x23
  void *v43; // x24
  int64_t Time; // x0
  Il2CppObject *RestTime2; // x0
  const MethodInfo *v46; // x2
  unsigned int v47; // w20
  bool v48; // w1
  bool v49; // w1
  UILabel_o *textOnMask; // x20
  int32_t goodsIconId; // [xsp+Ch] [xbp-54h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4BD74BC & 1) == 0 )
  {
    sub_1C21E38(&System_Action_UISprite__TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_UISprite___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&Method_EventTradeListViewItemDraw___c__DisplayClass41_0__SetItem_b__0__);
    sub_1C21E38(&EventTradeListViewItemDraw___c__DisplayClass41_0_TypeInfo);
    sub_1C21E38(&StringLiteral_17842/*"btn_trade_bg_01"*/);
    sub_1C21E38(&StringLiteral_20553/*"icon_{0}"*/);
    sub_1C21E38(&StringLiteral_20693/*"img_item_brank"*/);
    sub_1C21E38(&StringLiteral_20551/*"icon_trade_reward"*/);
    sub_1C21E38(&StringLiteral_13629/*"TRADE_EVENT_BOARD_WITHDRAWALLABEL_BUTTON"*/);
    sub_1C21E38(&StringLiteral_19608/*"event_trade_8048001"*/);
    sub_1C21E38(&StringLiteral_13567/*"TIME_REST2_NONE"*/);
    sub_1C21E38(&StringLiteral_13625/*"TRADE_EVENT_BOARD_RECEIVE_BUTTON"*/);
    sub_1C21E38(&StringLiteral_24467/*"tradegauge_bg"*/);
    sub_1C21E38(&StringLiteral_20518/*"icon_popularitem"*/);
    sub_1C21E38(&StringLiteral_13626/*"TRADE_EVENT_BOARD_REPLENISHMENT_BUTTON"*/);
    sub_1C21E38(&StringLiteral_13655/*"TRADE_EVENT_REST_TIME_LABEL"*/);
    sub_1C21E38(&StringLiteral_19609/*"event_trade_8048002"*/);
    sub_1C21E38(&StringLiteral_13637/*"TRADE_EVENT_END"*/);
    sub_1C21E38(&StringLiteral_24466/*"tradegauge_bar"*/);
    sub_1C21E38(&StringLiteral_17843/*"btn_trade_bg_02"*/);
    sub_1C21E38(&StringLiteral_19610/*"event_trade_8048003"*/);
    sub_1C21E38(&StringLiteral_20548/*"icon_trade_arrow"*/);
    sub_1C21E38(&StringLiteral_13627/*"TRADE_EVENT_BOARD_START_BUTTON"*/);
    sub_1C21E38(&StringLiteral_13628/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/);
    byte_4BD74BC = 1;
  }
  entity = 0LL;
  v7 = (Il2CppObject *)sub_1C22084(EventTradeListViewItemDraw___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_90;
  v7[1].klass = (Il2CppClass *)item;
  v10 = (EventTradeListViewItem_o **)&v7[1];
  sub_1C21DDC(&v7[1], item);
  if ( mode && *v10 )
  {
    EventId_k__BackingField = (*v10)->fields._EventId_k__BackingField;
    tradingBaseSprite = this->fields.tradingBaseSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    nameTextLabel = AtlasManager__SetEventUI_39104396(
                      EventId_k__BackingField,
                      tradingBaseSprite,
                      (System_String_o *)StringLiteral_19609/*"event_trade_8048002"*/,
                      0LL);
    if ( !*v10 )
      goto LABEL_90;
    nameTextLabel = AtlasManager__SetEventUI_39104396(
                      (*v10)->fields._EventId_k__BackingField,
                      this->fields.progressGaugeFront,
                      (System_String_o *)StringLiteral_24466/*"tradegauge_bar"*/,
                      0LL);
    if ( !*v10 )
      goto LABEL_90;
    nameTextLabel = AtlasManager__SetEventUI_39104396(
                      (*v10)->fields._EventId_k__BackingField,
                      this->fields.progressGaugeBack,
                      (System_String_o *)StringLiteral_24467/*"tradegauge_bg"*/,
                      0LL);
    if ( !*v10 )
      goto LABEL_90;
    AtlasManager__SetEventUI_39104396(
      (*v10)->fields._EventId_k__BackingField,
      this->fields.pickupSprite,
      (System_String_o *)StringLiteral_20518/*"icon_popularitem"*/,
      0LL);
    tradeStartLabel = this->fields.tradeStartLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13627/*"TRADE_EVENT_BOARD_START_BUTTON"*/, 0LL);
    if ( !tradeStartLabel )
      goto LABEL_90;
    UILabel__set_text(tradeStartLabel, (System_String_o *)nameTextLabel, 0LL);
    if ( !*v10 )
      goto LABEL_90;
    AtlasManager__SetEventUI_39104396(
      (*v10)->fields._EventId_k__BackingField,
      this->fields.tradeStartButtonSprite,
      (System_String_o *)StringLiteral_17842/*"btn_trade_bg_01"*/,
      0LL);
    rewardReceivedPossibleLabel = this->fields.rewardReceivedPossibleLabel;
    nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13625/*"TRADE_EVENT_BOARD_RECEIVE_BUTTON"*/, 0LL);
    if ( !rewardReceivedPossibleLabel )
      goto LABEL_90;
    UILabel__set_text(rewardReceivedPossibleLabel, (System_String_o *)nameTextLabel, 0LL);
    if ( !*v10 )
      goto LABEL_90;
    AtlasManager__SetEventUI_39104396(
      (*v10)->fields._EventId_k__BackingField,
      this->fields.rewardReceivedPossibleButtonSprite,
      (System_String_o *)StringLiteral_17843/*"btn_trade_bg_02"*/,
      0LL);
    replenishmentLabel = this->fields.replenishmentLabel;
    nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13626/*"TRADE_EVENT_BOARD_REPLENISHMENT_BUTTON"*/, 0LL);
    if ( !replenishmentLabel )
      goto LABEL_90;
    UILabel__set_text(replenishmentLabel, (System_String_o *)nameTextLabel, 0LL);
    if ( !*v10 )
      goto LABEL_90;
    AtlasManager__SetEventUI_39104396(
      (*v10)->fields._EventId_k__BackingField,
      this->fields.replenishmentButtonSprite,
      (System_String_o *)StringLiteral_17842/*"btn_trade_bg_01"*/,
      0LL);
    withdrawalLabel = this->fields.withdrawalLabel;
    nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13629/*"TRADE_EVENT_BOARD_WITHDRAWALLABEL_BUTTON"*/, 0LL);
    if ( !withdrawalLabel )
      goto LABEL_90;
    UILabel__set_text(withdrawalLabel, (System_String_o *)nameTextLabel, 0LL);
    if ( !*v10 )
      goto LABEL_90;
    nameTextLabel = AtlasManager__SetEventUI_39104396(
                      (*v10)->fields._EventId_k__BackingField,
                      this->fields.withdrawalButtonSprite,
                      (System_String_o *)StringLiteral_17842/*"btn_trade_bg_01"*/,
                      0LL);
    if ( !*v10 )
      goto LABEL_90;
    nameTextLabel = AtlasManager__SetEventUI_39104396(
                      (*v10)->fields._EventId_k__BackingField,
                      this->fields.tradeRewardIconSprite,
                      (System_String_o *)StringLiteral_20551/*"icon_trade_reward"*/,
                      0LL);
    if ( !*v10 )
      goto LABEL_90;
    AtlasManager__SetEventUI_39104396(
      (*v10)->fields._EventId_k__BackingField,
      this->fields.tradeArrowIconSprite,
      (System_String_o *)StringLiteral_20548/*"icon_trade_arrow"*/,
      0LL);
    sweetsAnimSpriteArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.sweetsAnimSpriteArray;
    v18 = (System_Action_object__o *)sub_1C22084(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(v18, v7, Method_EventTradeListViewItemDraw___c__DisplayClass41_0__SetItem_b__0__, 0LL);
    BasicHelper__ForEach_object_(
      sweetsAnimSpriteArray,
      (System_Action_T__o *)v18,
      (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_UISprite___);
    klass = v7[1].klass;
    if ( !klass )
      goto LABEL_90;
    EventTradeListViewItemDraw__SetReleaseDisplayObject(this, BYTE4(klass->_1.properties), v19);
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
        nameTextLabel = AtlasManager__SetEventUI_39104396(v23, baseSprite, (System_String_o *)StringLiteral_19608/*"event_trade_8048001"*/, 0LL);
        v28 = *v10;
        if ( !*v10 )
          goto LABEL_90;
        TradeGoodsEntity_k__BackingField = v28->fields._TradeGoodsEntity_k__BackingField;
        if ( !TradeGoodsEntity_k__BackingField )
          goto LABEL_90;
        v30 = v28->fields._EventId_k__BackingField;
        itemIcon = this->fields.itemIcon;
        goodsIconId = TradeGoodsEntity_k__BackingField->fields.goodsIconId;
        v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &goodsIconId, v25, v26, v27);
        v33 = System_String__Format((System_String_o *)StringLiteral_20553/*"icon_{0}"*/, v32, 0LL);
        nameTextLabel = AtlasManager__SetEventUI_39104396(v30, itemIcon, v33, 0LL);
        if ( !*v10 )
          goto LABEL_90;
        v34 = (*v10)->fields._TradeGoodsEntity_k__BackingField;
        if ( !v34 )
          goto LABEL_90;
        nameTextLabel = (int64_t)this->fields.nameTextLabel;
        if ( !nameTextLabel )
          goto LABEL_90;
        name = v34->fields.name;
        goto LABEL_42;
      }
    }
    nameTextLabel = AtlasManager__SetEventUI_39104396(v23, baseSprite, (System_String_o *)StringLiteral_19610/*"event_trade_8048003"*/, 0LL);
    if ( !*v10 )
      goto LABEL_90;
    AtlasManager__SetEventUI_39104396(
      (*v10)->fields._EventId_k__BackingField,
      this->fields.itemIcon,
      (System_String_o *)StringLiteral_20693/*"img_item_brank"*/,
      0LL);
    v36 = (UILabel_o *)this->fields.nameTextLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13628/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, 0LL);
    if ( !v36 )
      goto LABEL_90;
    UILabel__set_text(v36, (System_String_o *)nameTextLabel, 0LL);
    if ( !*v10 )
      goto LABEL_90;
    v37 = (*v10)->fields._TradeGoodsEntity_k__BackingField;
    if ( !v37 )
      goto LABEL_90;
    nameTextLabel = (int64_t)this->fields.textOnMask;
    if ( !nameTextLabel )
      goto LABEL_90;
    name = v37->fields.closedMessage;
LABEL_42:
    UILabel__set_text((UILabel_o *)nameTextLabel, name, 0LL);
    if ( !*v10 )
      goto LABEL_90;
    if ( (*v10)->fields._EventId_k__BackingField >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      nameTextLabel = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !*v10 || !nameTextLabel )
        goto LABEL_90;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)nameTextLabel,
             &entity,
             (*v10)->fields._EventId_k__BackingField,
             (const MethodInfo_325BE14 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        nameTextLabel = NetworkManager__getTime(0LL);
        if ( !entity )
          goto LABEL_90;
        v39 = nameTextLabel;
        monitor = entity[6].monitor;
        restTimeLabel = this->fields.restTimeLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v39 >= (__int64)monitor )
        {
          nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13567/*"TIME_REST2_NONE"*/, 0LL);
        }
        else
        {
          nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13655/*"TRADE_EVENT_REST_TIME_LABEL"*/, 0LL);
          if ( !entity )
            goto LABEL_90;
          v42 = (System_String_o *)nameTextLabel;
          v43 = entity[6].monitor;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Time = NetworkManager__getTime(0LL);
          RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2((int64_t)v43, Time, 0LL);
          nameTextLabel = (int64_t)System_String__Format(v42, RestTime2, 0LL);
        }
        v9 = (const MethodInfo *)nameTextLabel;
        if ( !restTimeLabel )
LABEL_90:
          sub_1C22094(nameTextLabel, v9);
        UILabel__set_text(restTimeLabel, (System_String_o *)nameTextLabel, 0LL);
      }
    }
    EventTradeListViewItemDraw__SetPriceIconText(this, *v10, v38);
    EventTradeListViewItemDraw__SetRewardIconText(this, *v10, v46);
    v47 = mode & 0xFFFFFFFE;
    if ( v47 == 4 )
    {
      nameTextLabel = (int64_t)this->fields.tradingBaseSprite;
      if ( !nameTextLabel )
        goto LABEL_90;
      nameTextLabel = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameTextLabel, 0LL);
      if ( !nameTextLabel )
        goto LABEL_90;
      v48 = 1;
    }
    else
    {
      if ( v47 != 2 )
        goto LABEL_71;
      nameTextLabel = (int64_t)this->fields.tradingBaseSprite;
      if ( !nameTextLabel )
        goto LABEL_90;
      nameTextLabel = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameTextLabel, 0LL);
      if ( !nameTextLabel )
        goto LABEL_90;
      v48 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameTextLabel, v48, 0LL);
LABEL_71:
    nameTextLabel = (int64_t)*v10;
    if ( *v10 )
    {
      if ( !EventTradeListViewItem__get_IsEventEnd((EventTradeListViewItem_o *)nameTextLabel, v9) )
        return;
      if ( v47 == 4 )
      {
        nameTextLabel = (int64_t)this->fields.textOnMask;
        if ( nameTextLabel )
        {
          UILabel__set_text((UILabel_o *)nameTextLabel, string_TypeInfo->static_fields->Empty, 0LL);
          nameTextLabel = (int64_t)this->fields.maskSprite;
          if ( nameTextLabel )
          {
            nameTextLabel = (int64_t)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)nameTextLabel,
                                       0LL);
            if ( nameTextLabel )
            {
              v49 = 0;
LABEL_88:
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameTextLabel, v49, 0LL);
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
          nameTextLabel = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameTextLabel, 0LL);
          if ( nameTextLabel )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameTextLabel, 0, 0LL);
            textOnMask = this->fields.textOnMask;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13637/*"TRADE_EVENT_END"*/, 0LL);
            if ( textOnMask )
            {
              UILabel__set_text(textOnMask, (System_String_o *)nameTextLabel, 0LL);
              nameTextLabel = (int64_t)this->fields.textOnMask;
              if ( nameTextLabel )
              {
                nameTextLabel = (int64_t)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)nameTextLabel,
                                           0LL);
                if ( nameTextLabel )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameTextLabel, 1, 0LL);
                  nameTextLabel = (int64_t)this->fields.maskSprite;
                  if ( nameTextLabel )
                  {
                    nameTextLabel = (int64_t)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)nameTextLabel,
                                               0LL);
                    if ( nameTextLabel )
                    {
                      v49 = 1;
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


void __fastcall EventTradeListViewItemDraw__SetPriceIconText(
        EventTradeListViewItemDraw_o *this,
        EventTradeListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Component_o *priceInfoSingle; // x0
  struct CommonConsumeEntity_array *CommonConsumeEntityArray_k__BackingField; // x9
  il2cpp_array_size_t max_length; // w9
  UnityEngine_Object_o *priceInfoTriple; // x20

  if ( (byte_4BD74BD & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD74BD = 1;
  }
  priceInfoSingle = (UnityEngine_Component_o *)this->fields.priceInfoSingle;
  if ( !priceInfoSingle )
    goto LABEL_24;
  priceInfoSingle = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(priceInfoSingle, 0LL);
  if ( !priceInfoSingle )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfoSingle, 0, 0LL);
  priceInfoSingle = (UnityEngine_Component_o *)this->fields.priceInfoDouble;
  if ( !priceInfoSingle )
    goto LABEL_24;
  priceInfoSingle = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(priceInfoSingle, 0LL);
  if ( !priceInfoSingle )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfoSingle, 0, 0LL);
  priceInfoSingle = (UnityEngine_Component_o *)this->fields.priceInfoTriple;
  if ( !priceInfoSingle )
    goto LABEL_24;
  priceInfoSingle = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(priceInfoSingle, 0LL);
  if ( !priceInfoSingle )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfoSingle, 0, 0LL);
  if ( !item )
    goto LABEL_24;
  CommonConsumeEntityArray_k__BackingField = item->fields._CommonConsumeEntityArray_k__BackingField;
  if ( !CommonConsumeEntityArray_k__BackingField )
  {
LABEL_15:
    priceInfoTriple = 0LL;
    goto LABEL_18;
  }
  max_length = CommonConsumeEntityArray_k__BackingField->max_length;
  switch ( max_length )
  {
    case 3u:
      priceInfoTriple = (UnityEngine_Object_o *)this->fields.priceInfoTriple;
      break;
    case 2u:
      priceInfoTriple = (UnityEngine_Object_o *)this->fields.priceInfoDouble;
      break;
    case 1u:
      priceInfoTriple = (UnityEngine_Object_o *)this->fields.priceInfoSingle;
      break;
    default:
      goto LABEL_15;
  }
LABEL_18:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  priceInfoSingle = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(priceInfoTriple, 0LL, 0LL);
  if ( ((unsigned __int8)priceInfoSingle & 1) == 0 )
  {
    if ( priceInfoTriple )
    {
      priceInfoSingle = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)priceInfoTriple,
                                                     0LL);
      if ( priceInfoSingle )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)priceInfoSingle, 1, 0LL);
        EventTradePriceInfo__SetPriceInfo(
          (EventTradePriceInfo_o *)priceInfoTriple,
          item->fields._CommonConsumeEntityArray_k__BackingField,
          1,
          0LL);
        return;
      }
    }
LABEL_24:
    sub_1C22094(priceInfoSingle, item);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeListViewItemDraw__SetReleaseDisplayObject(
        EventTradeListViewItemDraw_o *this,
        bool isRelease,
        const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0

  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_28;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, !isRelease, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.textOnMask;
  if ( !maskSprite )
    goto LABEL_28;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, !isRelease, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.tradingStateSprite;
  if ( !maskSprite )
    goto LABEL_28;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.nameTextLabel;
  if ( !maskSprite )
    goto LABEL_28;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.tradeCompleteLabel;
  if ( !maskSprite )
    goto LABEL_28;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.pickupSprite;
  if ( !maskSprite )
    goto LABEL_28;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.rewardItemIcon;
  if ( !maskSprite )
    goto LABEL_28;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.tradingBaseSprite;
  if ( !maskSprite )
    goto LABEL_28;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_28;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_28;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.tradeStartButtonSprite;
  if ( !maskSprite )
    goto LABEL_28;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0LL);
  if ( !maskSprite
    || (maskSprite = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)maskSprite,
                                                  0LL)) == 0LL
    || (maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0LL),
        (maskSprite = (UnityEngine_Component_o *)this->fields.restTimeLabel) == 0LL)
    || (maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0LL)) == 0LL
    || (maskSprite = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)maskSprite,
                                                  0LL)) == 0LL
    || (maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL)) == 0LL )
  {
LABEL_28:
    sub_1C22094(maskSprite, isRelease);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0LL);
}


void __fastcall EventTradeListViewItemDraw__SetRewardIconText(
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

  if ( (byte_4BD74BE & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_426/*"#,0"*/);
    sub_1C21E38(&StringLiteral_13639/*"TRADE_EVENT_HAVE_NUM"*/);
    sub_1C21E38(&StringLiteral_1212/*"0"*/);
    byte_4BD74BE = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !item )
    goto LABEL_32;
  TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
  if ( !TradeGoodsEntity_k__BackingField || !Master_object )
    goto LABEL_32;
  GiftListById = GiftMaster__GetGiftListById(Master_object, TradeGoodsEntity_k__BackingField->fields.giftId, 0LL);
  v9 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  Master_object = (GiftMaster_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = (GiftMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !GiftListById )
    goto LABEL_32;
  if ( !GiftListById->max_length )
    goto LABEL_33;
  v10 = GiftListById->m_Items[0];
  if ( !v10 || !v9 )
    goto LABEL_32;
  Master_object = (GiftMaster_o *)UserItemMaster__TryGetEntity(
                                    (UserItemMaster_o *)v9,
                                    &entity,
                                    *(_QWORD *)&Master_object[2].fields._MasterName_k__BackingField[2].fields,
                                    v10->fields.objectId,
                                    0LL);
  rewardNumTextLabel = this->fields.rewardNumTextLabel;
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_32;
    Master_object = (GiftMaster_o *)System_Int32__ToString_63921084(
                                      (int)entity + 28,
                                      (System_String_o *)StringLiteral_426/*"#,0"*/,
                                      0LL);
    if ( !rewardNumTextLabel )
      goto LABEL_32;
    UILabel__set_text(rewardNumTextLabel, (System_String_o *)Master_object, 0LL);
    Master_object = (GiftMaster_o *)this->fields.rewardNumTextLabel;
    if ( !Master_object )
      goto LABEL_32;
    UILabel__SetCondensedScale((UILabel_o *)Master_object, this->fields.countLabelMaxWidth, 0, 0LL);
  }
  else
  {
    if ( !rewardNumTextLabel )
      goto LABEL_32;
    UILabel__set_text(this->fields.rewardNumTextLabel, (System_String_o *)StringLiteral_1212/*"0"*/, 0LL);
  }
  if ( !GiftListById->max_length )
LABEL_33:
    sub_1C2209C(Master_object, v6);
  v12 = GiftListById->m_Items[0];
  if ( !v12 )
    goto LABEL_32;
  Master_object = (GiftMaster_o *)this->fields.rewardItemIcon;
  if ( !Master_object )
    goto LABEL_32;
  ItemIconComponent__SetItem((ItemIconComponent_o *)Master_object, v12->fields.objectId, -1, 1, 0LL);
  rewardNumTitleLabel = this->fields.rewardNumTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (GiftMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13639/*"TRADE_EVENT_HAVE_NUM"*/, 0LL);
  if ( !rewardNumTitleLabel )
LABEL_32:
    sub_1C22094(Master_object, v6);
  UILabel__set_text(rewardNumTitleLabel, (System_String_o *)Master_object, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeListViewItemDraw__UpdateItem(
        EventTradeListViewItemDraw_o *this,
        EventTradeListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 pickupSprite; // x0
  UnityEngine_GameObject_o *v8; // x22
  int32_t v9; // w23
  unsigned int v10; // w8
  const MethodInfo *v11; // x1
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  int v13; // w21
  int maxTradeNum; // s8
  const MethodInfo *v15; // x2
  UILabel_o *progressLabel; // x21
  System_String_o *v17; // x22
  const MethodInfo *v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  struct EventTradeInfo_o *v25; // x8
  Il2CppObject *v26; // x23
  Il2CppObject *v27; // x0
  struct EventTradeInfo_o *v28; // x8
  UILabel_o *rewardAvailableNumTextLabel; // x21
  System_String_o *v30; // x22
  const MethodInfo *v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x0
  unsigned int rgba; // w8
  struct EventTradeGoodsEntity_o *v37; // x8
  EventTradePickupMaster_o *v38; // x21
  int32_t eventId; // w22
  int32_t id; // w23
  int32_t *p_tradeTimeRate; // x8
  struct EventTradeGoodsEntity_o *v42; // x9
  EventTradePickupMaster_c *v43; // x0
  int32_t v44; // w21
  int32_t tradeTime; // w22
  int DEFAULT_EVENT_TRADE_TIME_RATE; // w23
  double v47; // d8
  int64_t v48; // x0
  UILabel_o *timeRequiredTrade; // x21
  int64_t v50; // x22
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x1
  _BOOL4 v53; // w8
  bool v54; // w1
  const MethodInfo *v55; // x1
  _BOOL4 v56; // w8
  struct EventTradeInfo_o *v57; // x8
  int64_t startedAt; // x21
  EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x22
  int32_t tradeNum; // w23
  int64_t TradeFinishTime; // x22
  int64_t v62; // x21
  const MethodInfo *v63; // x1
  UILabel_o *tradeCompleteLabel; // x22
  UILabel_o *v65; // x22
  int32_t EventId_k__BackingField; // w20
  UISprite_o *tradingStateSprite; // x22
  __int64 *v68; // x8
  UILabel_o *timeLeftLabel; // x22
  float v70; // s1
  float v71; // s2
  float v72; // s0
  float v73; // s3
  int32_t v74; // [xsp+8h] [xbp-58h] BYREF
  int32_t NowTradeNum; // [xsp+Ch] [xbp-54h] BYREF
  EventTradePickupEntity_o *pickupEntity; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Color_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v78; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BD74BF & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&System_Convert_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_EventTradePickupMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&EventTradePickupMaster_TypeInfo);
    sub_1C21E38(&EventTradeTimeCalculation_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&StringLiteral_20550/*"icon_trade_intrade"*/);
    sub_1C21E38(&StringLiteral_25519/*"{0}:{1:D2}:{2:D2}"*/);
    sub_1C21E38(&StringLiteral_20549/*"icon_trade_compleate"*/);
    sub_1C21E38(&StringLiteral_13656/*"TRADE_EVENT_REWARD_AVAILABLE_NUM_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_13650/*"TRADE_EVENT_PROGRESS_NUM"*/);
    sub_1C21E38(&StringLiteral_13664/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/);
    sub_1C21E38(&StringLiteral_13663/*"TRADE_EVENT_TRADE_COMPLETE"*/);
    byte_4BD74BF = 1;
  }
  pickupEntity = 0LL;
  if ( item && mode && item->fields._TradeGoodsEntity_k__BackingField && item->fields._IsRelease_k__BackingField )
  {
    pickupSprite = (__int64)this->fields.pickupSprite;
    if ( pickupSprite )
    {
      pickupSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pickupSprite, 0LL);
      if ( item->fields._TradeGoodsEntity_k__BackingField )
      {
        v8 = (UnityEngine_GameObject_o *)pickupSprite;
        pickupSprite = EventTradeGoodsEntity__GetPickUpRateNow(item->fields._TradeGoodsEntity_k__BackingField, 0LL);
        v9 = pickupSprite;
        if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
        if ( v8 )
        {
          UnityEngine_GameObject__SetActive(
            v8,
            v9 < EventTradePickupMaster_TypeInfo->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE,
            0LL);
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
              pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)pickupSprite,
                                        0LL);
              if ( pickupSprite )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 1, 0LL);
                pickupSprite = (__int64)this->fields.nameTextLabel;
                if ( pickupSprite )
                {
                  v10 = *(_DWORD *)&this->fields.NAME_COLOR_DEFAULT.fields.r;
                  v77.fields.a = (float)HIBYTE(v10) / 255.0;
                  v77.fields.b = (float)BYTE2(v10) / 255.0;
                  v77.fields.g = (float)BYTE1(v10) / 255.0;
                  v77.fields.r = (float)(unsigned __int8)v10 / 255.0;
                  UILabel__set_effectColor((UILabel_o *)pickupSprite, v77, 0LL);
                  pickupSprite = EventTradeListViewItem__get_NowTradeNum(item, v11);
                  TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
                  if ( TradeInfo_k__BackingField )
                  {
                    v13 = pickupSprite;
                    pickupSprite = (__int64)this->fields.progressBar;
                    if ( pickupSprite )
                    {
                      maxTradeNum = TradeInfo_k__BackingField->fields.maxTradeNum;
                      pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)pickupSprite,
                                                0LL);
                      if ( pickupSprite )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 1, 0LL);
                        pickupSprite = (__int64)this->fields.progressBar;
                        if ( pickupSprite )
                        {
                          UIProgressBar__set_value(
                            (UIProgressBar_o *)pickupSprite,
                            (float)v13 / (float)maxTradeNum,
                            0LL);
                          EventTradeListViewItemDraw__UpdateSweetsAnim(this, item, v15);
                          progressLabel = this->fields.progressLabel;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v17 = LocalizationManager__Get((System_String_o *)StringLiteral_13650/*"TRADE_EVENT_PROGRESS_NUM"*/, 0LL);
                          NowTradeNum = EventTradeListViewItem__get_NowTradeNum(item, v18);
                          pickupSprite = j_il2cpp_value_box_0(int_TypeInfo, &NowTradeNum, v19, v20, v21);
                          v25 = item->fields._TradeInfo_k__BackingField;
                          if ( v25 )
                          {
                            v26 = (Il2CppObject *)pickupSprite;
                            v74 = v25->fields.maxTradeNum;
                            v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74, v22, v23, v24);
                            pickupSprite = (__int64)System_String__Format_63129848(v17, v26, v27, 0LL);
                            if ( progressLabel )
                            {
                              UILabel__set_text(progressLabel, (System_String_o *)pickupSprite, 0LL);
                              pickupSprite = (__int64)this->fields.tradeStartButtonSprite;
                              if ( pickupSprite )
                              {
                                pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)pickupSprite,
                                                          0LL);
                                if ( pickupSprite )
                                {
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 0, 0LL);
                                  v28 = item->fields._TradeInfo_k__BackingField;
                                  if ( v28
                                    && (v28->fields.getNum >= 1
                                     || EventTradeListViewItem__get_NowCompleteNum(item, (const MethodInfo *)item) >= 1) )
                                  {
                                    ActionExtensions__Call(
                                      item->fields._UpdateReceiveAllButtonState_k__BackingField,
                                      0LL);
                                    pickupSprite = (__int64)this->fields.rewardReceivedPossibleButtonSprite;
                                    if ( !pickupSprite )
                                      goto LABEL_130;
                                    pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)pickupSprite,
                                                              0LL);
                                    if ( !pickupSprite )
                                      goto LABEL_130;
                                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 1, 0LL);
                                    pickupSprite = (__int64)this->fields.replenishmentButtonSprite;
                                    if ( !pickupSprite )
                                      goto LABEL_130;
                                    pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)pickupSprite,
                                                              0LL);
                                    if ( !pickupSprite )
                                      goto LABEL_130;
                                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 0, 0LL);
                                    pickupSprite = (__int64)this->fields.withdrawalButtonSprite;
                                    if ( !pickupSprite )
                                      goto LABEL_130;
                                    pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)pickupSprite,
                                                              0LL);
                                    if ( !pickupSprite )
                                      goto LABEL_130;
                                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 0, 0LL);
                                    rewardAvailableNumTextLabel = this->fields.rewardAvailableNumTextLabel;
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_13656/*"TRADE_EVENT_REWARD_AVAILABLE_NUM_MESSAGE"*/, 0LL);
                                    NowTradeNum = EventTradeListViewItem__get_NowCompleteNum(item, v31);
                                    v35 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                            int_TypeInfo,
                                                            &NowTradeNum,
                                                            v32,
                                                            v33,
                                                            v34);
                                    pickupSprite = (__int64)System_String__Format(v30, v35, 0LL);
                                    if ( !rewardAvailableNumTextLabel )
                                      goto LABEL_130;
                                    UILabel__set_text(rewardAvailableNumTextLabel, (System_String_o *)pickupSprite, 0LL);
                                  }
                                  else
                                  {
                                    pickupSprite = (__int64)this->fields.rewardReceivedPossibleButtonSprite;
                                    if ( !pickupSprite )
                                      goto LABEL_130;
                                    pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)pickupSprite,
                                                              0LL);
                                    if ( !pickupSprite )
                                      goto LABEL_130;
                                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 0, 0LL);
                                    pickupSprite = (__int64)this->fields.replenishmentButtonSprite;
                                    if ( !pickupSprite )
                                      goto LABEL_130;
                                    pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)pickupSprite,
                                                              0LL);
                                    if ( !pickupSprite )
                                      goto LABEL_130;
                                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 1, 0LL);
                                    pickupSprite = (__int64)this->fields.withdrawalButtonSprite;
                                    if ( !pickupSprite )
                                      goto LABEL_130;
                                    pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)pickupSprite,
                                                              0LL);
                                    if ( !pickupSprite )
                                      goto LABEL_130;
                                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 1, 0LL);
                                    pickupSprite = (__int64)this->fields.rewardAvailableNumTextLabel;
                                    if ( !pickupSprite )
                                      goto LABEL_130;
                                    UILabel__set_text(
                                      (UILabel_o *)pickupSprite,
                                      string_TypeInfo->static_fields->Empty,
                                      0LL);
                                    if ( EventTradeListViewItem__get_IsRefillable(item, v55) )
                                      v56 = !EventTradeListViewItem__get_IsEventEnd(item, (const MethodInfo *)item);
                                    else
                                      LOBYTE(v56) = 0;
                                    pickupSprite = (__int64)this->fields.replenishmentButton;
                                    if ( !pickupSprite )
                                      goto LABEL_130;
                                    pickupSprite = (*(__int64 (__fastcall **)(__int64, _BOOL4, _QWORD))(*(_QWORD *)pickupSprite + 392LL))(
                                                     pickupSprite,
                                                     v56,
                                                     *(_QWORD *)(*(_QWORD *)pickupSprite + 400LL));
                                  }
                                  v57 = item->fields._TradeInfo_k__BackingField;
                                  if ( !v57 )
                                    goto LABEL_130;
                                  startedAt = v57->fields.startedAt;
                                  TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
                                  tradeNum = v57->fields.tradeNum;
                                  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
                                  TradeFinishTime = EventTradeTimeCalculation__GetTradeFinishTime(
                                                      TradeGoodsEntity_k__BackingField,
                                                      tradeNum,
                                                      startedAt,
                                                      0LL);
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                  v62 = TradeFinishTime + startedAt - NetworkManager__getTime(0LL);
                                  pickupSprite = EventTradeListViewItem__get_NowTradeNum(item, v63);
                                  tradeCompleteLabel = (UILabel_o *)this->fields.tradeCompleteLabel;
                                  if ( (int)pickupSprite <= 0 )
                                  {
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    pickupSprite = (__int64)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_13663/*"TRADE_EVENT_TRADE_COMPLETE"*/,
                                                              0LL);
                                    if ( !tradeCompleteLabel )
                                      goto LABEL_130;
                                    UILabel__set_text(tradeCompleteLabel, (System_String_o *)pickupSprite, 0LL);
                                    timeLeftLabel = this->fields.timeLeftLabel;
                                    pickupSprite = (__int64)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_13664/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/,
                                                              0LL);
                                    if ( !timeLeftLabel )
                                      goto LABEL_130;
                                    UILabel__set_text(timeLeftLabel, (System_String_o *)pickupSprite, 0LL);
                                    EventId_k__BackingField = item->fields._EventId_k__BackingField;
                                    tradingStateSprite = this->fields.tradingStateSprite;
                                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                    v68 = &StringLiteral_20549/*"icon_trade_compleate"*/;
                                  }
                                  else
                                  {
                                    if ( !tradeCompleteLabel )
                                      goto LABEL_130;
                                    UILabel__set_text(
                                      (UILabel_o *)this->fields.tradeCompleteLabel,
                                      string_TypeInfo->static_fields->Empty,
                                      0LL);
                                    v65 = this->fields.timeLeftLabel;
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    pickupSprite = (__int64)LocalizationManager__GetRestTimeInFormat(
                                                              v62,
                                                              0LL,
                                                              (System_String_o *)StringLiteral_25519/*"{0}:{1:D2}:{2:D2}"*/,
                                                              0LL);
                                    if ( !v65 )
                                      goto LABEL_130;
                                    UILabel__set_text(v65, (System_String_o *)pickupSprite, 0LL);
                                    EventId_k__BackingField = item->fields._EventId_k__BackingField;
                                    tradingStateSprite = this->fields.tradingStateSprite;
                                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                    v68 = &StringLiteral_20550/*"icon_trade_intrade"*/;
                                  }
                                  AtlasManager__SetEventUI_39104396(
                                    EventId_k__BackingField,
                                    tradingStateSprite,
                                    (System_String_o *)*v68,
                                    0LL);
                                  v70 = 0.92157;
                                  pickupSprite = (__int64)this->fields.timeLeftLabel;
                                  if ( v62 >= 3600 )
                                    v71 = 0.015686;
                                  else
                                    v71 = 0.0;
                                  if ( v62 < 3600 )
                                    v70 = 0.0;
                                  if ( pickupSprite )
                                  {
                                    v72 = 1.0;
                                    v73 = 1.0;
                                    UIWidget__set_color(
                                      (UIWidget_o *)pickupSprite,
                                      *(UnityEngine_Color_o *)(&v70 - 1),
                                      0LL);
                                    pickupSprite = (__int64)this->fields.tradingStateSprite;
                                    if ( pickupSprite )
                                    {
                                      pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)pickupSprite,
                                                                0LL);
                                      if ( pickupSprite )
                                      {
                                        v54 = 1;
                                        goto LABEL_128;
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
              UILabel__set_text((UILabel_o *)pickupSprite, string_TypeInfo->static_fields->Empty, 0LL);
              pickupSprite = (__int64)this->fields.tradeCompleteLabel;
              if ( pickupSprite )
              {
                UILabel__set_text((UILabel_o *)pickupSprite, string_TypeInfo->static_fields->Empty, 0LL);
                pickupSprite = (__int64)this->fields.rewardAvailableNumTextLabel;
                if ( pickupSprite )
                {
                  UILabel__set_text((UILabel_o *)pickupSprite, string_TypeInfo->static_fields->Empty, 0LL);
                  pickupSprite = (__int64)this->fields.tradingBaseSprite;
                  if ( pickupSprite )
                  {
                    pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)pickupSprite,
                                              0LL);
                    if ( pickupSprite )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 0, 0LL);
                      pickupSprite = (__int64)this->fields.nameTextLabel;
                      if ( pickupSprite )
                      {
                        rgba = this->fields.NAME_COLOR_DEFAULT.fields.rgba;
                        v78.fields.a = (float)HIBYTE(rgba) / 255.0;
                        v78.fields.b = (float)BYTE2(rgba) / 255.0;
                        v78.fields.g = (float)BYTE1(rgba) / 255.0;
                        v78.fields.r = (float)(unsigned __int8)rgba / 255.0;
                        UILabel__set_effectColor((UILabel_o *)pickupSprite, v78, 0LL);
                        pickupSprite = (__int64)this->fields.tradeStartButtonSprite;
                        if ( pickupSprite )
                        {
                          pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)pickupSprite,
                                                    0LL);
                          if ( pickupSprite )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 1, 0LL);
                            pickupSprite = (__int64)this->fields.rewardReceivedPossibleButtonSprite;
                            if ( pickupSprite )
                            {
                              pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)pickupSprite,
                                                        0LL);
                              if ( pickupSprite )
                              {
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 0, 0LL);
                                pickupSprite = (__int64)this->fields.replenishmentButtonSprite;
                                if ( pickupSprite )
                                {
                                  pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)pickupSprite,
                                                            0LL);
                                  if ( pickupSprite )
                                  {
                                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pickupSprite, 0, 0LL);
                                    pickupSprite = (__int64)this->fields.withdrawalButtonSprite;
                                    if ( pickupSprite )
                                    {
                                      pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)pickupSprite,
                                                                0LL);
                                      if ( pickupSprite )
                                      {
                                        UnityEngine_GameObject__SetActive(
                                          (UnityEngine_GameObject_o *)pickupSprite,
                                          0,
                                          0LL);
                                        pickupSprite = (__int64)this->fields.progressBar;
                                        if ( pickupSprite )
                                        {
                                          pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)pickupSprite,
                                                                    0LL);
                                          if ( pickupSprite )
                                          {
                                            UnityEngine_GameObject__SetActive(
                                              (UnityEngine_GameObject_o *)pickupSprite,
                                              0,
                                              0LL);
                                            if ( !DataManager_TypeInfo->_2.cctor_finished )
                                              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                            pickupSprite = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventTradePickupMaster___);
                                            v37 = item->fields._TradeGoodsEntity_k__BackingField;
                                            if ( v37 )
                                            {
                                              v38 = (EventTradePickupMaster_o *)pickupSprite;
                                              id = v37->fields.id;
                                              eventId = v37->fields.eventId;
                                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                              pickupSprite = NetworkManager__getTime(0LL);
                                              if ( v38 )
                                              {
                                                pickupSprite = EventTradePickupMaster__TryGetEntityTargetTime(
                                                                 v38,
                                                                 &pickupEntity,
                                                                 id,
                                                                 eventId,
                                                                 pickupSprite,
                                                                 0LL);
                                                if ( (pickupSprite & 1) != 0 )
                                                {
                                                  if ( !pickupEntity )
                                                    goto LABEL_130;
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
                                                v42 = item->fields._TradeGoodsEntity_k__BackingField;
                                                if ( v42 )
                                                {
                                                  v43 = EventTradePickupMaster_TypeInfo;
                                                  v44 = *p_tradeTimeRate;
                                                  tradeTime = v42->fields.tradeTime;
                                                  if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
                                                  {
                                                    j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
                                                    v43 = EventTradePickupMaster_TypeInfo;
                                                  }
                                                  DEFAULT_EVENT_TRADE_TIME_RATE = v43->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
                                                  if ( !System_Math_TypeInfo->_2.cctor_finished )
                                                    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                                                  v47 = ceil(
                                                          (double)(tradeTime * v44)
                                                        / (double)DEFAULT_EVENT_TRADE_TIME_RATE);
                                                  if ( !System_Convert_TypeInfo->_2.cctor_finished )
                                                    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
                                                  v48 = System_Convert__ToInt64_63774376(v47, 0LL);
                                                  timeRequiredTrade = this->fields.timeRequiredTrade;
                                                  v50 = v48;
                                                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                  pickupSprite = (__int64)LocalizationManager__GetRestTimeInFormat(
                                                                            v50,
                                                                            0LL,
                                                                            (System_String_o *)StringLiteral_25519/*"{0}:{1:D2}:{2:D2}"*/,
                                                                            0LL);
                                                  if ( timeRequiredTrade )
                                                  {
                                                    UILabel__set_text(
                                                      timeRequiredTrade,
                                                      (System_String_o *)pickupSprite,
                                                      0LL);
                                                    EventTradeListViewItemDraw__DestroyAnimObj(this, v51);
                                                    if ( EventTradeListViewItem__get_IsBuyAble(item, v52) )
                                                    {
                                                      LOBYTE(v53) = item->fields._IsRelease_k__BackingField;
                                                      if ( v53 )
                                                        v53 = !EventTradeListViewItem__get_IsEventEnd(
                                                                 item,
                                                                 (const MethodInfo *)item);
                                                    }
                                                    else
                                                    {
                                                      LOBYTE(v53) = 0;
                                                    }
                                                    pickupSprite = (__int64)this->fields.tradeStartButton;
                                                    if ( pickupSprite )
                                                    {
                                                      (*(void (__fastcall **)(__int64, _BOOL4, _QWORD))(*(_QWORD *)pickupSprite + 392LL))(
                                                        pickupSprite,
                                                        v53,
                                                        *(_QWORD *)(*(_QWORD *)pickupSprite + 400LL));
                                                      pickupSprite = (__int64)this->fields.tradingStateSprite;
                                                      if ( pickupSprite )
                                                      {
                                                        pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                                                  (UnityEngine_Component_o *)pickupSprite,
                                                                                  0LL);
                                                        if ( pickupSprite )
                                                        {
                                                          v54 = 0;
LABEL_128:
                                                          UnityEngine_GameObject__SetActive(
                                                            (UnityEngine_GameObject_o *)pickupSprite,
                                                            v54,
                                                            0LL);
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
LABEL_130:
    sub_1C22094(pickupSprite, item);
  }
}


void __fastcall EventTradeListViewItemDraw__UpdateSweetsAnim(
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
  const MethodInfo *v11; // x1
  int v12; // w21
  struct UISprite_array *v13; // x8
  const MethodInfo *v14; // x1

  if ( (byte_4BD74C0 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_UISprite__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_UISprite___);
    sub_1C21E38(&Method_EventTradeListViewItemDraw___c__UpdateSweetsAnim_b__45_0__);
    sub_1C21E38(&EventTradeListViewItemDraw___c_TypeInfo);
    byte_4BD74C0 = 1;
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
    _9__45_0 = (System_Action_object__o *)sub_1C22084(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(_9__45_0, v8, Method_EventTradeListViewItemDraw___c__UpdateSweetsAnim_b__45_0__, 0LL);
    static_fields = EventTradeListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__45_0 = (struct System_Action_UISprite__o *)_9__45_0;
    sub_1C21DDC(&static_fields->__9__45_0, _9__45_0);
  }
  BasicHelper__ForEach_object_(
    sweetsAnimSpriteArray,
    (System_Action_T__o *)_9__45_0,
    (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_UISprite___);
  if ( !item )
    goto LABEL_18;
  NowTradeNum = (UnityEngine_GameObject_o *)EventTradeListViewItem__get_NowTradeNum(item, v11);
  if ( (int)NowTradeNum >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = this->fields.sweetsAnimSpriteArray;
      if ( !v13 )
        break;
      if ( v12 >= v13->max_length )
        sub_1C2209C(NowTradeNum, v11);
      NowTradeNum = (UnityEngine_GameObject_o *)v13->m_Items[v12];
      if ( !NowTradeNum )
        break;
      NowTradeNum = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NowTradeNum, 0LL);
      if ( !NowTradeNum )
        break;
      UnityEngine_GameObject__SetActive(NowTradeNum, 1, 0LL);
      ++v12;
      NowTradeNum = (UnityEngine_GameObject_o *)EventTradeListViewItem__get_NowTradeNum(item, v14);
      if ( v12 >= (int)NowTradeNum )
        return;
    }
LABEL_18:
    sub_1C22094(NowTradeNum, v11);
  }
}


void __fastcall EventTradeListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4BD74C2 & 1) == 0 )
  {
    sub_1C21E38(&EventTradeListViewItemDraw___c_TypeInfo);
    byte_4BD74C2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(EventTradeListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventTradeListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct EventTradeListViewItemDraw___c_o *)v1;
  sub_1C21DDC(EventTradeListViewItemDraw___c_TypeInfo->static_fields, v1);
}


void __fastcall EventTradeListViewItemDraw___c___ctor(EventTradeListViewItemDraw___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTradeListViewItemDraw___c___DestroyAnimObj_b__46_0(
        EventTradeListViewItemDraw___c_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  if ( !sprite
    || (this = (EventTradeListViewItemDraw___c_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)sprite,
                                                     0LL)) == 0LL )
  {
    sub_1C22094(this, sprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall EventTradeListViewItemDraw___c___UpdateSweetsAnim_b__45_0(
        EventTradeListViewItemDraw___c_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  if ( !sprite
    || (this = (EventTradeListViewItemDraw___c_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)sprite,
                                                     0LL)) == 0LL )
  {
    sub_1C22094(this, sprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall EventTradeListViewItemDraw___c__DisplayClass41_0___ctor(
        EventTradeListViewItemDraw___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTradeListViewItemDraw___c__DisplayClass41_0___SetItem_b__0(
        EventTradeListViewItemDraw___c__DisplayClass41_0_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  EventTradeListViewItemDraw___c__DisplayClass41_0_o *v6; // x20
  struct EventTradeListViewItem_o *item; // x8
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x9
  int32_t EventId_k__BackingField; // w20
  Il2CppObject *v10; // x0
  System_String_o *v11; // x21
  int32_t goodsIconId; // [xsp+Ch] [xbp-24h] BYREF

  v6 = this;
  if ( (byte_4BD74C3 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    this = (EventTradeListViewItemDraw___c__DisplayClass41_0_o *)sub_1C21E38(&StringLiteral_20553/*"icon_{0}"*/);
    byte_4BD74C3 = 1;
  }
  item = v6->fields.item;
  if ( !item || (TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField) == 0LL )
    sub_1C22094(this, sprite);
  EventId_k__BackingField = item->fields._EventId_k__BackingField;
  goodsIconId = TradeGoodsEntity_k__BackingField->fields.goodsIconId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &goodsIconId, method, v3, v4);
  v11 = System_String__Format((System_String_o *)StringLiteral_20553/*"icon_{0}"*/, v10, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_39104396(EventId_k__BackingField, sprite, v11, 0LL);
}