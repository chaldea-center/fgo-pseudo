void __fastcall EventTradeSweetsNumConfirmDialogComponent___ctor(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BD7537 & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BD7537 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventTradeSweetsNumConfirmDialogComponent__CallOnDecide(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  struct System_Action_int__int__int__o *onDecide; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8

  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    this->fields.onDecide = 0LL;
    v4 = sub_1C21DDC(&this->fields.onDecide, 0LL);
    tradeGoodsEntity = this->fields.tradeGoodsEntity;
    if ( !tradeGoodsEntity )
      sub_1C22094(v4, v5);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      (unsigned int)this->fields.storeIdx,
      (unsigned int)tradeGoodsEntity->fields.id,
      (unsigned int)this->fields.makeCount,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall EventTradeSweetsNumConfirmDialogComponent__Close(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4BD7533 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_EventTradeSweetsNumConfirmDialogComponent__Close_b__48_0__);
    byte_4BD7533 = 1;
  }
  this->fields.state = 4;
  v3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_EventTradeSweetsNumConfirmDialogComponent__Close_b__48_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
}


void __fastcall EventTradeSweetsNumConfirmDialogComponent__EndOpen(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


int32_t __fastcall EventTradeSweetsNumConfirmDialogComponent__GetItemSliderMax(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UserItemMaster_o *Master_object; // x0
  __int64 v4; // x1
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  int max; // w22
  UserItemMaster_o *v7; // x20
  __int64 v8; // x23
  struct CommonConsumeEntity_array *v9; // x8
  CommonConsumeEntity_o *v10; // x8
  CommonConsumeEntity_o *v11; // x10
  int32_t num; // w9
  int32_t v13; // w10
  struct System_Boolean_array *isShortage; // x11
  struct System_Boolean_array *v15; // x8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BD752F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD752F = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserItemMaster___);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
LABEL_32:
    sub_1C22094(Master_object, v4);
  max = this->fields.max;
  v7 = Master_object;
  v8 = 0LL;
  while ( (int)v8 < (signed int)exchangeOriginItemList->max_length )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
    }
    Master_object = (UserItemMaster_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (UserItemMaster_o *)NetworkManager_TypeInfo;
    }
    v9 = this->fields.exchangeOriginItemList;
    if ( !v9 )
      goto LABEL_32;
    if ( (unsigned int)v8 >= v9->max_length )
      goto LABEL_34;
    v10 = v9->m_Items[v8];
    if ( !v10 || !v7 )
      goto LABEL_32;
    Master_object = (UserItemMaster_o *)UserItemMaster__TryGetEntity(
                                          v7,
                                          &entity,
                                          (int64_t)Master_object[2].fields.list[1].monitor,
                                          v10->fields.objectId,
                                          0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_32;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_32;
      if ( (unsigned int)v8 >= exchangeOriginItemList->max_length )
        goto LABEL_34;
      v11 = exchangeOriginItemList->m_Items[v8];
      if ( !v11 )
        goto LABEL_32;
      num = entity->fields.num;
      v13 = v11->fields.num;
      isShortage = this->fields.isShortage;
      if ( max >= num / v13 )
        max = num / v13;
      if ( !isShortage )
        goto LABEL_32;
      if ( (unsigned int)v8 >= isShortage->max_length )
        goto LABEL_34;
      isShortage->m_Items[v8 + 4] = v13 > num;
    }
    else
    {
      v15 = this->fields.isShortage;
      if ( !v15 )
        goto LABEL_32;
      if ( (unsigned int)v8 >= v15->max_length )
LABEL_34:
        sub_1C2209C(Master_object, v4);
      v15->m_Items[v8 + 4] = 1;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      max = 0;
    }
    ++v8;
    if ( !exchangeOriginItemList )
      goto LABEL_32;
  }
  return max;
}


void __fastcall EventTradeSweetsNumConfirmDialogComponent__Init(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C22094(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.tradeGoodsEntity = 0LL;
  sub_1C21DDC(&this->fields.tradeGoodsEntity, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventTradeSweetsNumConfirmDialogComponent__InitItemSlider(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int32_t makeCount; // w20
  UnityEngine_Component_o *itemSlider; // x0
  int32_t v5; // w1
  bool v6; // w2

  makeCount = this->fields.makeCount;
  if ( !makeCount )
  {
    itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
    if ( itemSlider )
    {
      itemSlider = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(itemSlider, 0LL);
      if ( itemSlider )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemSlider, 0, 0LL);
        itemSlider = (UnityEngine_Component_o *)this->fields.decideButton;
        if ( itemSlider )
        {
          ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))itemSlider->klass[1]._1.namespaze)(
            itemSlider,
            0LL,
            itemSlider->klass[1]._1.byval_arg.data);
          return;
        }
      }
    }
    goto LABEL_15;
  }
  itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_15;
  itemSlider = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(itemSlider, 0LL);
  if ( !itemSlider )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemSlider, 1, 0LL);
  itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_15;
  if ( makeCount != 1 )
  {
    UISliderWithButton__normalMode((UISliderWithButton_o *)itemSlider, 0LL);
    itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
    if ( itemSlider )
    {
      v5 = this->fields.makeCount;
      v6 = 1;
      goto LABEL_14;
    }
LABEL_15:
    sub_1C22094(itemSlider, method);
  }
  UISliderWithButton__grayMode((UISliderWithButton_o *)itemSlider, 0LL);
  itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_15;
  v5 = this->fields.makeCount;
  v6 = 0;
LABEL_14:
  UISliderWithButton__init((UISliderWithButton_o *)itemSlider, v5, v6, 1, 0LL);
}


int32_t __fastcall EventTradeSweetsNumConfirmDialogComponent__MakeCountAtLeast1(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        int32_t makeCount,
        const MethodInfo *method)
{
  if ( makeCount <= 1 )
    return 1;
  else
    return makeCount;
}


void __fastcall EventTradeSweetsNumConfirmDialogComponent__OnClickCancel(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4BD7532 & 1) == 0 )
  {
    sub_1C21E38(&Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__);
    byte_4BD7532 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1C22094(0LL, v5);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    EventTradeSweetsNumConfirmDialogComponent__Close(this, v7);
  }
}


