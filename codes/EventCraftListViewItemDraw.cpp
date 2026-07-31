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

  EventCraftListViewManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, method);
  if ( !this->fields.craftIconMiniSprites )
    sub_21FFECC(v3, v4);
}


// local variable allocation has failed, the output may be wrong!
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
        sub_21FFECC(*(_QWORD *)&initMode, 0);
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
  __int64 v2; // x2
  EventCraftListViewItemDraw___c_c *v4; // x0
  System_Collections_Generic_IEnumerable_T__o *craftIconMiniSprites; // x19
  struct EventCraftListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__44_0; // x20
  Il2CppObject *v8; // x21
  struct EventCraftListViewItemDraw___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_59323FE & 1) == 0 )
  {
    sub_21FFC50(&System_Action_UISprite__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_UISprite___);
    sub_21FFC50(&Method_EventCraftListViewItemDraw___c__HideCraftMiniObj_b__44_0__);
    sub_21FFC50(&EventCraftListViewItemDraw___c_TypeInfo);
    byte_59323FE = 1;
  }
  v4 = EventCraftListViewItemDraw___c_TypeInfo;
  craftIconMiniSprites = (System_Collections_Generic_IEnumerable_T__o *)this->fields.craftIconMiniSprites;
  if ( !*(&EventCraftListViewItemDraw___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventCraftListViewItemDraw___c_TypeInfo, method, v2);
    v4 = EventCraftListViewItemDraw___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__44_0 = (System_Action_object__o *)static_fields->__9__44_0;
  if ( !_9__44_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = EventCraftListViewItemDraw___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__44_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(_9__44_0, v8, Method_EventCraftListViewItemDraw___c__HideCraftMiniObj_b__44_0__, 0);
    v9 = EventCraftListViewItemDraw___c_TypeInfo->static_fields;
    v9->__9__44_0 = (struct System_Action_UISprite__o *)_9__44_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__44_0, (int32_t)_9__44_0, v10, v11, v12, v13, v14, v15);
  }
  BasicHelper__ForEach_object_(
    craftIconMiniSprites,
    (System_Action_T__o *)_9__44_0,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_UISprite___);
}


