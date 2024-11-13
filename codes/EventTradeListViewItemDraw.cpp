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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  EventTradeListViewItemDraw___c_c *v11; // x0
  System_Collections_Generic_IEnumerable_T__o *sweetsAnimSpriteArray; // x19
  System_Action_object__o *_9__46_0; // x20
  Il2CppObject *v14; // x21
  struct EventTradeListViewItemDraw___c_StaticFields *static_fields; // x0

  if ( (byte_4B11283 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_UISprite__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_UISprite___, v5, v6);
    sub_1BCA7E0(&Method_EventTradeListViewItemDraw___c__DestroyAnimObj_b__46_0__, v7, v8);
    sub_1BCA7E0(&EventTradeListViewItemDraw___c_TypeInfo, v9, v10);
    byte_4B11283 = 1;
  }
  v11 = EventTradeListViewItemDraw___c_TypeInfo;
  sweetsAnimSpriteArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.sweetsAnimSpriteArray;
  if ( !EventTradeListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemDraw___c_TypeInfo, method);
    v11 = EventTradeListViewItemDraw___c_TypeInfo;
  }
  _9__46_0 = (System_Action_object__o *)v11->static_fields->__9__46_0;
  if ( !_9__46_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = EventTradeListViewItemDraw___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__46_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_UISprite__TypeInfo, method, v2, v3);
    System_Action_object____ctor(_9__46_0, v14, Method_EventTradeListViewItemDraw___c__DestroyAnimObj_b__46_0__, 0LL);
    static_fields = EventTradeListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__46_0 = (struct System_Action_UISprite__o *)_9__46_0;
    sub_1BCA784(&static_fields->__9__46_0, _9__46_0);
  }
  BasicHelper__ForEach_object_(
    sweetsAnimSpriteArray,
    (System_Action_T__o *)_9__46_0,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_UISprite___);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventTradeListViewItemDraw__GetDisplayMode(
        int32_t initMode,
        EventTradeListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( initMode == 3 )
  {
    if ( !item )
      sub_1BCAA3C(*(_QWORD *)&initMode, 0LL);
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
  Il2CppObject *v69; // x22
  int64_t nameTextLabel; // x0
  const MethodInfo *v71; // x1
  EventTradeListViewItem_o **v72; // x21
  __int64 v73; // x1
  int32_t EventId_k__BackingField; // w23
  UISprite_o *tradingBaseSprite; // x24
  __int64 v76; // x1
  UILabel_o *tradeStartLabel; // x23
  UILabel_o *rewardReceivedPossibleLabel; // x23
  UILabel_o *replenishmentLabel; // x23
  UILabel_o *withdrawalLabel; // x23
  System_Collections_Generic_IEnumerable_T__o *sweetsAnimSpriteArray; // x23
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  System_Action_object__o *v85; // x24
  const MethodInfo *v86; // x2
  Il2CppClass *klass; // x8
  EventTradeListViewItem_o *v88; // x8
  _BOOL4 IsRelease_k__BackingField; // w24
  int32_t v90; // w23
  UISprite_o *baseSprite; // x22
  EventTradeListViewItem_o *v92; // x8
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x9
  int32_t v94; // w23
  UISprite_o *itemIcon; // x22
  Il2CppObject *v96; // x0
  System_String_o *v97; // x0
  struct EventTradeGoodsEntity_o *v98; // x8
  System_String_o *name; // x1
  __int64 v100; // x1
  UILabel_o *v101; // x22
  struct EventTradeGoodsEntity_o *v102; // x8
  const MethodInfo *v103; // x2
  __int64 v104; // x1
  int64_t v105; // x23
  void *monitor; // x26
  UILabel_o *restTimeLabel; // x22
  System_String_o *v108; // x23
  void *v109; // x24
  int64_t Time; // x0
  Il2CppObject *RestTime2; // x0
  const MethodInfo *v112; // x2
  unsigned int v113; // w20
  bool v114; // w1
  bool v115; // w1
  __int64 v116; // x1
  UILabel_o *textOnMask; // x20
  int32_t goodsIconId; // [xsp+Ch] [xbp-54h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B1127E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_UISprite__TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_UISprite___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v15, v16);
    sub_1BCA7E0(&int_TypeInfo, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&string_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_EventTradeListViewItemDraw___c__DisplayClass41_0__SetItem_b__0__, v25, v26);
    sub_1BCA7E0(&EventTradeListViewItemDraw___c__DisplayClass41_0_TypeInfo, v27, v28);
    sub_1BCA7E0(&StringLiteral_17725/*"btn_trade_bg_01"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_20412/*"icon_{0}"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_20548/*"img_item_brank"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_20410/*"icon_trade_reward"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_13536/*"TRADE_EVENT_BOARD_WITHDRAWALLABEL_BUTTON"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_19477/*"event_trade_8048001"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_13474/*"TIME_REST2_NONE"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_13532/*"TRADE_EVENT_BOARD_RECEIVE_BUTTON"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_24285/*"tradegauge_bg"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_20377/*"icon_popularitem"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_13533/*"TRADE_EVENT_BOARD_REPLENISHMENT_BUTTON"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_13562/*"TRADE_EVENT_REST_TIME_LABEL"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_19478/*"event_trade_8048002"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_13544/*"TRADE_EVENT_END"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_24284/*"tradegauge_bar"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_17726/*"btn_trade_bg_02"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_19479/*"event_trade_8048003"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_20407/*"icon_trade_arrow"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_13534/*"TRADE_EVENT_BOARD_START_BUTTON"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_13535/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, v67, v68);
    byte_4B1127E = 1;
  }
  entity = 0LL;
  v69 = (Il2CppObject *)sub_1BCAA2C(
                          EventTradeListViewItemDraw___c__DisplayClass41_0_TypeInfo,
                          item,
                          *(_QWORD *)&mode,
                          method);
  System_Object___ctor(v69, 0LL);
  if ( !v69 )
    goto LABEL_90;
  v69[1].klass = (Il2CppClass *)item;
  v72 = (EventTradeListViewItem_o **)&v69[1];
  sub_1BCA784(&v69[1], item);
  if ( mode && *v72 )
  {
    EventId_k__BackingField = (*v72)->fields._EventId_k__BackingField;
    tradingBaseSprite = this->fields.tradingBaseSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v73);
    nameTextLabel = AtlasManager__SetEventUI_38574572(
                      EventId_k__BackingField,
                      tradingBaseSprite,
                      (System_String_o *)StringLiteral_19478/*"event_trade_8048002"*/,
                      0LL);
    if ( !*v72 )
      goto LABEL_90;
    nameTextLabel = AtlasManager__SetEventUI_38574572(
                      (*v72)->fields._EventId_k__BackingField,
                      this->fields.progressGaugeFront,
                      (System_String_o *)StringLiteral_24284/*"tradegauge_bar"*/,
                      0LL);
    if ( !*v72 )
      goto LABEL_90;
    nameTextLabel = AtlasManager__SetEventUI_38574572(
                      (*v72)->fields._EventId_k__BackingField,
                      this->fields.progressGaugeBack,
                      (System_String_o *)StringLiteral_24285/*"tradegauge_bg"*/,
                      0LL);
    if ( !*v72 )
      goto LABEL_90;
    AtlasManager__SetEventUI_38574572(
      (*v72)->fields._EventId_k__BackingField,
      this->fields.pickupSprite,
      (System_String_o *)StringLiteral_20377/*"icon_popularitem"*/,
      0LL);
    tradeStartLabel = this->fields.tradeStartLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76);
    nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13534/*"TRADE_EVENT_BOARD_START_BUTTON"*/, 0LL);
    if ( !tradeStartLabel )
      goto LABEL_90;
    UILabel__set_text(tradeStartLabel, (System_String_o *)nameTextLabel, 0LL);
    if ( !*v72 )
      goto LABEL_90;
    AtlasManager__SetEventUI_38574572(
      (*v72)->fields._EventId_k__BackingField,
      this->fields.tradeStartButtonSprite,
      (System_String_o *)StringLiteral_17725/*"btn_trade_bg_01"*/,
      0LL);
    rewardReceivedPossibleLabel = this->fields.rewardReceivedPossibleLabel;
    nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13532/*"TRADE_EVENT_BOARD_RECEIVE_BUTTON"*/, 0LL);
    if ( !rewardReceivedPossibleLabel )
      goto LABEL_90;
    UILabel__set_text(rewardReceivedPossibleLabel, (System_String_o *)nameTextLabel, 0LL);
    if ( !*v72 )
      goto LABEL_90;
    AtlasManager__SetEventUI_38574572(
      (*v72)->fields._EventId_k__BackingField,
      this->fields.rewardReceivedPossibleButtonSprite,
      (System_String_o *)StringLiteral_17726/*"btn_trade_bg_02"*/,
      0LL);
    replenishmentLabel = this->fields.replenishmentLabel;
    nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13533/*"TRADE_EVENT_BOARD_REPLENISHMENT_BUTTON"*/, 0LL);
    if ( !replenishmentLabel )
      goto LABEL_90;
    UILabel__set_text(replenishmentLabel, (System_String_o *)nameTextLabel, 0LL);
    if ( !*v72 )
      goto LABEL_90;
    AtlasManager__SetEventUI_38574572(
      (*v72)->fields._EventId_k__BackingField,
      this->fields.replenishmentButtonSprite,
      (System_String_o *)StringLiteral_17725/*"btn_trade_bg_01"*/,
      0LL);
    withdrawalLabel = this->fields.withdrawalLabel;
    nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13536/*"TRADE_EVENT_BOARD_WITHDRAWALLABEL_BUTTON"*/, 0LL);
    if ( !withdrawalLabel )
      goto LABEL_90;
    UILabel__set_text(withdrawalLabel, (System_String_o *)nameTextLabel, 0LL);
    if ( !*v72 )
      goto LABEL_90;
    nameTextLabel = AtlasManager__SetEventUI_38574572(
                      (*v72)->fields._EventId_k__BackingField,
                      this->fields.withdrawalButtonSprite,
                      (System_String_o *)StringLiteral_17725/*"btn_trade_bg_01"*/,
                      0LL);
    if ( !*v72 )
      goto LABEL_90;
    nameTextLabel = AtlasManager__SetEventUI_38574572(
                      (*v72)->fields._EventId_k__BackingField,
                      this->fields.tradeRewardIconSprite,
                      (System_String_o *)StringLiteral_20410/*"icon_trade_reward"*/,
                      0LL);
    if ( !*v72 )
      goto LABEL_90;
    AtlasManager__SetEventUI_38574572(
      (*v72)->fields._EventId_k__BackingField,
      this->fields.tradeArrowIconSprite,
      (System_String_o *)StringLiteral_20407/*"icon_trade_arrow"*/,
      0LL);
    sweetsAnimSpriteArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.sweetsAnimSpriteArray;
    v85 = (System_Action_object__o *)sub_1BCAA2C(System_Action_UISprite__TypeInfo, v82, v83, v84);
    System_Action_object____ctor(v85, v69, Method_EventTradeListViewItemDraw___c__DisplayClass41_0__SetItem_b__0__, 0LL);
    BasicHelper__ForEach_object_(
      sweetsAnimSpriteArray,
      (System_Action_T__o *)v85,
      (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_UISprite___);
    klass = v69[1].klass;
    if ( !klass )
      goto LABEL_90;
    EventTradeListViewItemDraw__SetReleaseDisplayObject(this, BYTE4(klass->_1.properties), v86);
    v88 = *v72;
    if ( !*v72 )
      goto LABEL_90;
    IsRelease_k__BackingField = v88->fields._IsRelease_k__BackingField;
    v90 = v88->fields._EventId_k__BackingField;
    baseSprite = this->fields.baseSprite;
    if ( AtlasManager_TypeInfo->_2.cctor_finished )
    {
      if ( v88->fields._IsRelease_k__BackingField )
        goto LABEL_27;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v71);
      if ( IsRelease_k__BackingField )
      {
LABEL_27:
        nameTextLabel = AtlasManager__SetEventUI_38574572(v90, baseSprite, (System_String_o *)StringLiteral_19477/*"event_trade_8048001"*/, 0LL);
        v92 = *v72;
        if ( !*v72 )
          goto LABEL_90;
        TradeGoodsEntity_k__BackingField = v92->fields._TradeGoodsEntity_k__BackingField;
        if ( !TradeGoodsEntity_k__BackingField )
          goto LABEL_90;
        v94 = v92->fields._EventId_k__BackingField;
        itemIcon = this->fields.itemIcon;
        goodsIconId = TradeGoodsEntity_k__BackingField->fields.goodsIconId;
        v96 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &goodsIconId);
        v97 = System_String__Format((System_String_o *)StringLiteral_20412/*"icon_{0}"*/, v96, 0LL);
        nameTextLabel = AtlasManager__SetEventUI_38574572(v94, itemIcon, v97, 0LL);
        if ( !*v72 )
          goto LABEL_90;
        v98 = (*v72)->fields._TradeGoodsEntity_k__BackingField;
        if ( !v98 )
          goto LABEL_90;
        nameTextLabel = (int64_t)this->fields.nameTextLabel;
        if ( !nameTextLabel )
          goto LABEL_90;
        name = v98->fields.name;
        goto LABEL_42;
      }
    }
    nameTextLabel = AtlasManager__SetEventUI_38574572(v90, baseSprite, (System_String_o *)StringLiteral_19479/*"event_trade_8048003"*/, 0LL);
    if ( !*v72 )
      goto LABEL_90;
    AtlasManager__SetEventUI_38574572(
      (*v72)->fields._EventId_k__BackingField,
      this->fields.itemIcon,
      (System_String_o *)StringLiteral_20548/*"img_item_brank"*/,
      0LL);
    v101 = (UILabel_o *)this->fields.nameTextLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v100);
    nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13535/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, 0LL);
    if ( !v101 )
      goto LABEL_90;
    UILabel__set_text(v101, (System_String_o *)nameTextLabel, 0LL);
    if ( !*v72 )
      goto LABEL_90;
    v102 = (*v72)->fields._TradeGoodsEntity_k__BackingField;
    if ( !v102 )
      goto LABEL_90;
    nameTextLabel = (int64_t)this->fields.textOnMask;
    if ( !nameTextLabel )
      goto LABEL_90;
    name = v102->fields.closedMessage;
