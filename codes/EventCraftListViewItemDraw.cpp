void __fastcall EventCraftListViewItemDraw___ctor(EventCraftListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// attributes: thunk
void __fastcall EventCraftListViewItemDraw__Awake(EventCraftListViewItemDraw_o *this, const MethodInfo *method)
{
  EventCraftListViewItemDraw__CheckIsSerializeFieldNotNull(this, method);
}


void __fastcall EventCraftListViewItemDraw__CheckIsSerializeFieldNotNull(
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
    sub_1BD36B4(v3, v4);
  max_length = craftIconMiniSprites->max_length;
  v7 = -1;
  do
    ++v7;
  while ( v7 < max_length );
}


int32_t __fastcall EventCraftListViewItemDraw__GetDisplayMode(
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
        sub_1BD36B4(initMode, 0LL);
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


void __fastcall EventCraftListViewItemDraw__HideCraftMiniObj(
        EventCraftListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  EventCraftListViewItemDraw___c_c *v6; // x0
  System_Collections_Generic_IEnumerable_T__o *craftIconMiniSprites; // x19
  System_Action_object__o *_9__44_0; // x20
  Il2CppObject *v9; // x21
  struct EventCraftListViewItemDraw___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B3AFB1 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_UISprite__TypeInfo, method);
    sub_1BD3458(&Method_BasicHelper_ForEach_UISprite___, v3);
    sub_1BD3458(&Method_EventCraftListViewItemDraw___c__HideCraftMiniObj_b__44_0__, v4);
    sub_1BD3458(&EventCraftListViewItemDraw___c_TypeInfo, v5);
    byte_4B3AFB1 = 1;
  }
  v6 = EventCraftListViewItemDraw___c_TypeInfo;
  craftIconMiniSprites = (System_Collections_Generic_IEnumerable_T__o *)this->fields.craftIconMiniSprites;
  if ( !EventCraftListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCraftListViewItemDraw___c_TypeInfo);
    v6 = EventCraftListViewItemDraw___c_TypeInfo;
  }
  _9__44_0 = (System_Action_object__o *)v6->static_fields->__9__44_0;
  if ( !_9__44_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = EventCraftListViewItemDraw___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__44_0 = (System_Action_object__o *)sub_1BD36A4(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(_9__44_0, v9, Method_EventCraftListViewItemDraw___c__HideCraftMiniObj_b__44_0__, 0LL);
    static_fields = EventCraftListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__44_0 = (struct System_Action_UISprite__o *)_9__44_0;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&static_fields->__9__44_0,
      (int64_t)_9__44_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  BasicHelper__ForEach_object_(
    craftIconMiniSprites,
    (System_Action_T__o *)_9__44_0,
    (const MethodInfo_2F1E5E0 *)Method_BasicHelper_ForEach_UISprite___);
}


void __fastcall EventCraftListViewItemDraw__SetItem(
        EventCraftListViewItemDraw_o *this,
        EventCraftListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  int32_t EventId_k__BackingField; // w22
  UISprite_o *craftingBaseSprite; // x23
  UILabel_o *craftStartLabel; // x23
  System_String_o *Master_object; // x0
  const MethodInfo *v46; // x1
  UILabel_o *receiveLabel; // x23
  UILabel_o *replenishmentLabel; // x23
  UILabel_o *withdrawLabel; // x23
  UILabel_o *supportToolLabel; // x23
  const MethodInfo *v51; // x2
  __int64 v52; // x23
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x8
  GiftEntity_array *GiftListById; // x26
  GiftEntity_o *v55; // x8
  _QWORD *v56; // x25
  Il2CppObject *v57; // x0
  UISprite_o *baseSprite; // x27
  UserItemMaster_o *v59; // x24
  GiftEntity_o *v60; // x8
  GiftEntity_o *v61; // x8
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  int32_t num; // w8
  UISprite_o *v66; // x23
  struct ItemIconComponent_o *craftItemIcon; // x8
  UILabel_o *v68; // x22
  struct EventTradeGoodsEntity_o *v69; // x8
  UILabel_o *possessionNumLabel; // x22
  Il2CppObject *v71; // x0
  struct EventTradeGoodsEntity_o *v72; // x8
  UILabel_o *nameTextLabel; // x22
  System_String_o **p_name; // x8
  struct EventTradeGoodsEntity_o *v75; // x8
  const MethodInfo *v76; // x2
  System_Collections_Generic_IEnumerable_T__o *craftIconMiniSprites; // x22
  System_Action_object__o *v78; // x25
  __int64 v79; // x1
  NetworkManager_c *v80; // x0
  struct ItemEntity_o *SupportTool_k__BackingField; // x8
  int32_t id; // w3
  int32_t v83; // w8
  UILabel_o *eventRestTimeLabel; // x22
  unsigned int v85; // w21
  const MethodInfo *v86; // x1
  bool v87; // w1
  UILabel_o *textOnMask; // x20
  int32_t v89; // [xsp+Ch] [xbp-74h] BYREF
  UserItemEntity_o *v90; // [xsp+10h] [xbp-70h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B3AFAE & 1) == 0 )
  {
    sub_1BD3458(&System_Action_UISprite__TypeInfo, item);
    sub_1BD3458(&AtlasManager_TypeInfo, v7);
    sub_1BD3458(&Method_BasicHelper_ForEach_UISprite___, v8);
    sub_1BD3458(&Method_DataManager_GetMaster_GiftMaster___, v9);
    sub_1BD3458(&Method_DataManager_GetMaster_ItemMaster___, v10);
    sub_1BD3458(&Method_DataManager_GetMaster_UserItemMaster___, v11);
    sub_1BD3458(&DataManager_TypeInfo, v12);
    sub_1BD3458(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v13);
    sub_1BD3458(&int_TypeInfo, v14);
    sub_1BD3458(&LocalizationManager_TypeInfo, v15);
    sub_1BD3458(&NetworkManager_TypeInfo, v16);
    sub_1BD3458(&string_TypeInfo, v17);
    sub_1BD3458(&Method_EventCraftListViewItemDraw___c__DisplayClass40_0__SetItem_b__0__, v18);
    sub_1BD3458(&EventCraftListViewItemDraw___c__DisplayClass40_0_TypeInfo, v19);
    sub_1BD3458(&StringLiteral_20578/*"img_item_brank"*/, v20);
    sub_1BD3458(&StringLiteral_3973/*"CRAFT_EVENT_BOARD_SUPPORT_TOOL_BUTTON"*/, v21);
    sub_1BD3458(&StringLiteral_17705/*"btn_craft_bg_02"*/, v22);
    sub_1BD3458(&StringLiteral_17706/*"btn_craft_bg_03"*/, v23);
    sub_1BD3458(&StringLiteral_20547/*"img_craft_reward_bg_1"*/, v24);
    sub_1BD3458(&StringLiteral_20379/*"icon_craftsupport_frame"*/, v25);
    sub_1BD3458(&StringLiteral_13555/*"TRADE_EVENT_BOARD_WITHDRAWALLABEL_BUTTON"*/, v26);
    sub_1BD3458(&StringLiteral_17707/*"btn_craft_bg_04"*/, v27);
    sub_1BD3458(&StringLiteral_13551/*"TRADE_EVENT_BOARD_RECEIVE_BUTTON"*/, v28);
    sub_1BD3458(&StringLiteral_3972/*"CRAFT_EVENT_BOARD_START_BUTTON"*/, v29);
    sub_1BD3458(&StringLiteral_19388/*"event_craft_8049402"*/, v30);
    sub_1BD3458(&StringLiteral_20377/*"icon_craft_reward"*/, v31);
    sub_1BD3458(&StringLiteral_19387/*"event_craft_8049401"*/, v32);
    sub_1BD3458(&StringLiteral_13552/*"TRADE_EVENT_BOARD_REPLENISHMENT_BUTTON"*/, v33);
    sub_1BD3458(&StringLiteral_25223/*"{0:#,0}"*/, v34);
    sub_1BD3458(&StringLiteral_20378/*"icon_craftsupport"*/, v35);
    sub_1BD3458(&StringLiteral_19389/*"event_craft_8049403"*/, v36);
    sub_1BD3458(&StringLiteral_18530/*"craftgauge_bar"*/, v37);
    sub_1BD3458(&StringLiteral_3984/*"CRAFT_EVENT_END"*/, v38);
    sub_1BD3458(&StringLiteral_17704/*"btn_craft_bg_01"*/, v39);
    sub_1BD3458(&StringLiteral_13554/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, v40);
    sub_1BD3458(&StringLiteral_18531/*"craftgauge_bg"*/, v41);
    byte_4B3AFAE = 1;
  }
  v90 = 0LL;
  entity = 0LL;
  if ( item && mode )
  {
    EventId_k__BackingField = item->fields._EventId_k__BackingField;
    craftingBaseSprite = this->fields.craftingBaseSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_38642884(
      EventId_k__BackingField,
      craftingBaseSprite,
      (System_String_o *)StringLiteral_19388/*"event_craft_8049402"*/,
      0LL);
    AtlasManager__SetEventUI_38642884(
      EventId_k__BackingField,
      this->fields.progressGaugeFront,
      (System_String_o *)StringLiteral_18530/*"craftgauge_bar"*/,
      0LL);
    AtlasManager__SetEventUI_38642884(
      EventId_k__BackingField,
      this->fields.progressGaugeBack,
      (System_String_o *)StringLiteral_18531/*"craftgauge_bg"*/,
      0LL);
    craftStartLabel = this->fields.craftStartLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3972/*"CRAFT_EVENT_BOARD_START_BUTTON"*/, 0LL);
    if ( !craftStartLabel )
      goto LABEL_100;
    UILabel__set_text(craftStartLabel, Master_object, 0LL);
    AtlasManager__SetEventUI_38642884(
      EventId_k__BackingField,
      this->fields.craftStartButtonSprite,
      (System_String_o *)StringLiteral_17704/*"btn_craft_bg_01"*/,
      0LL);
    receiveLabel = this->fields.receiveLabel;
    Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_13551/*"TRADE_EVENT_BOARD_RECEIVE_BUTTON"*/, 0LL);
    if ( !receiveLabel )
      goto LABEL_100;
    UILabel__set_text(receiveLabel, Master_object, 0LL);
    AtlasManager__SetEventUI_38642884(
      EventId_k__BackingField,
      this->fields.receiveButtonSprite,
      (System_String_o *)StringLiteral_17706/*"btn_craft_bg_03"*/,
      0LL);
    replenishmentLabel = this->fields.replenishmentLabel;
    Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_13552/*"TRADE_EVENT_BOARD_REPLENISHMENT_BUTTON"*/, 0LL);
    if ( !replenishmentLabel )
      goto LABEL_100;
    UILabel__set_text(replenishmentLabel, Master_object, 0LL);
    AtlasManager__SetEventUI_38642884(
      EventId_k__BackingField,
      this->fields.replenishmentButtonSprite,
      (System_String_o *)StringLiteral_17704/*"btn_craft_bg_01"*/,
      0LL);
    withdrawLabel = this->fields.withdrawLabel;
    Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_13555/*"TRADE_EVENT_BOARD_WITHDRAWALLABEL_BUTTON"*/, 0LL);
    if ( !withdrawLabel )
      goto LABEL_100;
    UILabel__set_text(withdrawLabel, Master_object, 0LL);
    AtlasManager__SetEventUI_38642884(
      EventId_k__BackingField,
      this->fields.withdrawButtonSprite,
      (System_String_o *)StringLiteral_17707/*"btn_craft_bg_04"*/,
      0LL);
    supportToolLabel = this->fields.supportToolLabel;
    Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3973/*"CRAFT_EVENT_BOARD_SUPPORT_TOOL_BUTTON"*/, 0LL);
    if ( !supportToolLabel )
      goto LABEL_100;
    UILabel__set_text(supportToolLabel, Master_object, 0LL);
    AtlasManager__SetEventUI_38642884(
      EventId_k__BackingField,
      this->fields.supportToolButtonSprite,
      (System_String_o *)StringLiteral_17705/*"btn_craft_bg_02"*/,
      0LL);
    AtlasManager__SetEventUI_38642884(
      EventId_k__BackingField,
      this->fields.supportToolUsedSprite,
      (System_String_o *)StringLiteral_20378/*"icon_craftsupport"*/,
      0LL);
    AtlasManager__SetEventUI_38642884(
      EventId_k__BackingField,
      this->fields.craftIconSupportToolBg,
      (System_String_o *)StringLiteral_20379/*"icon_craftsupport_frame"*/,
      0LL);
    AtlasManager__SetEventUI_38642884(
      EventId_k__BackingField,
      this->fields.rewardHeader,
      (System_String_o *)StringLiteral_20377/*"icon_craft_reward"*/,
      0LL);
    AtlasManager__SetEventUI_38642884(
      EventId_k__BackingField,
      this->fields.backSprite,
      (System_String_o *)StringLiteral_20547/*"img_craft_reward_bg_1"*/,
      0LL);
    EventCraftListViewItemDraw__SetReleaseDisplayObject(this, item->fields._IsRelease_k__BackingField, v51);
    if ( item->fields._IsRelease_k__BackingField )
    {
      v52 = sub_1BD36A4(EventCraftListViewItemDraw___c__DisplayClass40_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v52, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_GiftMaster___);
      TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
      if ( !TradeGoodsEntity_k__BackingField || !Master_object )
        goto LABEL_100;
      GiftListById = GiftMaster__GetGiftListById(
                       (GiftMaster_o *)Master_object,
                       TradeGoodsEntity_k__BackingField->fields.giftId,
                       0LL);
      if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)GiftListById, 0LL) )
        return;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !v52 || !GiftListById )
        goto LABEL_100;
      if ( !GiftListById->max_length )
        goto LABEL_101;
      v55 = GiftListById->m_Items[0];
      if ( !v55 || !Master_object )
        goto LABEL_100;
      v56 = (_QWORD *)(v52 + 16);
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              (Il2CppObject **)(v52 + 16),
              v55->fields.objectId,
              (const MethodInfo_31D1F44 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        return;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v57 = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserItemMaster___);
      baseSprite = this->fields.baseSprite;
      v59 = (UserItemMaster_o *)v57;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      Master_object = (System_String_o *)AtlasManager__SetEventUI_38642884(
                                           EventId_k__BackingField,
                                           baseSprite,
                                           (System_String_o *)StringLiteral_19387/*"event_craft_8049401"*/,
                                           0LL);
      if ( !GiftListById->max_length )
        goto LABEL_101;
      v60 = GiftListById->m_Items[0];
      if ( !v60 )
        goto LABEL_100;
      Master_object = (System_String_o *)this->fields.craftItemIcon;
      if ( !Master_object )
        goto LABEL_100;
      ItemIconComponent__SetItem((ItemIconComponent_o *)Master_object, v60->fields.objectId, -1, 1, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B31D77 )
      {
        sub_1BD3458(&NetworkManager_TypeInfo, v46);
        byte_4B31D77 = 1;
      }
      Master_object = (System_String_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Master_object = (System_String_o *)NetworkManager_TypeInfo;
      }
      if ( !GiftListById->max_length )
