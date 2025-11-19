void EventCraftListViewItemDraw___ctor(EventCraftListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// attributes: thunk
void EventCraftListViewItemDraw__Awake(EventCraftListViewItemDraw_o *this, const MethodInfo *method)
{
  EventCraftListViewItemDraw__CheckIsSerializeFieldNotNull(this, method);
}


void EventCraftListViewItemDraw__CheckIsSerializeFieldNotNull(
        EventCraftListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct UISprite_array *craftIconMiniSprites; // x8
  int max_length; // w8
  int v7; // w9

  EventCraftListViewManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, method);
  craftIconMiniSprites = this->fields.craftIconMiniSprites;
  if ( !craftIconMiniSprites )
    sub_1C6BC60(v3, v4);
  max_length = craftIconMiniSprites->max_length;
  v7 = -1;
  do
    ++v7;
  while ( v7 < max_length );
}


int32_t EventCraftListViewItemDraw__GetDisplayMode(
        int32_t initMode,
        EventCraftListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( initMode )
  {
    if ( initMode == 2 )
    {
      if ( !item )
        sub_1C6BC60(initMode, 0);
      EventCraftListViewItem__UpdateCraftUserInfo(item, (const MethodInfo *)item);
      if ( item->fields._TradeInfo_k__BackingField )
      {
        if ( EventCraftListViewItem__get_NowTradeNum(item, v4) < 1 )
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
    else if ( initMode == 1 )
    {
      return 2;
    }
    else
    {
      return 1;
    }
  }
  return initMode;
}


void EventCraftListViewItemDraw__HideCraftMiniObj(EventCraftListViewItemDraw_o *this, const MethodInfo *method)
{
  EventCraftListViewItemDraw___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_T__o *craftIconMiniSprites; // x19
  System_Action_object__o *_9__44_0; // x20
  Il2CppObject *v6; // x21
  struct EventCraftListViewItemDraw___c_StaticFields *static_fields; // x0

  if ( (byte_4CB04A5 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_UISprite__TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_UISprite___);
    sub_1C6BA08(&Method_EventCraftListViewItemDraw___c__HideCraftMiniObj_b__44_0__);
    sub_1C6BA08(&EventCraftListViewItemDraw___c_TypeInfo);
    byte_4CB04A5 = 1;
  }
  v3 = EventCraftListViewItemDraw___c_TypeInfo;
  craftIconMiniSprites = (System_Collections_Generic_IEnumerable_T__o *)this->fields.craftIconMiniSprites;
  if ( !EventCraftListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCraftListViewItemDraw___c_TypeInfo);
    v3 = EventCraftListViewItemDraw___c_TypeInfo;
  }
  _9__44_0 = (System_Action_object__o *)v3->static_fields->__9__44_0;
  if ( !_9__44_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = EventCraftListViewItemDraw___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__44_0 = (System_Action_object__o *)sub_1C6BC54(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(_9__44_0, v6, Method_EventCraftListViewItemDraw___c__HideCraftMiniObj_b__44_0__, 0);
    static_fields = EventCraftListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__44_0 = (struct System_Action_UISprite__o *)_9__44_0;
    sub_1C6B9AC(&static_fields->__9__44_0, _9__44_0);
  }
  BasicHelper__ForEach_object_(
    craftIconMiniSprites,
    (System_Action_T__o *)_9__44_0,
    (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_UISprite___);
}


void EventCraftListViewItemDraw__SetItem(
        EventCraftListViewItemDraw_o *this,
        EventCraftListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  int32_t EventId_k__BackingField; // w22
  UISprite_o *craftingBaseSprite; // x23
  UILabel_o *craftStartLabel; // x23
  System_String_o *Master_object; // x0
  const MethodInfo *v11; // x1
  UILabel_o *receiveLabel; // x23
  UILabel_o *replenishmentLabel; // x23
  UILabel_o *withdrawLabel; // x23
  UILabel_o *supportToolLabel; // x23
  const MethodInfo *v16; // x2
  __int64 v17; // x23
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x8
  GiftEntity_array *GiftListById; // x26
  GiftEntity_o *v20; // x8
  _QWORD *v21; // x25
  Il2CppObject *v22; // x0
  UISprite_o *baseSprite; // x27
  UserItemMaster_o *v24; // x24
  GiftEntity_o *v25; // x8
  GiftEntity_o *v26; // x8
  int32_t num; // w8
  UISprite_o *v28; // x23
  struct ItemIconComponent_o *craftItemIcon; // x8
  UILabel_o *v30; // x22
  struct EventTradeGoodsEntity_o *v31; // x8
  UILabel_o *possessionNumLabel; // x22
  Il2CppObject *v33; // x0
  struct EventTradeGoodsEntity_o *v34; // x8
  UILabel_o *nameTextLabel; // x22
  System_String_o **p_name; // x8
  struct EventTradeGoodsEntity_o *v37; // x8
  const MethodInfo *v38; // x2
  System_Collections_Generic_IEnumerable_T__o *craftIconMiniSprites; // x22
  System_Action_object__o *v40; // x25
  NetworkManager_c *v41; // x0
  struct ItemEntity_o *SupportTool_k__BackingField; // x8
  int32_t id; // w3
  int32_t v44; // w8
  UILabel_o *eventRestTimeLabel; // x22
  unsigned int v46; // w21
  const MethodInfo *v47; // x1
  bool v48; // w1
  UILabel_o *textOnMask; // x20
  int32_t v50; // [xsp+Ch] [xbp-74h] BYREF
  UserItemEntity_o *v51; // [xsp+10h] [xbp-70h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4CB04A2 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_UISprite__TypeInfo);
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_UISprite___);
    sub_1C6BA08(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&Method_EventCraftListViewItemDraw___c__DisplayClass40_0__SetItem_b__0__);
    sub_1C6BA08(&EventCraftListViewItemDraw___c__DisplayClass40_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_20487/*"img_item_brank"*/);
    sub_1C6BA08(&StringLiteral_3878/*"CRAFT_EVENT_BOARD_SUPPORT_TOOL_BUTTON"*/);
    sub_1C6BA08(&StringLiteral_17490/*"btn_craft_bg_02"*/);
    sub_1C6BA08(&StringLiteral_17491/*"btn_craft_bg_03"*/);
    sub_1C6BA08(&StringLiteral_20447/*"img_craft_reward_bg_1"*/);
    sub_1C6BA08(&StringLiteral_20249/*"icon_craftsupport_frame"*/);
    sub_1C6BA08(&StringLiteral_13467/*"TRADE_EVENT_BOARD_WITHDRAWALLABEL_BUTTON"*/);
    sub_1C6BA08(&StringLiteral_17492/*"btn_craft_bg_04"*/);
    sub_1C6BA08(&StringLiteral_13463/*"TRADE_EVENT_BOARD_RECEIVE_BUTTON"*/);
    sub_1C6BA08(&StringLiteral_3877/*"CRAFT_EVENT_BOARD_START_BUTTON"*/);
    sub_1C6BA08(&StringLiteral_19226/*"event_craft_8049402"*/);
    sub_1C6BA08(&StringLiteral_20247/*"icon_craft_reward"*/);
    sub_1C6BA08(&StringLiteral_19225/*"event_craft_8049401"*/);
    sub_1C6BA08(&StringLiteral_13464/*"TRADE_EVENT_BOARD_REPLENISHMENT_BUTTON"*/);
    sub_1C6BA08(&StringLiteral_25162/*"{0:#,0}"*/);
    sub_1C6BA08(&StringLiteral_20248/*"icon_craftsupport"*/);
    sub_1C6BA08(&StringLiteral_19227/*"event_craft_8049403"*/);
    sub_1C6BA08(&StringLiteral_18347/*"craftgauge_bar"*/);
    sub_1C6BA08(&StringLiteral_3889/*"CRAFT_EVENT_END"*/);
    sub_1C6BA08(&StringLiteral_17489/*"btn_craft_bg_01"*/);
    sub_1C6BA08(&StringLiteral_13466/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/);
    sub_1C6BA08(&StringLiteral_18348/*"craftgauge_bg"*/);
    byte_4CB04A2 = 1;
  }
  v51 = 0;
  entity = 0;
  if ( item && mode )
  {
    EventId_k__BackingField = item->fields._EventId_k__BackingField;
    craftingBaseSprite = this->fields.craftingBaseSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_40837804(
      EventId_k__BackingField,
      craftingBaseSprite,
      (System_String_o *)StringLiteral_19226/*"event_craft_8049402"*/,
      0);
    AtlasManager__SetEventUI_40837804(
      EventId_k__BackingField,
      this->fields.progressGaugeFront,
      (System_String_o *)StringLiteral_18347/*"craftgauge_bar"*/,
      0);
    AtlasManager__SetEventUI_40837804(
      EventId_k__BackingField,
      this->fields.progressGaugeBack,
      (System_String_o *)StringLiteral_18348/*"craftgauge_bg"*/,
      0);
    craftStartLabel = this->fields.craftStartLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3877/*"CRAFT_EVENT_BOARD_START_BUTTON"*/, 0);
    if ( !craftStartLabel )
      goto LABEL_100;
    UILabel__set_text(craftStartLabel, Master_object, 0);
    AtlasManager__SetEventUI_40837804(
      EventId_k__BackingField,
      this->fields.craftStartButtonSprite,
      (System_String_o *)StringLiteral_17489/*"btn_craft_bg_01"*/,
      0);
    receiveLabel = this->fields.receiveLabel;
    Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_13463/*"TRADE_EVENT_BOARD_RECEIVE_BUTTON"*/, 0);
    if ( !receiveLabel )
      goto LABEL_100;
    UILabel__set_text(receiveLabel, Master_object, 0);
    AtlasManager__SetEventUI_40837804(
      EventId_k__BackingField,
      this->fields.receiveButtonSprite,
      (System_String_o *)StringLiteral_17491/*"btn_craft_bg_03"*/,
      0);
    replenishmentLabel = this->fields.replenishmentLabel;
    Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_13464/*"TRADE_EVENT_BOARD_REPLENISHMENT_BUTTON"*/, 0);
    if ( !replenishmentLabel )
      goto LABEL_100;
    UILabel__set_text(replenishmentLabel, Master_object, 0);
    AtlasManager__SetEventUI_40837804(
      EventId_k__BackingField,
      this->fields.replenishmentButtonSprite,
      (System_String_o *)StringLiteral_17489/*"btn_craft_bg_01"*/,
      0);
    withdrawLabel = this->fields.withdrawLabel;
    Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_13467/*"TRADE_EVENT_BOARD_WITHDRAWALLABEL_BUTTON"*/, 0);
    if ( !withdrawLabel )
      goto LABEL_100;
    UILabel__set_text(withdrawLabel, Master_object, 0);
    AtlasManager__SetEventUI_40837804(
      EventId_k__BackingField,
      this->fields.withdrawButtonSprite,
      (System_String_o *)StringLiteral_17492/*"btn_craft_bg_04"*/,
      0);
    supportToolLabel = this->fields.supportToolLabel;
    Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3878/*"CRAFT_EVENT_BOARD_SUPPORT_TOOL_BUTTON"*/, 0);
    if ( !supportToolLabel )
      goto LABEL_100;
    UILabel__set_text(supportToolLabel, Master_object, 0);
    AtlasManager__SetEventUI_40837804(
      EventId_k__BackingField,
      this->fields.supportToolButtonSprite,
      (System_String_o *)StringLiteral_17490/*"btn_craft_bg_02"*/,
      0);
    AtlasManager__SetEventUI_40837804(
      EventId_k__BackingField,
      this->fields.supportToolUsedSprite,
      (System_String_o *)StringLiteral_20248/*"icon_craftsupport"*/,
      0);
    AtlasManager__SetEventUI_40837804(
      EventId_k__BackingField,
      this->fields.craftIconSupportToolBg,
      (System_String_o *)StringLiteral_20249/*"icon_craftsupport_frame"*/,
      0);
    AtlasManager__SetEventUI_40837804(
      EventId_k__BackingField,
      this->fields.rewardHeader,
      (System_String_o *)StringLiteral_20247/*"icon_craft_reward"*/,
      0);
    AtlasManager__SetEventUI_40837804(
      EventId_k__BackingField,
      this->fields.backSprite,
      (System_String_o *)StringLiteral_20447/*"img_craft_reward_bg_1"*/,
      0);
    EventCraftListViewItemDraw__SetReleaseDisplayObject(this, item->fields._IsRelease_k__BackingField, v16);
    if ( item->fields._IsRelease_k__BackingField )
    {
      v17 = sub_1C6BC54(EventCraftListViewItemDraw___c__DisplayClass40_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v17, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_GiftMaster___);
      TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
      if ( !TradeGoodsEntity_k__BackingField || !Master_object )
        goto LABEL_100;
      GiftListById = GiftMaster__GetGiftListById(
                       (GiftMaster_o *)Master_object,
                       TradeGoodsEntity_k__BackingField->fields.giftId,
                       0);
      if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)GiftListById, 0) )
        return;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !v17 || !GiftListById )
        goto LABEL_100;
      if ( !LODWORD(GiftListById->max_length) )
        goto LABEL_101;
      v20 = GiftListById->m_Items[0];
      if ( !v20 || !Master_object )
        goto LABEL_100;
      v21 = (_QWORD *)(v17 + 16);
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              (Il2CppObject **)(v17 + 16),
              v20->fields.objectId,
              (const MethodInfo_33F9128 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        return;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v22 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserItemMaster___);
      baseSprite = this->fields.baseSprite;
      v24 = (UserItemMaster_o *)v22;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      Master_object = (System_String_o *)AtlasManager__SetEventUI_40837804(
                                           EventId_k__BackingField,
                                           baseSprite,
                                           (System_String_o *)StringLiteral_19225/*"event_craft_8049401"*/,
                                           0);
      if ( !LODWORD(GiftListById->max_length) )
        goto LABEL_101;
      v25 = GiftListById->m_Items[0];
      if ( !v25 )
        goto LABEL_100;
      Master_object = (System_String_o *)this->fields.craftItemIcon;
      if ( !Master_object )
        goto LABEL_100;
      ItemIconComponent__SetItem((ItemIconComponent_o *)Master_object, v25->fields.objectId, -1, 1, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CB002A )
      {
        sub_1C6BA08(&NetworkManager_TypeInfo);
        byte_4CB002A = 1;
      }
      Master_object = (System_String_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Master_object = (System_String_o *)NetworkManager_TypeInfo;
      }
      if ( !LODWORD(GiftListById->max_length) )