LABEL_42:
    UILabel__set_text((UILabel_o *)nameTextLabel, name, 0LL);
    if ( !*v72 )
      goto LABEL_90;
    if ( (*v72)->fields._EventId_k__BackingField >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v71);
      nameTextLabel = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
      if ( !*v72 || !nameTextLabel )
        goto LABEL_90;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)nameTextLabel,
             &entity,
             (*v72)->fields._EventId_k__BackingField,
             (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v104);
        nameTextLabel = NetworkManager__getTime(0LL);
        if ( !entity )
          goto LABEL_90;
        v105 = nameTextLabel;
        monitor = entity[6].monitor;
        restTimeLabel = this->fields.restTimeLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v71);
        if ( v105 >= (__int64)monitor )
        {
          nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13474/*"TIME_REST2_NONE"*/, 0LL);
        }
        else
        {
          nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13562/*"TRADE_EVENT_REST_TIME_LABEL"*/, 0LL);
          if ( !entity )
            goto LABEL_90;
          v108 = (System_String_o *)nameTextLabel;
          v109 = entity[6].monitor;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v71);
          Time = NetworkManager__getTime(0LL);
          RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2((int64_t)v109, Time, 0LL);
          nameTextLabel = (int64_t)System_String__Format(v108, RestTime2, 0LL);
        }
        v71 = (const MethodInfo *)nameTextLabel;
        if ( !restTimeLabel )