LABEL_101:
        sub_1BD36BC(Master_object, v46);
      v61 = GiftListById->m_Items[0];
      if ( !v61 || !v59 )
        goto LABEL_100;
      Master_object = (System_String_o *)UserItemMaster__TryGetEntity(
                                           v59,
                                           &entity,
                                           *(_QWORD *)(*(_QWORD *)&Master_object[7].fields + 64LL),
                                           v61->fields.objectId,
                                           0LL);
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
      v89 = num;
      v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v89, v62, v63, v64);
      Master_object = System_String__Format((System_String_o *)StringLiteral_25223/*"{0:#,0}"*/, v71, 0LL);
      if ( !possessionNumLabel )
        goto LABEL_100;
      UILabel__set_text(possessionNumLabel, Master_object, 0LL);
      v72 = item->fields._TradeGoodsEntity_k__BackingField;
      if ( !v72 )
        goto LABEL_100;
      nameTextLabel = this->fields.nameTextLabel;
      Master_object = (System_String_o *)System_String__IsNullOrEmpty(v72->fields.name, 0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !*v56 )
          goto LABEL_100;
        p_name = (System_String_o **)(*v56 + 24LL);
      }
      else
      {
        v75 = item->fields._TradeGoodsEntity_k__BackingField;
        if ( !v75 )
          goto LABEL_100;
        p_name = &v75->fields.name;
      }
      if ( !nameTextLabel )
