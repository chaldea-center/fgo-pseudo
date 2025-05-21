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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  EventTradeListViewItemDraw___c_c *v6; // x0
  System_Collections_Generic_IEnumerable_T__o *sweetsAnimSpriteArray; // x19
  System_Action_object__o *_9__46_0; // x20
  Il2CppObject *v9; // x21
  struct EventTradeListViewItemDraw___c_StaticFields *static_fields; // x0

  if ( (byte_4B3F527 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_UISprite__TypeInfo, method);
    sub_1BDB878(&Method_BasicHelper_ForEach_UISprite___, v3);
    sub_1BDB878(&Method_EventTradeListViewItemDraw___c__DestroyAnimObj_b__46_0__, v4);
    sub_1BDB878(&EventTradeListViewItemDraw___c_TypeInfo, v5);
    byte_4B3F527 = 1;
  }
  v6 = EventTradeListViewItemDraw___c_TypeInfo;
  sweetsAnimSpriteArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.sweetsAnimSpriteArray;
  if ( !EventTradeListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemDraw___c_TypeInfo);
    v6 = EventTradeListViewItemDraw___c_TypeInfo;
  }
  _9__46_0 = (System_Action_object__o *)v6->static_fields->__9__46_0;
  if ( !_9__46_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = EventTradeListViewItemDraw___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__46_0 = (System_Action_object__o *)sub_1BDBAC4(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(_9__46_0, v9, Method_EventTradeListViewItemDraw___c__DestroyAnimObj_b__46_0__, 0LL);
    static_fields = EventTradeListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__46_0 = (struct System_Action_UISprite__o *)_9__46_0;
    sub_1BDB81C(&static_fields->__9__46_0);
  }
  BasicHelper__ForEach_object_(
    sweetsAnimSpriteArray,
    (System_Action_T__o *)_9__46_0,
    (const MethodInfo_301FA1C *)Method_BasicHelper_ForEach_UISprite___);
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
      sub_1BDBAD4(initMode, 0LL);
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
  Il2CppObject *v38; // x22
  int64_t nameTextLabel; // x0
  const MethodInfo *v40; // x1
  EventTradeListViewItem_o **v41; // x21
  int32_t EventId_k__BackingField; // w23
  UISprite_o *tradingBaseSprite; // x24
  UILabel_o *tradeStartLabel; // x23
  UILabel_o *rewardReceivedPossibleLabel; // x23
  UILabel_o *replenishmentLabel; // x23
  UILabel_o *withdrawalLabel; // x23
  System_Collections_Generic_IEnumerable_T__o *sweetsAnimSpriteArray; // x23
  System_Action_object__o *v49; // x24
  const MethodInfo *v50; // x2
  Il2CppClass *klass; // x8
  EventTradeListViewItem_o *v52; // x8
  _BOOL4 IsRelease_k__BackingField; // w24
  int32_t v54; // w23
  UISprite_o *baseSprite; // x22
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  EventTradeListViewItem_o *v59; // x8
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x9
  int32_t v61; // w23
  UISprite_o *itemIcon; // x22
  Il2CppObject *v63; // x0
  System_String_o *v64; // x0
  struct EventTradeGoodsEntity_o *v65; // x8
  System_String_o *name; // x1
  UILabel_o *v67; // x22
  struct EventTradeGoodsEntity_o *v68; // x8
  const MethodInfo *v69; // x2
  int64_t v70; // x23
  void *monitor; // x26
  UILabel_o *restTimeLabel; // x22
  System_String_o *v73; // x23
  void *v74; // x24
  int64_t Time; // x0
  Il2CppObject *RestTime2; // x0
  const MethodInfo *v77; // x2
  unsigned int v78; // w20
  bool v79; // w1
  bool v80; // w1
  UILabel_o *textOnMask; // x20
  int32_t goodsIconId; // [xsp+Ch] [xbp-54h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B3F522 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_UISprite__TypeInfo, item);
    sub_1BDB878(&AtlasManager_TypeInfo, v7);
    sub_1BDB878(&Method_BasicHelper_ForEach_UISprite___, v8);
    sub_1BDB878(&Method_DataManager_GetMaster_EventMaster___, v9);
    sub_1BDB878(&DataManager_TypeInfo, v10);
    sub_1BDB878(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v11);
    sub_1BDB878(&int_TypeInfo, v12);
    sub_1BDB878(&LocalizationManager_TypeInfo, v13);
    sub_1BDB878(&NetworkManager_TypeInfo, v14);
    sub_1BDB878(&string_TypeInfo, v15);
    sub_1BDB878(&Method_EventTradeListViewItemDraw___c__DisplayClass41_0__SetItem_b__0__, v16);
    sub_1BDB878(&EventTradeListViewItemDraw___c__DisplayClass41_0_TypeInfo, v17);
    sub_1BDB878(&StringLiteral_17548/*"btn_trade_bg_01"*/, v18);
    sub_1BDB878(&StringLiteral_20269/*"icon_{0}"*/, v19);
    sub_1BDB878(&StringLiteral_20433/*"img_item_brank"*/, v20);
    sub_1BDB878(&StringLiteral_20267/*"icon_trade_reward"*/, v21);
    sub_1BDB878(&StringLiteral_13435/*"TRADE_EVENT_BOARD_WITHDRAWALLABEL_BUTTON"*/, v22);
    sub_1BDB878(&StringLiteral_19300/*"event_trade_8048001"*/, v23);
    sub_1BDB878(&StringLiteral_13372/*"TIME_REST2_NONE"*/, v24);
    sub_1BDB878(&StringLiteral_13431/*"TRADE_EVENT_BOARD_RECEIVE_BUTTON"*/, v25);
    sub_1BDB878(&StringLiteral_24224/*"tradegauge_bg"*/, v26);
    sub_1BDB878(&StringLiteral_20233/*"icon_popularitem"*/, v27);
    sub_1BDB878(&StringLiteral_13432/*"TRADE_EVENT_BOARD_REPLENISHMENT_BUTTON"*/, v28);
    sub_1BDB878(&StringLiteral_13461/*"TRADE_EVENT_REST_TIME_LABEL"*/, v29);
    sub_1BDB878(&StringLiteral_19301/*"event_trade_8048002"*/, v30);
    sub_1BDB878(&StringLiteral_13443/*"TRADE_EVENT_END"*/, v31);
    sub_1BDB878(&StringLiteral_24223/*"tradegauge_bar"*/, v32);
    sub_1BDB878(&StringLiteral_17549/*"btn_trade_bg_02"*/, v33);
    sub_1BDB878(&StringLiteral_19302/*"event_trade_8048003"*/, v34);
    sub_1BDB878(&StringLiteral_20264/*"icon_trade_arrow"*/, v35);
    sub_1BDB878(&StringLiteral_13433/*"TRADE_EVENT_BOARD_START_BUTTON"*/, v36);
    sub_1BDB878(&StringLiteral_13434/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, v37);
    byte_4B3F522 = 1;
  }
  entity = 0LL;
  v38 = (Il2CppObject *)sub_1BDBAC4(EventTradeListViewItemDraw___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor(v38, 0LL);
  if ( !v38 )
    goto LABEL_90;
  v38[1].klass = (Il2CppClass *)item;
  v41 = (EventTradeListViewItem_o **)&v38[1];
  sub_1BDB81C(&v38[1]);
  if ( mode && *v41 )
  {
    EventId_k__BackingField = (*v41)->fields._EventId_k__BackingField;
    tradingBaseSprite = this->fields.tradingBaseSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    nameTextLabel = AtlasManager__SetEventUI_39626228(
                      EventId_k__BackingField,
                      tradingBaseSprite,
                      (System_String_o *)StringLiteral_19301/*"event_trade_8048002"*/,
                      0LL);
    if ( !*v41 )
      goto LABEL_90;
    nameTextLabel = AtlasManager__SetEventUI_39626228(
                      (*v41)->fields._EventId_k__BackingField,
                      this->fields.progressGaugeFront,
                      (System_String_o *)StringLiteral_24223/*"tradegauge_bar"*/,
                      0LL);
    if ( !*v41 )
      goto LABEL_90;
    nameTextLabel = AtlasManager__SetEventUI_39626228(
                      (*v41)->fields._EventId_k__BackingField,
                      this->fields.progressGaugeBack,
                      (System_String_o *)StringLiteral_24224/*"tradegauge_bg"*/,
                      0LL);
    if ( !*v41 )
      goto LABEL_90;
    AtlasManager__SetEventUI_39626228(
      (*v41)->fields._EventId_k__BackingField,
      this->fields.pickupSprite,
      (System_String_o *)StringLiteral_20233/*"icon_popularitem"*/,
      0LL);
    tradeStartLabel = this->fields.tradeStartLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13433/*"TRADE_EVENT_BOARD_START_BUTTON"*/, 0LL);
    if ( !tradeStartLabel )
      goto LABEL_90;
    UILabel__set_text(tradeStartLabel, (System_String_o *)nameTextLabel, 0LL);
    if ( !*v41 )
      goto LABEL_90;
    AtlasManager__SetEventUI_39626228(
      (*v41)->fields._EventId_k__BackingField,
      this->fields.tradeStartButtonSprite,
      (System_String_o *)StringLiteral_17548/*"btn_trade_bg_01"*/,
      0LL);
    rewardReceivedPossibleLabel = this->fields.rewardReceivedPossibleLabel;
    nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13431/*"TRADE_EVENT_BOARD_RECEIVE_BUTTON"*/, 0LL);
    if ( !rewardReceivedPossibleLabel )
      goto LABEL_90;
    UILabel__set_text(rewardReceivedPossibleLabel, (System_String_o *)nameTextLabel, 0LL);
    if ( !*v41 )
      goto LABEL_90;
    AtlasManager__SetEventUI_39626228(
      (*v41)->fields._EventId_k__BackingField,
      this->fields.rewardReceivedPossibleButtonSprite,
      (System_String_o *)StringLiteral_17549/*"btn_trade_bg_02"*/,
      0LL);
    replenishmentLabel = this->fields.replenishmentLabel;
    nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13432/*"TRADE_EVENT_BOARD_REPLENISHMENT_BUTTON"*/, 0LL);
    if ( !replenishmentLabel )
      goto LABEL_90;
    UILabel__set_text(replenishmentLabel, (System_String_o *)nameTextLabel, 0LL);
    if ( !*v41 )
      goto LABEL_90;
    AtlasManager__SetEventUI_39626228(
      (*v41)->fields._EventId_k__BackingField,
      this->fields.replenishmentButtonSprite,
      (System_String_o *)StringLiteral_17548/*"btn_trade_bg_01"*/,
      0LL);
    withdrawalLabel = this->fields.withdrawalLabel;
    nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13435/*"TRADE_EVENT_BOARD_WITHDRAWALLABEL_BUTTON"*/, 0LL);
    if ( !withdrawalLabel )
      goto LABEL_90;
    UILabel__set_text(withdrawalLabel, (System_String_o *)nameTextLabel, 0LL);
    if ( !*v41 )
      goto LABEL_90;
    nameTextLabel = AtlasManager__SetEventUI_39626228(
                      (*v41)->fields._EventId_k__BackingField,
                      this->fields.withdrawalButtonSprite,
                      (System_String_o *)StringLiteral_17548/*"btn_trade_bg_01"*/,
                      0LL);
    if ( !*v41 )
      goto LABEL_90;
    nameTextLabel = AtlasManager__SetEventUI_39626228(
                      (*v41)->fields._EventId_k__BackingField,
                      this->fields.tradeRewardIconSprite,
                      (System_String_o *)StringLiteral_20267/*"icon_trade_reward"*/,
                      0LL);
    if ( !*v41 )
      goto LABEL_90;
    AtlasManager__SetEventUI_39626228(
      (*v41)->fields._EventId_k__BackingField,
      this->fields.tradeArrowIconSprite,
      (System_String_o *)StringLiteral_20264/*"icon_trade_arrow"*/,
      0LL);
    sweetsAnimSpriteArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.sweetsAnimSpriteArray;
    v49 = (System_Action_object__o *)sub_1BDBAC4(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(v49, v38, Method_EventTradeListViewItemDraw___c__DisplayClass41_0__SetItem_b__0__, 0LL);
    BasicHelper__ForEach_object_(
      sweetsAnimSpriteArray,
      (System_Action_T__o *)v49,
      (const MethodInfo_301FA1C *)Method_BasicHelper_ForEach_UISprite___);
    klass = v38[1].klass;
    if ( !klass )
      goto LABEL_90;
    EventTradeListViewItemDraw__SetReleaseDisplayObject(this, BYTE4(klass->_1.properties), v50);
    v52 = *v41;
    if ( !*v41 )
      goto LABEL_90;
    IsRelease_k__BackingField = v52->fields._IsRelease_k__BackingField;
    v54 = v52->fields._EventId_k__BackingField;
    baseSprite = this->fields.baseSprite;
    if ( AtlasManager_TypeInfo->_2.cctor_finished )
    {
      if ( v52->fields._IsRelease_k__BackingField )
        goto LABEL_27;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( IsRelease_k__BackingField )
      {
LABEL_27:
        nameTextLabel = AtlasManager__SetEventUI_39626228(v54, baseSprite, (System_String_o *)StringLiteral_19300/*"event_trade_8048001"*/, 0LL);
        v59 = *v41;
        if ( !*v41 )
          goto LABEL_90;
        TradeGoodsEntity_k__BackingField = v59->fields._TradeGoodsEntity_k__BackingField;
        if ( !TradeGoodsEntity_k__BackingField )
          goto LABEL_90;
        v61 = v59->fields._EventId_k__BackingField;
        itemIcon = this->fields.itemIcon;
        goodsIconId = TradeGoodsEntity_k__BackingField->fields.goodsIconId;
        v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &goodsIconId, v56, v57, v58);
        v64 = System_String__Format((System_String_o *)StringLiteral_20269/*"icon_{0}"*/, v63, 0LL);
        nameTextLabel = AtlasManager__SetEventUI_39626228(v61, itemIcon, v64, 0LL);
        if ( !*v41 )
          goto LABEL_90;
        v65 = (*v41)->fields._TradeGoodsEntity_k__BackingField;
        if ( !v65 )
          goto LABEL_90;
        nameTextLabel = (int64_t)this->fields.nameTextLabel;
        if ( !nameTextLabel )
          goto LABEL_90;
        name = v65->fields.name;
        goto LABEL_42;
      }
    }
    nameTextLabel = AtlasManager__SetEventUI_39626228(v54, baseSprite, (System_String_o *)StringLiteral_19302/*"event_trade_8048003"*/, 0LL);
    if ( !*v41 )
      goto LABEL_90;
    AtlasManager__SetEventUI_39626228(
      (*v41)->fields._EventId_k__BackingField,
      this->fields.itemIcon,
      (System_String_o *)StringLiteral_20433/*"img_item_brank"*/,
      0LL);
    v67 = (UILabel_o *)this->fields.nameTextLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13434/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, 0LL);
    if ( !v67 )
      goto LABEL_90;
    UILabel__set_text(v67, (System_String_o *)nameTextLabel, 0LL);
    if ( !*v41 )
      goto LABEL_90;
    v68 = (*v41)->fields._TradeGoodsEntity_k__BackingField;
    if ( !v68 )
      goto LABEL_90;
    nameTextLabel = (int64_t)this->fields.textOnMask;
    if ( !nameTextLabel )
      goto LABEL_90;
    name = v68->fields.closedMessage;