LABEL_90:
          sub_1BCAA3C(nameTextLabel, v71);
        UILabel__set_text(restTimeLabel, (System_String_o *)nameTextLabel, 0LL);
      }
    }
    EventTradeListViewItemDraw__SetPriceIconText(this, *v72, v103);
    EventTradeListViewItemDraw__SetRewardIconText(this, *v72, v112);
    v113 = mode & 0xFFFFFFFE;
    if ( v113 == 4 )
    {
      nameTextLabel = (int64_t)this->fields.tradingBaseSprite;
      if ( !nameTextLabel )
        goto LABEL_90;
      nameTextLabel = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameTextLabel, 0LL);
      if ( !nameTextLabel )
        goto LABEL_90;
      v114 = 1;
    }
    else
    {
      if ( v113 != 2 )
        goto LABEL_71;
      nameTextLabel = (int64_t)this->fields.tradingBaseSprite;
      if ( !nameTextLabel )
        goto LABEL_90;
      nameTextLabel = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameTextLabel, 0LL);
      if ( !nameTextLabel )
        goto LABEL_90;
      v114 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameTextLabel, v114, 0LL);
LABEL_71:
    nameTextLabel = (int64_t)*v72;
    if ( *v72 )
    {
      if ( !EventTradeListViewItem__get_IsEventEnd((EventTradeListViewItem_o *)nameTextLabel, v71) )
        return;
      if ( v113 == 4 )
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
              v115 = 0;
LABEL_88:
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameTextLabel, v115, 0LL);
              return;
            }
          }
        }
      }
      else
      {
        EventTradeListViewItemDraw__DestroyAnimObj(this, v71);
        nameTextLabel = (int64_t)this->fields.progressBar;
        if ( nameTextLabel )
        {
          nameTextLabel = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameTextLabel, 0LL);
          if ( nameTextLabel )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameTextLabel, 0, 0LL);
            textOnMask = this->fields.textOnMask;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v116);
            nameTextLabel = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13544/*"TRADE_EVENT_END"*/, 0LL);
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
                      v115 = 1;
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

  if ( (byte_4B1127F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, method);
    byte_4B1127F = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
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
    sub_1BCAA3C(priceInfoSingle, item);
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
    sub_1BCAA3C(maskSprite, isRelease);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, isRelease, 0LL);
}


