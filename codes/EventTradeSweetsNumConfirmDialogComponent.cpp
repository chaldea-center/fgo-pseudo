void EventTradeSweetsNumConfirmDialogComponent___ctor(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2B2BB & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2B2BB = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventTradeSweetsNumConfirmDialogComponent__CallOnDecide(
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
    this->fields.onDecide = 0;
    v4 = sub_1C93A78(&this->fields.onDecide, 0);
    tradeGoodsEntity = this->fields.tradeGoodsEntity;
    if ( !tradeGoodsEntity )
      sub_1C93D2C(v4, v5);
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, _QWORD, intptr_t))onDecide->fields.invoke_impl)(
      onDecide->fields.method_code,
      (unsigned int)this->fields.storeIdx,
      (unsigned int)tradeGoodsEntity->fields.id,
      (unsigned int)this->fields.makeCount,
      onDecide->fields.method);
  }
}


void EventTradeSweetsNumConfirmDialogComponent__Close(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4D2B2B7 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventTradeSweetsNumConfirmDialogComponent__Close_b__48_0__);
    byte_4D2B2B7 = 1;
  }
  this->fields.state = 4;
  v3 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_EventTradeSweetsNumConfirmDialogComponent__Close_b__48_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0);
}


void EventTradeSweetsNumConfirmDialogComponent__EndOpen(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


int32_t EventTradeSweetsNumConfirmDialogComponent__GetItemSliderMax(
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

  if ( (byte_4D2B2B3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2B2B3 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserItemMaster___);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
LABEL_32:
    sub_1C93D2C(Master_object, v4);
  max = this->fields.max;
  v7 = Master_object;
  v8 = 0;
  while ( (int)v8 < SLODWORD(exchangeOriginItemList->max_length) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2A55B )
    {
      sub_1C93AD4(&NetworkManager_TypeInfo);
      byte_4D2A55B = 1;
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
    if ( (unsigned int)v8 >= LODWORD(v9->max_length) )
      goto LABEL_34;
    v10 = v9->m_Items[v8];
    if ( !v10 || !v7 )
      goto LABEL_32;
    Master_object = (UserItemMaster_o *)UserItemMaster__TryGetEntity(
                                          v7,
                                          &entity,
                                          (int64_t)Master_object[2].fields.list[1].monitor,
                                          v10->fields.objectId,
                                          0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_32;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_32;
      if ( (unsigned int)v8 >= LODWORD(exchangeOriginItemList->max_length) )
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
      if ( (unsigned int)v8 >= LODWORD(isShortage->max_length) )
        goto LABEL_34;
      isShortage->m_Items[v8] = v13 > num;
    }
    else
    {
      v15 = this->fields.isShortage;
      if ( !v15 )
        goto LABEL_32;
      if ( (unsigned int)v8 >= LODWORD(v15->max_length) )
LABEL_34:
        sub_1C93D34(Master_object);
      v15->m_Items[v8] = 1;
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      max = 0;
    }
    ++v8;
    if ( !exchangeOriginItemList )
      goto LABEL_32;
  }
  return max;
}


// local variable allocation has failed, the output may be wrong!
void EventTradeSweetsNumConfirmDialogComponent__Init(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  EventTradeListViewItemManager__CheckIsSerializeFieldNotNull((Il2CppObject *)this, *(const MethodInfo **)&eventId);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  this->fields.tradeGoodsEntity = 0;
  sub_1C93A78(&this->fields.tradeGoodsEntity, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventTradeSweetsNumConfirmDialogComponent__InitItemSlider(
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
      itemSlider = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(itemSlider, 0);
      if ( itemSlider )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemSlider, 0, 0);
        itemSlider = (UnityEngine_Component_o *)this->fields.decideButton;
        if ( itemSlider )
        {
          ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, const char *))itemSlider->klass[1]._1.name)(
            itemSlider,
            0,
            itemSlider->klass[1]._1.namespaze);
          return;
        }
      }
    }
    goto LABEL_15;
  }
  itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_15;
  itemSlider = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(itemSlider, 0);
  if ( !itemSlider )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemSlider, 1, 0);
  itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_15;
  if ( makeCount != 1 )
  {
    UISliderWithButton__normalMode((UISliderWithButton_o *)itemSlider, 0);
    itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
    if ( itemSlider )
    {
      v5 = this->fields.makeCount;
      v6 = 1;
      goto LABEL_14;
    }
LABEL_15:
    sub_1C93D2C(itemSlider, method);
  }
  UISliderWithButton__grayMode((UISliderWithButton_o *)itemSlider, 0);
  itemSlider = (UnityEngine_Component_o *)this->fields.itemSlider;
  if ( !itemSlider )
    goto LABEL_15;
  v5 = this->fields.makeCount;
  v6 = 0;
LABEL_14:
  UISliderWithButton__init((UISliderWithButton_o *)itemSlider, v5, v6, 1, 0);
}


int32_t EventTradeSweetsNumConfirmDialogComponent__MakeCountAtLeast1(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        int32_t makeCount,
        const MethodInfo *method)
{
  if ( makeCount <= 1 )
    return 1;
  else
    return makeCount;
}