// local variable allocation has failed, the output may be wrong!
void EventCraftListViewItemDraw__SetItem(
        EventCraftListViewItemDraw_o *this,
        EventCraftListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  int32_t EventId_k__BackingField; // w22
  UISprite_o *craftingBaseSprite; // x23
  __int64 v9; // x1
  __int64 v10; // x2
  UILabel_o *craftStartLabel; // x23
  int64_t Master_object; // x0
  const MethodInfo *v13; // x1
  UILabel_o *receiveLabel; // x23
  UILabel_o *replenishmentLabel; // x23
  UILabel_o *withdrawLabel; // x23
  UILabel_o *supportToolLabel; // x23
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x23
  __int64 v22; // x1
  __int64 v23; // x2
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x8
  GiftEntity_array *GiftListById; // x25
  __int64 v26; // x1
  __int64 v27; // x2
  GiftEntity_o *v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  Il2CppObject *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  UISprite_o *baseSprite; // x26
  UserItemMaster_o *v35; // x24
  GiftEntity_o *v36; // x8
  __int64 v37; // x1
  __int64 v38; // x2
  long double v39; // q0
  GiftEntity_o *v40; // x8
  int32_t num; // w8
  UISprite_o *v42; // x23
  struct ItemIconComponent_o *craftItemIcon; // x8
  __int64 v44; // x1
  __int64 v45; // x2
  UILabel_o *v46; // x22
  struct EventTradeGoodsEntity_o *v47; // x8
  UILabel_o *possessionNumLabel; // x22
  Il2CppObject *v49; // x0
  struct EventTradeGoodsEntity_o *v50; // x8
  UILabel_o *nameTextLabel; // x22
  __int64 v52; // x8
  System_String_o **p_name; // x8
  struct EventTradeGoodsEntity_o *v54; // x8
  const MethodInfo *v55; // x2
  System_Collections_Generic_IEnumerable_T__o *craftIconMiniSprites; // x22
  System_Action_object__o *v57; // x25
  __int64 v58; // x1
  __int64 v59; // x2
  long double v60; // q0
  int64_t v61; // x0
  struct ItemEntity_o *SupportTool_k__BackingField; // x8
  int32_t id; // w3
  int32_t v64; // w8
  UILabel_o *eventRestTimeLabel; // x22
  unsigned int v66; // w21
  const MethodInfo *v67; // x1
  bool v68; // w1
  __int64 v69; // x1
  __int64 v70; // x2
  UILabel_o *textOnMask; // x20
  int32_t v72; // [xsp+Ch] [xbp-64h] BYREF
  UserItemEntity_o *v73; // [xsp+10h] [xbp-60h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_59323FB & 1) == 0 )
  {
    sub_21FFC50(&System_Action_UISprite__TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_UISprite___);
    sub_21FFC50(&Method_DataManager_GetMaster_GiftMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_EventCraftListViewItemDraw___c__DisplayClass40_0__SetItem_b__0__);
    sub_21FFC50(&EventCraftListViewItemDraw___c__DisplayClass40_0_TypeInfo);
    sub_21FFC50(&StringLiteral_21363/*"img_item_brank"*/);
    sub_21FFC50(&StringLiteral_4025/*"CRAFT_EVENT_BOARD_SUPPORT_TOOL_BUTTON"*/);
    sub_21FFC50(&StringLiteral_18201/*"btn_craft_bg_02"*/);
    sub_21FFC50(&StringLiteral_18202/*"btn_craft_bg_03"*/);
    sub_21FFC50(&StringLiteral_21324/*"img_craft_reward_bg_1"*/);
    sub_21FFC50(&StringLiteral_21115/*"icon_craftsupport_frame"*/);
    sub_21FFC50(&StringLiteral_13991/*"TRADE_EVENT_BOARD_WITHDRAWALLABEL_BUTTON"*/);
    sub_21FFC50(&StringLiteral_18203/*"btn_craft_bg_04"*/);
    sub_21FFC50(&StringLiteral_13987/*"TRADE_EVENT_BOARD_RECEIVE_BUTTON"*/);
    sub_21FFC50(&StringLiteral_4024/*"CRAFT_EVENT_BOARD_START_BUTTON"*/);
    sub_21FFC50(&StringLiteral_20027/*"event_craft_8049402"*/);
    sub_21FFC50(&StringLiteral_21113/*"icon_craft_reward"*/);
    sub_21FFC50(&StringLiteral_20026/*"event_craft_8049401"*/);
    sub_21FFC50(&StringLiteral_13988/*"TRADE_EVENT_BOARD_REPLENISHMENT_BUTTON"*/);
    sub_21FFC50(&StringLiteral_26381/*"{0:#,0}"*/);
    sub_21FFC50(&StringLiteral_21114/*"icon_craftsupport"*/);
    sub_21FFC50(&StringLiteral_20028/*"event_craft_8049403"*/);
    sub_21FFC50(&StringLiteral_19103/*"craftgauge_bar"*/);
    sub_21FFC50(&StringLiteral_4036/*"CRAFT_EVENT_END"*/);
    sub_21FFC50(&StringLiteral_18200/*"btn_craft_bg_01"*/);
    sub_21FFC50(&StringLiteral_13990/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/);
    sub_21FFC50(&StringLiteral_19104/*"craftgauge_bg"*/);
    byte_59323FB = 1;
  }
  v73 = 0;
  entity = 0;
  if ( item && mode )
  {
    EventId_k__BackingField = item->fields._EventId_k__BackingField;
    craftingBaseSprite = this->fields.craftingBaseSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item, *(_QWORD *)&mode);
    AtlasManager__SetEventUI_47538316(
      EventId_k__BackingField,
      craftingBaseSprite,
      (System_String_o *)StringLiteral_20027/*"event_craft_8049402"*/,
      0);
    AtlasManager__SetEventUI_47538316(
      EventId_k__BackingField,
      this->fields.progressGaugeFront,
      (System_String_o *)StringLiteral_19103/*"craftgauge_bar"*/,
      0);
    AtlasManager__SetEventUI_47538316(
      EventId_k__BackingField,
      this->fields.progressGaugeBack,
      (System_String_o *)StringLiteral_19104/*"craftgauge_bg"*/,
      0);
    craftStartLabel = this->fields.craftStartLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
    Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_4024/*"CRAFT_EVENT_BOARD_START_BUTTON"*/, 0);
    if ( !craftStartLabel )
      goto LABEL_92;
    UILabel__set_text(craftStartLabel, (System_String_o *)Master_object, 0);
    AtlasManager__SetEventUI_47538316(
      EventId_k__BackingField,
      this->fields.craftStartButtonSprite,
      (System_String_o *)StringLiteral_18200/*"btn_craft_bg_01"*/,
      0);
    receiveLabel = this->fields.receiveLabel;
    Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13987/*"TRADE_EVENT_BOARD_RECEIVE_BUTTON"*/, 0);
    if ( !receiveLabel )
      goto LABEL_92;
    UILabel__set_text(receiveLabel, (System_String_o *)Master_object, 0);
    AtlasManager__SetEventUI_47538316(
      EventId_k__BackingField,
      this->fields.receiveButtonSprite,
      (System_String_o *)StringLiteral_18202/*"btn_craft_bg_03"*/,
      0);
    replenishmentLabel = this->fields.replenishmentLabel;
    Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13988/*"TRADE_EVENT_BOARD_REPLENISHMENT_BUTTON"*/, 0);
    if ( !replenishmentLabel )
      goto LABEL_92;
    UILabel__set_text(replenishmentLabel, (System_String_o *)Master_object, 0);
    AtlasManager__SetEventUI_47538316(
      EventId_k__BackingField,
      this->fields.replenishmentButtonSprite,
      (System_String_o *)StringLiteral_18200/*"btn_craft_bg_01"*/,
      0);
    withdrawLabel = this->fields.withdrawLabel;
    Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13991/*"TRADE_EVENT_BOARD_WITHDRAWALLABEL_BUTTON"*/, 0);
    if ( !withdrawLabel )
      goto LABEL_92;
    UILabel__set_text(withdrawLabel, (System_String_o *)Master_object, 0);
    AtlasManager__SetEventUI_47538316(
      EventId_k__BackingField,
      this->fields.withdrawButtonSprite,
      (System_String_o *)StringLiteral_18203/*"btn_craft_bg_04"*/,
      0);
    supportToolLabel = this->fields.supportToolLabel;
    Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_4025/*"CRAFT_EVENT_BOARD_SUPPORT_TOOL_BUTTON"*/, 0);
    if ( !supportToolLabel )
      goto LABEL_92;
    UILabel__set_text(supportToolLabel, (System_String_o *)Master_object, 0);
    AtlasManager__SetEventUI_47538316(
      EventId_k__BackingField,
      this->fields.supportToolButtonSprite,
      (System_String_o *)StringLiteral_18201/*"btn_craft_bg_02"*/,
      0);
    AtlasManager__SetEventUI_47538316(
      EventId_k__BackingField,
      this->fields.supportToolUsedSprite,
      (System_String_o *)StringLiteral_21114/*"icon_craftsupport"*/,
      0);
    AtlasManager__SetEventUI_47538316(
      EventId_k__BackingField,
      this->fields.craftIconSupportToolBg,
      (System_String_o *)StringLiteral_21115/*"icon_craftsupport_frame"*/,
      0);
    AtlasManager__SetEventUI_47538316(
      EventId_k__BackingField,
      this->fields.rewardHeader,
      (System_String_o *)StringLiteral_21113/*"icon_craft_reward"*/,
      0);
    AtlasManager__SetEventUI_47538316(
      EventId_k__BackingField,
      this->fields.backSprite,
      (System_String_o *)StringLiteral_21324/*"img_craft_reward_bg_1"*/,
      0);
    EventCraftListViewItemDraw__SetReleaseDisplayObject(this, item->fields._IsRelease_k__BackingField, v18);
    if ( item->fields._IsRelease_k__BackingField )
    {
      v21 = sub_21FFEBC(EventCraftListViewItemDraw___c__DisplayClass40_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v21, 0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22, v23);
      Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GiftMaster___);
      TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
      if ( !TradeGoodsEntity_k__BackingField || !Master_object )
        goto LABEL_92;
      GiftListById = GiftMaster__GetGiftListById(
                       (GiftMaster_o *)Master_object,
                       TradeGoodsEntity_k__BackingField->fields.giftId,
                       0);
      if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)GiftListById, 0) )
        return;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v26, v27);
      Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !v21 || !GiftListById )
        goto LABEL_92;
      if ( !LODWORD(GiftListById->max_length) )
        goto LABEL_93;
      v28 = GiftListById->m_Items[0];
      if ( !v28 || !Master_object )
        goto LABEL_92;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              (Il2CppObject **)(v21 + 16),
              v28->fields.objectId,
              (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        return;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29, v30);
      v31 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserItemMaster___);
      baseSprite = this->fields.baseSprite;
      v35 = (UserItemMaster_o *)v31;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v32, v33);
      Master_object = AtlasManager__SetEventUI_47538316(
                        EventId_k__BackingField,
                        baseSprite,
                        (System_String_o *)StringLiteral_20026/*"event_craft_8049401"*/,
                        0);
      if ( !LODWORD(GiftListById->max_length) )
        goto LABEL_93;
      v36 = GiftListById->m_Items[0];
      if ( !v36 )
        goto LABEL_92;
      Master_object = (int64_t)this->fields.craftItemIcon;
      if ( !Master_object )
        goto LABEL_92;
      ItemIconComponent__SetItem((ItemIconComponent_o *)Master_object, v36->fields.objectId, -1, 1, 0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v39 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v37, v38);
      Master_object = sub_23D80E0(0, v39);
      if ( !LODWORD(GiftListById->max_length) )
