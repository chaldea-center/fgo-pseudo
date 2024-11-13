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
    sub_1BCAA3C(v3, v4);
  max_length = craftIconMiniSprites->max_length;
  v7 = -1;
  do
    ++v7;
  while ( v7 < max_length );
}


// local variable allocation has failed, the output may be wrong!
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
        sub_1BCAA3C(*(_QWORD *)&initMode, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  EventCraftListViewItemDraw___c_c *v11; // x0
  System_Collections_Generic_IEnumerable_T__o *craftIconMiniSprites; // x19
  System_Action_object__o *_9__44_0; // x20
  Il2CppObject *v14; // x21
  struct EventCraftListViewItemDraw___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B19FC1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_UISprite__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_UISprite___, v5, v6);
    sub_1BCA7E0(&Method_EventCraftListViewItemDraw___c__HideCraftMiniObj_b__44_0__, v7, v8);
    sub_1BCA7E0(&EventCraftListViewItemDraw___c_TypeInfo, v9, v10);
    byte_4B19FC1 = 1;
  }
  v11 = EventCraftListViewItemDraw___c_TypeInfo;
  craftIconMiniSprites = (System_Collections_Generic_IEnumerable_T__o *)this->fields.craftIconMiniSprites;
  if ( !EventCraftListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCraftListViewItemDraw___c_TypeInfo, method);
    v11 = EventCraftListViewItemDraw___c_TypeInfo;
  }
  _9__44_0 = (System_Action_object__o *)v11->static_fields->__9__44_0;
  if ( !_9__44_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = EventCraftListViewItemDraw___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__44_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_UISprite__TypeInfo, method, v2, v3);
    System_Action_object____ctor(_9__44_0, v14, Method_EventCraftListViewItemDraw___c__HideCraftMiniObj_b__44_0__, 0LL);
    static_fields = EventCraftListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__44_0 = (struct System_Action_UISprite__o *)_9__44_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__44_0,
      (int64_t)_9__44_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  BasicHelper__ForEach_object_(
    craftIconMiniSprites,
    (System_Action_T__o *)_9__44_0,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_UISprite___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftListViewItemDraw__SetItem(
        EventCraftListViewItemDraw_o *this,
        EventCraftListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  int32_t EventId_k__BackingField; // w22
  UISprite_o *craftingBaseSprite; // x23
  __int64 v79; // x1
  UILabel_o *craftStartLabel; // x23
  int64_t Master_object; // x0
  const MethodInfo *v82; // x1
  UILabel_o *receiveLabel; // x23
  UILabel_o *replenishmentLabel; // x23
  UILabel_o *withdrawLabel; // x23
  UILabel_o *supportToolLabel; // x23
  const MethodInfo *v87; // x2
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x23
  __int64 v92; // x1
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x8
  GiftEntity_array *GiftListById; // x26
  __int64 v95; // x1
  GiftEntity_o *v96; // x8
  struct EventTradeGoodsEntity_o **v97; // x25
  __int64 v98; // x1
  Il2CppObject *v99; // x0
  __int64 v100; // x1
  UISprite_o *baseSprite; // x27
  UserItemMaster_o *v102; // x24
  GiftEntity_o *v103; // x8
  __int64 v104; // x1
  GiftEntity_o *v105; // x8
  int32_t num; // w8
  UISprite_o *v107; // x23
  struct ItemIconComponent_o *craftItemIcon; // x8
  __int64 v109; // x1
  UILabel_o *v110; // x22
  struct EventTradeGoodsEntity_o *v111; // x8
  UILabel_o *possessionNumLabel; // x22
  Il2CppObject *v113; // x0
  struct EventTradeGoodsEntity_o *v114; // x8
  UILabel_o *nameTextLabel; // x22
  struct EventTradeGoodsEntity_o *v116; // x8
  System_String_o **p_name; // x8
  const MethodInfo *v118; // x2
  System_Collections_Generic_IEnumerable_T__o *craftIconMiniSprites; // x22
  __int64 v120; // x1
  __int64 v121; // x2
  __int64 v122; // x3
  System_Action_object__o *v123; // x25
  __int64 v124; // x1
  int64_t UserId; // x0
  struct ItemEntity_o *SupportTool_k__BackingField; // x8
  int32_t id; // w3
  int32_t v128; // w8
  UILabel_o *eventRestTimeLabel; // x22
  unsigned int v130; // w21
  const MethodInfo *v131; // x1
  bool v132; // w1
  __int64 v133; // x1
  UILabel_o *textOnMask; // x20
  int32_t v135; // [xsp+4h] [xbp-6Ch] BYREF
  UserItemEntity_o *v136; // [xsp+8h] [xbp-68h] BYREF
  UserItemEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4B19FBE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_UISprite__TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_UISprite___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v19, v20);
    sub_1BCA7E0(&int_TypeInfo, v21, v22);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&string_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_EventCraftListViewItemDraw___c__DisplayClass40_0__SetItem_b__0__, v29, v30);
    sub_1BCA7E0(&EventCraftListViewItemDraw___c__DisplayClass40_0_TypeInfo, v31, v32);
    sub_1BCA7E0(&StringLiteral_20548/*"img_item_brank"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_3966/*"CRAFT_EVENT_BOARD_SUPPORT_TOOL_BUTTON"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_17679/*"btn_craft_bg_02"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_17680/*"btn_craft_bg_03"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_20517/*"img_craft_reward_bg_1"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_20349/*"icon_craftsupport_frame"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_13536/*"TRADE_EVENT_BOARD_WITHDRAWALLABEL_BUTTON"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_17681/*"btn_craft_bg_04"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_13532/*"TRADE_EVENT_BOARD_RECEIVE_BUTTON"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_3965/*"CRAFT_EVENT_BOARD_START_BUTTON"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_19359/*"event_craft_8049402"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_20347/*"icon_craft_reward"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_19358/*"event_craft_8049401"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_13533/*"TRADE_EVENT_BOARD_REPLENISHMENT_BUTTON"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_20348/*"icon_craftsupport"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_19360/*"event_craft_8049403"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_18502/*"craftgauge_bar"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_3977/*"CRAFT_EVENT_END"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_17678/*"btn_craft_bg_01"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_13535/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, v73, v74);
    sub_1BCA7E0(&StringLiteral_18503/*"craftgauge_bg"*/, v75, v76);
    byte_4B19FBE = 1;
  }
  entity = 0LL;
  v136 = 0LL;
  if ( item && mode )
  {
    EventId_k__BackingField = item->fields._EventId_k__BackingField;
    craftingBaseSprite = this->fields.craftingBaseSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, item);
    AtlasManager__SetEventUI_38574572(
      EventId_k__BackingField,
      craftingBaseSprite,
      (System_String_o *)StringLiteral_19359/*"event_craft_8049402"*/,
      0LL);
    AtlasManager__SetEventUI_38574572(
      EventId_k__BackingField,
      this->fields.progressGaugeFront,
      (System_String_o *)StringLiteral_18502/*"craftgauge_bar"*/,
      0LL);
    AtlasManager__SetEventUI_38574572(
      EventId_k__BackingField,
      this->fields.progressGaugeBack,
      (System_String_o *)StringLiteral_18503/*"craftgauge_bg"*/,
      0LL);
    craftStartLabel = this->fields.craftStartLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v79);
    Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3965/*"CRAFT_EVENT_BOARD_START_BUTTON"*/, 0LL);
    if ( !craftStartLabel )
      goto LABEL_91;
    UILabel__set_text(craftStartLabel, (System_String_o *)Master_object, 0LL);
    AtlasManager__SetEventUI_38574572(
      EventId_k__BackingField,
      this->fields.craftStartButtonSprite,
      (System_String_o *)StringLiteral_17678/*"btn_craft_bg_01"*/,
      0LL);
    receiveLabel = this->fields.receiveLabel;
    Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13532/*"TRADE_EVENT_BOARD_RECEIVE_BUTTON"*/, 0LL);
    if ( !receiveLabel )
      goto LABEL_91;
    UILabel__set_text(receiveLabel, (System_String_o *)Master_object, 0LL);
    AtlasManager__SetEventUI_38574572(
      EventId_k__BackingField,
      this->fields.receiveButtonSprite,
      (System_String_o *)StringLiteral_17680/*"btn_craft_bg_03"*/,
      0LL);
    replenishmentLabel = this->fields.replenishmentLabel;
    Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13533/*"TRADE_EVENT_BOARD_REPLENISHMENT_BUTTON"*/, 0LL);
    if ( !replenishmentLabel )
      goto LABEL_91;
    UILabel__set_text(replenishmentLabel, (System_String_o *)Master_object, 0LL);
    AtlasManager__SetEventUI_38574572(
      EventId_k__BackingField,
      this->fields.replenishmentButtonSprite,
      (System_String_o *)StringLiteral_17678/*"btn_craft_bg_01"*/,
      0LL);
    withdrawLabel = this->fields.withdrawLabel;
    Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13536/*"TRADE_EVENT_BOARD_WITHDRAWALLABEL_BUTTON"*/, 0LL);
    if ( !withdrawLabel )
      goto LABEL_91;
    UILabel__set_text(withdrawLabel, (System_String_o *)Master_object, 0LL);
    AtlasManager__SetEventUI_38574572(
      EventId_k__BackingField,
      this->fields.withdrawButtonSprite,
      (System_String_o *)StringLiteral_17681/*"btn_craft_bg_04"*/,
      0LL);
    supportToolLabel = this->fields.supportToolLabel;
    Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3966/*"CRAFT_EVENT_BOARD_SUPPORT_TOOL_BUTTON"*/, 0LL);
    if ( !supportToolLabel )
      goto LABEL_91;
    UILabel__set_text(supportToolLabel, (System_String_o *)Master_object, 0LL);
    AtlasManager__SetEventUI_38574572(
      EventId_k__BackingField,
      this->fields.supportToolButtonSprite,
      (System_String_o *)StringLiteral_17679/*"btn_craft_bg_02"*/,
      0LL);
    AtlasManager__SetEventUI_38574572(
      EventId_k__BackingField,
      this->fields.supportToolUsedSprite,
      (System_String_o *)StringLiteral_20348/*"icon_craftsupport"*/,
      0LL);
    AtlasManager__SetEventUI_38574572(
      EventId_k__BackingField,
      this->fields.craftIconSupportToolBg,
      (System_String_o *)StringLiteral_20349/*"icon_craftsupport_frame"*/,
      0LL);
    AtlasManager__SetEventUI_38574572(
      EventId_k__BackingField,
      this->fields.rewardHeader,
      (System_String_o *)StringLiteral_20347/*"icon_craft_reward"*/,
      0LL);
    AtlasManager__SetEventUI_38574572(
      EventId_k__BackingField,
      this->fields.backSprite,
      (System_String_o *)StringLiteral_20517/*"img_craft_reward_bg_1"*/,
      0LL);
    EventCraftListViewItemDraw__SetReleaseDisplayObject(this, item->fields._IsRelease_k__BackingField, v87);
    if ( item->fields._IsRelease_k__BackingField )
    {
      v91 = sub_1BCAA2C(EventCraftListViewItemDraw___c__DisplayClass40_0_TypeInfo, v88, v89, v90);
      System_Object___ctor((Il2CppObject *)v91, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v92);
      Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
      TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
      if ( !TradeGoodsEntity_k__BackingField || !Master_object )
        goto LABEL_91;
      GiftListById = GiftMaster__GetGiftListById(
                       (GiftMaster_o *)Master_object,
                       TradeGoodsEntity_k__BackingField->fields.giftId,
                       0LL);
      if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)GiftListById, 0LL) )
        return;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v95);
      Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !v91 || !GiftListById )
        goto LABEL_91;
      if ( !GiftListById->max_length )
        goto LABEL_92;
      v96 = GiftListById->m_Items[0];
      if ( !v96 || !Master_object )
        goto LABEL_91;
      v97 = (struct EventTradeGoodsEntity_o **)(v91 + 16);
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              (Il2CppObject **)(v91 + 16),
              v96->fields.objectId,
              (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        return;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v98);
      v99 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
      baseSprite = this->fields.baseSprite;
      v102 = (UserItemMaster_o *)v99;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v100);
      Master_object = AtlasManager__SetEventUI_38574572(
                        EventId_k__BackingField,
                        baseSprite,
                        (System_String_o *)StringLiteral_19358/*"event_craft_8049401"*/,
                        0LL);
      if ( !GiftListById->max_length )
        goto LABEL_92;
      v103 = GiftListById->m_Items[0];
      if ( !v103 )
        goto LABEL_91;
      Master_object = (int64_t)this->fields.craftItemIcon;
      if ( !Master_object )
        goto LABEL_91;
      ItemIconComponent__SetItem((ItemIconComponent_o *)Master_object, v103->fields.objectId, -1, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v104);
      Master_object = NetworkManager__get_UserId(0LL);
      if ( !GiftListById->max_length )