LABEL_100:
        sub_1BD36B4(Master_object, v46);
      UILabel__set_text(nameTextLabel, *p_name, 0LL);
      EventCraftListViewItemDraw__SetPriceIconText(this, item, v76);
      craftIconMiniSprites = (System_Collections_Generic_IEnumerable_T__o *)this->fields.craftIconMiniSprites;
      v78 = (System_Action_object__o *)sub_1BD36A4(System_Action_UISprite__TypeInfo);
      System_Action_object____ctor(
        v78,
        (Il2CppObject *)v52,
        Method_EventCraftListViewItemDraw___c__DisplayClass40_0__SetItem_b__0__,
        0LL);
      BasicHelper__ForEach_object_(
        craftIconMiniSprites,
        (System_Action_T__o *)v78,
        (const MethodInfo_2F1E5E0 *)Method_BasicHelper_ForEach_UISprite___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B31D77 )
      {
        sub_1BD3458(&NetworkManager_TypeInfo, v79);
        byte_4B31D77 = 1;
      }
      v80 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v80 = NetworkManager_TypeInfo;
      }
      SupportTool_k__BackingField = item->fields._SupportTool_k__BackingField;
      if ( SupportTool_k__BackingField )
        id = SupportTool_k__BackingField->fields.id;
      else
        id = 0;
      Master_object = (System_String_o *)UserItemMaster__TryGetEntity(
                                           v59,
                                           &v90,
                                           v80->static_fields->userIdNumber,
                                           id,
                                           0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v90 )
          goto LABEL_100;
        v83 = v90->fields.num;
      }
      else
      {
        v83 = 0;
      }
      item->fields._PossessionNum_k__BackingField = v83;
    }
    else
    {
      v66 = this->fields.baseSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      Master_object = (System_String_o *)AtlasManager__SetEventUI_38642884(
                                           EventId_k__BackingField,
                                           v66,
                                           (System_String_o *)StringLiteral_19389/*"event_craft_8049403"*/,
                                           0LL);
      craftItemIcon = this->fields.craftItemIcon;
      if ( !craftItemIcon )
        goto LABEL_100;
      AtlasManager__SetEventUI_38642884(
        EventId_k__BackingField,
        craftItemIcon->fields.iconSprite,
        (System_String_o *)StringLiteral_20578/*"img_item_brank"*/,
        0LL);
      v68 = this->fields.nameTextLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_13554/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, 0LL);
      if ( !v68 )
        goto LABEL_100;
      UILabel__set_text(v68, Master_object, 0LL);
      v69 = item->fields._TradeGoodsEntity_k__BackingField;
      if ( !v69 )
        goto LABEL_100;
      Master_object = (System_String_o *)this->fields.textOnMask;
      if ( !Master_object )
        goto LABEL_100;
      UILabel__set_text((UILabel_o *)Master_object, v69->fields.closedMessage, 0LL);
    }
    eventRestTimeLabel = this->fields.eventRestTimeLabel;
    Master_object = EventCraftListViewItem__get_RestTimeEventAt(item, v46);
    if ( eventRestTimeLabel )
    {
      UILabel__set_text(eventRestTimeLabel, Master_object, 0LL);
      Master_object = (System_String_o *)this->fields.craftingBaseSprite;
      if ( Master_object )
      {
        Master_object = (System_String_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)Master_object,
                                             0LL);
        if ( Master_object )
        {
          v85 = mode & 0xFFFFFFFE;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v85 == 4, 0LL);
          if ( !EventCraftListViewItem__get_IsEventEnd(item, v86) )
            return;
          if ( v85 == 4 )
          {
            Master_object = (System_String_o *)this->fields.textOnMask;
            if ( Master_object )
            {
              UILabel__set_text((UILabel_o *)Master_object, string_TypeInfo->static_fields->Empty, 0LL);
              Master_object = (System_String_o *)this->fields.maskSprite;
              if ( Master_object )
              {
                Master_object = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)Master_object,
                                                     0LL);
                if ( Master_object )
                {
                  v87 = 0;
LABEL_98:
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v87, 0LL);
                  return;
                }
              }
            }
          }
          else
          {
            EventCraftListViewItemDraw__HideCraftMiniObj(this, v46);
            Master_object = (System_String_o *)this->fields.progressBar;
            if ( Master_object )
            {
              Master_object = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)Master_object,
                                                   0LL);
              if ( Master_object )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
                textOnMask = this->fields.textOnMask;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3984/*"CRAFT_EVENT_END"*/, 0LL);
                if ( textOnMask )
                {
                  UILabel__set_text(textOnMask, Master_object, 0LL);
                  Master_object = (System_String_o *)this->fields.textOnMask;
                  if ( Master_object )
                  {
                    Master_object = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)Master_object,
                                                         0LL);
                    if ( Master_object )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
                      Master_object = (System_String_o *)this->fields.maskSprite;
                      if ( Master_object )
                      {
                        Master_object = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)Master_object,
                                                             0LL);
                        if ( Master_object )
                        {
                          v87 = 1;
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


void __fastcall EventCraftListViewItemDraw__SetPriceIconText(
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
  v6 = CommonConsumeEntityArray_k__BackingField && CommonConsumeEntityArray_k__BackingField->max_length == 2;
  p_priceInfoDouble = &this->fields.priceInfoDouble;
  this = (EventCraftListViewItemDraw_o *)this->fields.priceInfoDouble;
  if ( !this )
    goto LABEL_14;
  this = (EventCraftListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v6, 0LL);
  priceInfoTriple = (EventCraftListViewItemDraw_o *)v5->fields.priceInfoTriple;
  p_priceInfoTriple = &v5->fields.priceInfoTriple;
  this = priceInfoTriple;
  if ( !priceInfoTriple )
    goto LABEL_14;
  this = (EventCraftListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v6, 0LL);
  v10 = (EventCraftListViewItemDraw_o **)(v6 ? p_priceInfoDouble : p_priceInfoTriple);
  this = *v10;
  if ( !*v10 )
LABEL_14:
    sub_1BD36B4(this, item);
  EventTradePriceInfo__SetPriceInfo(
    (EventTradePriceInfo_o *)this,
    item->fields._CommonConsumeEntityArray_k__BackingField,
    1,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftListViewItemDraw__SetReleaseDisplayObject(
        EventCraftListViewItemDraw_o *this,
        bool isRelease,
        const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0

  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_31;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, !isRelease, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.textOnMask;
  if ( !maskSprite )
    goto LABEL_31;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, !isRelease, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.nameTextLabel;
  if ( !maskSprite )
    goto LABEL_31;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.eventRestTimeLabel;
  if ( !maskSprite )
    goto LABEL_31;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.priceInfoDouble;
  if ( !maskSprite )
    goto LABEL_31;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.priceInfoTriple;
  if ( !maskSprite )
    goto LABEL_31;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.craftItemIcon;
  if ( !maskSprite )
    goto LABEL_31;
  ItemIconComponent__SetPossessionTitleActivation((ItemIconComponent_o *)maskSprite, isRelease, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.rewardHeader;
  if ( !maskSprite )
    goto LABEL_31;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.timeRequiredCraft;
  if ( !maskSprite )
    goto LABEL_31;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.craftStartButtonSprite;
  if ( !maskSprite )
    goto LABEL_31;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_31;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_31;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.craftingBaseSprite;
  if ( !maskSprite )
    goto LABEL_31;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0LL);
  if ( !maskSprite
    || (maskSprite = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)maskSprite,
                                                  0LL)) == 0LL
    || (maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0LL),
        (maskSprite = (UnityEngine_Component_o *)this->fields.supportToolUsedSprite) == 0LL)
    || (maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0LL)) == 0LL
    || (maskSprite = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)maskSprite,
                                                  0LL)) == 0LL
    || (maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL)) == 0LL )
  {
LABEL_31:
    sub_1BD36B4(maskSprite, isRelease);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0LL);
}