void __fastcall EventTradeListViewItemDraw__SetRewardIconText(
        EventTradeListViewItemDraw_o *this,
        EventTradeListViewItem_o *item,
        const MethodInfo *method)
{
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
  int64_t Master_object; // x0
  __int64 v20; // x1
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x8
  GiftEntity_array *GiftListById; // x20
  __int64 v23; // x1
  Il2CppObject *v24; // x21
  GiftEntity_o *v25; // x8
  UILabel_o *rewardNumTextLabel; // x21
  GiftEntity_o *v27; // x8
  __int64 v28; // x1
  UILabel_o *rewardNumTitleLabel; // x19
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B11280 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, item, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_424/*"#,0"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_13546/*"TRADE_EVENT_HAVE_NUM"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v17, v18);
    byte_4B11280 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !item )
    goto LABEL_28;
  TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
  if ( !TradeGoodsEntity_k__BackingField || !Master_object )
    goto LABEL_28;
  GiftListById = GiftMaster__GetGiftListById(
                   (GiftMaster_o *)Master_object,
                   TradeGoodsEntity_k__BackingField->fields.giftId,
                   0LL);
  v24 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v23);
  Master_object = NetworkManager__get_UserId(0LL);
  if ( !GiftListById )
    goto LABEL_28;
  if ( !GiftListById->max_length )
    goto LABEL_29;
  v25 = GiftListById->m_Items[0];
  if ( !v25 || !v24 )
    goto LABEL_28;
  Master_object = UserItemMaster__TryGetEntity(
                    (UserItemMaster_o *)v24,
                    &entity,
                    Master_object,
                    v25->fields.objectId,
                    0LL);
  rewardNumTextLabel = this->fields.rewardNumTextLabel;
  if ( (Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_28;
    Master_object = (int64_t)System_Int32__ToString_63206828(
                               (int)entity + 28,
                               (System_String_o *)StringLiteral_424/*"#,0"*/,
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
    UILabel__set_text(this->fields.rewardNumTextLabel, (System_String_o *)StringLiteral_1209/*"0"*/, 0LL);
  }
  if ( !GiftListById->max_length )