LABEL_101:
        sub_1C6BC68(Master_object);
      v26 = GiftListById->m_Items[0];
      if ( !v26 || !v24 )
        goto LABEL_100;
      Master_object = (System_String_o *)UserItemMaster__TryGetEntity(
                                           v24,
                                           &entity,
                                           *(_QWORD *)(*(_QWORD *)&Master_object[7].fields + 64LL),
                                           v26->fields.objectId,
                                           0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_100;
        num = entity->fields.num;
      }
      else
      {
        num = 0;
      }
      possessionNumLabel = this->fields.possessionNumLabel;
      v50 = num;
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
      Master_object = System_String__Format((System_String_o *)StringLiteral_25162/*"{0:#,0}"*/, v33, 0);
      if ( !possessionNumLabel )
        goto LABEL_100;
      UILabel__set_text(possessionNumLabel, Master_object, 0);
      v34 = item->fields._TradeGoodsEntity_k__BackingField;
      if ( !v34 )
        goto LABEL_100;
      nameTextLabel = this->fields.nameTextLabel;
      Master_object = (System_String_o *)System_String__IsNullOrEmpty(v34->fields.name, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !*v21 )
          goto LABEL_100;
        p_name = (System_String_o **)(*v21 + 24LL);
      }
      else
      {
        v37 = item->fields._TradeGoodsEntity_k__BackingField;
        if ( !v37 )
          goto LABEL_100;
        p_name = &v37->fields.name;
      }
      if ( !nameTextLabel )