void __fastcall EventTradeSweetsNumConfirmDialogComponent__OnClickDecide(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4BD7531 & 1) == 0 )
  {
    sub_1C21E38(&Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__);
    byte_4BD7531 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    EventTradeSweetsNumConfirmDialogComponent__CallOnDecide(this, v5);
  }
}


void __fastcall EventTradeSweetsNumConfirmDialogComponent__Open(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        EventTradeListViewItem_o *item,
        int32_t storeIdx,
        System_Action_int__int__int__o *onDecide,
        bool isReplenishment,
        const MethodInfo *method)
{
  EventTradeSweetsNumConfirmDialogComponent_o *v10; // x19
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x1
  EventTradeGoodsEntity_o **p_tradeGoodsEntity; // x22
  struct EventTradeInfo_o *v13; // x1
  struct EventTradeInfo_o **p_eventTradeInfo; // x23
  UILabel_o *titleLabel; // x24
  System_String_o **v16; // x8
  UILabel_o *detailLabel; // x24
  System_String_o **v18; // x8
  UILabel_o *cancelButtonLb; // x24
  UILabel_o *decideButtonLb; // x24
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8
  CommonConsumeEntity_array *SortedEntityList; // x0
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v24; // x0
  struct EventTradeInfo_o *v25; // x8
  int32_t tradeNum; // w27
  EventTradeGoodsEntity_o *v27; // x21
  int64_t startedAt; // x24
  const MethodInfo *v29; // x5
  struct EventTradeInfo_o *v30; // x8
  EventTradeSweetsNumConfirmDialogComponent_o *v31; // x23
  int32_t v32; // w25
  int v33; // w23
  EventTradeGoodsEntity_o *v34; // x21
  int32_t v35; // w21
  const MethodInfo *v36; // x1
  int32_t ItemSliderMax; // w22
  int32_t v38; // w0
  const MethodInfo *v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  struct EventTradeGoodsEntity_o *v43; // x8
  int32_t eventId; // w21
  UISprite_o *eventItemIcon; // x22
  Il2CppObject *v46; // x0
  System_String_o *v47; // x23
  UILabel_o *eventItemMakeNum; // x21
  System_String_o *v49; // x22
  Il2CppObject *v50; // x0
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x1
  System_Action_o *v53; // x20
  int32_t goodsIconId; // [xsp+Ch] [xbp-54h] BYREF

  v10 = this;
  if ( (byte_4BD752C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&bool___TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_EventTradeSweetsNumConfirmDialogComponent_EndOpen__);
    sub_1C21E38(&EventTradeTimeCalculation_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_13636/*"TRADE_EVENT_CONFIRM_DIALOG_TITLE"*/);
    sub_1C21E38(&StringLiteral_20553/*"icon_{0}"*/);
    sub_1C21E38(&StringLiteral_13633/*"TRADE_EVENT_CONFIRM_DIALOG_EXECUTE"*/);
    sub_1C21E38(&StringLiteral_8965/*"MULTIPLE_INFO"*/);
    sub_1C21E38(&StringLiteral_13652/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DESCRIPTION"*/);
    sub_1C21E38(&StringLiteral_3810/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C21E38(&StringLiteral_13654/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_TITLE"*/);
    this = (EventTradeSweetsNumConfirmDialogComponent_o *)sub_1C21E38(&StringLiteral_13631/*"TRADE_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/);
    byte_4BD752C = 1;
  }
  if ( !v10->fields.state )
  {
    if ( item )
    {
      TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
      p_tradeGoodsEntity = &v10->fields.tradeGoodsEntity;
      v10->fields.tradeGoodsEntity = TradeGoodsEntity_k__BackingField;
      sub_1C21DDC(&v10->fields.tradeGoodsEntity, TradeGoodsEntity_k__BackingField);
      v10->fields.onDecide = onDecide;
      sub_1C21DDC(&v10->fields.onDecide, onDecide);
      v10->fields.storeIdx = storeIdx;
      v10->fields.isReplenishment = isReplenishment;
      v13 = isReplenishment ? item->fields._TradeInfo_k__BackingField : 0LL;
      p_eventTradeInfo = &v10->fields.eventTradeInfo;
      v10->fields.eventTradeInfo = v13;
      sub_1C21DDC(&v10->fields.eventTradeInfo, v13);
      this = (EventTradeSweetsNumConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)v10,
                                                              0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        titleLabel = v10->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v16 = (System_String_o **)&StringLiteral_13654/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_TITLE"*/;
        if ( !isReplenishment )
          v16 = (System_String_o **)&StringLiteral_13636/*"TRADE_EVENT_CONFIRM_DIALOG_TITLE"*/;
        this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(*v16, 0LL);
        if ( titleLabel )
        {
          UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
          detailLabel = v10->fields.detailLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v18 = (System_String_o **)&StringLiteral_13652/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DESCRIPTION"*/;
          if ( !isReplenishment )
            v18 = (System_String_o **)&StringLiteral_13631/*"TRADE_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/;
          this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(*v18, 0LL);
          if ( detailLabel )
          {
            UILabel__set_text(detailLabel, (System_String_o *)this, 0LL);
            cancelButtonLb = v10->fields.cancelButtonLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_3810/*"COMMON_CONFIRM_CANCEL"*/,
                                                                    0LL);
            if ( cancelButtonLb )
            {
              UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0LL);
              decideButtonLb = v10->fields.decideButtonLb;
              this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_13633/*"TRADE_EVENT_CONFIRM_DIALOG_EXECUTE"*/,
                                                                      0LL);
              if ( decideButtonLb )
              {
                UILabel__set_text(decideButtonLb, (System_String_o *)this, 0LL);
                tradeGoodsEntity = v10->fields.tradeGoodsEntity;
                if ( tradeGoodsEntity )
                {
                  this = (EventTradeSweetsNumConfirmDialogComponent_o *)v10->fields.eventItemNameLabel;
                  if ( this )
                  {
                    UILabel__set_text((UILabel_o *)this, tradeGoodsEntity->fields.name, 0LL);
                    if ( !DataManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    this = (EventTradeSweetsNumConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
                    if ( *p_tradeGoodsEntity )
                    {
                      if ( this )
                      {
                        SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                                             (CommonConsumeMaster_o *)this,
                                             (*p_tradeGoodsEntity)->fields.commonConsumeId,
                                             0LL);
                        v10->fields.exchangeOriginItemList = SortedEntityList;
                        this = (EventTradeSweetsNumConfirmDialogComponent_o *)sub_1C21DDC(
                                                                                &v10->fields.exchangeOriginItemList,
                                                                                SortedEntityList);
                        exchangeOriginItemList = v10->fields.exchangeOriginItemList;
                        if ( exchangeOriginItemList )
                        {
                          v24 = sub_1C21EE0(bool___TypeInfo, exchangeOriginItemList->max_length);
                          v10->fields.isShortage = (struct System_Boolean_array *)v24;
                          this = (EventTradeSweetsNumConfirmDialogComponent_o *)sub_1C21DDC(
                                                                                  &v10->fields.isShortage,
                                                                                  v24);
                          if ( isReplenishment )
                          {
                            v25 = *p_eventTradeInfo;
                            if ( !*p_eventTradeInfo )
                              goto LABEL_51;
                            tradeNum = v25->fields.tradeNum;
                            v27 = *p_tradeGoodsEntity;
                            startedAt = v25->fields.startedAt;
                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                            this = (EventTradeSweetsNumConfirmDialogComponent_o *)NetworkManager__getTime(0LL);
                            v30 = *p_eventTradeInfo;
                            if ( !*p_eventTradeInfo )
                              goto LABEL_51;
                            v31 = this;
                            v32 = v30->fields.tradeNum;
                            if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
                            v33 = EventTradeTimeCalculation__GetCompleteNum_31671916(
                                    v27,
                                    startedAt,
                                    (int64_t)v31,
                                    v32,
                                    0,
                                    v29)
                                - tradeNum;
                          }
                          else
                          {
                            v33 = 0;
                          }
                          v34 = *p_tradeGoodsEntity;
                          if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
                          v35 = EventTradeTimeCalculation__GetTradeMaxNum(v34, (const MethodInfo *)item) + v33;
                          v10->fields.max = v35;
                          ItemSliderMax = EventTradeSweetsNumConfirmDialogComponent__GetItemSliderMax(v10, v36);
                          if ( !System_Math_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                          v38 = System_Math__Min_63934948(v35, ItemSliderMax, 0LL);
                          v10->fields.max = v38;
                          v10->fields.makeCount = v38;
                          EventTradeSweetsNumConfirmDialogComponent__InitItemSlider(v10, v39);
                          v43 = item->fields._TradeGoodsEntity_k__BackingField;
                          if ( v43 )
                          {
                            eventId = v10->fields.eventId;
                            eventItemIcon = v10->fields.eventItemIcon;
                            goodsIconId = v43->fields.goodsIconId;
                            v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &goodsIconId, v40, v41, v42);
                            v47 = System_String__Format((System_String_o *)StringLiteral_20553/*"icon_{0}"*/, v46, 0LL);
                            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                            AtlasManager__SetEventUI_39104396(eventId, eventItemIcon, v47, 0LL);
                            eventItemMakeNum = v10->fields.eventItemMakeNum;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v49 = LocalizationManager__Get((System_String_o *)StringLiteral_8965/*"MULTIPLE_INFO"*/, 0LL);
                            v50 = (Il2CppObject *)System_Int32__ToString((int)v10 + 312, 0LL);
                            this = (EventTradeSweetsNumConfirmDialogComponent_o *)System_String__Format(v49, v50, 0LL);
                            if ( eventItemMakeNum )
                            {
                              UILabel__set_text(eventItemMakeNum, (System_String_o *)this, 0LL);
                              EventTradeSweetsNumConfirmDialogComponent__SetExchangeBase(v10, v51);
                              EventTradeSweetsNumConfirmDialogComponent__SetTimeLabel(v10, v52);
                              v10->fields.state = 1;
                              v53 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                              System_Action___ctor(
                                v53,
                                (Il2CppObject *)v10,
                                Method_EventTradeSweetsNumConfirmDialogComponent_EndOpen__,
                                0LL);
                              BaseDialog__Open((BaseDialog_o *)v10, v53, 0, 0LL);
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
LABEL_51:
    sub_1C22094(this, item);
  }
}


void __fastcall EventTradeSweetsNumConfirmDialogComponent__SerializeFieldNotNullCheck(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeSweetsNumConfirmDialogComponent__SetExchangeBase(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *exchangeOriginLb; // x20
  CommonConsumeEntity_o *NumberFormat; // x0
  __int64 v5; // x1
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v7; // x9
  int v8; // w25
  struct UISprite_array *exchangeOriginItemIcon; // x10
  CommonConsumeEntity_o *v10; // x8
  UISprite_o *v11; // x20
  int32_t objectId; // w21
  struct CommonConsumeEntity_array *v13; // x8
  CommonConsumeEntity_o *v14; // x8
  int32_t num; // w20
  int32_t makeCount; // w21
  struct CommonConsumeEntity_array *v17; // x8
  Il2CppObject *v18; // x20
  int32_t HasNum; // w0
  struct UILabel_array *exchangeOriginCounts; // x8
  Il2CppObject *v21; // x21
  UILabel_o *v22; // x22
  System_String_o *v23; // x0
  struct UILabel_array *v24; // x8
  struct System_Boolean_array *isShortage; // x9
  float v26; // s1
  float v27; // s0
  float v28; // s3
  float v29; // s2
  unsigned int v30; // w25
  struct UISprite_array *exchangeOriginItemIcon2; // x10
  CommonConsumeEntity_o *v32; // x8
  UISprite_o *v33; // x20
  int32_t v34; // w21
  struct CommonConsumeEntity_array *v35; // x8
  CommonConsumeEntity_o *v36; // x8
  int32_t v37; // w20
  int32_t v38; // w21
  struct CommonConsumeEntity_array *v39; // x8
  Il2CppObject *v40; // x20
  int32_t v41; // w0
  struct UILabel_array *exchangeOriginCounts2; // x8
  Il2CppObject *v43; // x21
  UILabel_o *v44; // x22
  System_String_o *v45; // x0
  struct UILabel_array *v46; // x8
  struct System_Boolean_array *v47; // x9
  float v48; // s1
  float v49; // s0
  float v50; // s3
  float v51; // s2
  UILabel_o *exchangeDestinationLb; // x20
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8
  GiftEntity_array *GiftListById; // x20
  GiftEntity_o *v55; // x8
  UISprite_o *exchangeDestinationItemIcon; // x20
  int32_t klass; // w21
  struct EventTradeGoodsEntity_o *v58; // x8
  const MethodInfo *v59; // x1

  if ( (byte_4BD7530 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_13635/*"TRADE_EVENT_CONFIRM_DIALOG_ORIGIN_LABEL"*/);
    sub_1C21E38(&StringLiteral_13634/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/);
    sub_1C21E38(&StringLiteral_13632/*"TRADE_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/);
    byte_4BD7530 = 1;
  }
  exchangeOriginLb = this->fields.exchangeOriginLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13635/*"TRADE_EVENT_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0LL);
  if ( !exchangeOriginLb )
    goto LABEL_93;
  UILabel__set_text(exchangeOriginLb, (System_String_o *)NumberFormat, 0LL);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_93;
  v7 = *(_QWORD *)&exchangeOriginItemList->max_length;
  if ( (_DWORD)v7 == 3 )
  {
    v8 = 0;
    do
    {
      exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
      if ( !exchangeOriginItemIcon )
        goto LABEL_93;
      if ( v8 >= exchangeOriginItemIcon->max_length || v8 >= (unsigned int)v7 )
        goto LABEL_94;
      v10 = exchangeOriginItemList->m_Items[v8];
      if ( !v10 )
        goto LABEL_93;
      v11 = exchangeOriginItemIcon->m_Items[v8];
      objectId = v10->fields.objectId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      NumberFormat = (CommonConsumeEntity_o *)AtlasManager__SetItem(v11, objectId, 0LL);
      v13 = this->fields.exchangeOriginItemList;
      if ( !v13 )
        goto LABEL_93;
      if ( v8 >= v13->max_length )
        goto LABEL_94;
      v14 = v13->m_Items[v8];
      if ( !v14 )
        goto LABEL_93;
      num = v14->fields.num;
      if ( this->fields.makeCount <= 1 )
        makeCount = 1;
      else
        makeCount = this->fields.makeCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(makeCount * num, 0LL);
      v17 = this->fields.exchangeOriginItemList;
      if ( !v17 )
        goto LABEL_93;
      if ( v8 >= v17->max_length )
        goto LABEL_94;
      v18 = (Il2CppObject *)NumberFormat;
      NumberFormat = v17->m_Items[v8];
      if ( !NumberFormat )
        goto LABEL_93;
      HasNum = CommonConsumeEntity__GetUserHasNum(NumberFormat, 0LL);
      NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(HasNum, 0LL);
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_93;
      if ( v8 >= exchangeOriginCounts->max_length )
        goto LABEL_94;
      v21 = (Il2CppObject *)NumberFormat;
      v22 = exchangeOriginCounts->m_Items[v8];
      v23 = LocalizationManager__Get((System_String_o *)StringLiteral_13634/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0LL);
      NumberFormat = (CommonConsumeEntity_o *)System_String__Format_63129848(v23, v18, v21, 0LL);
      if ( !v22 )
        goto LABEL_93;
      UILabel__set_text(v22, (System_String_o *)NumberFormat, 0LL);
      v24 = this->fields.exchangeOriginCounts;
      if ( !v24 )
        goto LABEL_93;
      if ( v8 >= v24->max_length )
        goto LABEL_94;
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_93;
      if ( v8 >= isShortage->max_length )
        goto LABEL_94;
      NumberFormat = (CommonConsumeEntity_o *)v24->m_Items[v8];
      v26 = isShortage->m_Items[v8 + 4] ? 0.0 : 1.0;
      if ( !NumberFormat )
        goto LABEL_93;
      v27 = 1.0;
      v28 = 1.0;
      v29 = v26;
      UIWidget__set_color((UIWidget_o *)NumberFormat, *(UnityEngine_Color_o *)(&v26 - 1), 0LL);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_93;
      LODWORD(v7) = exchangeOriginItemList->max_length;
      ++v8;
    }
    while ( v8 < (int)v7 );
    NumberFormat = (CommonConsumeEntity_o *)this->fields.exchangeOriginDisplayObject;
    if ( !NumberFormat )
      goto LABEL_93;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0LL);
    NumberFormat = (CommonConsumeEntity_o *)this->fields.exchangeOriginDisplayObject2;
    if ( !NumberFormat )
      goto LABEL_93;
  }
  else
  {
    if ( (int)v7 >= 1 )
    {
      v30 = 0;
      while ( 1 )
      {
        exchangeOriginItemIcon2 = this->fields.exchangeOriginItemIcon2;
        if ( !exchangeOriginItemIcon2 )
          break;
        if ( v30 >= exchangeOriginItemIcon2->max_length || v30 >= (unsigned int)v7 )
          goto LABEL_94;
        v32 = exchangeOriginItemList->m_Items[v30];
        if ( !v32 )
          break;
        v33 = exchangeOriginItemIcon2->m_Items[v30];
        v34 = v32->fields.objectId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        NumberFormat = (CommonConsumeEntity_o *)AtlasManager__SetItem(v33, v34, 0LL);
        v35 = this->fields.exchangeOriginItemList;
        if ( !v35 )
          break;
        if ( v30 >= v35->max_length )
          goto LABEL_94;
        v36 = v35->m_Items[v30];
        if ( !v36 )
          break;
        v37 = v36->fields.num;
        if ( this->fields.makeCount <= 1 )
          v38 = 1;
        else
          v38 = this->fields.makeCount;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(v38 * v37, 0LL);
        v39 = this->fields.exchangeOriginItemList;
        if ( !v39 )
          break;
        if ( v30 >= v39->max_length )
          goto LABEL_94;
        v40 = (Il2CppObject *)NumberFormat;
        NumberFormat = v39->m_Items[v30];
        if ( !NumberFormat )
          break;
        v41 = CommonConsumeEntity__GetUserHasNum(NumberFormat, 0LL);
        NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(v41, 0LL);
        exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
        if ( !exchangeOriginCounts2 )
          break;
        if ( v30 >= exchangeOriginCounts2->max_length )
          goto LABEL_94;
        v43 = (Il2CppObject *)NumberFormat;
        v44 = exchangeOriginCounts2->m_Items[v30];
        v45 = LocalizationManager__Get((System_String_o *)StringLiteral_13634/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0LL);
        NumberFormat = (CommonConsumeEntity_o *)System_String__Format_63129848(v45, v40, v43, 0LL);
        if ( !v44 )
          break;
        UILabel__set_text(v44, (System_String_o *)NumberFormat, 0LL);
        v46 = this->fields.exchangeOriginCounts2;
        if ( !v46 )
          break;
        if ( v30 >= v46->max_length )
          goto LABEL_94;
        v47 = this->fields.isShortage;
        if ( !v47 )
          break;
        if ( v30 >= v47->max_length )
          goto LABEL_94;
        NumberFormat = (CommonConsumeEntity_o *)v46->m_Items[v30];
        v48 = v47->m_Items[v30 + 4] ? 0.0 : 1.0;
        if ( !NumberFormat )
          break;
        v49 = 1.0;
        v50 = 1.0;
        v51 = v48;
        UIWidget__set_color((UIWidget_o *)NumberFormat, *(UnityEngine_Color_o *)(&v48 - 1), 0LL);
        exchangeOriginItemList = this->fields.exchangeOriginItemList;
        if ( !exchangeOriginItemList )
          break;
        LODWORD(v7) = exchangeOriginItemList->max_length;
        if ( (int)++v30 >= (int)v7 )
          goto LABEL_74;
      }
LABEL_93:
      sub_1C22094(NumberFormat, v5);
    }
LABEL_74:
    NumberFormat = (CommonConsumeEntity_o *)this->fields.exchangeOriginDisplayObject2;
    if ( !NumberFormat )
      goto LABEL_93;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0LL);
    NumberFormat = (CommonConsumeEntity_o *)this->fields.exchangeOriginDisplayObject;
    if ( !NumberFormat )
      goto LABEL_93;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 0, 0LL);
  exchangeDestinationLb = this->fields.exchangeDestinationLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13632/*"TRADE_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/, 0LL);
  if ( !exchangeDestinationLb )
    goto LABEL_93;
  UILabel__set_text(exchangeDestinationLb, (System_String_o *)NumberFormat, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  NumberFormat = (CommonConsumeEntity_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GiftMaster___);
  tradeGoodsEntity = this->fields.tradeGoodsEntity;
  if ( !tradeGoodsEntity )
    goto LABEL_93;
  if ( !NumberFormat )
    goto LABEL_93;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)NumberFormat, tradeGoodsEntity->fields.giftId, 0LL);
  NumberFormat = (CommonConsumeEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NumberFormat )
    goto LABEL_93;
  NumberFormat = (CommonConsumeEntity_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)NumberFormat,
                                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !GiftListById )
    goto LABEL_93;
  if ( !GiftListById->max_length )
LABEL_94:
    sub_1C2209C(NumberFormat, v5);
  v55 = GiftListById->m_Items[0];
  if ( !v55 )
    goto LABEL_93;
  if ( !NumberFormat )
    goto LABEL_93;
  NumberFormat = (CommonConsumeEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)NumberFormat,
                                            v55->fields.objectId,
                                            (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !NumberFormat )
    goto LABEL_93;
  exchangeDestinationItemIcon = this->fields.exchangeDestinationItemIcon;
  klass = (int32_t)NumberFormat[1].klass;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  NumberFormat = (CommonConsumeEntity_o *)AtlasManager__SetItem(exchangeDestinationItemIcon, klass, 0LL);
  v58 = this->fields.tradeGoodsEntity;
  if ( !v58 )
    goto LABEL_93;
  AtlasManager__SetItem(this->fields.exchangeDestinationPointIcon, v58->fields.eventPointItemId, 0LL);
  EventTradeSweetsNumConfirmDialogComponent__SetRewardCount(this, v59);
}


void __fastcall EventTradeSweetsNumConfirmDialogComponent__SetRewardCount(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _BOOL4 isReplenishment; // w21
  System_String_o *v4; // x20
  UILabel_o *exchangeDestinationPointCount; // x0
  __int64 v6; // x1
  struct EventTradeInfo_o *eventTradeInfo; // x8
  System_String_o *v8; // x21
  Il2CppObject *NumberFormat; // x22
  int32_t v10; // w0
  Il2CppObject *v11; // x0
  Il2CppObject *v12; // x0
  System_String_o *v13; // x20
  System_String_o *v14; // x21
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8
  struct EventTradeInfo_o *v16; // x9
  System_String_o *v17; // x22
  struct EventTradeGoodsEntity_o *v18; // x8
  int32_t makeCount; // w9
  int32_t eventPointNum; // w8
  Il2CppObject *v21; // x23
  Il2CppObject *v22; // x0
  Il2CppObject *v23; // x0
  int32_t v24; // w0
  Il2CppObject *v25; // x0
  struct EventTradeGoodsEntity_o *v26; // x8
  int32_t v27; // w9
  int32_t v28; // w8
  System_String_o *v29; // x21

  if ( (byte_4BD7536 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_8965/*"MULTIPLE_INFO"*/);
    sub_1C21E38(&StringLiteral_13653/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/);
    byte_4BD7536 = 1;
  }
  isReplenishment = this->fields.isReplenishment;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8965/*"MULTIPLE_INFO"*/, 0LL);
  if ( isReplenishment )
  {
    exchangeDestinationPointCount = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13653/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/, 0LL);
    eventTradeInfo = this->fields.eventTradeInfo;
    if ( eventTradeInfo )
    {
      v8 = (System_String_o *)exchangeDestinationPointCount;
      NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(eventTradeInfo->fields.tradeNum, 0LL);
      v10 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
      v11 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v10, 0LL);
      v12 = (Il2CppObject *)System_String__Format_63129848(v8, NumberFormat, v11, 0LL);
      v13 = System_String__Format(v4, v12, 0LL);
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_8965/*"MULTIPLE_INFO"*/, 0LL);
      exchangeDestinationPointCount = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13653/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/, 0LL);
      tradeGoodsEntity = this->fields.tradeGoodsEntity;
      if ( tradeGoodsEntity )
      {
        v16 = this->fields.eventTradeInfo;
        if ( v16 )
        {
          v17 = (System_String_o *)exchangeDestinationPointCount;
          exchangeDestinationPointCount = (UILabel_o *)LocalizationManager__GetNumberFormat(
                                                         v16->fields.tradeNum * tradeGoodsEntity->fields.eventPointNum,
                                                         0LL);
          v18 = this->fields.tradeGoodsEntity;
          if ( v18 )
          {
            makeCount = this->fields.makeCount;
            eventPointNum = v18->fields.eventPointNum;
            v21 = (Il2CppObject *)exchangeDestinationPointCount;
            if ( makeCount <= 1 )
              makeCount = 1;
            v22 = (Il2CppObject *)LocalizationManager__GetNumberFormat(makeCount * eventPointNum, 0LL);
            v23 = (Il2CppObject *)System_String__Format_63129848(v17, v21, v22, 0LL);
            goto LABEL_23;
          }
        }
      }
    }
LABEL_26:
    sub_1C22094(exchangeDestinationPointCount, v6);
  }
  if ( this->fields.makeCount <= 1 )
    v24 = 1;
  else
    v24 = this->fields.makeCount;
  v25 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v24, 0LL);
  v13 = System_String__Format(v4, v25, 0LL);
  exchangeDestinationPointCount = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8965/*"MULTIPLE_INFO"*/, 0LL);
  v26 = this->fields.tradeGoodsEntity;
  if ( !v26 )
    goto LABEL_26;
  v27 = this->fields.makeCount;
  v28 = v26->fields.eventPointNum;
  v14 = (System_String_o *)exchangeDestinationPointCount;
  if ( v27 <= 1 )
    v27 = 1;
  v23 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v27 * v28, 0LL);
LABEL_23:
  exchangeDestinationPointCount = (UILabel_o *)System_String__Format(v14, v23, 0LL);
  if ( !this->fields.exchangeDestinationItemCount )
    goto LABEL_26;
  v29 = (System_String_o *)exchangeDestinationPointCount;
  UILabel__set_text(this->fields.exchangeDestinationItemCount, v13, 0LL);
  exchangeDestinationPointCount = this->fields.exchangeDestinationPointCount;
  if ( !exchangeDestinationPointCount )
    goto LABEL_26;
  UILabel__set_text(exchangeDestinationPointCount, v29, 0LL);
}


void __fastcall EventTradeSweetsNumConfirmDialogComponent__SetTimeLabel(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  EventTradeSweetsNumConfirmDialogComponent_o *v3; // x19
  struct EventTradeInfo_o *eventTradeInfo; // x8
  EventTradeGoodsEntity_o *v5; // x22
  int32_t tradeNum; // w20
  int64_t startedAt; // x21
  const MethodInfo *v8; // x3
  struct EventTradeInfo_o *v9; // x8
  char *v10; // x22
  int64_t v11; // x0
  UILabel_o *v12; // x19
  int64_t v13; // x21
  System_String_o *v14; // x20
  int64_t Time; // x23
  int64_t v16; // x0
  System_String_o *v17; // x22
  System_String_o *v18; // x23
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  Il2CppObject *v21; // x0
  EventTradeSweetsNumConfirmDialogComponent_o *v22; // x1
  UILabel_o *v23; // x0
  UILabel_o *tradeCompletionTimeLabel; // x20
  System_String_o *v25; // x0
  const MethodInfo *v26; // x3
  EventTradeGoodsEntity_o *tradeGoodsEntity; // x21
  int32_t makeCount; // w22
  System_String_o *v29; // x19
  int64_t TradeFinishTime; // x0
  Il2CppObject *RestTimeInFormat; // x0

  v3 = this;
  if ( (byte_4BD752D & 1) == 0 )
  {
    sub_1C21E38(&EventTradeTimeCalculation_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_13624/*"TRADE_EVENT_ADD_TIME_LABEL"*/);
    sub_1C21E38(&StringLiteral_13630/*"TRADE_EVENT_COMPLETION_TIME_LABEL"*/);
    this = (EventTradeSweetsNumConfirmDialogComponent_o *)sub_1C21E38(&StringLiteral_25369/*"{0,2}:{1:D2}:{2:D2}"*/);
    byte_4BD752D = 1;
  }
  if ( !v3->fields.isReplenishment )
  {
    tradeCompletionTimeLabel = v3->fields.tradeCompletionTimeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_13630/*"TRADE_EVENT_COMPLETION_TIME_LABEL"*/, 0LL);
    tradeGoodsEntity = v3->fields.tradeGoodsEntity;
    makeCount = v3->fields.makeCount;
    v29 = v25;
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    TradeFinishTime = EventTradeTimeCalculation__GetTradeFinishTime(tradeGoodsEntity, makeCount, -1LL, v26);
    RestTimeInFormat = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(
                                         TradeFinishTime,
                                         0LL,
                                         (System_String_o *)StringLiteral_25369/*"{0,2}:{1:D2}:{2:D2}"*/,
                                         0LL);
    this = (EventTradeSweetsNumConfirmDialogComponent_o *)System_String__Format(v29, RestTimeInFormat, 0LL);
    if ( tradeCompletionTimeLabel )
    {
      v22 = this;
      v23 = tradeCompletionTimeLabel;
      goto LABEL_22;
    }
LABEL_23:
    sub_1C22094(this, method);
  }
  eventTradeInfo = v3->fields.eventTradeInfo;
  if ( !eventTradeInfo )
    goto LABEL_23;
  v5 = v3->fields.tradeGoodsEntity;
  tradeNum = eventTradeInfo->fields.tradeNum;
  startedAt = eventTradeInfo->fields.startedAt;
  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
  this = (EventTradeSweetsNumConfirmDialogComponent_o *)EventTradeTimeCalculation__GetTradeFinishTime(
                                                          v5,
                                                          tradeNum,
                                                          startedAt,
                                                          v2);
  v9 = v3->fields.eventTradeInfo;
  if ( !v9 )
    goto LABEL_23;
  v10 = (char *)this + v9->fields.startedAt;
  v11 = EventTradeTimeCalculation__GetTradeFinishTime(
          v3->fields.tradeGoodsEntity,
          v3->fields.makeCount,
          (int64_t)v10,
          v8);
  v12 = v3->fields.tradeCompletionTimeLabel;
  v13 = v11;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_13630/*"TRADE_EVENT_COMPLETION_TIME_LABEL"*/, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v16 = System_Math__Max_63934632((int64_t)&v10[-Time], 0LL, 0LL);
  v17 = LocalizationManager__GetRestTimeInFormat(v16 + v13, 0LL, (System_String_o *)StringLiteral_25369/*"{0,2}:{1:D2}:{2:D2}"*/, 0LL);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_13624/*"TRADE_EVENT_ADD_TIME_LABEL"*/, 0LL);
  v19 = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(v13, 0LL, (System_String_o *)StringLiteral_25369/*"{0,2}:{1:D2}:{2:D2}"*/, 0LL);
  v20 = System_String__Format(v18, v19, 0LL);
  v21 = (Il2CppObject *)System_String__Concat_63115476(v17, v20, 0LL);
  this = (EventTradeSweetsNumConfirmDialogComponent_o *)System_String__Format(v14, v21, 0LL);
  if ( !v12 )
    goto LABEL_23;
  v22 = this;
  v23 = v12;
LABEL_22:
  UILabel__set_text(v23, (System_String_o *)v22, 0LL);
}


void __fastcall EventTradeSweetsNumConfirmDialogComponent__SliderValueChange(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  CommonConsumeEntity_o *itemSlider; // x0
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  __int64 v5; // x9
  signed int v6; // w10
  __int64 v7; // x25
  CommonConsumeEntity_o *v8; // x8
  int32_t num; // w20
  int v10; // w21
  struct CommonConsumeEntity_array *v11; // x8
  Il2CppObject *v12; // x20
  int32_t HasNum; // w0
  struct UILabel_array *exchangeOriginCounts; // x8
  Il2CppObject *v15; // x21
  UILabel_o *v16; // x22
  System_String_o *v17; // x0
  signed int v18; // w10
  __int64 v19; // x25
  CommonConsumeEntity_o *v20; // x8
  int32_t v21; // w20
  int32_t makeCount; // w21
  struct CommonConsumeEntity_array *v23; // x8
  Il2CppObject *v24; // x20
  int32_t v25; // w0
  struct UILabel_array *exchangeOriginCounts2; // x8
  Il2CppObject *v27; // x21
  UILabel_o *v28; // x22
  System_String_o *v29; // x0
  const MethodInfo *v30; // x1

  if ( (byte_4BD7535 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_13634/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/);
    byte_4BD7535 = 1;
  }
  itemSlider = (CommonConsumeEntity_o *)this->fields.itemSlider;
  if ( !itemSlider
    || (itemSlider = (CommonConsumeEntity_o *)UISliderWithButton__sliderValueChange(
                                                (UISliderWithButton_o *)itemSlider,
                                                0LL),
        exchangeOriginItemList = this->fields.exchangeOriginItemList,
        this->fields.makeCount = (int)itemSlider,
        !exchangeOriginItemList) )
  {
LABEL_41:
    sub_1C22094(itemSlider, method);
  }
  v5 = *(_QWORD *)&exchangeOriginItemList->max_length;
  if ( (_DWORD)v5 == 3 )
  {
    v6 = 0;
    while ( v6 < (unsigned int)v5 )
    {
      v7 = v6;
      v8 = exchangeOriginItemList->m_Items[v6];
      if ( !v8 )
        goto LABEL_41;
      num = v8->fields.num;
      v10 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      itemSlider = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(v10 * num, 0LL);
      v11 = this->fields.exchangeOriginItemList;
      if ( !v11 )
        goto LABEL_41;
      if ( (unsigned int)v7 >= v11->max_length )
        goto LABEL_42;
      v12 = (Il2CppObject *)itemSlider;
      itemSlider = v11->m_Items[v7];
      if ( !itemSlider )
        goto LABEL_41;
      HasNum = CommonConsumeEntity__GetUserHasNum(itemSlider, 0LL);
      itemSlider = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(HasNum, 0LL);
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_41;
      if ( (unsigned int)v7 >= exchangeOriginCounts->max_length )
        goto LABEL_42;
      v15 = (Il2CppObject *)itemSlider;
      v16 = exchangeOriginCounts->m_Items[v7];
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_13634/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0LL);
      itemSlider = (CommonConsumeEntity_o *)System_String__Format_63129848(v17, v12, v15, 0LL);
      if ( !v16 )
        goto LABEL_41;
      UILabel__set_text(v16, (System_String_o *)itemSlider, 0LL);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_41;
      LODWORD(v5) = exchangeOriginItemList->max_length;
      v6 = v7 + 1;
      if ( (int)v7 + 1 >= (int)v5 )
        goto LABEL_40;
    }
    goto LABEL_42;
  }
  if ( (int)v5 >= 1 )
  {
    v18 = 0;
    while ( v18 < (unsigned int)v5 )
    {
      v19 = v18;
      v20 = exchangeOriginItemList->m_Items[v18];
      if ( !v20 )
        goto LABEL_41;
      v21 = v20->fields.num;
      if ( this->fields.makeCount <= 1 )
        makeCount = 1;
      else
        makeCount = this->fields.makeCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      itemSlider = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(makeCount * v21, 0LL);
      v23 = this->fields.exchangeOriginItemList;
      if ( !v23 )
        goto LABEL_41;
      if ( (unsigned int)v19 >= v23->max_length )
        break;
      v24 = (Il2CppObject *)itemSlider;
      itemSlider = v23->m_Items[v19];
      if ( !itemSlider )
        goto LABEL_41;
      v25 = CommonConsumeEntity__GetUserHasNum(itemSlider, 0LL);
      itemSlider = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(v25, 0LL);
      exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
      if ( !exchangeOriginCounts2 )
        goto LABEL_41;
      if ( (unsigned int)v19 >= exchangeOriginCounts2->max_length )
        break;
      v27 = (Il2CppObject *)itemSlider;
      v28 = exchangeOriginCounts2->m_Items[v19];
      v29 = LocalizationManager__Get((System_String_o *)StringLiteral_13634/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0LL);
      itemSlider = (CommonConsumeEntity_o *)System_String__Format_63129848(v29, v24, v27, 0LL);
      if ( !v28 )
        goto LABEL_41;
      UILabel__set_text(v28, (System_String_o *)itemSlider, 0LL);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_41;
      LODWORD(v5) = exchangeOriginItemList->max_length;
      v18 = v19 + 1;
      if ( (int)v19 + 1 >= (int)v5 )
        goto LABEL_40;
    }
LABEL_42:
    sub_1C2209C(itemSlider, method);
  }
LABEL_40:
  EventTradeSweetsNumConfirmDialogComponent__SetRewardCount(this, method);
  EventTradeSweetsNumConfirmDialogComponent__SetTimeLabel(this, v30);
}


// attributes: thunk
void __fastcall EventTradeSweetsNumConfirmDialogComponent__Update(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  EventTradeSweetsNumConfirmDialogComponent__UpdateDraw(this, method);
}


void __fastcall EventTradeSweetsNumConfirmDialogComponent__UpdateDraw(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *eventItemMakeNum; // x20
  System_String_o *v4; // x21
  Il2CppObject *v5; // x0
  int64_t Time; // x0
  const MethodInfo *v7; // x1
  struct EventTradeInfo_o *eventTradeInfo; // x8
  int32_t tradeNum; // w25
  EventTradeGoodsEntity_o *tradeGoodsEntity; // x20
  int64_t startedAt; // x21
  const MethodInfo *v12; // x5
  struct EventTradeInfo_o *v13; // x8
  int64_t v14; // x22
  int32_t v15; // w23
  int v16; // w23
  EventTradeGoodsEntity_o *v17; // x20
  int32_t TradeMaxNum; // w20
  const MethodInfo *v19; // x1
  int32_t ItemSliderMax; // w21
  int32_t v21; // w0
  int32_t v22; // w20
  int32_t makeCount; // w21
  UISliderWithButton_o *itemSlider; // x8
  int32_t max; // w20
  const MethodInfo *v26; // x1

  if ( (byte_4BD752E & 1) == 0 )
  {
    sub_1C21E38(&EventTradeTimeCalculation_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_8965/*"MULTIPLE_INFO"*/);
    byte_4BD752E = 1;
  }
  EventTradeSweetsNumConfirmDialogComponent__SetTimeLabel(this, method);
  eventItemMakeNum = this->fields.eventItemMakeNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8965/*"MULTIPLE_INFO"*/, 0LL);
  v5 = (Il2CppObject *)System_Int32__ToString((int)this + 312, 0LL);
  Time = (int64_t)System_String__Format(v4, v5, 0LL);
  if ( !eventItemMakeNum )
    goto LABEL_35;
  UILabel__set_text(eventItemMakeNum, (System_String_o *)Time, 0LL);
  if ( this->fields.isReplenishment )
  {
    eventTradeInfo = this->fields.eventTradeInfo;
    if ( !eventTradeInfo )
      goto LABEL_35;
    tradeNum = eventTradeInfo->fields.tradeNum;
    tradeGoodsEntity = this->fields.tradeGoodsEntity;
    startedAt = eventTradeInfo->fields.startedAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    v13 = this->fields.eventTradeInfo;
    if ( !v13 )
      goto LABEL_35;
    v14 = Time;
    v15 = v13->fields.tradeNum;
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    v16 = EventTradeTimeCalculation__GetCompleteNum_31671916(tradeGoodsEntity, startedAt, v14, v15, 0, v12) - tradeNum;
  }
  else
  {
    v16 = 0;
  }
  v17 = this->fields.tradeGoodsEntity;
  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
  TradeMaxNum = EventTradeTimeCalculation__GetTradeMaxNum(v17, v7);
  ItemSliderMax = EventTradeSweetsNumConfirmDialogComponent__GetItemSliderMax(this, v19);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v21 = System_Math__Min_63934948(TradeMaxNum + v16, ItemSliderMax, 0LL);
  if ( this->fields.max != v21 )
  {
    this->fields.max = v21;
    v22 = v21;
    makeCount = this->fields.makeCount;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    Time = System_Math__Min_63934948(v22, makeCount, 0LL);
    itemSlider = this->fields.itemSlider;
    this->fields.makeCount = Time;
    if ( itemSlider )
    {
      UISliderWithButton__init(itemSlider, Time, 1, 1, 0LL);
      max = this->fields.max;
      if ( max )
      {
        Time = (int64_t)this->fields.itemSlider;
        if ( Time )
        {
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( Time )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
            Time = (int64_t)this->fields.itemSlider;
            if ( Time )
            {
              if ( max == 1 )
                UISliderWithButton__grayMode((UISliderWithButton_o *)Time, 0LL);
              else
                UISliderWithButton__normalMode((UISliderWithButton_o *)Time, 0LL);
              goto LABEL_34;
            }
          }
        }
      }
      else
      {
        Time = (int64_t)this->fields.itemSlider;
        if ( Time )
        {
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
          if ( Time )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
            Time = (int64_t)this->fields.decideButton;
            if ( Time )
            {
              (*(void (__fastcall **)(int64_t, _QWORD, _QWORD))(*(_QWORD *)Time + 392LL))(
                Time,
                0LL,
                *(_QWORD *)(*(_QWORD *)Time + 400LL));
LABEL_34:
              EventTradeSweetsNumConfirmDialogComponent__SetExchangeBase(this, v26);
              return;
            }
          }
        }
      }
    }
LABEL_35:
    sub_1C22094(Time, v7);
  }
}


void __fastcall EventTradeSweetsNumConfirmDialogComponent___Close_b__48_0(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventTradeSweetsNumConfirmDialogComponent__Init(this, this->fields.eventId, v2);
}


UnityEngine_GameObject_o *__fastcall EventTradeSweetsNumConfirmDialogComponent__get_closeBtnObject(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4BD7534 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7534 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C22094(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}