LABEL_29:
    sub_1BCAA44(Master_object, v20);
  v27 = GiftListById->m_Items[0];
  if ( !v27 )
    goto LABEL_28;
  Master_object = (int64_t)this->fields.rewardItemIcon;
  if ( !Master_object )
    goto LABEL_28;
  ItemIconComponent__SetItem((ItemIconComponent_o *)Master_object, v27->fields.objectId, -1, 0LL);
  rewardNumTitleLabel = this->fields.rewardNumTitleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
  Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_13546/*"TRADE_EVENT_HAVE_NUM"*/, 0LL);
  if ( !rewardNumTitleLabel )
LABEL_28:
    sub_1BCAA3C(Master_object, v20);
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
  __int64 pickupSprite; // x0
  UnityEngine_GameObject_o *v42; // x22
  int32_t v43; // w23
  unsigned int v44; // w8
  const MethodInfo *v45; // x1
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  int v47; // w21
  int maxTradeNum; // s8
  const MethodInfo *v49; // x2
  __int64 v50; // x1
  UILabel_o *progressLabel; // x21
  System_String_o *v52; // x22
  const MethodInfo *v53; // x1
  struct EventTradeInfo_o *v54; // x8
  Il2CppObject *v55; // x23
  Il2CppObject *v56; // x0
  struct EventTradeInfo_o *v57; // x8
  __int64 v58; // x1
  UILabel_o *rewardAvailableNumTextLabel; // x21
  System_String_o *v60; // x22
  const MethodInfo *v61; // x1
  Il2CppObject *v62; // x0
  unsigned int rgba; // w8
  __int64 v64; // x1
  struct EventTradeGoodsEntity_o *v65; // x8
  EventTradePickupMaster_o *v66; // x21
  int32_t eventId; // w22
  int32_t id; // w23
  int32_t *p_tradeTimeRate; // x8
  struct EventTradeGoodsEntity_o *v70; // x9
  EventTradePickupMaster_c *v71; // x0
  int32_t v72; // w21
  int32_t tradeTime; // w22
  int DEFAULT_EVENT_TRADE_TIME_RATE; // w23
  double v75; // d8
  int64_t v76; // x0
  __int64 v77; // x1
  UILabel_o *timeRequiredTrade; // x21
  int64_t v79; // x22
  const MethodInfo *v80; // x1
  const MethodInfo *v81; // x1
  _BOOL4 v82; // w8
  bool v83; // w1
  const MethodInfo *v84; // x1
  _BOOL4 v85; // w8
  struct EventTradeInfo_o *v86; // x8
  int64_t startedAt; // x21
  EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x22
  int32_t tradeNum; // w23
  __int64 v90; // x1
  int64_t TradeFinishTime; // x22
  int64_t v92; // x21
  const MethodInfo *v93; // x1
  UILabel_o *tradeCompleteLabel; // x22
  __int64 v95; // x1
  UILabel_o *v96; // x22
  __int64 v97; // x1
  int32_t EventId_k__BackingField; // w20
  UISprite_o *tradingStateSprite; // x22
  __int64 *v100; // x8
  UILabel_o *timeLeftLabel; // x22
  __int64 v102; // x1
  float v103; // s1
  float v104; // s2
  float v105; // s0
  float v106; // s3
  int32_t v107; // [xsp+8h] [xbp-58h] BYREF
  int32_t NowTradeNum; // [xsp+Ch] [xbp-54h] BYREF
  EventTradePickupEntity_o *pickupEntity; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Color_o v110; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v111; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B11281 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&System_Convert_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventTradePickupMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&EventTradePickupMaster_TypeInfo, v13, v14);
    sub_1BCA7E0(&EventTradeTimeCalculation_TypeInfo, v15, v16);
    sub_1BCA7E0(&int_TypeInfo, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Math_TypeInfo, v21, v22);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&string_TypeInfo, v25, v26);
    sub_1BCA7E0(&StringLiteral_20409/*"icon_trade_intrade"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_25330/*"{0}:{1:D2}:{2:D2}"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_20408/*"icon_trade_compleate"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_13563/*"TRADE_EVENT_REWARD_AVAILABLE_NUM_MESSAGE"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_13557/*"TRADE_EVENT_PROGRESS_NUM"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_13571/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_13570/*"TRADE_EVENT_TRADE_COMPLETE"*/, v39, v40);
    byte_4B11281 = 1;
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
        v42 = (UnityEngine_GameObject_o *)pickupSprite;
        pickupSprite = EventTradeGoodsEntity__GetPickUpRateNow(item->fields._TradeGoodsEntity_k__BackingField, 0LL);
        v43 = pickupSprite;
        if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo, item);
        if ( v42 )
        {
          UnityEngine_GameObject__SetActive(
            v42,
            v43 < EventTradePickupMaster_TypeInfo->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE,
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
                  v44 = *(_DWORD *)&this->fields.NAME_COLOR_DEFAULT.fields.r;
                  v110.fields.a = (float)HIBYTE(v44) / 255.0;
                  v110.fields.b = (float)BYTE2(v44) / 255.0;
                  v110.fields.g = (float)BYTE1(v44) / 255.0;
                  v110.fields.r = (float)(unsigned __int8)v44 / 255.0;
                  UILabel__set_effectColor((UILabel_o *)pickupSprite, v110, 0LL);
                  pickupSprite = EventTradeListViewItem__get_NowTradeNum(item, v45);
                  TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
                  if ( TradeInfo_k__BackingField )
                  {
                    v47 = pickupSprite;
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
                            (float)v47 / (float)maxTradeNum,
                            0LL);
                          EventTradeListViewItemDraw__UpdateSweetsAnim(this, item, v49);
                          progressLabel = this->fields.progressLabel;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50);
                          v52 = LocalizationManager__Get((System_String_o *)StringLiteral_13557/*"TRADE_EVENT_PROGRESS_NUM"*/, 0LL);
                          NowTradeNum = EventTradeListViewItem__get_NowTradeNum(item, v53);
                          pickupSprite = j_il2cpp_value_box_0(int_TypeInfo, &NowTradeNum);
                          v54 = item->fields._TradeInfo_k__BackingField;
                          if ( v54 )
                          {
                            v55 = (Il2CppObject *)pickupSprite;
                            v107 = v54->fields.maxTradeNum;
                            v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v107);
                            pickupSprite = (__int64)System_String__Format_62415592(v52, v55, v56, 0LL);
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
                                  v57 = item->fields._TradeInfo_k__BackingField;
                                  if ( v57
                                    && (v57->fields.getNum >= 1
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
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v58);
                                    v60 = LocalizationManager__Get((System_String_o *)StringLiteral_13563/*"TRADE_EVENT_REWARD_AVAILABLE_NUM_MESSAGE"*/, 0LL);
                                    NowTradeNum = EventTradeListViewItem__get_NowCompleteNum(item, v61);
                                    v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &NowTradeNum);
                                    pickupSprite = (__int64)System_String__Format(v60, v62, 0LL);
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
                                    if ( EventTradeListViewItem__get_IsRefillable(item, v84) )
                                      v85 = !EventTradeListViewItem__get_IsEventEnd(item, (const MethodInfo *)item);
                                    else
                                      LOBYTE(v85) = 0;
                                    pickupSprite = (__int64)this->fields.replenishmentButton;
                                    if ( !pickupSprite )
                                      goto LABEL_130;
                                    pickupSprite = (*(__int64 (__fastcall **)(__int64, _BOOL4, _QWORD))(*(_QWORD *)pickupSprite + 392LL))(
                                                     pickupSprite,
                                                     v85,
                                                     *(_QWORD *)(*(_QWORD *)pickupSprite + 400LL));
                                  }
                                  v86 = item->fields._TradeInfo_k__BackingField;
                                  if ( !v86 )
                                    goto LABEL_130;
                                  startedAt = v86->fields.startedAt;
                                  TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
                                  tradeNum = v86->fields.tradeNum;
                                  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, item);
                                  TradeFinishTime = EventTradeTimeCalculation__GetTradeFinishTime(
                                                      TradeGoodsEntity_k__BackingField,
                                                      tradeNum,
                                                      startedAt,
                                                      0LL);
                                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v90);
                                  v92 = TradeFinishTime + startedAt - NetworkManager__getTime(0LL);
                                  pickupSprite = EventTradeListViewItem__get_NowTradeNum(item, v93);
                                  tradeCompleteLabel = (UILabel_o *)this->fields.tradeCompleteLabel;
                                  if ( (int)pickupSprite <= 0 )
                                  {
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
                                    pickupSprite = (__int64)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_13570/*"TRADE_EVENT_TRADE_COMPLETE"*/,
                                                              0LL);
                                    if ( !tradeCompleteLabel )
                                      goto LABEL_130;
                                    UILabel__set_text(tradeCompleteLabel, (System_String_o *)pickupSprite, 0LL);
                                    timeLeftLabel = this->fields.timeLeftLabel;
                                    pickupSprite = (__int64)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_13571/*"TRADE_EVENT_TRADE_COMPLETE_TIME"*/,
                                                              0LL);
                                    if ( !timeLeftLabel )
                                      goto LABEL_130;
                                    UILabel__set_text(timeLeftLabel, (System_String_o *)pickupSprite, 0LL);
                                    EventId_k__BackingField = item->fields._EventId_k__BackingField;
                                    tradingStateSprite = this->fields.tradingStateSprite;
                                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v102);
                                    v100 = &StringLiteral_20408/*"icon_trade_compleate"*/;
                                  }
                                  else
                                  {
                                    if ( !tradeCompleteLabel )
                                      goto LABEL_130;
                                    UILabel__set_text(
                                      (UILabel_o *)this->fields.tradeCompleteLabel,
                                      string_TypeInfo->static_fields->Empty,
                                      0LL);
                                    v96 = this->fields.timeLeftLabel;
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v95);
                                    pickupSprite = (__int64)LocalizationManager__GetRestTimeInFormat(
                                                              v92,
                                                              0LL,
                                                              (System_String_o *)StringLiteral_25330/*"{0}:{1:D2}:{2:D2}"*/,
                                                              0LL);
                                    if ( !v96 )
                                      goto LABEL_130;
                                    UILabel__set_text(v96, (System_String_o *)pickupSprite, 0LL);
                                    EventId_k__BackingField = item->fields._EventId_k__BackingField;
                                    tradingStateSprite = this->fields.tradingStateSprite;
                                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v97);
                                    v100 = &StringLiteral_20409/*"icon_trade_intrade"*/;
                                  }
                                  AtlasManager__SetEventUI_38574572(
                                    EventId_k__BackingField,
                                    tradingStateSprite,
                                    (System_String_o *)*v100,
                                    0LL);
                                  v103 = 0.92157;
                                  pickupSprite = (__int64)this->fields.timeLeftLabel;
                                  if ( v92 >= 3600 )
                                    v104 = 0.015686;
                                  else
                                    v104 = 0.0;
                                  if ( v92 < 3600 )
                                    v103 = 0.0;
                                  if ( pickupSprite )
                                  {
                                    v105 = 1.0;
                                    v106 = 1.0;
                                    UIWidget__set_color(
                                      (UIWidget_o *)pickupSprite,
                                      *(UnityEngine_Color_o *)(&v103 - 1),
                                      0LL);
                                    pickupSprite = (__int64)this->fields.tradingStateSprite;
                                    if ( pickupSprite )
                                    {
                                      pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)pickupSprite,
                                                                0LL);
                                      if ( pickupSprite )
                                      {
                                        v83 = 1;
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
                        v111.fields.a = (float)HIBYTE(rgba) / 255.0;
                        v111.fields.b = (float)BYTE2(rgba) / 255.0;
                        v111.fields.g = (float)BYTE1(rgba) / 255.0;
                        v111.fields.r = (float)(unsigned __int8)rgba / 255.0;
                        UILabel__set_effectColor((UILabel_o *)pickupSprite, v111, 0LL);
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
                                              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v64);
                                            pickupSprite = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTradePickupMaster___);
                                            v65 = item->fields._TradeGoodsEntity_k__BackingField;
                                            if ( v65 )
                                            {
                                              v66 = (EventTradePickupMaster_o *)pickupSprite;
                                              id = v65->fields.id;
                                              eventId = v65->fields.eventId;
                                              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                                                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, item);
                                              pickupSprite = NetworkManager__getTime(0LL);
                                              if ( v66 )
                                              {
                                                pickupSprite = EventTradePickupMaster__TryGetEntityTargetTime(
                                                                 v66,
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
                                                    j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo, item);
                                                    pickupSprite = (__int64)EventTradePickupMaster_TypeInfo;
                                                  }
                                                  p_tradeTimeRate = *(int32_t **)(pickupSprite + 184);
                                                }
                                                v70 = item->fields._TradeGoodsEntity_k__BackingField;
                                                if ( v70 )
                                                {
                                                  v71 = EventTradePickupMaster_TypeInfo;
                                                  v72 = *p_tradeTimeRate;
                                                  tradeTime = v70->fields.tradeTime;
                                                  if ( !EventTradePickupMaster_TypeInfo->_2.cctor_finished )
                                                  {
                                                    j_il2cpp_runtime_class_init_0(EventTradePickupMaster_TypeInfo, item);
                                                    v71 = EventTradePickupMaster_TypeInfo;
                                                  }
                                                  DEFAULT_EVENT_TRADE_TIME_RATE = v71->static_fields->DEFAULT_EVENT_TRADE_TIME_RATE;
                                                  if ( !System_Math_TypeInfo->_2.cctor_finished )
                                                    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, item);
                                                  v75 = ceil(
                                                          (double)(tradeTime * v72)
                                                        / (double)DEFAULT_EVENT_TRADE_TIME_RATE);
                                                  if ( !System_Convert_TypeInfo->_2.cctor_finished )
                                                    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, item);
                                                  v76 = System_Convert__ToInt64_63060120(v75, 0LL);
                                                  timeRequiredTrade = this->fields.timeRequiredTrade;
                                                  v79 = v76;
                                                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v77);
                                                  pickupSprite = (__int64)LocalizationManager__GetRestTimeInFormat(
                                                                            v79,
                                                                            0LL,
                                                                            (System_String_o *)StringLiteral_25330/*"{0}:{1:D2}:{2:D2}"*/,
                                                                            0LL);
                                                  if ( timeRequiredTrade )
                                                  {
                                                    UILabel__set_text(
                                                      timeRequiredTrade,
                                                      (System_String_o *)pickupSprite,
                                                      0LL);
                                                    EventTradeListViewItemDraw__DestroyAnimObj(this, v80);
                                                    if ( EventTradeListViewItem__get_IsBuyAble(item, v81) )
                                                    {
                                                      LOBYTE(v82) = item->fields._IsRelease_k__BackingField;
                                                      if ( v82 )
                                                        v82 = !EventTradeListViewItem__get_IsEventEnd(
                                                                 item,
                                                                 (const MethodInfo *)item);
                                                    }
                                                    else
                                                    {
                                                      LOBYTE(v82) = 0;
                                                    }
                                                    pickupSprite = (__int64)this->fields.tradeStartButton;
                                                    if ( pickupSprite )
                                                    {
                                                      (*(void (__fastcall **)(__int64, _BOOL4, _QWORD))(*(_QWORD *)pickupSprite + 392LL))(
                                                        pickupSprite,
                                                        v82,
                                                        *(_QWORD *)(*(_QWORD *)pickupSprite + 400LL));
                                                      pickupSprite = (__int64)this->fields.tradingStateSprite;
                                                      if ( pickupSprite )
                                                      {
                                                        pickupSprite = (__int64)UnityEngine_Component__get_gameObject(
                                                                                  (UnityEngine_Component_o *)pickupSprite,
                                                                                  0LL);
                                                        if ( pickupSprite )
                                                        {
                                                          v83 = 0;
LABEL_128:
                                                          UnityEngine_GameObject__SetActive(
                                                            (UnityEngine_GameObject_o *)pickupSprite,
                                                            v83,
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
    sub_1BCAA3C(pickupSprite, item);
  }
}


void __fastcall EventTradeListViewItemDraw__UpdateSweetsAnim(
        EventTradeListViewItemDraw_o *this,
        EventTradeListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  EventTradeListViewItemDraw___c_c *v12; // x0
  System_Collections_Generic_IEnumerable_T__o *sweetsAnimSpriteArray; // x21
  System_Action_object__o *_9__45_0; // x22
  Il2CppObject *v15; // x23
  struct EventTradeListViewItemDraw___c_StaticFields *static_fields; // x0
  UnityEngine_GameObject_o *NowTradeNum; // x0
  const MethodInfo *v18; // x1
  int v19; // w21
  struct UISprite_array *v20; // x8
  const MethodInfo *v21; // x1

  if ( (byte_4B11282 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_UISprite__TypeInfo, item, method);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_UISprite___, v6, v7);
    sub_1BCA7E0(&Method_EventTradeListViewItemDraw___c__UpdateSweetsAnim_b__45_0__, v8, v9);
    sub_1BCA7E0(&EventTradeListViewItemDraw___c_TypeInfo, v10, v11);
    byte_4B11282 = 1;
  }
  v12 = EventTradeListViewItemDraw___c_TypeInfo;
  sweetsAnimSpriteArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.sweetsAnimSpriteArray;
  if ( !EventTradeListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemDraw___c_TypeInfo, item);
    v12 = EventTradeListViewItemDraw___c_TypeInfo;
  }
  _9__45_0 = (System_Action_object__o *)v12->static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12, item);
      v12 = EventTradeListViewItemDraw___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__45_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_UISprite__TypeInfo, item, method, v3);
    System_Action_object____ctor(_9__45_0, v15, Method_EventTradeListViewItemDraw___c__UpdateSweetsAnim_b__45_0__, 0LL);
    static_fields = EventTradeListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__45_0 = (struct System_Action_UISprite__o *)_9__45_0;
    sub_1BCA784(&static_fields->__9__45_0, _9__45_0);
  }
  BasicHelper__ForEach_object_(
    sweetsAnimSpriteArray,
    (System_Action_T__o *)_9__45_0,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_UISprite___);
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
      if ( v19 >= v20->max_length )
        sub_1BCAA44(NowTradeNum, v18);
      NowTradeNum = (UnityEngine_GameObject_o *)v20->m_Items[v19];
      if ( !NowTradeNum )
        break;
      NowTradeNum = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NowTradeNum, 0LL);
      if ( !NowTradeNum )
        break;
      UnityEngine_GameObject__SetActive(NowTradeNum, 1, 0LL);
      ++v19;
      NowTradeNum = (UnityEngine_GameObject_o *)EventTradeListViewItem__get_NowTradeNum(item, v21);
      if ( v19 >= (int)NowTradeNum )
        return;
    }