void EventTradeSweetsNumConfirmDialogComponent__OnClickCancel(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4D2B2B6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__);
    byte_4D2B2B6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_EventTradeSweetsNumConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1C93D2C(0, v5);
    UISliderWithButton__grayMode(itemSlider, 0);
    EventTradeSweetsNumConfirmDialogComponent__Close(this, v7);
  }
}


void EventTradeSweetsNumConfirmDialogComponent__OnClickDecide(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4D2B2B5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__);
    byte_4D2B2B5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_EventTradeSweetsNumConfirmDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    EventTradeSweetsNumConfirmDialogComponent__CallOnDecide(this, v5);
  }
}


void EventTradeSweetsNumConfirmDialogComponent__Open(
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
  struct EventTradeGoodsEntity_o *v40; // x8
  int32_t eventId; // w21
  UISprite_o *eventItemIcon; // x22
  Il2CppObject *v43; // x0
  System_String_o *v44; // x23
  UILabel_o *eventItemMakeNum; // x21
  System_String_o *v46; // x22
  Il2CppObject *v47; // x0
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x1
  System_Action_o *v50; // x20
  int32_t goodsIconId; // [xsp+Ch] [xbp-54h] BYREF

  v10 = this;
  if ( (byte_4D2B2B0 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&bool___TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_EventTradeSweetsNumConfirmDialogComponent_EndOpen__);
    sub_1C93AD4(&EventTradeTimeCalculation_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&System_Math_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_13569/*"TRADE_EVENT_CONFIRM_DIALOG_TITLE"*/);
    sub_1C93AD4(&StringLiteral_20477/*"icon_{0}"*/);
    sub_1C93AD4(&StringLiteral_13566/*"TRADE_EVENT_CONFIRM_DIALOG_EXECUTE"*/);
    sub_1C93AD4(&StringLiteral_8869/*"MULTIPLE_INFO"*/);
    sub_1C93AD4(&StringLiteral_13585/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DESCRIPTION"*/);
    sub_1C93AD4(&StringLiteral_3706/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_13587/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_TITLE"*/);
    this = (EventTradeSweetsNumConfirmDialogComponent_o *)sub_1C93AD4(&StringLiteral_13564/*"TRADE_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/);
    byte_4D2B2B0 = 1;
  }
  if ( !v10->fields.state )
  {
    if ( item )
    {
      TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
      p_tradeGoodsEntity = &v10->fields.tradeGoodsEntity;
      v10->fields.tradeGoodsEntity = TradeGoodsEntity_k__BackingField;
      sub_1C93A78(&v10->fields.tradeGoodsEntity, TradeGoodsEntity_k__BackingField);
      v10->fields.onDecide = onDecide;
      sub_1C93A78(&v10->fields.onDecide, onDecide);
      v10->fields.storeIdx = storeIdx;
      v10->fields.isReplenishment = isReplenishment;
      v13 = isReplenishment ? item->fields._TradeInfo_k__BackingField : 0LL;
      p_eventTradeInfo = &v10->fields.eventTradeInfo;
      v10->fields.eventTradeInfo = v13;
      sub_1C93A78(&v10->fields.eventTradeInfo, v13);
      this = (EventTradeSweetsNumConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)v10,
                                                              0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        titleLabel = v10->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v16 = (System_String_o **)&StringLiteral_13587/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_TITLE"*/;
        if ( !isReplenishment )
          v16 = (System_String_o **)&StringLiteral_13569/*"TRADE_EVENT_CONFIRM_DIALOG_TITLE"*/;
        this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(*v16, 0);
        if ( titleLabel )
        {
          UILabel__set_text(titleLabel, (System_String_o *)this, 0);
          detailLabel = v10->fields.detailLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v18 = (System_String_o **)&StringLiteral_13585/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_DESCRIPTION"*/;
          if ( !isReplenishment )
            v18 = (System_String_o **)&StringLiteral_13564/*"TRADE_EVENT_CONFIRM_DIALOG_DESCRIPTION"*/;
          this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(*v18, 0);
          if ( detailLabel )
          {
            UILabel__set_text(detailLabel, (System_String_o *)this, 0);
            cancelButtonLb = v10->fields.cancelButtonLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_3706/*"COMMON_CONFIRM_CANCEL"*/,
                                                                    0);
            if ( cancelButtonLb )
            {
              UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0);
              decideButtonLb = v10->fields.decideButtonLb;
              this = (EventTradeSweetsNumConfirmDialogComponent_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_13566/*"TRADE_EVENT_CONFIRM_DIALOG_EXECUTE"*/,
                                                                      0);
              if ( decideButtonLb )
              {
                UILabel__set_text(decideButtonLb, (System_String_o *)this, 0);
                tradeGoodsEntity = v10->fields.tradeGoodsEntity;
                if ( tradeGoodsEntity )
                {
                  this = (EventTradeSweetsNumConfirmDialogComponent_o *)v10->fields.eventItemNameLabel;
                  if ( this )
                  {
                    UILabel__set_text((UILabel_o *)this, tradeGoodsEntity->fields.name, 0);
                    if ( !DataManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    this = (EventTradeSweetsNumConfirmDialogComponent_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
                    if ( *p_tradeGoodsEntity )
                    {
                      if ( this )
                      {
                        SortedEntityList = CommonConsumeMaster__GetSortedEntityList(
                                             (CommonConsumeMaster_o *)this,
                                             (*p_tradeGoodsEntity)->fields.commonConsumeId,
                                             0);
                        v10->fields.exchangeOriginItemList = SortedEntityList;
                        this = (EventTradeSweetsNumConfirmDialogComponent_o *)sub_1C93A78(
                                                                                &v10->fields.exchangeOriginItemList,
                                                                                SortedEntityList);
                        exchangeOriginItemList = v10->fields.exchangeOriginItemList;
                        if ( exchangeOriginItemList )
                        {
                          v24 = sub_1C93B7C(bool___TypeInfo, LODWORD(exchangeOriginItemList->max_length));
                          v10->fields.isShortage = (struct System_Boolean_array *)v24;
                          this = (EventTradeSweetsNumConfirmDialogComponent_o *)sub_1C93A78(
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
                            this = (EventTradeSweetsNumConfirmDialogComponent_o *)NetworkManager__getTime(0);
                            v30 = *p_eventTradeInfo;
                            if ( !*p_eventTradeInfo )
                              goto LABEL_51;
                            v31 = this;
                            v32 = v30->fields.tradeNum;
                            if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
                            v33 = EventTradeTimeCalculation__GetCompleteNum_33107288(
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
                          v38 = System_Math__Min_65947872(v35, ItemSliderMax, 0);
                          v10->fields.max = v38;
                          v10->fields.makeCount = v38;
                          EventTradeSweetsNumConfirmDialogComponent__InitItemSlider(v10, v39);
                          v40 = item->fields._TradeGoodsEntity_k__BackingField;
                          if ( v40 )
                          {
                            eventId = v10->fields.eventId;
                            eventItemIcon = v10->fields.eventItemIcon;
                            goodsIconId = v40->fields.goodsIconId;
                            v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &goodsIconId);
                            v44 = System_String__Format((System_String_o *)StringLiteral_20477/*"icon_{0}"*/, v43, 0);
                            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                            AtlasManager__SetEventUI_41320352(eventId, eventItemIcon, v44, 0);
                            eventItemMakeNum = v10->fields.eventItemMakeNum;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            v46 = LocalizationManager__Get((System_String_o *)StringLiteral_8869/*"MULTIPLE_INFO"*/, 0);
                            v47 = (Il2CppObject *)System_Int32__ToString((int)v10 + 320, 0);
                            this = (EventTradeSweetsNumConfirmDialogComponent_o *)System_String__Format(v46, v47, 0);
                            if ( eventItemMakeNum )
                            {
                              UILabel__set_text(eventItemMakeNum, (System_String_o *)this, 0);
                              EventTradeSweetsNumConfirmDialogComponent__SetExchangeBase(v10, v48);
                              EventTradeSweetsNumConfirmDialogComponent__SetTimeLabel(v10, v49);
                              v10->fields.state = 1;
                              v50 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
                              System_Action___ctor(
                                v50,
                                (Il2CppObject *)v10,
                                Method_EventTradeSweetsNumConfirmDialogComponent_EndOpen__,
                                0);
                              BaseDialog__Open((BaseDialog_o *)v10, v50, 0, 0, 0);
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
    sub_1C93D2C(this, item);
  }
}


void EventTradeSweetsNumConfirmDialogComponent__SetExchangeBase(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *exchangeOriginLb; // x20
  CommonConsumeEntity_o *NumberFormat; // x0
  __int64 v5; // x1
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  il2cpp_array_size_t max_length; // x9
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
  unsigned int v26; // w25
  struct UISprite_array *exchangeOriginItemIcon2; // x10
  CommonConsumeEntity_o *v28; // x8
  UISprite_o *v29; // x20
  int32_t v30; // w21
  struct CommonConsumeEntity_array *v31; // x8
  CommonConsumeEntity_o *v32; // x8
  int32_t v33; // w20
  int32_t v34; // w21
  struct CommonConsumeEntity_array *v35; // x8
  Il2CppObject *v36; // x20
  int32_t v37; // w0
  struct UILabel_array *exchangeOriginCounts2; // x8
  Il2CppObject *v39; // x21
  UILabel_o *v40; // x22
  System_String_o *v41; // x0
  struct UILabel_array *v42; // x8
  struct System_Boolean_array *v43; // x9
  UILabel_o *exchangeDestinationLb; // x20
  struct EventTradeGoodsEntity_o *tradeGoodsEntity; // x8
  GiftEntity_array *GiftListById; // x20
  GiftEntity_o *v47; // x8
  UISprite_o *exchangeDestinationItemIcon; // x20
  int32_t klass; // w21
  struct EventTradeGoodsEntity_o *v50; // x8
  const MethodInfo *v51; // x1
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2B2B4 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_13568/*"TRADE_EVENT_CONFIRM_DIALOG_ORIGIN_LABEL"*/);
    sub_1C93AD4(&StringLiteral_13567/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/);
    sub_1C93AD4(&StringLiteral_13565/*"TRADE_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/);
    byte_4D2B2B4 = 1;
  }
  exchangeOriginLb = this->fields.exchangeOriginLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13568/*"TRADE_EVENT_CONFIRM_DIALOG_ORIGIN_LABEL"*/, 0);
  if ( !exchangeOriginLb )
    goto LABEL_93;
  UILabel__set_text(exchangeOriginLb, (System_String_o *)NumberFormat, 0);
  exchangeOriginItemList = this->fields.exchangeOriginItemList;
  if ( !exchangeOriginItemList )
    goto LABEL_93;
  max_length = exchangeOriginItemList->max_length;
  if ( (_DWORD)max_length == 3 )
  {
    v8 = 0;
    do
    {
      exchangeOriginItemIcon = this->fields.exchangeOriginItemIcon;
      if ( !exchangeOriginItemIcon )
        goto LABEL_93;
      if ( (unsigned int)v8 >= LODWORD(exchangeOriginItemIcon->max_length) || v8 >= (unsigned int)max_length )
        goto LABEL_94;
      v10 = exchangeOriginItemList->m_Items[v8];
      if ( !v10 )
        goto LABEL_93;
      v11 = exchangeOriginItemIcon->m_Items[v8];
      objectId = v10->fields.objectId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      NumberFormat = (CommonConsumeEntity_o *)AtlasManager__SetItem(v11, objectId, 0);
      v13 = this->fields.exchangeOriginItemList;
      if ( !v13 )
        goto LABEL_93;
      if ( (unsigned int)v8 >= LODWORD(v13->max_length) )
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
      NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(makeCount * num, 0);
      v17 = this->fields.exchangeOriginItemList;
      if ( !v17 )
        goto LABEL_93;
      if ( (unsigned int)v8 >= LODWORD(v17->max_length) )
        goto LABEL_94;
      v18 = (Il2CppObject *)NumberFormat;
      NumberFormat = v17->m_Items[v8];
      if ( !NumberFormat )
        goto LABEL_93;
      HasNum = CommonConsumeEntity__GetUserHasNum(NumberFormat, 0);
      NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(HasNum, 0);
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_93;
      if ( (unsigned int)v8 >= LODWORD(exchangeOriginCounts->max_length) )
        goto LABEL_94;
      v21 = (Il2CppObject *)NumberFormat;
      v22 = exchangeOriginCounts->m_Items[v8];
      v23 = LocalizationManager__Get((System_String_o *)StringLiteral_13567/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0);
      NumberFormat = (CommonConsumeEntity_o *)System_String__Format_64467032(v23, v18, v21, 0);
      if ( !v22 )
        goto LABEL_93;
      UILabel__set_text(v22, (System_String_o *)NumberFormat, 0);
      v24 = this->fields.exchangeOriginCounts;
      if ( !v24 )
        goto LABEL_93;
      if ( (unsigned int)v8 >= LODWORD(v24->max_length) )
        goto LABEL_94;
      isShortage = this->fields.isShortage;
      if ( !isShortage )
        goto LABEL_93;
      if ( (unsigned int)v8 >= LODWORD(isShortage->max_length) )
        goto LABEL_94;
      NumberFormat = (CommonConsumeEntity_o *)v24->m_Items[v8];
      v52.fields.g = isShortage->m_Items[v8] ? 0.0 : 1.0;
      if ( !NumberFormat )
        goto LABEL_93;
      v52.fields.r = 1.0;
      v52.fields.a = 1.0;
      v52.fields.b = v52.fields.g;
      UIWidget__set_color((UIWidget_o *)NumberFormat, v52, 0);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_93;
      LODWORD(max_length) = exchangeOriginItemList->max_length;
      ++v8;
    }
    while ( v8 < (int)max_length );
    NumberFormat = (CommonConsumeEntity_o *)this->fields.exchangeOriginDisplayObject;
    if ( !NumberFormat )
      goto LABEL_93;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0);
    NumberFormat = (CommonConsumeEntity_o *)this->fields.exchangeOriginDisplayObject2;
    if ( !NumberFormat )
      goto LABEL_93;
  }
  else
  {
    if ( (int)max_length >= 1 )
    {
      v26 = 0;
      while ( 1 )
      {
        exchangeOriginItemIcon2 = this->fields.exchangeOriginItemIcon2;
        if ( !exchangeOriginItemIcon2 )
          break;
        if ( v26 >= LODWORD(exchangeOriginItemIcon2->max_length) || v26 >= (unsigned int)max_length )
          goto LABEL_94;
        v28 = exchangeOriginItemList->m_Items[v26];
        if ( !v28 )
          break;
        v29 = exchangeOriginItemIcon2->m_Items[v26];
        v30 = v28->fields.objectId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        NumberFormat = (CommonConsumeEntity_o *)AtlasManager__SetItem(v29, v30, 0);
        v31 = this->fields.exchangeOriginItemList;
        if ( !v31 )
          break;
        if ( v26 >= LODWORD(v31->max_length) )
          goto LABEL_94;
        v32 = v31->m_Items[v26];
        if ( !v32 )
          break;
        v33 = v32->fields.num;
        if ( this->fields.makeCount <= 1 )
          v34 = 1;
        else
          v34 = this->fields.makeCount;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(v34 * v33, 0);
        v35 = this->fields.exchangeOriginItemList;
        if ( !v35 )
          break;
        if ( v26 >= LODWORD(v35->max_length) )
          goto LABEL_94;
        v36 = (Il2CppObject *)NumberFormat;
        NumberFormat = v35->m_Items[v26];
        if ( !NumberFormat )
          break;
        v37 = CommonConsumeEntity__GetUserHasNum(NumberFormat, 0);
        NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(v37, 0);
        exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
        if ( !exchangeOriginCounts2 )
          break;
        if ( v26 >= LODWORD(exchangeOriginCounts2->max_length) )
          goto LABEL_94;
        v39 = (Il2CppObject *)NumberFormat;
        v40 = exchangeOriginCounts2->m_Items[v26];
        v41 = LocalizationManager__Get((System_String_o *)StringLiteral_13567/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0);
        NumberFormat = (CommonConsumeEntity_o *)System_String__Format_64467032(v41, v36, v39, 0);
        if ( !v40 )
          break;
        UILabel__set_text(v40, (System_String_o *)NumberFormat, 0);
        v42 = this->fields.exchangeOriginCounts2;
        if ( !v42 )
          break;
        if ( v26 >= LODWORD(v42->max_length) )
          goto LABEL_94;
        v43 = this->fields.isShortage;
        if ( !v43 )
          break;
        if ( v26 >= LODWORD(v43->max_length) )
          goto LABEL_94;
        NumberFormat = (CommonConsumeEntity_o *)v42->m_Items[v26];
        v53.fields.g = v43->m_Items[v26] ? 0.0 : 1.0;
        if ( !NumberFormat )
          break;
        v53.fields.r = 1.0;
        v53.fields.a = 1.0;
        v53.fields.b = v53.fields.g;
        UIWidget__set_color((UIWidget_o *)NumberFormat, v53, 0);
        exchangeOriginItemList = this->fields.exchangeOriginItemList;
        if ( !exchangeOriginItemList )
          break;
        LODWORD(max_length) = exchangeOriginItemList->max_length;
        if ( (int)++v26 >= (int)max_length )
          goto LABEL_74;
      }
LABEL_93:
      sub_1C93D2C(NumberFormat, v5);
    }
LABEL_74:
    NumberFormat = (CommonConsumeEntity_o *)this->fields.exchangeOriginDisplayObject2;
    if ( !NumberFormat )
      goto LABEL_93;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 1, 0);
    NumberFormat = (CommonConsumeEntity_o *)this->fields.exchangeOriginDisplayObject;
    if ( !NumberFormat )
      goto LABEL_93;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormat, 0, 0);
  exchangeDestinationLb = this->fields.exchangeDestinationLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = (CommonConsumeEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13565/*"TRADE_EVENT_CONFIRM_DIALOG_DESTINATION_LABEL"*/, 0);
  if ( !exchangeDestinationLb )
    goto LABEL_93;
  UILabel__set_text(exchangeDestinationLb, (System_String_o *)NumberFormat, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  NumberFormat = (CommonConsumeEntity_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GiftMaster___);
  tradeGoodsEntity = this->fields.tradeGoodsEntity;
  if ( !tradeGoodsEntity )
    goto LABEL_93;
  if ( !NumberFormat )
    goto LABEL_93;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)NumberFormat, tradeGoodsEntity->fields.giftId, 0);
  NumberFormat = (CommonConsumeEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !NumberFormat )
    goto LABEL_93;
  NumberFormat = (CommonConsumeEntity_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)NumberFormat,
                                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !GiftListById )
    goto LABEL_93;
  if ( !LODWORD(GiftListById->max_length) )
LABEL_94:
    sub_1C93D34(NumberFormat);
  v47 = GiftListById->m_Items[0];
  if ( !v47 )
    goto LABEL_93;
  if ( !NumberFormat )
    goto LABEL_93;
  NumberFormat = (CommonConsumeEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)NumberFormat,
                                            v47->fields.objectId,
                                            (const MethodInfo_3463274 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  if ( !NumberFormat )
    goto LABEL_93;
  exchangeDestinationItemIcon = this->fields.exchangeDestinationItemIcon;
  klass = (int32_t)NumberFormat[1].klass;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  NumberFormat = (CommonConsumeEntity_o *)AtlasManager__SetItem(exchangeDestinationItemIcon, klass, 0);
  v50 = this->fields.tradeGoodsEntity;
  if ( !v50 )
    goto LABEL_93;
  AtlasManager__SetItem(this->fields.exchangeDestinationPointIcon, v50->fields.eventPointItemId, 0);
  EventTradeSweetsNumConfirmDialogComponent__SetRewardCount(this, v51);
}


void EventTradeSweetsNumConfirmDialogComponent__SetRewardCount(
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

  if ( (byte_4D2B2BA & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_8869/*"MULTIPLE_INFO"*/);
    sub_1C93AD4(&StringLiteral_13586/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/);
    byte_4D2B2BA = 1;
  }
  isReplenishment = this->fields.isReplenishment;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8869/*"MULTIPLE_INFO"*/, 0);
  if ( isReplenishment )
  {
    exchangeDestinationPointCount = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13586/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/, 0);
    eventTradeInfo = this->fields.eventTradeInfo;
    if ( eventTradeInfo )
    {
      v8 = (System_String_o *)exchangeDestinationPointCount;
      NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat(eventTradeInfo->fields.tradeNum, 0);
      v10 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
      v11 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v10, 0);
      v12 = (Il2CppObject *)System_String__Format_64467032(v8, NumberFormat, v11, 0);
      v13 = System_String__Format(v4, v12, 0);
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_8869/*"MULTIPLE_INFO"*/, 0);
      exchangeDestinationPointCount = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13586/*"TRADE_EVENT_REPLENISHMENT_CONFIRM_DIALOG_INFO"*/, 0);
      tradeGoodsEntity = this->fields.tradeGoodsEntity;
      if ( tradeGoodsEntity )
      {
        v16 = this->fields.eventTradeInfo;
        if ( v16 )
        {
          v17 = (System_String_o *)exchangeDestinationPointCount;
          exchangeDestinationPointCount = (UILabel_o *)LocalizationManager__GetNumberFormat(
                                                         v16->fields.tradeNum * tradeGoodsEntity->fields.eventPointNum,
                                                         0);
          v18 = this->fields.tradeGoodsEntity;
          if ( v18 )
          {
            makeCount = this->fields.makeCount;
            eventPointNum = v18->fields.eventPointNum;
            v21 = (Il2CppObject *)exchangeDestinationPointCount;
            if ( makeCount <= 1 )
              makeCount = 1;
            v22 = (Il2CppObject *)LocalizationManager__GetNumberFormat(makeCount * eventPointNum, 0);
            v23 = (Il2CppObject *)System_String__Format_64467032(v17, v21, v22, 0);
            goto LABEL_23;
          }
        }
      }
    }
LABEL_26:
    sub_1C93D2C(exchangeDestinationPointCount, v6);
  }
  if ( this->fields.makeCount <= 1 )
    v24 = 1;
  else
    v24 = this->fields.makeCount;
  v25 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v24, 0);
  v13 = System_String__Format(v4, v25, 0);
  exchangeDestinationPointCount = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8869/*"MULTIPLE_INFO"*/, 0);
  v26 = this->fields.tradeGoodsEntity;
  if ( !v26 )
    goto LABEL_26;
  v27 = this->fields.makeCount;
  v28 = v26->fields.eventPointNum;
  v14 = (System_String_o *)exchangeDestinationPointCount;
  if ( v27 <= 1 )
    v27 = 1;
  v23 = (Il2CppObject *)LocalizationManager__GetNumberFormat(v27 * v28, 0);
LABEL_23:
  exchangeDestinationPointCount = (UILabel_o *)System_String__Format(v14, v23, 0);
  if ( !this->fields.exchangeDestinationItemCount )
    goto LABEL_26;
  v29 = (System_String_o *)exchangeDestinationPointCount;
  UILabel__set_text(this->fields.exchangeDestinationItemCount, v13, 0);
  exchangeDestinationPointCount = this->fields.exchangeDestinationPointCount;
  if ( !exchangeDestinationPointCount )
    goto LABEL_26;
  UILabel__set_text(exchangeDestinationPointCount, v29, 0);
}


void EventTradeSweetsNumConfirmDialogComponent__SetTimeLabel(
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
  if ( (byte_4D2B2B1 & 1) == 0 )
  {
    sub_1C93AD4(&EventTradeTimeCalculation_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&System_Math_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_13557/*"TRADE_EVENT_ADD_TIME_LABEL"*/);
    sub_1C93AD4(&StringLiteral_13563/*"TRADE_EVENT_COMPLETION_TIME_LABEL"*/);
    this = (EventTradeSweetsNumConfirmDialogComponent_o *)sub_1C93AD4(&StringLiteral_25369/*"{0,2}:{1:D2}:{2:D2}"*/);
    byte_4D2B2B1 = 1;
  }
  if ( !v3->fields.isReplenishment )
  {
    tradeCompletionTimeLabel = v3->fields.tradeCompletionTimeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_13563/*"TRADE_EVENT_COMPLETION_TIME_LABEL"*/, 0);
    tradeGoodsEntity = v3->fields.tradeGoodsEntity;
    makeCount = v3->fields.makeCount;
    v29 = v25;
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    TradeFinishTime = EventTradeTimeCalculation__GetTradeFinishTime(tradeGoodsEntity, makeCount, -1, v26);
    RestTimeInFormat = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(
                                         TradeFinishTime,
                                         0,
                                         (System_String_o *)StringLiteral_25369/*"{0,2}:{1:D2}:{2:D2}"*/,
                                         0);
    this = (EventTradeSweetsNumConfirmDialogComponent_o *)System_String__Format(v29, RestTimeInFormat, 0);
    if ( tradeCompletionTimeLabel )
    {
      v22 = this;
      v23 = tradeCompletionTimeLabel;
      goto LABEL_22;
    }
LABEL_23:
    sub_1C93D2C(this, method);
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
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_13563/*"TRADE_EVENT_COMPLETION_TIME_LABEL"*/, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v16 = System_Math__Max_65947556((int64_t)&v10[-Time], 0, 0);
  v17 = LocalizationManager__GetRestTimeInFormat(v16 + v13, 0, (System_String_o *)StringLiteral_25369/*"{0,2}:{1:D2}:{2:D2}"*/, 0);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_13557/*"TRADE_EVENT_ADD_TIME_LABEL"*/, 0);
  v19 = (Il2CppObject *)LocalizationManager__GetRestTimeInFormat(v13, 0, (System_String_o *)StringLiteral_25369/*"{0,2}:{1:D2}:{2:D2}"*/, 0);
  v20 = System_String__Format(v18, v19, 0);
  v21 = (Il2CppObject *)System_String__Concat_64425724(v17, v20, 0);
  this = (EventTradeSweetsNumConfirmDialogComponent_o *)System_String__Format(v14, v21, 0);
  if ( !v12 )
    goto LABEL_23;
  v22 = this;
  v23 = v12;
LABEL_22:
  UILabel__set_text(v23, (System_String_o *)v22, 0);
}


void EventTradeSweetsNumConfirmDialogComponent__SliderValueChange(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  CommonConsumeEntity_o *itemSlider; // x0
  struct CommonConsumeEntity_array *exchangeOriginItemList; // x8
  il2cpp_array_size_t max_length; // x9
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

  if ( (byte_4D2B2B9 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_13567/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/);
    byte_4D2B2B9 = 1;
  }
  itemSlider = (CommonConsumeEntity_o *)this->fields.itemSlider;
  if ( !itemSlider
    || (itemSlider = (CommonConsumeEntity_o *)UISliderWithButton__sliderValueChange(
                                                (UISliderWithButton_o *)itemSlider,
                                                0),
        exchangeOriginItemList = this->fields.exchangeOriginItemList,
        this->fields.makeCount = (int)itemSlider,
        !exchangeOriginItemList) )
  {
LABEL_41:
    sub_1C93D2C(itemSlider, method);
  }
  max_length = exchangeOriginItemList->max_length;
  if ( (_DWORD)max_length == 3 )
  {
    v6 = 0;
    while ( v6 < (unsigned int)max_length )
    {
      v7 = v6;
      v8 = exchangeOriginItemList->m_Items[v6];
      if ( !v8 )
        goto LABEL_41;
      num = v8->fields.num;
      v10 = this->fields.makeCount <= 1 ? 1 : this->fields.makeCount;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      itemSlider = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(v10 * num, 0);
      v11 = this->fields.exchangeOriginItemList;
      if ( !v11 )
        goto LABEL_41;
      if ( (unsigned int)v7 >= LODWORD(v11->max_length) )
        goto LABEL_42;
      v12 = (Il2CppObject *)itemSlider;
      itemSlider = v11->m_Items[v7];
      if ( !itemSlider )
        goto LABEL_41;
      HasNum = CommonConsumeEntity__GetUserHasNum(itemSlider, 0);
      itemSlider = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(HasNum, 0);
      exchangeOriginCounts = this->fields.exchangeOriginCounts;
      if ( !exchangeOriginCounts )
        goto LABEL_41;
      if ( (unsigned int)v7 >= LODWORD(exchangeOriginCounts->max_length) )
        goto LABEL_42;
      v15 = (Il2CppObject *)itemSlider;
      v16 = exchangeOriginCounts->m_Items[v7];
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_13567/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0);
      itemSlider = (CommonConsumeEntity_o *)System_String__Format_64467032(v17, v12, v15, 0);
      if ( !v16 )
        goto LABEL_41;
      UILabel__set_text(v16, (System_String_o *)itemSlider, 0);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_41;
      LODWORD(max_length) = exchangeOriginItemList->max_length;
      v6 = v7 + 1;
      if ( (int)v7 + 1 >= (int)max_length )
        goto LABEL_40;
    }
    goto LABEL_42;
  }
  if ( (int)max_length >= 1 )
  {
    v18 = 0;
    while ( v18 < (unsigned int)max_length )
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
      itemSlider = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(makeCount * v21, 0);
      v23 = this->fields.exchangeOriginItemList;
      if ( !v23 )
        goto LABEL_41;
      if ( (unsigned int)v19 >= LODWORD(v23->max_length) )
        break;
      v24 = (Il2CppObject *)itemSlider;
      itemSlider = v23->m_Items[v19];
      if ( !itemSlider )
        goto LABEL_41;
      v25 = CommonConsumeEntity__GetUserHasNum(itemSlider, 0);
      itemSlider = (CommonConsumeEntity_o *)LocalizationManager__GetNumberFormat(v25, 0);
      exchangeOriginCounts2 = this->fields.exchangeOriginCounts2;
      if ( !exchangeOriginCounts2 )
        goto LABEL_41;
      if ( (unsigned int)v19 >= LODWORD(exchangeOriginCounts2->max_length) )
        break;
      v27 = (Il2CppObject *)itemSlider;
      v28 = exchangeOriginCounts2->m_Items[v19];
      v29 = LocalizationManager__Get((System_String_o *)StringLiteral_13567/*"TRADE_EVENT_CONFIRM_DIALOG_KIND"*/, 0);
      itemSlider = (CommonConsumeEntity_o *)System_String__Format_64467032(v29, v24, v27, 0);
      if ( !v28 )
        goto LABEL_41;
      UILabel__set_text(v28, (System_String_o *)itemSlider, 0);
      exchangeOriginItemList = this->fields.exchangeOriginItemList;
      if ( !exchangeOriginItemList )
        goto LABEL_41;
      LODWORD(max_length) = exchangeOriginItemList->max_length;
      v18 = v19 + 1;
      if ( (int)v19 + 1 >= (int)max_length )
        goto LABEL_40;
    }
LABEL_42:
    sub_1C93D34(itemSlider);
  }
LABEL_40:
  EventTradeSweetsNumConfirmDialogComponent__SetRewardCount(this, method);
  EventTradeSweetsNumConfirmDialogComponent__SetTimeLabel(this, v30);
}


// attributes: thunk
void EventTradeSweetsNumConfirmDialogComponent__Update(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  EventTradeSweetsNumConfirmDialogComponent__UpdateDraw(this, method);
}


void EventTradeSweetsNumConfirmDialogComponent__UpdateDraw(
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

  if ( (byte_4D2B2B2 & 1) == 0 )
  {
    sub_1C93AD4(&EventTradeTimeCalculation_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&System_Math_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_8869/*"MULTIPLE_INFO"*/);
    byte_4D2B2B2 = 1;
  }
  EventTradeSweetsNumConfirmDialogComponent__SetTimeLabel(this, method);
  eventItemMakeNum = this->fields.eventItemMakeNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_8869/*"MULTIPLE_INFO"*/, 0);
  v5 = (Il2CppObject *)System_Int32__ToString((int)this + 320, 0);
  Time = (int64_t)System_String__Format(v4, v5, 0);
  if ( !eventItemMakeNum )
    goto LABEL_35;
  UILabel__set_text(eventItemMakeNum, (System_String_o *)Time, 0);
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
    Time = NetworkManager__getTime(0);
    v13 = this->fields.eventTradeInfo;
    if ( !v13 )
      goto LABEL_35;
    v14 = Time;
    v15 = v13->fields.tradeNum;
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    v16 = EventTradeTimeCalculation__GetCompleteNum_33107288(tradeGoodsEntity, startedAt, v14, v15, 0, v12) - tradeNum;
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
  v21 = System_Math__Min_65947872(TradeMaxNum + v16, ItemSliderMax, 0);
  if ( this->fields.max != v21 )
  {
    this->fields.max = v21;
    v22 = v21;
    makeCount = this->fields.makeCount;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    Time = System_Math__Min_65947872(v22, makeCount, 0);
    itemSlider = this->fields.itemSlider;
    this->fields.makeCount = Time;
    if ( itemSlider )
    {
      UISliderWithButton__init(itemSlider, Time, 1, 1, 0);
      max = this->fields.max;
      if ( max )
      {
        Time = (int64_t)this->fields.itemSlider;
        if ( Time )
        {
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
          if ( Time )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
            Time = (int64_t)this->fields.itemSlider;
            if ( Time )
            {
              if ( max == 1 )
                UISliderWithButton__grayMode((UISliderWithButton_o *)Time, 0);
              else
                UISliderWithButton__normalMode((UISliderWithButton_o *)Time, 0);
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
          Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
          if ( Time )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
            Time = (int64_t)this->fields.decideButton;
            if ( Time )
            {
              (*(void (__fastcall **)(int64_t, _QWORD, _QWORD))(*(_QWORD *)Time + 392LL))(
                Time,
                0,
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
    sub_1C93D2C(Time, v7);
  }
}


void EventTradeSweetsNumConfirmDialogComponent___Close_b__48_0(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventTradeSweetsNumConfirmDialogComponent__Init(this, this->fields.eventId, v2);
}


UnityEngine_GameObject_o *EventTradeSweetsNumConfirmDialogComponent__get_closeBtnObject(
        EventTradeSweetsNumConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4D2B2B8 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B2B8 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C93D2C(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}