LABEL_93:
        sub_21FFED4(Master_object);
      v40 = GiftListById->m_Items[0];
      if ( !v40 || !v35 )
        goto LABEL_92;
      Master_object = UserItemMaster__TryGetEntity(v35, &entity, Master_object, v40->fields.objectId, 0);
      if ( (Master_object & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_92;
        num = entity->fields.num;
      }
      else
      {
        num = 0;
      }
      possessionNumLabel = this->fields.possessionNumLabel;
      v72 = num;
      v49 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v72);
      Master_object = (int64_t)System_String__Format((System_String_o *)StringLiteral_26381/*"{0:#,0}"*/, v49, 0);
      if ( !possessionNumLabel )
        goto LABEL_92;
      UILabel__set_text(possessionNumLabel, (System_String_o *)Master_object, 0);
      v50 = item->fields._TradeGoodsEntity_k__BackingField;
      if ( !v50 )
        goto LABEL_92;
      nameTextLabel = this->fields.nameTextLabel;
      Master_object = System_String__IsNullOrEmpty(v50->fields.name, 0);
      if ( (Master_object & 1) != 0 )
      {
        v52 = *(_QWORD *)(v21 + 16);
        if ( !v52 )
          goto LABEL_92;
        p_name = (System_String_o **)(v52 + 24);
      }
      else
      {
        v54 = item->fields._TradeGoodsEntity_k__BackingField;
        if ( !v54 )
          goto LABEL_92;
        p_name = &v54->fields.name;
      }
      if ( !nameTextLabel )