LABEL_42:
    UILabel__set_text((UILabel_o *)nameTextLabel, name, 0LL);
    if ( !*v41 )
      goto LABEL_90;
    if ( (*v41)->fields._EventId_k__BackingField >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      nameTextLabel = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !*v41 || !nameTextLabel )
        goto LABEL_90;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)nameTextLabel,
             &entity,
             (*v41)->fields._EventId_k__BackingField,
             (const MethodInfo_32E1E88 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        nameTextLabel = NetworkManager__getTime(0LL);
        if ( !entity )
          goto LABEL_90;
        v70 = nameTextLabel;
        monitor = entity[6].monitor;
        restTimeLabel = this->fields.restTimeLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v70 >= (__int64)monitor )
        {
          nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13372/*"TIME_REST2_NONE"*/, 0LL);
        }
        else
        {
          nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13461/*"TRADE_EVENT_REST_TIME_LABEL"*/, 0LL);
          if ( !entity )
            goto LABEL_90;
          v73 = (System_String_o *)nameTextLabel;
          v74 = entity[6].monitor;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Time = NetworkManager__getTime(0LL);
          RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2((int64_t)v74, Time, 0LL);
          nameTextLabel = (int64_t)System_String__Format(v73, RestTime2, 0LL);
        }
        v40 = (const MethodInfo *)nameTextLabel;
        if ( !restTimeLabel )