void __fastcall EventCraftListViewItemDraw__UpdateCraftIconMiniSprite(
        EventCraftListViewItemDraw_o *this,
        EventCraftListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EventCraftListViewItemDraw___c_c *v8; // x0
  System_Collections_Generic_IEnumerable_T__o *craftIconMiniSprites; // x21
  System_Action_object__o *_9__43_0; // x22
  Il2CppObject *v11; // x23
  struct EventCraftListViewItemDraw___c_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  UnityEngine_GameObject_o *NowCompleteNum; // x0
  const MethodInfo *v20; // x1
  int v21; // w21
  struct UISprite_array *v22; // x8
  const MethodInfo *v23; // x1

  if ( (byte_4B3AFB0 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_UISprite__TypeInfo, item);
    sub_1BD3458(&Method_BasicHelper_ForEach_UISprite___, v5);
    sub_1BD3458(&Method_EventCraftListViewItemDraw___c__UpdateCraftIconMiniSprite_b__43_0__, v6);
    sub_1BD3458(&EventCraftListViewItemDraw___c_TypeInfo, v7);
    byte_4B3AFB0 = 1;
  }
  v8 = EventCraftListViewItemDraw___c_TypeInfo;
  craftIconMiniSprites = (System_Collections_Generic_IEnumerable_T__o *)this->fields.craftIconMiniSprites;
  if ( !EventCraftListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCraftListViewItemDraw___c_TypeInfo);
    v8 = EventCraftListViewItemDraw___c_TypeInfo;
  }
  _9__43_0 = (System_Action_object__o *)v8->static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = EventCraftListViewItemDraw___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__43_0 = (System_Action_object__o *)sub_1BD36A4(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(
      _9__43_0,
      v11,
      Method_EventCraftListViewItemDraw___c__UpdateCraftIconMiniSprite_b__43_0__,
      0LL);
    static_fields = EventCraftListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Action_UISprite__o *)_9__43_0;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&static_fields->__9__43_0,
      (int64_t)_9__43_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  BasicHelper__ForEach_object_(
    craftIconMiniSprites,
    (System_Action_T__o *)_9__43_0,
    (const MethodInfo_2F1E5E0 *)Method_BasicHelper_ForEach_UISprite___);
  if ( !item )
    goto LABEL_18;
  NowCompleteNum = (UnityEngine_GameObject_o *)EventCraftListViewItem__get_NowCompleteNum(item, v20);
  if ( (int)NowCompleteNum >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      v22 = this->fields.craftIconMiniSprites;
      if ( !v22 )
        break;
      if ( v21 >= v22->max_length )
        sub_1BD36BC(NowCompleteNum, v20);
      NowCompleteNum = (UnityEngine_GameObject_o *)v22->m_Items[v21];
      if ( !NowCompleteNum )
        break;
      NowCompleteNum = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NowCompleteNum, 0LL);
      if ( !NowCompleteNum )
        break;
      UnityEngine_GameObject__SetActive(NowCompleteNum, 1, 0LL);
      ++v21;
      NowCompleteNum = (UnityEngine_GameObject_o *)EventCraftListViewItem__get_NowCompleteNum(item, v23);
      if ( v21 >= (int)NowCompleteNum )
        return;
    }
