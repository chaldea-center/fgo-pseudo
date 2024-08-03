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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  EventTradeListViewItemDraw___c_c *v7; // x0
  System_Collections_Generic_IEnumerable_T__o *sweetsAnimSpriteArray; // x19
  System_Action_object__o *_9__46_0; // x20
  Il2CppObject *v10; // x21
  struct EventTradeListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A0069A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_UISprite__TypeInfo, method);
    sub_1B640C8(&Method_BasicHelper_ForEach_UISprite___, v4);
    sub_1B640C8(&Method_EventTradeListViewItemDraw___c__DestroyAnimObj_b__46_0__, v5);
    sub_1B640C8(&EventTradeListViewItemDraw___c_TypeInfo, v6);
    byte_4A0069A = 1;
  }
  v7 = EventTradeListViewItemDraw___c_TypeInfo;
  sweetsAnimSpriteArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.sweetsAnimSpriteArray;
  if ( !EventTradeListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemDraw___c_TypeInfo);
    v7 = EventTradeListViewItemDraw___c_TypeInfo;
  }
  _9__46_0 = (System_Action_object__o *)v7->static_fields->__9__46_0;
  if ( !_9__46_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = EventTradeListViewItemDraw___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__46_0 = (System_Action_object__o *)sub_1B64314(System_Action_UISprite__TypeInfo, method, v2);
    System_Action_object____ctor(_9__46_0, v10, Method_EventTradeListViewItemDraw___c__DestroyAnimObj_b__46_0__, 0LL);
    static_fields = EventTradeListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__46_0 = (struct System_Action_UISprite__o *)_9__46_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__46_0, (int32_t)_9__46_0, v12, v13);
  }
  BasicHelper__ForEach_object_(
    sweetsAnimSpriteArray,
    (System_Action_T__o *)_9__46_0,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_UISprite___);
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
      sub_1B64324(initMode);
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