LABEL_90:
          sub_1BDBAD4(nameTextLabel, v40);
        UILabel__set_text(restTimeLabel, (System_String_o *)nameTextLabel, 0LL);
      }
    }
    EventTradeListViewItemDraw__SetPriceIconText(this, *v41, v69);
    EventTradeListViewItemDraw__SetRewardIconText(this, *v41, v77);
    v78 = mode & 0xFFFFFFFE;
    if ( v78 == 4 )
    {
      nameTextLabel = (int64_t)this->fields.tradingBaseSprite;
      if ( !nameTextLabel )
        goto LABEL_90;
      nameTextLabel = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameTextLabel, 0LL);
      if ( !nameTextLabel )
        goto LABEL_90;
      v79 = 1;
    }
    else
    {
      if ( v78 != 2 )
        goto LABEL_71;
      nameTextLabel = (int64_t)this->fields.tradingBaseSprite;
      if ( !nameTextLabel )
        goto LABEL_90;
      nameTextLabel = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameTextLabel, 0LL);
      if ( !nameTextLabel )
        goto LABEL_90;
      v79 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameTextLabel, v79, 0LL);
LABEL_71:
    nameTextLabel = (int64_t)*v41;
    if ( *v41 )
    {
      if ( !EventTradeListViewItem__get_IsEventEnd((EventTradeListViewItem_o *)nameTextLabel, v40) )
        return;
      if ( v78 == 4 )
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
              v80 = 0;
LABEL_88:
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameTextLabel, v80, 0LL);
              return;
            }
          }
        }
      }
      else
      {
        EventTradeListViewItemDraw__DestroyAnimObj(this, v40);
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
            nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13443/*"TRADE_EVENT_END"*/, 0LL);
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
                      v80 = 1;
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

  if ( (byte_4B3F523 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, item);
    byte_4B3F523 = 1;
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
    sub_1BDBAD4(priceInfoSingle, item);
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
    sub_1BDBAD4(maskSprite, isRelease);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0LL);
}