LABEL_100:
        sub_1C6BC60(Master_object, v11);
      UILabel__set_text(nameTextLabel, *p_name, 0);
      EventCraftListViewItemDraw__SetPriceIconText(this, item, v38);
      craftIconMiniSprites = (System_Collections_Generic_IEnumerable_T__o *)this->fields.craftIconMiniSprites;
      v40 = (System_Action_object__o *)sub_1C6BC54(System_Action_UISprite__TypeInfo);
      System_Action_object____ctor(
        v40,
        (Il2CppObject *)v17,
        Method_EventCraftListViewItemDraw___c__DisplayClass40_0__SetItem_b__0__,
        0);
      BasicHelper__ForEach_object_(
        craftIconMiniSprites,
        (System_Action_T__o *)v40,
        (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_UISprite___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CB002A )
      {
        sub_1C6BA08(&NetworkManager_TypeInfo);
        byte_4CB002A = 1;
      }
      v41 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v41 = NetworkManager_TypeInfo;
      }
      SupportTool_k__BackingField = item->fields._SupportTool_k__BackingField;
      if ( SupportTool_k__BackingField )
        id = SupportTool_k__BackingField->fields.id;
      else
        id = 0;
      Master_object = (System_String_o *)UserItemMaster__TryGetEntity(
                                           v24,
                                           &v51,
                                           v41->static_fields->userIdNumber,
                                           id,
                                           0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v51 )
          goto LABEL_100;
        v44 = v51->fields.num;
      }
      else
      {
        v44 = 0;
      }
      item->fields._PossessionNum_k__BackingField = v44;
    }
    else
    {
      v28 = this->fields.baseSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      Master_object = (System_String_o *)AtlasManager__SetEventUI_40837804(
                                           EventId_k__BackingField,
                                           v28,
                                           (System_String_o *)StringLiteral_19227/*"event_craft_8049403"*/,
                                           0);
      craftItemIcon = this->fields.craftItemIcon;
      if ( !craftItemIcon )
        goto LABEL_100;
      AtlasManager__SetEventUI_40837804(
        EventId_k__BackingField,
        craftItemIcon->fields.iconSprite,
        (System_String_o *)StringLiteral_20487/*"img_item_brank"*/,
        0);
      v30 = this->fields.nameTextLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_13466/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, 0);
      if ( !v30 )
        goto LABEL_100;
      UILabel__set_text(v30, Master_object, 0);
      v31 = item->fields._TradeGoodsEntity_k__BackingField;
      if ( !v31 )
        goto LABEL_100;
      Master_object = (System_String_o *)this->fields.textOnMask;
      if ( !Master_object )
        goto LABEL_100;
      UILabel__set_text((UILabel_o *)Master_object, v31->fields.closedMessage, 0);
    }
    eventRestTimeLabel = this->fields.eventRestTimeLabel;
    Master_object = EventCraftListViewItem__get_RestTimeEventAt(item, v11);
    if ( eventRestTimeLabel )
    {
      UILabel__set_text(eventRestTimeLabel, Master_object, 0);
      Master_object = (System_String_o *)this->fields.craftingBaseSprite;
      if ( Master_object )
      {
        Master_object = (System_String_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)Master_object,
                                             0);
        if ( Master_object )
        {
          v46 = mode & 0xFFFFFFFE;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v46 == 4, 0);
          if ( !EventCraftListViewItem__get_IsEventEnd(item, v47) )
            return;
          if ( v46 == 4 )
          {
            Master_object = (System_String_o *)this->fields.textOnMask;
            if ( Master_object )
            {
              UILabel__set_text((UILabel_o *)Master_object, string_TypeInfo->static_fields->Empty, 0);
              Master_object = (System_String_o *)this->fields.maskSprite;
              if ( Master_object )
              {
                Master_object = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)Master_object,
                                                     0);
                if ( Master_object )
                {
                  v48 = 0;
LABEL_98:
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v48, 0);
                  return;
                }
              }
            }
          }
          else
          {
            EventCraftListViewItemDraw__HideCraftMiniObj(this, v11);
            Master_object = (System_String_o *)this->fields.progressBar;
            if ( Master_object )
            {
              Master_object = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)Master_object,
                                                   0);
              if ( Master_object )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
                textOnMask = this->fields.textOnMask;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3889/*"CRAFT_EVENT_END"*/, 0);
                if ( textOnMask )
                {
                  UILabel__set_text(textOnMask, Master_object, 0);
                  Master_object = (System_String_o *)this->fields.textOnMask;
                  if ( Master_object )
                  {
                    Master_object = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)Master_object,
                                                         0);
                    if ( Master_object )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
                      Master_object = (System_String_o *)this->fields.maskSprite;
                      if ( Master_object )
                      {
                        Master_object = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)Master_object,
                                                             0);
                        if ( Master_object )
                        {
                          v48 = 1;
                          goto LABEL_98;
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
    goto LABEL_100;
  }
}