LABEL_92:
        sub_21FFECC(Master_object, v13);
      UILabel__set_text(nameTextLabel, *p_name, 0);
      EventCraftListViewItemDraw__SetPriceIconText(this, item, v55);
      craftIconMiniSprites = (System_Collections_Generic_IEnumerable_T__o *)this->fields.craftIconMiniSprites;
      v57 = (System_Action_object__o *)sub_21FFEBC(System_Action_UISprite__TypeInfo);
      System_Action_object____ctor(
        v57,
        (Il2CppObject *)v21,
        Method_EventCraftListViewItemDraw___c__DisplayClass40_0__SetItem_b__0__,
        0);
      BasicHelper__ForEach_object_(
        craftIconMiniSprites,
        (System_Action_T__o *)v57,
        (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_UISprite___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v60 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v58, v59);
      v61 = sub_23D80E0(0, v60);
      SupportTool_k__BackingField = item->fields._SupportTool_k__BackingField;
      if ( SupportTool_k__BackingField )
        id = SupportTool_k__BackingField->fields.id;
      else
        id = 0;
      Master_object = UserItemMaster__TryGetEntity(v35, &v73, v61, id, 0);
      if ( (Master_object & 1) != 0 )
      {
        if ( !v73 )
          goto LABEL_92;
        v64 = v73->fields.num;
      }
      else
      {
        v64 = 0;
      }
      item->fields._PossessionNum_k__BackingField = v64;
    }
    else
    {
      v42 = this->fields.baseSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v19, v20);
      Master_object = AtlasManager__SetEventUI_47538316(
                        EventId_k__BackingField,
                        v42,
                        (System_String_o *)StringLiteral_20028/*"event_craft_8049403"*/,
                        0);
      craftItemIcon = this->fields.craftItemIcon;
      if ( !craftItemIcon )
        goto LABEL_92;
      AtlasManager__SetEventUI_47538316(
        EventId_k__BackingField,
        craftItemIcon->fields.iconSprite,
        (System_String_o *)StringLiteral_21363/*"img_item_brank"*/,
        0);
      v46 = this->fields.nameTextLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44, v45);
      Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13990/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, 0);
      if ( !v46 )
        goto LABEL_92;
      UILabel__set_text(v46, (System_String_o *)Master_object, 0);
      v47 = item->fields._TradeGoodsEntity_k__BackingField;
      if ( !v47 )
        goto LABEL_92;
      Master_object = (int64_t)this->fields.textOnMask;
      if ( !Master_object )
        goto LABEL_92;
      UILabel__set_text((UILabel_o *)Master_object, v47->fields.closedMessage, 0);
    }
    eventRestTimeLabel = this->fields.eventRestTimeLabel;
    Master_object = (int64_t)EventCraftListViewItem__get_RestTimeEventAt(item, v13);
    if ( eventRestTimeLabel )
    {
      UILabel__set_text(eventRestTimeLabel, (System_String_o *)Master_object, 0);
      Master_object = (int64_t)this->fields.craftingBaseSprite;
      if ( Master_object )
      {
        Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
        if ( Master_object )
        {
          v66 = mode & 0xFFFFFFFE;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v66 == 4, 0);
          if ( !EventCraftListViewItem__get_IsEventEnd(item, v67) )
            return;
          if ( v66 == 4 )
          {
            Master_object = (int64_t)this->fields.textOnMask;
            if ( Master_object )
            {
              UILabel__set_text((UILabel_o *)Master_object, **(System_String_o ***)(qword_594C0B8 + 184), 0);
              Master_object = (int64_t)this->fields.maskSprite;
              if ( Master_object )
              {
                Master_object = (int64_t)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)Master_object,
                                           0);
                if ( Master_object )
                {
                  v68 = 0;
LABEL_90:
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v68, 0);
                  return;
                }
              }
            }
          }
          else
          {
            EventCraftListViewItemDraw__HideCraftMiniObj(this, v13);
            Master_object = (int64_t)this->fields.progressBar;
            if ( Master_object )
            {
              Master_object = (int64_t)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)Master_object,
                                         0);
              if ( Master_object )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
                textOnMask = this->fields.textOnMask;
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v69, v70);
                Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_4036/*"CRAFT_EVENT_END"*/, 0);
                if ( textOnMask )
                {
                  UILabel__set_text(textOnMask, (System_String_o *)Master_object, 0);
                  Master_object = (int64_t)this->fields.textOnMask;
                  if ( Master_object )
                  {
                    Master_object = (int64_t)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)Master_object,
                                               0);
                    if ( Master_object )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
                      Master_object = (int64_t)this->fields.maskSprite;
                      if ( Master_object )
                      {
                        Master_object = (int64_t)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)Master_object,
                                                   0);
                        if ( Master_object )
                        {
                          v68 = 1;
                          goto LABEL_90;
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
    goto LABEL_92;
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
    sub_21FFECC(this, item);
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
    sub_21FFECC(maskSprite, isRelease);
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
  struct EventCraftListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__43_0; // x22
  Il2CppObject *v9; // x23
  struct EventCraftListViewItemDraw___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  UnityEngine_GameObject_o *NowCompleteNum; // x0
  const MethodInfo *v18; // x1
  __int64 v19; // x21
  struct UISprite_array *v20; // x8
  const MethodInfo *v21; // x1

  if ( (byte_59323FD & 1) == 0 )
  {
    sub_21FFC50(&System_Action_UISprite__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_UISprite___);
    sub_21FFC50(&Method_EventCraftListViewItemDraw___c__UpdateCraftIconMiniSprite_b__43_0__);
    sub_21FFC50(&EventCraftListViewItemDraw___c_TypeInfo);
    byte_59323FD = 1;
  }
  v5 = EventCraftListViewItemDraw___c_TypeInfo;
  craftIconMiniSprites = (System_Collections_Generic_IEnumerable_T__o *)this->fields.craftIconMiniSprites;
  if ( !*(&EventCraftListViewItemDraw___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventCraftListViewItemDraw___c_TypeInfo, item, method);
    v5 = EventCraftListViewItemDraw___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__43_0 = (System_Action_object__o *)static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, item, method);
      static_fields = EventCraftListViewItemDraw___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__43_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(
      _9__43_0,
      v9,
      Method_EventCraftListViewItemDraw___c__UpdateCraftIconMiniSprite_b__43_0__,
      0);
    v10 = EventCraftListViewItemDraw___c_TypeInfo->static_fields;
    v10->__9__43_0 = (struct System_Action_UISprite__o *)_9__43_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->__9__43_0, (int32_t)_9__43_0, v11, v12, v13, v14, v15, v16);
  }
  BasicHelper__ForEach_object_(
    craftIconMiniSprites,
    (System_Action_T__o *)_9__43_0,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_UISprite___);
  if ( !item )
    goto LABEL_18;
  NowCompleteNum = (UnityEngine_GameObject_o *)EventCraftListViewItem__get_NowCompleteNum(item, v18);
  if ( (int)NowCompleteNum >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      v20 = this->fields.craftIconMiniSprites;
      if ( !v20 )
        break;
      if ( (unsigned int)v19 >= LODWORD(v20->max_length) )
        sub_21FFED4(NowCompleteNum);
      NowCompleteNum = (UnityEngine_GameObject_o *)v20->m_Items[v19];
      if ( !NowCompleteNum )
        break;
      NowCompleteNum = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NowCompleteNum, 0);
      if ( !NowCompleteNum )
        break;
      UnityEngine_GameObject__SetActive(NowCompleteNum, 1, 0);
      NowCompleteNum = (UnityEngine_GameObject_o *)EventCraftListViewItem__get_NowCompleteNum(item, v21);
      if ( (int)++v19 >= (int)NowCompleteNum )
        return;
    }