LABEL_18:
    sub_1BD36B4(NowCompleteNum, v20);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftListViewItemDraw__UpdateItem(
        EventCraftListViewItemDraw_o *this,
        EventCraftListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  int32_t EventId_k__BackingField; // w21
  int64_t v28; // x23
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *PickupInfoList_k__BackingField; // x22
  EventCraftListViewItemDraw___c_c *v30; // x0
  System_Func_T__TResult__o *_9__42_0; // x23
  Il2CppObject *v32; // x25
  struct EventCraftListViewItemDraw___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v40; // x0
  __int64 Time; // x0
  _BOOL8 v42; // x1
  __int64 v43; // x22
  struct UICommonButton_o *supportToolButton; // x24
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  struct UICommonButton_o *v47; // x25
  UISprite_o *v48; // x24
  EventCraftTimeCalculation_c *v49; // x0
  int32_t DEFAULT_EVENT_CRAFT_TIME_RATE; // w26
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *v51; // x21
  EventCraftListViewItemDraw___c_c *v52; // x0
  System_Func_T__TResult__o *_9__42_1; // x24
  Il2CppObject *v54; // x25
  struct EventCraftListViewItemDraw___c_StaticFields *v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v62; // x0
  struct ItemEntity_o *SupportTool_k__BackingField; // x8
  struct EventTradeGoodsEntity_o *v64; // x8
  int32_t tradeTime; // w21
  double v66; // d8
  int64_t v67; // x0
  UILabel_o *timeRequiredCraft; // x21
  int64_t v69; // x22
  System_String_o *v70; // x0
  const MethodInfo *v71; // x1
  struct UICommonButton_o *craftStartButton; // x21
  const MethodInfo *v73; // x1
  char IsRelease_k__BackingField; // w8
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  struct EventTradeInfo_o *v76; // x8
  float v77; // s8
  const MethodInfo *v78; // x2
  UILabel_o *progressLabel; // x23
  System_String_o *v80; // x24
  const MethodInfo *v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  struct EventTradeInfo_o *v88; // x8
  Il2CppObject *v89; // x25
  Il2CppObject *v90; // x0
  struct EventTradeInfo_o *v91; // x8
  struct UICommonButton_o *replenishmentButton; // x23
  const MethodInfo *v93; // x1
  char v94; // w8
  UISprite_o *backSprite; // x23
  struct EventTradeInfo_o *v96; // x8
  int64_t startedAt; // x23
  EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x26
  System_Collections_Generic_List_EventCraftPickupInfo__o *v99; // x25
  int32_t tradeNum; // w24
  int64_t CraftFinishTime; // x24
  int64_t v102; // x23
  const MethodInfo *v103; // x1
  int32_t NowTradeNum; // w0
  UILabel_o *timeLeftLabel; // x22
  int32_t v106; // w20
  bool v107; // cc
  __int64 v108; // x20
  System_String_o *v109; // x0
  UISprite_o *craftingStateSprite; // x22
  __int64 *v111; // x8
  float v112; // s1
  float v113; // s2
  float v114; // s0
  float v115; // s3
  int v116; // [xsp+8h] [xbp-68h] BYREF
  int32_t NowCompleteNum; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B3AFAF & 1) == 0 )
  {
    sub_1BD3458(&AtlasManager_TypeInfo, item);
    sub_1BD3458(&BalanceConfig_TypeInfo, v7);
    sub_1BD3458(&System_Convert_TypeInfo, v8);
    sub_1BD3458(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___, v9);
    sub_1BD3458(&EventCraftTimeCalculation_TypeInfo, v10);
    sub_1BD3458(&System_Func_EventCraftPickupInfo__long__TypeInfo, v11);
    sub_1BD3458(&int_TypeInfo, v12);
    sub_1BD3458(&LocalizationManager_TypeInfo, v13);
    sub_1BD3458(&System_Math_TypeInfo, v14);
    sub_1BD3458(&NetworkManager_TypeInfo, v15);
    sub_1BD3458(&string_TypeInfo, v16);
    sub_1BD3458(&Method_EventCraftListViewItemDraw___c__UpdateItem_b__42_0__, v17);
    sub_1BD3458(&Method_EventCraftListViewItemDraw___c__UpdateItem_b__42_1__, v18);
    sub_1BD3458(&EventCraftListViewItemDraw___c_TypeInfo, v19);
    sub_1BD3458(&StringLiteral_20547/*"img_craft_reward_bg_1"*/, v20);
    sub_1BD3458(&StringLiteral_20376/*"icon_craft_intrade"*/, v21);
    sub_1BD3458(&StringLiteral_20375/*"icon_craft_compleate"*/, v22);
    sub_1BD3458(&StringLiteral_20548/*"img_craft_reward_bg_2"*/, v23);
    sub_1BD3458(&StringLiteral_3989/*"CRAFT_EVENT_PROGRESS_NUM"*/, v24);
    sub_1BD3458(&StringLiteral_13486/*"TIME_FORMAT_1"*/, v25);
    sub_1BD3458(&StringLiteral_13590/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/, v26);
    byte_4B3AFAF = 1;
  }
  if ( item && mode && item->fields._TradeGoodsEntity_k__BackingField && item->fields._IsRelease_k__BackingField )
  {
    EventCraftListViewItemDraw__UpdateSupportToolLb(this, item, *(const MethodInfo **)&mode);
    EventId_k__BackingField = item->fields._EventId_k__BackingField;
    v28 = 0LL;
    if ( !BasicHelper__IsNullOrEmpty(
            (System_Collections_ICollection_o *)item->fields._PickupInfoList_k__BackingField,
            0LL) )
    {
      PickupInfoList_k__BackingField = item->fields._PickupInfoList_k__BackingField;
      v30 = EventCraftListViewItemDraw___c_TypeInfo;
      if ( !EventCraftListViewItemDraw___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventCraftListViewItemDraw___c_TypeInfo);
        v30 = EventCraftListViewItemDraw___c_TypeInfo;
      }
      _9__42_0 = (System_Func_T__TResult__o *)v30->static_fields->__9__42_0;
      if ( !_9__42_0 )
      {
        if ( !v30->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v30);
          v30 = EventCraftListViewItemDraw___c_TypeInfo;
        }
        v32 = (Il2CppObject *)v30->static_fields->__9;
        _9__42_0 = (System_Func_T__TResult__o *)sub_1BD36A4(System_Func_EventCraftPickupInfo__long__TypeInfo);
        System_Func_object__long____ctor(
          _9__42_0,
          v32,
          Method_EventCraftListViewItemDraw___c__UpdateItem_b__42_0__,
          0LL);
        static_fields = EventCraftListViewItemDraw___c_TypeInfo->static_fields;
        static_fields->__9__42_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__42_0;
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&static_fields->__9__42_0,
          (int64_t)_9__42_0,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
      }
      v40 = System_Linq_Enumerable__Select_object__long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)PickupInfoList_k__BackingField,
              (System_Func_TSource__TResult__o *)_9__42_0,
              (const MethodInfo_2F62B28 *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
      v28 = System_Linq_Enumerable__Max_64748756((System_Collections_Generic_IEnumerable_long__o *)v40, 0LL);
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    if ( this->fields.supportToolButtonSprite )
    {
      v43 = Time;
      Time = (__int64)UnityEngine_Component__get_gameObject(
                        (UnityEngine_Component_o *)this->fields.supportToolButtonSprite,
                        0LL);
      if ( Time )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
        if ( (mode & 0xFFFFFFFE) == 4 )
        {
          if ( !item->fields._TradeInfo_k__BackingField )
          {
            EventCraftListViewItemDraw__HideCraftMiniObj(this, (const MethodInfo *)v42);
            return;
          }
          Time = (__int64)this->fields.craftingBaseSprite;
          if ( Time )
          {
            Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
            if ( Time )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
              Time = (__int64)this->fields.craftStartButtonSprite;
              if ( Time )
              {
                Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                if ( Time )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                  supportToolButton = this->fields.supportToolButton;
                  Time = EventCraftListViewItem__get_NowTradeNum(item, v45);
                  v47 = (int)Time >= 1 ? supportToolButton : 0LL;
                  if ( (int)Time < 1 || item->fields._PossessionNum_k__BackingField < 1 )
                  {
                    v42 = 0LL;
                  }
                  else
                  {
                    Time = (__int64)BalanceConfig_TypeInfo;
                    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      Time = (__int64)BalanceConfig_TypeInfo;
                    }
                    if ( v28 - v43 <= *(int *)(*(_QWORD *)(Time + 184) + 1196LL) )
                    {
                      Time = EventCraftListViewItem__get_IsEventEnd(item, v46);
                      v42 = (Time & 1) == 0;
                    }
                    else
                    {
                      v42 = 0LL;
                    }
                    supportToolButton = v47;
                  }
                  if ( supportToolButton )
                  {
                    Time = ((__int64 (__fastcall *)(struct UICommonButton_o *, _BOOL8, Il2CppMethodPointer))supportToolButton->klass->vtable._5_set_isEnabled.method)(
                             supportToolButton,
                             v42,
                             supportToolButton->klass->vtable._6_OnInit.methodPtr);
                    TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
                    if ( TradeInfo_k__BackingField )
                    {
                      if ( TradeInfo_k__BackingField->fields.tradeNum )
                      {
                        Time = EventCraftListViewItem__get_NowCompleteNum(item, (const MethodInfo *)v42);
                        v76 = item->fields._TradeInfo_k__BackingField;
                        if ( !v76 )
                          goto LABEL_146;
                        v77 = (float)(int)Time / (float)(v76->fields.getNum + v76->fields.tradeNum);
                      }
                      else
                      {
                        v77 = 0.0;
                      }
                      Time = (__int64)this->fields.progressBar;
                      if ( Time )
                      {
                        Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                        if ( Time )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                          Time = (__int64)this->fields.progressBar;
                          if ( Time )
                          {
                            UIProgressBar__set_value((UIProgressBar_o *)Time, v77, 0LL);
                            EventCraftListViewItemDraw__UpdateCraftIconMiniSprite(this, item, v78);
                            progressLabel = this->fields.progressLabel;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v80 = LocalizationManager__Get((System_String_o *)StringLiteral_3989/*"CRAFT_EVENT_PROGRESS_NUM"*/, 0LL);
                            NowCompleteNum = EventCraftListViewItem__get_NowCompleteNum(item, v81);
                            Time = j_il2cpp_value_box_0(int_TypeInfo, &NowCompleteNum, v82, v83, v84);
                            v88 = item->fields._TradeInfo_k__BackingField;
                            if ( v88 )
                            {
                              v89 = (Il2CppObject *)Time;
                              v116 = v88->fields.getNum + v88->fields.tradeNum;
                              v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v116, v85, v86, v87);
                              Time = (__int64)System_String__Format_62539620(v80, v89, v90, 0LL);
                              if ( progressLabel )
                              {
                                UILabel__set_text(progressLabel, (System_String_o *)Time, 0LL);
                                v91 = item->fields._TradeInfo_k__BackingField;
                                if ( v91
                                  && (v91->fields.getNum >= 1
                                   || EventCraftListViewItem__get_NowCompleteNum(item, (const MethodInfo *)v42) >= 1) )
                                {
                                  ActionExtensions__Call(item->fields._UpdateReceiveAllButtonState_k__BackingField, 0LL);
                                  Time = (__int64)this->fields.receiveButtonSprite;
                                  if ( !Time )
                                    goto LABEL_146;
                                  Time = (__int64)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0LL);
                                  if ( !Time )
                                    goto LABEL_146;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                                  Time = (__int64)this->fields.replenishmentButtonSprite;
                                  if ( !Time )
                                    goto LABEL_146;
                                  Time = (__int64)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0LL);
                                  if ( !Time )
                                    goto LABEL_146;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                                  Time = (__int64)this->fields.withdrawButtonSprite;
                                  if ( !Time )
                                    goto LABEL_146;
                                  Time = (__int64)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0LL);
                                  if ( !Time )
                                    goto LABEL_146;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                                }
                                else
                                {
                                  Time = (__int64)this->fields.receiveButtonSprite;
                                  if ( !Time )
                                    goto LABEL_146;
                                  Time = (__int64)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0LL);
                                  if ( !Time )
                                    goto LABEL_146;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                                  Time = (__int64)this->fields.replenishmentButtonSprite;
                                  if ( !Time )
                                    goto LABEL_146;
                                  Time = (__int64)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0LL);
                                  if ( !Time )
                                    goto LABEL_146;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                                  Time = (__int64)this->fields.withdrawButtonSprite;
                                  if ( !Time )
                                    goto LABEL_146;
                                  Time = (__int64)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0LL);
                                  if ( !Time )
                                    goto LABEL_146;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                                  replenishmentButton = this->fields.replenishmentButton;
                                  Time = EventCraftListViewItem__get_IsRefillable(item, v93);
                                  if ( (Time & 1) != 0 )
                                  {
                                    Time = EventCraftListViewItem__get_IsEventEnd(item, (const MethodInfo *)v42);
                                    v94 = Time ^ 1;
                                  }
                                  else
                                  {
                                    v94 = 0;
                                  }
                                  if ( !replenishmentButton )
                                    goto LABEL_146;
                                  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, Il2CppMethodPointer))replenishmentButton->klass->vtable._5_set_isEnabled.method)(
                                    replenishmentButton,
                                    v94 & 1,
                                    replenishmentButton->klass->vtable._6_OnInit.methodPtr);
                                }
                                backSprite = this->fields.backSprite;
                                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                Time = AtlasManager__SetEventUI_38642884(
                                         EventId_k__BackingField,
                                         backSprite,
                                         (System_String_o *)StringLiteral_20548/*"img_craft_reward_bg_2"*/,
                                         0LL);
                                v96 = item->fields._TradeInfo_k__BackingField;
                                if ( v96 )
                                {
                                  startedAt = v96->fields.startedAt;
                                  TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
                                  v99 = item->fields._PickupInfoList_k__BackingField;
                                  tradeNum = v96->fields.tradeNum;
                                  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
                                  CraftFinishTime = EventCraftTimeCalculation__GetCraftFinishTime(
                                                      TradeGoodsEntity_k__BackingField,
                                                      v99,
                                                      0LL,
                                                      tradeNum,
                                                      startedAt,
                                                      0LL);
                                  v102 = startedAt - v43;
                                  NowTradeNum = EventCraftListViewItem__get_NowTradeNum(item, v103);
                                  timeLeftLabel = this->fields.timeLeftLabel;
                                  v106 = NowTradeNum;
                                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                  v107 = v106 <= 0;
                                  v108 = v102 + CraftFinishTime;
                                  if ( v107 )
                                  {
                                    Time = (__int64)LocalizationManager__Get(
                                                      (System_String_o *)StringLiteral_13590/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/,
                                                      0LL);
                                    if ( !timeLeftLabel )
                                      goto LABEL_146;
                                    UILabel__set_text(timeLeftLabel, (System_String_o *)Time, 0LL);
                                    craftingStateSprite = this->fields.craftingStateSprite;
                                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                    v111 = &StringLiteral_20375/*"icon_craft_compleate"*/;
                                  }
                                  else
                                  {
                                    v109 = LocalizationManager__Get((System_String_o *)StringLiteral_13486/*"TIME_FORMAT_1"*/, 0LL);
                                    Time = (__int64)LocalizationManager__GetRestTimeInFormat(
                                                      v102 + CraftFinishTime,
                                                      0LL,
                                                      v109,
                                                      0LL);
                                    if ( !timeLeftLabel )
                                      goto LABEL_146;
                                    UILabel__set_text(timeLeftLabel, (System_String_o *)Time, 0LL);
                                    craftingStateSprite = this->fields.craftingStateSprite;
                                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                    v111 = &StringLiteral_20376/*"icon_craft_intrade"*/;
                                  }
                                  AtlasManager__SetEventUI_38642884(
                                    EventId_k__BackingField,
                                    craftingStateSprite,
                                    (System_String_o *)*v111,
                                    0LL);
                                  v112 = 0.92157;
                                  Time = (__int64)this->fields.timeLeftLabel;
                                  if ( v108 >= 3600 )
                                    v113 = 0.015686;
                                  else
                                    v113 = 0.0;
                                  if ( v108 < 3600 )
                                    v112 = 0.0;
                                  if ( Time )
                                  {
                                    v114 = 1.0;
                                    v115 = 1.0;
                                    UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v112 - 1), 0LL);
                                    Time = (__int64)this->fields.craftingStateSprite;
                                    if ( Time )
                                    {
                                      Time = (__int64)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)Time,
                                                        0LL);
                                      if ( Time )
                                      {
                                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
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
            UILabel__set_text((UILabel_o *)Time, string_TypeInfo->static_fields->Empty, 0LL);
            Time = (__int64)this->fields.craftingBaseSprite;
            if ( Time )
            {
              Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
              if ( Time )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                Time = (__int64)this->fields.craftIconSupportToolBg;
                if ( Time )
                {
                  Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                  if ( Time )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                    Time = (__int64)this->fields.craftStartButtonSprite;
                    if ( Time )
                    {
                      Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                      if ( Time )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                        Time = (__int64)this->fields.receiveButtonSprite;
                        if ( Time )
                        {
                          Time = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
                          if ( Time )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                            Time = (__int64)this->fields.replenishmentButtonSprite;
                            if ( Time )
                            {
                              Time = (__int64)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Time,
                                                0LL);
                              if ( Time )
                              {
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                                Time = (__int64)this->fields.withdrawButtonSprite;
                                if ( Time )
                                {
                                  Time = (__int64)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0LL);
                                  if ( Time )
                                  {
                                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                                    Time = (__int64)this->fields.supportToolButton;
                                    if ( Time )
                                    {
                                      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)Time + 392LL))(
                                        Time,
                                        0LL,
                                        *(_QWORD *)(*(_QWORD *)Time + 400LL));
                                      Time = (__int64)this->fields.progressBar;
                                      if ( Time )
                                      {
                                        Time = (__int64)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)Time,
                                                          0LL);
                                        if ( Time )
                                        {
                                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                                          v48 = this->fields.backSprite;
                                          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                          AtlasManager__SetEventUI_38642884(
                                            EventId_k__BackingField,
                                            v48,
                                            (System_String_o *)StringLiteral_20547/*"img_craft_reward_bg_1"*/,
                                            0LL);
                                          v49 = EventCraftTimeCalculation_TypeInfo;
                                          if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
                                          {
                                            j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
                                            v49 = EventCraftTimeCalculation_TypeInfo;
                                          }
                                          DEFAULT_EVENT_CRAFT_TIME_RATE = v49->static_fields->DEFAULT_EVENT_CRAFT_TIME_RATE;
                                          Time = BasicHelper__IsNullOrEmpty(
                                                   (System_Collections_ICollection_o *)item->fields._PickupInfoList_k__BackingField,
                                                   0LL);
                                          if ( (Time & 1) == 0 && item->fields._SupportTool_k__BackingField )
                                          {
                                            v51 = item->fields._PickupInfoList_k__BackingField;
                                            v52 = EventCraftListViewItemDraw___c_TypeInfo;
                                            if ( !EventCraftListViewItemDraw___c_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(EventCraftListViewItemDraw___c_TypeInfo);
                                              v52 = EventCraftListViewItemDraw___c_TypeInfo;
                                            }
                                            _9__42_1 = (System_Func_T__TResult__o *)v52->static_fields->__9__42_1;
                                            if ( !_9__42_1 )
                                            {
                                              if ( !v52->_2.cctor_finished )
                                              {
                                                j_il2cpp_runtime_class_init_0(v52);
                                                v52 = EventCraftListViewItemDraw___c_TypeInfo;
                                              }
                                              v54 = (Il2CppObject *)v52->static_fields->__9;
                                              _9__42_1 = (System_Func_T__TResult__o *)sub_1BD36A4(System_Func_EventCraftPickupInfo__long__TypeInfo);
                                              System_Func_object__long____ctor(
                                                _9__42_1,
                                                v54,
                                                Method_EventCraftListViewItemDraw___c__UpdateItem_b__42_1__,
                                                0LL);
                                              v55 = EventCraftListViewItemDraw___c_TypeInfo->static_fields;
                                              v55->__9__42_1 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__42_1;
                                              sub_1BD33FC(
                                                (PartyOrganizationUtility_o *)&v55->__9__42_1,
                                                (int64_t)_9__42_1,
                                                v56,
                                                v57,
                                                v58,
                                                v59,
                                                v60,
                                                v61);
                                            }
                                            v62 = System_Linq_Enumerable__Select_object__long_(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v51,
                                                    (System_Func_TSource__TResult__o *)_9__42_1,
                                                    (const MethodInfo_2F62B28 *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
                                            Time = System_Linq_Enumerable__Max_64748756(
                                                     (System_Collections_Generic_IEnumerable_long__o *)v62,
                                                     0LL);
                                            if ( v28 >= v43 && v43 >= Time )
                                            {
                                              SupportTool_k__BackingField = item->fields._SupportTool_k__BackingField;
                                              if ( !SupportTool_k__BackingField )
                                                goto LABEL_146;
                                              DEFAULT_EVENT_CRAFT_TIME_RATE = SupportTool_k__BackingField->fields.value;
                                            }
                                          }
                                          v64 = item->fields._TradeGoodsEntity_k__BackingField;
                                          if ( v64 )
                                          {
                                            tradeTime = v64->fields.tradeTime;
                                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                                            v66 = ceil((double)(tradeTime * DEFAULT_EVENT_CRAFT_TIME_RATE) / 1000.0);
                                            if ( !System_Convert_TypeInfo->_2.cctor_finished )
                                              j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
                                            v67 = System_Convert__ToInt64_63184148(v66, 0LL);
                                            timeRequiredCraft = this->fields.timeRequiredCraft;
                                            v69 = v67;
                                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                            v70 = LocalizationManager__Get((System_String_o *)StringLiteral_13486/*"TIME_FORMAT_1"*/, 0LL);
                                            Time = (__int64)LocalizationManager__GetRestTimeInFormat(v69, 0LL, v70, 0LL);
                                            if ( timeRequiredCraft )
                                            {
                                              UILabel__set_text(timeRequiredCraft, (System_String_o *)Time, 0LL);
                                              EventCraftListViewItemDraw__HideCraftMiniObj(this, v71);
                                              craftStartButton = this->fields.craftStartButton;
                                              Time = EventCraftListViewItem__get_IsBuyAble(item, v73);
                                              if ( (Time & 1) != 0 )
                                              {
                                                IsRelease_k__BackingField = item->fields._IsRelease_k__BackingField;
                                                if ( IsRelease_k__BackingField )
                                                {
                                                  Time = EventCraftListViewItem__get_IsEventEnd(
                                                           item,
                                                           (const MethodInfo *)v42);
                                                  IsRelease_k__BackingField = Time ^ 1;
                                                }
                                              }
                                              else
                                              {
                                                IsRelease_k__BackingField = 0;
                                              }
                                              if ( craftStartButton )
                                              {
                                                ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, Il2CppMethodPointer))craftStartButton->klass->vtable._5_set_isEnabled.method)(
                                                  craftStartButton,
                                                  IsRelease_k__BackingField & 1,
                                                  craftStartButton->klass->vtable._6_OnInit.methodPtr);
                                                Time = (__int64)this->fields.craftingStateSprite;
                                                if ( Time )
                                                {
                                                  Time = (__int64)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)Time,
                                                                    0LL);
                                                  if ( Time )
                                                  {
                                                    UnityEngine_GameObject__SetActive(
                                                      (UnityEngine_GameObject_o *)Time,
                                                      0,
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
LABEL_146:
    sub_1BD36B4(Time, v42);
  }
}


void __fastcall EventCraftListViewItemDraw__UpdateSupportToolLb(
        EventCraftListViewItemDraw_o *this,
        EventCraftListViewItem_o *item,
        const MethodInfo *method)
{
  EventCraftListViewItem_o *v3; // x22
  EventCraftListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  bool IsUsedSupportTool; // w20
  int64_t v13; // x21
  System_Collections_Generic_IEnumerable_TSource__o *PickupInfoList_k__BackingField; // x21
  EventCraftListViewItemDraw___c_c *v15; // x0
  System_Func_T__TResult__o *_9__45_0; // x22
  Il2CppObject *v17; // x23
  struct EventCraftListViewItemDraw___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v25; // x0
  UILabel_o *supportToolLeftTime; // x19
  System_String_o *v27; // x20
  System_String_o *v28; // x0
  Il2CppObject *RestTimeInFormat; // x0

  v3 = item;
  v4 = this;
  if ( (byte_4B3AFB2 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___, item);
    sub_1BD3458(&System_Func_EventCraftPickupInfo__long__TypeInfo, v5);
    sub_1BD3458(&LocalizationManager_TypeInfo, v6);
    sub_1BD3458(&string_TypeInfo, v7);
    sub_1BD3458(&Method_EventCraftListViewItemDraw___c__UpdateSupportToolLb_b__45_0__, v8);
    sub_1BD3458(&EventCraftListViewItemDraw___c_TypeInfo, v9);
    sub_1BD3458(&StringLiteral_3974/*"CRAFT_EVENT_BOARD_SUPPORT_TOOL_LEFT_TIME"*/, v10);
    this = (EventCraftListViewItemDraw_o *)sub_1BD3458(&StringLiteral_13486/*"TIME_FORMAT_1"*/, v11);
    byte_4B3AFB2 = 1;
  }
  if ( !v3 )
    goto LABEL_23;
  IsUsedSupportTool = EventCraftListViewItem__IsUsedSupportTool(v3, (const MethodInfo *)item);
  v13 = 0LL;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v3->fields._PickupInfoList_k__BackingField, 0LL) )
  {
    PickupInfoList_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)v3->fields._PickupInfoList_k__BackingField;
    v15 = EventCraftListViewItemDraw___c_TypeInfo;
    if ( !EventCraftListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCraftListViewItemDraw___c_TypeInfo);
      v15 = EventCraftListViewItemDraw___c_TypeInfo;
    }
    _9__45_0 = (System_Func_T__TResult__o *)v15->static_fields->__9__45_0;
    if ( !_9__45_0 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = EventCraftListViewItemDraw___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v15->static_fields->__9;
      _9__45_0 = (System_Func_T__TResult__o *)sub_1BD36A4(System_Func_EventCraftPickupInfo__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__45_0,
        v17,
        Method_EventCraftListViewItemDraw___c__UpdateSupportToolLb_b__45_0__,
        0LL);
      static_fields = EventCraftListViewItemDraw___c_TypeInfo->static_fields;
      static_fields->__9__45_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__45_0;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&static_fields->__9__45_0,
        (int64_t)_9__45_0,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    v25 = System_Linq_Enumerable__Select_object__long_(
            PickupInfoList_k__BackingField,
            (System_Func_TSource__TResult__o *)_9__45_0,
            (const MethodInfo_2F62B28 *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    v13 = System_Linq_Enumerable__Max_64748756((System_Collections_Generic_IEnumerable_long__o *)v25, 0LL);
  }
  this = (EventCraftListViewItemDraw_o *)v4->fields.supportToolUsedSprite;
  if ( !this )
    goto LABEL_23;
  this = (EventCraftListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, IsUsedSupportTool, 0LL);
  this = (EventCraftListViewItemDraw_o *)v4->fields.craftIconSupportToolBg;
  if ( !this )
    goto LABEL_23;
  this = (EventCraftListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, IsUsedSupportTool, 0LL);
  supportToolLeftTime = v4->fields.supportToolLeftTime;
  if ( IsUsedSupportTool )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3974/*"CRAFT_EVENT_BOARD_SUPPORT_TOOL_LEFT_TIME"*/, 0LL);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_13486/*"TIME_FORMAT_1"*/, 0LL);
    RestTimeInFormat = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(v13, -1LL, v28, 0LL);
    this = (EventCraftListViewItemDraw_o *)System_String__Format(v27, RestTimeInFormat, 0LL);
    item = (EventCraftListViewItem_o *)this;
  }
  else
  {
    item = (EventCraftListViewItem_o *)string_TypeInfo->static_fields->Empty;
  }
  if ( !supportToolLeftTime )
LABEL_23:
    sub_1BD36B4(this, item);
  UILabel__set_text(supportToolLeftTime, (System_String_o *)item, 0LL);
}


void __fastcall EventCraftListViewItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B3AFB3 & 1) == 0 )
  {
    sub_1BD3458(&EventCraftListViewItemDraw___c_TypeInfo, v1);
    byte_4B3AFB3 = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(EventCraftListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventCraftListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct EventCraftListViewItemDraw___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)EventCraftListViewItemDraw___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall EventCraftListViewItemDraw___c___ctor(EventCraftListViewItemDraw___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventCraftListViewItemDraw___c___HideCraftMiniObj_b__44_0(
        EventCraftListViewItemDraw___c_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  if ( !sprite
    || (this = (EventCraftListViewItemDraw___c_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)sprite,
                                                     0LL)) == 0LL )
  {
    sub_1BD36B4(this, sprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall EventCraftListViewItemDraw___c___UpdateCraftIconMiniSprite_b__43_0(
        EventCraftListViewItemDraw___c_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  if ( !sprite
    || (this = (EventCraftListViewItemDraw___c_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)sprite,
                                                     0LL)) == 0LL )
  {
    sub_1BD36B4(this, sprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


int64_t __fastcall EventCraftListViewItemDraw___c___UpdateItem_b__42_0(
        EventCraftListViewItemDraw___c_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BD36B4(this, 0LL);
  return x->fields.endedAt;
}


int64_t __fastcall EventCraftListViewItemDraw___c___UpdateItem_b__42_1(
        EventCraftListViewItemDraw___c_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BD36B4(this, 0LL);
  return x->fields.startedAt;
}


int64_t __fastcall EventCraftListViewItemDraw___c___UpdateSupportToolLb_b__45_0(
        EventCraftListViewItemDraw___c_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BD36B4(this, 0LL);
  return x->fields.endedAt;
}


void __fastcall EventCraftListViewItemDraw___c__DisplayClass40_0___ctor(
        EventCraftListViewItemDraw___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventCraftListViewItemDraw___c__DisplayClass40_0___SetItem_b__0(
        EventCraftListViewItemDraw___c__DisplayClass40_0_o *this,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  EventCraftListViewItemDraw___c__DisplayClass40_0_o *v4; // x20
  struct ItemEntity_o *itemEnt; // x8
  int32_t imageId; // w20

  v4 = this;
  if ( (byte_4B3AFB4 & 1) == 0 )
  {
    this = (EventCraftListViewItemDraw___c__DisplayClass40_0_o *)sub_1BD3458(&AtlasManager_TypeInfo, sprite);
    byte_4B3AFB4 = 1;
  }
  itemEnt = v4->fields.itemEnt;
  if ( !itemEnt )
    sub_1BD36B4(this, sprite);
  imageId = itemEnt->fields.imageId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(sprite, imageId, 0LL);
}