// local variable allocation has failed, the output may be wrong!
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
  __int64 v38; // x22
  int64_t nameTextLabel; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  EventTradeListViewItem_o **v42; // x21
  int32_t EventId_k__BackingField; // w23
  UISprite_o *tradingBaseSprite; // x24
  UILabel_o *tradeStartLabel; // x23
  UILabel_o *rewardReceivedPossibleLabel; // x23
  UILabel_o *replenishmentLabel; // x23
  UILabel_o *withdrawalLabel; // x23
  System_Collections_Generic_IEnumerable_T__o *sweetsAnimSpriteArray; // x23
  __int64 v50; // x1
  __int64 v51; // x2
  System_Action_object__o *v52; // x24
  const MethodInfo *v53; // x2
  __int64 v54; // x8
  EventTradeListViewItem_o *v55; // x8
  _BOOL4 IsRelease_k__BackingField; // w24
  int32_t v57; // w23
  UISprite_o *baseSprite; // x22
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
  const MethodInfo *v78; // x1
  unsigned int v79; // w20
  bool v80; // w1
  const MethodInfo *v81; // x1
  bool v82; // w1
  UILabel_o *textOnMask; // x20
  int32_t goodsIconId; // [xsp+Ch] [xbp-54h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4A00695 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_UISprite__TypeInfo, item);
    sub_1B640C8(&AtlasManager_TypeInfo, v7);
    sub_1B640C8(&Method_BasicHelper_ForEach_UISprite___, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, v9);
    sub_1B640C8(&DataManager_TypeInfo, v10);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v11);
    sub_1B640C8(&int_TypeInfo, v12);
    sub_1B640C8(&LocalizationManager_TypeInfo, v13);
    sub_1B640C8(&NetworkManager_TypeInfo, v14);
    sub_1B640C8(&string_TypeInfo, v15);
    sub_1B640C8(&Method_EventTradeListViewItemDraw___c__DisplayClass41_0__SetItem_b__0__, v16);
    sub_1B640C8(&EventTradeListViewItemDraw___c__DisplayClass41_0_TypeInfo, v17);
    sub_1B640C8(&StringLiteral_17478/*"btn_trade_bg_01"*/, v18);
    sub_1B640C8(&StringLiteral_20118/*"icon_{0}"*/, v19);
    sub_1B640C8(&StringLiteral_20249/*"img_item_brank"*/, v20);
    sub_1B640C8(&StringLiteral_20116/*"icon_trade_reward"*/, v21);
    sub_1B640C8(&StringLiteral_13304/*"TRADE_EVENT_BOARD_WITHDRAWALLABEL_BUTTON"*/, v22);
    sub_1B640C8(&StringLiteral_19199/*"event_trade_8048001"*/, v23);
    sub_1B640C8(&StringLiteral_13247/*"TIME_REST2_NONE"*/, v24);
    sub_1B640C8(&StringLiteral_13300/*"TRADE_EVENT_BOARD_RECEIVE_BUTTON"*/, v25);
    sub_1B640C8(&StringLiteral_23935/*"tradegauge_bg"*/, v26);
    sub_1B640C8(&StringLiteral_20084/*"icon_popularitem"*/, v27);
    sub_1B640C8(&StringLiteral_13301/*"TRADE_EVENT_BOARD_REPLENISHMENT_BUTTON"*/, v28);
    sub_1B640C8(&StringLiteral_13330/*"TRADE_EVENT_REST_TIME_LABEL"*/, v29);
    sub_1B640C8(&StringLiteral_19200/*"event_trade_8048002"*/, v30);
    sub_1B640C8(&StringLiteral_13312/*"TRADE_EVENT_END"*/, v31);
    sub_1B640C8(&StringLiteral_23934/*"tradegauge_bar"*/, v32);
    sub_1B640C8(&StringLiteral_17479/*"btn_trade_bg_02"*/, v33);
    sub_1B640C8(&StringLiteral_19201/*"event_trade_8048003"*/, v34);
    sub_1B640C8(&StringLiteral_20113/*"icon_trade_arrow"*/, v35);
    sub_1B640C8(&StringLiteral_13302/*"TRADE_EVENT_BOARD_START_BUTTON"*/, v36);
    sub_1B640C8(&StringLiteral_13303/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, v37);
    byte_4A00695 = 1;
  }
  entity = 0LL;
  v38 = sub_1B64314(EventTradeListViewItemDraw___c__DisplayClass41_0_TypeInfo, item, *(_QWORD *)&mode);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  if ( !v38 )
    goto LABEL_90;
  *(_QWORD *)(v38 + 16) = item;
  v42 = (EventTradeListViewItem_o **)(v38 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v38 + 16), (int32_t)item, v40, v41);
  if ( mode && *v42 )
  {
    EventId_k__BackingField = (*v42)->fields._EventId_k__BackingField;
    tradingBaseSprite = this->fields.tradingBaseSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    nameTextLabel = AtlasManager__SetEventUI_37544692(
                      EventId_k__BackingField,
                      tradingBaseSprite,
                      (System_String_o *)StringLiteral_19200/*"event_trade_8048002"*/,
                      0LL);
    if ( !*v42 )
      goto LABEL_90;
    nameTextLabel = AtlasManager__SetEventUI_37544692(
                      (*v42)->fields._EventId_k__BackingField,
                      this->fields.progressGaugeFront,
                      (System_String_o *)StringLiteral_23934/*"tradegauge_bar"*/,
                      0LL);
    if ( !*v42 )
      goto LABEL_90;
    nameTextLabel = AtlasManager__SetEventUI_37544692(
                      (*v42)->fields._EventId_k__BackingField,
                      this->fields.progressGaugeBack,
                      (System_String_o *)StringLiteral_23935/*"tradegauge_bg"*/,
                      0LL);
    if ( !*v42 )
      goto LABEL_90;
    AtlasManager__SetEventUI_37544692(
      (*v42)->fields._EventId_k__BackingField,
      this->fields.pickupSprite,
      (System_String_o *)StringLiteral_20084/*"icon_popularitem"*/,
      0LL);
    tradeStartLabel = this->fields.tradeStartLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13302/*"TRADE_EVENT_BOARD_START_BUTTON"*/, 0LL);
    if ( !tradeStartLabel )
      goto LABEL_90;
    UILabel__set_text(tradeStartLabel, (System_String_o *)nameTextLabel, 0LL);
    if ( !*v42 )
      goto LABEL_90;
    AtlasManager__SetEventUI_37544692(
      (*v42)->fields._EventId_k__BackingField,
      this->fields.tradeStartButtonSprite,
      (System_String_o *)StringLiteral_17478/*"btn_trade_bg_01"*/,
      0LL);
    rewardReceivedPossibleLabel = this->fields.rewardReceivedPossibleLabel;
    nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13300/*"TRADE_EVENT_BOARD_RECEIVE_BUTTON"*/, 0LL);
    if ( !rewardReceivedPossibleLabel )
      goto LABEL_90;
    UILabel__set_text(rewardReceivedPossibleLabel, (System_String_o *)nameTextLabel, 0LL);
    if ( !*v42 )
      goto LABEL_90;
    AtlasManager__SetEventUI_37544692(
      (*v42)->fields._EventId_k__BackingField,
      this->fields.rewardReceivedPossibleButtonSprite,
      (System_String_o *)StringLiteral_17479/*"btn_trade_bg_02"*/,
      0LL);
    replenishmentLabel = this->fields.replenishmentLabel;
    nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13301/*"TRADE_EVENT_BOARD_REPLENISHMENT_BUTTON"*/, 0LL);
    if ( !replenishmentLabel )
      goto LABEL_90;
    UILabel__set_text(replenishmentLabel, (System_String_o *)nameTextLabel, 0LL);
    if ( !*v42 )
      goto LABEL_90;
    AtlasManager__SetEventUI_37544692(
      (*v42)->fields._EventId_k__BackingField,
      this->fields.replenishmentButtonSprite,
      (System_String_o *)StringLiteral_17478/*"btn_trade_bg_01"*/,
      0LL);
    withdrawalLabel = this->fields.withdrawalLabel;
    nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13304/*"TRADE_EVENT_BOARD_WITHDRAWALLABEL_BUTTON"*/, 0LL);
    if ( !withdrawalLabel )
      goto LABEL_90;
    UILabel__set_text(withdrawalLabel, (System_String_o *)nameTextLabel, 0LL);
    if ( !*v42 )
      goto LABEL_90;
    nameTextLabel = AtlasManager__SetEventUI_37544692(
                      (*v42)->fields._EventId_k__BackingField,
                      this->fields.withdrawalButtonSprite,
                      (System_String_o *)StringLiteral_17478/*"btn_trade_bg_01"*/,
                      0LL);
    if ( !*v42 )
      goto LABEL_90;
    nameTextLabel = AtlasManager__SetEventUI_37544692(
                      (*v42)->fields._EventId_k__BackingField,
                      this->fields.tradeRewardIconSprite,
                      (System_String_o *)StringLiteral_20116/*"icon_trade_reward"*/,
                      0LL);
    if ( !*v42 )
      goto LABEL_90;
    AtlasManager__SetEventUI_37544692(
      (*v42)->fields._EventId_k__BackingField,
      this->fields.tradeArrowIconSprite,
      (System_String_o *)StringLiteral_20113/*"icon_trade_arrow"*/,
      0LL);
    sweetsAnimSpriteArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.sweetsAnimSpriteArray;
    v52 = (System_Action_object__o *)sub_1B64314(System_Action_UISprite__TypeInfo, v50, v51);
    System_Action_object____ctor(
      v52,
      (Il2CppObject *)v38,
      Method_EventTradeListViewItemDraw___c__DisplayClass41_0__SetItem_b__0__,
      0LL);
    BasicHelper__ForEach_object_(
      sweetsAnimSpriteArray,
      (System_Action_T__o *)v52,
      (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_UISprite___);
    v54 = *(_QWORD *)(v38 + 16);
    if ( !v54 )
      goto LABEL_90;
    EventTradeListViewItemDraw__SetReleaseDisplayObject(this, *(_BYTE *)(v54 + 148), v53);
    v55 = *v42;
    if ( !*v42 )
      goto LABEL_90;
    IsRelease_k__BackingField = v55->fields._IsRelease_k__BackingField;
    v57 = v55->fields._EventId_k__BackingField;
    baseSprite = this->fields.baseSprite;
    if ( AtlasManager_TypeInfo->_2.cctor_finished )
    {
      if ( v55->fields._IsRelease_k__BackingField )
        goto LABEL_27;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( IsRelease_k__BackingField )
      {
LABEL_27:
        nameTextLabel = AtlasManager__SetEventUI_37544692(v57, baseSprite, (System_String_o *)StringLiteral_19199/*"event_trade_8048001"*/, 0LL);
        v59 = *v42;
        if ( !*v42 )
          goto LABEL_90;
        TradeGoodsEntity_k__BackingField = v59->fields._TradeGoodsEntity_k__BackingField;
        if ( !TradeGoodsEntity_k__BackingField )
          goto LABEL_90;
        v61 = v59->fields._EventId_k__BackingField;
        itemIcon = this->fields.itemIcon;
        goodsIconId = TradeGoodsEntity_k__BackingField->fields.goodsIconId;
        v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &goodsIconId);
        v64 = System_String__Format((System_String_o *)StringLiteral_20118/*"icon_{0}"*/, v63, 0LL);
        nameTextLabel = AtlasManager__SetEventUI_37544692(v61, itemIcon, v64, 0LL);
        if ( !*v42 )
          goto LABEL_90;
        v65 = (*v42)->fields._TradeGoodsEntity_k__BackingField;
        if ( !v65 )
          goto LABEL_90;
        nameTextLabel = (int64_t)this->fields.nameTextLabel;
        if ( !nameTextLabel )
          goto LABEL_90;
        name = v65->fields.name;
        goto LABEL_42;
      }
    }
    nameTextLabel = AtlasManager__SetEventUI_37544692(v57, baseSprite, (System_String_o *)StringLiteral_19201/*"event_trade_8048003"*/, 0LL);
    if ( !*v42 )
      goto LABEL_90;
    AtlasManager__SetEventUI_37544692(
      (*v42)->fields._EventId_k__BackingField,
      this->fields.itemIcon,
      (System_String_o *)StringLiteral_20249/*"img_item_brank"*/,
      0LL);
    v67 = (UILabel_o *)this->fields.nameTextLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13303/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, 0LL);
    if ( !v67 )
      goto LABEL_90;
    UILabel__set_text(v67, (System_String_o *)nameTextLabel, 0LL);
    if ( !*v42 )
      goto LABEL_90;
    v68 = (*v42)->fields._TradeGoodsEntity_k__BackingField;
    if ( !v68 )
      goto LABEL_90;
    nameTextLabel = (int64_t)this->fields.textOnMask;
    if ( !nameTextLabel )
      goto LABEL_90;
    name = v68->fields.closedMessage;