void EventCraftListViewItemDraw__SetPriceIconText(
        EventCraftListViewItemDraw_o *this,
        EventCraftListViewItem_o *item,
        const MethodInfo *method)
{
  struct CommonConsumeEntity_array *CommonConsumeEntityArray_k__BackingField; // x8
  EventCraftListViewItemDraw_o *v5; // x20
  _BOOL4 v6; // w21
  struct EventTradePriceInfo_o **p_priceInfoDouble; // x22
  struct EventTradePriceInfo_o **p_priceInfoTriple; // x20
  EventCraftListViewItemDraw_o *priceInfoTriple; // t1
  EventCraftListViewItemDraw_o **v10; // x8

  if ( !item )
    goto LABEL_14;
  CommonConsumeEntityArray_k__BackingField = item->fields._CommonConsumeEntityArray_k__BackingField;
  v5 = this;
  v6 = CommonConsumeEntityArray_k__BackingField && LODWORD(CommonConsumeEntityArray_k__BackingField->max_length) == 2;
  p_priceInfoDouble = &this->fields.priceInfoDouble;
  this = (EventCraftListViewItemDraw_o *)this->fields.priceInfoDouble;
  if ( !this )
    goto LABEL_14;
  this = (EventCraftListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v6, 0);
  priceInfoTriple = (EventCraftListViewItemDraw_o *)v5->fields.priceInfoTriple;
  p_priceInfoTriple = &v5->fields.priceInfoTriple;
  this = priceInfoTriple;
  if ( !priceInfoTriple )
    goto LABEL_14;
  this = (EventCraftListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v6, 0);
  v10 = (EventCraftListViewItemDraw_o **)(v6 ? p_priceInfoDouble : p_priceInfoTriple);
  this = *v10;
  if ( !*v10 )
LABEL_14:
    sub_1C6BC60(this, item);
  EventTradePriceInfo__SetPriceInfo(
    (EventTradePriceInfo_o *)this,
    item->fields._CommonConsumeEntityArray_k__BackingField,
    1,
    0);
}


// local variable allocation has failed, the output may be wrong!
void EventCraftListViewItemDraw__SetReleaseDisplayObject(
        EventCraftListViewItemDraw_o *this,
        bool isRelease,
        const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0

  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_31;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, !isRelease, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.textOnMask;
  if ( !maskSprite )
    goto LABEL_31;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, !isRelease, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.nameTextLabel;
  if ( !maskSprite )
    goto LABEL_31;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.eventRestTimeLabel;
  if ( !maskSprite )
    goto LABEL_31;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.priceInfoDouble;
  if ( !maskSprite )
    goto LABEL_31;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.priceInfoTriple;
  if ( !maskSprite )
    goto LABEL_31;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.craftItemIcon;
  if ( !maskSprite )
    goto LABEL_31;
  ItemIconComponent__SetPossessionTitleActivation((ItemIconComponent_o *)maskSprite, isRelease, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.rewardHeader;
  if ( !maskSprite )
    goto LABEL_31;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.timeRequiredCraft;
  if ( !maskSprite )
    goto LABEL_31;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.craftStartButtonSprite;
  if ( !maskSprite )
    goto LABEL_31;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_31;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_31;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0);
  maskSprite = (UnityEngine_Component_o *)this->fields.craftingBaseSprite;
  if ( !maskSprite )
    goto LABEL_31;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0);
  if ( !maskSprite
    || (maskSprite = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)maskSprite,
                                                  0)) == 0
    || (maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0),
        (maskSprite = (UnityEngine_Component_o *)this->fields.supportToolUsedSprite) == 0)
    || (maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0)) == 0
    || (maskSprite = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)maskSprite,
                                                  0)) == 0
    || (maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0)) == 0 )
  {
LABEL_31:
    sub_1C6BC60(maskSprite, isRelease);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0);
}


void EventCraftListViewItemDraw__UpdateCraftIconMiniSprite(
        EventCraftListViewItemDraw_o *this,
        EventCraftListViewItem_o *item,
        const MethodInfo *method)
{
  EventCraftListViewItemDraw___c_c *v5; // x0
  System_Collections_Generic_IEnumerable_T__o *craftIconMiniSprites; // x21
  System_Action_object__o *_9__43_0; // x22
  Il2CppObject *v8; // x23
  struct EventCraftListViewItemDraw___c_StaticFields *static_fields; // x0
  UnityEngine_GameObject_o *NowCompleteNum; // x0
  const MethodInfo *v11; // x1
  int v12; // w21
  struct UISprite_array *v13; // x8
  const MethodInfo *v14; // x1

  if ( (byte_4CB04A4 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_UISprite__TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_UISprite___);
    sub_1C6BA08(&Method_EventCraftListViewItemDraw___c__UpdateCraftIconMiniSprite_b__43_0__);
    sub_1C6BA08(&EventCraftListViewItemDraw___c_TypeInfo);
    byte_4CB04A4 = 1;
  }
  v5 = EventCraftListViewItemDraw___c_TypeInfo;
  craftIconMiniSprites = (System_Collections_Generic_IEnumerable_T__o *)this->fields.craftIconMiniSprites;
  if ( !EventCraftListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCraftListViewItemDraw___c_TypeInfo);
    v5 = EventCraftListViewItemDraw___c_TypeInfo;
  }
  _9__43_0 = (System_Action_object__o *)v5->static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = EventCraftListViewItemDraw___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__43_0 = (System_Action_object__o *)sub_1C6BC54(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(
      _9__43_0,
      v8,
      Method_EventCraftListViewItemDraw___c__UpdateCraftIconMiniSprite_b__43_0__,
      0);
    static_fields = EventCraftListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Action_UISprite__o *)_9__43_0;
    sub_1C6B9AC(&static_fields->__9__43_0, _9__43_0);
  }
  BasicHelper__ForEach_object_(
    craftIconMiniSprites,
    (System_Action_T__o *)_9__43_0,
    (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_UISprite___);
  if ( !item )
    goto LABEL_18;
  NowCompleteNum = (UnityEngine_GameObject_o *)EventCraftListViewItem__get_NowCompleteNum(item, v11);
  if ( (int)NowCompleteNum >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = this->fields.craftIconMiniSprites;
      if ( !v13 )
        break;
      if ( (unsigned int)v12 >= LODWORD(v13->max_length) )
        sub_1C6BC68(NowCompleteNum);
      NowCompleteNum = (UnityEngine_GameObject_o *)v13->m_Items[v12];
      if ( !NowCompleteNum )
        break;
      NowCompleteNum = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NowCompleteNum, 0);
      if ( !NowCompleteNum )
        break;
      UnityEngine_GameObject__SetActive(NowCompleteNum, 1, 0);
      ++v12;
      NowCompleteNum = (UnityEngine_GameObject_o *)EventCraftListViewItem__get_NowCompleteNum(item, v14);
      if ( v12 >= (int)NowCompleteNum )
        return;
    }