LABEL_92:
        sub_1BCAA44(Master_object, v82);
      v105 = GiftListById->m_Items[0];
      if ( !v105 || !v102 )
        goto LABEL_91;
      Master_object = UserItemMaster__TryGetEntity(v102, &entity, Master_object, v105->fields.objectId, 0LL);
      if ( (Master_object & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_91;
        num = entity->fields.num;
      }
      else
      {
        num = 0;
      }
      possessionNumLabel = this->fields.possessionNumLabel;
      v135 = num;
      v113 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v135);
      Master_object = (int64_t)System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v113, 0LL);
      if ( !possessionNumLabel
        || (UILabel__set_text(possessionNumLabel, (System_String_o *)Master_object, 0LL),
            (v114 = item->fields._TradeGoodsEntity_k__BackingField) == 0LL) )
      {
LABEL_91:
        sub_1BCAA3C(Master_object, v82);
      }
      nameTextLabel = this->fields.nameTextLabel;
      Master_object = System_String__IsNullOrEmpty(v114->fields.name, 0LL);
      if ( (Master_object & 1) != 0 )
      {
        v116 = *v97;
        if ( !*v97 )
          goto LABEL_91;
      }
      else
      {
        v116 = item->fields._TradeGoodsEntity_k__BackingField;
        if ( !v116 )
          goto LABEL_91;
      }
      p_name = &v116->fields.name;
      if ( !nameTextLabel )
        goto LABEL_91;
      UILabel__set_text(nameTextLabel, *p_name, 0LL);
      EventCraftListViewItemDraw__SetPriceIconText(this, item, v118);
      craftIconMiniSprites = (System_Collections_Generic_IEnumerable_T__o *)this->fields.craftIconMiniSprites;
      v123 = (System_Action_object__o *)sub_1BCAA2C(System_Action_UISprite__TypeInfo, v120, v121, v122);
      System_Action_object____ctor(
        v123,
        (Il2CppObject *)v91,
        Method_EventCraftListViewItemDraw___c__DisplayClass40_0__SetItem_b__0__,
        0LL);
      BasicHelper__ForEach_object_(
        craftIconMiniSprites,
        (System_Action_T__o *)v123,
        (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_UISprite___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v124);
      UserId = NetworkManager__get_UserId(0LL);
      SupportTool_k__BackingField = item->fields._SupportTool_k__BackingField;
      if ( SupportTool_k__BackingField )
        id = SupportTool_k__BackingField->fields.id;
      else
        id = 0;
      Master_object = UserItemMaster__TryGetEntity(v102, &v136, UserId, id, 0LL);
      if ( (Master_object & 1) != 0 )
      {
        if ( !v136 )
          goto LABEL_91;
        v128 = v136->fields.num;
      }
      else
      {
        v128 = 0;
      }
      item->fields._PossessionNum_k__BackingField = v128;
    }
    else
    {
      v107 = this->fields.baseSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v88);
      Master_object = AtlasManager__SetEventUI_38574572(
                        EventId_k__BackingField,
                        v107,
                        (System_String_o *)StringLiteral_19360/*"event_craft_8049403"*/,
                        0LL);
      craftItemIcon = this->fields.craftItemIcon;
      if ( !craftItemIcon )
        goto LABEL_91;
      AtlasManager__SetEventUI_38574572(
        EventId_k__BackingField,
        craftItemIcon->fields.iconSprite,
        (System_String_o *)StringLiteral_20548/*"img_item_brank"*/,
        0LL);
      v110 = this->fields.nameTextLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v109);
      Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13535/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, 0LL);
      if ( !v110 )
        goto LABEL_91;
      UILabel__set_text(v110, (System_String_o *)Master_object, 0LL);
      v111 = item->fields._TradeGoodsEntity_k__BackingField;
      if ( !v111 )
        goto LABEL_91;
      Master_object = (int64_t)this->fields.textOnMask;
      if ( !Master_object )
        goto LABEL_91;
      UILabel__set_text((UILabel_o *)Master_object, v111->fields.closedMessage, 0LL);
    }
    eventRestTimeLabel = this->fields.eventRestTimeLabel;
    Master_object = (int64_t)EventCraftListViewItem__get_RestTimeEventAt(item, v82);
    if ( eventRestTimeLabel )
    {
      UILabel__set_text(eventRestTimeLabel, (System_String_o *)Master_object, 0LL);
      Master_object = (int64_t)this->fields.craftingBaseSprite;
      if ( Master_object )
      {
        Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
        if ( Master_object )
        {
          v130 = mode & 0xFFFFFFFE;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v130 == 4, 0LL);
          if ( !EventCraftListViewItem__get_IsEventEnd(item, v131) )
            return;
          if ( v130 == 4 )
          {
            Master_object = (int64_t)this->fields.textOnMask;
            if ( Master_object )
            {
              UILabel__set_text((UILabel_o *)Master_object, string_TypeInfo->static_fields->Empty, 0LL);
              Master_object = (int64_t)this->fields.maskSprite;
              if ( Master_object )
              {
                Master_object = (int64_t)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)Master_object,
                                           0LL);
                if ( Master_object )
                {
                  v132 = 0;
LABEL_89:
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v132, 0LL);
                  return;
                }
              }
            }
          }
          else
          {
            EventCraftListViewItemDraw__HideCraftMiniObj(this, v82);
            Master_object = (int64_t)this->fields.progressBar;
            if ( Master_object )
            {
              Master_object = (int64_t)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)Master_object,
                                         0LL);
              if ( Master_object )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
                textOnMask = this->fields.textOnMask;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v133);
                Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3977/*"CRAFT_EVENT_END"*/, 0LL);
                if ( textOnMask )
                {
                  UILabel__set_text(textOnMask, (System_String_o *)Master_object, 0LL);
                  Master_object = (int64_t)this->fields.textOnMask;
                  if ( Master_object )
                  {
                    Master_object = (int64_t)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)Master_object,
                                               0LL);
                    if ( Master_object )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
                      Master_object = (int64_t)this->fields.maskSprite;
                      if ( Master_object )
                      {
                        Master_object = (int64_t)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)Master_object,
                                                   0LL);
                        if ( Master_object )
                        {
                          v132 = 1;
                          goto LABEL_89;
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
    goto LABEL_91;
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
    sub_1BCAA3C(this, item);
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
    goto LABEL_29;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, !isRelease, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.textOnMask;
  if ( !maskSprite )
    goto LABEL_29;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, !isRelease, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.nameTextLabel;
  if ( !maskSprite )
    goto LABEL_29;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.eventRestTimeLabel;
  if ( !maskSprite )
    goto LABEL_29;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.priceInfoDouble;
  if ( !maskSprite )
    goto LABEL_29;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.priceInfoTriple;
  if ( !maskSprite )
    goto LABEL_29;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.craftItemIcon;
  if ( !maskSprite )
    goto LABEL_29;
  ItemIconComponent__SetPossessionTitleActivation((ItemIconComponent_o *)maskSprite, isRelease, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.rewardHeader;
  if ( !maskSprite )
    goto LABEL_29;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.craftStartButtonSprite;
  if ( !maskSprite )
    goto LABEL_29;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_29;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_29;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.craftingBaseSprite;
  if ( !maskSprite )
    goto LABEL_29;
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
LABEL_29:
    sub_1BCAA3C(maskSprite, isRelease);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0LL);
}