void __fastcall EventTradeListViewItemDraw__SetRewardIconText(
        EventTradeListViewItemDraw_o *this,
        EventTradeListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  GiftMaster_o *Master_object; // x0
  __int64 v13; // x1
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x8
  GiftEntity_array *GiftListById; // x20
  __int64 v16; // x2
  Il2CppObject *v17; // x21
  GiftEntity_o *v18; // x8
  UILabel_o *rewardNumTextLabel; // x21
  GiftEntity_o *v20; // x8
  UILabel_o *rewardNumTitleLabel; // x19
  UserItemEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B3F524 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_GiftMaster___, item);
    sub_1BDB878(&Method_DataManager_GetMaster_UserItemMaster___, v5);
    sub_1BDB878(&DataManager_TypeInfo, v6);
    sub_1BDB878(&LocalizationManager_TypeInfo, v7);
    sub_1BDB878(&NetworkManager_TypeInfo, v8);
    sub_1BDB878(&StringLiteral_397/*"#,0"*/, v9);
    sub_1BDB878(&StringLiteral_13445/*"TRADE_EVENT_HAVE_NUM"*/, v10);
    sub_1BDB878(&StringLiteral_1142/*"0"*/, v11);
    byte_4B3F524 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !item )
    goto LABEL_32;
  TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
  if ( !TradeGoodsEntity_k__BackingField || !Master_object )
    goto LABEL_32;
  GiftListById = GiftMaster__GetGiftListById(Master_object, TradeGoodsEntity_k__BackingField->fields.giftId, 0LL);
  v17 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, v13);
    byte_4B3ED56 = 1;
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
  v18 = GiftListById->m_Items[0];
  if ( !v18 || !v17 )
    goto LABEL_32;
  Master_object = (GiftMaster_o *)UserItemMaster__TryGetEntity(
                                    (UserItemMaster_o *)v17,
                                    &entity,
                                    *(_QWORD *)&Master_object[2].fields._MasterName_k__BackingField[2].fields,
                                    v18->fields.objectId,
                                    0LL);
  rewardNumTextLabel = this->fields.rewardNumTextLabel;
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_32;
    Master_object = (GiftMaster_o *)System_Int32__ToString_64087256(
                                      (int)entity + 28,
                                      (System_String_o *)StringLiteral_397/*"#,0"*/,
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
    UILabel__set_text(this->fields.rewardNumTextLabel, (System_String_o *)StringLiteral_1142/*"0"*/, 0LL);
  }
  if ( !GiftListById->max_length )