LABEL_18:
    sub_1C6BC60(NowCompleteNum, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventCraftListViewItemDraw__UpdateItem(
        EventCraftListViewItemDraw_o *this,
        EventCraftListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  int32_t EventId_k__BackingField; // w21
  int64_t v8; // x23
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *PickupInfoList_k__BackingField; // x22
  EventCraftListViewItemDraw___c_c *v10; // x0
  System_Func_object__long__o *_9__42_0; // x23
  Il2CppObject *v12; // x25
  struct EventCraftListViewItemDraw___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v14; // x0
  __int64 Time; // x0
  _BOOL8 v16; // x1
  __int64 v17; // x22
  struct UICommonButton_o *supportToolButton; // x24
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  struct UICommonButton_o *v21; // x25
  UISprite_o *v22; // x24
  EventCraftTimeCalculation_c *v23; // x0
  int32_t DEFAULT_EVENT_CRAFT_TIME_RATE; // w26
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *v25; // x21
  EventCraftListViewItemDraw___c_c *v26; // x0
  System_Func_object__long__o *_9__42_1; // x24
  Il2CppObject *v28; // x25
  struct EventCraftListViewItemDraw___c_StaticFields *v29; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v30; // x0
  struct ItemEntity_o *SupportTool_k__BackingField; // x8
  struct EventTradeGoodsEntity_o *v32; // x8
  int32_t tradeTime; // w21
  double v34; // d8
  int64_t v35; // x0
  UILabel_o *timeRequiredCraft; // x21
  int64_t v37; // x22
  System_String_o *v38; // x0
  const MethodInfo *v39; // x1
  struct UICommonButton_o *craftStartButton; // x21
  const MethodInfo *v41; // x1
  char IsRelease_k__BackingField; // w8
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  struct EventTradeInfo_o *v44; // x8
  float v45; // s8
  const MethodInfo *v46; // x2
  UILabel_o *progressLabel; // x23
  System_String_o *v48; // x24
  const MethodInfo *v49; // x1
  struct EventTradeInfo_o *v50; // x8
  Il2CppObject *v51; // x25
  Il2CppObject *v52; // x0
  struct EventTradeInfo_o *v53; // x8
  struct UICommonButton_o *replenishmentButton; // x23
  const MethodInfo *v55; // x1
  char v56; // w8
  UISprite_o *backSprite; // x23
  struct EventTradeInfo_o *v58; // x8
  int64_t startedAt; // x23
  EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x26
  System_Collections_Generic_List_EventCraftPickupInfo__o *v61; // x25
  int32_t tradeNum; // w24
  int64_t CraftFinishTime; // x24
  int64_t v64; // x23
  const MethodInfo *v65; // x1
  int32_t NowTradeNum; // w0
  UILabel_o *timeLeftLabel; // x22
  int32_t v68; // w20
  bool v69; // cc
  __int64 v70; // x20
  System_String_o *v71; // x0
  UISprite_o *craftingStateSprite; // x22
  __int64 *v73; // x8
  float v74; // s1 OVERLAPPED
  float v75; // s2
  float v76; // s0
  float v77; // s3
  int v78; // [xsp+8h] [xbp-68h] BYREF
  int32_t NowCompleteNum; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4CB04A3 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&System_Convert_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    sub_1C6BA08(&EventCraftTimeCalculation_TypeInfo);
    sub_1C6BA08(&System_Func_EventCraftPickupInfo__long__TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&System_Math_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&Method_EventCraftListViewItemDraw___c__UpdateItem_b__42_0__);
    sub_1C6BA08(&Method_EventCraftListViewItemDraw___c__UpdateItem_b__42_1__);
    sub_1C6BA08(&EventCraftListViewItemDraw___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_20447/*"img_craft_reward_bg_1"*/);
    sub_1C6BA08(&StringLiteral_20246/*"icon_craft_intrade"*/);
    sub_1C6BA08(&StringLiteral_20245/*"icon_craft_compleate"*/);
    sub_1C6BA08(&StringLiteral_20448/*"img_craft_reward_bg_2"*/);
    sub_1C6BA08(&StringLiteral_3894/*"CRAFT_EVENT_PROGRESS_NUM"*/);
    sub_1C6BA08(&StringLiteral_13397/*"TIME_FORMAT_1"*/);
    sub_1C6BA08(&StringLiteral_13502/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/);
    byte_4CB04A3 = 1;
  }
  if ( item && mode && item->fields._TradeGoodsEntity_k__BackingField && item->fields._IsRelease_k__BackingField )
  {
    EventCraftListViewItemDraw__UpdateSupportToolLb(this, item, *(const MethodInfo **)&mode);
    EventId_k__BackingField = item->fields._EventId_k__BackingField;
    v8 = 0;
    if ( !BasicHelper__IsNullOrEmpty(
            (System_Collections_ICollection_o *)item->fields._PickupInfoList_k__BackingField,
            0) )
    {
      PickupInfoList_k__BackingField = item->fields._PickupInfoList_k__BackingField;
      v10 = EventCraftListViewItemDraw___c_TypeInfo;
      if ( !EventCraftListViewItemDraw___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventCraftListViewItemDraw___c_TypeInfo);
        v10 = EventCraftListViewItemDraw___c_TypeInfo;
      }
      _9__42_0 = (System_Func_object__long__o *)v10->static_fields->__9__42_0;
      if ( !_9__42_0 )
      {
        if ( !v10->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v10);
          v10 = EventCraftListViewItemDraw___c_TypeInfo;
        }
        v12 = (Il2CppObject *)v10->static_fields->__9;
        _9__42_0 = (System_Func_object__long__o *)sub_1C6BC54(System_Func_EventCraftPickupInfo__long__TypeInfo);
        System_Func_object__long____ctor(_9__42_0, v12, Method_EventCraftListViewItemDraw___c__UpdateItem_b__42_0__, 0);
        static_fields = EventCraftListViewItemDraw___c_TypeInfo->static_fields;
        static_fields->__9__42_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__42_0;
        sub_1C6B9AC(&static_fields->__9__42_0, _9__42_0);
      }
      v14 = System_Linq_Enumerable__Select_object__long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)PickupInfoList_k__BackingField,
              (System_Func_TSource__TResult__o *)_9__42_0,
              (const MethodInfo_317181C *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
      v8 = System_Linq_Enumerable__Max_66967376((System_Collections_Generic_IEnumerable_long__o *)v14, 0);
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    if ( this->fields.supportToolButtonSprite )
    {
      v17 = Time;
      Time = (__int64)UnityEngine_Component__get_gameObject(
                        (UnityEngine_Component_o *)this->fields.supportToolButtonSprite,
                        0);
      if ( Time )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
        if ( (mode & 0xFFFFFFFE) == 4 )
        {
          if ( !item->fields._TradeInfo_k__BackingField )
          {
            EventCraftListViewItemDraw__HideCraftMiniObj(this, (const MethodInfo *)v16);
            return;
          }
          Time = (__int64)this->fields.craftingBaseSprite;
          if ( Time )
          {
            Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
            if ( Time )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
              Time = (__int64)this->fields.craftStartButtonSprite;
              if ( Time )
              {
                Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                if ( Time )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                  supportToolButton = this->fields.supportToolButton;
                  Time = EventCraftListViewItem__get_NowTradeNum(item, v19);
                  v21 = (int)Time >= 1 ? supportToolButton : 0LL;
                  if ( (int)Time < 1 || item->fields._PossessionNum_k__BackingField < 1 )
                  {
                    v16 = 0;
                  }
                  else
                  {
                    Time = (__int64)BalanceConfig_TypeInfo;
                    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      Time = (__int64)BalanceConfig_TypeInfo;
                    }
                    if ( v8 - v17 <= *(int *)(*(_QWORD *)(Time + 184) + 1220LL) )
                    {
                      Time = EventCraftListViewItem__get_IsEventEnd(item, v20);
                      v16 = (Time & 1) == 0;
                    }
                    else
                    {
                      v16 = 0;
                    }
                    supportToolButton = v21;
                  }
                  if ( supportToolButton )
                  {
                    Time = ((__int64 (__fastcall *)(struct UICommonButton_o *, _BOOL8, const MethodInfo *))supportToolButton->klass->vtable._5_set_isEnabled.methodPtr)(
                             supportToolButton,
                             v16,
                             supportToolButton->klass->vtable._5_set_isEnabled.method);
                    TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
                    if ( TradeInfo_k__BackingField )
                    {
                      if ( TradeInfo_k__BackingField->fields.tradeNum )
                      {
                        Time = EventCraftListViewItem__get_NowCompleteNum(item, (const MethodInfo *)v16);
                        v44 = item->fields._TradeInfo_k__BackingField;
                        if ( !v44 )
                          goto LABEL_146;
                        v45 = (float)(int)Time / (float)(v44->fields.getNum + v44->fields.tradeNum);
                      }
                      else
                      {
                        v45 = 0.0;
                      }
                      Time = (__int64)this->fields.progressBar;
                      if ( Time )
                      {
                        Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                        if ( Time )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
                          Time = (__int64)this->fields.progressBar;
                          if ( Time )
                          {
                            UIProgressBar__set_value((UIProgressBar_o *)Time, v45, 0);
                            EventCraftListViewItemDraw__UpdateCraftIconMiniSprite(this, item, v46);
                            progressLabel = this->fields.progressLabel;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v48 = LocalizationManager__Get((System_String_o *)StringLiteral_3894/*"CRAFT_EVENT_PROGRESS_NUM"*/, 0);
                            NowCompleteNum = EventCraftListViewItem__get_NowCompleteNum(item, v49);
                            Time = j_il2cpp_value_box_0(int_TypeInfo, &NowCompleteNum);
                            v50 = item->fields._TradeInfo_k__BackingField;
                            if ( v50 )
                            {
                              v51 = (Il2CppObject *)Time;
                              v78 = v50->fields.getNum + v50->fields.tradeNum;
                              v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v78);
                              Time = (__int64)System_String__Format_64008100(v48, v51, v52, 0);
                              if ( progressLabel )
                              {
                                UILabel__set_text(progressLabel, (System_String_o *)Time, 0);
                                v53 = item->fields._TradeInfo_k__BackingField;
                                if ( v53
                                  && (v53->fields.getNum >= 1
                                   || EventCraftListViewItem__get_NowCompleteNum(item, (const MethodInfo *)v16) >= 1) )
                                {
                                  ActionExtensions__Call(item->fields._UpdateReceiveAllButtonState_k__BackingField, 0);
                                  Time = (__int64)this->fields.receiveButtonSprite;
                                  if ( !Time )
                                    goto LABEL_146;
                                  Time = (__int64)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0);
                                  if ( !Time )
                                    goto LABEL_146;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
                                  Time = (__int64)this->fields.replenishmentButtonSprite;
                                  if ( !Time )
                                    goto LABEL_146;
                                  Time = (__int64)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0);
                                  if ( !Time )
                                    goto LABEL_146;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                                  Time = (__int64)this->fields.withdrawButtonSprite;
                                  if ( !Time )
                                    goto LABEL_146;
                                  Time = (__int64)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0);
                                  if ( !Time )
                                    goto LABEL_146;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                                }
                                else
                                {
                                  Time = (__int64)this->fields.receiveButtonSprite;
                                  if ( !Time )
                                    goto LABEL_146;
                                  Time = (__int64)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0);
                                  if ( !Time )
                                    goto LABEL_146;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                                  Time = (__int64)this->fields.replenishmentButtonSprite;
                                  if ( !Time )
                                    goto LABEL_146;
                                  Time = (__int64)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0);
                                  if ( !Time )
                                    goto LABEL_146;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
                                  Time = (__int64)this->fields.withdrawButtonSprite;
                                  if ( !Time )
                                    goto LABEL_146;
                                  Time = (__int64)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0);
                                  if ( !Time )
                                    goto LABEL_146;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
                                  replenishmentButton = this->fields.replenishmentButton;
                                  Time = EventCraftListViewItem__get_IsRefillable(item, v55);
                                  if ( (Time & 1) != 0 )
                                  {
                                    Time = EventCraftListViewItem__get_IsEventEnd(item, (const MethodInfo *)v16);
                                    v56 = Time ^ 1;
                                  }
                                  else
                                  {
                                    v56 = 0;
                                  }
                                  if ( !replenishmentButton )
                                    goto LABEL_146;
                                  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, const MethodInfo *))replenishmentButton->klass->vtable._5_set_isEnabled.methodPtr)(
                                    replenishmentButton,
                                    v56 & 1,
                                    replenishmentButton->klass->vtable._5_set_isEnabled.method);
                                }
                                backSprite = this->fields.backSprite;
                                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                Time = AtlasManager__SetEventUI_40837804(
                                         EventId_k__BackingField,
                                         backSprite,
                                         (System_String_o *)StringLiteral_20448/*"img_craft_reward_bg_2"*/,
                                         0);
                                v58 = item->fields._TradeInfo_k__BackingField;
                                if ( v58 )
                                {
                                  startedAt = v58->fields.startedAt;
                                  TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
                                  v61 = item->fields._PickupInfoList_k__BackingField;
                                  tradeNum = v58->fields.tradeNum;
                                  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
                                  CraftFinishTime = EventCraftTimeCalculation__GetCraftFinishTime(
                                                      TradeGoodsEntity_k__BackingField,
                                                      v61,
                                                      0,
                                                      tradeNum,
                                                      startedAt,
                                                      0);
                                  v64 = startedAt - v17;
                                  NowTradeNum = EventCraftListViewItem__get_NowTradeNum(item, v65);
                                  timeLeftLabel = this->fields.timeLeftLabel;
                                  v68 = NowTradeNum;
                                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                  v69 = v68 <= 0;
                                  v70 = v64 + CraftFinishTime;
                                  if ( v69 )
                                  {
                                    Time = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_13502/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/, 0);
                                    if ( !timeLeftLabel )
                                      goto LABEL_146;
                                    UILabel__set_text(timeLeftLabel, (System_String_o *)Time, 0);
                                    craftingStateSprite = this->fields.craftingStateSprite;
                                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                    v73 = &StringLiteral_20245/*"icon_craft_compleate"*/;
                                  }
                                  else
                                  {
                                    v71 = LocalizationManager__Get((System_String_o *)StringLiteral_13397/*"TIME_FORMAT_1"*/, 0);
                                    Time = (__int64)LocalizationManager__GetRestTimeInFormat(
                                                      v64 + CraftFinishTime,
                                                      0,
                                                      v71,
                                                      0);
                                    if ( !timeLeftLabel )
                                      goto LABEL_146;
                                    UILabel__set_text(timeLeftLabel, (System_String_o *)Time, 0);
                                    craftingStateSprite = this->fields.craftingStateSprite;
                                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                    v73 = &StringLiteral_20246/*"icon_craft_intrade"*/;
                                  }
                                  AtlasManager__SetEventUI_40837804(
                                    EventId_k__BackingField,
                                    craftingStateSprite,
                                    (System_String_o *)*v73,
                                    0);
                                  v74 = 0.92157;
                                  Time = (__int64)this->fields.timeLeftLabel;
                                  if ( v70 >= 3600 )
                                    v75 = 0.015686;
                                  else
                                    v75 = 0.0;
                                  if ( v70 < 3600 )
                                    v74 = 0.0;
                                  if ( Time )
                                  {
                                    v76 = 1.0;
                                    v77 = 1.0;
                                    UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v74 - 1), 0);
                                    Time = (__int64)this->fields.craftingStateSprite;
                                    if ( Time )
                                    {
                                      Time = (__int64)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)Time,
                                                        0);
                                      if ( Time )
                                      {
                                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
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
        else
        {
          Time = (__int64)this->fields.timeLeftLabel;
          if ( Time )
          {
            UILabel__set_text((UILabel_o *)Time, string_TypeInfo->static_fields->Empty, 0);
            Time = (__int64)this->fields.craftingBaseSprite;
            if ( Time )
            {
              Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
              if ( Time )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                Time = (__int64)this->fields.craftIconSupportToolBg;
                if ( Time )
                {
                  Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                  if ( Time )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                    Time = (__int64)this->fields.craftStartButtonSprite;
                    if ( Time )
                    {
                      Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                      if ( Time )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
                        Time = (__int64)this->fields.receiveButtonSprite;
                        if ( Time )
                        {
                          Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                          if ( Time )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                            Time = (__int64)this->fields.replenishmentButtonSprite;
                            if ( Time )
                            {
                              Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                              if ( Time )
                              {
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                                Time = (__int64)this->fields.withdrawButtonSprite;
                                if ( Time )
                                {
                                  Time = (__int64)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0);
                                  if ( Time )
                                  {
                                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                                    Time = (__int64)this->fields.supportToolButton;
                                    if ( Time )
                                    {
                                      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)Time + 392LL))(
                                        Time,
                                        0,
                                        *(_QWORD *)(*(_QWORD *)Time + 400LL));
                                      Time = (__int64)this->fields.progressBar;
                                      if ( Time )
                                      {
                                        Time = (__int64)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)Time,
                                                          0);
                                        if ( Time )
                                        {
                                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                                          v22 = this->fields.backSprite;
                                          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                          AtlasManager__SetEventUI_40837804(
                                            EventId_k__BackingField,
                                            v22,
                                            (System_String_o *)StringLiteral_20447/*"img_craft_reward_bg_1"*/,
                                            0);
                                          v23 = EventCraftTimeCalculation_TypeInfo;
                                          if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
                                          {
                                            j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
                                            v23 = EventCraftTimeCalculation_TypeInfo;
                                          }
                                          DEFAULT_EVENT_CRAFT_TIME_RATE = v23->static_fields->DEFAULT_EVENT_CRAFT_TIME_RATE;
                                          Time = BasicHelper__IsNullOrEmpty(
                                                   (System_Collections_ICollection_o *)item->fields._PickupInfoList_k__BackingField,
                                                   0);
                                          if ( (Time & 1) == 0 && item->fields._SupportTool_k__BackingField )
                                          {
                                            v25 = item->fields._PickupInfoList_k__BackingField;
                                            v26 = EventCraftListViewItemDraw___c_TypeInfo;
                                            if ( !EventCraftListViewItemDraw___c_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(EventCraftListViewItemDraw___c_TypeInfo);
                                              v26 = EventCraftListViewItemDraw___c_TypeInfo;
                                            }
                                            _9__42_1 = (System_Func_object__long__o *)v26->static_fields->__9__42_1;
                                            if ( !_9__42_1 )
                                            {
                                              if ( !v26->_2.cctor_finished )
                                              {
                                                j_il2cpp_runtime_class_init_0(v26);
                                                v26 = EventCraftListViewItemDraw___c_TypeInfo;
                                              }
                                              v28 = (Il2CppObject *)v26->static_fields->__9;
                                              _9__42_1 = (System_Func_object__long__o *)sub_1C6BC54(System_Func_EventCraftPickupInfo__long__TypeInfo);
                                              System_Func_object__long____ctor(
                                                _9__42_1,
                                                v28,
                                                Method_EventCraftListViewItemDraw___c__UpdateItem_b__42_1__,
                                                0);
                                              v29 = EventCraftListViewItemDraw___c_TypeInfo->static_fields;
                                              v29->__9__42_1 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__42_1;
                                              sub_1C6B9AC(&v29->__9__42_1, _9__42_1);
                                            }
                                            v30 = System_Linq_Enumerable__Select_object__long_(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v25,
                                                    (System_Func_TSource__TResult__o *)_9__42_1,
                                                    (const MethodInfo_317181C *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
                                            Time = System_Linq_Enumerable__Max_66967376(
                                                     (System_Collections_Generic_IEnumerable_long__o *)v30,
                                                     0);
                                            if ( v8 >= v17 && v17 >= Time )
                                            {
                                              SupportTool_k__BackingField = item->fields._SupportTool_k__BackingField;
                                              if ( !SupportTool_k__BackingField )
                                                goto LABEL_146;
                                              DEFAULT_EVENT_CRAFT_TIME_RATE = SupportTool_k__BackingField->fields.value;
                                            }
                                          }
                                          v32 = item->fields._TradeGoodsEntity_k__BackingField;
                                          if ( v32 )
                                          {
                                            tradeTime = v32->fields.tradeTime;
                                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                                            v34 = ceil((double)(tradeTime * DEFAULT_EVENT_CRAFT_TIME_RATE) / 1000.0);
                                            if ( !System_Convert_TypeInfo->_2.cctor_finished )
                                              j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
                                            v35 = System_Convert__ToInt64_65054652(v34, 0);
                                            timeRequiredCraft = this->fields.timeRequiredCraft;
                                            v37 = v35;
                                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                            v38 = LocalizationManager__Get((System_String_o *)StringLiteral_13397/*"TIME_FORMAT_1"*/, 0);
                                            Time = (__int64)LocalizationManager__GetRestTimeInFormat(v37, 0, v38, 0);
                                            if ( timeRequiredCraft )
                                            {
                                              UILabel__set_text(timeRequiredCraft, (System_String_o *)Time, 0);
                                              EventCraftListViewItemDraw__HideCraftMiniObj(this, v39);
                                              craftStartButton = this->fields.craftStartButton;
                                              Time = EventCraftListViewItem__get_IsBuyAble(item, v41);
                                              if ( (Time & 1) != 0 )
                                              {
                                                IsRelease_k__BackingField = item->fields._IsRelease_k__BackingField;
                                                if ( IsRelease_k__BackingField )
                                                {
                                                  Time = EventCraftListViewItem__get_IsEventEnd(
                                                           item,
                                                           (const MethodInfo *)v16);
                                                  IsRelease_k__BackingField = Time ^ 1;
                                                }
                                              }
                                              else
                                              {
                                                IsRelease_k__BackingField = 0;
                                              }
                                              if ( craftStartButton )
                                              {
                                                ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, const MethodInfo *))craftStartButton->klass->vtable._5_set_isEnabled.methodPtr)(
                                                  craftStartButton,
                                                  IsRelease_k__BackingField & 1,
                                                  craftStartButton->klass->vtable._5_set_isEnabled.method);
                                                Time = (__int64)this->fields.craftingStateSprite;
                                                if ( Time )
                                                {
                                                  Time = (__int64)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)Time,
                                                                    0);
                                                  if ( Time )
                                                  {
                                                    UnityEngine_GameObject__SetActive(
                                                      (UnityEngine_GameObject_o *)Time,
                                                      0,
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
LABEL_146:
    sub_1C6BC60(Time, v16);
  }
}


void EventCraftListViewItemDraw__UpdateSupportToolLb(
        EventCraftListViewItemDraw_o *this,
        EventCraftListViewItem_o *item,
        const MethodInfo *method)
{
  EventCraftListViewItem_o *v3; // x22
  EventCraftListViewItemDraw_o *v4; // x19
  bool IsUsedSupportTool; // w20
  int64_t v6; // x21
  System_Collections_Generic_IEnumerable_TSource__o *PickupInfoList_k__BackingField; // x21
  EventCraftListViewItemDraw___c_c *v8; // x0
  System_Func_object__long__o *_9__45_0; // x22
  Il2CppObject *v10; // x23
  struct EventCraftListViewItemDraw___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v12; // x0
  UILabel_o *supportToolLeftTime; // x19
  System_String_o *v14; // x20
  System_String_o *v15; // x0
  Il2CppObject *RestTimeInFormat; // x0

  v3 = item;
  v4 = this;
  if ( (byte_4CB04A6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    sub_1C6BA08(&System_Func_EventCraftPickupInfo__long__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&Method_EventCraftListViewItemDraw___c__UpdateSupportToolLb_b__45_0__);
    sub_1C6BA08(&EventCraftListViewItemDraw___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_3879/*"CRAFT_EVENT_BOARD_SUPPORT_TOOL_LEFT_TIME"*/);
    this = (EventCraftListViewItemDraw_o *)sub_1C6BA08(&StringLiteral_13397/*"TIME_FORMAT_1"*/);
    byte_4CB04A6 = 1;
  }
  if ( !v3 )
    goto LABEL_23;
  IsUsedSupportTool = EventCraftListViewItem__IsUsedSupportTool(v3, (const MethodInfo *)item);
  v6 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v3->fields._PickupInfoList_k__BackingField, 0) )
  {
    PickupInfoList_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)v3->fields._PickupInfoList_k__BackingField;
    v8 = EventCraftListViewItemDraw___c_TypeInfo;
    if ( !EventCraftListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCraftListViewItemDraw___c_TypeInfo);
      v8 = EventCraftListViewItemDraw___c_TypeInfo;
    }
    _9__45_0 = (System_Func_object__long__o *)v8->static_fields->__9__45_0;
    if ( !_9__45_0 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = EventCraftListViewItemDraw___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v8->static_fields->__9;
      _9__45_0 = (System_Func_object__long__o *)sub_1C6BC54(System_Func_EventCraftPickupInfo__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__45_0,
        v10,
        Method_EventCraftListViewItemDraw___c__UpdateSupportToolLb_b__45_0__,
        0);
      static_fields = EventCraftListViewItemDraw___c_TypeInfo->static_fields;
      static_fields->__9__45_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__45_0;
      sub_1C6B9AC(&static_fields->__9__45_0, _9__45_0);
    }
    v12 = System_Linq_Enumerable__Select_object__long_(
            PickupInfoList_k__BackingField,
            (System_Func_TSource__TResult__o *)_9__45_0,
            (const MethodInfo_317181C *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    v6 = System_Linq_Enumerable__Max_66967376((System_Collections_Generic_IEnumerable_long__o *)v12, 0);
  }
  this = (EventCraftListViewItemDraw_o *)v4->fields.supportToolUsedSprite;
  if ( !this )
    goto LABEL_23;
  this = (EventCraftListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, IsUsedSupportTool, 0);
  this = (EventCraftListViewItemDraw_o *)v4->fields.craftIconSupportToolBg;
  if ( !this )
    goto LABEL_23;
  this = (EventCraftListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, IsUsedSupportTool, 0);
  supportToolLeftTime = v4->fields.supportToolLeftTime;
  if ( IsUsedSupportTool )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3879/*"CRAFT_EVENT_BOARD_SUPPORT_TOOL_LEFT_TIME"*/, 0);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_13397/*"TIME_FORMAT_1"*/, 0);
    RestTimeInFormat = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(v6, -1, v15, 0);
    this = (EventCraftListViewItemDraw_o *)System_String__Format(v14, RestTimeInFormat, 0);
    item = (EventCraftListViewItem_o *)this;
  }
  else
  {
    item = (EventCraftListViewItem_o *)string_TypeInfo->static_fields->Empty;
  }
  if ( !supportToolLeftTime )
LABEL_23:
    sub_1C6BC60(this, item);
  UILabel__set_text(supportToolLeftTime, (System_String_o *)item, 0);
}


void EventCraftListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4CB04A7 & 1) == 0 )
  {
    sub_1C6BA08(&EventCraftListViewItemDraw___c_TypeInfo);
    byte_4CB04A7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(EventCraftListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventCraftListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct EventCraftListViewItemDraw___c_o *)v1;
  sub_1C6B9AC(EventCraftListViewItemDraw___c_TypeInfo->static_fields, v1);
}


void EventCraftListViewItemDraw___c___ctor(EventCraftListViewItemDraw___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventCraftListViewItemDraw___c___HideCraftMiniObj_b__44_0(
        EventCraftListViewItemDraw___c_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  if ( !sprite
    || (this = (EventCraftListViewItemDraw___c_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)sprite,
                                                     0)) == 0 )
  {
    sub_1C6BC60(this, sprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void EventCraftListViewItemDraw___c___UpdateCraftIconMiniSprite_b__43_0(
        EventCraftListViewItemDraw___c_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  if ( !sprite
    || (this = (EventCraftListViewItemDraw___c_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)sprite,
                                                     0)) == 0 )
  {
    sub_1C6BC60(this, sprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


int64_t EventCraftListViewItemDraw___c___UpdateItem_b__42_0(
        EventCraftListViewItemDraw___c_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.endedAt;
}


int64_t EventCraftListViewItemDraw___c___UpdateItem_b__42_1(
        EventCraftListViewItemDraw___c_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.startedAt;
}


int64_t EventCraftListViewItemDraw___c___UpdateSupportToolLb_b__45_0(
        EventCraftListViewItemDraw___c_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.endedAt;
}


void EventCraftListViewItemDraw___c__DisplayClass40_0___ctor(
        EventCraftListViewItemDraw___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventCraftListViewItemDraw___c__DisplayClass40_0___SetItem_b__0(
        EventCraftListViewItemDraw___c__DisplayClass40_0_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  EventCraftListViewItemDraw___c__DisplayClass40_0_o *v4; // x20
  struct ItemEntity_o *itemEnt; // x8
  int32_t imageId; // w20

  v4 = this;
  if ( (byte_4CB04A8 & 1) == 0 )
  {
    this = (EventCraftListViewItemDraw___c__DisplayClass40_0_o *)sub_1C6BA08(&AtlasManager_TypeInfo);
    byte_4CB04A8 = 1;
  }
  itemEnt = v4->fields.itemEnt;
  if ( !itemEnt )
    sub_1C6BC60(this, sprite);
  imageId = itemEnt->fields.imageId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(sprite, imageId, 0);
}