LABEL_18:
    sub_1BCAA3C(NowTradeNum, v18);
  }
}


void __fastcall EventTradeListViewItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B11284 & 1) == 0 )
  {
    sub_1BCA7E0(&EventTradeListViewItemDraw___c_TypeInfo, v1, v2);
    byte_4B11284 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventTradeListViewItemDraw___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventTradeListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct EventTradeListViewItemDraw___c_o *)v4;
  sub_1BCA784(EventTradeListViewItemDraw___c_TypeInfo->static_fields, v4);
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
    sub_1BCAA3C(this, sprite);
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
    sub_1BCAA3C(this, sprite);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct EventTradeListViewItem_o *item; // x8
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x9
  int32_t EventId_k__BackingField; // w20
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x21
  int32_t goodsIconId; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4B11285 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, sprite, method);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    this = (EventTradeListViewItemDraw___c__DisplayClass41_0_o *)sub_1BCA7E0(&StringLiteral_20412/*"icon_{0}"*/, v7, v8);
    byte_4B11285 = 1;
  }
  item = v4->fields.item;
  if ( !item || (TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField) == 0LL )
    sub_1BCAA3C(this, sprite);
  EventId_k__BackingField = item->fields._EventId_k__BackingField;
  goodsIconId = TradeGoodsEntity_k__BackingField->fields.goodsIconId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &goodsIconId);
  v14 = System_String__Format((System_String_o *)StringLiteral_20412/*"icon_{0}"*/, v12, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13);
  AtlasManager__SetEventUI_38574572(EventId_k__BackingField, sprite, v14, 0LL);
}