LABEL_33:
    sub_1BDBADC(Master_object, v13, v16);
  v20 = GiftListById->m_Items[0];
  if ( !v20 )
    goto LABEL_32;
  Master_object = (GiftMaster_o *)this->fields.rewardItemIcon;
  if ( !Master_object )
    goto LABEL_32;
  ItemIconComponent__SetItem((ItemIconComponent_o *)Master_object, v20->fields.objectId, -1, 1, 0LL);
  rewardNumTitleLabel = this->fields.rewardNumTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (GiftMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13445/*"TRADE_EVENT_HAVE_NUM"*/, 0LL);
  if ( !rewardNumTitleLabel )
LABEL_32:
    sub_1BDBAD4(Master_object, v13);
  UILabel__set_text(rewardNumTitleLabel, (System_String_o *)Master_object, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeListViewItemDraw__UpdateItem(
        EventTradeListViewItemDraw_o *this,
        EventTradeListViewItem_o *item,
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
  __int64 pickupSprite; // x0
  UnityEngine_GameObject_o *v25; // x22
  int32_t v26; // w23
  unsigned int v27; // w8
  const MethodInfo *v28; // x1
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  int v30; // w21
  int maxTradeNum; // s8
  const MethodInfo *v32; // x2
  UILabel_o *progressLabel; // x21
  System_String_o *v34; // x22
  const MethodInfo *v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  struct EventTradeInfo_o *v42; // x8
  Il2CppObject *v43; // x23
  Il2CppObject *v44; // x0
  struct EventTradeInfo_o *v45; // x8
  UILabel_o *rewardAvailableNumTextLabel; // x21
  System_String_o *v47; // x22
  const MethodInfo *v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  Il2CppObject *v52; // x0
  unsigned int rgba; // w8
  struct EventTradeGoodsEntity_o *v54; // x8
  EventTradePickupMaster_o *v55; // x21
  int32_t eventId; // w22
  int32_t id; // w23
  int32_t *p_tradeTimeRate; // x8
  struct EventTradeGoodsEntity_o *v59; // x9
  EventTradePickupMaster_c *v60; // x0
  int32_t v61; // w21
  int32_t tradeTime; // w22
  int DEFAULT_EVENT_TRADE_TIME_RATE; // w23
  double v64; // d8
  int64_t v65; // x0
  UILabel_o *timeRequiredTrade; // x21
  int64_t v67; // x22
  const MethodInfo *v68; // x1
  const MethodInfo *v69; // x1
  _BOOL4 v70; // w8
  bool v71; // w1
  const MethodInfo *v72; // x1
  _BOOL4 v73; // w8
  struct EventTradeInfo_o *v74; // x8
  int64_t startedAt; // x21
  EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x22
  int32_t tradeNum; // w23
  int64_t TradeFinishTime; // x22
  int64_t v79; // x21
  const MethodInfo *v80; // x1
  UILabel_o *tradeCompleteLabel; // x22
  UILabel_o *v82; // x22
  int32_t EventId_k__BackingField; // w20
  UISprite_o *tradingStateSprite; // x22
  __int64 *v85; // x8
  UILabel_o *timeLeftLabel; // x22
  float v87; // s1
  float v88; // s2
  float v89; // s0
  float v90; // s3
  int32_t v91; // [xsp+8h] [xbp-58h] BYREF
  int32_t NowTradeNum; // [xsp+Ch] [xbp-54h] BYREF
  EventTradePickupEntity_o *pickupEntity; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Color_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B3F525 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, item);
    sub_1BDB878(&System_Convert_TypeInfo, v7);
    sub_1BDB878(&Method_DataManager_GetMaster_EventTradePickupMaster___, v8);
    sub_1BDB878(&DataManager_TypeInfo, v9);
    sub_1BDB878(&EventTradePickupMaster_TypeInfo, v10);
    sub_1BDB878(&EventTradeTimeCalculation_TypeInfo, v11);
    sub_1BDB878(&int_TypeInfo, v12);
    sub_1BDB878(&LocalizationManager_TypeInfo, v13);
    sub_1BDB878(&System_Math_TypeInfo, v14);
    sub_1BDB878(&NetworkManager_TypeInfo, v15);
    sub_1BDB878(&string_TypeInfo, v16);
    sub_1BDB878(&StringLiteral_20266/*"icon_trade_intrade"*/, v17);
    sub_1BDB878(&StringLiteral_25264/*"{0}:{1:D2}:{2:D2}"*/, v18);
    sub_1BDB878(&StringLiteral_20265/*"icon_trade_compleate"*/, v19);
    sub_1BDB878(&StringLiteral_13462/*"TRADE_EVENT_REWARD_AVAILABLE_NUM_MESSAGE"*/, v20);
    sub_1BDB878(&StringLiteral_13456/*"TRADE_EVENT_PROGRESS_NUM"*/, v21);
    sub_1BDB878(&StringLiteral_13470/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/, v22);
    sub_1BDB878(&StringLiteral_13469/*"TRADE_EVENT_TRADE_COMPLETE"*/, v23);
    byte_4B3F525 = 1;
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
        v25 = (UnityEngine_GameObject_o *)pickupSprite;
        pickupSprite = EventTradeGoodsEntity__GetPickUpRateNow(item->fields._TradeGoodsEntity_k__BackingField, 0LL);
        v26 = pickupSprite;
        if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
        if ( v25 )
        {
          UnityEngine_GameObject__SetActive(
            v25,
            v26 < EventTradePickupMaster_TypeInfo->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE,
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
                  v27 = *(_DWORD *)&this->fields.NAME_COLOR_DEFAULT.fields.r;
                  v94.fields.a = (float)HIBYTE(v27) / 255.0;
                  v94.fields.b = (float)BYTE2(v27) / 255.0;
                  v94.fields.g = (float)BYTE1(v27) / 255.0;
                  v94.fields.r = (float)(unsigned __int8)v27 / 255.0;
                  UILabel__set_effectColor((UILabel_o *)pickupSprite, v94, 0LL);
                  pickupSprite = EventTradeListViewItem__get_NowTradeNum(item, v28);
                  TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
                  if ( TradeInfo_k__BackingField )
                  {
                    v30 = pickupSprite;
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
                            (float)v30 / (float)maxTradeNum,
                            0LL);
                          EventTradeListViewItemDraw__UpdateSweetsAnim(this, item, v32);
                          progressLabel = this->fields.progressLabel;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v34 = LocalizationManager__Get((System_String_o *)StringLiteral_13456/*"TRADE_EVENT_PROGRESS_NUM"*/, 0LL);
                          NowTradeNum = EventTradeListViewItem__get_NowTradeNum(item, v35);
                          pickupSprite = j_il2cpp_value_box_0(int_TypeInfo, &NowTradeNum, v36, v37, v38);
                          v42 = item->fields._TradeInfo_k__BackingField;
                          if ( v42 )
                          {
                            v43 = (Il2CppObject *)pickupSprite;
                            v91 = v42->fields.maxTradeNum;
                            v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v91, v39, v40, v41);
                            pickupSprite = (__int64)System_String__Format_62613552(v34, v43, v44, 0LL);
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
                                  v45 = item->fields._TradeInfo_k__BackingField;
                                  if ( v45
                                    && (v45->fields.getNum >= 1
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
                                    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_13462/*"TRADE_EVENT_REWARD_AVAILABLE_NUM_MESSAGE"*/, 0LL);
                                    NowTradeNum = EventTradeListViewItem__get_NowCompleteNum(item, v48);
                                    v52 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                            int_TypeInfo,
                                                            &NowTradeNum,
                                                            v49,
                                                            v50,
                                                            v51);
                                    pickupSprite = (__int64)System_String__Format(v47, v52, 0LL);
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
                                    if ( EventTradeListViewItem__get_IsRefillable(item, v72) )
                                      v73 = !EventTradeListViewItem__get_IsEventEnd(item, (const MethodInfo *)item);
                                    else
                                      LOBYTE(v73) = 0;
                                    pickupSprite = (__int64)this->fields.replenishmentButton;
                                    if ( !pickupSprite )
                                      goto LABEL_130;
                                    pickupSprite = (*(__int64 (__fastcall **)(__int64, _BOOL4, _QWORD))(*(_QWORD *)pickupSprite + 392LL))(
                                                     pickupSprite,
                                                     v73,
                                                     *(_QWORD *)(*(_QWORD *)pickupSprite + 400LL));
                                  }
                                  v74 = item->fields._TradeInfo_k__BackingField;
                                  if ( !v74 )
                                    goto LABEL_130;
                                  startedAt = v74->fields.startedAt;
                                  TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
                                  tradeNum = v74->fields.tradeNum;
                                  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
                                  TradeFinishTime = EventTradeTimeCalculation__GetTradeFinishTime(
                                                      TradeGoodsEntity_k__BackingField,
                                                      tradeNum,
                                                      startedAt,
                                                      0LL);
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                  v79 = TradeFinishTime + startedAt - NetworkManager__getTime(0LL);
                                  pickupSprite = EventTradeListViewItem__get_NowTradeNum(item, v80);
                                  tradeCompleteLabel = (UILabel_o *)this->fields.tradeCompleteLabel;
                                  if ( (int)pickupSprite <= 0 )
                                  {
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    pickupSprite = (__int64)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_13469/*"TRADE_EVENT_TRADE_COMPLETE"*/,
                                                              0LL);
                                    if ( !tradeCompleteLabel )
                                      goto LABEL_130;
                                    UILabel__set_text(tradeCompleteLabel, (System_String_o *)pickupSprite, 0LL);
                                    timeLeftLabel = this->fields.timeLeftLabel;
                                    pickupSprite = (__int64)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_13470/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/,
                                                              0LL);
                                    if ( !timeLeftLabel )
                                      goto LABEL_130;
                                    UILabel__set_text(timeLeftLabel, (System_String_o *)pickupSprite, 0LL);
                                    EventId_k__BackingField = item->fields._EventId_k__BackingField;
                                    tradingStateSprite = this->fields.tradingStateSprite;
                                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                    v85 = &StringLiteral_20265/*"icon_trade_compleate"*/;
                                  }
                                  else
                                  {
                                    if ( !tradeCompleteLabel )
                                      goto LABEL_130;
                                    UILabel__set_text(
                                      (UILabel_o *)this->fields.tradeCompleteLabel,
                                      string_TypeInfo->static_fields->Empty,
                                      0LL);
                                    v82 = this->fields.timeLeftLabel;
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    pickupSprite = (__int64)LocalizationManager__GetRestTimeInFormat(
                                                              v79,
                                                              0LL,
                                                              (System_String_o *)StringLiteral_25264/*"{0}:{1:D2}:{2:D2}"*/,
                                                              0LL);
                                    if ( !v82 )
                                      goto LABEL_130;
                                    UILabel__set_text(v82, (System_String_o *)pickupSprite, 0LL);
                                    EventId_k__BackingField = item->fields._EventId_k__BackingField;
                                    tradingStateSprite = this->fields.tradingStateSprite;
                                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                    v85 = &StringLiteral_20266/*"icon_trade_intrade"*/;
                                  }
                                  AtlasManager__SetEventUI_39626228(
                                    EventId_k__BackingField,
                                    tradingStateSprite,
                                    (System_String_o *)*v85,
                                    0LL);
                                  v87 = 0.92157;
                                  pickupSprite = (__int64)this->fields.timeLeftLabel;
                                  if ( v79 >= 3600 )
                                    v88 = 0.015686;
                                  else
                                    v88 = 0.0;
                                  if ( v79 < 3600 )
                                    v87 = 0.0;
                                  if ( pickupSprite )
                                  {
                                    v89 = 1.0;
                                    v90 = 1.0;
                                    UIWidget__set_color(
                                      (UIWidget_o *)pickupSprite,
                                      *(UnityEngine_Color_o *)(&v87 - 1),
                                      0LL);
                                    pickupSprite = (__int64)this->fields.tradingStateSprite;
                                    if ( pickupSprite )
                                    {
                                      pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)pickupSprite,
                                                                0LL);
                                      if ( pickupSprite )
                                      {
                                        v71 = 1;
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
                        v95.fields.a = (float)HIBYTE(rgba) / 255.0;
                        v95.fields.b = (float)BYTE2(rgba) / 255.0;
                        v95.fields.g = (float)BYTE1(rgba) / 255.0;
                        v95.fields.r = (float)(unsigned __int8)rgba / 255.0;
                        UILabel__set_effectColor((UILabel_o *)pickupSprite, v95, 0LL);
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
                                            pickupSprite = (__int64)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventTradePickupMaster___);
                                            v54 = item->fields._TradeGoodsEntity_k__BackingField;
                                            if ( v54 )
                                            {
                                              v55 = (EventTradePickupMaster_o *)pickupSprite;
                                              id = v54->fields.id;
                                              eventId = v54->fields.eventId;
                                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                              pickupSprite = NetworkManager__getTime(0LL);
                                              if ( v55 )
                                              {
                                                pickupSprite = EventTradePickupMaster__TryGetEntityTargetTime(
                                                                 v55,
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
                                                v59 = item->fields._TradeGoodsEntity_k__BackingField;
                                                if ( v59 )
                                                {
                                                  v60 = EventTradePickupMaster_TypeInfo;
                                                  v61 = *p_tradeTimeRate;
                                                  tradeTime = v59->fields.tradeTime;
                                                  if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
                                                  {
                                                    j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
                                                    v60 = EventTradePickupMaster_TypeInfo;
                                                  }
                                                  DEFAULT_EVENT_TRADE_TIME_RATE = v60->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
                                                  if ( !System_Math_TypeInfo->_2.cctor_finished )
                                                    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                                                  v64 = ceil(
                                                          (double)(tradeTime * v61)
                                                        / (double)DEFAULT_EVENT_TRADE_TIME_RATE);
                                                  if ( !System_Convert_TypeInfo->_2.cctor_finished )
                                                    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
                                                  v65 = System_Convert__ToInt64_63647904(v64, 0LL);
                                                  timeRequiredTrade = this->fields.timeRequiredTrade;
                                                  v67 = v65;
                                                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                  pickupSprite = (__int64)LocalizationManager__GetRestTimeInFormat(
                                                                            v67,
                                                                            0LL,
                                                                            (System_String_o *)StringLiteral_25264/*"{0}:{1:D2}:{2:D2}"*/,
                                                                            0LL);
                                                  if ( timeRequiredTrade )
                                                  {
                                                    UILabel__set_text(
                                                      timeRequiredTrade,
                                                      (System_String_o *)pickupSprite,
                                                      0LL);
                                                    EventTradeListViewItemDraw__DestroyAnimObj(this, v68);
                                                    if ( EventTradeListViewItem__get_IsBuyAble(item, v69) )
                                                    {
                                                      LOBYTE(v70) = item->fields._IsRelease_k__BackingField;
                                                      if ( v70 )
                                                        v70 = !EventTradeListViewItem__get_IsEventEnd(
                                                                 item,
                                                                 (const MethodInfo *)item);
                                                    }
                                                    else
                                                    {
                                                      LOBYTE(v70) = 0;
                                                    }
                                                    pickupSprite = (__int64)this->fields.tradeStartButton;
                                                    if ( pickupSprite )
                                                    {
                                                      (*(void (__fastcall **)(__int64, _BOOL4, _QWORD))(*(_QWORD *)pickupSprite + 392LL))(
                                                        pickupSprite,
                                                        v70,
                                                        *(_QWORD *)(*(_QWORD *)pickupSprite + 400LL));
                                                      pickupSprite = (__int64)this->fields.tradingStateSprite;
                                                      if ( pickupSprite )
                                                      {
                                                        pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                                                  (UnityEngine_Component_o *)pickupSprite,
                                                                                  0LL);
                                                        if ( pickupSprite )
                                                        {
                                                          v71 = 0;
LABEL_128:
                                                          UnityEngine_GameObject__SetActive(
                                                            (UnityEngine_GameObject_o *)pickupSprite,
                                                            v71,
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
    sub_1BDBAD4(pickupSprite, item);
  }
}


void __fastcall EventTradeListViewItemDraw__UpdateSweetsAnim(
        EventTradeListViewItemDraw_o *this,
        EventTradeListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EventTradeListViewItemDraw___c_c *v8; // x0
  System_Collections_Generic_IEnumerable_T__o *sweetsAnimSpriteArray; // x21
  System_Action_object__o *_9__45_0; // x22
  Il2CppObject *v11; // x23
  struct EventTradeListViewItemDraw___c_StaticFields *static_fields; // x0
  UnityEngine_GameObject_o *NowTradeNum; // x0
  const MethodInfo *v14; // x1
  __int64 v15; // x2
  int v16; // w21
  struct UISprite_array *v17; // x8
  const MethodInfo *v18; // x1

  if ( (byte_4B3F526 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_UISprite__TypeInfo, item);
    sub_1BDB878(&Method_BasicHelper_ForEach_UISprite___, v5);
    sub_1BDB878(&Method_EventTradeListViewItemDraw___c__UpdateSweetsAnim_b__45_0__, v6);
    sub_1BDB878(&EventTradeListViewItemDraw___c_TypeInfo, v7);
    byte_4B3F526 = 1;
  }
  v8 = EventTradeListViewItemDraw___c_TypeInfo;
  sweetsAnimSpriteArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.sweetsAnimSpriteArray;
  if ( !EventTradeListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemDraw___c_TypeInfo);
    v8 = EventTradeListViewItemDraw___c_TypeInfo;
  }
  _9__45_0 = (System_Action_object__o *)v8->static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = EventTradeListViewItemDraw___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__45_0 = (System_Action_object__o *)sub_1BDBAC4(System_Action_UISprite__TypeInfo);
    System_Action_object____ctor(_9__45_0, v11, Method_EventTradeListViewItemDraw___c__UpdateSweetsAnim_b__45_0__, 0LL);
    static_fields = EventTradeListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__45_0 = (struct System_Action_UISprite__o *)_9__45_0;
    sub_1BDB81C(&static_fields->__9__45_0);
  }
  BasicHelper__ForEach_object_(
    sweetsAnimSpriteArray,
    (System_Action_T__o *)_9__45_0,
    (const MethodInfo_301FA1C *)Method_BasicHelper_ForEach_UISprite___);
  if ( !item )
    goto LABEL_18;
  NowTradeNum = (UnityEngine_GameObject_o *)EventTradeListViewItem__get_NowTradeNum(item, v14);
  if ( (int)NowTradeNum >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      v17 = this->fields.sweetsAnimSpriteArray;
      if ( !v17 )
        break;
      if ( v16 >= v17->max_length )
        sub_1BDBADC(NowTradeNum, v14, v15);
      NowTradeNum = (UnityEngine_GameObject_o *)v17->m_Items[v16];
      if ( !NowTradeNum )
        break;
      NowTradeNum = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NowTradeNum, 0LL);
      if ( !NowTradeNum )
        break;
      UnityEngine_GameObject__SetActive(NowTradeNum, 1, 0LL);
      ++v16;
      NowTradeNum = (UnityEngine_GameObject_o *)EventTradeListViewItem__get_NowTradeNum(item, v18);
      if ( v16 >= (int)NowTradeNum )
        return;
    }
LABEL_18:
    sub_1BDBAD4(NowTradeNum, v14);
  }
}


void __fastcall EventTradeListViewItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B3F528 & 1) == 0 )
  {
    sub_1BDB878(&EventTradeListViewItemDraw___c_TypeInfo, v1);
    byte_4B3F528 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(EventTradeListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventTradeListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct EventTradeListViewItemDraw___c_o *)v2;
  sub_1BDB81C(EventTradeListViewItemDraw___c_TypeInfo->static_fields);
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
    sub_1BDBAD4(this, sprite);
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
    sub_1BDBAD4(this, sprite);
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
  __int64 v7; // x1
  __int64 v8; // x1
  struct EventTradeListViewItem_o *item; // x8
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x9
  int32_t EventId_k__BackingField; // w20
  Il2CppObject *v12; // x0
  System_String_o *v13; // x21
  int32_t goodsIconId; // [xsp+Ch] [xbp-24h] BYREF

  v6 = this;
  if ( (byte_4B3F529 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, sprite);
    sub_1BDB878(&int_TypeInfo, v7);
    this = (EventTradeListViewItemDraw___c__DisplayClass41_0_o *)sub_1BDB878(&StringLiteral_20269/*"icon_{0}"*/, v8);
    byte_4B3F529 = 1;
  }
  item = v6->fields.item;
  if ( !item || (TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField) == 0LL )
    sub_1BDBAD4(this, sprite);
  EventId_k__BackingField = item->fields._EventId_k__BackingField;
  goodsIconId = TradeGoodsEntity_k__BackingField->fields.goodsIconId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &goodsIconId, method, v3, v4);
  v13 = System_String__Format((System_String_o *)StringLiteral_20269/*"icon_{0}"*/, v12, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_39626228(EventId_k__BackingField, sprite, v13, 0LL);
}