LABEL_42:
    UILabel__set_text((UILabel_o *)nameTextLabel, name, 0LL);
    if ( !*v42 )
      goto LABEL_90;
    if ( (*v42)->fields._EventId_k__BackingField >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      nameTextLabel = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !*v42 || !nameTextLabel )
        goto LABEL_90;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)nameTextLabel,
             &entity,
             (*v42)->fields._EventId_k__BackingField,
             (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
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
          nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13247/*"TIME_REST2_NONE"*/, 0LL);
        }
        else
        {
          nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13330/*"TRADE_EVENT_REST_TIME_LABEL"*/, 0LL);
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
        if ( !restTimeLabel )
LABEL_90:
          sub_1B64324(nameTextLabel);
        UILabel__set_text(restTimeLabel, (System_String_o *)nameTextLabel, 0LL);
      }
    }
    EventTradeListViewItemDraw__SetPriceIconText(this, *v42, v69);
    EventTradeListViewItemDraw__SetRewardIconText(this, *v42, v77);
    v79 = mode & 0xFFFFFFFE;
    if ( v79 == 4 )
    {
      nameTextLabel = (int64_t)this->fields.tradingBaseSprite;
      if ( !nameTextLabel )
        goto LABEL_90;
      nameTextLabel = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameTextLabel, 0LL);
      if ( !nameTextLabel )
        goto LABEL_90;
      v80 = 1;
    }
    else
    {
      if ( v79 != 2 )
        goto LABEL_71;
      nameTextLabel = (int64_t)this->fields.tradingBaseSprite;
      if ( !nameTextLabel )
        goto LABEL_90;
      nameTextLabel = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameTextLabel, 0LL);
      if ( !nameTextLabel )
        goto LABEL_90;
      v80 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameTextLabel, v80, 0LL);