void __fastcall EventCraftListViewItemDraw__UpdateCraftIconMiniSprite(
        EventCraftListViewItemDraw_o *this,
        EventCraftListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  EventCraftListViewItemDraw___c_c *v12; // x0
  System_Collections_Generic_IEnumerable_T__o *craftIconMiniSprites; // x21
  System_Action_object__o *_9__43_0; // x22
  Il2CppObject *v15; // x23
  struct EventCraftListViewItemDraw___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  UnityEngine_GameObject_o *NowCompleteNum; // x0
  const MethodInfo *v24; // x1
  int v25; // w21
  struct UISprite_array *v26; // x8
  const MethodInfo *v27; // x1

  if ( (byte_4B19FC0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_UISprite__TypeInfo, item, method);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_UISprite___, v6, v7);
    sub_1BCA7E0(&Method_EventCraftListViewItemDraw___c__UpdateCraftIconMiniSprite_b__43_0__, v8, v9);
    sub_1BCA7E0(&EventCraftListViewItemDraw___c_TypeInfo, v10, v11);
    byte_4B19FC0 = 1;
  }
  v12 = EventCraftListViewItemDraw___c_TypeInfo;
  craftIconMiniSprites = (System_Collections_Generic_IEnumerable_T__o *)this->fields.craftIconMiniSprites;
  if ( !EventCraftListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCraftListViewItemDraw___c_TypeInfo, item);
    v12 = EventCraftListViewItemDraw___c_TypeInfo;
  }
  _9__43_0 = (System_Action_object__o *)v12->static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12, item);
      v12 = EventCraftListViewItemDraw___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__43_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_UISprite__TypeInfo, item, method, v3);
    System_Action_object____ctor(
      _9__43_0,
      v15,
      Method_EventCraftListViewItemDraw___c__UpdateCraftIconMiniSprite_b__43_0__,
      0LL);
    static_fields = EventCraftListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Action_UISprite__o *)_9__43_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__43_0,
      (int64_t)_9__43_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  BasicHelper__ForEach_object_(
    craftIconMiniSprites,
    (System_Action_T__o *)_9__43_0,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_UISprite___);
  if ( !item )
    goto LABEL_18;
  NowCompleteNum = (UnityEngine_GameObject_o *)EventCraftListViewItem__get_NowCompleteNum(item, v24);
  if ( (int)NowCompleteNum >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      v26 = this->fields.craftIconMiniSprites;
      if ( !v26 )
        break;
      if ( v25 >= v26->max_length )
        sub_1BCAA44(NowCompleteNum, v24);
      NowCompleteNum = (UnityEngine_GameObject_o *)v26->m_Items[v25];
      if ( !NowCompleteNum )
        break;
      NowCompleteNum = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NowCompleteNum, 0LL);
      if ( !NowCompleteNum )
        break;
      UnityEngine_GameObject__SetActive(NowCompleteNum, 1, 0LL);
      ++v25;
      NowCompleteNum = (UnityEngine_GameObject_o *)EventCraftListViewItem__get_NowCompleteNum(item, v27);
      if ( v25 >= (int)NowCompleteNum )
        return;
    }