LABEL_18:
    sub_21FFECC(NowCompleteNum, v18);
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
  __int64 v8; // x1
  __int64 v9; // x2
  int64_t v10; // x23
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *PickupInfoList_k__BackingField; // x22
  EventCraftListViewItemDraw___c_c *v12; // x0
  struct EventCraftListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Func_object__long__o *_9__42_0; // x23
  Il2CppObject *v15; // x25
  struct EventCraftListViewItemDraw___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v23; // x0
  __int64 Time; // x0
  const MethodInfo *v25; // x1
  __int64 v26; // x22
  struct UICommonButton_o *supportToolButton; // x24
  const MethodInfo *v28; // x1
  __int64 v29; // x2
  char v30; // w8
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  struct EventTradeInfo_o *v32; // x8
  float v33; // s8
  __int64 v34; // x1
  __int64 v35; // x2
  UISprite_o *v36; // x24
  __int64 v37; // x1
  __int64 v38; // x2
  EventCraftTimeCalculation_c *v39; // x0
  int32_t DEFAULT_EVENT_CRAFT_TIME_RATE; // w26
  __int64 v41; // x2
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *v42; // x21
  EventCraftListViewItemDraw___c_c *v43; // x0
  struct EventCraftListViewItemDraw___c_StaticFields *v44; // x8
  System_Func_object__long__o *_9__42_1; // x24
  Il2CppObject *v46; // x25
  struct EventCraftListViewItemDraw___c_StaticFields *v47; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v54; // x0
  struct ItemEntity_o *SupportTool_k__BackingField; // x8
  struct EventTradeGoodsEntity_o *v56; // x8
  int32_t tradeTime; // w21
  double v58; // d8
  __int64 v59; // x1
  __int64 v60; // x2
  int64_t v61; // x22
  UILabel_o *timeRequiredCraft; // x21
  System_String_o *v63; // x0
  const MethodInfo *v64; // x1
  struct UICommonButton_o *craftStartButton; // x21
  const MethodInfo *v66; // x1
  char IsRelease_k__BackingField; // w8
  const MethodInfo *v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  UILabel_o *progressLabel; // x23
  System_String_o *v72; // x24
  const MethodInfo *v73; // x1
  struct EventTradeInfo_o *v74; // x8
  Il2CppObject *v75; // x25
  Il2CppObject *v76; // x0
  struct EventTradeInfo_o *v77; // x8
  __int64 v78; // x1
  __int64 v79; // x2
  struct UICommonButton_o *replenishmentButton; // x23
  const MethodInfo *v81; // x1
  char v82; // w8
  UISprite_o *backSprite; // x23
  __int64 v84; // x2
  const MethodInfo *v85; // x5
  struct EventTradeInfo_o *v86; // x8
  int64_t startedAt; // x23
  EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x25
  System_Collections_Generic_List_EventCraftPickupInfo__o *v89; // x26
  int32_t tradeNum; // w24
  int64_t v91; // x22
  const MethodInfo *v92; // x1
  __int64 v93; // x1
  __int64 v94; // x2
  int32_t NowTradeNum; // w8
  UILabel_o *timeLeftLabel; // x20
  int v97; // w9
  System_String_o *v98; // x0
  __int64 v99; // x1
  __int64 v100; // x2
  AtlasManager_c *v101; // x0
  UISprite_o *craftingStateSprite; // x20
  __int64 *v103; // x23
  float v104; // s1 OVERLAPPED
  float v105; // s2
  float v106; // s3
  float v107; // s0
  int v108; // [xsp+8h] [xbp-68h] BYREF
  int32_t NowCompleteNum; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_59323FC & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    sub_21FFC50(&EventCraftTimeCalculation_TypeInfo);
    sub_21FFC50(&System_Func_EventCraftPickupInfo__long__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_EventCraftListViewItemDraw___c__UpdateItem_b__42_0__);
    sub_21FFC50(&Method_EventCraftListViewItemDraw___c__UpdateItem_b__42_1__);
    sub_21FFC50(&EventCraftListViewItemDraw___c_TypeInfo);
    sub_21FFC50(&StringLiteral_21324/*"img_craft_reward_bg_1"*/);
    sub_21FFC50(&StringLiteral_21112/*"icon_craft_intrade"*/);
    sub_21FFC50(&StringLiteral_21111/*"icon_craft_compleate"*/);
    sub_21FFC50(&StringLiteral_21325/*"img_craft_reward_bg_2"*/);
    sub_21FFC50(&StringLiteral_4041/*"CRAFT_EVENT_PROGRESS_NUM"*/);
    sub_21FFC50(&StringLiteral_13920/*"TIME_FORMAT_1"*/);
    sub_21FFC50(&StringLiteral_14026/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/);
    byte_59323FC = 1;
  }
  if ( item && mode && item->fields._TradeGoodsEntity_k__BackingField && item->fields._IsRelease_k__BackingField )
  {
    EventCraftListViewItemDraw__UpdateSupportToolLb(this, item, *(const MethodInfo **)&mode);
    EventId_k__BackingField = item->fields._EventId_k__BackingField;
    v10 = 0;
    if ( !BasicHelper__IsNullOrEmpty(
            (System_Collections_ICollection_o *)item->fields._PickupInfoList_k__BackingField,
            0) )
    {
      PickupInfoList_k__BackingField = item->fields._PickupInfoList_k__BackingField;
      v12 = EventCraftListViewItemDraw___c_TypeInfo;
      if ( !*(&EventCraftListViewItemDraw___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventCraftListViewItemDraw___c_TypeInfo, v8, v9);
        v12 = EventCraftListViewItemDraw___c_TypeInfo;
      }
      static_fields = v12->static_fields;
      _9__42_0 = (System_Func_object__long__o *)static_fields->__9__42_0;
      if ( !_9__42_0 )
      {
        if ( !*(&v12->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v12, v8, v9);
          static_fields = EventCraftListViewItemDraw___c_TypeInfo->static_fields;
        }
        v15 = (Il2CppObject *)static_fields->__9;
        _9__42_0 = (System_Func_object__long__o *)sub_21FFEBC(System_Func_EventCraftPickupInfo__long__TypeInfo);
        System_Func_object__long____ctor(_9__42_0, v15, Method_EventCraftListViewItemDraw___c__UpdateItem_b__42_0__, 0);
        v16 = EventCraftListViewItemDraw___c_TypeInfo->static_fields;
        v16->__9__42_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__42_0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v16->__9__42_0,
          (int32_t)_9__42_0,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
      }
      v23 = System_Linq_Enumerable__Select_object__long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)PickupInfoList_k__BackingField,
              (System_Func_TSource__TResult__o *)_9__42_0,
              (const MethodInfo_385D9DC *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
      v10 = System_Linq_Enumerable__Max_78395108((System_Collections_Generic_IEnumerable_long__o *)v23, 0);
    }
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
    Time = NetworkManager__getTime(0);
    if ( !this->fields.supportToolButtonSprite )
      goto LABEL_137;
    v26 = Time;
    Time = (__int64)UnityEngine_Component__get_gameObject(
                      (UnityEngine_Component_o *)this->fields.supportToolButtonSprite,
                      0);
    if ( !Time )
      goto LABEL_137;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
    if ( (mode & 0xFFFFFFFE) == 4 )
    {
      if ( !item->fields._TradeInfo_k__BackingField )
      {
        EventCraftListViewItemDraw__HideCraftMiniObj(this, v25);
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
              Time = EventCraftListViewItem__get_NowTradeNum(item, v28);
              if ( (int)Time < 1 || item->fields._PossessionNum_k__BackingField < 1 )
                goto LABEL_30;
              Time = (__int64)BalanceConfig_TypeInfo;
              if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v25, v29);
                Time = (__int64)BalanceConfig_TypeInfo;
              }
              if ( v10 - v26 <= *(int *)(*(_QWORD *)(Time + 184) + 1236LL) )
              {
                Time = EventCraftListViewItem__get_IsEventEnd(item, v25);
                v30 = Time ^ 1;
                if ( !supportToolButton )
                  goto LABEL_137;
              }
              else
              {
LABEL_30:
                v30 = 0;
                if ( !supportToolButton )
                  goto LABEL_137;
              }
              Time = ((__int64 (__fastcall *)(struct UICommonButton_o *, _QWORD, const MethodInfo *))supportToolButton->klass->vtable._5_set_isEnabled.methodPtr)(
                       supportToolButton,
                       v30 & 1,
                       supportToolButton->klass->vtable._5_set_isEnabled.method);
              TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
              if ( !TradeInfo_k__BackingField )
                goto LABEL_137;
              if ( TradeInfo_k__BackingField->fields.tradeNum )
              {
                Time = EventCraftListViewItem__get_NowCompleteNum(item, v25);
                v32 = item->fields._TradeInfo_k__BackingField;
                if ( !v32 )
                  goto LABEL_137;
                v33 = (float)(int)Time / (float)(v32->fields.getNum + v32->fields.tradeNum);
              }
              else
              {
                v33 = 0.0;
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
                    UIProgressBar__set_value((UIProgressBar_o *)Time, v33, 0);
                    EventCraftListViewItemDraw__UpdateCraftIconMiniSprite(this, item, v68);
                    progressLabel = this->fields.progressLabel;
                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v69, v70);
                    v72 = LocalizationManager__Get((System_String_o *)StringLiteral_4041/*"CRAFT_EVENT_PROGRESS_NUM"*/, 0);
                    NowCompleteNum = EventCraftListViewItem__get_NowCompleteNum(item, v73);
                    Time = j_il2cpp_value_box_0(qword_594C070, &NowCompleteNum);
                    v74 = item->fields._TradeInfo_k__BackingField;
                    if ( v74 )
                    {
                      v75 = (Il2CppObject *)Time;
                      v108 = v74->fields.getNum + v74->fields.tradeNum;
                      v76 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v108);
                      Time = (__int64)System_String__Format_75484576(v72, v75, v76, 0);
                      if ( progressLabel )
                      {
                        UILabel__set_text(progressLabel, (System_String_o *)Time, 0);
                        v77 = item->fields._TradeInfo_k__BackingField;
                        if ( v77
                          && (v77->fields.getNum >= 1 || EventCraftListViewItem__get_NowCompleteNum(item, v25) >= 1) )
                        {
                          ActionExtensions__Call(item->fields._UpdateReceiveAllButtonState_k__BackingField, 0);
                          Time = (__int64)this->fields.receiveButtonSprite;
                          if ( !Time )
                            goto LABEL_137;
                          Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_137;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
                          Time = (__int64)this->fields.replenishmentButtonSprite;
                          if ( !Time )
                            goto LABEL_137;
                          Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_137;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                          Time = (__int64)this->fields.withdrawButtonSprite;
                          if ( !Time )
                            goto LABEL_137;
                          Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_137;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                        }
                        else
                        {
                          Time = (__int64)this->fields.receiveButtonSprite;
                          if ( !Time )
                            goto LABEL_137;
                          Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_137;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
                          Time = (__int64)this->fields.replenishmentButtonSprite;
                          if ( !Time )
                            goto LABEL_137;
                          Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_137;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
                          Time = (__int64)this->fields.withdrawButtonSprite;
                          if ( !Time )
                            goto LABEL_137;
                          Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
                          if ( !Time )
                            goto LABEL_137;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
                          replenishmentButton = this->fields.replenishmentButton;
                          Time = EventCraftListViewItem__get_IsRefillable(item, v81);
                          if ( (Time & 1) != 0 )
                          {
                            Time = EventCraftListViewItem__get_IsEventEnd(item, v25);
                            v82 = Time ^ 1;
                          }
                          else
                          {
                            v82 = 0;
                          }
                          if ( !replenishmentButton )
                            goto LABEL_137;
                          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, const MethodInfo *))replenishmentButton->klass->vtable._5_set_isEnabled.methodPtr)(
                            replenishmentButton,
                            v82 & 1,
                            replenishmentButton->klass->vtable._5_set_isEnabled.method);
                        }
                        backSprite = this->fields.backSprite;
                        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v78, v79);
                        Time = AtlasManager__SetEventUI_47538316(
                                 EventId_k__BackingField,
                                 backSprite,
                                 (System_String_o *)StringLiteral_21325/*"img_craft_reward_bg_2"*/,
                                 0);
                        v86 = item->fields._TradeInfo_k__BackingField;
                        if ( v86 )
                        {
                          startedAt = v86->fields.startedAt;
                          TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
                          v89 = item->fields._PickupInfoList_k__BackingField;
                          tradeNum = v86->fields.tradeNum;
                          if ( !*(&EventCraftTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v25, v84);
                          v91 = startedAt
                              - v26
                              + EventCraftTimeCalculation__GetCraftFinishTime(
                                  TradeGoodsEntity_k__BackingField,
                                  v89,
                                  0,
                                  tradeNum,
                                  startedAt,
                                  v85);
                          NowTradeNum = EventCraftListViewItem__get_NowTradeNum(item, v92);
                          timeLeftLabel = this->fields.timeLeftLabel;
                          v97 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
                          if ( NowTradeNum <= 0 )
                          {
                            if ( !v97 )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v93, v94);
                            Time = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14026/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/, 0);
                            if ( !timeLeftLabel )
                              goto LABEL_137;
                            UILabel__set_text(timeLeftLabel, (System_String_o *)Time, 0);
                            v101 = AtlasManager_TypeInfo;
                            craftingStateSprite = this->fields.craftingStateSprite;
                            v103 = &StringLiteral_21111/*"icon_craft_compleate"*/;
                            if ( *(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                              goto LABEL_124;
                          }
                          else
                          {
                            if ( !v97 )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v93, v94);
                            v98 = LocalizationManager__Get((System_String_o *)StringLiteral_13920/*"TIME_FORMAT_1"*/, 0);
                            Time = (__int64)LocalizationManager__GetRestTimeInFormat(v91, 0, v98, 0);
                            if ( !timeLeftLabel )
                              goto LABEL_137;
                            UILabel__set_text(timeLeftLabel, (System_String_o *)Time, 0);
                            v101 = AtlasManager_TypeInfo;
                            craftingStateSprite = this->fields.craftingStateSprite;
                            v103 = &StringLiteral_21112/*"icon_craft_intrade"*/;
                            if ( *(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                              goto LABEL_124;
                          }
                          j_il2cpp_runtime_class_init_0(v101, v99, v100);
LABEL_124:
                          AtlasManager__SetEventUI_47538316(
                            EventId_k__BackingField,
                            craftingStateSprite,
                            (System_String_o *)*v103,
                            0);
                          Time = (__int64)this->fields.timeLeftLabel;
                          if ( Time )
                          {
                            v104 = 0.92157;
                            v105 = 0.015686;
                            v106 = 1.0;
                            if ( v91 < 3600 )
                            {
                              v104 = 0.0;
                              v105 = 0.0;
                            }
                            v107 = 1.0;
                            UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v104 - 1), 0);
                            Time = (__int64)this->fields.craftingStateSprite;
                            if ( Time )
                            {
                              Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
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
    else
    {
      Time = (__int64)this->fields.timeLeftLabel;
      if ( Time )
      {
        UILabel__set_text((UILabel_o *)Time, **(System_String_o ***)(qword_594C0B8 + 184), 0);
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
                              Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
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
                                      v36 = this->fields.backSprite;
                                      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                                        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v34, v35);
                                      AtlasManager__SetEventUI_47538316(
                                        EventId_k__BackingField,
                                        v36,
                                        (System_String_o *)StringLiteral_21324/*"img_craft_reward_bg_1"*/,
                                        0);
                                      v39 = EventCraftTimeCalculation_TypeInfo;
                                      if ( !*(&EventCraftTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
                                      {
                                        j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v37, v38);
                                        v39 = EventCraftTimeCalculation_TypeInfo;
                                      }
                                      DEFAULT_EVENT_CRAFT_TIME_RATE = v39->static_fields->DEFAULT_EVENT_CRAFT_TIME_RATE;
                                      Time = BasicHelper__IsNullOrEmpty(
                                               (System_Collections_ICollection_o *)item->fields._PickupInfoList_k__BackingField,
                                               0);
                                      if ( (Time & 1) == 0 && item->fields._SupportTool_k__BackingField )
                                      {
                                        v42 = item->fields._PickupInfoList_k__BackingField;
                                        v43 = EventCraftListViewItemDraw___c_TypeInfo;
                                        if ( !*(&EventCraftListViewItemDraw___c_TypeInfo->_2.cctor_finished + 1) )
                                        {
                                          j_il2cpp_runtime_class_init_0(
                                            EventCraftListViewItemDraw___c_TypeInfo,
                                            v25,
                                            v41);
                                          v43 = EventCraftListViewItemDraw___c_TypeInfo;
                                        }
                                        v44 = v43->static_fields;
                                        _9__42_1 = (System_Func_object__long__o *)v44->__9__42_1;
                                        if ( !_9__42_1 )
                                        {
                                          if ( !*(&v43->_2.cctor_finished + 1) )
                                          {
                                            j_il2cpp_runtime_class_init_0(v43, v25, v41);
                                            v44 = EventCraftListViewItemDraw___c_TypeInfo->static_fields;
                                          }
                                          v46 = (Il2CppObject *)v44->__9;
                                          _9__42_1 = (System_Func_object__long__o *)sub_21FFEBC(System_Func_EventCraftPickupInfo__long__TypeInfo);
                                          System_Func_object__long____ctor(
                                            _9__42_1,
                                            v46,
                                            Method_EventCraftListViewItemDraw___c__UpdateItem_b__42_1__,
                                            0);
                                          v47 = EventCraftListViewItemDraw___c_TypeInfo->static_fields;
                                          v47->__9__42_1 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__42_1;
                                          sub_21FFBF4(
                                            (MissionNaviTransitionBoardItem_o *)&v47->__9__42_1,
                                            (int32_t)_9__42_1,
                                            v48,
                                            v49,
                                            v50,
                                            v51,
                                            v52,
                                            v53);
                                        }
                                        v54 = System_Linq_Enumerable__Select_object__long_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)v42,
                                                (System_Func_TSource__TResult__o *)_9__42_1,
                                                (const MethodInfo_385D9DC *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
                                        Time = System_Linq_Enumerable__Max_78395108(
                                                 (System_Collections_Generic_IEnumerable_long__o *)v54,
                                                 0);
                                        if ( v26 >= Time && v10 >= v26 )
                                        {
                                          SupportTool_k__BackingField = item->fields._SupportTool_k__BackingField;
                                          if ( !SupportTool_k__BackingField )
                                            goto LABEL_137;
                                          DEFAULT_EVENT_CRAFT_TIME_RATE = SupportTool_k__BackingField->fields.value;
                                        }
                                      }
                                      v56 = item->fields._TradeGoodsEntity_k__BackingField;
                                      if ( v56 )
                                      {
                                        tradeTime = v56->fields.tradeTime;
                                        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
                                          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v25, v41);
                                        v58 = ceil((double)(tradeTime * DEFAULT_EVENT_CRAFT_TIME_RATE) / 1000.0);
                                        if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
                                          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v25, v41);
                                        v61 = System_Convert__ToInt64_76475764(v58, 0);
                                        timeRequiredCraft = this->fields.timeRequiredCraft;
                                        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v59, v60);
                                        v63 = LocalizationManager__Get((System_String_o *)StringLiteral_13920/*"TIME_FORMAT_1"*/, 0);
                                        Time = (__int64)LocalizationManager__GetRestTimeInFormat(v61, 0, v63, 0);
                                        if ( timeRequiredCraft )
                                        {
                                          UILabel__set_text(timeRequiredCraft, (System_String_o *)Time, 0);
                                          EventCraftListViewItemDraw__HideCraftMiniObj(this, v64);
                                          craftStartButton = this->fields.craftStartButton;
                                          Time = EventCraftListViewItem__get_IsBuyAble(item, v66);
                                          if ( (Time & 1) != 0 )
                                          {
                                            IsRelease_k__BackingField = item->fields._IsRelease_k__BackingField;
                                            if ( IsRelease_k__BackingField )
                                            {
                                              Time = EventCraftListViewItem__get_IsEventEnd(item, v25);
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
LABEL_137:
    sub_21FFECC(Time, v25);
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
  __int64 v6; // x2
  int64_t v7; // x21
  System_Collections_Generic_IEnumerable_TSource__o *PickupInfoList_k__BackingField; // x21
  EventCraftListViewItemDraw___c_c *v9; // x0
  struct EventCraftListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Func_object__long__o *_9__45_0; // x22
  Il2CppObject *v12; // x23
  struct EventCraftListViewItemDraw___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  UILabel_o *supportToolLeftTime; // x19
  System_String_o *v24; // x20
  System_String_o *v25; // x0
  Il2CppObject *RestTimeInFormat; // x0

  v3 = item;
  v4 = this;
  if ( (byte_59323FF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    sub_21FFC50(&System_Func_EventCraftPickupInfo__long__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_EventCraftListViewItemDraw___c__UpdateSupportToolLb_b__45_0__);
    sub_21FFC50(&EventCraftListViewItemDraw___c_TypeInfo);
    sub_21FFC50(&StringLiteral_4026/*"CRAFT_EVENT_BOARD_SUPPORT_TOOL_LEFT_TIME"*/);
    this = (EventCraftListViewItemDraw_o *)sub_21FFC50(&StringLiteral_13920/*"TIME_FORMAT_1"*/);
    byte_59323FF = 1;
  }
  if ( !v3 )
    goto LABEL_23;
  IsUsedSupportTool = EventCraftListViewItem__IsUsedSupportTool(v3, (const MethodInfo *)item);
  v7 = 0;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v3->fields._PickupInfoList_k__BackingField, 0) )
  {
    PickupInfoList_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)v3->fields._PickupInfoList_k__BackingField;
    v9 = EventCraftListViewItemDraw___c_TypeInfo;
    if ( !*(&EventCraftListViewItemDraw___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventCraftListViewItemDraw___c_TypeInfo, item, v6);
      v9 = EventCraftListViewItemDraw___c_TypeInfo;
    }
    static_fields = v9->static_fields;
    _9__45_0 = (System_Func_object__long__o *)static_fields->__9__45_0;
    if ( !_9__45_0 )
    {
      if ( !*(&v9->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v9, item, v6);
        static_fields = EventCraftListViewItemDraw___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)static_fields->__9;
      _9__45_0 = (System_Func_object__long__o *)sub_21FFEBC(System_Func_EventCraftPickupInfo__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__45_0,
        v12,
        Method_EventCraftListViewItemDraw___c__UpdateSupportToolLb_b__45_0__,
        0);
      v13 = EventCraftListViewItemDraw___c_TypeInfo->static_fields;
      v13->__9__45_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__45_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13->__9__45_0, (int32_t)_9__45_0, v14, v15, v16, v17, v18, v19);
    }
    v20 = System_Linq_Enumerable__Select_object__long_(
            PickupInfoList_k__BackingField,
            (System_Func_TSource__TResult__o *)_9__45_0,
            (const MethodInfo_385D9DC *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    v7 = System_Linq_Enumerable__Max_78395108((System_Collections_Generic_IEnumerable_long__o *)v20, 0);
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
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_4026/*"CRAFT_EVENT_BOARD_SUPPORT_TOOL_LEFT_TIME"*/, 0);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_13920/*"TIME_FORMAT_1"*/, 0);
    RestTimeInFormat = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(v7, -1, v25, 0);
    this = (EventCraftListViewItemDraw_o *)System_String__Format(v24, RestTimeInFormat, 0);
    item = (EventCraftListViewItem_o *)this;
  }
  else
  {
    item = **(EventCraftListViewItem_o ***)(qword_594C0B8 + 184);
  }
  if ( !supportToolLeftTime )
LABEL_23:
    sub_21FFECC(this, item);
  UILabel__set_text(supportToolLeftTime, (System_String_o *)item, 0);
}


void EventCraftListViewItemDraw___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5932400 & 1) == 0 )
  {
    sub_21FFC50(&EventCraftListViewItemDraw___c_TypeInfo);
    byte_5932400 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventCraftListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventCraftListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct EventCraftListViewItemDraw___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventCraftListViewItemDraw___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_21FFECC(this, sprite);
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
    sub_21FFECC(this, sprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


int64_t EventCraftListViewItemDraw___c___UpdateItem_b__42_0(
        EventCraftListViewItemDraw___c_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.endedAt;
}


int64_t EventCraftListViewItemDraw___c___UpdateItem_b__42_1(
        EventCraftListViewItemDraw___c_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.startedAt;
}


int64_t EventCraftListViewItemDraw___c___UpdateSupportToolLb_b__45_0(
        EventCraftListViewItemDraw___c_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
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
  if ( (byte_5932401 & 1) == 0 )
  {
    this = (EventCraftListViewItemDraw___c__DisplayClass40_0_o *)sub_21FFC50(&AtlasManager_TypeInfo);
    byte_5932401 = 1;
  }
  itemEnt = v4->fields.itemEnt;
  if ( !itemEnt )
    sub_21FFECC(this, sprite);
  imageId = itemEnt->fields.imageId;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, sprite, method);
  AtlasManager__SetItem(sprite, imageId, 0);
}