LABEL_71:
    nameTextLabel = (int64_t)*v42;
    if ( *v42 )
    {
      if ( !EventTradeListViewItem__get_IsEventEnd((EventTradeListViewItem_o *)nameTextLabel, v78) )
        return;
      if ( v79 == 4 )
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
              v82 = 0;
LABEL_88:
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameTextLabel, v82, 0LL);
              return;
            }
          }
        }
      }
      else
      {
        EventTradeListViewItemDraw__DestroyAnimObj(this, v81);
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
            nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13312/*"TRADE_EVENT_END"*/, 0LL);
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
                      v82 = 1;
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

  if ( (byte_4A00696 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, item);
    byte_4A00696 = 1;
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
          0LL);
        return;
      }
    }
LABEL_24:
    sub_1B64324(priceInfoSingle);
  }
}


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
    sub_1B64324(maskSprite);
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
  int64_t Master_object; // x0
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x8
  GiftEntity_array *GiftListById; // x20
  Il2CppObject *v15; // x21
  __int64 v16; // x1
  GiftEntity_o *v17; // x8
  UILabel_o *rewardNumTextLabel; // x21
  GiftEntity_o *v19; // x8
  UILabel_o *rewardNumTitleLabel; // x19
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A00697 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_GiftMaster___, item);
    sub_1B640C8(&Method_DataManager_GetMaster_UserItemMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_430/*"#,0"*/, v9);
    sub_1B640C8(&StringLiteral_13314/*"TRADE_EVENT_HAVE_NUM"*/, v10);
    sub_1B640C8(&StringLiteral_1213/*"0"*/, v11);
    byte_4A00697 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !item )
    goto LABEL_28;
  TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
  if ( !TradeGoodsEntity_k__BackingField || !Master_object )
    goto LABEL_28;
  GiftListById = GiftMaster__GetGiftListById(
                   (GiftMaster_o *)Master_object,
                   TradeGoodsEntity_k__BackingField->fields.giftId,
                   0LL);
  v15 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = NetworkManager__get_UserId(0LL);
  if ( !GiftListById )
    goto LABEL_28;
  if ( !GiftListById->max_length )
    goto LABEL_29;
  v17 = GiftListById->m_Items[0];
  if ( !v17 || !v15 )
    goto LABEL_28;
  Master_object = UserItemMaster__TryGetEntity(
                    (UserItemMaster_o *)v15,
                    &entity,
                    Master_object,
                    v17->fields.objectId,
                    0LL);
  rewardNumTextLabel = this->fields.rewardNumTextLabel;
  if ( (Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_28;
    Master_object = (int64_t)System_Int32__ToString_62180668(
                               (int)entity + 28,
                               (System_String_o *)StringLiteral_430/*"#,0"*/,
                               0LL);
    if ( !rewardNumTextLabel )
      goto LABEL_28;
    UILabel__set_text(rewardNumTextLabel, (System_String_o *)Master_object, 0LL);
    Master_object = (int64_t)this->fields.rewardNumTextLabel;
    if ( !Master_object )
      goto LABEL_28;
    UILabel__SetCondensedScale((UILabel_o *)Master_object, this->fields.countLabelMaxWidth, 0LL);
  }
  else
  {
    if ( !rewardNumTextLabel )
      goto LABEL_28;
    UILabel__set_text(this->fields.rewardNumTextLabel, (System_String_o *)StringLiteral_1213/*"0"*/, 0LL);
  }
  if ( !GiftListById->max_length )
LABEL_29:
    sub_1B6432C(Master_object, v16);
  v19 = GiftListById->m_Items[0];
  if ( !v19 )
    goto LABEL_28;
  Master_object = (int64_t)this->fields.rewardItemIcon;
  if ( !Master_object )
    goto LABEL_28;
  ItemIconComponent__SetItem((ItemIconComponent_o *)Master_object, v19->fields.objectId, -1, 0LL);
  rewardNumTitleLabel = this->fields.rewardNumTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13314/*"TRADE_EVENT_HAVE_NUM"*/, 0LL);
  if ( !rewardNumTitleLabel )