LABEL_18:
    sub_1BCAA3C(NowCompleteNum, v24);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  int32_t EventId_k__BackingField; // w21
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  int64_t v51; // x23
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *PickupInfoList_k__BackingField; // x22
  EventCraftListViewItemDraw___c_c *v53; // x0
  System_Func_T__TResult__o *_9__42_0; // x23
  Il2CppObject *v55; // x25
  struct EventCraftListViewItemDraw___c_StaticFields *static_fields; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v63; // x0
  __int64 Time; // x0
  _BOOL8 v65; // x1
  __int64 v66; // x22
  struct UICommonButton_o *supportToolButton; // x24
  const MethodInfo *v68; // x1
  __int64 v69; // x1
  __int64 v70; // x1
  UISprite_o *v71; // x24
  __int64 v72; // x1
  EventCraftTimeCalculation_c *v73; // x0
  int32_t DEFAULT_EVENT_CRAFT_TIME_RATE; // w26
  __int64 v75; // x2
  __int64 v76; // x3
  struct System_Collections_Generic_List_EventCraftPickupInfo__o *v77; // x21
  EventCraftListViewItemDraw___c_c *v78; // x0
  System_Func_T__TResult__o *_9__42_1; // x24
  Il2CppObject *v80; // x25
  struct EventCraftListViewItemDraw___c_StaticFields *v81; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v88; // x0
  struct ItemEntity_o *SupportTool_k__BackingField; // x8
  struct EventTradeGoodsEntity_o *v90; // x8
  int32_t tradeTime; // w21
  double v92; // d8
  int64_t v93; // x0
  __int64 v94; // x1
  UILabel_o *timeRequiredCraft; // x21
  int64_t v96; // x22
  System_String_o *v97; // x0
  const MethodInfo *v98; // x1
  struct UICommonButton_o *craftStartButton; // x21
  const MethodInfo *v100; // x1
  char IsRelease_k__BackingField; // w8
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  struct EventTradeInfo_o *v103; // x8
  float v104; // s8
  const MethodInfo *v105; // x2
  __int64 v106; // x1
  UILabel_o *progressLabel; // x23
  System_String_o *v108; // x24
  const MethodInfo *v109; // x1
  struct EventTradeInfo_o *v110; // x8
  Il2CppObject *v111; // x25
  Il2CppObject *v112; // x0
  struct EventTradeInfo_o *v113; // x8
  __int64 v114; // x1
  struct UICommonButton_o *replenishmentButton; // x23
  const MethodInfo *v116; // x1
  char v117; // w8
  UISprite_o *backSprite; // x23
  struct EventTradeInfo_o *v119; // x8
  int64_t startedAt; // x23
  EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x26
  System_Collections_Generic_List_EventCraftPickupInfo__o *v122; // x25
  int32_t tradeNum; // w24
  int64_t CraftFinishTime; // x24
  int64_t v125; // x23
  const MethodInfo *v126; // x1
  int32_t NowTradeNum; // w0
  __int64 v128; // x1
  UILabel_o *timeLeftLabel; // x22
  int32_t v130; // w20
  bool v131; // cc
  __int64 v132; // x20
  System_String_o *v133; // x0
  __int64 v134; // x1
  UISprite_o *craftingStateSprite; // x22
  __int64 *v136; // x8
  __int64 v137; // x1
  float v138; // s1
  float v139; // s2
  float v140; // s0
  float v141; // s3
  int v142; // [xsp+8h] [xbp-68h] BYREF
  int32_t NowCompleteNum; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B19FBF & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Convert_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___, v11, v12);
    sub_1BCA7E0(&EventCraftTimeCalculation_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Func_EventCraftPickupInfo__long__TypeInfo, v15, v16);
    sub_1BCA7E0(&int_TypeInfo, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Math_TypeInfo, v21, v22);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&string_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_EventCraftListViewItemDraw___c__UpdateItem_b__42_0__, v27, v28);
    sub_1BCA7E0(&Method_EventCraftListViewItemDraw___c__UpdateItem_b__42_1__, v29, v30);
    sub_1BCA7E0(&EventCraftListViewItemDraw___c_TypeInfo, v31, v32);
    sub_1BCA7E0(&StringLiteral_20517/*"img_craft_reward_bg_1"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_20346/*"icon_craft_intrade"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_20345/*"icon_craft_compleate"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_20518/*"img_craft_reward_bg_2"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_3981/*"CRAFT_EVENT_PROGRESS_NUM"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_13467/*"TIME_FORMAT_1"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_13571/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/, v45, v46);
    byte_4B19FBF = 1;
  }
  if ( item && mode && item->fields._TradeGoodsEntity_k__BackingField && item->fields._IsRelease_k__BackingField )
  {
    EventCraftListViewItemDraw__UpdateSupportToolLb(this, item, *(const MethodInfo **)&mode);
    EventId_k__BackingField = item->fields._EventId_k__BackingField;
    v51 = 0LL;
    if ( !BasicHelper__IsNullOrEmpty(
            (System_Collections_ICollection_o *)item->fields._PickupInfoList_k__BackingField,
            0LL) )
    {
      PickupInfoList_k__BackingField = item->fields._PickupInfoList_k__BackingField;
      v53 = EventCraftListViewItemDraw___c_TypeInfo;
      if ( !EventCraftListViewItemDraw___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventCraftListViewItemDraw___c_TypeInfo, v48);
        v53 = EventCraftListViewItemDraw___c_TypeInfo;
      }
      _9__42_0 = (System_Func_T__TResult__o *)v53->static_fields->__9__42_0;
      if ( !_9__42_0 )
      {
        if ( !v53->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v53, v48);
          v53 = EventCraftListViewItemDraw___c_TypeInfo;
        }
        v55 = (Il2CppObject *)v53->static_fields->__9;
        _9__42_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                                  System_Func_EventCraftPickupInfo__long__TypeInfo,
                                                  v48,
                                                  v49,
                                                  v50);
        System_Func_object__long____ctor(
          _9__42_0,
          v55,
          Method_EventCraftListViewItemDraw___c__UpdateItem_b__42_0__,
          0LL);
        static_fields = EventCraftListViewItemDraw___c_TypeInfo->static_fields;
        static_fields->__9__42_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__42_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__42_0,
          (int64_t)_9__42_0,
          v57,
          v58,
          v59,
          v60,
          v61,
          v62);
      }
      v63 = System_Linq_Enumerable__Select_object__long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)PickupInfoList_k__BackingField,
              (System_Func_TSource__TResult__o *)_9__42_0,
              (const MethodInfo_2F4377C *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
      v51 = System_Linq_Enumerable__Max_64624728((System_Collections_Generic_IEnumerable_long__o *)v63, 0LL);
    }
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v48);
    Time = NetworkManager__getTime(0LL);
    if ( this->fields.supportToolButtonSprite )
    {
      v66 = Time;
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
            EventCraftListViewItemDraw__HideCraftMiniObj(this, (const MethodInfo *)v65);
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
                  Time = EventCraftListViewItem__get_NowTradeNum(item, v68);
                  if ( (int)Time < 1 || item->fields._PossessionNum_k__BackingField < 1 )
                  {
                    v65 = 0LL;
                  }
                  else
                  {
                    Time = (__int64)BalanceConfig_TypeInfo;
                    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v69);
                      Time = (__int64)BalanceConfig_TypeInfo;
                    }
                    v65 = v51 - v66 <= *(int *)(*(_QWORD *)(Time + 184) + 1196LL);
                  }
                  if ( supportToolButton )
                  {
                    Time = ((__int64 (__fastcall *)(struct UICommonButton_o *, _BOOL8, Il2CppMethodPointer))supportToolButton->klass->vtable._5_set_isEnabled.method)(
                             supportToolButton,
                             v65,
                             supportToolButton->klass->vtable._6_OnInit.methodPtr);
                    TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
                    if ( TradeInfo_k__BackingField )
                    {
                      if ( TradeInfo_k__BackingField->fields.tradeNum )
                      {
                        Time = EventCraftListViewItem__get_NowCompleteNum(item, (const MethodInfo *)v65);
                        v103 = item->fields._TradeInfo_k__BackingField;
                        if ( !v103 )
                          goto LABEL_140;
                        v104 = (float)(int)Time / (float)(v103->fields.getNum + v103->fields.tradeNum);
                      }
                      else
                      {
                        v104 = 0.0;
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
                            UIProgressBar__set_value((UIProgressBar_o *)Time, v104, 0LL);
                            EventCraftListViewItemDraw__UpdateCraftIconMiniSprite(this, item, v105);
                            progressLabel = this->fields.progressLabel;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v106);
                            v108 = LocalizationManager__Get((System_String_o *)StringLiteral_3981/*"CRAFT_EVENT_PROGRESS_NUM"*/, 0LL);
                            NowCompleteNum = EventCraftListViewItem__get_NowCompleteNum(item, v109);
                            Time = j_il2cpp_value_box_0(int_TypeInfo, &NowCompleteNum);
                            v110 = item->fields._TradeInfo_k__BackingField;
                            if ( v110 )
                            {
                              v111 = (Il2CppObject *)Time;
                              v142 = v110->fields.getNum + v110->fields.tradeNum;
                              v112 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v142);
                              Time = (__int64)System_String__Format_62415592(v108, v111, v112, 0LL);
                              if ( progressLabel )
                              {
                                UILabel__set_text(progressLabel, (System_String_o *)Time, 0LL);
                                v113 = item->fields._TradeInfo_k__BackingField;
                                if ( v113
                                  && (v113->fields.getNum >= 1
                                   || EventCraftListViewItem__get_NowCompleteNum(item, (const MethodInfo *)v65) >= 1) )
                                {
                                  ActionExtensions__Call(item->fields._UpdateReceiveAllButtonState_k__BackingField, 0LL);
                                  Time = (__int64)this->fields.receiveButtonSprite;
                                  if ( !Time )
                                    goto LABEL_140;
                                  Time = (__int64)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0LL);
                                  if ( !Time )
                                    goto LABEL_140;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                                  Time = (__int64)this->fields.replenishmentButtonSprite;
                                  if ( !Time )
                                    goto LABEL_140;
                                  Time = (__int64)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0LL);
                                  if ( !Time )
                                    goto LABEL_140;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                                  Time = (__int64)this->fields.withdrawButtonSprite;
                                  if ( !Time )
                                    goto LABEL_140;
                                  Time = (__int64)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0LL);
                                  if ( !Time )
                                    goto LABEL_140;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                                }
                                else
                                {
                                  Time = (__int64)this->fields.receiveButtonSprite;
                                  if ( !Time )
                                    goto LABEL_140;
                                  Time = (__int64)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0LL);
                                  if ( !Time )
                                    goto LABEL_140;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
                                  Time = (__int64)this->fields.replenishmentButtonSprite;
                                  if ( !Time )
                                    goto LABEL_140;
                                  Time = (__int64)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0LL);
                                  if ( !Time )
                                    goto LABEL_140;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                                  Time = (__int64)this->fields.withdrawButtonSprite;
                                  if ( !Time )
                                    goto LABEL_140;
                                  Time = (__int64)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Time,
                                                    0LL);
                                  if ( !Time )
                                    goto LABEL_140;
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
                                  replenishmentButton = this->fields.replenishmentButton;
                                  Time = EventCraftListViewItem__get_IsRefillable(item, v116);
                                  if ( (Time & 1) != 0 )
                                  {
                                    Time = EventCraftListViewItem__get_IsEventEnd(item, (const MethodInfo *)v65);
                                    v117 = Time ^ 1;
                                  }
                                  else
                                  {
                                    v117 = 0;
                                  }
                                  if ( !replenishmentButton )
                                    goto LABEL_140;
                                  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, Il2CppMethodPointer))replenishmentButton->klass->vtable._5_set_isEnabled.method)(
                                    replenishmentButton,
                                    v117 & 1,
                                    replenishmentButton->klass->vtable._6_OnInit.methodPtr);
                                }
                                backSprite = this->fields.backSprite;
                                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v114);
                                Time = AtlasManager__SetEventUI_38574572(
                                         EventId_k__BackingField,
                                         backSprite,
                                         (System_String_o *)StringLiteral_20518/*"img_craft_reward_bg_2"*/,
                                         0LL);
                                v119 = item->fields._TradeInfo_k__BackingField;
                                if ( v119 )
                                {
                                  startedAt = v119->fields.startedAt;
                                  TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
                                  v122 = item->fields._PickupInfoList_k__BackingField;
                                  tradeNum = v119->fields.tradeNum;
                                  if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v65);
                                  CraftFinishTime = EventCraftTimeCalculation__GetCraftFinishTime(
                                                      TradeGoodsEntity_k__BackingField,
                                                      v122,
                                                      0LL,
                                                      tradeNum,
                                                      startedAt,
                                                      0LL);
                                  v125 = startedAt - v66;
                                  NowTradeNum = EventCraftListViewItem__get_NowTradeNum(item, v126);
                                  timeLeftLabel = this->fields.timeLeftLabel;
                                  v130 = NowTradeNum;
                                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v128);
                                  v131 = v130 <= 0;
                                  v132 = v125 + CraftFinishTime;
                                  if ( v131 )
                                  {
                                    Time = (__int64)LocalizationManager__Get(
                                                      (System_String_o *)StringLiteral_13571/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/,
                                                      0LL);
                                    if ( !timeLeftLabel )
                                      goto LABEL_140;
                                    UILabel__set_text(timeLeftLabel, (System_String_o *)Time, 0LL);
                                    craftingStateSprite = this->fields.craftingStateSprite;
                                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v137);
                                    v136 = &StringLiteral_20345/*"icon_craft_compleate"*/;
                                  }
                                  else
                                  {
                                    v133 = LocalizationManager__Get((System_String_o *)StringLiteral_13467/*"TIME_FORMAT_1"*/, 0LL);
                                    Time = (__int64)LocalizationManager__GetRestTimeInFormat(
                                                      v125 + CraftFinishTime,
                                                      0LL,
                                                      v133,
                                                      0LL);
                                    if ( !timeLeftLabel )
                                      goto LABEL_140;
                                    UILabel__set_text(timeLeftLabel, (System_String_o *)Time, 0LL);
                                    craftingStateSprite = this->fields.craftingStateSprite;
                                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v134);
                                    v136 = &StringLiteral_20346/*"icon_craft_intrade"*/;
                                  }
                                  AtlasManager__SetEventUI_38574572(
                                    EventId_k__BackingField,
                                    craftingStateSprite,
                                    (System_String_o *)*v136,
                                    0LL);
                                  v138 = 0.92157;
                                  Time = (__int64)this->fields.timeLeftLabel;
                                  if ( v132 >= 3600 )
                                    v139 = 0.015686;
                                  else
                                    v139 = 0.0;
                                  if ( v132 < 3600 )
                                    v138 = 0.0;
                                  if ( Time )
                                  {
                                    v140 = 1.0;
                                    v141 = 1.0;
                                    UIWidget__set_color((UIWidget_o *)Time, *(UnityEngine_Color_o *)(&v138 - 1), 0LL);
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
                                          v71 = this->fields.backSprite;
                                          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v70);
                                          AtlasManager__SetEventUI_38574572(
                                            EventId_k__BackingField,
                                            v71,
                                            (System_String_o *)StringLiteral_20517/*"img_craft_reward_bg_1"*/,
                                            0LL);
                                          v73 = EventCraftTimeCalculation_TypeInfo;
                                          if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
                                          {
                                            j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v72);
                                            v73 = EventCraftTimeCalculation_TypeInfo;
                                          }
                                          DEFAULT_EVENT_CRAFT_TIME_RATE = v73->static_fields->DEFAULT_EVENT_CRAFT_TIME_RATE;
                                          Time = BasicHelper__IsNullOrEmpty(
                                                   (System_Collections_ICollection_o *)item->fields._PickupInfoList_k__BackingField,
                                                   0LL);
                                          if ( (Time & 1) == 0 && item->fields._SupportTool_k__BackingField )
                                          {
                                            v77 = item->fields._PickupInfoList_k__BackingField;
                                            v78 = EventCraftListViewItemDraw___c_TypeInfo;
                                            if ( !EventCraftListViewItemDraw___c_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(
                                                EventCraftListViewItemDraw___c_TypeInfo,
                                                v65);
                                              v78 = EventCraftListViewItemDraw___c_TypeInfo;
                                            }
                                            _9__42_1 = (System_Func_T__TResult__o *)v78->static_fields->__9__42_1;
                                            if ( !_9__42_1 )
                                            {
                                              if ( !v78->_2.cctor_finished )
                                              {
                                                j_il2cpp_runtime_class_init_0(v78, v65);
                                                v78 = EventCraftListViewItemDraw___c_TypeInfo;
                                              }
                                              v80 = (Il2CppObject *)v78->static_fields->__9;
                                              _9__42_1 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                                                                        System_Func_EventCraftPickupInfo__long__TypeInfo,
                                                                                        v65,
                                                                                        v75,
                                                                                        v76);
                                              System_Func_object__long____ctor(
                                                _9__42_1,
                                                v80,
                                                Method_EventCraftListViewItemDraw___c__UpdateItem_b__42_1__,
                                                0LL);
                                              v81 = EventCraftListViewItemDraw___c_TypeInfo->static_fields;
                                              v81->__9__42_1 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__42_1;
                                              sub_1BCA784(
                                                (PartyOrganizationUtility_o *)&v81->__9__42_1,
                                                (int64_t)_9__42_1,
                                                v82,
                                                v83,
                                                v84,
                                                v85,
                                                v86,
                                                v87);
                                            }
                                            v88 = System_Linq_Enumerable__Select_object__long_(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v77,
                                                    (System_Func_TSource__TResult__o *)_9__42_1,
                                                    (const MethodInfo_2F4377C *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
                                            Time = System_Linq_Enumerable__Max_64624728(
                                                     (System_Collections_Generic_IEnumerable_long__o *)v88,
                                                     0LL);
                                            if ( v51 >= v66 && v66 >= Time )
                                            {
                                              SupportTool_k__BackingField = item->fields._SupportTool_k__BackingField;
                                              if ( !SupportTool_k__BackingField )
                                                goto LABEL_140;
                                              DEFAULT_EVENT_CRAFT_TIME_RATE = SupportTool_k__BackingField->fields.value;
                                            }
                                          }
                                          v90 = item->fields._TradeGoodsEntity_k__BackingField;
                                          if ( v90 )
                                          {
                                            tradeTime = v90->fields.tradeTime;
                                            if ( !System_Math_TypeInfo->_2.cctor_finished )
                                              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v65);
                                            v92 = ceil((double)(tradeTime * DEFAULT_EVENT_CRAFT_TIME_RATE) / 1000.0);
                                            if ( !System_Convert_TypeInfo->_2.cctor_finished )
                                              j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v65);
                                            v93 = System_Convert__ToInt64_63060120(v92, 0LL);
                                            timeRequiredCraft = this->fields.timeRequiredCraft;
                                            v96 = v93;
                                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v94);
                                            v97 = LocalizationManager__Get((System_String_o *)StringLiteral_13467/*"TIME_FORMAT_1"*/, 0LL);
                                            Time = (__int64)LocalizationManager__GetRestTimeInFormat(v96, 0LL, v97, 0LL);
                                            if ( timeRequiredCraft )
                                            {
                                              UILabel__set_text(timeRequiredCraft, (System_String_o *)Time, 0LL);
                                              EventCraftListViewItemDraw__HideCraftMiniObj(this, v98);
                                              craftStartButton = this->fields.craftStartButton;
                                              Time = EventCraftListViewItem__get_IsBuyAble(item, v100);
                                              if ( (Time & 1) != 0 )
                                              {
                                                IsRelease_k__BackingField = item->fields._IsRelease_k__BackingField;
                                                if ( IsRelease_k__BackingField )
                                                {
                                                  Time = EventCraftListViewItem__get_IsEventEnd(
                                                           item,
                                                           (const MethodInfo *)v65);
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
LABEL_140:
    sub_1BCAA3C(Time, v65);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  bool IsUsedSupportTool; // w20
  __int64 v20; // x2
  __int64 v21; // x3
  int64_t v22; // x21
  System_Collections_Generic_IEnumerable_TSource__o *PickupInfoList_k__BackingField; // x21
  EventCraftListViewItemDraw___c_c *v24; // x0
  System_Func_T__TResult__o *_9__45_0; // x22
  Il2CppObject *v26; // x23
  struct EventCraftListViewItemDraw___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v34; // x0
  __int64 v35; // x1
  UILabel_o *supportToolLeftTime; // x19
  System_String_o *v37; // x20
  System_String_o *v38; // x0
  Il2CppObject *RestTimeInFormat; // x0

  v3 = item;
  v4 = this;
  if ( (byte_4B19FC2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___, item, method);
    sub_1BCA7E0(&System_Func_EventCraftPickupInfo__long__TypeInfo, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&string_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_EventCraftListViewItemDraw___c__UpdateSupportToolLb_b__45_0__, v11, v12);
    sub_1BCA7E0(&EventCraftListViewItemDraw___c_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_3967/*"CRAFT_EVENT_BOARD_SUPPORT_TOOL_LEFT_TIME"*/, v15, v16);
    this = (EventCraftListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_13467/*"TIME_FORMAT_1"*/, v17, v18);
    byte_4B19FC2 = 1;
  }
  if ( !v3 )
    goto LABEL_23;
  IsUsedSupportTool = EventCraftListViewItem__IsUsedSupportTool(v3, (const MethodInfo *)item);
  v22 = 0LL;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v3->fields._PickupInfoList_k__BackingField, 0LL) )
  {
    PickupInfoList_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)v3->fields._PickupInfoList_k__BackingField;
    v24 = EventCraftListViewItemDraw___c_TypeInfo;
    if ( !EventCraftListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventCraftListViewItemDraw___c_TypeInfo, item);
      v24 = EventCraftListViewItemDraw___c_TypeInfo;
    }
    _9__45_0 = (System_Func_T__TResult__o *)v24->static_fields->__9__45_0;
    if ( !_9__45_0 )
    {
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24, item);
        v24 = EventCraftListViewItemDraw___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v24->static_fields->__9;
      _9__45_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                                System_Func_EventCraftPickupInfo__long__TypeInfo,
                                                item,
                                                v20,
                                                v21);
      System_Func_object__long____ctor(
        _9__45_0,
        v26,
        Method_EventCraftListViewItemDraw___c__UpdateSupportToolLb_b__45_0__,
        0LL);
      static_fields = EventCraftListViewItemDraw___c_TypeInfo->static_fields;
      static_fields->__9__45_0 = (struct System_Func_EventCraftPickupInfo__long__o *)_9__45_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__45_0,
        (int64_t)_9__45_0,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    v34 = System_Linq_Enumerable__Select_object__long_(
            PickupInfoList_k__BackingField,
            (System_Func_TSource__TResult__o *)_9__45_0,
            (const MethodInfo_2F4377C *)Method_System_Linq_Enumerable_Select_EventCraftPickupInfo__long___);
    v22 = System_Linq_Enumerable__Max_64624728((System_Collections_Generic_IEnumerable_long__o *)v34, 0LL);
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3967/*"CRAFT_EVENT_BOARD_SUPPORT_TOOL_LEFT_TIME"*/, 0LL);
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_13467/*"TIME_FORMAT_1"*/, 0LL);
    RestTimeInFormat = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(v22, -1LL, v38, 0LL);
    this = (EventCraftListViewItemDraw_o *)System_String__Format(v37, RestTimeInFormat, 0LL);
    item = (EventCraftListViewItem_o *)this;
  }
  else
  {
    item = (EventCraftListViewItem_o *)string_TypeInfo->static_fields->Empty;
  }
  if ( !supportToolLeftTime )
LABEL_23:
    sub_1BCAA3C(this, item);
  UILabel__set_text(supportToolLeftTime, (System_String_o *)item, 0LL);
}


void __fastcall EventCraftListViewItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B19FC3 & 1) == 0 )
  {
    sub_1BCA7E0(&EventCraftListViewItemDraw___c_TypeInfo, v1, v2);
    byte_4B19FC3 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventCraftListViewItemDraw___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventCraftListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct EventCraftListViewItemDraw___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventCraftListViewItemDraw___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, sprite);
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
    sub_1BCAA3C(this, sprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


int64_t __fastcall EventCraftListViewItemDraw___c___UpdateItem_b__42_0(
        EventCraftListViewItemDraw___c_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.endedAt;
}


int64_t __fastcall EventCraftListViewItemDraw___c___UpdateItem_b__42_1(
        EventCraftListViewItemDraw___c_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.startedAt;
}


int64_t __fastcall EventCraftListViewItemDraw___c___UpdateSupportToolLb_b__45_0(
        EventCraftListViewItemDraw___c_o *this,
        EventCraftPickupInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
  if ( (byte_4B19FC4 & 1) == 0 )
  {
    this = (EventCraftListViewItemDraw___c__DisplayClass40_0_o *)sub_1BCA7E0(&AtlasManager_TypeInfo, sprite, method);
    byte_4B19FC4 = 1;
  }
  itemEnt = v4->fields.itemEnt;
  if ( !itemEnt )
    sub_1BCAA3C(this, sprite);
  imageId = itemEnt->fields.imageId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, sprite);
  AtlasManager__SetItem(sprite, imageId, 0LL);
}