LABEL_28:
    sub_1B64324(Master_object);
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
  const MethodInfo *v27; // x1
  unsigned int v28; // w8
  const MethodInfo *v29; // x1
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  int v31; // w21
  int maxTradeNum; // s8
  const MethodInfo *v33; // x2
  UILabel_o *progressLabel; // x21
  System_String_o *v35; // x22
  const MethodInfo *v36; // x1
  struct EventTradeInfo_o *v37; // x8
  Il2CppObject *v38; // x23
  Il2CppObject *v39; // x0
  const MethodInfo *v40; // x1
  struct EventTradeInfo_o *v41; // x8
  UILabel_o *rewardAvailableNumTextLabel; // x21
  System_String_o *v43; // x22
  const MethodInfo *v44; // x1
  Il2CppObject *v45; // x0
  unsigned int rgba; // w8
  struct EventTradeGoodsEntity_o *v47; // x8
  EventTradePickupMaster_o *v48; // x21
  int32_t eventId; // w22
  int32_t id; // w23
  int32_t *p_tradeTimeRate; // x8
  struct EventTradeGoodsEntity_o *v52; // x9
  EventTradePickupMaster_c *v53; // x0
  int32_t v54; // w21
  int32_t tradeTime; // w22
  int DEFAULT_EVENT_TRADE_TIME_RATE; // w23
  double v57; // d8
  int64_t v58; // x0
  UILabel_o *timeRequiredTrade; // x21
  int64_t v60; // x22
  const MethodInfo *v61; // x1
  const MethodInfo *v62; // x1
  const MethodInfo *v63; // x1
  _BOOL4 v64; // w8
  bool v65; // w1
  const MethodInfo *v66; // x1
  const MethodInfo *v67; // x1
  _BOOL4 v68; // w8
  struct EventTradeInfo_o *v69; // x8
  int64_t startedAt; // x21
  EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x22
  int32_t tradeNum; // w23
  int64_t TradeFinishTime; // x22
  int64_t v74; // x21
  const MethodInfo *v75; // x1
  UILabel_o *tradeCompleteLabel; // x22
  UILabel_o *v77; // x22
  int32_t EventId_k__BackingField; // w20
  UISprite_o *tradingStateSprite; // x22
  __int64 *v80; // x8
  UILabel_o *timeLeftLabel; // x22
  float v82; // s1
  float v83; // s2
  float v84; // s0
  float v85; // s3
  int32_t v86; // [xsp+8h] [xbp-58h] BYREF
  int32_t NowTradeNum; // [xsp+Ch] [xbp-54h] BYREF
  EventTradePickupEntity_o *pickupEntity; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Color_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v90; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A00698 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&System_Convert_TypeInfo, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_EventTradePickupMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&EventTradePickupMaster_TypeInfo, v10);
    sub_1B640C8(&EventTradeTimeCalculation_TypeInfo, v11);
    sub_1B640C8(&int_TypeInfo, v12);
    sub_1B640C8(&LocalizationManager_TypeInfo, v13);
    sub_1B640C8(&System_Math_TypeInfo, v14);
    sub_1B640C8(&NetworkManager_TypeInfo, v15);
    sub_1B640C8(&string_TypeInfo, v16);
    sub_1B640C8(&StringLiteral_20115/*"icon_trade_intrade"*/, v17);
    sub_1B640C8(&StringLiteral_24974/*"{0}:{1:D2}:{2:D2}"*/, v18);
    sub_1B640C8(&StringLiteral_20114/*"icon_trade_compleate"*/, v19);
    sub_1B640C8(&StringLiteral_13331/*"TRADE_EVENT_REWARD_AVAILABLE_NUM_MESSAGE"*/, v20);
    sub_1B640C8(&StringLiteral_13325/*"TRADE_EVENT_PROGRESS_NUM"*/, v21);
    sub_1B640C8(&StringLiteral_13339/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/, v22);
    sub_1B640C8(&StringLiteral_13338/*"TRADE_EVENT_TRADE_COMPLETE"*/, v23);
    byte_4A00698 = 1;
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
              EventTradeListViewItemDraw__DestroyAnimObj(this, v27);
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
                  v28 = *(_DWORD *)&this->fields.NAME_COLOR_DEFAULT.fields.r;
                  v89.fields.a = (float)HIBYTE(v28) / 255.0;
                  v89.fields.b = (float)BYTE2(v28) / 255.0;
                  v89.fields.g = (float)BYTE1(v28) / 255.0;
                  v89.fields.r = (float)(unsigned __int8)v28 / 255.0;
                  UILabel__set_effectColor((UILabel_o *)pickupSprite, v89, 0LL);
                  pickupSprite = EventTradeListViewItem__get_NowTradeNum(item, v29);
                  TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
                  if ( TradeInfo_k__BackingField )
                  {
                    v31 = pickupSprite;
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
                            (float)v31 / (float)maxTradeNum,
                            0LL);
                          EventTradeListViewItemDraw__UpdateSweetsAnim(this, item, v33);
                          progressLabel = this->fields.progressLabel;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v35 = LocalizationManager__Get((System_String_o *)StringLiteral_13325/*"TRADE_EVENT_PROGRESS_NUM"*/, 0LL);
                          NowTradeNum = EventTradeListViewItem__get_NowTradeNum(item, v36);
                          pickupSprite = j_il2cpp_value_box_0(int_TypeInfo, &NowTradeNum);
                          v37 = item->fields._TradeInfo_k__BackingField;
                          if ( v37 )
                          {
                            v38 = (Il2CppObject *)pickupSprite;
                            v86 = v37->fields.maxTradeNum;
                            v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v86);
                            pickupSprite = (__int64)System_String__Format_61389768(v35, v38, v39, 0LL);
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
                                  v41 = item->fields._TradeInfo_k__BackingField;
                                  if ( v41
                                    && (v41->fields.getNum >= 1
                                     || EventTradeListViewItem__get_NowCompleteNum(item, v40) >= 1) )
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
                                    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_13331/*"TRADE_EVENT_REWARD_AVAILABLE_NUM_MESSAGE"*/, 0LL);
                                    NowTradeNum = EventTradeListViewItem__get_NowCompleteNum(item, v44);
                                    v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &NowTradeNum);
                                    pickupSprite = (__int64)System_String__Format(v43, v45, 0LL);
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
                                    if ( EventTradeListViewItem__get_IsRefillable(item, v66) )
                                      v68 = !EventTradeListViewItem__get_IsEventEnd(item, v67);
                                    else
                                      LOBYTE(v68) = 0;
                                    pickupSprite = (__int64)this->fields.replenishmentButton;
                                    if ( !pickupSprite )
                                      goto LABEL_130;
                                    pickupSprite = (*(__int64 (__fastcall **)(__int64, _BOOL4, _QWORD))(*(_QWORD *)pickupSprite + 392LL))(
                                                     pickupSprite,
                                                     v68,
                                                     *(_QWORD *)(*(_QWORD *)pickupSprite + 400LL));
                                  }
                                  v69 = item->fields._TradeInfo_k__BackingField;
                                  if ( !v69 )
                                    goto LABEL_130;
                                  startedAt = v69->fields.startedAt;
                                  TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
                                  tradeNum = v69->fields.tradeNum;
                                  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
                                  TradeFinishTime = EventTradeTimeCalculation__GetTradeFinishTime(
                                                      TradeGoodsEntity_k__BackingField,
                                                      tradeNum,
                                                      startedAt,
                                                      0LL);
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                  v74 = TradeFinishTime + startedAt - NetworkManager__getTime(0LL);
                                  pickupSprite = EventTradeListViewItem__get_NowTradeNum(item, v75);
                                  tradeCompleteLabel = (UILabel_o *)this->fields.tradeCompleteLabel;
                                  if ( (int)pickupSprite <= 0 )
                                  {
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    pickupSprite = (__int64)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_13338/*"TRADE_EVENT_TRADE_COMPLETE"*/,
                                                              0LL);
                                    if ( !tradeCompleteLabel )
                                      goto LABEL_130;
                                    UILabel__set_text(tradeCompleteLabel, (System_String_o *)pickupSprite, 0LL);
                                    timeLeftLabel = this->fields.timeLeftLabel;
                                    pickupSprite = (__int64)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_13339/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/,
                                                              0LL);
                                    if ( !timeLeftLabel )
                                      goto LABEL_130;
                                    UILabel__set_text(timeLeftLabel, (System_String_o *)pickupSprite, 0LL);
                                    EventId_k__BackingField = item->fields._EventId_k__BackingField;
                                    tradingStateSprite = this->fields.tradingStateSprite;
                                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                    v80 = &StringLiteral_20114/*"icon_trade_compleate"*/;
                                  }
                                  else
                                  {
                                    if ( !tradeCompleteLabel )
                                      goto LABEL_130;
                                    UILabel__set_text(
                                      (UILabel_o *)this->fields.tradeCompleteLabel,
                                      string_TypeInfo->static_fields->Empty,
                                      0LL);
                                    v77 = this->fields.timeLeftLabel;
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    pickupSprite = (__int64)LocalizationManager__GetRestTimeInFormat(
                                                              v74,
                                                              0LL,
                                                              (System_String_o *)StringLiteral_24974/*"{0}:{1:D2}:{2:D2}"*/,
                                                              0LL);
                                    if ( !v77 )
                                      goto LABEL_130;
                                    UILabel__set_text(v77, (System_String_o *)pickupSprite, 0LL);
                                    EventId_k__BackingField = item->fields._EventId_k__BackingField;
                                    tradingStateSprite = this->fields.tradingStateSprite;
                                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                    v80 = &StringLiteral_20115/*"icon_trade_intrade"*/;
                                  }
                                  AtlasManager__SetEventUI_37544692(
                                    EventId_k__BackingField,
                                    tradingStateSprite,
                                    (System_String_o *)*v80,
                                    0LL);
                                  v82 = 0.92157;
                                  pickupSprite = (__int64)this->fields.timeLeftLabel;
                                  if ( v74 >= 3600 )
                                    v83 = 0.015686;
                                  else
                                    v83 = 0.0;
                                  if ( v74 < 3600 )
                                    v82 = 0.0;
                                  if ( pickupSprite )
                                  {
                                    v84 = 1.0;
                                    v85 = 1.0;
                                    UIWidget__set_color(
                                      (UIWidget_o *)pickupSprite,
                                      *(UnityEngine_Color_o *)(&v82 - 1),
                                      0LL);
                                    pickupSprite = (__int64)this->fields.tradingStateSprite;
                                    if ( pickupSprite )
                                    {
                                      pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)pickupSprite,
                                                                0LL);
                                      if ( pickupSprite )
                                      {
                                        v65 = 1;
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
                        v90.fields.a = (float)HIBYTE(rgba) / 255.0;
                        v90.fields.b = (float)BYTE2(rgba) / 255.0;
                        v90.fields.g = (float)BYTE1(rgba) / 255.0;
                        v90.fields.r = (float)(unsigned __int8)rgba / 255.0;
                        UILabel__set_effectColor((UILabel_o *)pickupSprite, v90, 0LL);
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
                                            pickupSprite = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventTradePickupMaster___);
                                            v47 = item->fields._TradeGoodsEntity_k__BackingField;
                                            if ( v47 )
                                            {
                                              v48 = (EventTradePickupMaster_o *)pickupSprite;
                                              id = v47->fields.id;
                                              eventId = v47->fields.eventId;
                                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                                              pickupSprite = NetworkManager__getTime(0LL);
                                              if ( v48 )
                                              {
                                                pickupSprite = EventTradePickupMaster__TryGetEntityTargetTime(
                                                                 v48,
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
                                                v52 = item->fields._TradeGoodsEntity_k__BackingField;
                                                if ( v52 )
                                                {
                                                  v53 = EventTradePickupMaster_TypeInfo;
                                                  v54 = *p_tradeTimeRate;
                                                  tradeTime = v52->fields.tradeTime;
                                                  if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
                                                  {
                                                    j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo);
                                                    v53 = EventTradePickupMaster_TypeInfo;
                                                  }
                                                  DEFAULT_EVENT_TRADE_TIME_RATE = v53->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
                                                  if ( !System_Math_TypeInfo->_2.cctor_finished )
                                                    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                                                  v57 = ceil(
                                                          (double)(tradeTime * v54)
                                                        / (double)DEFAULT_EVENT_TRADE_TIME_RATE);
                                                  if ( !System_Convert_TypeInfo->_2.cctor_finished )
                                                    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
                                                  v58 = System_Convert__ToInt64_62033960(v57, 0LL);
                                                  timeRequiredTrade = this->fields.timeRequiredTrade;
                                                  v60 = v58;
                                                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                                  pickupSprite = (__int64)LocalizationManager__GetRestTimeInFormat(
                                                                            v60,
                                                                            0LL,
                                                                            (System_String_o *)StringLiteral_24974/*"{0}:{1:D2}:{2:D2}"*/,
                                                                            0LL);
                                                  if ( timeRequiredTrade )
                                                  {
                                                    UILabel__set_text(
                                                      timeRequiredTrade,
                                                      (System_String_o *)pickupSprite,
                                                      0LL);
                                                    EventTradeListViewItemDraw__DestroyAnimObj(this, v61);
                                                    if ( EventTradeListViewItem__get_IsBuyAble(item, v62) )
                                                    {
                                                      LOBYTE(v64) = item->fields._IsRelease_k__BackingField;
                                                      if ( v64 )
                                                        v64 = !EventTradeListViewItem__get_IsEventEnd(item, v63);
                                                    }
                                                    else
                                                    {
                                                      LOBYTE(v64) = 0;
                                                    }
                                                    pickupSprite = (__int64)this->fields.tradeStartButton;
                                                    if ( pickupSprite )
                                                    {
                                                      (*(void (__fastcall **)(__int64, _BOOL4, _QWORD))(*(_QWORD *)pickupSprite + 392LL))(
                                                        pickupSprite,
                                                        v64,
                                                        *(_QWORD *)(*(_QWORD *)pickupSprite + 400LL));
                                                      pickupSprite = (__int64)this->fields.tradingStateSprite;
                                                      if ( pickupSprite )
                                                      {
                                                        pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                                                  (UnityEngine_Component_o *)pickupSprite,
                                                                                  0LL);
                                                        if ( pickupSprite )
                                                        {
                                                          v65 = 0;
LABEL_128:
                                                          UnityEngine_GameObject__SetActive(
                                                            (UnityEngine_GameObject_o *)pickupSprite,
                                                            v65,
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
    sub_1B64324(pickupSprite);
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
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_GameObject_o *NowTradeNum; // x0
  const MethodInfo *v16; // x1
  __int64 v17; // x1
  int v18; // w21
  struct UISprite_array *v19; // x8
  const MethodInfo *v20; // x1

  if ( (byte_4A00699 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_UISprite__TypeInfo, item);
    sub_1B640C8(&Method_BasicHelper_ForEach_UISprite___, v5);
    sub_1B640C8(&Method_EventTradeListViewItemDraw___c__UpdateSweetsAnim_b__45_0__, v6);
    sub_1B640C8(&EventTradeListViewItemDraw___c_TypeInfo, v7);
    byte_4A00699 = 1;
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
    _9__45_0 = (System_Action_object__o *)sub_1B64314(System_Action_UISprite__TypeInfo, item, method);
    System_Action_object____ctor(_9__45_0, v11, Method_EventTradeListViewItemDraw___c__UpdateSweetsAnim_b__45_0__, 0LL);
    static_fields = EventTradeListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__45_0 = (struct System_Action_UISprite__o *)_9__45_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__45_0, (int32_t)_9__45_0, v13, v14);
  }
  BasicHelper__ForEach_object_(
    sweetsAnimSpriteArray,
    (System_Action_T__o *)_9__45_0,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_UISprite___);
  if ( !item )
    goto LABEL_18;
  NowTradeNum = (UnityEngine_GameObject_o *)EventTradeListViewItem__get_NowTradeNum(item, v16);
  if ( (int)NowTradeNum >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      v19 = this->fields.sweetsAnimSpriteArray;
      if ( !v19 )
        break;
      if ( v18 >= v19->max_length )
        sub_1B6432C(NowTradeNum, v17);
      NowTradeNum = (UnityEngine_GameObject_o *)v19->m_Items[v18];
      if ( !NowTradeNum )
        break;
      NowTradeNum = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NowTradeNum, 0LL);
      if ( !NowTradeNum )
        break;
      UnityEngine_GameObject__SetActive(NowTradeNum, 1, 0LL);
      ++v18;
      NowTradeNum = (UnityEngine_GameObject_o *)EventTradeListViewItem__get_NowTradeNum(item, v20);
      if ( v18 >= (int)NowTradeNum )
        return;
    }
LABEL_18:
    sub_1B64324(NowTradeNum);
  }
}


void __fastcall EventTradeListViewItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A0069B & 1) == 0 )
  {
    sub_1B640C8(&EventTradeListViewItemDraw___c_TypeInfo, v1);
    byte_4A0069B = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventTradeListViewItemDraw___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventTradeListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct EventTradeListViewItemDraw___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventTradeListViewItemDraw___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  EventTradeListViewItemDraw___c__DisplayClass41_0_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct EventTradeListViewItem_o *item; // x8
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x9
  int32_t EventId_k__BackingField; // w20
  Il2CppObject *v10; // x0
  System_String_o *v11; // x21
  int32_t goodsIconId; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4A0069C & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, sprite);
    sub_1B640C8(&int_TypeInfo, v5);
    this = (EventTradeListViewItemDraw___c__DisplayClass41_0_o *)sub_1B640C8(&StringLiteral_20118/*"icon_{0}"*/, v6);
    byte_4A0069C = 1;
  }
  item = v4->fields.item;
  if ( !item || (TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField) == 0LL )
    sub_1B64324(this);
  EventId_k__BackingField = item->fields._EventId_k__BackingField;
  goodsIconId = TradeGoodsEntity_k__BackingField->fields.goodsIconId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &goodsIconId);
  v11 = System_String__Format((System_String_o *)StringLiteral_20118/*"icon_{0}"*/, v10, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_37544692(EventId_k__BackingField, sprite, v11, 0LL);
}